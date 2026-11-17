#define CINTERFACE
#define COBJMACROS
#include <d3d11.h>
#include <dxgi1_5.h>
#include <d3dcompiler.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <intrin.h>

#include "gpu_combiner.h"
#include "gpu_shader_jit.h"
#include "gpu_world.h"
#include "gpu_world_shader.h"
#include "gpu_vsh_shader.h"
#include "nv2a_world_backend.h"

enum {
    WIDTH = NV2A_WORLD_WIDTH, HEIGHT = NV2A_WORLD_HEIGHT,
    MAX_VERTICES = 6144, COLOR_SLOTS = 6, DEPTH_SLOTS = 4,
    TEXTURE_SLOTS = 256, SAMPLER_SLOTS = 48, BLEND_SLOTS = 48, STENCIL_STATES = 48,
    QUERY_SLOTS = 1024, REPORT_EVENTS = QUERY_SLOTS * 3, VISIBILITY_SLOTS = 4096
};

typedef struct {
    ID3D11Texture2D *texture;
    ID3D11RenderTargetView *target;
    ID3D11ShaderResourceView *view;
    uint32_t *host;
    uint32_t width, height, pitch;
    uint32_t tex_w, tex_h;
    int dirty;
    uint32_t rgb_draws;
} ColorSurface;

typedef struct {
    ID3D11Texture2D *texture;
    ID3D11DepthStencilView *view;
    float *host;
    uint8_t *stencil;
    uint32_t width, height, stride;
    uint32_t tex_w, tex_h;
    int dirty;
} DepthSurface;

typedef struct {
    float depth;
    uint32_t stencil;
} DepthPixel;

typedef struct {
    uint32_t offset, width, height, pitch, color;
    uint32_t byte_count;
    uint32_t cube, face_stride;
    uint64_t sig0, sig1, sig2, sig3, sig4;
    uint8_t *source;
    size_t capacity;
    uint64_t used;
    ID3D11ShaderResourceView *view;
} TextureEntry;

typedef struct {
    uint32_t u, v, border;
    int linear;
    ID3D11SamplerState *sampler;
} SamplerEntry;

typedef struct {
    uint32_t mode, src, dst, equation, mask;
    ID3D11BlendState *blend;
} BlendEntry;

typedef struct {
    D3D11_DEPTH_STENCIL_DESC desc;
    ID3D11DepthStencilState *state;
} StencilEntry;

typedef struct {
    float texture_scale[4][4], fog_color[4];
    uint32_t alpha[4];
    float half_dim[2];
    uint32_t visibility_slot;
    float pad;
} DrawInfo;

typedef enum { VISIBILITY_CLEAR, VISIBILITY_SAMPLES, VISIBILITY_UAV_SAMPLES,
               VISIBILITY_VALUE, VISIBILITY_REPORT } VisibilityKind;

typedef struct {
    VisibilityKind kind;
    ID3D11Query *query;
    uint8_t *destination;
    uint64_t stamp;
    uint32_t cpu_pixels;
    uint32_t slot;      /* VISIBILITY_UAV_SAMPLES: counter slot */
    uint32_t value;     /* VISIBILITY_VALUE: already-resolved pixel count */
} VisibilityEvent;

typedef struct {
    ID3D11Buffer *buffer;
    ID3D11ShaderResourceView *view;
    UINT capacity;
    UINT stride;
    UINT write_pos;
    UINT last_base;
    UINT shadow_size;
    UINT last_bytes;
    uint8_t *shadow;
} VshBuffer;

_Static_assert(sizeof(Nv2aWorldVertex) == 128, "NV2A world vertex stride");
_Static_assert(sizeof(DrawInfo) == 112, "HLSL draw constants");

static struct {
    ID3D11Device *device;
    ID3D11DeviceContext *context;
    ID3D11VertexShader *vs;
    ID3D11VertexShader *vsh_gather;
    ID3D11PixelShader *ps;
    ID3D11PixelShader *ps_uav;         /* VISIBILITY_UAV counting variant */
    ID3D11VertexShader *clear_vs;
    ID3D11PixelShader *clear_ps;
    ID3D11Buffer *clear_value;
    ID3D11PixelShader *bound_ps;
    ID3D11VertexShader *bound_vs;
    ID3D11InputLayout *bound_layout;
    ID3D11RenderTargetView *bound_target;
    ID3D11DepthStencilView *bound_depth;
    ID3D11InputLayout *layout;
    ID3D11Buffer *vertices, *constants[2], *vsh_constants[3];
    VshBuffer vsh_ins, vsh_const, vsh_words, vsh_attrs, vsh_defaults;
    ID3D11Buffer *vsh_ib;
    UINT vsh_ib_cap, vsh_ib_pos;
    ID3D11Buffer *bound_ib;
    int can_no_overwrite_srv;
    uint32_t last_const_rev;
    D3D11_RECT bound_scissor;
    /* The vertex buffer stays mapped across draws: mapping and unmapping once
     * per guest batch cost more than the copy does, and a batch ring inside
     * one WRITE_DISCARD mapping is the same buffer the GPU already reads.
     * vwrite is the next free vertex; the buffer is remapped when it fills. */
    D3D11_MAPPED_SUBRESOURCE vertex_map;
    UINT vwrite;
    int vertex_mapped;
    ID3D11DepthStencilState *bound_depth_state;
    uint32_t bound_stencil_ref;
    ID3D11BlendState *bound_blend;
    float bound_factors[4];
    ID3D11ShaderResourceView *bound_views[4];
    ID3D11ShaderResourceView *bound_cube_views[4];
    ID3D11SamplerState *bound_samplers[4];
    ID3D11RasterizerState *rasterizer;
    ID3D11DepthStencilState *depth_state[9][2];
    ColorSurface color[COLOR_SLOTS];
    DepthSurface depth[DEPTH_SLOTS];
    ID3D11Texture2D *color_readback, *depth_readback, *snapshot;
    ID3D11Texture2D *color_readback_64, *depth_readback_64;
    ID3D11Texture2D *depth_upload, *depth_upload_64;
    ID3D11ShaderResourceView *snapshot_view;
    uint32_t snapshot_w, snapshot_h;
    /* HD internal resolution scaling (RECOMP_RES_SCALE=2..4) blit/resolve helpers */
    ID3D11VertexShader *blit_vs;
    ID3D11PixelShader *blit_ps;
    ID3D11SamplerState *blit_linear_samp, *blit_point_samp;
    ID3D11Texture2D *color_upload, *color_resolve;
    ID3D11ShaderResourceView *color_upload_srv;
    ID3D11RenderTargetView *color_resolve_rtv;
    ID3D11Texture2D *depth_upload_hd, *depth_readback_hd;
    uint32_t depth_hd_w, depth_hd_h;
    TextureEntry textures[TEXTURE_SLOTS];
    SamplerEntry samplers[SAMPLER_SLOTS];
    BlendEntry blends[BLEND_SLOTS];
    StencilEntry stencil_states[STENCIL_STATES];
    ID3D11Query *queries[QUERY_SLOTS];
    VisibilityEvent visibility[REPORT_EVENTS];
    unsigned sampler_next, blend_next, stencil_next, query_count, event_count;
    uint32_t query_pixels;
    /* Visibility spans: the query left open between a CLEAR and its REPORT. */
    ID3D11Query *span_query;
    int span_active;
    uint64_t visibility_draws, span_starts, span_continued, spans_ended, queries_ended;
    ID3D11Buffer *vis_buffer, *vis_staging[2];
    ID3D11UnorderedAccessView *vis_uav;
    uint32_t vis_counts[VISIBILITY_SLOTS];
    unsigned vis_next;
    unsigned vis_frame;
    int uav_bound;
    uint64_t draws, syncs, uploads, reports, clears;
    int64_t frequency, sync_ticks, report_ticks, depth_ticks, texture_ticks, submit_ticks;
    CombinerConstants last_combiner;
    DrawInfo last_draw;
    int have_constants;
    DepthPixel packed_depth[WIDTH * HEIGHT];
    uint32_t *decoded;
    size_t decoded_capacity;
    IDXGISwapChain *swapchain;
    ID3D11RenderTargetView *swapchain_rtv;  /* GetBuffer(0): flip chains proxy it */
    unsigned swapchain_buffers;
    int swapchain_flip;
    int swapchain_tearing;
    ID3D11VertexShader *present_vs;
    ID3D11PixelShader *present_ps;
    ID3D11SamplerState *present_samp;
    HWND swapchain_hwnd;
    uint32_t swapchain_w, swapchain_h;
    /* Opt-in presentation capture (see screenshot_tick): a flip-model window
     * is invisible to GDI screen grabs, so the back buffer is copied here. */
    ID3D11Texture2D *shot_staging;
    uint32_t shot_w, shot_h;
    unsigned present_count;
    int failed;
    int trace_draws;
    uint32_t draws_in_frame;
} world;

/* Ends the open visibility span (see end_visibility_span). Called before any
 * world draw that is not guest geometry -- clears and the present blit -- so
 * those pixels are never folded into a visibility count. */
static void end_visibility_span(void);
/* Query-free visibility counting: one staging copy per flush replaces hundreds
 * of occlusion queries (~0.3 ms of real GPU time each on this driver). */
static void resolve_visibility_uav_sync(void);
static int queue_visibility_uav_frame(unsigned *out_staging_idx);

static uint32_t world_res_scale(void)
{
    static int s_scale = -1;
    if (s_scale < 0) {
        const char *e = getenv("RECOMP_RES_SCALE");
        int v = (e && *e) ? atoi(e) : 1;
        if (v < 1) v = 1;
        if (v > 4) v = 4;
        s_scale = v;
        if (v > 1)
            fprintf(stderr, "[D3D11-WORLD] Native HD internal resolution scale: %dx (%ux%u)\n",
                    v, WIDTH * (unsigned)v, HEIGHT * (unsigned)v);
    }
    return (uint32_t)s_scale;
}

static uint32_t surface_scale(uint32_t width, uint32_t height)
{
    return (width == WIDTH && height == HEIGHT) ? world_res_scale() : 1u;
}

static uint32_t normalize_vis_pixels(uint32_t pixels)
{
    uint32_t s = world_res_scale();
    if (s <= 1 || !pixels)
        return pixels;
    uint32_t div = s * s;
    uint32_t out = (pixels + div / 2) / div;
    return out ? out : 1u;
}

static int64_t world_ticks(void)
{
    LARGE_INTEGER tick;
    if (!world.frequency)
        return 0;
    QueryPerformanceCounter(&tick);
    return tick.QuadPart;
}

static double world_ms(int64_t ticks)
{
    return (double)ticks * 1000.0 / (double)world.frequency;
}

static int check_gpu(HRESULT hr, const char *operation)
{
    if (SUCCEEDED(hr))
        return 1;
    if (!world.failed)
        fprintf(stderr, "[D3D11-WORLD] %s failed (0x%08lX), using CPU draws\n",
                operation, (unsigned long)hr);
    world.failed = 1;
    return 0;
}

static ID3DBlob *compile_source(const char *source, size_t size,
                                const char *entry, const char *model)
{
    ID3DBlob *code = NULL, *errors = NULL;
    HRESULT hr = D3DCompile(source, size, "nv2a_world.hlsl", NULL, NULL,
        entry, model, D3DCOMPILE_IEEE_STRICTNESS | D3DCOMPILE_OPTIMIZATION_LEVEL3,
        0, &code, &errors);
    if (errors) {
        if (FAILED(hr))
            fprintf(stderr, "%s\n", (const char *)ID3D10Blob_GetBufferPointer(errors));
        ID3D10Blob_Release(errors);
    }
    return check_gpu(hr, entry) ? code : NULL;
}

static ID3DBlob *compile(const char *entry, const char *model)
{
    return compile_source(bf2_world_source, sizeof bf2_world_source - 1, entry, model);
}

/* Compile the visibility-counting variant by prefixing the shared shader
 * source with the define (rather than D3DCompile's pDefines, which this
 * toolchain's headers do not pass reliably -- see the fixture failure). */
static ID3DBlob *compile_uav(void)
{
    static const char prefix[] = "#define VISIBILITY_UAV 1\n";
    size_t n = sizeof prefix - 1 + sizeof bf2_world_source - 1;
    char *source = (char *)malloc(n + 1);
    if (!source)
        return NULL;
    memcpy(source, prefix, sizeof prefix - 1);
    memcpy(source + sizeof prefix - 1, bf2_world_source, sizeof bf2_world_source - 1);
    source[n] = 0;
    ID3DBlob *result = compile_source(source, n, "pixel_visibility", "ps_5_0");
    free(source);
    return result;
}

/* Query-free visibility: a pixel shader increments a per-draw uint counter in
 * a UAV instead of bracketing every draw with an occlusion query. */
static int visibility_uav_enabled(void)
{
    static int s_enabled = -1;
    if (s_enabled < 0) {
        const char *e = getenv("RECOMP_VISIBILITY_UAV");
        s_enabled = (!e || (strcmp(e, "0") != 0 && strcmp(e, "cpu") != 0)) ? 1 : 0;
    }
    return s_enabled;
}

static struct {
    uint64_t total;
    uint64_t accepted;
    uint64_t rej_color;
    uint64_t rej_dw;
    uint64_t rej_at;
} s_uav_stats;

static int visibility_uav_can_handle(const Nv2aRenderState *s)
{
    if (!visibility_uav_enabled())
        return 0;
    s_uav_stats.total++;
    if (s->color_mask & 0x01010101) {
        s_uav_stats.rej_color++;
        return 0;
    }
    if (s->alpha_test_enable) {
        s_uav_stats.rej_at++;
        static int logged_at = 0;
        if (logged_at < 10) {
            fprintf(stderr, "[UAV-REJ-AT] cmask=0x%08X dw=%d at=%d afunc=0x%X aref=%u\n",
                    s->color_mask, s->depth_write, s->alpha_test_enable, s->alpha_func, s->alpha_ref);
            logged_at++;
        }
        return 0;
    }
    s_uav_stats.accepted++;
    return 1;
}

static ID3DBlob *compile_vsh(const char *entry, const char *model)
{
    ID3DBlob *code = NULL, *errors = NULL;
    HRESULT hr = D3DCompile(bf2_vsh_source, sizeof bf2_vsh_source - 1,
        "nv2a_vsh_gather.hlsl", NULL, NULL, entry, model,
        D3DCOMPILE_IEEE_STRICTNESS | D3DCOMPILE_OPTIMIZATION_LEVEL3, 0, &code, &errors);
    if (errors) {
        if (FAILED(hr))
            fprintf(stderr, "%s\n", (const char *)ID3D10Blob_GetBufferPointer(errors));
        ID3D10Blob_Release(errors);
    }
    return check_gpu(hr, entry) ? code : NULL;
}

static int create_surface_texture_sized(DXGI_FORMAT format, UINT bind, uint32_t width, uint32_t height, ID3D11Texture2D **out)
{
    D3D11_TEXTURE2D_DESC desc = {0};
    desc.Width = width ? width : WIDTH;
    desc.Height = height ? height : HEIGHT;
    desc.MipLevels = desc.ArraySize = desc.SampleDesc.Count = 1;
    desc.Format = format;
    desc.BindFlags = bind;
    if (!bind) {
        desc.Usage = D3D11_USAGE_STAGING;
        desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    }
    return check_gpu(ID3D11Device_CreateTexture2D(world.device, &desc, NULL, out), "surface");
}

static int create_surface_texture(DXGI_FORMAT format, UINT bind, ID3D11Texture2D **out)
{
    return create_surface_texture_sized(format, bind, WIDTH, HEIGHT, out);
}

static uint8_t s_shadow_vsh_ins[8192];
static uint8_t s_shadow_vsh_attrs[256];
static uint8_t s_shadow_vsh_defaults[256];
static uint8_t s_shadow_vsh_const[4096];
static int update_vsh_buffer(VshBuffer *vb, UINT count, UINT stride, const void *data, UINT *out_base);
static int upload_vsh_indices(UINT count, const uint32_t *indices, UINT *out_start);

static void update_cbuffer(ID3D11Buffer *buf, const void *data, size_t size)
{
    D3D11_MAPPED_SUBRESOURCE map;
    if (SUCCEEDED(ID3D11DeviceContext_Map(world.context, (ID3D11Resource *)buf,
                                          0, D3D11_MAP_WRITE_DISCARD, 0, &map))) {
        memcpy(map.pData, data, size);
        ID3D11DeviceContext_Unmap(world.context, (ID3D11Resource *)buf, 0);
    }
}

static int init_world(void)
{
    static const D3D11_INPUT_ELEMENT_DESC format[] = {
        {"POSITION", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"COLOR", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"COLOR", 1, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 32, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 48, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 1, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 64, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 2, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 80, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"TEXCOORD", 3, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 96, D3D11_INPUT_PER_VERTEX_DATA, 0},
        {"FOG", 0, DXGI_FORMAT_R32_FLOAT, 0, 112, D3D11_INPUT_PER_VERTEX_DATA, 0}
    };
    D3D11_VIEWPORT viewport = {0, 0, WIDTH, HEIGHT, 0, 1};
    D3D11_BUFFER_DESC buffer = {0};
    D3D11_RASTERIZER_DESC rasterizer = {0};
    ID3DBlob *code;
    UINT stride = sizeof(Nv2aWorldVertex), offset = 0;
    HRESULT hr;

    if (!check_gpu(D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL,
            D3D11_CREATE_DEVICE_SINGLETHREADED,
            NULL, 0, D3D11_SDK_VERSION,
            &world.device, NULL, &world.context), "device"))
        return 0;
    if (getenv("RECOMP_RASTER_TIMING")) {
        LARGE_INTEGER frequency;
        if (QueryPerformanceFrequency(&frequency))
            world.frequency = frequency.QuadPart;
    }
    code = compile("vertex_main", "vs_5_0");
    if (!code)
        return 0;
    hr = ID3D11Device_CreateVertexShader(world.device, ID3D10Blob_GetBufferPointer(code),
                              ID3D10Blob_GetBufferSize(code), NULL, &world.vs);
    if (SUCCEEDED(hr))
        hr = ID3D11Device_CreateInputLayout(world.device, format, sizeof format / sizeof *format,
              ID3D10Blob_GetBufferPointer(code), ID3D10Blob_GetBufferSize(code), &world.layout);
    ID3D10Blob_Release(code);
    if (!check_gpu(hr, "vertex pipeline"))
        return 0;
    code = compile("pixel_main", "ps_5_0");
    if (!code)
        return 0;
    hr = ID3D11Device_CreatePixelShader(world.device, ID3D10Blob_GetBufferPointer(code),
                              ID3D10Blob_GetBufferSize(code), NULL, &world.ps);
    ID3D10Blob_Release(code);
    if (!check_gpu(hr, "pixel pipeline"))
        return 0;
    {
        code = compile_uav();
        if (!code)
            return 0;
        hr = ID3D11Device_CreatePixelShader(world.device, ID3D10Blob_GetBufferPointer(code),
                                  ID3D10Blob_GetBufferSize(code), NULL, &world.ps_uav);
        ID3D10Blob_Release(code);
        if (!check_gpu(hr, "visibility counting pipeline"))
            return 0;
    }
    code = compile("vertex_clear", "vs_5_0");
    if (!code)
        return 0;
    hr = ID3D11Device_CreateVertexShader(world.device, ID3D10Blob_GetBufferPointer(code),
                              ID3D10Blob_GetBufferSize(code), NULL, &world.clear_vs);
    ID3D10Blob_Release(code);
    if (!check_gpu(hr, "clear vertex shader"))
        return 0;
    code = compile("pixel_clear", "ps_5_0");
    if (!code)
        return 0;
    hr = ID3D11Device_CreatePixelShader(world.device, ID3D10Blob_GetBufferPointer(code),
                              ID3D10Blob_GetBufferSize(code), NULL, &world.clear_ps);
    ID3D10Blob_Release(code);
    if (!check_gpu(hr, "clear pixel shader"))
        return 0;
    code = compile_vsh("vs_gather_transform_indexed", "vs_5_0");
    if (!code)
        return 0;
    hr = ID3D11Device_CreateVertexShader(world.device, ID3D10Blob_GetBufferPointer(code),
                              ID3D10Blob_GetBufferSize(code), NULL, &world.vsh_gather);
    ID3D10Blob_Release(code);
    if (!check_gpu(hr, "gather vertex shader"))
        return 0;
    {
        D3D11_FEATURE_DATA_D3D11_OPTIONS opts;
        memset(&opts, 0, sizeof opts);
        if (SUCCEEDED(ID3D11Device_CheckFeatureSupport(world.device, D3D11_FEATURE_D3D11_OPTIONS,
                                                       &opts, sizeof opts))) {
            world.can_no_overwrite_srv = opts.MapNoOverwriteOnDynamicBufferSRV ? 1 : 0;
        }
    }
    buffer.ByteWidth = MAX_VERTICES * sizeof(Nv2aWorldVertex);
    buffer.Usage = D3D11_USAGE_DYNAMIC;
    buffer.BindFlags = D3D11_BIND_VERTEX_BUFFER;
    buffer.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    if (!check_gpu(ID3D11Device_CreateBuffer(world.device, &buffer, NULL, &world.vertices), "vertices"))
        return 0;
    buffer.Usage = D3D11_USAGE_DYNAMIC;
    buffer.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    buffer.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
    buffer.ByteWidth = sizeof(CombinerConstants);
    if (!check_gpu(ID3D11Device_CreateBuffer(world.device, &buffer, NULL, &world.constants[0]), "combiner buffer"))
        return 0;
    buffer.ByteWidth = sizeof(DrawInfo);
    if (!check_gpu(ID3D11Device_CreateBuffer(world.device, &buffer, NULL, &world.constants[1]), "draw buffer"))
        return 0;
    buffer.ByteWidth = 4 * sizeof(float);
    if (!check_gpu(ID3D11Device_CreateBuffer(world.device, &buffer, NULL, &world.clear_value), "clear buffer"))
        return 0;
    /* Query-free visibility counting: uint slots written by the counting PS,
     * copied to staging and cleared once per flush. */
    memset(&buffer, 0, sizeof buffer);
    buffer.ByteWidth = VISIBILITY_SLOTS * sizeof(uint32_t);
    buffer.Usage = D3D11_USAGE_DEFAULT;
    buffer.BindFlags = D3D11_BIND_UNORDERED_ACCESS;
    if (!check_gpu(ID3D11Device_CreateBuffer(world.device, &buffer, NULL, &world.vis_buffer),
                   "visibility counters"))
        return 0;
    {
        D3D11_UNORDERED_ACCESS_VIEW_DESC uav;
        memset(&uav, 0, sizeof uav);
        uav.ViewDimension = D3D11_UAV_DIMENSION_BUFFER;
        uav.Format = DXGI_FORMAT_R32_UINT;
        uav.Buffer.NumElements = VISIBILITY_SLOTS;
        if (!check_gpu(ID3D11Device_CreateUnorderedAccessView(world.device,
                           (ID3D11Resource *)world.vis_buffer, &uav, &world.vis_uav),
                       "visibility counter view"))
            return 0;
    }
    memset(&buffer, 0, sizeof buffer);
    buffer.ByteWidth = VISIBILITY_SLOTS * sizeof(uint32_t);
    buffer.Usage = D3D11_USAGE_STAGING;
    buffer.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    if (!check_gpu(ID3D11Device_CreateBuffer(world.device, &buffer, NULL, &world.vis_staging[0]),
                   "visibility counter readback 0") ||
        !check_gpu(ID3D11Device_CreateBuffer(world.device, &buffer, NULL, &world.vis_staging[1]),
                   "visibility counter readback 1"))
        return 0;
    memset(&buffer, 0, sizeof buffer);
    buffer.Usage = D3D11_USAGE_DYNAMIC;
    buffer.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    buffer.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
    buffer.ByteWidth = 16;
    if (!check_gpu(ID3D11Device_CreateBuffer(world.device, &buffer, NULL, &world.vsh_constants[0]), "vsh params"))
        return 0;
    buffer.ByteWidth = 16;
    if (!check_gpu(ID3D11Device_CreateBuffer(world.device, &buffer, NULL, &world.vsh_constants[1]), "vsh gather"))
        return 0;
    buffer.ByteWidth = 32;
    if (!check_gpu(ID3D11Device_CreateBuffer(world.device, &buffer, NULL, &world.vsh_constants[2]), "vsh transform"))
        return 0;
    world.vsh_ins.shadow = s_shadow_vsh_ins;
    world.vsh_ins.shadow_size = sizeof s_shadow_vsh_ins;
    world.vsh_const.shadow = s_shadow_vsh_const;
    world.vsh_const.shadow_size = sizeof s_shadow_vsh_const;
    world.vsh_attrs.shadow = s_shadow_vsh_attrs;
    world.vsh_attrs.shadow_size = sizeof s_shadow_vsh_attrs;
    world.vsh_defaults.shadow = s_shadow_vsh_defaults;
    world.vsh_defaults.shadow_size = sizeof s_shadow_vsh_defaults;
    update_vsh_buffer(&world.vsh_ins, 262144, 4, NULL, NULL);
    update_vsh_buffer(&world.vsh_const, 65536, 16, NULL, NULL);
    update_vsh_buffer(&world.vsh_words, 4194304, 4, NULL, NULL);
    update_vsh_buffer(&world.vsh_attrs, 16384, 16, NULL, NULL);
    update_vsh_buffer(&world.vsh_defaults, 16384, 16, NULL, NULL);
    upload_vsh_indices(4194304, NULL, NULL);
    rasterizer.FillMode = D3D11_FILL_SOLID;
    rasterizer.CullMode = D3D11_CULL_NONE;
    rasterizer.DepthClipEnable = TRUE;
    rasterizer.ScissorEnable = TRUE;
    if (!check_gpu(ID3D11Device_CreateRasterizerState(world.device, &rasterizer, &world.rasterizer), "rasterizer"))
        return 0;
    if (!create_surface_texture(DXGI_FORMAT_B8G8R8A8_UNORM, 0, &world.color_readback) ||
        !create_surface_texture(DXGI_FORMAT_R32G8X24_TYPELESS, 0, &world.depth_readback))
        return 0;

    ID3D11DeviceContext_IASetInputLayout(world.context, world.layout);
    ID3D11DeviceContext_IASetVertexBuffers(world.context, 0, 1, &world.vertices, &stride, &offset);
    ID3D11DeviceContext_IASetPrimitiveTopology(world.context, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D11DeviceContext_RSSetViewports(world.context, 1, &viewport);
    ID3D11DeviceContext_RSSetState(world.context, world.rasterizer);
    ID3D11DeviceContext_VSSetShader(world.context, world.vs, NULL, 0);
    ID3D11DeviceContext_PSSetShader(world.context, world.ps, NULL, 0);
    world.bound_ps = world.ps;
    world.bound_vs = world.vs;
    world.bound_layout = world.layout;
    ID3D11DeviceContext_PSSetConstantBuffers(world.context, 0, 2, world.constants);
    ID3D11DeviceContext_PSSetConstantBuffers(world.context, 2, 1, &world.clear_value);
    return 1;
}

