#define CINTERFACE
#define COBJMACROS
#include <d3d11.h>
#include <d3dcompiler.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gpu_resolve.h"
#include "gpu_combiner.h"
#include "gpu_resolve_shader.h"
#include "nv2a_resolve_backend.h"

enum {
    RESOLVE_PIXELS = NV2A_RESOLVE_WIDTH * NV2A_RESOLVE_HEIGHT,
    VERTEX_SOURCE = 0, FIRST_TEXTURE = 1, TARGET_SOURCE = 5, SOURCE_COUNT = 6
};

typedef struct {
    uint32_t surface[4], region[4], texture[4][4];
    float inverse[2][4], vertex_fog[2][4], fog_color[2][4];
    float unorm8[256];
} ResolveConstants;

_Static_assert(sizeof(Nv2aResolveVertex) == 112, "HLSL vertex stride");
_Static_assert(sizeof(ResolveConstants) == 1216, "HLSL resolve constants");

static struct {
    ID3D11Device *device;
    ID3D11DeviceContext *context;
    ID3D11ComputeShader *shader;
    ID3D11Buffer *source[SOURCE_COUNT], *output, *readback, *constants[2];
    ID3D11ShaderResourceView *srv[SOURCE_COUNT];
    ID3D11UnorderedAccessView *uav;
    LARGE_INTEGER frequency;
    unsigned passes;
    double total_ms;
    int disabled;
    float unorm8[256];
} gpu;

static void disable_resolve(const char *operation, HRESULT hr)
{
    fprintf(stderr, "[D3D11-RESOLVE] %s failed (0x%08lX), using CPU resolve\n",
            operation, (unsigned long)hr);
    gpu.disabled = 1;
    if (gpu.context)
        ID3D11DeviceContext_ClearState(gpu.context);
    for (int i = 0; i < SOURCE_COUNT; i++) {
        if (gpu.srv[i])
            ID3D11ShaderResourceView_Release(gpu.srv[i]);
        if (gpu.source[i])
            ID3D11Buffer_Release(gpu.source[i]);
    }
    for (int i = 0; i < 2; i++) {
        if (gpu.constants[i])
            ID3D11Buffer_Release(gpu.constants[i]);
    }
    if (gpu.uav)
        ID3D11UnorderedAccessView_Release(gpu.uav);
    if (gpu.output)
        ID3D11Buffer_Release(gpu.output);
    if (gpu.readback)
        ID3D11Buffer_Release(gpu.readback);
    if (gpu.shader)
        ID3D11ComputeShader_Release(gpu.shader);
    if (gpu.context)
        ID3D11DeviceContext_Release(gpu.context);
    if (gpu.device)
        ID3D11Device_Release(gpu.device);
}

static HRESULT create_buffer(UINT bytes, UINT stride, UINT bind, ID3D11Buffer **out)
{
    D3D11_BUFFER_DESC desc = {0};
    desc.ByteWidth = bytes;
    desc.BindFlags = bind;
    desc.StructureByteStride = stride;
    if (stride)
        desc.MiscFlags = D3D11_RESOURCE_MISC_BUFFER_STRUCTURED;
    if (!bind) {
        desc.Usage = D3D11_USAGE_STAGING;
        desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    }
    return ID3D11Device_CreateBuffer(gpu.device, &desc, NULL, out);
}

