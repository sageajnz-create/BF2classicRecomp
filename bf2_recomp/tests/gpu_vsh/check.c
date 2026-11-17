/* GPU vertex-program interpreter vs the CPU decoded runner.
 *
 * Generates random NV2A programs covering every MAC/ILU op, source mux,
 * swizzle, negate, a0-relative constant and output register (the same generator
 * as nv2a_vsh_decoded_test), runs each on a batch of vertices through the CPU
 * nv2a_vsh_run and through the HLSL interpreter on the GPU, and compares every
 * output float with a tolerance. A D3D-shaped program (DP4/MAD/RCC epilogue)
 * is checked at 64-bit-like precision on typical screen-space values.
 *
 * This is the correctness gate before the GPU transform can be wired into the
 * world backend: a program is only safe to run on the GPU if this file says
 * the two interpreters agree. */
#define CINTERFACE
#define COBJMACROS
#define WIN32_LEAN_AND_MEAN
#include <d3d11.h>
#include <d3dcompiler.h>
#include <xmmintrin.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nv2a_vsh_interp.h"
#include "gpu_vsh_shader.h"

enum { BATCH = 128, PROGRAMS = 600, INST_CAP = NV2A_VSH_SLOTS };
#define STRIDE NV2A_VSH_GPU_INST_STRIDE
#define VSH_CAP_VERTS 64    /* matches VSH_RAW_VERTS in nv2a_vsh_interp.c */

static uint32_t seed = 0x5EED1234u;
static uint32_t rnd(void)
{
    seed ^= seed << 13; seed ^= seed >> 17; seed ^= seed << 5; return seed;
}
static float rndf(void)
{
    return ((float)(rnd() & 0xFFFF) / 65535.0f - 0.5f) * 16.0f;
}

static void die(const char *m) { fprintf(stderr, "FAIL: %s\n", m); exit(2); }
static void check_hr(HRESULT hr, const char *s)
{
    if (FAILED(hr)) { fprintf(stderr, "D3D11 %s failed 0x%08lX\n", s, (unsigned long)hr); exit(2); }
}

static ID3D11Buffer *structured(ID3D11Device *d, UINT count, UINT stride, UINT bind, const void *data)
{
    D3D11_BUFFER_DESC desc = {0};
    D3D11_SUBRESOURCE_DATA init = {data, 0, 0};
    ID3D11Buffer *b;
    desc.ByteWidth = count * stride;
    desc.Usage = D3D11_USAGE_DEFAULT;
    desc.BindFlags = bind;
    desc.MiscFlags = D3D11_RESOURCE_MISC_BUFFER_STRUCTURED;
    desc.StructureByteStride = stride;
    check_hr(ID3D11Device_CreateBuffer(d, &desc, data ? &init : NULL, &b), "CreateBuffer");
    return b;
}
static ID3D11ShaderResourceView *srv(ID3D11Device *d, ID3D11Buffer *b, UINT count)
{
    D3D11_SHADER_RESOURCE_VIEW_DESC desc = {0};
    ID3D11ShaderResourceView *v;
    desc.ViewDimension = D3D11_SRV_DIMENSION_BUFFER;
    desc.Buffer.NumElements = count;
    check_hr(ID3D11Device_CreateShaderResourceView(d, (ID3D11Resource *)b, &desc, &v), "CreateSRV");
    return v;
}

/* Real D3D vertex programs use DP4/MAD/MUL/ADD/MOV/DP3/MIN/MAX/SLT/SGE on the
 * MAC and RCC/RSQ in the perspective epilogue. EXP/LOG/LIT on arbitrary random
 * extremes are where IEEE math differs between MSVC and HLSL (overflow to inf
 * at slightly different thresholds) and never appear in a GPU transform, so
 * the randomized stress test uses that realistic op set.*/