static int copy_surface_to_cpu(ID3D11Texture2D *source, ID3D11Texture2D *staging,
                               D3D11_MAPPED_SUBRESOURCE *map)
{
    ID3D11DeviceContext_CopyResource(world.context, (ID3D11Resource *)staging, (ID3D11Resource *)source);
    return check_gpu(ID3D11DeviceContext_Map(world.context, (ID3D11Resource *)staging, 0,
                                          D3D11_MAP_READ, 0, map), "surface readback");
}

static int regions_overlap(const void *a, size_t a_size, const void *b, size_t b_size)
{
    uintptr_t x = (uintptr_t)a, y = (uintptr_t)b;
    if (!a_size || !b_size)
        return 0;
    return x < y ? y - x < a_size : x - y < b_size;
}

static void unbind_surfaces(void)
{
    ID3D11ShaderResourceView *empty[4] = {0};
    ID3D11DeviceContext_OMSetRenderTargets(world.context, 0, NULL, NULL);
    ID3D11DeviceContext_PSSetShaderResources(world.context, 0, 4, empty);
    ID3D11DeviceContext_PSSetShaderResources(world.context, 4, 4, empty);
    memset(world.bound_views, 0, sizeof world.bound_views);
    memset(world.bound_cube_views, 0, sizeof world.bound_cube_views);
    world.bound_target = NULL;
    world.bound_depth = NULL;
    world.uav_bound = 0;
}

static void bind_targets(ColorSurface *color, ID3D11DepthStencilView *depth)
{
    ID3D11RenderTargetView *target = color ? color->target : NULL;
    if (world.bound_target != target || world.bound_depth != depth) {
        ID3D11ShaderResourceView *empty[4] = {0};
        ID3D11DeviceContext_PSSetShaderResources(world.context, 0, 4, empty);
        ID3D11DeviceContext_PSSetShaderResources(world.context, 4, 4, empty);
        memset(world.bound_views, 0, sizeof world.bound_views);
        memset(world.bound_cube_views, 0, sizeof world.bound_cube_views);
        ID3D11DeviceContext_OMSetRenderTargets(world.context, 1, &target, depth);
        world.bound_target = target;
        world.bound_depth = depth;
        world.uav_bound = 0;
        if (color) {
            uint32_t w = color->tex_w ? color->tex_w : (color->width ? color->width : WIDTH);
            uint32_t h = color->tex_h ? color->tex_h : (color->height ? color->height : HEIGHT);
            D3D11_VIEWPORT vp = {0.0f, 0.0f, (float)w, (float)h, 0.0f, 1.0f};
            ID3D11DeviceContext_RSSetViewports(world.context, 1, &vp);
        }
    }
}

static int ensure_hd_blit_helpers(void)
{
    if (world.blit_vs && world.blit_ps)
        return 1;
    static const char hlsl[] =
        "Texture2D t_col : register(t0);\n"
        "SamplerState s0 : register(s0);\n"
        "struct V { float4 p : SV_Position; float2 uv : TEXCOORD0; };\n"
        "V blit_vs(uint i : SV_VertexID) {\n"
        "    V o; float2 q = float2((i << 1) & 2, i & 2);\n"
        "    o.uv = q; o.p = float4(q * float2(2, -2) + float2(-1, 1), 0, 1);\n"
        "    return o;\n"
        "}\n"
        "float4 blit_ps(V i) : SV_Target { return t_col.Sample(s0, i.uv); }\n";
    ID3DBlob *vsb = compile_source(hlsl, sizeof(hlsl) - 1, "blit_vs", "vs_5_0");
    ID3DBlob *psb = compile_source(hlsl, sizeof(hlsl) - 1, "blit_ps", "ps_5_0");
    if (!vsb || !psb) {
        if (vsb) ID3D10Blob_Release(vsb);
        if (psb) ID3D10Blob_Release(psb);
        return 0;
    }
    int ok = check_gpu(ID3D11Device_CreateVertexShader(world.device, ID3D10Blob_GetBufferPointer(vsb),
                                                       ID3D10Blob_GetBufferSize(vsb), NULL, &world.blit_vs), "hd blit vs") &&
             check_gpu(ID3D11Device_CreatePixelShader(world.device, ID3D10Blob_GetBufferPointer(psb),
                                                      ID3D10Blob_GetBufferSize(psb), NULL, &world.blit_ps), "hd blit ps");
    ID3D10Blob_Release(vsb);
    ID3D10Blob_Release(psb);
    if (!ok)
        return 0;

    D3D11_SAMPLER_DESC smp = {0};
    smp.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
    smp.AddressU = smp.AddressV = smp.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
    smp.MaxLOD = D3D11_FLOAT32_MAX;
    if (!check_gpu(ID3D11Device_CreateSamplerState(world.device, &smp, &world.blit_linear_samp), "hd linear samp"))
        return 0;
    smp.Filter = D3D11_FILTER_MIN_MAG_MIP_POINT;
    if (!check_gpu(ID3D11Device_CreateSamplerState(world.device, &smp, &world.blit_point_samp), "hd point samp"))
        return 0;

    if (!create_surface_texture_sized(DXGI_FORMAT_B8G8R8A8_UNORM, D3D11_BIND_SHADER_RESOURCE,
                                      WIDTH, HEIGHT, &world.color_upload) ||
        !check_gpu(ID3D11Device_CreateShaderResourceView(world.device, (ID3D11Resource *)world.color_upload,
                                                         NULL, &world.color_upload_srv), "hd color upload srv") ||
        !create_surface_texture_sized(DXGI_FORMAT_B8G8R8A8_UNORM, D3D11_BIND_RENDER_TARGET,
                                      WIDTH, HEIGHT, &world.color_resolve) ||
        !check_gpu(ID3D11Device_CreateRenderTargetView(world.device, (ID3D11Resource *)world.color_resolve,
                                                       NULL, &world.color_resolve_rtv), "hd color resolve rtv"))
        return 0;
    return 1;
}

static void hd_blit_reset_state(void)
{
    unbind_surfaces();
    world.bound_vs = NULL;
    world.bound_ps = NULL;
    world.bound_layout = (ID3D11InputLayout *)(uintptr_t)-1;
    world.bound_blend = NULL;
    world.bound_depth_state = NULL;
    world.bound_stencil_ref = 0;
}

static void set_scissor(uint32_t w, uint32_t h)
{
    D3D11_RECT r = {0, 0, (LONG)w, (LONG)h};
    if (world.bound_scissor.left != r.left || world.bound_scissor.top != r.top ||
        world.bound_scissor.right != r.right || world.bound_scissor.bottom != r.bottom) {
        ID3D11DeviceContext_RSSetScissorRects(world.context, 1, &r);
        world.bound_scissor = r;
    }
}