static HRESULT create_buffers(void)
{
    D3D11_UNORDERED_ACCESS_VIEW_DESC uav = {0};
    HRESULT hr;
    for (int i = 0; i < SOURCE_COUNT; i++) {
        UINT count = i == 0 ? 6 : RESOLVE_PIXELS;
        UINT stride = i == 0 ? sizeof(Nv2aResolveVertex) : sizeof(uint32_t);
        D3D11_SHADER_RESOURCE_VIEW_DESC desc = {0};
        hr = create_buffer(count * stride, stride, D3D11_BIND_SHADER_RESOURCE,
                           &gpu.source[i]);
        if (FAILED(hr))
            return hr;
        desc.ViewDimension = D3D11_SRV_DIMENSION_BUFFER;
        desc.Buffer.NumElements = count;
        hr = ID3D11Device_CreateShaderResourceView(gpu.device,
                 (ID3D11Resource *)gpu.source[i], &desc, &gpu.srv[i]);
        if (FAILED(hr))
            return hr;
    }
    hr = create_buffer(RESOLVE_PIXELS * sizeof(uint32_t), sizeof(uint32_t),
                       D3D11_BIND_UNORDERED_ACCESS, &gpu.output);
    if (FAILED(hr))
        return hr;
    uav.ViewDimension = D3D11_UAV_DIMENSION_BUFFER;
    uav.Buffer.NumElements = RESOLVE_PIXELS;
    hr = ID3D11Device_CreateUnorderedAccessView(gpu.device,
         (ID3D11Resource *)gpu.output, &uav, &gpu.uav);
    if (FAILED(hr))
        return hr;
    hr = create_buffer(RESOLVE_PIXELS * sizeof(uint32_t), 0, 0, &gpu.readback);
    if (FAILED(hr))
        return hr;
    hr = create_buffer(sizeof(CombinerConstants), 0, D3D11_BIND_CONSTANT_BUFFER,
                       &gpu.constants[0]);
    if (FAILED(hr))
        return hr;
    return create_buffer(sizeof(ResolveConstants), 0, D3D11_BIND_CONSTANT_BUFFER,
                         &gpu.constants[1]);
}

static int init_resolve(void)
{
    ID3DBlob *bytecode = NULL, *messages = NULL;
    HRESULT hr = D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL,
        D3D11_CREATE_DEVICE_SINGLETHREADED, NULL, 0, D3D11_SDK_VERSION,
        &gpu.device, NULL, &gpu.context);
    if (FAILED(hr)) {
        disable_resolve("device creation", hr);
        return 0;
    }
    hr = D3DCompile(bf2_resolve_source, sizeof bf2_resolve_source - 1,
                    "nv2a_resolve.hlsl", NULL, NULL, "main", "cs_5_0",
                    D3DCOMPILE_IEEE_STRICTNESS | D3DCOMPILE_OPTIMIZATION_LEVEL3,
                    0, &bytecode, &messages);
    if (messages) {
        if (FAILED(hr))
            fprintf(stderr, "%s\n", (const char *)ID3D10Blob_GetBufferPointer(messages));
        ID3D10Blob_Release(messages);
    }
    if (SUCCEEDED(hr)) {
        hr = ID3D11Device_CreateComputeShader(gpu.device,
            ID3D10Blob_GetBufferPointer(bytecode), ID3D10Blob_GetBufferSize(bytecode),
            NULL, &gpu.shader);
        ID3D10Blob_Release(bytecode);
    }
    if (FAILED(hr)) {
        disable_resolve("shader creation", hr);
        return 0;
    }
    hr = create_buffers();
    if (FAILED(hr)) {
        disable_resolve("buffer creation", hr);
        return 0;
    }
    QueryPerformanceFrequency(&gpu.frequency);
    for (uint32_t i = 0; i < 256; i++) {
        float color[4];
        nv2a_rc_unpack(i, color);
        gpu.unorm8[i] = color[2];
    }
    ID3D11DeviceContext_CSSetShader(gpu.context, gpu.shader, NULL, 0);
    ID3D11DeviceContext_CSSetConstantBuffers(gpu.context, 0, 2, gpu.constants);
    return 1;
}

static void update_buffer(ID3D11Buffer *buffer, const void *data)
{
    ID3D11DeviceContext_UpdateSubresource(gpu.context, (ID3D11Resource *)buffer,
                                         0, NULL, data, 0, 0);
}

static void upload_constants(const Nv2aResolveDraw *draw)
{
    CombinerConstants shader;
    ResolveConstants resolve = {0};

    pack_combiner(&shader, draw->program);
    resolve.surface[0] = NV2A_RESOLVE_WIDTH;
    resolve.surface[1] = NV2A_RESOLVE_HEIGHT;
    resolve.surface[2] = draw->blend;
    resolve.region[0] = draw->x;
    resolve.region[1] = draw->y;
    resolve.region[2] = draw->width;
    resolve.region[3] = draw->height;
    for (int i = 0; i < 4; i++) {
        const Nv2aResolveTexture *t = &draw->texture[i];
        resolve.texture[i][0] = t->addr_u;
        resolve.texture[i][1] = t->addr_v;
        resolve.texture[i][2] = t->bilinear | (t->border_color << 1);
        resolve.texture[i][3] = t->border;
    }
    memcpy(resolve.inverse, draw->inverse, sizeof resolve.inverse);
    memcpy(resolve.vertex_fog, draw->vertex_fog, sizeof resolve.vertex_fog);
    memcpy(resolve.fog_color, draw->fog_color, sizeof resolve.fog_color);
    memcpy(resolve.unorm8, gpu.unorm8, sizeof resolve.unorm8);
    update_buffer(gpu.constants[0], &shader);
    update_buffer(gpu.constants[1], &resolve);
}