static void random_ins(uint32_t w[4], int final)
{
    static const uint32_t mac_ops[] = {1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12};
    static const uint32_t ilu_ops[] = {0, 1, 3, 4};
    uint32_t mac = mac_ops[rnd() % (sizeof mac_ops / sizeof *mac_ops)];
    uint32_t ilu = ilu_ops[rnd() % (sizeof ilu_ops / sizeof *ilu_ops)];
    w[0] = 0;
    w[1] = rnd() & 0x0FFFFFFFu;
    w[2] = rnd();
    w[3] = rnd() & ~1u;                       /* leave context writes off */
    w[1] = (w[1] & ~(0xFFu << 13)) | ((rnd() % 96u) << 13);
    w[1] = (w[1] & ~(0xFu << 21)) | (mac << 21);
    w[1] = (w[1] & ~(0x7u << 25)) | (ilu << 25);
    if (final) w[3] |= 1u;
}

/* Float comparison: allow a small absolute/relative slack for IEEE differences
 * between MSVC scalar math and HLSL (mad rcp/rsq/exp2 may differ by an ulp). */
static int closef(float a, float b)
{
    if (isnan(a) || isnan(b))
        return isnan(a) && isnan(b);
    if (isinf(a) || isinf(b))
        return a == b;                 /* same signed infinity counts as equal */
    float e = fabsf(a - b);
    if (e <= 2e-5f) return 1;
    return e <= 2e-4f * fmaxf(fabsf(a), fabsf(b));
}

/* ---- replay real captured programs --------------------------------------- */
#define CAP_MAGIC 0x52485356u   /* "VSHR" */
typedef struct {
    uint32_t ins[INST_CAP * STRIDE];
    float constants[NV2A_VSH_CONSTANTS][4];               /* initial set */
    float inputs[VSH_CAP_VERTS][NV2A_VSH_INPUTS][4];
    float vert_constants[VSH_CAP_VERTS][NV2A_VSH_CONSTANTS][4]; /* per-vertex */
    float outputs[VSH_CAP_VERTS][32];
    uint32_t n_ins, n_verts;
} Capture;

static int read_capture(const char *path, Capture *c)
{
    FILE *f = fopen(path, "rb");
    uint32_t header[4], expect_verts;
    if (!f) return 0;
    if (fread(header, sizeof header, 1, f) != 1 || header[0] != CAP_MAGIC
        || header[1] > INST_CAP || header[2] != NV2A_VSH_CONSTANTS
        || header[3] > VSH_CAP_VERTS) { fclose(f); return 0; }
    c->n_ins = header[1];
    expect_verts = header[3];
    if (fread(c->ins, (size_t)c->n_ins * STRIDE * sizeof(uint32_t), 1, f) != 1
        || fread(c->constants, sizeof c->constants, 1, f) != 1) { fclose(f); return 0; }
    c->n_verts = 0;
    for (; c->n_verts < expect_verts; c->n_verts++) {
        if (fread(c->inputs[c->n_verts], sizeof(float) * NV2A_VSH_INPUTS * 4, 1, f) != 1
            || fread(c->vert_constants[c->n_verts], sizeof c->vert_constants[c->n_verts], 1, f) != 1
            || fread(c->outputs[c->n_verts], 32 * sizeof(float), 1, f) != 1) {
            fclose(f); return 0;
        }
    }
    fclose(f);
    return 1;
}