static void hd_blit_color(ID3D11ShaderResourceView *src, ID3D11RenderTargetView *dst,
                          uint32_t dst_w, uint32_t dst_h, int linear)
{
    D3D11_VIEWPORT vp = {0.0f, 0.0f, (float)dst_w, (float)dst_h, 0.0f, 1.0f};
    ID3D11SamplerState *samp = linear ? world.blit_linear_samp : world.blit_point_samp;
    end_visibility_span();
    unbind_surfaces();
    ID3D11DeviceContext_OMSetRenderTargets(world.context, 1, &dst, NULL);
    ID3D11DeviceContext_RSSetViewports(world.context, 1, &vp);
    set_scissor(dst_w, dst_h);
    ID3D11DeviceContext_IASetInputLayout(world.context, NULL);
    ID3D11DeviceContext_IASetVertexBuffers(world.context, 0, 0, NULL, NULL, NULL);
    ID3D11DeviceContext_IASetPrimitiveTopology(world.context, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D11DeviceContext_VSSetShader(world.context, world.blit_vs, NULL, 0);
    ID3D11DeviceContext_PSSetShader(world.context, world.blit_ps, NULL, 0);
    ID3D11DeviceContext_PSSetShaderResources(world.context, 0, 1, &src);
    ID3D11DeviceContext_PSSetSamplers(world.context, 0, 1, &samp);
    ID3D11DeviceContext_OMSetBlendState(world.context, NULL, NULL, 0xFFFFFFFF);
    ID3D11DeviceContext_OMSetDepthStencilState(world.context, NULL, 0);
    ID3D11DeviceContext_Draw(world.context, 3, 0);
    hd_blit_reset_state();
}

static struct {
    uint64_t full_color;
    uint64_t incompatible;
    uint64_t ext_null;
    uint64_t ext_regions;
    uint64_t color_copies;
    uint64_t depth_copies;
} s_sync_stats;

static void unmap_vertices(void)
{
    if (!world.vertex_mapped)
        return;
    ID3D11DeviceContext_Unmap(world.context, (ID3D11Resource *)world.vertices, 0);
    world.vertex_mapped = 0;
    world.vwrite = 0;
}

/* D3D11 keeps every value it is handed, so a call that repeats the last one
 * only costs the trip through the driver. Titles like this one interleave
 * batches that share a texture or blend state, and those repeats are the
 * cheap half of the per-draw cost to get rid of. */
static int same_views(const ID3D11ShaderResourceView *const *a,
                      ID3D11ShaderResourceView *const *b)
{
    for (int i = 0; i < 4; i++)
        if (a[i] != b[i])
            return 0;
    return 1;
}

static int same_samplers(const ID3D11SamplerState *const *a, ID3D11SamplerState *const *b)
{
    for (int i = 0; i < 4; i++)
        if (a[i] != b[i])
            return 0;
    return 1;
}

static void sync_world(const Nv2aWorldRegion *regions, unsigned count, const float *depth, int all_depth)
{
    int readback = 0;
    int64_t start = world_ticks();
    /* A readback can end the frame under us, and nothing after it may still be
     * holding the mapped vertex range. */
    unmap_vertices();
    for (int i = 0; i < COLOR_SLOTS; i++) {
        ColorSurface *s = &world.color[i];
        D3D11_MAPPED_SUBRESOURCE map;
        int include = regions == NULL;
        if (!s->host)
            continue;
        uint32_t sw = s->width ? s->width : WIDTH;
        uint32_t sh = s->height ? s->height : HEIGHT;
        size_t surf_size = (size_t)sw * sh * 4;
        for (unsigned j = 0; j < count && !include; j++) {
            if ((const uint8_t *)s->host == regions[j].bytes) {
                include = 1;
                break;
            }
            if (regions[j].size >= surf_size &&
                regions_overlap(s->host, surf_size, regions[j].bytes, regions[j].size)) {
                include = 1;
                break;
            }
        }
        if (!include)
            continue;
        if (s->dirty && !readback++)
            unbind_surfaces();
        ID3D11Texture2D *readback_tex = NULL;
        if (sw == WIDTH && sh == HEIGHT) {
            readback_tex = world.color_readback;
        } else if (sw == 64 && sh == 64) {
            if (!world.color_readback_64) {
                create_surface_texture_sized(DXGI_FORMAT_B8G8R8A8_UNORM, 0, 64, 64, &world.color_readback_64);
            }
            readback_tex = world.color_readback_64;
        }
        if (s->dirty && readback_tex) {
            ID3D11Texture2D *src_tex = s->texture;
            if ((s->tex_w != sw || s->tex_h != sh) && sw == WIDTH && sh == HEIGHT &&
                ensure_hd_blit_helpers()) {
                hd_blit_color(s->view, world.color_resolve_rtv, WIDTH, HEIGHT, 1);
                src_tex = world.color_resolve;
            }
            if (copy_surface_to_cpu(src_tex, readback_tex, &map)) {
                s_sync_stats.color_copies++;
                for (int y = 0; y < (int)sh; y++)
                    memcpy(s->host + y * sw, (const uint8_t *)map.pData + y * map.RowPitch, sw * 4);
                ID3D11DeviceContext_Unmap(world.context, (ID3D11Resource *)readback_tex, 0);
            }
        }
        s->host = NULL;
        s->dirty = 0;
    }
    for (int i = 0; i < DEPTH_SLOTS; i++) {
        DepthSurface *s = &world.depth[i];
        D3D11_MAPPED_SUBRESOURCE map;
        if (!s->host || (!all_depth && s->host != depth))
            continue;
        uint32_t sw = s->width ? s->width : WIDTH;
        uint32_t sh = s->height ? s->height : HEIGHT;
        if (s->dirty && !readback++)
            unbind_surfaces();
        ID3D11Texture2D *readback_tex = NULL;
        if (sw == WIDTH && sh == HEIGHT) {
            readback_tex = world.depth_readback;
        } else if (sw == 64 && sh == 64) {
            if (!world.depth_readback_64) {
                create_surface_texture_sized(DXGI_FORMAT_R32G8X24_TYPELESS, 0, 64, 64, &world.depth_readback_64);
            }
            readback_tex = world.depth_readback_64;
        }
        if (s->dirty && (s->tex_w != sw || s->tex_h != sh) && s->tex_w && s->tex_h) {
            uint32_t sx = s->tex_w / sw, sy = s->tex_h / sh;
            if (!world.depth_readback_hd || world.depth_hd_w != s->tex_w || world.depth_hd_h != s->tex_h) {
                if (world.depth_readback_hd) { ID3D11Texture2D_Release(world.depth_readback_hd); world.depth_readback_hd = NULL; }
                create_surface_texture_sized(DXGI_FORMAT_R32G8X24_TYPELESS, 0, s->tex_w, s->tex_h, &world.depth_readback_hd);
                world.depth_hd_w = s->tex_w;
                world.depth_hd_h = s->tex_h;
            }
            if (world.depth_readback_hd && copy_surface_to_cpu(s->texture, world.depth_readback_hd, &map)) {
                s_sync_stats.depth_copies++;
                for (uint32_t y = 0; y < sh; y++) {
                    const DepthPixel *src = (const DepthPixel *)((const uint8_t *)map.pData + (size_t)(y * sy) * map.RowPitch);
                    for (uint32_t x = 0; x < sw; x++) {
                        unsigned cell = y * s->stride + x;
                        const DepthPixel *px = &src[x * sx];
                        s->host[cell] = px->depth >= 1.0f ? 3.4e38f : px->depth * 33554432.0f;
                        if (s->stencil)
                            s->stencil[cell] = (uint8_t)px->stencil;
                    }
                }
                ID3D11DeviceContext_Unmap(world.context, (ID3D11Resource *)world.depth_readback_hd, 0);
            }
        } else if (s->dirty && readback_tex && copy_surface_to_cpu(s->texture, readback_tex, &map)) {
            s_sync_stats.depth_copies++;
            for (int y = 0; y < (int)sh; y++) {
                const DepthPixel *src = (const DepthPixel *)((const uint8_t *)map.pData + y * map.RowPitch);
                for (int x = 0; x < (int)sw; x++) {
                    unsigned cell = y * s->stride + x;
                    s->host[cell] = src[x].depth >= 1.0f ? 3.4e38f : src[x].depth * 33554432.0f;
                    if (s->stencil)
                        s->stencil[cell] = (uint8_t)src[x].stencil;
                }
            }
            ID3D11DeviceContext_Unmap(world.context, (ID3D11Resource *)readback_tex, 0);
        }
        s->host = NULL;
        s->stencil = NULL;
        s->dirty = 0;
    }
    if (readback)
        world.syncs++;
    if (start)
        world.sync_ticks += world_ticks() - start;
}

static void sync_world_entry(const Nv2aWorldRegion *regions, unsigned count, const float *depth, int all_depth)
{
    if (regions == NULL)
        s_sync_stats.ext_null++;
    else
        s_sync_stats.ext_regions++;
    sync_world(regions, count, depth, all_depth);
}

static void clear_depth(const float *depth, uint32_t flags, float value, uint8_t stencil)
{
    UINT mask = 0;
    if (flags & 1) mask |= D3D11_CLEAR_DEPTH;
    if (flags & 2) mask |= D3D11_CLEAR_STENCIL;
    for (int i = 0; i < DEPTH_SLOTS; i++) {
        DepthSurface *s = &world.depth[i];
        if (s->host == depth && s->view) {
            ID3D11DeviceContext_ClearDepthStencilView(world.context, s->view, mask,
                                                     value / 33554432.0f, stencil);
            s->dirty = 1;
        }
    }
}

extern ptrdiff_t xbox_GetMemoryOffset(void);

static const char *screenshot_dir(void)
{
    static char s_buf[MAX_PATH];
    static const char *s_dir;
    static int s_ready;
    if (!s_ready) {
        const char *e = getenv("RECOMP_SCREENSHOT_DIR");
        if (e && *e) {
            if (GetFullPathNameA(e, sizeof s_buf, s_buf, NULL)) {
                s_dir = s_buf;
            } else {
                s_dir = e;
            }
            CreateDirectoryA(s_dir, NULL);
        } else {
            s_dir = NULL;
        }
        s_ready = 1;
    }
    return s_dir;
}

static void dump_color_slot_named(const char *dir, const char *name, int slot, const ColorSurface *cs)
{
    if (!dir || !cs || !cs->texture || !cs->width || !cs->height)
        return;
    uint32_t w = cs->tex_w ? cs->tex_w : cs->width;
    uint32_t h = cs->tex_h ? cs->tex_h : cs->height;
    D3D11_TEXTURE2D_DESC d;
    memset(&d, 0, sizeof d);
    d.Width = w;
    d.Height = h;
    d.MipLevels = 1;
    d.ArraySize = 1;
    d.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
    d.SampleDesc.Count = 1;
    d.Usage = D3D11_USAGE_STAGING;
    d.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    ID3D11Texture2D *staging = NULL;
    if (FAILED(ID3D11Device_CreateTexture2D(world.device, &d, NULL, &staging)))
        return;
    ID3D11DeviceContext_CopyResource(world.context, (ID3D11Resource *)staging, (ID3D11Resource *)cs->texture);
    D3D11_MAPPED_SUBRESOURCE map;
    if (SUCCEEDED(ID3D11DeviceContext_Map(world.context, (ID3D11Resource *)staging, 0, D3D11_MAP_READ, 0, &map))) {
        char path[512];
        _snprintf_s(path, sizeof path, _TRUNCATE, "%s\\%s.bmp", dir, name);
        FILE *f = NULL;
        if (!fopen_s(&f, path, "wb") && f) {
            BITMAPFILEHEADER fh = {0};
            BITMAPINFOHEADER ih = {0};
            uint32_t row = w * 4;
            fh.bfType = 0x4D42;
            fh.bfOffBits = sizeof fh + sizeof ih;
            fh.bfSize = fh.bfOffBits + row * h;
            ih.biSize = sizeof ih;
            ih.biWidth = (LONG)w;
            ih.biHeight = (LONG)h;
            ih.biPlanes = 1;
            ih.biBitCount = 32;
            ih.biCompression = BI_RGB;
            ih.biSizeImage = row * h;
            fwrite(&fh, sizeof fh, 1, f);
            fwrite(&ih, sizeof ih, 1, f);
            for (int y = (int)h - 1; y >= 0; y--)
                fwrite((const uint8_t *)map.pData + (size_t)y * map.RowPitch, row, 1, f);
            fclose(f);
        }
        uint8_t min_b = 255, max_b = 0, min_g = 255, max_g = 0, min_r = 255, max_r = 0;
        uint32_t n_white = 0, n_black = 0;
        for (uint32_t y = 0; y < h; y++) {
            const uint8_t *row = (const uint8_t *)map.pData + y * map.RowPitch;
            for (uint32_t x = 0; x < w; x++) {
                uint8_t b = row[x * 4 + 0];
                uint8_t g = row[x * 4 + 1];
                uint8_t r = row[x * 4 + 2];
                if (b < min_b) min_b = b; if (b > max_b) max_b = b;
                if (g < min_g) min_g = g; if (g > max_g) max_g = g;
                if (r < min_r) min_r = r; if (r > max_r) max_r = r;
                if (b == 255 && g == 255 && r == 255) n_white++;
                else if (b == 0 && g == 0 && r == 0) n_black++;
            }
        }
        ptrdiff_t mem_base = xbox_GetMemoryOffset();
        uint32_t guest_off = cs->host ? (uint32_t)((uintptr_t)cs->host - (uintptr_t)mem_base) : 0;
        fprintf(stderr, "[DIAG-DUMP] %s: slot %d (host=%p / guest 0x%08X, %ux%u, dirty=%d): R[%u..%u] G[%u..%u] B[%u..%u] white=%u black=%u other=%u -> %s\n",
                name, slot, (void*)cs->host, guest_off, w, h, cs->dirty,
                min_r, max_r, min_g, max_g, min_b, max_b,
                n_white, n_black, (w * h) - n_white - n_black, path);
        ID3D11DeviceContext_Unmap(world.context, (ID3D11Resource *)staging, 0);
    }
    ID3D11Texture2D_Release(staging);
}

static ColorSurface *bind_color(uint32_t *host, uint32_t width, uint32_t height)
{
    int free_slot = -1;
    int same_host_slot = -1;
    ColorSurface *s;
    if (!width) width = WIDTH;
    if (!height) height = HEIGHT;
    for (int i = 0; i < COLOR_SLOTS; i++) {
        if (world.color[i].host == host) {
            if (world.color[i].width == width && world.color[i].height == height)
                return &world.color[i];
            if (same_host_slot < 0)
                same_host_slot = i;
        }
        if (!world.color[i].host && free_slot < 0)
            free_slot = i;
    }
    if (free_slot < 0 && same_host_slot >= 0) {
        if (world.color[same_host_slot].view) { ID3D11ShaderResourceView_Release(world.color[same_host_slot].view); world.color[same_host_slot].view = NULL; }
        if (world.color[same_host_slot].target) { ID3D11RenderTargetView_Release(world.color[same_host_slot].target); world.color[same_host_slot].target = NULL; }
        if (world.color[same_host_slot].texture) { ID3D11Texture2D_Release(world.color[same_host_slot].texture); world.color[same_host_slot].texture = NULL; }
        world.color[same_host_slot].host = NULL;
        free_slot = same_host_slot;
    }
    if (free_slot < 0) {
        s_sync_stats.full_color++;
        sync_world(NULL, 0, NULL, 0);
        free_slot = 0;
    }
    s = &world.color[free_slot];
    uint32_t scale = surface_scale(width, height);
    uint32_t tex_w = width * scale;
    uint32_t tex_h = height * scale;
    if (!s->texture || s->tex_w != tex_w || s->tex_h != tex_h) {
        if (s->view) { ID3D11ShaderResourceView_Release(s->view); s->view = NULL; }
        if (s->target) { ID3D11RenderTargetView_Release(s->target); s->target = NULL; }
        if (s->texture) { ID3D11Texture2D_Release(s->texture); s->texture = NULL; }
        if (!create_surface_texture_sized(DXGI_FORMAT_B8G8R8A8_UNORM,
                                          D3D11_BIND_SHADER_RESOURCE | D3D11_BIND_RENDER_TARGET,
                                          tex_w, tex_h, &s->texture) ||
            !check_gpu(ID3D11Device_CreateRenderTargetView(world.device, (ID3D11Resource *)s->texture,
                                                          NULL, &s->target), "render target") ||
            !check_gpu(ID3D11Device_CreateShaderResourceView(world.device, (ID3D11Resource *)s->texture,
                                                             NULL, &s->view), "surface texture"))
            return NULL;
        s->tex_w = tex_w;
        s->tex_h = tex_h;
    }
    s->width = width;
    s->height = height;
    s->pitch = width * 4;
    if (scale == 1) {
        ID3D11DeviceContext_UpdateSubresource(world.context, (ID3D11Resource *)s->texture,
                                             0, NULL, host, width * 4, 0);
    } else if (ensure_hd_blit_helpers()) {
        ID3D11DeviceContext_UpdateSubresource(world.context, (ID3D11Resource *)world.color_upload,
                                             0, NULL, host, width * 4, 0);
        hd_blit_color(world.color_upload_srv, s->target, tex_w, tex_h, 1);
    }
    s->host = host;
    if (world.trace_draws) {
        const char *dir = screenshot_dir();
        char name[128];
        _snprintf_s(name, sizeof name, _TRUNCATE, "bind-first-slot%d", free_slot);
        dump_color_slot_named(dir, name, free_slot, s);
    }
    return s;
}

static DepthSurface *bind_depth(float *host, uint8_t *stencil, uint32_t stride, uint32_t width, uint32_t height)
{
    DepthSurface *s = NULL;
    int free_slot = -1;
    int same_host_slot = -1;
    D3D11_DEPTH_STENCIL_VIEW_DESC view = {0};
    if (!width) width = WIDTH;
    if (!height) height = HEIGHT;
    for (int i = 0; i < DEPTH_SLOTS; i++) {
        if (world.depth[i].host == host) {
            if (world.depth[i].width == width && world.depth[i].height == height)
                return &world.depth[i];
            if (same_host_slot < 0)
                same_host_slot = i;
        }
        if (!world.depth[i].host && free_slot < 0)
            free_slot = i;
    }
    if (free_slot >= 0) {
        s = &world.depth[free_slot];
    } else if (same_host_slot >= 0) {
        s = &world.depth[same_host_slot];
        if (s->view) { ID3D11DepthStencilView_Release(s->view); s->view = NULL; }
        if (s->texture) { ID3D11Texture2D_Release(s->texture); s->texture = NULL; }
        s->host = NULL;
    }
    if (!s)
        return NULL;
    int64_t start = world_ticks();
    uint32_t scale = surface_scale(width, height);
    uint32_t tex_w = width * scale;
    uint32_t tex_h = height * scale;
    if (!s->texture || s->tex_w != tex_w || s->tex_h != tex_h) {
        if (s->view) { ID3D11DepthStencilView_Release(s->view); s->view = NULL; }
        if (s->texture) { ID3D11Texture2D_Release(s->texture); s->texture = NULL; }
        view.Format = DXGI_FORMAT_D32_FLOAT_S8X24_UINT;
        view.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;
        if (!create_surface_texture_sized(DXGI_FORMAT_R32G8X24_TYPELESS, D3D11_BIND_DEPTH_STENCIL,
                                          tex_w, tex_h, &s->texture) ||
            !check_gpu(ID3D11Device_CreateDepthStencilView(world.device, (ID3D11Resource *)s->texture,
                                                           &view, &s->view), "depth view"))
            return NULL;
        s->tex_w = tex_w;
        s->tex_h = tex_h;
    }
    s->width = width;
    s->height = height;
    if (scale > 1) {
        int all_clear = 1;
        for (int y = 0; y < (int)height && all_clear; y++) {
            for (int x = 0; x < (int)width; x++) {
                const unsigned cell = y * stride + x;
                if (host[cell] < 33554432.0f || (stencil && stencil[cell] != 0)) {
                    all_clear = 0;
                    break;
                }
            }
        }
        if (all_clear) {
            ID3D11DeviceContext_ClearDepthStencilView(world.context, s->view,
                                                      D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);
        } else {
            if (!world.depth_upload_hd || world.depth_hd_w != tex_w || world.depth_hd_h != tex_h) {
                if (world.depth_upload_hd) { ID3D11Texture2D_Release(world.depth_upload_hd); world.depth_upload_hd = NULL; }
                D3D11_TEXTURE2D_DESC upload;
                ID3D11Texture2D_GetDesc(s->texture, &upload);
                upload.BindFlags = 0;
                if (!check_gpu(ID3D11Device_CreateTexture2D(world.device, &upload, NULL, &world.depth_upload_hd),
                               "depth upload hd"))
                    return NULL;
                world.depth_hd_w = tex_w;
                world.depth_hd_h = tex_h;
            }
            DepthPixel *buf = (DepthPixel *)malloc((size_t)tex_w * tex_h * sizeof(DepthPixel));
            if (buf) {
                for (uint32_t y = 0; y < height; y++) {
                    for (uint32_t x = 0; x < width; x++) {
                        const unsigned cell = y * stride + x;
                        float z = host[cell] * (1.0f / 33554432.0f);
                        DepthPixel px = {z >= 1.0f ? 1.0f : z, stencil ? stencil[cell] : 0};
                        for (uint32_t dy = 0; dy < scale; dy++) {
                            DepthPixel *dst_row = buf + (size_t)(y * scale + dy) * tex_w + x * scale;
                            for (uint32_t dx = 0; dx < scale; dx++)
                                dst_row[dx] = px;
                        }
                    }
                }
                ID3D11DeviceContext_UpdateSubresource(world.context, (ID3D11Resource *)world.depth_upload_hd,
                                                      0, NULL, buf, tex_w * (UINT)sizeof(DepthPixel), 0);
                ID3D11DeviceContext_CopyResource(world.context, (ID3D11Resource *)s->texture,
                                                 (ID3D11Resource *)world.depth_upload_hd);
                free(buf);
            }
        }
    } else {
        ID3D11Texture2D *upload_tex = NULL;
        if (width == WIDTH && height == HEIGHT) {
            if (!world.depth_upload) {
                D3D11_TEXTURE2D_DESC upload;
                ID3D11Texture2D_GetDesc(s->texture, &upload);
                upload.BindFlags = 0;
                if (!check_gpu(ID3D11Device_CreateTexture2D(world.device, &upload, NULL, &world.depth_upload),
                               "depth upload"))
                    return NULL;
            }
            upload_tex = world.depth_upload;
        } else {
            if (!world.depth_upload_64) {
                D3D11_TEXTURE2D_DESC upload;
                ID3D11Texture2D_GetDesc(s->texture, &upload);
                upload.BindFlags = 0;
                if (!check_gpu(ID3D11Device_CreateTexture2D(world.device, &upload, NULL, &world.depth_upload_64),
                               "depth upload 64"))
                    return NULL;
            }
            upload_tex = world.depth_upload_64;
        }
        for (int y = 0; y < (int)height; y++) {
            for (int x = 0; x < (int)width; x++) {
                const unsigned cell = y * stride + x;
                float z = host[cell] * (1.0f / 33554432.0f);
                world.packed_depth[y * width + x] = (DepthPixel){z >= 1.0f ? 1.0f : z,
                                                                stencil ? stencil[cell] : 0};
            }
        }
        ID3D11DeviceContext_UpdateSubresource(world.context, (ID3D11Resource *)upload_tex,
                                             0, NULL, world.packed_depth, width * sizeof(DepthPixel), 0);
        ID3D11DeviceContext_CopyResource(world.context, (ID3D11Resource *)s->texture,
                                        (ID3D11Resource *)upload_tex);
    }
    s->host = host;
    s->stencil = stencil;
    s->stride = stride;
    if (start)
        world.depth_ticks += world_ticks() - start;
    return s;
}

static ID3D11ShaderResourceView *texture_for(const Nv2aWorldTexture *t, ColorSurface *target, int *snapshot, int stage)
{
    const Nv2aTexture *d = &t->desc;
    D3D11_TEXTURE2D_DESC desc = {0};
    D3D11_SUBRESOURCE_DATA source = {0};
    ID3D11Texture2D *texture;
    ID3D11ShaderResourceView *view;
    TextureEntry *entry = &world.textures[0];
    HRESULT hr;

    int is_rt_640 = (d->color == 0x12 && d->pitch == WIDTH * 4 &&
                     d->width > 0 && d->width <= WIDTH && d->height > 0 && d->height <= HEIGHT);
    int is_rt_64 = (d->color == 0x12 && d->width == 64 && d->height == 64 && d->pitch == 256);
    if (is_rt_640 || is_rt_64) {
        for (int i = 0; i < COLOR_SLOTS; i++) {
            ColorSurface *s = &world.color[i];
            if ((const uint8_t *)s->host != t->bytes)
                continue;
            if (is_rt_640 && (s->width != WIDTH || s->height != HEIGHT))
                continue;
            if (is_rt_64 && (s->width != 64 || s->height != 64))
                continue;
            if (s != target)
                return s->view;
            if (*snapshot)
                return world.snapshot_view;
            uint32_t snap_w = s->tex_w ? s->tex_w : d->width;
            uint32_t snap_h = s->tex_h ? s->tex_h : d->height;
            if (!world.snapshot || world.snapshot_w != snap_w || world.snapshot_h != snap_h) {
                if (world.snapshot_view) { ID3D11ShaderResourceView_Release(world.snapshot_view); world.snapshot_view = NULL; }
                if (world.snapshot) { ID3D11Texture2D_Release(world.snapshot); world.snapshot = NULL; }
                if (!create_surface_texture_sized(DXGI_FORMAT_B8G8R8A8_UNORM, D3D11_BIND_SHADER_RESOURCE,
                                                  snap_w, snap_h, &world.snapshot) ||
                    !check_gpu(ID3D11Device_CreateShaderResourceView(world.device,
                                 (ID3D11Resource *)world.snapshot, NULL, &world.snapshot_view),
                               "surface feedback view"))
                    return NULL;
                world.snapshot_w = snap_w;
                world.snapshot_h = snap_h;
            }
            unbind_surfaces();
            ID3D11DeviceContext_CopyResource(world.context, (ID3D11Resource *)world.snapshot,
                                             (ID3D11Resource *)s->texture);
            *snapshot = 1;
            return world.snapshot_view;
        }
    }

    /* Samples reject obvious changes cheaply. Multi-point uniform sampling across
     * 5 points (start, 1/4, 1/2, 3/4, end) provides 320 bits of entropy across
     * texture extents, replacing per-draw full buffer memcmp. */
    uint64_t sig0 = 0, sig1 = 0, sig2 = 0, sig3 = 0, sig4 = 0;
    if (t->byte_count >= 32) {
        memcpy(&sig0, t->bytes, 8);
        memcpy(&sig1, t->bytes + (t->byte_count >> 2), 8);
        memcpy(&sig2, t->bytes + (t->byte_count >> 1), 8);
        memcpy(&sig3, t->bytes + ((t->byte_count * 3) >> 2), 8);
        memcpy(&sig4, t->bytes + t->byte_count - 8, 8);
    } else if (t->byte_count >= 16) {
        memcpy(&sig0, t->bytes, 8);
        memcpy(&sig1, t->bytes + (t->byte_count >> 1), 8);
        memcpy(&sig2, t->bytes + t->byte_count - 8, 8);
    } else if (t->byte_count > 0) {
        size_t first = t->byte_count < 8 ? t->byte_count : 8;
        memcpy(&sig0, t->bytes, first);
        if (t->byte_count > 8)
            memcpy(&sig1, t->bytes + 8, t->byte_count - 8);
    }

    static TextureEntry *s_last_stage[4];
    if ((unsigned)stage < 4) {
        TextureEntry *mru = s_last_stage[stage];
        if (mru && mru->view && mru->offset == d->offset && mru->width == d->width &&
            mru->height == d->height && mru->pitch == d->pitch &&
            mru->color == d->color && mru->byte_count == t->byte_count &&
            mru->cube == d->cube && mru->face_stride == d->face_stride &&
            mru->sig0 == sig0 && mru->sig1 == sig1 && mru->sig2 == sig2 &&
            mru->sig3 == sig3 && mru->sig4 == sig4 &&
            !memcmp(mru->source, t->bytes, t->byte_count)) {
            mru->used = world.draws + 1;
            return mru->view;
        }
    }

    for (int i = 0; i < TEXTURE_SLOTS; i++) {
        TextureEntry *candidate = &world.textures[i];
        if (candidate->view && candidate->offset == d->offset && candidate->width == d->width &&
            candidate->height == d->height && candidate->pitch == d->pitch &&
            candidate->color == d->color && candidate->byte_count == t->byte_count &&
            candidate->cube == d->cube && candidate->face_stride == d->face_stride &&
            candidate->sig0 == sig0 && candidate->sig1 == sig1 && candidate->sig2 == sig2 &&
            candidate->sig3 == sig3 && candidate->sig4 == sig4 &&
            !memcmp(candidate->source, t->bytes, t->byte_count)) {
            candidate->used = world.draws + 1;
            if ((unsigned)stage < 4)
                s_last_stage[stage] = candidate;
            return candidate->view;
        }
        if (!candidate->view || candidate->used < entry->used)
            entry = candidate;
    }
    if (entry->capacity < t->byte_count) {
        uint8_t *copy = realloc(entry->source, t->byte_count);
        if (!copy)
            return NULL;
        entry->source = copy;
        entry->capacity = t->byte_count;
    }

    if (d->cube) {
        /* Six faces decoded to row-major RGBA and uploaded as one array; the
         * shader selects the face with the CPU evaluator's exact math. */
        size_t pixels = (size_t)d->width * d->height;
        D3D11_SUBRESOURCE_DATA faces[6];
        if (pixels * 6 > world.decoded_capacity) {
            uint32_t *decoded = realloc(world.decoded, pixels * 6 * sizeof *decoded);
            if (!decoded)
                return NULL;
            world.decoded = decoded;
            world.decoded_capacity = pixels * 6;
        }
        for (unsigned f = 0; f < 6; f++) {
            Nv2aTexture face = *d;
            face.offset = d->offset + f * d->face_stride;
            face.cube = 0;
            if (!nv2a_backend_decode_texture(&face, world.decoded + f * pixels))
                return NULL;
            faces[f].pSysMem = world.decoded + f * pixels;
            faces[f].SysMemPitch = d->width * 4;
            faces[f].SysMemSlicePitch = 0;
        }
        desc.Width = d->width;
        desc.Height = d->height;
        desc.MipLevels = desc.SampleDesc.Count = 1;
        desc.ArraySize = 6;
        desc.Usage = D3D11_USAGE_IMMUTABLE;
        desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
        desc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
        hr = ID3D11Device_CreateTexture2D(world.device, &desc, faces, &texture);
        if (!check_gpu(hr, "guest cube texture"))
            return NULL;
    } else {
        desc.Width = d->width;
        desc.Height = d->height;
        desc.MipLevels = desc.ArraySize = desc.SampleDesc.Count = 1;
        desc.Usage = D3D11_USAGE_IMMUTABLE;
        desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
        desc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
        source.pSysMem = t->bytes;
        source.SysMemPitch = d->pitch;
        if ((d->color == 0x0c || d->color == 0x0e || d->color == 0x0f) &&
            !(d->width % 4) && !(d->height % 4)) {
            desc.Format = d->color == 0x0c ? DXGI_FORMAT_BC1_UNORM :
                          d->color == 0x0e ? DXGI_FORMAT_BC2_UNORM : DXGI_FORMAT_BC3_UNORM;
            source.SysMemPitch = (d->width / 4) * (d->color == 0x0c ? 8 : 16);
        } else if (d->color != 0x12) {
            size_t pixels = (size_t)d->width * d->height;
            if (pixels > world.decoded_capacity) {
                uint32_t *decoded = realloc(world.decoded, pixels * sizeof *decoded);
                if (!decoded)
                    return NULL;
                world.decoded = decoded;
                world.decoded_capacity = pixels;
            }
            if (!nv2a_backend_decode_texture(d, world.decoded))
                return NULL;
            source.pSysMem = world.decoded;
            source.SysMemPitch = d->width * 4;
        }
        hr = ID3D11Device_CreateTexture2D(world.device, &desc, &source, &texture);
        if (!check_gpu(hr, "guest texture"))
            return NULL;
    }
    hr = ID3D11Device_CreateShaderResourceView(world.device, (ID3D11Resource *)texture, NULL, &view);
    ID3D11Texture2D_Release(texture);
    if (!check_gpu(hr, "guest texture view"))
        return NULL;
    if (entry->view)
        ID3D11ShaderResourceView_Release(entry->view);
    memcpy(entry->source, t->bytes, t->byte_count);
    entry->offset = d->offset;
    entry->width = d->width;
    entry->height = d->height;
    entry->pitch = d->pitch;
    entry->color = d->color;
    entry->byte_count = t->byte_count;
    entry->cube = d->cube;
    entry->face_stride = d->face_stride;
    entry->used = world.draws + 1;
    entry->sig0 = sig0;
    entry->sig1 = sig1;
    entry->sig2 = sig2;
    entry->sig3 = sig3;
    entry->sig4 = sig4;
    entry->view = view;
    if ((unsigned)stage < 4)
        s_last_stage[stage] = entry;
    world.uploads++;
    return view;
}

static D3D11_TEXTURE_ADDRESS_MODE address_mode(uint32_t value, int border)
{
    switch (value) {
    case 1: return D3D11_TEXTURE_ADDRESS_WRAP;
    case 2: return D3D11_TEXTURE_ADDRESS_MIRROR;
    case 4: return border ? D3D11_TEXTURE_ADDRESS_BORDER : D3D11_TEXTURE_ADDRESS_CLAMP;
    default: return D3D11_TEXTURE_ADDRESS_CLAMP;
    }
}

static ID3D11SamplerState *sampler_for(const Nv2aWorldTexture *t)
{
    const uint32_t u = address_mode(t->desc.addr_u, t->border_color);
    const uint32_t v = address_mode(t->desc.addr_v, t->border_color);
    const uint32_t border = (u == D3D11_TEXTURE_ADDRESS_BORDER || v == D3D11_TEXTURE_ADDRESS_BORDER)
                         ? t->border : 0;
    D3D11_SAMPLER_DESC desc = {0};
    SamplerEntry *entry;
    for (int i = 0; i < SAMPLER_SLOTS; i++) {
        entry = &world.samplers[i];
        if (entry->sampler && entry->u == u && entry->v == v &&
            entry->border == border && entry->linear == t->bilinear)
            return entry->sampler;
    }
    entry = &world.samplers[world.sampler_next++ % SAMPLER_SLOTS];
    if (entry->sampler)
        ID3D11SamplerState_Release(entry->sampler);
    *entry = (SamplerEntry){u, v, border, t->bilinear, NULL};
    static int s_aniso = -1;
    if (s_aniso < 0) {
        const char *a = getenv("RECOMP_ANISOTROPY");
        s_aniso = (a && *a) ? atoi(a) : 16;
        if (s_aniso < 1) s_aniso = 1;
        if (s_aniso > 16) s_aniso = 16;
    }
    desc.AddressU = u;
    desc.AddressV = v;
    desc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
    if (t->bilinear) {
        desc.Filter = s_aniso > 1 ? D3D11_FILTER_ANISOTROPIC : D3D11_FILTER_MIN_MAG_LINEAR_MIP_POINT;
        desc.MaxAnisotropy = s_aniso > 1 ? s_aniso : 1;
    } else {
        desc.Filter = D3D11_FILTER_MIN_MAG_MIP_POINT;
        desc.MaxAnisotropy = 1;
    }
    desc.ComparisonFunc = D3D11_COMPARISON_NEVER;
    nv2a_rc_unpack(border, desc.BorderColor);
    if (!check_gpu(ID3D11Device_CreateSamplerState(world.device, &desc, &entry->sampler), "sampler"))
        return NULL;
    return entry->sampler;
}

static D3D11_BLEND blend_factor(uint32_t value, int alpha)
{
    switch (value) {
    case 0: return D3D11_BLEND_ZERO;
    case 1: return D3D11_BLEND_ONE;
    case 0x300: return alpha ? D3D11_BLEND_SRC_ALPHA : D3D11_BLEND_SRC_COLOR;
    case 0x301: return alpha ? D3D11_BLEND_INV_SRC_ALPHA : D3D11_BLEND_INV_SRC_COLOR;
    case 0x302: return D3D11_BLEND_SRC_ALPHA;
    case 0x303: return D3D11_BLEND_INV_SRC_ALPHA;
    case 0x304: return D3D11_BLEND_DEST_ALPHA;
    case 0x305: return D3D11_BLEND_INV_DEST_ALPHA;
    case 0x306: return alpha ? D3D11_BLEND_DEST_ALPHA : D3D11_BLEND_DEST_COLOR;
    case 0x307: return alpha ? D3D11_BLEND_INV_DEST_ALPHA : D3D11_BLEND_INV_DEST_COLOR;
    case 0x308: return alpha ? D3D11_BLEND_ONE : D3D11_BLEND_SRC_ALPHA_SAT;
    case 0x8001: case 0x8003: return D3D11_BLEND_BLEND_FACTOR;
    case 0x8002: case 0x8004: return D3D11_BLEND_INV_BLEND_FACTOR;
    default: return D3D11_BLEND_ONE;
    }
}

static D3D11_BLEND_OP blend_op(uint32_t equation)
{
    switch (equation) {
    case 0x8007: return D3D11_BLEND_OP_MIN;
    case 0x8008: return D3D11_BLEND_OP_MAX;
    case 0x800a: return D3D11_BLEND_OP_SUBTRACT;
    case 0x800b: return D3D11_BLEND_OP_REV_SUBTRACT;
    default: return D3D11_BLEND_OP_ADD;
    }
}

static ID3D11BlendState *blend_for(const Nv2aRenderState *s)
{
    const uint32_t mode = s->blend_enable && (s->blend_src != 1 || s->blend_dst != 0);
    const uint32_t equation = mode ? s->blend_eq : 0;
    uint32_t src = mode ? s->blend_src : 1, dst = mode ? s->blend_dst : 0;
    D3D11_BLEND_DESC desc = {0};
    D3D11_RENDER_TARGET_BLEND_DESC *r = &desc.RenderTarget[0];
    BlendEntry *entry;
    if (equation == 0x8007 || equation == 0x8008)
        src = dst = 1;
    for (int i = 0; i < BLEND_SLOTS; i++) {
        entry = &world.blends[i];
        if (entry->blend && entry->mode == mode && entry->src == src && entry->dst == dst &&
            entry->equation == equation && entry->mask == s->color_mask)
            return entry->blend;
    }
    entry = &world.blends[world.blend_next++ % BLEND_SLOTS];
    if (entry->blend)
        ID3D11BlendState_Release(entry->blend);
    *entry = (BlendEntry){mode, src, dst, equation, s->color_mask, NULL};
    r->BlendEnable = mode;
    r->SrcBlend = blend_factor(src, 0);
    r->DestBlend = blend_factor(dst, 0);
    r->SrcBlendAlpha = blend_factor(src, 1);
    r->DestBlendAlpha = blend_factor(dst, 1);
    r->BlendOp = r->BlendOpAlpha = blend_op(equation);
    if (s->color_mask & 0x01000000) r->RenderTargetWriteMask |= D3D11_COLOR_WRITE_ENABLE_ALPHA;
    if (s->color_mask & 0x00010000) r->RenderTargetWriteMask |= D3D11_COLOR_WRITE_ENABLE_RED;
    if (s->color_mask & 0x00000100) r->RenderTargetWriteMask |= D3D11_COLOR_WRITE_ENABLE_GREEN;
    if (s->color_mask & 0x00000001) r->RenderTargetWriteMask |= D3D11_COLOR_WRITE_ENABLE_BLUE;
    if (!check_gpu(ID3D11Device_CreateBlendState(world.device, &desc, &entry->blend), "blend state"))
        return NULL;
    return entry->blend;
}

static int clear_color(uint32_t *target, uint32_t argb, uint32_t mask, uint32_t width, uint32_t height)
{
    ColorSurface *surface = NULL;
    float value[4];
    if (world.failed)
        return 0;
    if (!world.device && !init_world())
        return 0;
    if (!width) width = WIDTH;
    if (!height) height = HEIGHT;
    uint32_t surf_w = (width == 64 && height == 64) ? 64u : WIDTH;
    uint32_t surf_h = (width == 64 && height == 64) ? 64u : HEIGHT;
    int sub_rect = (width < surf_w || height < surf_h);
    end_visibility_span();
    for (int i = 0; i < COLOR_SLOTS; i++) {
        if (world.color[i].host == target &&
            world.color[i].width == surf_w && world.color[i].height == surf_h) {
            surface = &world.color[i];
            break;
        }
    }
    if (!surface)
        surface = bind_color(target, surf_w, surf_h);
    if (!surface)
        return 0;
    nv2a_rc_unpack(argb, value);
    if (mask == 0x01010101 && !sub_rect) {
        ID3D11DeviceContext_ClearRenderTargetView(world.context, surface->target, value);
    } else {
        Nv2aRenderState state = {0};
        ID3D11BlendState *blend;
        state.color_mask = mask;
        blend = blend_for(&state);
        if (!blend)
            return 0;
        uint32_t sc = surface_scale(surf_w, surf_h);
        bind_targets(surface, NULL);
        set_scissor(width * sc, height * sc);
        update_cbuffer(world.clear_value, value, sizeof value);
        ID3D11DeviceContext_IASetInputLayout(world.context, NULL);
        ID3D11DeviceContext_VSSetShader(world.context, world.clear_vs, NULL, 0);
        ID3D11DeviceContext_PSSetShader(world.context, world.clear_ps, NULL, 0);
        ID3D11DeviceContext_OMSetBlendState(world.context, blend, NULL, UINT32_MAX);
        ID3D11DeviceContext_OMSetDepthStencilState(world.context, NULL, 0);
        ID3D11DeviceContext_Draw(world.context, 3, 0);
        world.bound_vs = NULL;
        world.bound_layout = (ID3D11InputLayout *)(uintptr_t)-1;
        world.bound_ps = world.clear_ps;
        /* The clear left its own blend and depth state bound. */
        world.bound_blend = NULL;
        world.bound_depth_state = NULL;
        world.bound_stencil_ref = 0;
    }
    surface->dirty = 1;
    if (mask & 0x00FFFFFF)
        surface->rgb_draws++;
    world.clears++;
    if (world.trace_draws) {
        int slot = (int)(surface - world.color);
        fprintf(stderr, "[TRACE-CLEAR #%llu] surf=%p (slot %d) argb=0x%08X mask=0x%08X draws_in_frame=%u\n",
                (unsigned long long)world.clears, (void*)target, slot, argb, mask, world.draws_in_frame);
        const char *dir = screenshot_dir();
        char name[128];
        _snprintf_s(name, sizeof name, _TRUNCATE, "clear-%llu-slot%d", (unsigned long long)world.clears, slot);
        dump_color_slot_named(dir, name, slot, surface);
    }
    return 1;
}

static D3D11_STENCIL_OP stencil_op(uint32_t op)
{
    switch (op) {
    case 0: return D3D11_STENCIL_OP_ZERO;
    case 0x1e01: return D3D11_STENCIL_OP_REPLACE;
    case 0x1e02: return D3D11_STENCIL_OP_INCR_SAT;
    case 0x1e03: return D3D11_STENCIL_OP_DECR_SAT;
    case 0x150a: return D3D11_STENCIL_OP_INVERT;
    case 0x8507: return D3D11_STENCIL_OP_INCR;
    case 0x8508: return D3D11_STENCIL_OP_DECR;
    default: return D3D11_STENCIL_OP_KEEP;
    }
}

static D3D11_COMPARISON_FUNC compare_func(uint32_t value)
{
    return value >= 0x200 && value <= 0x207 ? (D3D11_COMPARISON_FUNC)(value - 0x1ff)
                                          : D3D11_COMPARISON_ALWAYS;
}

static ID3D11DepthStencilState *depth_for(const Nv2aRenderState *s, const float *depth)
{
    unsigned write = depth && s->depth_write;
    unsigned test = depth && s->depth_test_enable;
    D3D11_DEPTH_STENCIL_DESC desc = {0};
    unsigned index;
    desc.DepthEnable = test || write;
    desc.DepthFunc = test ? compare_func(s->depth_func) : D3D11_COMPARISON_ALWAYS;
    desc.DepthWriteMask = write ? D3D11_DEPTH_WRITE_MASK_ALL : D3D11_DEPTH_WRITE_MASK_ZERO;
    if (s->stencil_enable) {
        StencilEntry *entry;
        memset(&desc.FrontFace, 0, sizeof desc.FrontFace);
        desc.StencilEnable = TRUE;
        desc.StencilReadMask = (UINT8)s->stencil_func_mask;
        desc.StencilWriteMask = (UINT8)s->stencil_write_mask;
        desc.FrontFace.StencilFunc = compare_func(s->stencil_func);
        desc.FrontFace.StencilFailOp = stencil_op(s->stencil_fail);
        desc.FrontFace.StencilDepthFailOp = stencil_op(s->stencil_zfail);
        desc.FrontFace.StencilPassOp = stencil_op(s->stencil_zpass);
        desc.BackFace = desc.FrontFace;
        for (int i = 0; i < STENCIL_STATES; i++) {
            entry = &world.stencil_states[i];
            if (entry->state && !memcmp(&entry->desc, &desc, sizeof desc))
                return entry->state;
        }
        entry = &world.stencil_states[world.stencil_next++ % STENCIL_STATES];
        if (entry->state)
            ID3D11DepthStencilState_Release(entry->state);
        entry->state = NULL;
        entry->desc = desc;
        if (!check_gpu(ID3D11Device_CreateDepthStencilState(world.device, &desc, &entry->state),
                       "stencil state"))
            return NULL;
        return entry->state;
    }
    index = desc.DepthEnable ? desc.DepthFunc - 1 : 8;
    ID3D11DepthStencilState **state = &world.depth_state[index][write];
    if (!*state) {
        if (!check_gpu(ID3D11Device_CreateDepthStencilState(world.device, &desc, state), "depth state"))
            return NULL;
    }
    return *state;
}

/* Diagnostic: predicate occlusion queries (RECOMP_OCCLUSION_PREDICATE=1).
 * D3D11_QUERY_OCCLUSION_PREDICATE returns a boolean and is the cheap query
 * path on some drivers; accurate OCCLUSION queries can serialise the GPU
 * pipeline per query. The report pixel count becomes 0/1 instead of the
 * real count, so this is a probe for measuring query cost, not a semantics-
 * preserving mode: only correct for titles that test zero vs nonzero. */
static int occlusion_predicate(void)
{
    static int s_mode = -1;
    if (s_mode < 0) {
        const char *e = getenv("RECOMP_OCCLUSION_PREDICATE");
        s_mode = (e && *e && *e != '0') ? 1 : 0;
    }
    return s_mode;
}

static HRESULT read_query_pixels(ID3D11Query *query, UINT64 *out)
{
    if (occlusion_predicate()) {
        BOOL visible = 0;
        HRESULT hr = ID3D11DeviceContext_GetData(world.context, (ID3D11Asynchronous *)query,
                                                 &visible, sizeof visible, D3D11_ASYNC_GETDATA_DONOTFLUSH);
        *out = visible ? 1 : 0;
        return hr;
    }
    return ID3D11DeviceContext_GetData(world.context, (ID3D11Asynchronous *)query,
                                       out, sizeof *out, D3D11_ASYNC_GETDATA_DONOTFLUSH);
}

/* Opt-in GPU timestamp instrumentation (RECOMP_GPU_TIMING=1, needs the
 * RECOMP_RASTER_TIMING clock). Measures what the GPU actually spends on
 * each flip's world draws and present blit, independent of the occlusion
 * wait, so a CPU-side stall can be told apart from genuine GPU execution.
 * Four slots ring so results are read two flips late, certainly complete.
 * The world interval runs from the end of one present blit to the next
 * FLIP_STALL flush; the blit interval brackets the present draw. */
static int s_gt_mode = -1;
static struct {
    unsigned cur;
    int started, world_open, blit_ready;
    struct {
        ID3D11Query *disjoint, *w0, *w1, *b0, *b1;
    } slot[4];
    uint64_t frames, skipped, queries_sum, flips;
    double world_ms_sum, blit_ms_sum, worst_ms;
    double pres_init_ms, pres_draw_ms, pres_present_ms, pres_tail_ms, pres_total_ms;
    uint64_t resizes;
    int64_t last_report;
} s_gt;

static int gpu_timing_enabled(void)
{
    if (s_gt_mode < 0) {
        const char *e = getenv("RECOMP_GPU_TIMING");
        s_gt_mode = (e && *e && *e != '0' && world.frequency) ? 1 : 0;
    }
    return s_gt_mode;
}

static ID3D11Query *gt_query(D3D11_QUERY type)
{
    D3D11_QUERY_DESC desc = {type, 0};
    ID3D11Query *q = NULL;
    check_gpu(ID3D11Device_CreateQuery(world.device, &desc, &q), "gpu timing query");
    return q;
}

static void gt_begin_world(void)
{
    if (!gpu_timing_enabled() || world.failed)
        return;
    if (!s_gt.slot[s_gt.cur].disjoint) {
        s_gt.slot[s_gt.cur].disjoint = gt_query(D3D11_QUERY_TIMESTAMP_DISJOINT);
        s_gt.slot[s_gt.cur].w0 = gt_query(D3D11_QUERY_TIMESTAMP);
        s_gt.slot[s_gt.cur].w1 = gt_query(D3D11_QUERY_TIMESTAMP);
        s_gt.slot[s_gt.cur].b0 = gt_query(D3D11_QUERY_TIMESTAMP);
        s_gt.slot[s_gt.cur].b1 = gt_query(D3D11_QUERY_TIMESTAMP);
    }
    if (!s_gt.slot[s_gt.cur].disjoint || !s_gt.slot[s_gt.cur].w0 ||
        !s_gt.slot[s_gt.cur].w1 || !s_gt.slot[s_gt.cur].b0 || !s_gt.slot[s_gt.cur].b1)
        return;
    /* This driver rejects GetData on a Begin-only timestamp query
     * (DXGI_ERROR_INVALID_CALL), so each marker is Begin+End at its point. */
    ID3D11DeviceContext_Begin(world.context, (ID3D11Asynchronous *)s_gt.slot[s_gt.cur].disjoint);
    ID3D11DeviceContext_Begin(world.context, (ID3D11Asynchronous *)s_gt.slot[s_gt.cur].w0);
    ID3D11DeviceContext_End(world.context, (ID3D11Asynchronous *)s_gt.slot[s_gt.cur].w0);
    s_gt.world_open = 1;
    s_gt.blit_ready = 0;
}

/* Called at the FLIP_STALL flush, before the occlusion wait: close the
 * world interval and collect the slot from two flips ago. */
static void gt_end_world(void)
{
    if (!gpu_timing_enabled() || world.failed)
        return;
    if (!s_gt.started) {
        s_gt.started = 1;
        s_gt.last_report = world_ticks();
        gt_begin_world();
    }
    s_gt.queries_sum += world.query_count;
    s_gt.flips++;
    if (s_gt.world_open) {
        ID3D11DeviceContext_Begin(world.context, (ID3D11Asynchronous *)s_gt.slot[s_gt.cur].w1);
        ID3D11DeviceContext_End(world.context, (ID3D11Asynchronous *)s_gt.slot[s_gt.cur].w1);
        s_gt.world_open = 0;
        s_gt.blit_ready = 1;
    }
    unsigned r = (s_gt.cur + 2) % 4;
    if (!s_gt.slot[r].disjoint || !s_gt.slot[r].w0 || !s_gt.slot[r].w1) {
        s_gt.skipped++;
        return;
    }
    D3D11_QUERY_DATA_TIMESTAMP_DISJOINT dj = {0};
    UINT64 t0 = 0, t1 = 0, b0 = 0, b1 = 0;
    HRESULT hr = ID3D11DeviceContext_GetData(world.context, (ID3D11Asynchronous *)s_gt.slot[r].disjoint,
                                             &dj, sizeof dj, D3D11_ASYNC_GETDATA_DONOTFLUSH);
    if (hr == S_OK && !dj.Disjoint && dj.Frequency &&
        ID3D11DeviceContext_GetData(world.context, (ID3D11Asynchronous *)s_gt.slot[r].w0,
                                    &t0, sizeof t0, D3D11_ASYNC_GETDATA_DONOTFLUSH) == S_OK &&
        ID3D11DeviceContext_GetData(world.context, (ID3D11Asynchronous *)s_gt.slot[r].w1,
                                    &t1, sizeof t1, D3D11_ASYNC_GETDATA_DONOTFLUSH) == S_OK &&
        t1 >= t0) {
        double ms = (double)(t1 - t0) * 1000.0 / (double)dj.Frequency;
        s_gt.world_ms_sum += ms;
        if (ms > s_gt.worst_ms)
            s_gt.worst_ms = ms;
        s_gt.frames++;
        if (s_gt.slot[r].b0 && s_gt.slot[r].b1 &&
            ID3D11DeviceContext_GetData(world.context, (ID3D11Asynchronous *)s_gt.slot[r].b0,
                                        &b0, sizeof b0, D3D11_ASYNC_GETDATA_DONOTFLUSH) == S_OK &&
            ID3D11DeviceContext_GetData(world.context, (ID3D11Asynchronous *)s_gt.slot[r].b1,
                                        &b1, sizeof b1, D3D11_ASYNC_GETDATA_DONOTFLUSH) == S_OK &&
            b1 >= b0)
            s_gt.blit_ms_sum += (double)(b1 - b0) * 1000.0 / (double)dj.Frequency;
    } else {
        s_gt.skipped++;
    }
}

/* Bracket the present blit draw; then advance the ring and open the next
 * world interval. */
static void gt_blit(int end)
{
    if (!gpu_timing_enabled() || world.failed || !s_gt.blit_ready)
        return;
    if (!end) {
        ID3D11DeviceContext_Begin(world.context, (ID3D11Asynchronous *)s_gt.slot[s_gt.cur].b0);
        ID3D11DeviceContext_End(world.context, (ID3D11Asynchronous *)s_gt.slot[s_gt.cur].b0);
        return;
    }
    ID3D11DeviceContext_Begin(world.context, (ID3D11Asynchronous *)s_gt.slot[s_gt.cur].b1);
    ID3D11DeviceContext_End(world.context, (ID3D11Asynchronous *)s_gt.slot[s_gt.cur].b1);
    ID3D11DeviceContext_End(world.context, (ID3D11Asynchronous *)s_gt.slot[s_gt.cur].disjoint);
    s_gt.blit_ready = 0;
    s_gt.cur = (s_gt.cur + 1) % 4;
    gt_begin_world();
}

static void gt_report(void)
{
    if (s_gt_mode != 1 || !s_gt.flips)
        return;
    int64_t now = world_ticks();
    double wall_ms = world_ms(now - s_gt.last_report);
    double busy = wall_ms > 0 ? 100.0 * (s_gt.world_ms_sum + s_gt.blit_ms_sum) / wall_ms : 0;
    fprintf(stderr, "[GPU-TIMING] flips=%llu gpu_frames=%llu world_ms=%.1f blit_ms=%.1f "
            "worst_frame_ms=%.1f queries_per_flip=%.1f gpu_busy=%.0f%% skipped=%llu "
            "pres_total_ms=%.1f pres_init_ms=%.1f pres_draw_ms=%.1f pres_present_ms=%.1f pres_tail_ms=%.1f resizes=%llu\n",
            (unsigned long long)s_gt.flips, (unsigned long long)s_gt.frames,
            s_gt.world_ms_sum, s_gt.blit_ms_sum, s_gt.worst_ms,
            (double)s_gt.queries_sum / (double)s_gt.flips, busy,
            (unsigned long long)s_gt.skipped,
            s_gt.pres_total_ms, s_gt.pres_init_ms, s_gt.pres_draw_ms, s_gt.pres_present_ms,
            s_gt.pres_tail_ms, (unsigned long long)s_gt.resizes);
    s_gt.frames = s_gt.skipped = s_gt.queries_sum = s_gt.flips = 0;
    s_gt.world_ms_sum = s_gt.blit_ms_sum = s_gt.worst_ms = 0;
    s_gt.pres_init_ms = s_gt.pres_draw_ms = s_gt.pres_present_ms = s_gt.pres_tail_ms = s_gt.pres_total_ms = 0;
    s_gt.resizes = 0;
    s_gt.last_report = now;
}

static uint64_t s_spin_hits, s_yield_hits, s_total_spins;
static uint64_t s_spin_us_total, s_yield_us_total;
static struct {
    uint64_t seg;
    uint64_t sem;
    uint64_t cap;
    uint64_t other;
} s_flush_src;

static struct {
    ID3D11Query *queries[QUERY_SLOTS];
    VisibilityEvent visibility[REPORT_EVENTS];
    unsigned query_count;
    unsigned event_count;
    int has_uav;
    unsigned uav_staging_idx;
} s_pending;

static void flush_visibility_reports(int src)
{
    if (src == NV2A_FLUSH_SRC_OTHER)
        gt_end_world();
    /* A span still open at the flush has to be sampled now: its pixels belong
     * to this frame even if the guest never sent a report for it. */
    end_visibility_span();

    static int s_pipelined_query = -1;
    if (s_pipelined_query < 0) {
        const char *e = getenv("RECOMP_PIPELINED_QUERY");
        s_pipelined_query = (e && strcmp(e, "0") != 0 && strcmp(e, "cpu") != 0) ? 1 : 0;
    }

    if (s_pipelined_query && src == NV2A_FLUSH_SRC_OTHER) {
        unsigned cur_uav_idx = 0;
        int cur_has_uav = queue_visibility_uav_frame(&cur_uav_idx);

        /* In pipelined mode the pending reports from the previous frame still
         * need resolving even when this frame produced no new events. */
        if (!world.event_count && !s_pending.event_count)
            return;

        int64_t start = world_ticks();
        const ULONGLONG deadline = GetTickCount64() + 2000;
        s_flush_src.other++;
        if ((world.query_count || cur_has_uav) && !world.failed) {
            ID3D11DeviceContext_Flush(world.context);
            world.reports++;
        }

        /* Resolve previous frame's pending visibility reports asynchronously */
        if (s_pending.event_count && !world.failed) {
            if (s_pending.has_uav) {
                D3D11_MAPPED_SUBRESOURCE map;
                HRESULT mhr = ID3D11DeviceContext_Map(world.context, (ID3D11Resource *)world.vis_staging[s_pending.uav_staging_idx],
                                                     0, D3D11_MAP_READ, D3D11_MAP_FLAG_DO_NOT_WAIT, &map);
                if (mhr == DXGI_ERROR_WAS_STILL_DRAWING) {
                    for (int s = 0; s < 1000 && mhr == DXGI_ERROR_WAS_STILL_DRAWING; s++) {
                        _mm_pause();
                        mhr = ID3D11DeviceContext_Map(world.context, (ID3D11Resource *)world.vis_staging[s_pending.uav_staging_idx],
                                                     0, D3D11_MAP_READ, D3D11_MAP_FLAG_DO_NOT_WAIT, &map);
                    }
                    if (mhr == DXGI_ERROR_WAS_STILL_DRAWING) {
                        mhr = ID3D11DeviceContext_Map(world.context, (ID3D11Resource *)world.vis_staging[s_pending.uav_staging_idx],
                                                     0, D3D11_MAP_READ, 0, &map);
                    }
                }
                if (SUCCEEDED(mhr)) {
                    memcpy(world.vis_counts, map.pData, VISIBILITY_SLOTS * sizeof(uint32_t));
                    ID3D11DeviceContext_Unmap(world.context, (ID3D11Resource *)world.vis_staging[s_pending.uav_staging_idx], 0);
                }
            }
            if (s_pending.query_count) {
                ID3D11Query *last_query = s_pending.queries[s_pending.query_count - 1];
                UINT64 dummy = 0;
                HRESULT hr = read_query_pixels(last_query, &dummy);
                if (hr == S_FALSE) {
                    ID3D11DeviceContext_Flush(world.context);
                    for (int spin = 0; spin < 50000 && hr == S_FALSE; spin++) {
                        _mm_pause();
                        hr = read_query_pixels(last_query, &dummy);
                    }
                    while (hr == S_FALSE && GetTickCount64() < deadline) {
                        SwitchToThread();
                        hr = read_query_pixels(last_query, &dummy);
                    }
                }
            }
            uint32_t q_pixels = 0;
            for (unsigned i = 0; i < s_pending.event_count; i++) {
                const VisibilityEvent *event = &s_pending.visibility[i];
                if (event->kind == VISIBILITY_CLEAR) {
                    q_pixels = 0;
                } else if (event->kind == VISIBILITY_VALUE) {
                    q_pixels += event->value;
                } else if (event->kind == VISIBILITY_UAV_SAMPLES) {
                    q_pixels += normalize_vis_pixels(world.vis_counts[event->slot]);
                } else if (event->kind == VISIBILITY_REPORT) {
                    uint32_t pixels = q_pixels + event->cpu_pixels;
                    memcpy(event->destination, &event->stamp, 8);
                    memcpy(event->destination + 8, &pixels, 4);
                    InterlockedExchange((volatile LONG *)(event->destination + 12), 0);
                } else if (!world.failed) {
                    UINT64 pixels = 0;
                    read_query_pixels(event->query, &pixels);
                    q_pixels += normalize_vis_pixels((uint32_t)pixels);
                }
            }
            s_pending.event_count = 0;
            s_pending.query_count = 0;
            s_pending.has_uav = 0;
        }

        /* Ping-pong queries between world and s_pending */
        ID3D11Query *temp_queries[QUERY_SLOTS];
        memcpy(temp_queries, world.queries, sizeof world.queries);
        memcpy(world.queries, s_pending.queries, sizeof world.queries);
        memcpy(s_pending.queries, temp_queries, sizeof world.queries);

        /* Transfer current frame events into s_pending */
        memcpy(s_pending.visibility, world.visibility, world.event_count * sizeof(VisibilityEvent));
        s_pending.event_count = world.event_count;
        s_pending.query_count = world.query_count;
        s_pending.has_uav = cur_has_uav;
        s_pending.uav_staging_idx = cur_uav_idx;

        world.event_count = 0;
        world.query_count = 0;
        world.query_pixels = 0;

        if (start)
            world.report_ticks += world_ticks() - start;
        return;
    }

    resolve_visibility_uav_sync();
    if (!world.event_count && !s_pending.event_count)
        return;
    int64_t start = world_ticks();
    const ULONGLONG deadline = GetTickCount64() + 2000;
    if (world.query_count && !world.failed) {
        if (src == NV2A_FLUSH_SRC_SEGMENT) s_flush_src.seg++;
        else if (src == NV2A_FLUSH_SRC_SEMAPHORE) s_flush_src.sem++;
        else if (src == NV2A_FLUSH_SRC_INTERNAL) s_flush_src.cap++;
        else s_flush_src.other++;
        ID3D11DeviceContext_Flush(world.context);
        world.reports++;
        ID3D11Query *last_query = world.queries[world.query_count - 1];
        UINT64 dummy = 0;
        HRESULT hr = S_FALSE;
        static int s_spin_us_limit = -1;
        if (s_spin_us_limit < 0) {
            const char *e = getenv("RECOMP_QUERY_SPIN_US");
            s_spin_us_limit = (e && *e) ? atoi(e) : 2500; /* default 2500 us (2.5 ms) */
        }
        int64_t spin_start = world_ticks();
        int64_t spin_deadline = (world.frequency && s_spin_us_limit > 0)
            ? spin_start + (world.frequency * s_spin_us_limit / 1000000)
            : spin_start;
        int spin = 0;
        if (s_spin_us_limit > 0 && world.frequency) {
            for (;; spin++) {
                hr = read_query_pixels(last_query, &dummy);
                if (hr != S_FALSE)
                    break;
                if ((spin & 127) == 0 && world_ticks() >= spin_deadline)
                    break;
                _mm_pause();
            }
        } else {
            for (; spin < 10000; spin++) {
                hr = read_query_pixels(last_query, &dummy);
                if (hr != S_FALSE)
                    break;
                _mm_pause();
            }
        }
        int64_t after_spin = world_ticks();
        if (world.frequency)
            s_spin_us_total += (after_spin - spin_start) * 1000000 / world.frequency;
        if (hr == S_OK) {
            s_spin_hits++;
            s_total_spins += spin;
        } else {
            s_yield_hits++;
            while (hr == S_FALSE && GetTickCount64() < deadline) {
                SwitchToThread();
                hr = read_query_pixels(last_query, &dummy);
            }
            int64_t after_yield = world_ticks();
            if (world.frequency)
                s_yield_us_total += (after_yield - after_spin) * 1000000 / world.frequency;
        }
        if (hr == S_FALSE)
            check_gpu(DXGI_ERROR_DEVICE_HUNG, "visibility wait");
    }
    for (unsigned i = 0; i < world.event_count; i++) {
        const VisibilityEvent *event = &world.visibility[i];
        if (event->kind == VISIBILITY_CLEAR) {
            world.query_pixels = 0;
        } else if (event->kind == VISIBILITY_VALUE) {
            world.query_pixels += event->value;
        } else if (event->kind == VISIBILITY_UAV_SAMPLES) {
            world.query_pixels += normalize_vis_pixels(world.vis_counts[event->slot]);
        } else if (event->kind == VISIBILITY_REPORT) {
            uint32_t pixels = world.query_pixels + event->cpu_pixels;
            memcpy(event->destination, &event->stamp, 8);
            memcpy(event->destination + 8, &pixels, 4);
            InterlockedExchange((volatile LONG *)(event->destination + 12), 0);
        } else if (!world.failed) {
            UINT64 pixels = 0;
            HRESULT hr = read_query_pixels(event->query, &pixels);
            if (hr == S_FALSE) {
                for (int spin = 0; spin < 2000 && hr == S_FALSE; spin++) {
                    _mm_pause();
                    hr = read_query_pixels(event->query, &pixels);
                }
                while (hr == S_FALSE && GetTickCount64() < deadline) {
                    SwitchToThread();
                    hr = read_query_pixels(event->query, &pixels);
                }
            }
            if (check_gpu(hr == S_FALSE ? DXGI_ERROR_DEVICE_HUNG : hr, "visibility readback"))
                world.query_pixels += normalize_vis_pixels((uint32_t)pixels);
        }
    }
    world.event_count = 0;
    world.query_count = 0;
    if (start)
        world.report_ticks += world_ticks() - start;
}

static void enqueue_visibility(VisibilityEvent event)
{
    if (world.event_count == REPORT_EVENTS)
        flush_visibility_reports(NV2A_FLUSH_SRC_INTERNAL);
    world.visibility[world.event_count++] = event;
}

static void clear_visibility(void)
{
    end_visibility_span();
    if (world.event_count)
        enqueue_visibility((VisibilityEvent){.kind = VISIBILITY_CLEAR});
    else
        world.query_pixels = 0;
}

/* Occlusion queries accumulate across draws while they are open: D3D11 sums
 * the samples passing depth/stencil for everything drawn between Begin and
 * End, and a report only ever consumes that running total (the events model
 * below adds the samples up and CLEAR resets the sum). Beginning and ending a
 * query around every draw -- BF2 asks for ~355 per flip -- costs ~0.25 ms of
 * GPU time each on this AMD driver, far more than the draws themselves, so
 * one query per CLEAR..REPORT span gives the same counts for a handful of
 * queries per frame. RECOMP_VISIBILITY_SPAN=0 restores per-draw queries for
 * A/B measurement. */
static int visibility_span_enabled(void)
{
    static int s_mode = -1;
    if (s_mode < 0) {
        const char *e = getenv("RECOMP_VISIBILITY_SPAN");
        s_mode = (e && *e == '1');
    }
    /* A predicate answers "did anything pass" over the whole span, which would
     * collapse the per-draw visible count BF2 culls on. */
    return s_mode && !occlusion_predicate();
}

static ID3D11Query *begin_visibility_span(void)
{
    if (world.span_active)
        return world.span_query;
    D3D11_QUERY_DESC desc = {D3D11_QUERY_OCCLUSION, 0};
    if (world.query_count == QUERY_SLOTS || world.event_count == REPORT_EVENTS)
        flush_visibility_reports(NV2A_FLUSH_SRC_INTERNAL);
    if (world.failed)
        return NULL;
    if (!world.queries[world.query_count] &&
        !check_gpu(ID3D11Device_CreateQuery(world.device, &desc,
                             &world.queries[world.query_count]), "visibility query"))
        return NULL;
    world.span_starts++;
    return world.queries[world.query_count];
}

static void end_visibility_span(void)
{
    ID3D11Query *query = world.span_query;
    if (!world.span_active)
        return;
    world.span_active = 0;
    world.span_query = NULL;
    if (!query || world.failed)
        return;
    ID3D11DeviceContext_End(world.context, (ID3D11Asynchronous *)query);
    world.query_count++;
    world.spans_ended++;
    world.queries_ended++;
    enqueue_visibility((VisibilityEvent){.kind = VISIBILITY_SAMPLES, .query = query});
}

static unsigned begin_visibility_slot(void)
{
    if (world.vis_next >= VISIBILITY_SLOTS)
        flush_visibility_reports(NV2A_FLUSH_SRC_INTERNAL);
    if (world.vis_next < VISIBILITY_SLOTS)
        return world.vis_next++;
    return 0;                       /* buffer full and flush failed: no count */
}

/* Synchronous UAV resolution: used when pipelining is disabled or on internal buffer overflow */
static void resolve_visibility_uav_sync(void)
{
    if (!world.vis_next || world.failed || !world.vis_uav)
        return;
    if (world.uav_bound) {
        ID3D11UnorderedAccessView *empty = NULL;
        ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews(world.context, D3D11_KEEP_RENDER_TARGETS_AND_DEPTH_STENCIL, NULL, NULL, 1, 1, &empty, NULL);
        world.uav_bound = 0;
        world.bound_ps = NULL;
    }
    unsigned sync_idx = (s_pending.has_uav && s_pending.uav_staging_idx == 0) ? 1 : 0;
    ID3D11DeviceContext_CopyResource(world.context, (ID3D11Resource *)world.vis_staging[sync_idx],
                                     (ID3D11Resource *)world.vis_buffer);
    D3D11_MAPPED_SUBRESOURCE map;
    if (FAILED(ID3D11DeviceContext_Map(world.context, (ID3D11Resource *)world.vis_staging[sync_idx],
                                       0, D3D11_MAP_READ, 0, &map)))
        return;
    memcpy(world.vis_counts, map.pData, VISIBILITY_SLOTS * sizeof(uint32_t));
    ID3D11DeviceContext_Unmap(world.context, (ID3D11Resource *)world.vis_staging[sync_idx], 0);
    static const UINT zero[4] = {0, 0, 0, 0};
    ID3D11DeviceContext_ClearUnorderedAccessViewUint(world.context, world.vis_uav, zero);
    for (unsigned i = 0; i < world.event_count; i++) {
        VisibilityEvent *e = &world.visibility[i];
        if (e->kind == VISIBILITY_UAV_SAMPLES) {
            e->kind = VISIBILITY_VALUE;
            e->value = normalize_vis_pixels(world.vis_counts[e->slot]);
        }
    }
    world.vis_next = 0;
}

/* Asynchronous/pipelined UAV copy: submits CopyResource to double-buffered staging and clears UAV */
static int queue_visibility_uav_frame(unsigned *out_staging_idx)
{
    if (!world.vis_next || world.failed || !world.vis_uav)
        return 0;
    if (world.uav_bound) {
        ID3D11UnorderedAccessView *empty = NULL;
        ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews(world.context, D3D11_KEEP_RENDER_TARGETS_AND_DEPTH_STENCIL, NULL, NULL, 1, 1, &empty, NULL);
        world.uav_bound = 0;
        world.bound_ps = NULL;
    }
    unsigned idx = (s_pending.has_uav && s_pending.uav_staging_idx == 0) ? 1 : 0;
    ID3D11DeviceContext_CopyResource(world.context, (ID3D11Resource *)world.vis_staging[idx],
                                     (ID3D11Resource *)world.vis_buffer);
    static const UINT zero[4] = {0, 0, 0, 0};
    ID3D11DeviceContext_ClearUnorderedAccessViewUint(world.context, world.vis_uav, zero);
    world.vis_next = 0;
    *out_staging_idx = idx;
    return 1;
}

static int occlusion_conservative(void)
{
    static int s_mode = -1;
    if (s_mode < 0) {
        const char *e = getenv("RECOMP_OCCLUSION_MODE");
        s_mode = (e && strcmp(e, "conservative") == 0) ? 1 : 0;
    }
    return s_mode;
}

static int queue_visibility_report(uint8_t *dst, uint64_t stamp, uint32_t cpu_pixels)
{
    if (occlusion_conservative()) {
        uint32_t pixels = 1024 + cpu_pixels;
        memcpy(dst, &stamp, 8);
        memcpy(dst + 8, &pixels, 4);
        InterlockedExchange((volatile LONG *)(dst + 12), 0);
        return 1;
    }
    end_visibility_span();
    if (!world.event_count && !world.query_pixels)
        return 0;
    enqueue_visibility((VisibilityEvent){.kind = VISIBILITY_REPORT, .destination = dst,
                                         .stamp = stamp, .cpu_pixels = cpu_pixels});
    return 1;
}

static int is_resident_rt(const Nv2aWorldTexture *t)
{
    if (t->desc.color != 0x12)
        return 0;
    for (int j = 0; j < COLOR_SLOTS; j++) {
        const ColorSurface *cs = &world.color[j];
        if (cs->host && (const uint8_t *)cs->host == t->bytes) {
            uint32_t sw = cs->width ? cs->width : WIDTH;
            uint32_t sh = cs->height ? cs->height : HEIGHT;
            if (t->desc.pitch == sw * 4 &&
                t->desc.width > 0 && t->desc.width <= sw &&
                t->desc.height > 0 && t->desc.height <= sh)
                return (sw == WIDTH && sh == HEIGHT) ? 2 : 1;
        }
    }
    return 0;
}

static int draw_world(const Nv2aWorldDraw *draw)
{
    const Nv2aRenderState *s = draw->state;
    ColorSurface *color;
    DepthSurface *depth;
    ID3D11BlendState *blend;
    ID3D11DepthStencilState *depth_state;
    ID3D11ShaderResourceView *views[4] = {0};
    ID3D11ShaderResourceView *cube_views[4] = {0};
    ID3D11SamplerState *samplers[4] = {0};
    ID3D11Query *query = NULL;
    int span_start = 0;
    unsigned uav_slot = 0;
    int uav_used = 0;
    CombinerConstants combiner;
    DrawInfo info = {0};
    float factors[4];
    UINT base;
    int submitted = 0, snapshot = 0;
    int64_t start;
    /* UAV visibility needs no combiner or texture lookups: pure bounding-box
     * visibility draws use the dedicated Early-Z pixel_visibility shader. */
    const int uav_visibility = draw->visibility && visibility_uav_can_handle(s);
    const int shade = (s->color_mask & 0x01010101) || s->alpha_test_enable;
    const int constant_color = s->blend_src == 0x8001 || s->blend_src == 0x8002 ||
                               s->blend_dst == 0x8001 || s->blend_dst == 0x8002;
    const int constant_alpha = s->blend_src == 0x8003 || s->blend_src == 0x8004 ||
                               s->blend_dst == 0x8003 || s->blend_dst == 0x8004;

    if (world.failed || draw->vertex_count > MAX_VERTICES ||
        (s->blend_enable && ((constant_color && constant_alpha) || s->blend_dst == 0x308)))
        return 0;
    if (!world.device && !init_world())
        return 0;
    Nv2aWorldRegion incompatible[5];
    unsigned incompatible_count = 0;
    for (int j = 0; j < COLOR_SLOTS; j++) {
        const ColorSurface *surface = &world.color[j];
        if (!surface->host || !surface->dirty)
            continue;
        size_t sw = surface->width ? surface->width : WIDTH;
        size_t sh = surface->height ? surface->height : HEIGHT;
        const size_t bytes = sw * sh * 4;
        if (surface->host != draw->color && regions_overlap(surface->host, bytes, draw->color, bytes)) {
            incompatible[incompatible_count++] = (Nv2aWorldRegion){(const uint8_t *)draw->color, bytes};
            break;
        }
    }
    for (int i = 0; shade && i < 4; i++) {
        const Nv2aWorldTexture *t = &draw->texture[i];
        if (!t->bytes)
            continue;
        if (is_resident_rt(t))
            continue;
        for (int j = 0; j < COLOR_SLOTS; j++) {
            const ColorSurface *s = &world.color[j];
            if (!s->host || !s->dirty)
                continue;
            uint32_t sw = s->width ? s->width : WIDTH;
            uint32_t sh = s->height ? s->height : HEIGHT;
            size_t bytes = (size_t)sw * sh * 4;
            if ((const uint8_t *)s->host == t->bytes ||
                (t->desc.color == 0x12 && regions_overlap(s->host, bytes, t->bytes, t->byte_count))) {
                incompatible[incompatible_count++] = (Nv2aWorldRegion){t->bytes, t->byte_count};
                break;
            }
        }
    }
    if (incompatible_count) {
        s_sync_stats.incompatible++;
        sync_world(incompatible, incompatible_count, NULL, 0);
    }
    uint32_t dw = draw->width ? draw->width : WIDTH;
    uint32_t dh = draw->height ? draw->height : HEIGHT;
    uint32_t surf_w = (dw == 64 && dh == 64) ? 64u : WIDTH;
    uint32_t surf_h = (dw == 64 && dh == 64) ? 64u : HEIGHT;
    uint32_t sc = surface_scale(surf_w, surf_h);
    color = bind_color(draw->color, surf_w, surf_h);
    depth = draw->depth ? bind_depth(draw->depth, draw->stencil, draw->depth_stride, surf_w, surf_h) : NULL;
    blend = blend_for(s);
    depth_state = depth_for(s, draw->depth);
    if (!color || !blend || !depth_state || (draw->depth && !depth))
        return 0;

    if (world.bound_vs != world.vs || world.bound_layout != world.layout) {
        UINT stride = sizeof(Nv2aWorldVertex), offset = 0;
        ID3D11DeviceContext_IASetInputLayout(world.context, world.layout);
        ID3D11DeviceContext_IASetVertexBuffers(world.context, 0, 1, &world.vertices, &stride, &offset);
        ID3D11DeviceContext_IASetPrimitiveTopology(world.context, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
        ID3D11DeviceContext_VSSetShader(world.context, world.vs, NULL, 0);
        ID3D11DeviceContext_VSSetConstantBuffers(world.context, 1, 1, &world.constants[1]);
        world.bound_vs = world.vs;
        world.bound_layout = world.layout;
    }

    if (draw->visibility && !occlusion_conservative() && uav_visibility && world.ps_uav) {
        world.visibility_draws++;
        uav_slot = begin_visibility_slot();
        uav_used = 1;
        info.visibility_slot = uav_slot;
    } else if (draw->visibility && !occlusion_conservative()) {
        world.visibility_draws++;
        if (visibility_span_enabled()) {
            if (!world.span_active) {
                query = begin_visibility_span();
                if (!query)
                    return 0;
                span_start = 1;
            } else {
                world.span_continued++;
            }
        } else {
            D3D11_QUERY_DESC desc = {occlusion_predicate() ? D3D11_QUERY_OCCLUSION_PREDICATE
                                                           : D3D11_QUERY_OCCLUSION, 0};
            if (world.query_count == QUERY_SLOTS || world.event_count == REPORT_EVENTS)
                flush_visibility_reports(NV2A_FLUSH_SRC_INTERNAL);
            if (world.failed)
                return 0;
            if (!world.queries[world.query_count] &&
                !check_gpu(ID3D11Device_CreateQuery(world.device, &desc,
                                 &world.queries[world.query_count]), "visibility query"))
                return 0;
            query = world.queries[world.query_count];
        }
    }
    start = world_ticks();
    for (int i = 0; shade && i < 4; i++) {
        const Nv2aWorldTexture *texture = &draw->texture[i];
        ID3D11ShaderResourceView **slot;
        if (!texture->bytes)
            continue;
        slot = texture->desc.cube ? &cube_views[i] : &views[i];
        *slot = texture_for(texture, color, &snapshot, i);
        if (!*slot)
            goto release_bindings;
        samplers[i] = sampler_for(texture);
        if (!samplers[i])
            goto release_bindings;
        if (is_resident_rt(texture) == 2) {
            info.texture_scale[i][0] = texture->normalized ? ((float)texture->desc.width / (float)WIDTH) : (1.0f / (float)WIDTH);
            info.texture_scale[i][1] = texture->normalized ? ((float)texture->desc.height / (float)HEIGHT) : (1.0f / (float)HEIGHT);
            info.texture_scale[i][2] = 1.0f;
        } else {
            info.texture_scale[i][0] = texture->normalized ? 1.0f : 1.0f / texture->desc.width;
            info.texture_scale[i][1] = texture->normalized ? 1.0f : 1.0f / texture->desc.height;
            info.texture_scale[i][2] = 1.0f;
        }
    }
    nv2a_rc_unpack(s->blend_color, factors);
    if (constant_alpha)
        factors[0] = factors[1] = factors[2] = factors[3];
    if (start)
        world.texture_ticks += world_ticks() - start;
    start = world_ticks();

    if (!world.vertex_mapped
        || world.vwrite + draw->vertex_count > (UINT)MAX_VERTICES) {
        unmap_vertices();
        if (!check_gpu(ID3D11DeviceContext_Map(world.context, (ID3D11Resource *)world.vertices,
                                  0, D3D11_MAP_WRITE_DISCARD, 0, &world.vertex_map), "vertex upload"))
            goto release_bindings;
        world.vertex_mapped = 1;
    }
    {
        base = world.vwrite;
        memcpy((uint8_t *)world.vertex_map.pData + (size_t)base * sizeof(Nv2aWorldVertex),
               draw->vertices, draw->vertex_count * sizeof *draw->vertices);
        world.vwrite += draw->vertex_count;
    }
    bind_targets(color, depth ? depth->view : NULL);
    if (shade) {
        pack_combiner(&combiner, draw->program);
        memcpy(info.fog_color, draw->fog_color, sizeof info.fog_color);
        info.alpha[0] = s->alpha_ref & 0xff;
        info.alpha[1] = s->alpha_func;
        info.alpha[2] = s->alpha_test_enable;
        info.half_dim[0] = (color->width ? color->width : WIDTH) * 0.5f;
        info.half_dim[1] = (color->height ? color->height : HEIGHT) * 0.5f;
        if (!world.have_constants || memcmp(&world.last_combiner, &combiner, sizeof combiner)) {
            update_cbuffer(world.constants[0], &combiner, sizeof combiner);
            world.last_combiner = combiner;
        }
        if (!world.have_constants || memcmp(&world.last_draw, &info, sizeof info)) {
            update_cbuffer(world.constants[1], &info, sizeof info);
            world.last_draw = info;
        }
        world.have_constants = 1;
        if (!same_views(world.bound_views, views) || !same_views(world.bound_cube_views, cube_views)
            || !same_samplers(world.bound_samplers, samplers)) {
            ID3D11DeviceContext_PSSetShaderResources(world.context, 0, 4, views);
            ID3D11DeviceContext_PSSetShaderResources(world.context, 4, 4, cube_views);
            ID3D11DeviceContext_PSSetSamplers(world.context, 0, 4, samplers);
            memcpy(world.bound_views, views, sizeof views);
            memcpy(world.bound_cube_views, cube_views, sizeof cube_views);
            memcpy(world.bound_samplers, samplers, sizeof samplers);
        }
    } else if (uav_used) {
        info.half_dim[0] = (color->width ? color->width : WIDTH) * 0.5f;
        info.half_dim[1] = (color->height ? color->height : HEIGHT) * 0.5f;
        info.visibility_slot = uav_slot;
        update_cbuffer(world.constants[1], &info, sizeof info);
        world.last_draw = info;
    }
    {
        ID3D11PixelShader *want = NULL;
        if (uav_used) {
            want = world.ps_uav;
        } else if (shade) {
            ID3D11PixelShader *jit_ps = gpu_jit_get_ps(world.device, &combiner,
                                                       s->alpha_test_enable, s->alpha_func);
            want = jit_ps ? jit_ps : world.ps;
        }
        if (world.bound_ps != want) {
            world.bound_ps = want;
            ID3D11DeviceContext_PSSetShader(world.context, world.bound_ps, NULL, 0);
        }
    }
    if (uav_used && !world.uav_bound) {
        ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews(world.context, D3D11_KEEP_RENDER_TARGETS_AND_DEPTH_STENCIL, NULL, NULL, 1, 1, &world.vis_uav, NULL);
        world.uav_bound = 1;
    }
    if (world.bound_depth_state != depth_state
        || world.bound_stencil_ref != (s->stencil_ref & 0xff)) {
        world.bound_depth_state = depth_state;
        world.bound_stencil_ref = s->stencil_ref & 0xff;
        ID3D11DeviceContext_OMSetDepthStencilState(world.context, depth_state,
                                                   world.bound_stencil_ref);
    }
    if (world.bound_blend != blend || memcmp(world.bound_factors, factors, sizeof factors)) {
        world.bound_blend = blend;
        memcpy(world.bound_factors, factors, sizeof factors);
        ID3D11DeviceContext_OMSetBlendState(world.context, blend, factors, UINT32_MAX);
    }
    set_scissor(dw * sc, dh * sc);
    if (query)
        ID3D11DeviceContext_Begin(world.context, (ID3D11Asynchronous *)query);
    ID3D11DeviceContext_Draw(world.context, draw->vertex_count, base);
    if (uav_used)
        enqueue_visibility((VisibilityEvent){.kind = VISIBILITY_UAV_SAMPLES, .slot = uav_slot});
    if (query) {
        if (span_start) {
            /* Leave it open: every later visibility draw in this span adds to
             * the same count until a report or clear ends it. */
            world.span_query = query;
            world.span_active = 1;
        } else {
            ID3D11DeviceContext_End(world.context, (ID3D11Asynchronous *)query);
            world.query_count++;
            world.queries_ended++;
            enqueue_visibility((VisibilityEvent){.kind = VISIBILITY_SAMPLES, .query = query});
        }
    }

    color->dirty |= s->color_mask != 0;
    if (s->color_mask & 0x00FFFFFF)
        color->rgb_draws++;
    if (depth)
        depth->dirty |= s->depth_write || (s->stencil_enable && (s->stencil_write_mask & 0xff));
    if (start)
        world.submit_ticks += world_ticks() - start;
    world.draws++;
    if (world.draws == 1 || world.draws % 3600 == 0)
        fprintf(stderr, "[D3D11-WORLD] %llu draws, %llu readback fences, %llu texture uploads, "
                "%llu visibility waits, %llu resident color clears, %llu visibility draws "
                "(%llu spans, %llu continued)\n",
                 (unsigned long long)world.draws, (unsigned long long)world.syncs,
                 (unsigned long long)world.uploads, (unsigned long long)world.reports,
                 (unsigned long long)world.clears, (unsigned long long)world.visibility_draws,
                 (unsigned long long)world.span_starts,
                 (unsigned long long)world.span_continued);
    if (world.frequency && world.draws % 3600 == 0) {
        static uint64_t last_reports, last_seg, last_sem, last_cap;
        uint64_t cur_reports = world.reports - last_reports; last_reports = world.reports;
        uint64_t cur_seg = s_flush_src.seg - last_seg; last_seg = s_flush_src.seg;
        uint64_t cur_sem = s_flush_src.sem - last_sem; last_sem = s_flush_src.sem;
        uint64_t cur_cap = s_flush_src.cap - last_cap; last_cap = s_flush_src.cap;
        uint64_t cur_spins = s_spin_hits ? (s_total_spins / s_spin_hits) : 0;
        uint64_t avg_spin_us = s_spin_hits ? (s_spin_us_total / s_spin_hits) : 0;
        uint64_t avg_yield_us = s_yield_hits ? (s_yield_us_total / s_yield_hits) : 0;
        fprintf(stderr, "[D3D11-WORLD-COST] last 3600 draws: readback %.1fms reports %.1fms (flushes=%llu [seg=%llu, sem=%llu, cap=%llu], spin_hits=%llu [avg_us=%llu, avg_spin=%llu], yields=%llu [avg_us=%llu]) "
                "depth_upload %.1fms textures %.1fms submit %.1fms\n",
                world_ms(world.sync_ticks), world_ms(world.report_ticks), (unsigned long long)cur_reports,
                (unsigned long long)cur_seg, (unsigned long long)cur_sem, (unsigned long long)cur_cap,
                (unsigned long long)s_spin_hits, (unsigned long long)avg_spin_us, (unsigned long long)cur_spins,
                (unsigned long long)s_yield_hits, (unsigned long long)avg_yield_us,
                world_ms(world.depth_ticks),
                world_ms(world.texture_ticks), world_ms(world.submit_ticks));
        fprintf(stderr, "[D3D11-WORLD-VIS] %llu visibility draws, %llu uav accepted (rej: cmask=%llu dw=%llu at=%llu), %llu span starts, %llu continued, %llu spans ended, %llu queries ended\n",
                (unsigned long long)world.visibility_draws, (unsigned long long)s_uav_stats.accepted,
                (unsigned long long)s_uav_stats.rej_color, (unsigned long long)s_uav_stats.rej_dw,
                (unsigned long long)s_uav_stats.rej_at,
                (unsigned long long)world.span_starts,
                (unsigned long long)world.span_continued, (unsigned long long)world.spans_ended,
                (unsigned long long)world.queries_ended);
        s_spin_hits = s_yield_hits = s_total_spins = s_spin_us_total = s_yield_us_total = 0;
        fprintf(stderr, "[D3D11-WORLD-SYNC] calls: ext_null=%llu ext_reg=%llu full_col=%llu incomp=%llu | copies: col=%llu dep=%llu\n",
                (unsigned long long)s_sync_stats.ext_null, (unsigned long long)s_sync_stats.ext_regions,
                (unsigned long long)s_sync_stats.full_color, (unsigned long long)s_sync_stats.incompatible,
                (unsigned long long)s_sync_stats.color_copies, (unsigned long long)s_sync_stats.depth_copies);
        world.sync_ticks = world.report_ticks = world.depth_ticks = world.texture_ticks = world.submit_ticks = 0;
        gt_report();
        gpu_jit_report_stats();
    }
    submitted = 1;

release_bindings:
    return submitted;
}

static int update_vsh_buffer(VshBuffer *vb, UINT count, UINT stride, const void *data, UINT *out_base)
{
    UINT alloc_count = count ? count : 1;
    if (out_base)
        *out_base = 0;
    if (!vb->buffer || vb->capacity < alloc_count || vb->stride != stride) {
        if (vb->view) {
            ID3D11ShaderResourceView_Release(vb->view);
            vb->view = NULL;
        }
        if (vb->buffer) {
            ID3D11Buffer_Release(vb->buffer);
            vb->buffer = NULL;
        }
        UINT cap = vb->capacity ? vb->capacity * 2 : 1024;
        if (cap < alloc_count)
            cap = alloc_count;
        D3D11_BUFFER_DESC desc = {0};
        desc.ByteWidth = cap * stride;
        desc.Usage = D3D11_USAGE_DYNAMIC;
        desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
        desc.MiscFlags = D3D11_RESOURCE_MISC_BUFFER_STRUCTURED;
        desc.StructureByteStride = stride;
        if (!check_gpu(ID3D11Device_CreateBuffer(world.device, &desc, NULL, &vb->buffer), "vsh buffer"))
            return 0;
        D3D11_SHADER_RESOURCE_VIEW_DESC sdesc = {0};
        sdesc.ViewDimension = D3D11_SRV_DIMENSION_BUFFER;
        sdesc.Buffer.NumElements = cap;
        if (!check_gpu(ID3D11Device_CreateShaderResourceView(world.device, (ID3D11Resource *)vb->buffer,
                                                             &sdesc, &vb->view), "vsh srv"))
            return 0;
        vb->capacity = cap;
        vb->stride = stride;
        vb->write_pos = 0;
        vb->last_base = 0;
        vb->last_bytes = 0;
    }
    if (data && count > 0) {
        UINT bytes = count * stride;
        if (vb->shadow && bytes <= vb->shadow_size) {
            if (vb->last_bytes == bytes && !memcmp(vb->shadow, data, bytes)) {
                if (out_base)
                    *out_base = vb->last_base;
                return 1;
            }
        }
        D3D11_MAP map_type;
        UINT base;
        if (world.can_no_overwrite_srv && vb->write_pos > 0 && vb->write_pos + count <= vb->capacity) {
            map_type = D3D11_MAP_WRITE_NO_OVERWRITE;
            base = vb->write_pos;
        } else {
            map_type = D3D11_MAP_WRITE_DISCARD;
            vb->write_pos = 0;
            vb->last_bytes = 0;
            base = 0;
        }
        D3D11_MAPPED_SUBRESOURCE map;
        if (!check_gpu(ID3D11DeviceContext_Map(world.context, (ID3D11Resource *)vb->buffer,
                                               0, map_type, 0, &map), "vsh map"))
            return 0;
        memcpy((uint8_t *)map.pData + (size_t)base * stride, data, bytes);
        ID3D11DeviceContext_Unmap(world.context, (ID3D11Resource *)vb->buffer, 0);
        vb->write_pos = base + count;
        if (vb->shadow && bytes <= vb->shadow_size) {
            memcpy(vb->shadow, data, bytes);
            vb->last_bytes = bytes;
            vb->last_base = base;
        }
        if (out_base)
            *out_base = base;
    }
    return 1;
}

static int upload_vsh_indices(UINT count, const uint32_t *indices, UINT *out_start)
{
    UINT alloc_count = count ? count : 1;
    if (out_start)
        *out_start = 0;
    if (!world.vsh_ib || world.vsh_ib_cap < alloc_count) {
        if (world.vsh_ib) {
            ID3D11Buffer_Release(world.vsh_ib);
            world.vsh_ib = NULL;
        }
        world.bound_ib = NULL;
        UINT cap = world.vsh_ib_cap ? world.vsh_ib_cap * 2 : 65536;
        if (cap < alloc_count)
            cap = alloc_count;
        D3D11_BUFFER_DESC desc = {0};
        desc.ByteWidth = cap * sizeof(uint32_t);
        desc.Usage = D3D11_USAGE_DYNAMIC;
        desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
        desc.BindFlags = D3D11_BIND_INDEX_BUFFER;
        if (!check_gpu(ID3D11Device_CreateBuffer(world.device, &desc, NULL, &world.vsh_ib), "vsh ib"))
            return 0;
        world.vsh_ib_cap = cap;
        world.vsh_ib_pos = 0;
    }
    if (indices && count > 0) {
        D3D11_MAP map_type;
        UINT start;
        if (world.vsh_ib_pos > 0 && world.vsh_ib_pos + count <= world.vsh_ib_cap) {
            map_type = D3D11_MAP_WRITE_NO_OVERWRITE;
            start = world.vsh_ib_pos;
        } else {
            map_type = D3D11_MAP_WRITE_DISCARD;
            world.vsh_ib_pos = 0;
            start = 0;
        }
        D3D11_MAPPED_SUBRESOURCE map;
        if (!check_gpu(ID3D11DeviceContext_Map(world.context, (ID3D11Resource *)world.vsh_ib,
                                               0, map_type, 0, &map), "vsh ib map"))
            return 0;
        memcpy((uint32_t *)map.pData + start, indices, (size_t)count * sizeof(uint32_t));
        ID3D11DeviceContext_Unmap(world.context, (ID3D11Resource *)world.vsh_ib, 0);
        world.vsh_ib_pos = start + count;
        if (out_start)
            *out_start = start;
    }
    return 1;
}

static int draw_world_program(const Nv2aWorldDrawProgram *draw)
{
    const Nv2aRenderState *s = draw->state;
    ID3D11ShaderResourceView *views[4] = {0}, *cube_views[4] = {0};
    ID3D11SamplerState *samplers[4] = {0};
    ID3D11BlendState *blend;
    ID3D11DepthStencilState *depth_state;
    ColorSurface *color;
    DepthSurface *depth;
    ID3D11Query *query = NULL;
    int span_start = 0;
    unsigned uav_slot = 0;
    int uav_used = 0;
    CombinerConstants combiner;
    DrawInfo info = {0};
    float factors[4];
    int submitted = 0, snapshot = 0;
    int64_t start;
    /* UAV visibility needs no combiner or texture lookups: pure bounding-box
     * visibility draws use the dedicated Early-Z pixel_visibility shader. */
    const int uav_visibility = draw->visibility && visibility_uav_can_handle(s);
    const int shade = (s->color_mask & 0x01010101) || s->alpha_test_enable;
    const int constant_color = s->blend_src == 0x8001 || s->blend_src == 0x8002 ||
                               s->blend_dst == 0x8001 || s->blend_dst == 0x8002;
    const int constant_alpha = s->blend_src == 0x8003 || s->blend_src == 0x8004 ||
                               s->blend_dst == 0x8003 || s->blend_dst == 0x8004;

    if (world.failed || !draw->index_count ||
        (s->blend_enable && ((constant_color && constant_alpha) || s->blend_dst == 0x308)))
        return 0;
    if (!world.device && !init_world())
        return 0;

    Nv2aWorldRegion incompatible[5];
    unsigned incompatible_count = 0;
    for (int j = 0; j < COLOR_SLOTS; j++) {
        const ColorSurface *surface = &world.color[j];
        if (!surface->host || !surface->dirty)
            continue;
        size_t sw = surface->width ? surface->width : WIDTH;
        size_t sh = surface->height ? surface->height : HEIGHT;
        const size_t bytes = sw * sh * 4;
        if (surface->host != draw->color && regions_overlap(surface->host, bytes, draw->color, bytes)) {
            incompatible[incompatible_count++] = (Nv2aWorldRegion){(const uint8_t *)draw->color, bytes};
            break;
        }
    }
    for (int i = 0; shade && i < 4; i++) {
        const Nv2aWorldTexture *t = &draw->texture[i];
        if (!t->bytes)
            continue;
        if (is_resident_rt(t))
            continue;
        for (int j = 0; j < COLOR_SLOTS; j++) {
            const ColorSurface *cs = &world.color[j];
            if (!cs->host || !cs->dirty)
                continue;
            uint32_t sw = cs->width ? cs->width : WIDTH;
            uint32_t sh = cs->height ? cs->height : HEIGHT;
            size_t bytes = (size_t)sw * sh * 4;
            if ((const uint8_t *)cs->host == t->bytes ||
                (t->desc.color == 0x12 && regions_overlap(cs->host, bytes, t->bytes, t->byte_count))) {
                incompatible[incompatible_count++] = (Nv2aWorldRegion){t->bytes, t->byte_count};
                break;
            }
        }
    }
    if (incompatible_count) {
        static int s_incomp_log = 0;
        if (s_incomp_log < 10) {
            s_incomp_log++;
            fprintf(stderr, "[GPU-WORLD-INCOMP-PROG #%d] draw->color=%p shade=%d\n", s_incomp_log, (void*)draw->color, shade);
            for (int k = 0; k < (int)incompatible_count; k++)
                fprintf(stderr, "   incomp[%d]: bytes=%p size=%zu\n", k, (void*)incompatible[k].bytes, incompatible[k].size);
            for (int j = 0; j < COLOR_SLOTS; j++)
                if (world.color[j].host)
                    fprintf(stderr, "   world.color[%d]: host=%p dirty=%d\n", j, (void*)world.color[j].host, world.color[j].dirty);
            for (int i = 0; i < 4; i++) {
                const Nv2aWorldTexture *t = &draw->texture[i];
                if (t->bytes)
                    fprintf(stderr, "   tex[%d]: bytes=%p size=%u col=0x%x %ux%u pitch=%u\n",
                            i, (void*)t->bytes, t->byte_count, t->desc.color, t->desc.width, t->desc.height, t->desc.pitch);
            }
        }
        s_sync_stats.incompatible++;
        sync_world(incompatible, incompatible_count, NULL, 0);
    }
    uint32_t dw = draw->width ? draw->width : WIDTH;
    uint32_t dh = draw->height ? draw->height : HEIGHT;
    uint32_t surf_w = (dw == 64 && dh == 64) ? 64u : WIDTH;
    uint32_t surf_h = (dw == 64 && dh == 64) ? 64u : HEIGHT;
    uint32_t sc = surface_scale(surf_w, surf_h);
    color = bind_color(draw->color, surf_w, surf_h);
    depth = draw->depth ? bind_depth(draw->depth, draw->stencil, draw->depth_stride, surf_w, surf_h) : NULL;
    blend = blend_for(s);
    depth_state = depth_for(s, draw->depth);
    if (!color || !blend || !depth_state || (draw->depth && !depth))
        return 0;

    if (draw->visibility && !occlusion_conservative() && uav_visibility && world.ps_uav) {
        world.visibility_draws++;
        uav_slot = begin_visibility_slot();
        uav_used = 1;
        info.visibility_slot = uav_slot;
    } else if (draw->visibility && !occlusion_conservative()) {
        world.visibility_draws++;
        if (visibility_span_enabled()) {
            if (!world.span_active) {
                query = begin_visibility_span();
                if (!query)
                    return 0;
                span_start = 1;
            } else {
                world.span_continued++;
            }
        } else {
            D3D11_QUERY_DESC desc = {occlusion_predicate() ? D3D11_QUERY_OCCLUSION_PREDICATE
                                                           : D3D11_QUERY_OCCLUSION, 0};
            if (world.query_count == QUERY_SLOTS || world.event_count == REPORT_EVENTS)
                flush_visibility_reports(NV2A_FLUSH_SRC_INTERNAL);
            if (world.failed)
                return 0;
            if (!world.queries[world.query_count] &&
                !check_gpu(ID3D11Device_CreateQuery(world.device, &desc,
                                 &world.queries[world.query_count]), "visibility query"))
                return 0;
            query = world.queries[world.query_count];
        }
    }
    start = world_ticks();
    for (int i = 0; shade && i < 4; i++) {
        const Nv2aWorldTexture *texture = &draw->texture[i];
        ID3D11ShaderResourceView **slot;
        if (!texture->bytes)
            continue;
        slot = texture->desc.cube ? &cube_views[i] : &views[i];
        *slot = texture_for(texture, color, &snapshot, i);
        if (!*slot)
            goto release_bindings;
        samplers[i] = sampler_for(texture);
        if (!samplers[i])
            goto release_bindings;
        if (is_resident_rt(texture) == 2) {
            info.texture_scale[i][0] = texture->normalized ? ((float)texture->desc.width / (float)WIDTH) : (1.0f / (float)WIDTH);
            info.texture_scale[i][1] = texture->normalized ? ((float)texture->desc.height / (float)HEIGHT) : (1.0f / (float)HEIGHT);
            info.texture_scale[i][2] = 1.0f;
        } else {
            info.texture_scale[i][0] = texture->normalized ? 1.0f : 1.0f / texture->desc.width;
            info.texture_scale[i][1] = texture->normalized ? 1.0f : 1.0f / texture->desc.height;
            info.texture_scale[i][2] = 1.0f;
        }
    }
    nv2a_rc_unpack(s->blend_color, factors);
    if (constant_alpha)
        factors[0] = factors[1] = factors[2] = factors[3];
    if (start)
        world.texture_ticks += world_ticks() - start;
    start = world_ticks();

    bind_targets(color, depth ? depth->view : NULL);
    if (shade) {
        pack_combiner(&combiner, draw->program);
        memcpy(info.fog_color, draw->fog_color, sizeof info.fog_color);
        info.alpha[0] = s->alpha_ref & 0xff;
        info.alpha[1] = s->alpha_func;
        info.alpha[2] = s->alpha_test_enable;
        info.half_dim[0] = (color->width ? color->width : WIDTH) * 0.5f;
        info.half_dim[1] = (color->height ? color->height : HEIGHT) * 0.5f;
        if (!world.have_constants || memcmp(&world.last_combiner, &combiner, sizeof combiner)) {
            update_cbuffer(world.constants[0], &combiner, sizeof combiner);
            world.last_combiner = combiner;
        }
        if (!world.have_constants || memcmp(&world.last_draw, &info, sizeof info)) {
            update_cbuffer(world.constants[1], &info, sizeof info);
            world.last_draw = info;
        }
        world.have_constants = 1;
        if (!same_views(world.bound_views, views) || !same_views(world.bound_cube_views, cube_views)
            || !same_samplers(world.bound_samplers, samplers)) {
            ID3D11DeviceContext_PSSetShaderResources(world.context, 0, 4, views);
            ID3D11DeviceContext_PSSetShaderResources(world.context, 4, 4, cube_views);
            ID3D11DeviceContext_PSSetSamplers(world.context, 0, 4, samplers);
            memcpy(world.bound_views, views, sizeof views);
            memcpy(world.bound_cube_views, cube_views, sizeof cube_views);
            memcpy(world.bound_samplers, samplers, sizeof samplers);
        }
    } else if (uav_used) {
        info.half_dim[0] = (color->width ? color->width : WIDTH) * 0.5f;
        info.half_dim[1] = (color->height ? color->height : HEIGHT) * 0.5f;
        info.visibility_slot = uav_slot;
        update_cbuffer(world.constants[1], &info, sizeof info);
        world.last_draw = info;
    }
    {
        ID3D11PixelShader *want = NULL;
        if (uav_used) {
            want = world.ps_uav;
        } else if (shade) {
            ID3D11PixelShader *jit_ps = gpu_jit_get_ps(world.device, &combiner,
                                                       s->alpha_test_enable, s->alpha_func);
            want = jit_ps ? jit_ps : world.ps;
        }
        if (world.bound_ps != want) {
            world.bound_ps = want;
            ID3D11DeviceContext_PSSetShader(world.context, world.bound_ps, NULL, 0);
        }
    }
    if (uav_used && !world.uav_bound) {
        ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews(world.context, D3D11_KEEP_RENDER_TARGETS_AND_DEPTH_STENCIL, NULL, NULL, 1, 1, &world.vis_uav, NULL);
        world.uav_bound = 1;
    }
    if (world.bound_depth_state != depth_state
        || world.bound_stencil_ref != (s->stencil_ref & 0xff)) {
        world.bound_depth_state = depth_state;
        world.bound_stencil_ref = s->stencil_ref & 0xff;
        ID3D11DeviceContext_OMSetDepthStencilState(world.context, depth_state,
                                                   world.bound_stencil_ref);
    }
    if (world.bound_blend != blend || memcmp(world.bound_factors, factors, sizeof factors)) {
        world.bound_blend = blend;
        memcpy(world.bound_factors, factors, sizeof factors);
        ID3D11DeviceContext_OMSetBlendState(world.context, blend, factors, UINT32_MAX);
    }

    /* Resolve native HLSL JIT vertex shader (falls back to generic interpreter) */
    ID3D11VertexShader *jit_vs = gpu_jit_get_vsh(world.device, draw->instructions,
                                                 draw->instruction_count, draw->stream_mask,
                                                 draw->program_revision);
    ID3D11VertexShader *want_vs = jit_vs ? jit_vs : world.vsh_gather;

    /* Stream vertex shader buffers into dynamic ring buffers (zero GPU stalls) */
    UINT ins_base = 0, const_base = 0, words_base = 0, attrs_base = 0, defaults_base = 0, start_index = 0;
    if (!jit_vs) {
        if (!update_vsh_buffer(&world.vsh_ins, draw->instruction_count * 44, 4, draw->instructions, &ins_base))
            goto release_bindings;
    }
    if (draw->const_revision && draw->const_revision == world.last_const_rev && world.vsh_const.buffer) {
        const_base = world.vsh_const.last_base;
    } else {
        if (!update_vsh_buffer(&world.vsh_const, draw->constant_count, 16, draw->constants, &const_base))
            goto release_bindings;
        world.last_const_rev = draw->const_revision;
    }
    if (!update_vsh_buffer(&world.vsh_words, (draw->vertex_bytes + 3) / 4, 4, draw->vertex_words, &words_base))
        goto release_bindings;
    if (!update_vsh_buffer(&world.vsh_attrs, 16, 16, draw->attributes, &attrs_base))
        goto release_bindings;
    if (!update_vsh_buffer(&world.vsh_defaults, 16, 16, draw->attribute_defaults, &defaults_base))
        goto release_bindings;
    if (!upload_vsh_indices(draw->index_count, draw->indices, &start_index))
        goto release_bindings;

    struct {
        uint32_t ins_count;
        uint32_t vertex_count;
        uint32_t ins_base;
        uint32_t const_base;
    } p0 = {draw->instruction_count, draw->index_count, ins_base, const_base};

    struct {
        uint32_t vertex_bytes;
        uint32_t stream_mask;
        uint32_t index_count;
        uint32_t words_base;
    } p1 = {draw->vertex_bytes, draw->stream_mask, draw->index_count, words_base};

    struct {
        float aa_scale[2];
        float fog_param[2];
        uint32_t fog_mode;
        float half_dim[2];
        uint32_t reserved;
    } p2 = {
        {draw->aa_scale[0], draw->aa_scale[1]},
        {draw->fog_param[0], draw->fog_param[1]},
        draw->fog_mode,
        {(color->width ? color->width : WIDTH) * 0.5f, (color->height ? color->height : HEIGHT) * 0.5f},
        ((attrs_base / 16u) & 0xFFFFu) | (((defaults_base / 16u) & 0xFFFFu) << 16)
    };

    static struct {
        uint32_t ins_count;
        uint32_t vertex_count;
        uint32_t ins_base;
        uint32_t const_base;
    } last_p0;
    static int have_last_p0 = 0;
    if (!have_last_p0 || memcmp(&last_p0, &p0, sizeof p0)) {
        update_cbuffer(world.vsh_constants[0], &p0, sizeof p0);
        memcpy(&last_p0, &p0, sizeof p0);
        have_last_p0 = 1;
    }

    static struct {
        uint32_t vertex_bytes;
        uint32_t stream_mask;
        uint32_t index_count;
        uint32_t words_base;
    } last_p1;
    static int have_last_p1 = 0;
    if (!have_last_p1 || memcmp(&last_p1, &p1, sizeof p1)) {
        update_cbuffer(world.vsh_constants[1], &p1, sizeof p1);
        memcpy(&last_p1, &p1, sizeof p1);
        have_last_p1 = 1;
    }
    static struct {
        float aa_scale[2];
        float fog_param[2];
        uint32_t fog_mode;
        float half_dim[2];
        uint32_t reserved;
    } last_p2;
    static int have_last_p2 = 0;
    if (!have_last_p2 || memcmp(&last_p2, &p2, sizeof p2)) {
        update_cbuffer(world.vsh_constants[2], &p2, sizeof p2);
        memcpy(&last_p2, &p2, sizeof p2);
        have_last_p2 = 1;
    }

    ID3D11ShaderResourceView *vsh_views[7] = {
        world.vsh_ins.view,
        world.vsh_const.view,
        NULL,
        world.vsh_words.view,
        world.vsh_attrs.view,
        NULL,
        world.vsh_defaults.view
    };
    static ID3D11ShaderResourceView *last_vsh_views[7];
    if (world.bound_layout != NULL) {
        ID3D11DeviceContext_IASetInputLayout(world.context, NULL);
        ID3D11DeviceContext_IASetVertexBuffers(world.context, 0, 0, NULL, NULL, NULL);
        ID3D11DeviceContext_IASetPrimitiveTopology(world.context, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
        ID3D11DeviceContext_VSSetConstantBuffers(world.context, 0, 3, world.vsh_constants);
        ID3D11DeviceContext_VSSetShaderResources(world.context, 0, 7, vsh_views);
        memcpy(last_vsh_views, vsh_views, sizeof vsh_views);
        world.bound_layout = NULL;
    } else if (memcmp(last_vsh_views, vsh_views, sizeof vsh_views)) {
        ID3D11DeviceContext_VSSetShaderResources(world.context, 0, 7, vsh_views);
        memcpy(last_vsh_views, vsh_views, sizeof vsh_views);
    }
    if (world.bound_vs != want_vs) {
        ID3D11DeviceContext_VSSetShader(world.context, want_vs, NULL, 0);
        world.bound_vs = want_vs;
    }
    if (world.bound_ib != world.vsh_ib) {
        ID3D11DeviceContext_IASetIndexBuffer(world.context, world.vsh_ib, DXGI_FORMAT_R32_UINT, 0);
        world.bound_ib = world.vsh_ib;
    }

    set_scissor(dw * sc, dh * sc);
    if (query)
        ID3D11DeviceContext_Begin(world.context, (ID3D11Asynchronous *)query);
    ID3D11DeviceContext_DrawIndexed(world.context, draw->index_count, start_index, 0);
    if (uav_used)
        enqueue_visibility((VisibilityEvent){.kind = VISIBILITY_UAV_SAMPLES, .slot = uav_slot});

    world.draws_in_frame++;
    if (world.trace_draws == 1)
        world.trace_draws = 2;
    if (world.trace_draws == 2) {
        int slot = (int)(color - world.color);
        uint32_t df = world.draws_in_frame;
        if (df <= 5 || df % 50 == 0 || df == 10 || df == 25 || df == 75 || df == 100 ||
            df == 150 || df == 200 || df == 300 || df == 400 || df == 500 || df == 600) {
            fprintf(stderr, "[TRACE-DRAW #%u] slot %d: idx=%u shade=%d mask=0x%08X src=0x%X dst=0x%X blend=%d\n",
                    df, slot, draw->index_count, shade, s->color_mask, s->blend_src, s->blend_dst, s->blend_enable);
            const char *dir = screenshot_dir();
            char name[128];
            _snprintf_s(name, sizeof name, _TRUNCATE, "draw-%04u-slot%d", df, slot);
            dump_color_slot_named(dir, name, slot, color);
        }
    }
    if (query) {
        if (span_start) {
            /* Leave it open: every later visibility draw in this span adds to
             * the same count until a report or clear ends it. */
            world.span_query = query;
            world.span_active = 1;
        } else {
            ID3D11DeviceContext_End(world.context, (ID3D11Asynchronous *)query);
            world.query_count++;
            world.queries_ended++;
            enqueue_visibility((VisibilityEvent){.kind = VISIBILITY_SAMPLES, .query = query});
        }
    }

    color->dirty |= s->color_mask != 0;
    if (s->color_mask & 0x00FFFFFF)
        color->rgb_draws++;
    if (depth)
        depth->dirty |= s->depth_write || (s->stencil_enable && (s->stencil_write_mask & 0xff));
    if (start)
        world.submit_ticks += world_ticks() - start;
    world.draws++;
    if (world.frequency && world.draws % 3600 == 0) {
        static uint64_t last_reports, last_seg, last_sem, last_cap;
        uint64_t cur_reports = world.reports - last_reports; last_reports = world.reports;
        uint64_t cur_seg = s_flush_src.seg - last_seg; last_seg = s_flush_src.seg;
        uint64_t cur_sem = s_flush_src.sem - last_sem; last_sem = s_flush_src.sem;
        uint64_t cur_cap = s_flush_src.cap - last_cap; last_cap = s_flush_src.cap;
        uint64_t cur_spins = s_spin_hits ? (s_total_spins / s_spin_hits) : 0;
        uint64_t avg_spin_us = s_spin_hits ? (s_spin_us_total / s_spin_hits) : 0;
        uint64_t avg_yield_us = s_yield_hits ? (s_yield_us_total / s_yield_hits) : 0;
        fprintf(stderr, "[D3D11-WORLD-COST] last 3600 draws: readback %.1fms reports %.1fms (flushes=%llu [seg=%llu, sem=%llu, cap=%llu], spin_hits=%llu [avg_us=%llu, avg_spin=%llu], yields=%llu [avg_us=%llu]) "
                "depth_upload %.1fms textures %.1fms submit %.1fms\n",
                world_ms(world.sync_ticks), world_ms(world.report_ticks), (unsigned long long)cur_reports,
                (unsigned long long)cur_seg, (unsigned long long)cur_sem, (unsigned long long)cur_cap,
                (unsigned long long)s_spin_hits, (unsigned long long)avg_spin_us, (unsigned long long)cur_spins,
                (unsigned long long)s_yield_hits, (unsigned long long)avg_yield_us,
                world_ms(world.depth_ticks),
                world_ms(world.texture_ticks), world_ms(world.submit_ticks));
        fprintf(stderr, "[D3D11-WORLD-VIS] %llu visibility draws, %llu uav accepted (rej: cmask=%llu dw=%llu at=%llu), %llu span starts, %llu continued, %llu spans ended, %llu queries ended\n",
                (unsigned long long)world.visibility_draws, (unsigned long long)s_uav_stats.accepted,
                (unsigned long long)s_uav_stats.rej_color, (unsigned long long)s_uav_stats.rej_dw,
                (unsigned long long)s_uav_stats.rej_at,
                (unsigned long long)world.span_starts,
                (unsigned long long)world.span_continued, (unsigned long long)world.spans_ended,
                (unsigned long long)world.queries_ended);
        s_spin_hits = s_yield_hits = s_total_spins = s_spin_us_total = s_yield_us_total = 0;
        fprintf(stderr, "[D3D11-WORLD-SYNC] calls: ext_null=%llu ext_reg=%llu full_col=%llu incomp=%llu | copies: col=%llu dep=%llu\n",
                (unsigned long long)s_sync_stats.ext_null, (unsigned long long)s_sync_stats.ext_regions,
                (unsigned long long)s_sync_stats.full_color, (unsigned long long)s_sync_stats.incompatible,
                (unsigned long long)s_sync_stats.color_copies, (unsigned long long)s_sync_stats.depth_copies);
        world.sync_ticks = world.report_ticks = world.depth_ticks = world.texture_ticks = world.submit_ticks = 0;
        gt_report();
        gpu_jit_report_stats();
    }
    submitted = 1;

release_bindings:
    return submitted;
}

extern HWND xbox_FramebufferWindowGetHwnd(void);
extern void xbox_FramebufferWindowDirectActive(int active);

static void release_swapchain_rtvs(void)
{
    ID3D11DeviceContext_OMSetRenderTargets(world.context, 0, NULL, NULL);
    if (world.swapchain_rtv) {
        ID3D11RenderTargetView_Release(world.swapchain_rtv);
        world.swapchain_rtv = NULL;
    }
    if (world.shot_staging) {
        ID3D11Texture2D_Release(world.shot_staging);
        world.shot_staging = NULL;
        world.shot_w = world.shot_h = 0;
    }
}

/* Flip-model chains expose their current back buffer as buffer 0: this AMD
 * driver returns DXGI_ERROR_INVALID_CALL from GetBuffer(1..) on a
 * FLIP_DISCARD chain (verified with logs/gpu60-20261117/flipprobe.c, which
 * also presents 500+ frames through the buffer-0 view without loss). Keep
 * one view of buffer 0 and let DXGI rotate underneath it. */
static int create_swapchain_rtvs(void)
{
    ID3D11Texture2D *back = NULL;
    HRESULT hr = IDXGISwapChain_GetBuffer(world.swapchain, 0, &IID_ID3D11Texture2D, (void **)&back);
    if (FAILED(hr))
        return 0;
    hr = ID3D11Device_CreateRenderTargetView(world.device, (ID3D11Resource *)back, NULL,
                                             &world.swapchain_rtv);
    ID3D11Texture2D_Release(back);
    return SUCCEEDED(hr);
}

/* Opt-in capture of the presented image. A flip-model chain's window is not in
 * DWM's redirection surface, so GDI screen grabs (BitBlt/PIL ImageGrab) return
 * the desktop underneath it -- verified here: the harness screenshots showed
 * wallpaper where the game was. Visual verification therefore has to come from
 * the back buffer itself.
 *
 * RECOMP_SCREENSHOT_DIR=<dir>        enable, files are present-NNNNN.bmp (BGRX)
 * RECOMP_SCREENSHOT_SECONDS=150,168  once per listed second after the first
 *                                    present (matches the harness timeline)
 * RECOMP_SCREENSHOT_EVERY=<n>        every n-th present
 *
 * Each capture is a staging readback, so it stalls the pipeline for a few ms;
 * use it on frames whose timing does not matter. */
static void write_present_bmp(const char *dir, unsigned n, uint32_t w, uint32_t h,
                              const void *bits, uint32_t pitch)
{
    char path[512];
    _snprintf_s(path, sizeof path, _TRUNCATE, "%s\\present-%05u.bmp", dir, n);
    FILE *f = NULL;
    if (fopen_s(&f, path, "wb") || !f) {
        fprintf(stderr, "[D3D11-WORLD] screenshot: cannot write %s\n", path);
        return;
    }
    BITMAPFILEHEADER fh;
    BITMAPINFOHEADER ih;
    memset(&fh, 0, sizeof fh);
    memset(&ih, 0, sizeof ih);
    uint32_t row = w * 4;
    fh.bfType = 0x4D42;                    /* "BM" */
    fh.bfOffBits = sizeof fh + sizeof ih;
    fh.bfSize = fh.bfOffBits + row * h;
    ih.biSize = sizeof ih;
    ih.biWidth = (LONG)w;
    ih.biHeight = (LONG)h;                 /* bottom-up */
    ih.biPlanes = 1;
    ih.biBitCount = 32;
    ih.biCompression = BI_RGB;
    ih.biSizeImage = row * h;
    fwrite(&fh, sizeof fh, 1, f);
    fwrite(&ih, sizeof ih, 1, f);
    for (int y = (int)h - 1; y >= 0; y--)
        fwrite((const uint8_t *)bits + (size_t)y * pitch, row, 1, f);
    fclose(f);
    fprintf(stderr, "[D3D11-WORLD] screenshot: %s (%ux%u)\n", path, w, h);
}

static void dump_color_slot_bmp(const char *dir, unsigned n, int slot, const ColorSurface *cs)
{
    char name[128];
    _snprintf_s(name, sizeof name, _TRUNCATE, "slot-%d-%05u", slot, n);
    dump_color_slot_named(dir, name, slot, cs);
}

/* Capture the resource behind the swapchain RTV (not GetBuffer(0), which
 * rotates on a FLIP_DISCARD chain), after the present blit has run into it. */
static void capture_present(const char *dir, unsigned n, const void *target, const ColorSurface *pres_surf)
{
    uint32_t w = world.swapchain_w, h = world.swapchain_h;
    if (!w || !h || !world.swapchain_rtv)
        return;

    ptrdiff_t mem_base = xbox_GetMemoryOffset();
    uint32_t target_guest = target ? (uint32_t)((uintptr_t)target - (uintptr_t)mem_base) : 0;
    fprintf(stderr, "[SCREENSHOT-CAPTURE] Frame #%u: present target=%p (guest 0x%08X), pres_surf=%p\n",
            n, target, target_guest, (const void *)pres_surf);

    /* Dump all active color slots */
    for (int i = 0; i < COLOR_SLOTS; i++) {
        if (world.color[i].texture)
            dump_color_slot_bmp(dir, n, i, &world.color[i]);
    }

    if (!world.shot_staging || world.shot_w != w || world.shot_h != h) {
        if (world.shot_staging) {
            ID3D11Texture2D_Release(world.shot_staging);
            world.shot_staging = NULL;
        }
        D3D11_TEXTURE2D_DESC d;
        memset(&d, 0, sizeof d);
        d.Width = w;
        d.Height = h;
        d.MipLevels = 1;
        d.ArraySize = 1;
        d.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
        d.SampleDesc.Count = 1;
        d.Usage = D3D11_USAGE_STAGING;
        d.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
        if (FAILED(ID3D11Device_CreateTexture2D(world.device, &d, NULL, &world.shot_staging)))
            return;
        world.shot_w = w;
        world.shot_h = h;
    }
    ID3D11Resource *rendered = NULL;
    ID3D11RenderTargetView_GetResource(world.swapchain_rtv, &rendered);
    if (!rendered)
        return;
    ID3D11DeviceContext_CopyResource(world.context, (ID3D11Resource *)world.shot_staging, rendered);
    ID3D11Resource_Release(rendered);
    D3D11_MAPPED_SUBRESOURCE map;
    if (SUCCEEDED(ID3D11DeviceContext_Map(world.context, (ID3D11Resource *)world.shot_staging,
                                          0, D3D11_MAP_READ, 0, &map))) {
        uint8_t min_b = 255, max_b = 0, min_g = 255, max_g = 0, min_r = 255, max_r = 0;
        uint32_t n_white = 0, n_black = 0;
        for (uint32_t y = 0; y < h; y++) {
            const uint8_t *row = (const uint8_t *)map.pData + y * map.RowPitch;
            for (uint32_t x = 0; x < w; x++) {
                uint8_t b = row[x * 4 + 0];
                uint8_t g = row[x * 4 + 1];
                uint8_t r = row[x * 4 + 2];
                if (b < min_b) min_b = b; if (b > max_b) max_b = b;
                if (g < min_g) min_g = g; if (g > max_g) max_g = g;
                if (r < min_r) min_r = r; if (r > max_r) max_r = r;
                if (b == 255 && g == 255 && r == 255) n_white++;
                else if (b == 0 && g == 0 && r == 0) n_black++;
            }
        }
        fprintf(stderr, "[SCREENSHOT-SWAPCHAIN] present-%05u (%ux%u): R[%u..%u] G[%u..%u] B[%u..%u] white=%u black=%u other=%u\n",
                n, w, h, min_r, max_r, min_g, max_g, min_b, max_b, n_white, n_black, (w * h) - n_white - n_black);
        write_present_bmp(dir, n, w, h, map.pData, map.RowPitch);
        ID3D11DeviceContext_Unmap(world.context, (ID3D11Resource *)world.shot_staging, 0);
    }
}

/* Called with the back buffer already unbound, just before Present. */
static void screenshot_tick(const void *target, const ColorSurface *surface)
{
    extern int xbox_FramebufferWindowConsumeScreenshot(void);
    int f12 = xbox_FramebufferWindowConsumeScreenshot();
    const char *dir = screenshot_dir();
    if (!dir && f12) {
        dir = "screenshots";
        CreateDirectoryA(dir, NULL);
    }
    if (!dir)
        return;
    static int s_ready;
    static unsigned s_every;
    static int s_secs[8], s_nsecs;
    if (!s_ready) {
        s_ready = 1;
        const char *e = getenv("RECOMP_SCREENSHOT_EVERY");
        s_every = e ? (unsigned)atoi(e) : 0;
        const char *s = getenv("RECOMP_SCREENSHOT_SECONDS");
        while (s && *s && s_nsecs < 8) {
            s_secs[s_nsecs++] = atoi(s);
            while (*s && *s != ',' && *s != ' ') s++;
            while (*s == ',' || *s == ' ') s++;
        }
    }
    unsigned n = ++world.present_count;
    int want = f12 || (s_every && n % s_every == 0);
    if (s_nsecs) {
        static ULONGLONG s_t0;
        ULONGLONG now = GetTickCount64();
        if (!s_t0)
            s_t0 = now;
        for (int i = 0; i < s_nsecs; i++) {
            if (s_secs[i] < 0)
                continue;
            if (now - s_t0 >= (ULONGLONG)s_secs[i] * 1000) {
                s_secs[i] = -1;
                want = 1;
            }
        }
    }
    if (want) {
        capture_present(dir, n, target, surface);
        if (f12)
            fprintf(stderr, "[D3D11-WORLD] F12 screenshot saved to %s\\present-%05u.bmp\n", dir, n);
        world.trace_draws = 1;
        fprintf(stderr, "[TRACE-FRAME] Triggered trace_draws for next frame after present #%u\n", n);
    }
}

static int init_swapchain(HWND hwnd)
{
    RECT r;
    GetClientRect(hwnd, &r);
    uint32_t cw = r.right > r.left ? (uint32_t)(r.right - r.left) : 1;
    uint32_t ch = r.bottom > r.top ? (uint32_t)(r.bottom - r.top) : 1;

    if (world.swapchain && world.swapchain_hwnd == hwnd) {
        if (cw != world.swapchain_w || ch != world.swapchain_h) {
            release_swapchain_rtvs();
            s_gt.resizes++;
            UINT flags = world.swapchain_tearing ? DXGI_SWAP_CHAIN_FLAG_ALLOW_TEARING : 0;
            if (SUCCEEDED(IDXGISwapChain_ResizeBuffers(world.swapchain, 0, cw, ch, DXGI_FORMAT_UNKNOWN, flags)) &&
                create_swapchain_rtvs()) {
                world.swapchain_w = cw;
                world.swapchain_h = ch;
            }
        }
        return world.swapchain_rtv != NULL;
    }

    release_swapchain_rtvs();
    if (world.swapchain) {
        IDXGISwapChain_Release(world.swapchain);
        world.swapchain = NULL;
    }
    world.swapchain_buffers = 0;
    world.swapchain_flip = 0;

    world.swapchain_w = cw;
    world.swapchain_h = ch;
    world.swapchain_hwnd = hwnd;

    IDXGIDevice *dxgi_dev = NULL;
    IDXGIAdapter *dxgi_adapt = NULL;
    IDXGIFactory2 *dxgi_fac = NULL;
    HRESULT hr = ID3D11Device_QueryInterface(world.device, &IID_IDXGIDevice, (void **)&dxgi_dev);
    if (FAILED(hr))
        return 0;
    hr = IDXGIDevice_GetAdapter(dxgi_dev, &dxgi_adapt);
    IDXGIDevice_Release(dxgi_dev);
    if (FAILED(hr))
        return 0;
    hr = IDXGIAdapter_GetParent(dxgi_adapt, &IID_IDXGIFactory2, (void **)&dxgi_fac);
    IDXGIAdapter_Release(dxgi_adapt);
    if (FAILED(hr))
        return 0;

    static const GUID s_IID_IDXGIFactory5 = {0x7632e1bb, 0x5d1e, 0x4016, {0xb7, 0xe9, 0x32, 0x6f, 0x01, 0x14, 0x66, 0xd2}};
    BOOL allow_tearing = FALSE;
    IDXGIFactory5 *dxgi_fac5 = NULL;
    if (SUCCEEDED(IDXGIFactory2_QueryInterface(dxgi_fac, &s_IID_IDXGIFactory5, (void **)&dxgi_fac5))) {
        IDXGIFactory5_CheckFeatureSupport(dxgi_fac5, DXGI_FEATURE_PRESENT_ALLOW_TEARING, &allow_tearing, sizeof(allow_tearing));
        IDXGIFactory5_Release(dxgi_fac5);
    }
    world.swapchain_tearing = allow_tearing ? 1 : 0;

    /* Flip model with a small buffer ring: the old 1-buffer DISCARD chain
     * stalled ~58 ms per Present when the CPU ran ahead of display
     * consumption (measured with no occlusion queries pacing the walk).
     * RECOMP_SWAP_EFFECT=discard restores the old chain for A/B runs;
     * RECOMP_SWAP_BUFFERS=2..4 sizes the ring (default 3). */
    unsigned buffers = 3;
    const char *nb = getenv("RECOMP_SWAP_BUFFERS");
    if (nb && *nb) {
        int v = atoi(nb);
        if (v >= 2 && v <= 4)
            buffers = (unsigned)v;
    }
    const char *fx = getenv("RECOMP_SWAP_EFFECT");
    if (!(fx && !strcmp(fx, "discard"))) {
        DXGI_SWAP_CHAIN_DESC1 sd = {0};
        sd.Width = cw;
        sd.Height = ch;
        sd.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
        sd.SampleDesc.Count = 1;
        sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        sd.BufferCount = buffers;
        sd.Scaling = DXGI_SCALING_STRETCH;
        sd.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;
        sd.AlphaMode = DXGI_ALPHA_MODE_IGNORE;
        if (world.swapchain_tearing)
            sd.Flags |= DXGI_SWAP_CHAIN_FLAG_ALLOW_TEARING;
        IDXGISwapChain1 *sc1 = NULL;
        hr = IDXGIFactory2_CreateSwapChainForHwnd(dxgi_fac, (IUnknown *)world.device, hwnd,
                                                  &sd, NULL, NULL, &sc1);
        if (SUCCEEDED(hr)) {
            hr = IDXGISwapChain1_QueryInterface(sc1, &IID_IDXGISwapChain, (void **)&world.swapchain);
            IDXGISwapChain1_Release(sc1);
        }
    }
    if (!world.swapchain) {
        DXGI_SWAP_CHAIN_DESC sd = {0};
        sd.BufferDesc.Width = cw;
        sd.BufferDesc.Height = ch;
        sd.BufferDesc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
        sd.SampleDesc.Count = 1;
        sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        sd.BufferCount = 1;
        sd.OutputWindow = hwnd;
        sd.Windowed = TRUE;
        sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
        buffers = 1;
        hr = IDXGIFactory2_CreateSwapChain(dxgi_fac, (IUnknown *)world.device, &sd, &world.swapchain);
    }
    if (SUCCEEDED(hr) && world.swapchain) {
        IDXGIFactory2_MakeWindowAssociation(dxgi_fac, hwnd, DXGI_MWA_NO_ALT_ENTER);
    }
    IDXGIFactory2_Release(dxgi_fac);
    if (FAILED(hr) || !world.swapchain)
        return 0;

    world.swapchain_buffers = buffers;
    world.swapchain_flip = buffers > 1;
    if (!create_swapchain_rtvs())
        return 0;

    if (!world.present_vs) {
        const char *cas_env = getenv("RECOMP_CAS");
        int use_cas = (cas_env && *cas_env) ? (cas_env[0] != '0') : 1;
        static const char hlsl_linear[] =
            "Texture2D t : register(t0); SamplerState s : register(s0);\n"
            "struct V { float4 p : SV_Position; float2 uv : TEXCOORD0; };\n"
            "V vs(uint i : SV_VertexID) {\n"
            "    V o;\n"
            "    float2 q = float2((i << 1) & 2, i & 2);\n"
            "    o.uv = q;\n"
            "    o.p = float4(q * float2(2, -2) + float2(-1, 1), 0, 1);\n"
            "    return o;\n"
            "}\n"
            "float4 ps(V i) : SV_Target {\n"
            "    return float4(t.Sample(s, i.uv).rgb, 1);\n"
            "}\n";
        static const char hlsl_cas[] =
            "Texture2D t : register(t0); SamplerState s : register(s0);\n"
            "struct V { float4 p : SV_Position; float2 uv : TEXCOORD0; };\n"
            "V vs(uint i : SV_VertexID) {\n"
            "    V o;\n"
            "    float2 q = float2((i << 1) & 2, i & 2);\n"
            "    o.uv = q;\n"
            "    o.p = float4(q * float2(2, -2) + float2(-1, 1), 0, 1);\n"
            "    return o;\n"
            "}\n"
            "float4 ps(V i) : SV_Target {\n"
            "    float w, h;\n"
            "    t.GetDimensions(w, h);\n"
            "    float2 step = 1.0 / float2(w, h);\n"
            "    float2 dx = float2(step.x, 0.0);\n"
            "    float2 dy = float2(0.0, step.y);\n"
            "    float3 a = t.Sample(s, i.uv - dy).rgb;\n"
            "    float3 b = t.Sample(s, i.uv - dx).rgb;\n"
            "    float3 e = t.Sample(s, i.uv).rgb;\n"
            "    float3 d = t.Sample(s, i.uv + dx).rgb;\n"
            "    float3 c = t.Sample(s, i.uv + dy).rgb;\n"
            "    float3 mn = min(min(min(a, b), min(c, d)), e);\n"
            "    float3 mx = max(max(max(a, b), max(c, d)), e);\n"
            "    float3 amp = saturate(min(mn, 2.0 - mx) / max(mx, 0.001));\n"
            "    float3 wgt = amp * -0.125;\n"
            "    float3 col = (e + (a + b + c + d) * wgt) / (1.0 + 4.0 * wgt);\n"
            "    return float4(saturate(col), 1.0);\n"
            "}\n";
        const char *hlsl = use_cas ? hlsl_cas : hlsl_linear;
        size_t hlsl_len = use_cas ? sizeof(hlsl_cas) - 1 : sizeof(hlsl_linear) - 1;
        ID3DBlob *vsb = NULL, *psb = NULL;
        D3DCompile(hlsl, hlsl_len, "present_vs", NULL, NULL, "vs", "vs_5_0", 0, 0, &vsb, NULL);
        D3DCompile(hlsl, hlsl_len, "present_ps", NULL, NULL, "ps", "ps_5_0", 0, 0, &psb, NULL);
        if (vsb && psb) {
            ID3D11Device_CreateVertexShader(world.device, ID3D10Blob_GetBufferPointer(vsb),
                                            ID3D10Blob_GetBufferSize(vsb), NULL, &world.present_vs);
            ID3D11Device_CreatePixelShader(world.device, ID3D10Blob_GetBufferPointer(psb),
                                           ID3D10Blob_GetBufferSize(psb), NULL, &world.present_ps);
        }
        if (vsb) ID3D10Blob_Release(vsb);
        if (psb) ID3D10Blob_Release(psb);

        D3D11_SAMPLER_DESC smp = {0};
        const char *f = getenv("RECOMP_PRESENT_FILTER");
        smp.Filter = (f && (f[0] == 'p' || f[0] == 'P')) ? D3D11_FILTER_MIN_MAG_MIP_POINT
                                                         : D3D11_FILTER_MIN_MAG_MIP_LINEAR;
        smp.AddressU = smp.AddressV = smp.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
        smp.MaxLOD = D3D11_FLOAT32_MAX;
        ID3D11Device_CreateSamplerState(world.device, &smp, &world.present_samp);
    }
    return world.swapchain_rtv != NULL && world.present_vs && world.present_ps && world.present_samp;
}

static int present_world(const void *target, uint32_t pitch)
{
    (void)pitch;
    const char *dp = getenv("RECOMP_DIRECT_PRESENT");
    if (dp && dp[0] == '0')
        return 0;
    if (world.failed || !world.device || !target)
        return 0;
    const int gt = gpu_timing_enabled();
    int64_t p0 = gt ? world_ticks() : 0;

    ColorSurface *surface = NULL;
    for (int i = 0; i < COLOR_SLOTS; i++) {
        if (world.color[i].host == (const uint32_t *)target && world.color[i].view) {
            if (world.color[i].width == WIDTH && world.color[i].height == HEIGHT) {
                surface = &world.color[i];
                break;
            }
            if (!surface || (world.color[i].width * world.color[i].height > surface->width * surface->height))
                surface = &world.color[i];
        }
    }
    if (!surface || surface->rgb_draws == 0) {
        ColorSurface *fallback = NULL;
        for (int i = 0; i < COLOR_SLOTS; i++) {
            if (world.color[i].view && world.color[i].width == WIDTH && world.color[i].height == HEIGHT) {
                if (!fallback || world.color[i].rgb_draws > fallback->rgb_draws)
                    fallback = &world.color[i];
            }
        }
        if (fallback && fallback->rgb_draws > 0)
            surface = fallback;
    }
    if (!surface || !surface->view)
        return 0;

    HWND hwnd = xbox_FramebufferWindowGetHwnd();
    if (!hwnd || !init_swapchain(hwnd))
        return 0;
    int64_t p1 = gt ? world_ticks() : 0;
    if (gt)
        s_gt.pres_init_ms += world_ms(p1 - p0);

    static const float black[4] = {0, 0, 0, 1};
    ID3D11RenderTargetView *back_rtv = world.swapchain_rtv;
    ID3D11DeviceContext_OMSetRenderTargets(world.context, 1, &back_rtv, NULL);
    ID3D11DeviceContext_ClearRenderTargetView(world.context, back_rtv, black);

    /* Aspect-ratio preserving presentation viewport with optional widescreen override */
    uint32_t sw = surface->width ? surface->width : WIDTH;
    uint32_t sh = surface->height ? surface->height : HEIGHT;
    const char *aspect_env = getenv("RECOMP_ASPECT");
    float aspect = (float)sw / (float)sh;
    if (aspect_env && *aspect_env) {
        if (!strcmp(aspect_env, "16:9") || !strcmp(aspect_env, "widescreen") || !strcmp(aspect_env, "16/9"))
            aspect = 16.0f / 9.0f;
        else if (!strcmp(aspect_env, "4:3") || !strcmp(aspect_env, "4/3"))
            aspect = 4.0f / 3.0f;
        else if (!strcmp(aspect_env, "16:10") || !strcmp(aspect_env, "16/10"))
            aspect = 16.0f / 10.0f;
        else if (!strcmp(aspect_env, "stretch") || !strcmp(aspect_env, "fill"))
            aspect = (float)world.swapchain_w / (float)world.swapchain_h;
    }
    float view_w = (float)world.swapchain_w;
    float view_h = view_w / aspect;
    if (view_h > (float)world.swapchain_h) {
        view_h = (float)world.swapchain_h;
        view_w = view_h * aspect;
    }
    D3D11_VIEWPORT vp;
    vp.Width = view_w;
    vp.Height = view_h;
    vp.TopLeftX = ((float)world.swapchain_w - view_w) * 0.5f;
    vp.TopLeftY = ((float)world.swapchain_h - view_h) * 0.5f;
    vp.MinDepth = 0;
    vp.MaxDepth = 1;
    ID3D11DeviceContext_RSSetViewports(world.context, 1, &vp);
    set_scissor(world.swapchain_w, world.swapchain_h);

    /* The blit is not guest geometry: never fold it into a visibility span. */
    end_visibility_span();
    ID3D11DeviceContext_IASetPrimitiveTopology(world.context, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
    ID3D11DeviceContext_IASetInputLayout(world.context, NULL);
    ID3D11DeviceContext_IASetVertexBuffers(world.context, 0, 0, NULL, NULL, NULL);
    ID3D11DeviceContext_VSSetShader(world.context, world.present_vs, NULL, 0);
    ID3D11DeviceContext_PSSetShader(world.context, world.present_ps, NULL, 0);
    ID3D11DeviceContext_PSSetShaderResources(world.context, 0, 1, &surface->view);
    ID3D11DeviceContext_PSSetSamplers(world.context, 0, 1, &world.present_samp);

    ID3D11DeviceContext_OMSetBlendState(world.context, NULL, NULL, 0xFFFFFFFF);
    ID3D11DeviceContext_OMSetDepthStencilState(world.context, NULL, 0);

    gt_blit(0);
    ID3D11DeviceContext_Draw(world.context, 3, 0);
    gt_blit(1);

    const char *v = getenv("RECOMP_PRESENT_VSYNC");
    UINT sync_interval = (v && v[0] == '1') ? 1 : 0;
    UINT present_flags = 0;
    if (sync_interval == 0 && world.swapchain_tearing)
        present_flags |= DXGI_PRESENT_ALLOW_TEARING;
    int64_t p2 = gt ? world_ticks() : 0;
    /* Flip-model chains must not be presented with the back buffer still
     * bound: DXGI needs every reference released, so unbind first. */
    ID3D11DeviceContext_OMSetRenderTargets(world.context, 0, NULL, NULL);
    screenshot_tick(target, surface);
    HRESULT phr = IDXGISwapChain_Present(world.swapchain, sync_interval, present_flags);
    if (getenv("RECOMP_PRESENT_DEBUG")) {
        static unsigned s_present_dbg;
        if (s_present_dbg < 8) {
            fprintf(stderr, "[D3D11-WORLD] present #%u -> 0x%08lX\n", s_present_dbg,
                    (unsigned long)phr);
            s_present_dbg++;
        }
    }
    if (FAILED(phr)) {
        static int s_present_logged;
        if (!s_present_logged++) {
            fprintf(stderr, "[D3D11-WORLD] present failed (0x%08lX) buffers=%u flip=%d\n",
                    (unsigned long)phr, world.swapchain_buffers, world.swapchain_flip);
        }
    }

    static int s_show_fps = -1;
    if (s_show_fps < 0) {
        const char *e = getenv("RECOMP_SHOW_FPS");
        s_show_fps = (e && *e && *e != '0') ? 1 : 0;
    }
    if (s_show_fps) {
        static int64_t s_fps_t0 = 0;
        static uint32_t s_fps_frames = 0;
        if (!s_fps_t0) s_fps_t0 = world_ticks();
        s_fps_frames++;
        int64_t now = world_ticks();
        double elapsed_sec = (double)(now - s_fps_t0) / (double)world.frequency;
        if (elapsed_sec >= 0.5) {
            double fps = (double)s_fps_frames / elapsed_sec;
            char title[256];
            uint32_t rs = world_res_scale();
            _snprintf_s(title, sizeof title, _TRUNCATE,
                        "Star Wars: Battlefront II - Native PC Recomp [%.1f FPS | %ux HD]",
                        fps, rs);
            extern void xbox_FramebufferWindowSetTitleText(const char *title);
            xbox_FramebufferWindowSetTitleText(title);
            s_fps_t0 = now;
            s_fps_frames = 0;
        }
    }

    static int s_fps_limit = -2;
    if (s_fps_limit == -2) {
        const char *e = getenv("RECOMP_FPS_LIMIT");
        s_fps_limit = (e && *e) ? atoi(e) : 0;
    }
    if (s_fps_limit > 0 && world.frequency) {
        static int64_t s_last_frame_tick = 0;
        int64_t target_interval = world.frequency / s_fps_limit;
        if (s_last_frame_tick > 0) {
            int64_t target_tick = s_last_frame_tick + target_interval;
            int64_t cur_tick = world_ticks();
            while (cur_tick < target_tick) {
                int64_t remaining_ticks = target_tick - cur_tick;
                int64_t remaining_ms = (remaining_ticks * 1000) / world.frequency;
                if (remaining_ms > 2) {
                    Sleep((DWORD)(remaining_ms - 2));
                } else if (remaining_ms > 0) {
                    SwitchToThread();
                } else {
                    YieldProcessor();
                }
                cur_tick = world_ticks();
            }
        }
        s_last_frame_tick = world_ticks();
    }
    int64_t p3 = gt ? world_ticks() : 0;
    if (gt) {
        s_gt.pres_draw_ms += world_ms(p2 - p1);
        s_gt.pres_present_ms += world_ms(p3 - p2);
        s_gt.pres_total_ms += world_ms(p3 - p0);
    }

    /* Restore pipeline state for subsequent world rendering */
    unbind_surfaces();
    uint32_t rs = world_res_scale();
    D3D11_VIEWPORT default_vp = {0, 0, (float)(WIDTH * rs), (float)(HEIGHT * rs), 0, 1};
    ID3D11DeviceContext_RSSetViewports(world.context, 1, &default_vp);
    ID3D11DeviceContext_RSSetState(world.context, world.rasterizer);
    world.bound_vs = NULL;
    world.bound_ps = NULL;
    world.bound_layout = (ID3D11InputLayout *)(uintptr_t)-1;
    world.bound_blend = NULL;
    world.bound_depth_state = NULL;

    xbox_FramebufferWindowDirectActive(1);
    surface->dirty = 0;
    if (world.trace_draws == 2) {
        fprintf(stderr, "[TRACE-FRAME] End of traced frame: total draws_in_frame=%u\n", world.draws_in_frame);
        world.trace_draws = 0;
    }
    world.draws_in_frame = 0;
    for (int i = 0; i < COLOR_SLOTS; i++)
        world.color[i].rgb_draws = 0;
    if (gt)
        s_gt.pres_tail_ms += world_ms(world_ticks() - p3);
    return 1;
}

void bf2_register_gpu_world(void)
{
    static const Nv2aWorldBackend backend = {
        .draw = draw_world,
        .draw_program = draw_world_program,
        .sync = sync_world_entry,
        .clear_color = clear_color,
        .clear_depth = clear_depth,
        .clear_visibility = clear_visibility,
        .queue_visibility_report = queue_visibility_report,
        .flush_visibility_reports = flush_visibility_reports,
        .present = present_world,
    };
    const char *mode = getenv("RECOMP_D3D11_WORLD");
    if ((!mode || (strcmp(mode, "0") != 0 && strcmp(mode, "cpu") != 0)) && !getenv("RECOMP_CAPTURE_RESOLVE"))
        nv2a_set_world_backend(&backend);
}