static int draw_resolve(const Nv2aResolveDraw *draw)
{
    ID3D11ShaderResourceView *views[SOURCE_COUNT] = {0};
    ID3D11UnorderedAccessView *none = NULL;
    D3D11_MAPPED_SUBRESOURCE map;
    UINT pixels = draw->width * draw->height;
    D3D11_BOX box = {0, 0, 0, pixels * sizeof(uint32_t), 1, 1};
    LARGE_INTEGER start, end;
    HRESULT hr;

    if (gpu.disabled || (!gpu.device && !init_resolve()))
        return 0;
    QueryPerformanceCounter(&start);
    upload_constants(draw);
    views[VERTEX_SOURCE] = gpu.srv[VERTEX_SOURCE];
    views[TARGET_SOURCE] = gpu.srv[TARGET_SOURCE];
    update_buffer(gpu.source[VERTEX_SOURCE], draw->vertex);
    update_buffer(gpu.source[TARGET_SOURCE], draw->target);
    for (int stage = 0; stage < 4; stage++) {
        const uint32_t *src = draw->texture[stage].pixels;
        int slot = FIRST_TEXTURE + stage;
        if (!src)
            continue;
        if (src == draw->target) {
            views[slot] = views[TARGET_SOURCE];
            continue;
        }
        for (int i = 0; i < stage; i++) {
            if (src == draw->texture[i].pixels) {
                views[slot] = views[FIRST_TEXTURE + i];
                break;
            }
        }
        if (!views[slot]) {
            views[slot] = gpu.srv[slot];
            update_buffer(gpu.source[slot], src);
        }
    }
    ID3D11DeviceContext_CSSetShaderResources(gpu.context, 0, SOURCE_COUNT, views);
    ID3D11DeviceContext_CSSetUnorderedAccessViews(gpu.context, 0, 1, &gpu.uav, NULL);
    ID3D11DeviceContext_Dispatch(gpu.context, (pixels + 63) / 64, 1, 1);
    ID3D11DeviceContext_CSSetUnorderedAccessViews(gpu.context, 0, 1, &none, NULL);
    ID3D11DeviceContext_CopySubresourceRegion(gpu.context, (ID3D11Resource *)gpu.readback,
        0, 0, 0, 0, (ID3D11Resource *)gpu.output, 0, &box);
    hr = ID3D11DeviceContext_Map(gpu.context, (ID3D11Resource *)gpu.readback, 0,
                                D3D11_MAP_READ, 0, &map);
    if (FAILED(hr)) {
        disable_resolve("readback", hr);
        return 0;
    }
    for (uint32_t y = 0; y < draw->height; y++) {
        uint32_t *dst = draw->target + (draw->y + y) * NV2A_RESOLVE_WIDTH + draw->x;
        const uint32_t *src = (const uint32_t *)map.pData + y * draw->width;
        memcpy(dst, src, draw->width * sizeof *dst);
    }
    ID3D11DeviceContext_Unmap(gpu.context, (ID3D11Resource *)gpu.readback, 0);
    QueryPerformanceCounter(&end);
    gpu.total_ms += (end.QuadPart - start.QuadPart) * 1000.0 / gpu.frequency.QuadPart;
    if (++gpu.passes == 1 || gpu.passes % 120 == 0) {
        fprintf(stderr, "[D3D11-RESOLVE] %u passes, %.2f ms average with upload/readback\n",
                gpu.passes, gpu.total_ms / gpu.passes);
    }
    return 1;
}

void bf2_register_gpu_resolve(void)
{
    const char *mode = getenv("RECOMP_D3D11_RESOLVE");
    if ((!mode || (strcmp(mode, "0") != 0 && strcmp(mode, "cpu") != 0)) && !getenv("RECOMP_CAPTURE_RESOLVE"))
        nv2a_set_resolve_backend(draw_resolve);
}