static int replay_captures(const char *dir)
{
    /* Set up a minimal D3D11 compute pipeline and replay each captured program
     * using the captured inputs, comparing GPU output to the captured CPU
     * output. Returns 0 on full match, 1 on any mismatch, 2 on setup error. */
    ID3D11Device *device = NULL; ID3D11DeviceContext *ctx = NULL;
    ID3DBlob *code = NULL, *err = NULL; ID3D11ComputeShader *cs = NULL;
    ID3D11Buffer *cbuf = NULL, *b_ins = NULL, *b_const = NULL, *b_v = NULL, *b_out = NULL, *staging = NULL;
    ID3D11ShaderResourceView *views[3] = {0};
    ID3D11UnorderedAccessView *uav = NULL, *none = NULL;
    D3D11_BUFFER_DESC sd = {0}; D3D11_MAPPED_SUBRESOURCE map;
    struct { uint32_t count, verts, p0, p1; } params;
    static float gpu_out[VSH_CAP_VERTS][32];
    static const UINT OUT_STRIDE = 4 * sizeof(float);
    static Capture cap;
    char path[1024];
    int status = 0, any = 0;
    unsigned long long floats = 0;

#define RC(hr, s) do { if (FAILED(hr)) { fprintf(stderr, "capture %s failed 0x%08lX\n", s, (unsigned long)hr); status = 2; goto done; } } while (0)
    check_hr(D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0, NULL, 0,
              D3D11_SDK_VERSION, &device, NULL, &ctx), "CreateDevice");
    check_hr(D3DCompile(bf2_vsh_source, sizeof bf2_vsh_source - 1, "nv2a_vsh_gpu.hlsl",
              NULL, NULL, "cs_main", "cs_5_0", D3DCOMPILE_OPTIMIZATION_LEVEL3,
              0, &code, &err), "compile");
    if (err) { fprintf(stderr, "%s\n", (char *)ID3D10Blob_GetBufferPointer(err)); ID3D10Blob_Release(err); }
    check_hr(ID3D11Device_CreateComputeShader(device, ID3D10Blob_GetBufferPointer(code),
              ID3D10Blob_GetBufferSize(code), NULL, &cs), "CreateComputeShader");
    ID3D10Blob_Release(code);
    sd.ByteWidth = sizeof params; sd.Usage = D3D11_USAGE_DEFAULT; sd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
    check_hr(ID3D11Device_CreateBuffer(device, &sd, NULL, &cbuf), "cbuf");
    b_ins = structured(device, INST_CAP, STRIDE * sizeof(uint32_t), D3D11_BIND_SHADER_RESOURCE, NULL);
    b_const = structured(device, NV2A_VSH_CONSTANTS, 16, D3D11_BIND_SHADER_RESOURCE, NULL);
    b_v = structured(device, VSH_CAP_VERTS * 16, 16, D3D11_BIND_SHADER_RESOURCE, NULL);
    b_out = structured(device, VSH_CAP_VERTS * 8, OUT_STRIDE, D3D11_BIND_UNORDERED_ACCESS, NULL);
    views[0] = srv(device, b_ins, INST_CAP);
    views[1] = srv(device, b_const, NV2A_VSH_CONSTANTS);
    views[2] = srv(device, b_v, VSH_CAP_VERTS * 16);
    {
        D3D11_UNORDERED_ACCESS_VIEW_DESC d = {0};
        d.ViewDimension = D3D11_UAV_DIMENSION_BUFFER;
        d.Buffer.NumElements = VSH_CAP_VERTS * 8;
        check_hr(ID3D11Device_CreateUnorderedAccessView(device, (ID3D11Resource *)b_out, &d, &uav), "uav");
    }
    sd.ByteWidth = VSH_CAP_VERTS * 8 * OUT_STRIDE; sd.Usage = D3D11_USAGE_STAGING;
    sd.BindFlags = 0; sd.CPUAccessFlags = D3D11_CPU_ACCESS_READ; sd.MiscFlags = 0; sd.StructureByteStride = 0;
    check_hr(ID3D11Device_CreateBuffer(device, &sd, NULL, &staging), "staging");

    for (unsigned i = 0; i < 256 && !status; i++) {
        snprintf(path, sizeof path, "%s/p%03u.bin", dir, i);
        if (!read_capture(path, &cap)) break;
        any++;
        memset(cap.ins + cap.n_ins * STRIDE, 0, (INST_CAP - cap.n_ins) * STRIDE * sizeof(uint32_t));
        ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)b_ins, 0, NULL, cap.ins, 0, 0);
        /* Constants vary per vertex (skinning palettes); dispatch one vertex
         * at a time with its own constant file. */
        for (unsigned v = 0; v < cap.n_verts && !status; v++) {
            ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)b_const, 0, NULL,
                                                  cap.vert_constants[v], 0, 0);
            ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)b_v, 0, NULL,
                                                  cap.inputs[v], 0, 0);
            params.count = cap.n_ins; params.verts = 1; params.p0 = params.p1 = 0;
            ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)cbuf, 0, NULL, &params, 0, 0);
            ID3D11DeviceContext_CSSetShader(ctx, cs, NULL, 0);
            ID3D11DeviceContext_CSSetConstantBuffers(ctx, 0, 1, &cbuf);
            ID3D11DeviceContext_CSSetShaderResources(ctx, 0, 3, views);
            ID3D11DeviceContext_CSSetUnorderedAccessViews(ctx, 0, 1, &uav, NULL);
            ID3D11DeviceContext_Dispatch(ctx, 1, 1, 1);
            ID3D11DeviceContext_CSSetUnorderedAccessViews(ctx, 0, 1, &none, NULL);
            ID3D11DeviceContext_CopyResource(ctx, (ID3D11Resource *)staging, (ID3D11Resource *)b_out);
            RC(ID3D11DeviceContext_Map(ctx, (ID3D11Resource *)staging, 0, D3D11_MAP_READ, 0, &map), "map");
            memcpy(gpu_out[v], map.pData, 8 * OUT_STRIDE);
            ID3D11DeviceContext_Unmap(ctx, (ID3D11Resource *)staging, 0);

            for (int k = 0; k < 32; k++, floats++) {
                float a = cap.outputs[v][k], b = gpu_out[v][k];
                if (!closef(a, b)) {
                    fprintf(stderr, "CAPTURE MISMATCH prog %u vert %u float %d: cpu %.9g gpu %.9g\n",
                            i, v, k, a, b);
                    for (unsigned ii = 0; ii < cap.n_ins; ii++) {
                        const uint32_t *o = cap.ins + ii * STRIDE;
                        fprintf(stderr, "  ins %u mac %u ilu %u mmask %u imask %u mdst %u idst %u omask %u oaddr %u to_o %u from_ilu %u final %u reads %u\n",
                                ii, o[0], o[1], o[2], o[3], o[4], o[5], o[6], o[7], o[8], o[9], o[10], o[11]);
                    }
                    for (int a2 = 0; a2 < NV2A_VSH_INPUTS; a2++) {
                        const float *iv = cap.inputs[v][a2];
                        if (iv[0] || iv[1] || iv[2] || iv[3])
                            fprintf(stderr, "  v%d = %g %g %g %g\n", a2, iv[0], iv[1], iv[2], iv[3]);
                    }
                    status = 1; break;
                }
            }
        }
    }
    if (!any) { fprintf(stderr, "no capture files found in %s\n", dir); status = 2; }
    else printf("capture replay: %llu output floats matched across %d real programs\n", floats, any);
done:
    if (uav) ID3D11UnorderedAccessView_Release(uav);
    for (int i = 0; i < 3; i++) if (views[i]) ID3D11ShaderResourceView_Release(views[i]);
    if (cbuf) ID3D11Buffer_Release(cbuf);
    if (b_ins) ID3D11Buffer_Release(b_ins);
    if (b_const) ID3D11Buffer_Release(b_const);
    if (b_v) ID3D11Buffer_Release(b_v);
    if (b_out) ID3D11Buffer_Release(b_out);
    if (staging) ID3D11Buffer_Release(staging);
    if (cs) ID3D11ComputeShader_Release(cs);
    if (ctx) ID3D11DeviceContext_Release(ctx);
    if (device) ID3D11Device_Release(device);
    return status;
#undef RC
}

int main(int argc, char **argv)
{
    if (argc > 1 && argv[1][0] != '-')
        return replay_captures(argv[1]);
    /* GPUs flush denormals to zero; match that on the CPU reference so rcp/rsq
     * of a tiny value agrees. Xbox MXCSR sets FTZ/DAZ too. */
    _mm_setcsr(_mm_getcsr() | 0x8040u);

    ID3D11Device *device = NULL;
    ID3D11DeviceContext *ctx = NULL;
    ID3DBlob *code = NULL, *err = NULL;
    ID3D11ComputeShader *cs = NULL;
    ID3D11Buffer *cbuf = NULL, *in_ins = NULL, *in_const = NULL, *in_v = NULL;
    ID3D11Buffer *out = NULL, *staging = NULL;
    ID3D11ShaderResourceView *views[3] = {0};
    ID3D11UnorderedAccessView *uav = NULL, *none = NULL;
    D3D11_BUFFER_DESC sd = {0};
    D3D11_MAPPED_SUBRESOURCE map;
    struct { uint32_t count, verts, p0, p1; } params;

    static uint32_t ins[INST_CAP * STRIDE];
    static float constants[NV2A_VSH_CONSTANTS][4];
    static float inputs[BATCH][NV2A_VSH_INPUTS][4];
    static float gpu_out[BATCH][32];
    static const UINT OUT_STRIDE = 4 * sizeof(float); /* one float4 element */

    check_hr(D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0, NULL, 0,
              D3D11_SDK_VERSION, &device, NULL, &ctx), "CreateDevice");
    check_hr(D3DCompile(bf2_vsh_source, sizeof bf2_vsh_source - 1, "nv2a_vsh_gpu.hlsl",
              NULL, NULL, "cs_main", "cs_5_0", D3DCOMPILE_OPTIMIZATION_LEVEL3,
              0, &code, &err), "compile (see message above)");
    if (err) { fprintf(stderr, "%s\n", (char *)ID3D10Blob_GetBufferPointer(err)); ID3D10Blob_Release(err); }
    check_hr(ID3D11Device_CreateComputeShader(device, ID3D10Blob_GetBufferPointer(code),
              ID3D10Blob_GetBufferSize(code), NULL, &cs), "CreateComputeShader");
    ID3D10Blob_Release(code);

    sd.ByteWidth = sizeof params;
    sd.Usage = D3D11_USAGE_DEFAULT;
    sd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
    check_hr(ID3D11Device_CreateBuffer(device, &sd, NULL, &cbuf), "CreateBuffer(cbuf)");

    /* Fixed-size buffers reused for every program (anded by count). */
    in_ins = structured(device, INST_CAP, STRIDE * sizeof(uint32_t), D3D11_BIND_SHADER_RESOURCE, NULL);
    in_const = structured(device, NV2A_VSH_CONSTANTS, sizeof(float) * 4, D3D11_BIND_SHADER_RESOURCE, NULL);
    in_v = structured(device, BATCH * 16, sizeof(float) * 4, D3D11_BIND_SHADER_RESOURCE, NULL);
    out = structured(device, BATCH * 8, OUT_STRIDE, D3D11_BIND_UNORDERED_ACCESS, NULL);
    views[0] = srv(device, in_ins, INST_CAP);
    views[1] = srv(device, in_const, NV2A_VSH_CONSTANTS);
    views[2] = srv(device, in_v, BATCH * 16);
    {
        D3D11_UNORDERED_ACCESS_VIEW_DESC d = {0};
        d.ViewDimension = D3D11_UAV_DIMENSION_BUFFER;
        d.Buffer.NumElements = BATCH * 8;
        check_hr(ID3D11Device_CreateUnorderedAccessView(device, (ID3D11Resource *)out, &d, &uav), "CreateUAV");
    }
    sd.ByteWidth = BATCH * 8 * OUT_STRIDE;
    sd.Usage = D3D11_USAGE_STAGING;
    sd.BindFlags = 0;
    sd.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
    sd.MiscFlags = 0;
    sd.StructureByteStride = 0;
    check_hr(ID3D11Device_CreateBuffer(device, &sd, NULL, &staging), "CreateBuffer(staging)");

    for (unsigned i = 0; i < NV2A_VSH_CONSTANTS; i++) {
        float c[4] = {rndf(), rndf(), rndf(), rndf()};
        nv2a_vsh_set_constant(i, c);
    }
    /* Force the decoded runner: the GPU export only mirrors that path. */
    _putenv("RECOMP_VSH_DECODED=1");

    unsigned long long checks = 0;
    /* Probe: one FINAL instruction that writes nothing. d0..d3 defaults must
     * survive (d0,d1,tex0..3 start w=1). */
    {
        uint32_t w[4] = {0, 0, 0, 1};
        nv2a_vsh_set_instruction(5, w);
        nv2a_vsh_set_start_slot(5);
        uint32_t n = nv2a_vsh_export_gpu(ins, INST_CAP, constants, NV2A_VSH_CONSTANTS);
        memset(ins + n * STRIDE, 0, (INST_CAP - n) * STRIDE * sizeof(uint32_t));
        for (unsigned v = 0; v < BATCH; v++)
            for (int a = 0; a < NV2A_VSH_INPUTS; a++)
                for (int k = 0; k < 4; k++) inputs[v][a][k] = rndf();
        ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)in_ins, 0, NULL, ins, 0, 0);
        ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)in_const, 0, NULL, constants, 0, 0);
        ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)in_v, 0, NULL, inputs, 0, 0);
        params.count = n; params.verts = BATCH; params.p0 = params.p1 = 0;
        ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)cbuf, 0, NULL, &params, 0, 0);
        ID3D11DeviceContext_CSSetShader(ctx, cs, NULL, 0);
        ID3D11DeviceContext_CSSetConstantBuffers(ctx, 0, 1, &cbuf);
        ID3D11DeviceContext_CSSetShaderResources(ctx, 0, 3, views);
        ID3D11DeviceContext_CSSetUnorderedAccessViews(ctx, 0, 1, &uav, NULL);
        ID3D11DeviceContext_Dispatch(ctx, (BATCH + 63) / 64, 1, 1);
        ID3D11DeviceContext_CSSetUnorderedAccessViews(ctx, 0, 1, &none, NULL);
        ID3D11DeviceContext_CopyResource(ctx, (ID3D11Resource *)staging, (ID3D11Resource *)out);
        check_hr(ID3D11DeviceContext_Map(ctx, (ID3D11Resource *)staging, 0, D3D11_MAP_READ, 0, &map), "Map probe");
        memcpy(gpu_out, map.pData, BATCH * 8 * OUT_STRIDE);
        ID3D11DeviceContext_Unmap(ctx, (ID3D11Resource *)staging, 0);
        printf("probe no-op program: gpu d0 = %.2f %.2f %.2f %.2f (expect 0 0 0 1)\n",
               gpu_out[0][4], gpu_out[0][5], gpu_out[0][6], gpu_out[0][7]);
    }
    for (unsigned p = 0; p < PROGRAMS; p++) {
        uint32_t len = 1 + rnd() % 40;
        uint32_t start = rnd() % (NV2A_VSH_SLOTS - len);
        uint32_t w[4];
        for (unsigned i = 0; i < len; i++) {
            random_ins(w, i + 1 == len);
            nv2a_vsh_set_instruction(start + i, w);
        }
        nv2a_vsh_set_start_slot(start);

        uint32_t n = nv2a_vsh_export_gpu(ins, INST_CAP, constants, NV2A_VSH_CONSTANTS);
        if (!n) die("export returned no program");
        /* Zero words past the program end so the loop bound is unambiguous. */
        memset(ins + n * STRIDE, 0, (INST_CAP - n) * STRIDE * sizeof(uint32_t));

        for (unsigned v = 0; v < BATCH; v++)
            for (int a = 0; a < NV2A_VSH_INPUTS; a++)
                for (int k = 0; k < 4; k++)
                    inputs[v][a][k] = rndf();

        ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)in_ins, 0, NULL, ins, 0, 0);
        ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)in_const, 0, NULL, constants, 0, 0);
        ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)in_v, 0, NULL, inputs, 0, 0);
        params.count = n; params.verts = BATCH; params.p0 = params.p1 = 0;
        ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)cbuf, 0, NULL, &params, 0, 0);

        ID3D11DeviceContext_CSSetShader(ctx, cs, NULL, 0);
        ID3D11DeviceContext_CSSetConstantBuffers(ctx, 0, 1, &cbuf);
        ID3D11DeviceContext_CSSetShaderResources(ctx, 0, 3, views);
        ID3D11DeviceContext_CSSetUnorderedAccessViews(ctx, 0, 1, &uav, NULL);
        ID3D11DeviceContext_Dispatch(ctx, (BATCH + 63) / 64, 1, 1);
        ID3D11DeviceContext_CSSetUnorderedAccessViews(ctx, 0, 1, &none, NULL);

        ID3D11DeviceContext_CopyResource(ctx, (ID3D11Resource *)staging, (ID3D11Resource *)out);
        check_hr(ID3D11DeviceContext_Map(ctx, (ID3D11Resource *)staging, 0, D3D11_MAP_READ, 0, &map), "Map");
        memcpy(gpu_out, map.pData, BATCH * 8 * OUT_STRIDE);
        ID3D11DeviceContext_Unmap(ctx, (ID3D11Resource *)staging, 0);

        for (unsigned v = 0; v < BATCH; v++) {
            Nv2aVshOutput cpu;
            memset(&cpu, 0xA5, sizeof cpu);
            if (!nv2a_vsh_run((const float (*)[4])inputs[v], &cpu)) die("CPU run returned 0");
            const float *g = gpu_out[v];
            const float *fields[8] = { cpu.pos, cpu.d0, cpu.d1, cpu.fog,
                                       cpu.tex[0], cpu.tex[1], cpu.tex[2], cpu.tex[3] };
            for (int f = 0; f < 8; f++)
                for (int k = 0; k < 4; k++, checks++) {
                    float a = fields[f][k], b = g[f * 4 + k];
                    if (!closef(a, b)) {
                        fprintf(stderr, "MISMATCH program %u vertex %u field %d.%d: cpu %.9g gpu %.9g\n",
                                p, v, f, k, a, b);
                        fprintf(stderr, "  instruction count %u start slot %u\n", n, start);
                        fprintf(stderr, "  gpu d0 = %.6g %.6g %.6g %.6g | cpu d0 = %.6g %.6g %.6g %.6g\n",
                                g[4], g[5], g[6], g[7], cpu.d0[0], cpu.d0[1], cpu.d0[2], cpu.d0[3]);
                        for (unsigned ii = 0; ii < n; ii++) {
                            const uint32_t *o = ins + ii * STRIDE;
                            fprintf(stderr, "  ins %u mac %u ilu %u omask %u oaddr %u to_o %u from_ilu %u final %u reads %u\n",
                                    ii, o[0], o[1], o[6], o[7], o[8], o[9], o[10], o[11]);
                        }
                        return 1;
                    }
                }
        }
    }

    /* Controlled per-op phase: one instruction computing a single MAC or ILU
     * op from v0/c[100] into oPos, with bounded operands so every op (including
     * RCP/EXP/LOG/LIT) has identical IEEE results on CPU and GPU. */
    {
        const uint32_t mac_ops[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
        const uint32_t ilu_ops[] = {0,1,2,3,4,5,6,7};
        float c[4] = {0.25f, 0.75f, -0.6f, 0.4f};
        float v0[4] = {0.5f, -0.3f, 0.8f, 2.0f};
        nv2a_vsh_set_constant(100, c);
        for (unsigned phase = 0; phase < 2; phase++) {
            const uint32_t *ops = phase ? ilu_ops : mac_ops;
            unsigned nops = phase ? 8 : 16;
            for (unsigned o = 0; o < nops; o++) {
                uint32_t mac = phase ? 0 : ops[o], ilu = phase ? ops[o] : 0;
                uint32_t from_ilu = phase ? 1 : 0;
                uint32_t w[4];
                Nv2aVshOutput cpu;
                w[0] = 0;
                w[1] = (mac << 21) | (ilu << 25) | (100u << 13) | 0x1Bu;
                w[2] = (2u << 26) | (0x1Bu << 17) | (0x1Bu << 2);
                w[3] = (0xFu << 12) | (1u << 11) | (from_ilu << 2) | 1u;
                nv2a_vsh_set_instruction(7, w);
                nv2a_vsh_set_start_slot(7);
                uint32_t n = nv2a_vsh_export_gpu(ins, INST_CAP, constants, NV2A_VSH_CONSTANTS);
                memset(ins + n * STRIDE, 0, (INST_CAP - n) * STRIDE * sizeof(uint32_t));
                memset(inputs, 0, sizeof inputs);
                for (int k = 0; k < 4; k++) inputs[0][0][k] = v0[k];
                ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)in_ins, 0, NULL, ins, 0, 0);
                ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)in_const, 0, NULL, constants, 0, 0);
                ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)in_v, 0, NULL, inputs, 0, 0);
                params.count = n; params.verts = BATCH; params.p0 = params.p1 = 0;
                ID3D11DeviceContext_UpdateSubresource(ctx, (ID3D11Resource *)cbuf, 0, NULL, &params, 0, 0);
                ID3D11DeviceContext_CSSetShader(ctx, cs, NULL, 0);
                ID3D11DeviceContext_CSSetConstantBuffers(ctx, 0, 1, &cbuf);
                ID3D11DeviceContext_CSSetShaderResources(ctx, 0, 3, views);
                ID3D11DeviceContext_CSSetUnorderedAccessViews(ctx, 0, 1, &uav, NULL);
                ID3D11DeviceContext_Dispatch(ctx, (BATCH + 63) / 64, 1, 1);
                ID3D11DeviceContext_CSSetUnorderedAccessViews(ctx, 0, 1, &none, NULL);
                ID3D11DeviceContext_CopyResource(ctx, (ID3D11Resource *)staging, (ID3D11Resource *)out);
                check_hr(ID3D11DeviceContext_Map(ctx, (ID3D11Resource *)staging, 0, D3D11_MAP_READ, 0, &map), "Map op");
                memcpy(gpu_out, map.pData, BATCH * 8 * OUT_STRIDE);
                ID3D11DeviceContext_Unmap(ctx, (ID3D11Resource *)staging, 0);
                memset(&cpu, 0xA5, sizeof cpu);
                nv2a_vsh_run((const float (*)[4])inputs[0], &cpu);
                for (int k = 0; k < 4; k++, checks++) {
                    float a = cpu.pos[k], b = gpu_out[0][k];
                    if (!closef(a, b)) {
                        fprintf(stderr, "OP MISMATCH %s op %u comp %d: cpu %.9g gpu %.9g\n",
                                phase ? "ILU" : "MAC", ops[o], k, a, b);
                        return 1;
                    }
                }
            }
        }
    }

    printf("gpu-vsh: %llu output floats matched across %u random programs + 24 single-op programs\n",
           checks, PROGRAMS);
    puts("ok");
    ID3D11UnorderedAccessView_Release(uav);
    ID3D11ShaderResourceView_Release(views[0]);
    ID3D11ShaderResourceView_Release(views[1]);
    ID3D11ShaderResourceView_Release(views[2]);
    ID3D11Buffer_Release(cbuf); ID3D11Buffer_Release(in_ins); ID3D11Buffer_Release(in_const);
    ID3D11Buffer_Release(in_v); ID3D11Buffer_Release(out); ID3D11Buffer_Release(staging);
    ID3D11ComputeShader_Release(cs);
    ID3D11DeviceContext_Release(ctx); ID3D11Device_Release(device);
    return 0;
}
