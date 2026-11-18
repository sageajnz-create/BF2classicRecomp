#define CINTERFACE
#define COBJMACROS
#include <d3d11.h>
#include <d3dcompiler.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gpu_shader_jit.h"

/* ---- Dynamic string builder ---- */

typedef struct {
    char *data;
    size_t len;
    size_t cap;
    int oom;
} StrBuf;

static void sb_init(StrBuf *sb, size_t initial_cap)
{
    sb->cap = initial_cap ? initial_cap : 4096;
    sb->data = (char *)malloc(sb->cap);
    sb->len = 0;
    sb->oom = sb->data ? 0 : 1;
    if (sb->data)
        sb->data[0] = '\0';
}

static void sb_free(StrBuf *sb)
{
    free(sb->data);
    sb->data = NULL;
    sb->len = sb->cap = 0;
}

static void sb_appendf(StrBuf *sb, const char *fmt, ...)
{
    if (sb->oom)
        return;
    va_list ap, ap2;
    va_start(ap, fmt);
    va_copy(ap2, ap);
    int need = vsnprintf(NULL, 0, fmt, ap);
    va_end(ap);
    if (need < 0) {
        va_end(ap2);
        sb->oom = 1;
        return;
    }
    if (sb->len + (size_t)need + 1 > sb->cap) {
        size_t ncap = sb->cap ? sb->cap * 2 : 4096;
        while (ncap < sb->len + (size_t)need + 1)
            ncap *= 2;
        char *nd = (char *)realloc(sb->data, ncap);
        if (!nd) {
            va_end(ap2);
            sb->oom = 1;
            return;
        }
        sb->data = nd;
        sb->cap = ncap;
    }
    vsnprintf(sb->data + sb->len, sb->cap - sb->len, fmt, ap2);
    va_end(ap2);
    sb->len += (size_t)need;
}

static uint64_t hash_u32_slice(uint64_t h, const uint32_t *p, size_t count)
{
    for (size_t i = 0; i < count; i++) {
        h ^= (uint64_t)p[i];
        h *= 1099511628211ULL;
    }
    return h;
}

static int env_enabled_default_on(const char *name, int *cache)
{
    if (*cache < 0) {
        const char *e = getenv(name);
        *cache = (e && strcmp(e, "0") == 0) ? 0 : 1;
    }
    return *cache;
}

/* ============================================================================
 * 1. Native HLSL Vertex Shader JIT Compiler & Cache
 * ============================================================================ */

enum {
    VSH_INST_STRIDE = 44,
    VSH_MAX_INS     = 136,
    VSH_I_MAC       = 0,
    VSH_I_ILU       = 1,
    VSH_I_MAC_MASK  = 2,
    VSH_I_ILU_MASK  = 3,
    VSH_I_MAC_DST   = 4,
    VSH_I_ILU_DST   = 5,
    VSH_I_OMASK     = 6,
    VSH_I_OADDR     = 7,
    VSH_I_TO_O      = 8,
    VSH_I_FROM_ILU  = 9,
    VSH_I_FINAL     = 10,
    VSH_I_READS     = 11,
    VSH_S_MUX       = 0,
    VSH_S_IDX       = 1,
    VSH_S_NEG       = 2,
    VSH_S_REL       = 3,
    VSH_S_IDENT     = 4,
    VSH_S_SW0       = 5,
    VSH_S_C         = 9,
    VSH_DEC_TEMP    = 1,
    VSH_DEC_INPUT   = 2,
    VSH_DEC_CONST   = 3,
    VSH_NO_DST      = 255
};

#define VSH_SRC_BASE(k) (12u + (k) * 10u)

enum { VSH_CACHE_BUCKETS = 1024, VSH_CACHE_MAX = 512 };

typedef struct {
    int used;
    uint64_t hash;
    uint32_t ins_count;
    uint32_t stream_mask;
    uint32_t *ins_copy;
    ID3D11VertexShader *shader; /* NULL if compile failed (negative cache) */
} VshCacheEntry;

static VshCacheEntry s_vsh_cache[VSH_CACHE_BUCKETS];
static unsigned s_vsh_count = 0;
static uint64_t s_vsh_hits = 0, s_vsh_misses = 0, s_vsh_fails = 0;
static int s_vsh_jit_enabled = -1;

static const char *VSH_PREAMBLE =
"StructuredBuffer<float4> g_const : register(t1);\n"
"StructuredBuffer<uint> g_vertex_words : register(t3);\n"
"StructuredBuffer<uint4> g_attributes : register(t4);\n"
"StructuredBuffer<float4> g_attribute_defaults : register(t6);\n"
"cbuffer Params : register(b0) {\n"
"    uint g_ins_count;\n"
"    uint g_vertex_count;\n"
"    uint g_ins_base;\n"
"    uint g_const_base;\n"
"};\n"
"cbuffer GatherParams : register(b1) {\n"
"    uint g_vertex_bytes;\n"
"    uint g_stream_mask;\n"
"    uint g_index_count;\n"
"    uint g_words_base;\n"
"};\n"
"cbuffer TransformParams : register(b2) {\n"
"    float2 g_aa_scale;\n"
"    float2 g_fog_param;\n"
"    uint g_fog_mode;\n"
"    float2 g_half_dim;\n"
"    uint g_transform_reserved;\n"
"};\n"
"struct RasterVertex {\n"
"    float4 position : SV_POSITION;\n"
"    noperspective float4 diffuse : COLOR0;\n"
"    noperspective float4 specular : COLOR1;\n"
"    noperspective float4 tc0 : TEXCOORD0;\n"
"    noperspective float4 tc1 : TEXCOORD1;\n"
"    noperspective float4 tc2 : TEXCOORD2;\n"
"    noperspective float4 tc3 : TEXCOORD3;\n"
"    noperspective float fog : TEXCOORD4;\n"
"};\n"
"static uint vertex_byte(uint address) {\n"
"    return (g_vertex_words[g_words_base + (address >> 2)] >> ((address & 3) * 8)) & 255;\n"
"}\n"
"static uint vertex_word(uint address) {\n"
"    uint w = g_words_base + (address >> 2);\n"
"    uint lo = g_vertex_words[w];\n"
"    uint shift = (address & 3) * 8;\n"
"    if (!shift) return lo;\n"
"    return (lo >> shift) | (g_vertex_words[w + 1] << (32 - shift));\n"
"}\n"
"static float4 gather_stream_attr(uint slot, uint index, uint attr_base) {\n"
"    if (index >= 0x01000000u) return float4(0, 0, 0, 1);\n"
"    uint4 d = g_attributes[attr_base + slot];\n"
"    float4 result = float4(0, 0, 0, 1);\n"
"    uint n = min(d.w, 4u);\n"
"    if (!n || !d.y) return result;\n"
"    uint bytes = (d.z == 0 || d.z == 6) ? 4 :\n"
"                 (d.z == 1 || d.z == 5) ? 2 * n : d.z == 4 ? n : 4 * n;\n"
"    if (d.x > g_vertex_bytes || bytes > g_vertex_bytes - d.x) return result;\n"
"    uint max_offset = g_vertex_bytes - d.x - bytes;\n"
"    uint offset = index * d.y;\n"
"    if (offset > max_offset) return result;\n"
"    uint address = d.x + offset;\n"
"    if (d.z == 2) {\n"
"        if (n >= 1) result.x = asfloat(vertex_word(address));\n"
"        if (n >= 2) result.y = asfloat(vertex_word(address + 4));\n"
"        if (n >= 3) result.z = asfloat(vertex_word(address + 8));\n"
"        if (n >= 4) result.w = asfloat(vertex_word(address + 12));\n"
"        return result;\n"
"    }\n"
"    if (d.z == 0) {\n"
"        uint v = vertex_word(address);\n"
"        return float4((v >> 16) & 255, (v >> 8) & 255, v & 255, v >> 24) / 255.0;\n"
"    }\n"
"    if (d.z == 6) {\n"
"        uint v = vertex_word(address);\n"
"        result.xyz = float3((int)(v << 21) >> 21, (int)(v << 10) >> 21,\n"
"                            (int)v >> 22) / float3(1023.0, 1023.0, 511.0);\n"
"        return result;\n"
"    }\n"
"    [unroll] for (uint k = 0; k < 4; k++) {\n"
"        if (k >= n) break;\n"
"        if (d.z == 4) result[k] = vertex_byte(address + k) / 255.0;\n"
"        else if (d.z == 1 || d.z == 5) {\n"
"            uint a = address + k * 2;\n"
"            int v = (int)((vertex_byte(a) | (vertex_byte(a + 1) << 8)) << 16) >> 16;\n"
"            result[k] = d.z == 1 ? v / 32767.0 : (float)v;\n"
"        }\n"
"    }\n"
"    return result;\n"
"}\n"
"static float4 rd_const_rel(int c, int a0) {\n"
"    int ci = c + a0;\n"
"    if (ci < 0 || ci >= 192) ci = 0;\n"
"    return g_const[g_const_base + (uint)ci];\n"
"}\n"
"static float4 vsh_splat(float f) { return float4(f, f, f, f); }\n"
"static float4 vsh_rcc(float x) {\n"
"    float f = 1.0 / x;\n"
"    float af = abs(f);\n"
"    if (af < 5.42101e-20f) f = (f < 0 ? -1 : 1) * 5.42101e-20f;\n"
"    else if (af > 1.884467e19f) f = (f < 0 ? -1 : 1) * 1.884467e19f;\n"
"    return vsh_splat(f);\n"
"}\n"
"static float4 vsh_exp(float x) {\n"
"    float fl = floor(x);\n"
"    return float4(exp2(fl), x - fl, exp2(x), 1.0);\n"
"}\n"
"static float4 vsh_log(float x) {\n"
"    float ax = abs(x);\n"
"    if (ax == 0.0) return float4(-asfloat(0x7F800000u), 1.0, -asfloat(0x7F800000u), 1.0);\n"
"    float e = floor(log2(ax));\n"
"    return float4(e, ax / exp2(e), log2(ax), 1.0);\n"
"}\n"
"static float4 vsh_lit(float4 c) {\n"
"    float nl = max(c.x, 0.0), nh = max(c.y, 0.0);\n"
"    float p = min(max(c.w, -127.9961f), 127.9961f);\n"
"    return float4(1.0, nl, (c.x > 0.0) ? pow(nh, p) : 0.0, 1.0);\n"
"}\n"
"static float eval_fog(float d) {\n"
"    if (!g_fog_mode) return 1.0;\n"
"    float f;\n"
"    float px = g_fog_param.x, py = g_fog_param.y;\n"
"    if (g_fog_mode == 0x800u || g_fog_mode == 0x802u)\n"
"        f = px + exp2(d * py * 16.0) - 1.5;\n"
"    else if (g_fog_mode == 0x801u || g_fog_mode == 0x803u)\n"
"        f = px + exp2(-d * d * py * py * 32.0) - 1.5;\n"
"    else\n"
"        f = px + d * py - 1.0;\n"
"    if (g_fog_mode == 0x802u || g_fog_mode == 0x803u || g_fog_mode == 0x804u)\n"
"        f = abs(f);\n"
"    if (isnan(f)) f = 1.0;\n"
"    return saturate(f);\n"
"}\n";

static void mask_to_swiz(uint32_t mask, char out[5])
{
    int n = 0;
    if (mask & 8) out[n++] = 'x';
    if (mask & 4) out[n++] = 'y';
    if (mask & 2) out[n++] = 'z';
    if (mask & 1) out[n++] = 'w';
    out[n] = '\0';
}

static void emit_vsh_src(StrBuf *sb, const uint32_t *src)
{
    static const char ch[4] = {'x', 'y', 'z', 'w'};
    uint32_t mux = src[VSH_S_MUX];
    uint32_t idx = src[VSH_S_IDX];
    uint32_t neg = src[VSH_S_NEG];
    uint32_t rel = src[VSH_S_REL];
    uint32_t ident = src[VSH_S_IDENT];
    uint32_t c = src[VSH_S_C];

    if (neg)
        sb_appendf(sb, "(-(");
    if (mux == VSH_DEC_TEMP) {
        if (idx > 12) idx = 12;
        sb_appendf(sb, "r%u", idx);
    } else if (mux == VSH_DEC_INPUT) {
        if (idx > 15) idx = 15;
        sb_appendf(sb, "v%u", idx);
    } else {
        if (rel) {
            sb_appendf(sb, "rd_const_rel(%d, a0)", (int)c);
        } else {
            uint32_t ci = (c < 192u) ? c : 0u;
            sb_appendf(sb, "g_const[g_const_base + %uu]", ci);
        }
    }
    if (!ident) {
        uint32_t s0 = src[VSH_S_SW0 + 0] & 3u;
        uint32_t s1 = src[VSH_S_SW0 + 1] & 3u;
        uint32_t s2 = src[VSH_S_SW0 + 2] & 3u;
        uint32_t s3 = src[VSH_S_SW0 + 3] & 3u;
        if (!(s0 == 0 && s1 == 1 && s2 == 2 && s3 == 3))
            sb_appendf(sb, ".%c%c%c%c", ch[s0], ch[s1], ch[s2], ch[s3]);
    }
    if (neg)
        sb_appendf(sb, "))");
}

static void emit_vsh_masked_assign(StrBuf *sb, const char *dst, const char *val, uint32_t mask)
{
    mask &= 15u;
    if (!mask)
        return;
    if (mask == 15u) {
        sb_appendf(sb, "    %s = %s;\n", dst, val);
    } else {
        char sw[5];
        mask_to_swiz(mask, sw);
        sb_appendf(sb, "    %s.%s = (%s).%s;\n", dst, sw, val, sw);
    }
}

static const char *vsh_out_reg_name(uint32_t oaddr)
{
    switch (oaddr) {
    case 0:  return "r12";
    case 3:  return "o_d0";
    case 4:  return "o_d1";
    case 5:  return "o_fog";
    case 9:  return "o_tex0";
    case 10: return "o_tex1";
    case 11: return "o_tex2";
    case 12: return "o_tex3";
    default: return NULL;
    }
}

static void shader_cache_ensure_loaded(ID3D11Device *device);
static void shader_cache_save_vsh(uint64_t hash, uint32_t ins_count, uint32_t stream_mask,
                                  const uint32_t *ins, const void *dxbc, uint32_t dxbc_bytes);
static void shader_cache_save_ps(uint64_t hash, const void *key, uint32_t key_bytes,
                                 const void *dxbc, uint32_t dxbc_bytes);

static ID3D11VertexShader *compile_vsh_jit(ID3D11Device *device,
                                           const uint32_t *instructions,
                                           uint32_t ins_count,
                                           uint32_t stream_mask,
                                           uint64_t hash)
{
    uint32_t count = ins_count < VSH_MAX_INS ? ins_count : VSH_MAX_INS;
    uint32_t used_inputs = 0;
    uint32_t active_count = 0;

    for (uint32_t i = 0; i < count; i++) {
        const uint32_t *ins = instructions + (size_t)i * VSH_INST_STRIDE;
        uint32_t reads = ins[VSH_I_READS];
        for (uint32_t k = 0; k < 3; k++) {
            if (reads & (1u << k)) {
                const uint32_t *src = ins + VSH_SRC_BASE(k);
                if (src[VSH_S_MUX] == VSH_DEC_INPUT) {
                    uint32_t idx = src[VSH_S_IDX];
                    if (idx > 15) idx = 15;
                    used_inputs |= (1u << idx);
                }
            }
        }
        active_count = i + 1;
        if (ins[VSH_I_FINAL])
            break;
    }

    StrBuf sb;
    sb_init(&sb, 8192 + active_count * 256);
    sb_appendf(&sb, "%s", VSH_PREAMBLE);
    sb_appendf(&sb,
        "RasterVertex vs_jit_main(uint index : SV_VertexID) {\n"
        "    uint attr_base = (g_transform_reserved & 0xFFFFu) * 16u;\n"
        "    uint def_base = (g_transform_reserved >> 16) * 16u;\n");

    /* Gather ONLY inputs actually referenced by this vertex program. */
    for (uint32_t k = 0; k < 16; k++) {
        if (!(used_inputs & (1u << k)))
            continue;
        if (stream_mask & (1u << k))
            sb_appendf(&sb, "    float4 v%u = gather_stream_attr(%uu, index, attr_base);\n", k, k);
        else
            sb_appendf(&sb, "    float4 v%u = g_attribute_defaults[def_base + %uu];\n", k, k);
    }

    sb_appendf(&sb,
        "    float4 r0=0,r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r10=0,r11=0,r12=0;\n"
        "    float4 o_d0 = float4(0,0,0,1), o_d1 = float4(0,0,0,1), o_fog = float4(0,0,0,0);\n"
        "    float4 o_tex0 = float4(0,0,0,1), o_tex1 = float4(0,0,0,1);\n"
        "    float4 o_tex2 = float4(0,0,0,1), o_tex3 = float4(0,0,0,1);\n"
        "    int a0 = 0;\n"
        "    float4 _a, _b, _c, _m, _i;\n");

    for (uint32_t i = 0; i < active_count; i++) {
        const uint32_t *ins = instructions + (size_t)i * VSH_INST_STRIDE;
        uint32_t mac = ins[VSH_I_MAC];
        uint32_t ilu = ins[VSH_I_ILU];
        uint32_t mac_mask = ins[VSH_I_MAC_MASK] & 15u;
        uint32_t ilu_mask = ins[VSH_I_ILU_MASK] & 15u;
        uint32_t mac_dst = ins[VSH_I_MAC_DST];
        uint32_t ilu_dst = ins[VSH_I_ILU_DST];
        uint32_t omask = ins[VSH_I_OMASK] & 15u;
        uint32_t oaddr = ins[VSH_I_OADDR];
        uint32_t to_o = ins[VSH_I_TO_O];
        uint32_t from_ilu = ins[VSH_I_FROM_ILU];
        uint32_t reads = ins[VSH_I_READS];

        int need_mac_write = (mac_mask && mac_dst <= 12) || (omask && to_o && !from_ilu && vsh_out_reg_name(oaddr));
        int need_ilu_write = (ilu_mask && ilu_dst <= 12) || (omask && to_o && from_ilu && vsh_out_reg_name(oaddr));
        int need_arl = (mac == 13);

        if (!need_mac_write && !need_ilu_write && !need_arl)
            continue;

        if (reads & 1) {
            sb_appendf(&sb, "    _a = ");
            emit_vsh_src(&sb, ins + VSH_SRC_BASE(0));
            sb_appendf(&sb, ";\n");
        } else if (mac) {
            sb_appendf(&sb, "    _a = 0;\n");
        }
        if (reads & 2) {
            sb_appendf(&sb, "    _b = ");
            emit_vsh_src(&sb, ins + VSH_SRC_BASE(1));
            sb_appendf(&sb, ";\n");
        } else if (mac) {
            sb_appendf(&sb, "    _b = 0;\n");
        }
        if (reads & 4) {
            sb_appendf(&sb, "    _c = ");
            emit_vsh_src(&sb, ins + VSH_SRC_BASE(2));
            sb_appendf(&sb, ";\n");
        } else if (mac || ilu) {
            sb_appendf(&sb, "    _c = 0;\n");
        }

        if (need_mac_write || need_arl) {
            switch (mac) {
            case 0:  sb_appendf(&sb, "    _m = 0;\n"); break;
            case 1:  sb_appendf(&sb, "    _m = _a;\n"); break;
            case 2:  sb_appendf(&sb, "    _m = _a * _b;\n"); break;
            case 3:  sb_appendf(&sb, "    _m = _a + _c;\n"); break;
            case 4:  sb_appendf(&sb, "    _m = mad(_a, _b, _c);\n"); break;
            case 5:  sb_appendf(&sb, "    _m = vsh_splat(dot(_a.xyz, _b.xyz));\n"); break;
            case 6:  sb_appendf(&sb, "    _m = vsh_splat(dot(_a.xyz, _b.xyz) + _b.w);\n"); break;
            case 7:  sb_appendf(&sb, "    _m = vsh_splat(dot(_a, _b));\n"); break;
            case 8:  sb_appendf(&sb, "    _m = float4(1.0, _a.y * _b.y, _a.z, _b.w);\n"); break;
            case 9:  sb_appendf(&sb, "    _m = min(_a, _b);\n"); break;
            case 10: sb_appendf(&sb, "    _m = max(_a, _b);\n"); break;
            case 11: sb_appendf(&sb, "    _m = (_a >= _b) ? float4(0,0,0,0) : float4(1,1,1,1);\n"); break;
            case 12: sb_appendf(&sb, "    _m = (_a >= _b) ? float4(1,1,1,1) : float4(0,0,0,0);\n"); break;
            case 13: sb_appendf(&sb, "    a0 = (int)floor(_a.x + 0.001f); _m = _a;\n"); break;
            default: sb_appendf(&sb, "    _m = _a;\n"); break;
            }
        }
        if (need_ilu_write) {
            switch (ilu) {
            case 0:  sb_appendf(&sb, "    _i = 0;\n"); break;
            case 1:  sb_appendf(&sb, "    _i = _c;\n"); break;
            case 2:  sb_appendf(&sb, "    _i = vsh_splat(1.0 / _c.x);\n"); break;
            case 3:  sb_appendf(&sb, "    _i = vsh_rcc(_c.x);\n"); break;
            case 4:  sb_appendf(&sb, "    _i = vsh_splat(rsqrt(abs(_c.x)));\n"); break;
            case 5:  sb_appendf(&sb, "    _i = vsh_exp(_c.x);\n"); break;
            case 6:  sb_appendf(&sb, "    _i = vsh_log(_c.x);\n"); break;
            case 7:  sb_appendf(&sb, "    _i = vsh_lit(_c);\n"); break;
            default: sb_appendf(&sb, "    _i = _c;\n"); break;
            }
        }

        if (mac_mask && mac_dst <= 12) {
            char dst[8];
            _snprintf_s(dst, sizeof dst, _TRUNCATE, "r%u", mac_dst);
            emit_vsh_masked_assign(&sb, dst, "_m", mac_mask);
        }
        if (ilu_mask && ilu_dst <= 12) {
            char dst[8];
            _snprintf_s(dst, sizeof dst, _TRUNCATE, "r%u", ilu_dst);
            emit_vsh_masked_assign(&sb, dst, "_i", ilu_mask);
        }
        if (omask && to_o) {
            const char *oname = vsh_out_reg_name(oaddr);
            if (oname)
                emit_vsh_masked_assign(&sb, oname, from_ilu ? "_i" : "_m", omask);
        }
    }

    sb_appendf(&sb,
        "    float w = r12.w;\n"
        "    if (w == 0.0f && asuint(w) == 0u) w = 1.0f;\n"
        "    float2 pos_xy = r12.xy * g_aa_scale;\n"
        "    float2 hd = g_half_dim.x > 0.0 ? g_half_dim : float2(320.0, 240.0);\n"
        "    RasterVertex outv;\n"
        "    outv.position = float4((pos_xy.x / hd.x - 1.0) * w,\n"
        "                           (1.0 - pos_xy.y / hd.y) * w,\n"
        "                           (r12.z / 33554432.0) * w, w);\n"
        "    outv.diffuse = saturate(o_d0);\n"
        "    outv.specular = saturate(o_d1);\n"
        "    float inv_w = 1.0f / w;\n"
        "    outv.tc0 = o_tex0 * inv_w;\n"
        "    outv.tc1 = o_tex1 * inv_w;\n"
        "    outv.tc2 = o_tex2 * inv_w;\n"
        "    outv.tc3 = o_tex3 * inv_w;\n"
        "    outv.fog = eval_fog(o_fog.x);\n"
        "    return outv;\n"
        "}\n");

    ID3D11VertexShader *vs = NULL;
    if (!sb.oom) {
        ID3DBlob *code = NULL, *errors = NULL;
        HRESULT hr = D3DCompile(sb.data, sb.len, "vsh_jit.hlsl", NULL, NULL,
            "vs_jit_main", "vs_5_0",
            D3DCOMPILE_IEEE_STRICTNESS | D3DCOMPILE_OPTIMIZATION_LEVEL3,
            0, &code, &errors);
        if (errors) {
            if (FAILED(hr))
                fprintf(stderr, "[VSH-JIT] compile error: %s\n",
                        (const char *)ID3D10Blob_GetBufferPointer(errors));
            ID3D10Blob_Release(errors);
        }
        if (SUCCEEDED(hr) && code) {
            const void *bytes = ID3D10Blob_GetBufferPointer(code);
            size_t bsize = ID3D10Blob_GetBufferSize(code);
            hr = ID3D11Device_CreateVertexShader(device, bytes, bsize, NULL, &vs);
            if (FAILED(hr)) {
                fprintf(stderr, "[VSH-JIT] CreateVertexShader failed (0x%08lX)\n", (unsigned long)hr);
                vs = NULL;
            } else if (bsize <= 4u * 1024u * 1024u) {
                shader_cache_save_vsh(hash, count, stream_mask, instructions, bytes, (uint32_t)bsize);
            }
            ID3D10Blob_Release(code);
        }
    }
    sb_free(&sb);
    return vs;
}

typedef struct {
    uint32_t rev;
    uint32_t count;
    uint32_t mask16;
    ID3D11VertexShader *shader;
} VshRevSlot;

static VshRevSlot s_vsh_rev_cache[64];

ID3D11VertexShader *gpu_jit_get_vsh(ID3D11Device *device,
                                    const uint32_t *instructions,
                                    uint32_t instruction_count,
                                    uint32_t stream_mask,
                                    uint32_t program_revision)
{
    if (!device || !instructions || !env_enabled_default_on("RECOMP_VSH_JIT", &s_vsh_jit_enabled))
        return NULL;

    shader_cache_ensure_loaded(device);

    uint32_t count = instruction_count < VSH_MAX_INS ? instruction_count : VSH_MAX_INS;
    uint32_t mask16 = stream_mask & 0xFFFFu;

    /* O(1) fast path when the caller supplies a monotonic program revision:
     * avoids hashing and memcmp-ing ~6 KB of decoded instructions per draw. */
    VshRevSlot *rslot = NULL;
    if (program_revision) {
        rslot = &s_vsh_rev_cache[(program_revision ^ (mask16 * 2654435761u)) & 63u];
        if (rslot->rev == program_revision && rslot->mask16 == mask16 && rslot->count == count) {
            s_vsh_hits++;
            return rslot->shader;
        }
    }

    size_t words = (size_t)count * VSH_INST_STRIDE;

    uint64_t h = 14695981039346656037ULL;
    h ^= count; h *= 1099511628211ULL;
    h ^= mask16; h *= 1099511628211ULL;
    h = hash_u32_slice(h, instructions, words);

    unsigned slot = (unsigned)(h & (VSH_CACHE_BUCKETS - 1));
    for (unsigned probe = 0; probe < VSH_CACHE_BUCKETS; probe++) {
        VshCacheEntry *e = &s_vsh_cache[(slot + probe) & (VSH_CACHE_BUCKETS - 1)];
        if (!e->used) {
            if (s_vsh_count >= VSH_CACHE_MAX)
                return NULL;
            uint32_t *copy = NULL;
            if (words) {
                copy = (uint32_t *)malloc(words * sizeof(uint32_t));
                if (!copy)
                    return NULL;
                memcpy(copy, instructions, words * sizeof(uint32_t));
            }
            s_vsh_misses++;
            ID3D11VertexShader *vs = compile_vsh_jit(device, instructions, count, mask16, h);
            if (!vs)
                s_vsh_fails++;
            e->used = 1;
            e->hash = h;
            e->ins_count = count;
            e->stream_mask = mask16;
            e->ins_copy = copy;
            e->shader = vs;
            s_vsh_count++;
            if (rslot) {
                rslot->rev = program_revision;
                rslot->count = count;
                rslot->mask16 = mask16;
                rslot->shader = vs;
            }
            return vs;
        }
        if (e->hash == h && e->ins_count == count && e->stream_mask == mask16 &&
            (words == 0 || memcmp(e->ins_copy, instructions, words * sizeof(uint32_t)) == 0)) {
            s_vsh_hits++;
            if (rslot) {
                rslot->rev = program_revision;
                rslot->count = count;
                rslot->mask16 = mask16;
                rslot->shader = e->shader;
            }
            return e->shader;
        }
    }
    return NULL;
}

/* ============================================================================
 * 2. Native HLSL Pixel Combiner JIT Compiler & Cache
 * ============================================================================ */

enum { PS_CACHE_BUCKETS = 2048, PS_CACHE_MAX = 1024 };

typedef struct {
    uint32_t color_icw[8];
    uint32_t alpha_icw[8];
    uint32_t color_ocw[8];
    uint32_t alpha_ocw[8];
    uint32_t config[4];
    uint32_t alpha_func; /* 0 = disabled, else 0x200..0x207 */
} PsJitKey;

typedef struct {
    int used;
    uint64_t hash;
    PsJitKey key;
    ID3D11PixelShader *shader;
} PsCacheEntry;

static PsCacheEntry s_ps_cache[PS_CACHE_BUCKETS];
static unsigned s_ps_count = 0;
static uint64_t s_ps_hits = 0, s_ps_misses = 0, s_ps_fails = 0;
static int s_ps_jit_enabled = -1;

static const char *PS_PREAMBLE =
"Texture2D tex0 : register(t0);\n"
"Texture2D tex1 : register(t1);\n"
"Texture2D tex2 : register(t2);\n"
"Texture2D tex3 : register(t3);\n"
"Texture2DArray cube0 : register(t4);\n"
"Texture2DArray cube1 : register(t5);\n"
"Texture2DArray cube2 : register(t6);\n"
"Texture2DArray cube3 : register(t7);\n"
"SamplerState samp0 : register(s0);\n"
"SamplerState samp1 : register(s1);\n"
"SamplerState samp2 : register(s2);\n"
"SamplerState samp3 : register(s3);\n"
"cbuffer Program : register(b0) {\n"
"    uint4 color_icw[2];\n"
"    uint4 alpha_icw[2];\n"
"    uint4 color_ocw[2];\n"
"    uint4 alpha_ocw[2];\n"
"    float4 c0[8];\n"
"    float4 c1[8];\n"
"    float4 final_c0;\n"
"    float4 final_c1;\n"
"    uint4 config;\n"
"};\n"
"cbuffer DrawInfo : register(b1) {\n"
"    float4 texture_scale[4];\n"
"    float4 fog_color;\n"
"    uint4 alpha_state;\n"
"    float2 half_dim;\n"
"    uint visibility_slot;\n"
"    float pad;\n"
"};\n"
"struct RasterVertex {\n"
"    float4 position : SV_POSITION;\n"
"    noperspective float4 diffuse : COLOR0;\n"
"    noperspective float4 specular : COLOR1;\n"
"    noperspective float4 tc0 : TEXCOORD0;\n"
"    noperspective float4 tc1 : TEXCOORD1;\n"
"    noperspective float4 tc2 : TEXCOORD2;\n"
"    noperspective float4 tc3 : TEXCOORD3;\n"
"    noperspective float fog : TEXCOORD4;\n"
"};\n"
"static float3 cube_uv_face(float3 dir) {\n"
"    float x = dir.x, y = dir.y, z = dir.z;\n"
"    float ax = abs(x), ay = abs(y), az = abs(z);\n"
"    float ma, sc, tc, face;\n"
"    if (ax >= ay && ax >= az) {\n"
"        face = x > 0 ? 0.0 : 1.0; ma = ax; sc = x > 0 ? -z : z; tc = -y;\n"
"    } else if (ay >= az) {\n"
"        face = y > 0 ? 2.0 : 3.0; ma = ay; sc = x; tc = y > 0 ? z : -z;\n"
"    } else {\n"
"        face = z > 0 ? 4.0 : 5.0; ma = az; sc = z > 0 ? x : -x; tc = -y;\n"
"    }\n"
"    if (ma == 0.0) ma = 1.0;\n"
"    return float3((sc / ma + 1.0) * 0.5, (tc / ma + 1.0) * 0.5, face);\n"
"}\n";

static void emit_ps_read_rgb(StrBuf *sb, uint32_t input_byte)
{
    uint32_t reg = input_byte & 15u;
    uint32_t map = (input_byte >> 5) & 7u;
    const char *ch = (input_byte & 16u) ? "aaa" : "rgb";

    if (reg == 0u) {
        switch (map) {
        case 1: case 3: sb_appendf(sb, "float3(1.0,1.0,1.0)"); break;
        case 2:         sb_appendf(sb, "float3(-1.0,-1.0,-1.0)"); break;
        case 4:         sb_appendf(sb, "float3(-0.5,-0.5,-0.5)"); break;
        case 5:         sb_appendf(sb, "float3(0.5,0.5,0.5)"); break;
        default:        sb_appendf(sb, "float3(0.0,0.0,0.0)"); break;
        }
        return;
    }
    switch (map) {
    case 0: sb_appendf(sb, "max(r%u.%s, 0.0)", reg, ch); break;
    case 1: sb_appendf(sb, "(1.0 - saturate(r%u.%s))", reg, ch); break;
    case 2: sb_appendf(sb, "(2.0 * max(r%u.%s, 0.0) - 1.0)", reg, ch); break;
    case 3: sb_appendf(sb, "(1.0 - 2.0 * max(r%u.%s, 0.0))", reg, ch); break;
    case 4: sb_appendf(sb, "(max(r%u.%s, 0.0) - 0.5)", reg, ch); break;
    case 5: sb_appendf(sb, "(0.5 - max(r%u.%s, 0.0))", reg, ch); break;
    case 6: sb_appendf(sb, "r%u.%s", reg, ch); break;
    default: sb_appendf(sb, "(-r%u.%s)", reg, ch); break;
    }
}

static void emit_ps_read_alpha(StrBuf *sb, uint32_t input_byte)
{
    uint32_t reg = input_byte & 15u;
    uint32_t map = (input_byte >> 5) & 7u;
    const char *ch = (input_byte & 16u) ? "a" : "b";

    if (reg == 0u) {
        switch (map) {
        case 1: case 3: sb_appendf(sb, "1.0"); break;
        case 2:         sb_appendf(sb, "(-1.0)"); break;
        case 4:         sb_appendf(sb, "(-0.5)"); break;
        case 5:         sb_appendf(sb, "0.5"); break;
        default:        sb_appendf(sb, "0.0"); break;
        }
        return;
    }
    switch (map) {
    case 0: sb_appendf(sb, "max(r%u.%s, 0.0)", reg, ch); break;
    case 1: sb_appendf(sb, "(1.0 - saturate(r%u.%s))", reg, ch); break;
    case 2: sb_appendf(sb, "(2.0 * max(r%u.%s, 0.0) - 1.0)", reg, ch); break;
    case 3: sb_appendf(sb, "(1.0 - 2.0 * max(r%u.%s, 0.0))", reg, ch); break;
    case 4: sb_appendf(sb, "(max(r%u.%s, 0.0) - 0.5)", reg, ch); break;
    case 5: sb_appendf(sb, "(0.5 - max(r%u.%s, 0.0))", reg, ch); break;
    case 6: sb_appendf(sb, "r%u.%s", reg, ch); break;
    default: sb_appendf(sb, "(-r%u.%s)", reg, ch); break;
    }
}

static void emit_ps_map_output(StrBuf *sb, const char *expr, uint32_t flags)
{
    switch (flags & 0x38u) {
    case 0x08u: sb_appendf(sb, "clamp((%s) - 0.5, -1.0, 1.0)", expr); break;
    case 0x10u: sb_appendf(sb, "clamp((%s) * 2.0, -1.0, 1.0)", expr); break;
    case 0x18u: sb_appendf(sb, "clamp(((%s) - 0.5) * 2.0, -1.0, 1.0)", expr); break;
    case 0x20u: sb_appendf(sb, "clamp((%s) * 4.0, -1.0, 1.0)", expr); break;
    case 0x30u: sb_appendf(sb, "clamp((%s) * 0.5, -1.0, 1.0)", expr); break;
    default:    sb_appendf(sb, "clamp(%s, -1.0, 1.0)", expr); break;
    }
}

static ID3D11PixelShader *compile_ps_jit(ID3D11Device *device, const PsJitKey *k, uint64_t hash)
{
    StrBuf sb;
    sb_init(&sb, 8192);
    sb_appendf(&sb, "%s", PS_PREAMBLE);
    sb_appendf(&sb,
        "float4 ps_jit_main(RasterVertex v) : SV_TARGET {\n"
        "    float4 r1 = 0, r2 = 0;\n"
        "    float4 r3 = float4(fog_color.rgb, v.fog);\n"
        "    float4 r4 = v.diffuse;\n"
        "    float4 r5 = v.specular;\n"
        "    float4 r6 = 0, r7 = 0;\n");

    /* Emit ONLY active texture stage fetches. */
    for (uint32_t s = 0; s < 4; s++) {
        uint32_t mode = (k->config[1] >> (5u * s)) & 31u;
        uint32_t ridx = 8u + s;
        if (mode == 0u) {
            sb_appendf(&sb, "    float4 r%u = float4(0.0, 0.0, 0.0, 1.0);\n", ridx);
        } else if (mode == 3u) {
            sb_appendf(&sb,
                "    float4 r%u = (texture_scale[%u].z == 0.0) ? float4(1,1,1,1) :\n"
                "        cube%u.SampleLevel(samp%u, cube_uv_face(v.tc%u.xyz), 0.0);\n",
                ridx, s, s, s, s);
        } else if (mode == 4u) {
            sb_appendf(&sb, "    float4 r%u = clamp(v.tc%u, 0.0, 1.0);\n", ridx, s);
        } else if (mode >= 6u) {
            sb_appendf(&sb, "    float4 r%u = float4(0.0, 0.0, 0.0, 0.0);\n", ridx);
        } else {
            sb_appendf(&sb,
                "    float4 r%u;\n"
                "    if (texture_scale[%u].z == 0.0) {\n"
                "        r%u = 1.0;\n"
                "    } else {\n"
                "        float2 _uv%u = v.tc%u.xy * texture_scale[%u].xy / (v.tc%u.w != 0.0 ? v.tc%u.w : 1.0);\n"
                "        r%u = tex%u.SampleGrad(samp%u, _uv%u, ddx(_uv%u), ddy(_uv%u));\n"
                "    }\n",
                ridx, s, ridx, s, s, s, s, s, ridx, s, s, s, s, s);
        }
    }

    sb_appendf(&sb,
        "    float4 r12 = float4(0.0, 0.0, 0.0, %s);\n"
        "    float4 r13 = 0, r14 = 0, r15 = 0;\n",
        (k->config[1] & 31u) ? "r8.a" : "1.0");

    uint32_t num_stages = k->config[0] & 255u;
    if (num_stages > 8u) num_stages = 8u;
    uint32_t mux_mode = (k->config[0] >> 8) & 1u;

    for (uint32_t st = 0; st < num_stages; st++) {
        uint32_t ocw = k->color_ocw[st];
        uint32_t aocw = k->alpha_ocw[st];
        if (!((ocw | aocw) & 0xfffu))
            continue;
        uint32_t icw = k->color_icw[st];
        uint32_t aicw = k->alpha_icw[st];
        uint32_t rgb_flags = ocw >> 12;
        uint32_t alpha_flags = aocw >> 12;
        uint32_t rdx = (ocw >> 4) & 15u;
        uint32_t rdy = ocw & 15u;
        uint32_t rdz = (ocw >> 8) & 15u;
        uint32_t adx = (aocw >> 4) & 15u;
        uint32_t ady = aocw & 15u;
        uint32_t adz = (aocw >> 8) & 15u;
        int need_mux = ((ocw & 0xfffu) && (rgb_flags & 4u)) || ((aocw & 0xfffu) && (alpha_flags & 4u));

        sb_appendf(&sb, "    {\n        r1 = c0[%u]; r2 = c1[%u];\n", st, st);
        if (need_mux) {
            if (mux_mode)
                sb_appendf(&sb, "        bool _mux = (r12.a >= 0.5);\n");
            else
                sb_appendf(&sb, "        bool _mux = (((int)(r12.a * 255.0) & 1) != 0);\n");
        }
        if (aocw & 0xfffu) {
            sb_appendf(&sb, "        float _aab = ");
            emit_ps_read_alpha(&sb, aicw >> 24);
            sb_appendf(&sb, " * ");
            emit_ps_read_alpha(&sb, aicw >> 16);
            sb_appendf(&sb, ";\n        float _acd = ");
            emit_ps_read_alpha(&sb, aicw >> 8);
            sb_appendf(&sb, " * ");
            emit_ps_read_alpha(&sb, aicw);
            sb_appendf(&sb, ";\n        float _asum = %s;\n        float3 _aout = ",
                       (alpha_flags & 4u) ? "(_mux ? _acd : _aab)" : "(_aab + _acd)");
            emit_ps_map_output(&sb, "float3(_aab, _acd, _asum)", alpha_flags);
            sb_appendf(&sb, ";\n");
        }
        if (ocw & 0xfffu) {
            sb_appendf(&sb, "        float3 _a = ");
            emit_ps_read_rgb(&sb, icw >> 24);
            sb_appendf(&sb, ";\n        float3 _b = ");
            emit_ps_read_rgb(&sb, icw >> 16);
            sb_appendf(&sb, ";\n        float3 _c = ");
            emit_ps_read_rgb(&sb, icw >> 8);
            sb_appendf(&sb, ";\n        float3 _d = ");
            emit_ps_read_rgb(&sb, icw);
            sb_appendf(&sb, ";\n        precise float3 _ab = _a * _b;\n        precise float3 _cd = _c * _d;\n");
            if (rgb_flags & 2u)
                sb_appendf(&sb, "        _ab = _ab.r + _ab.g + _ab.b;\n");
            if (rgb_flags & 1u)
                sb_appendf(&sb, "        _cd = _cd.r + _cd.g + _cd.b;\n");
            if (rdz)
                sb_appendf(&sb, "        float3 _sum = %s;\n",
                           (rgb_flags & 4u) ? "(_mux ? _cd : _ab)" : "(_ab + _cd)");
            if (rdx) {
                sb_appendf(&sb, "        float3 _mab = ");
                emit_ps_map_output(&sb, "_ab", rgb_flags);
                sb_appendf(&sb, ";\n        r%u.rgb = _mab;\n", rdx);
                if (rgb_flags & 0x80u)
                    sb_appendf(&sb, "        r%u.a = _mab.b;\n", rdx);
            }
            if (rdy) {
                sb_appendf(&sb, "        float3 _mcd = ");
                emit_ps_map_output(&sb, "_cd", rgb_flags);
                sb_appendf(&sb, ";\n        r%u.rgb = _mcd;\n", rdy);
                if (rgb_flags & 0x40u)
                    sb_appendf(&sb, "        r%u.a = _mcd.b;\n", rdy);
            }
            if (rdz) {
                sb_appendf(&sb, "        r%u.rgb = ", rdz);
                emit_ps_map_output(&sb, "_sum", rgb_flags);
                sb_appendf(&sb, ";\n");
            }
        }
        if (aocw & 0xfffu) {
            if (adx) sb_appendf(&sb, "        r%u.a = _aout.x;\n", adx);
            if (ady) sb_appendf(&sb, "        r%u.a = _aout.y;\n", ady);
            if (adz) sb_appendf(&sb, "        r%u.a = _aout.z;\n", adz);
        }
        sb_appendf(&sb, "    }\n");
    }

    if (k->config[2] || k->config[3]) {
        uint32_t f0 = k->config[2];
        uint32_t f1 = k->config[3];
        sb_appendf(&sb,
            "    r1 = final_c0; r2 = final_c1;\n"
            "    float3 _va = %s;\n"
            "    float3 _ra = %s;\n"
            "    float3 _fsum = _va + _ra;\n"
            "    r14 = float4(%s, 0.0);\n"
            "    r15 = float4(",
            (f1 & 0x40u) ? "(1.0 - r5.rgb)" : "r5.rgb",
            (f1 & 0x20u) ? "(1.0 - r12.rgb)" : "r12.rgb",
            (f1 & 0x80u) ? "saturate(_fsum)" : "_fsum");
        emit_ps_read_rgb(&sb, f1 >> 24);
        sb_appendf(&sb, " * ");
        emit_ps_read_rgb(&sb, f1 >> 16);
        sb_appendf(&sb, ", 0.0);\n    float3 _fa = ");
        emit_ps_read_rgb(&sb, f0 >> 24);
        sb_appendf(&sb, ";\n    float3 _fb = ");
        emit_ps_read_rgb(&sb, f0 >> 16);
        sb_appendf(&sb, ";\n    float3 _fc = ");
        emit_ps_read_rgb(&sb, f0 >> 8);
        sb_appendf(&sb, ";\n    float3 _fd = ");
        emit_ps_read_rgb(&sb, f0);
        sb_appendf(&sb, ";\n    precise float4 _res = float4((_fd + _fc * (1.0 - _fa)) + _fb * _fa, ");
        emit_ps_read_alpha(&sb, f1 >> 8);
        sb_appendf(&sb, ");\n");
    } else {
        sb_appendf(&sb, "    precise float4 _res = r12;\n");
    }

    sb_appendf(&sb, "    float4 _bytes = floor(saturate(_res) * 255.0 + 0.5);\n");
    switch (k->alpha_func) {
    case 0x200u: sb_appendf(&sb, "    discard;\n"); break;
    case 0x201u: sb_appendf(&sb, "    if (!((uint)_bytes.a < alpha_state.x)) discard;\n"); break;
    case 0x202u: sb_appendf(&sb, "    if (!((uint)_bytes.a == alpha_state.x)) discard;\n"); break;
    case 0x203u: sb_appendf(&sb, "    if (!((uint)_bytes.a <= alpha_state.x)) discard;\n"); break;
    case 0x204u: sb_appendf(&sb, "    if (!((uint)_bytes.a > alpha_state.x)) discard;\n"); break;
    case 0x205u: sb_appendf(&sb, "    if (!((uint)_bytes.a != alpha_state.x)) discard;\n"); break;
    case 0x206u: sb_appendf(&sb, "    if (!((uint)_bytes.a >= alpha_state.x)) discard;\n"); break;
    default: break;
    }
    sb_appendf(&sb, "    return _bytes / 255.0;\n}\n");

    ID3D11PixelShader *ps = NULL;
    if (!sb.oom) {
        ID3DBlob *code = NULL, *errors = NULL;
        HRESULT hr = D3DCompile(sb.data, sb.len, "ps_jit.hlsl", NULL, NULL,
            "ps_jit_main", "ps_5_0",
            D3DCOMPILE_IEEE_STRICTNESS | D3DCOMPILE_OPTIMIZATION_LEVEL3,
            0, &code, &errors);
        if (errors) {
            if (FAILED(hr))
                fprintf(stderr, "[PS-JIT] compile error: %s\n",
                        (const char *)ID3D10Blob_GetBufferPointer(errors));
            ID3D10Blob_Release(errors);
        }
        if (SUCCEEDED(hr) && code) {
            const void *bytes = ID3D10Blob_GetBufferPointer(code);
            size_t bsize = ID3D10Blob_GetBufferSize(code);
            hr = ID3D11Device_CreatePixelShader(device, bytes, bsize, NULL, &ps);
            if (FAILED(hr)) {
                fprintf(stderr, "[PS-JIT] CreatePixelShader failed (0x%08lX)\n", (unsigned long)hr);
                ps = NULL;
            } else if (bsize <= 4u * 1024u * 1024u) {
                shader_cache_save_ps(hash, k, (uint32_t)sizeof(*k), bytes, (uint32_t)bsize);
            }
            ID3D10Blob_Release(code);
        }
    }
    sb_free(&sb);
    return ps;
}

ID3D11PixelShader *gpu_jit_get_ps(ID3D11Device *device,
                                  const CombinerConstants *combiner,
                                  uint32_t alpha_test_enable,
                                  uint32_t alpha_func)
{
    if (!device || !combiner || !env_enabled_default_on("RECOMP_PS_JIT", &s_ps_jit_enabled))
        return NULL;

    shader_cache_ensure_loaded(device);

    PsJitKey key;
    memset(&key, 0, sizeof key);
    uint32_t num_stages = combiner->config[0] & 255u;
    if (num_stages > 8u) num_stages = 8u;
    for (uint32_t st = 0; st < num_stages; st++) {
        uint32_t ocw = combiner->color_ocw[st];
        uint32_t aocw = combiner->alpha_ocw[st];
        if (ocw & 0xfffu) {
            key.color_icw[st] = combiner->color_icw[st];
            key.color_ocw[st] = ocw;
        }
        if (aocw & 0xfffu) {
            key.alpha_icw[st] = combiner->alpha_icw[st];
            key.alpha_ocw[st] = aocw;
        }
    }
    key.config[0] = num_stages | (combiner->config[0] & 0x100u);
    key.config[1] = combiner->config[1] & 0xFFFFFu;
    key.config[2] = combiner->config[2];
    key.config[3] = combiner->config[3];
    if (alpha_test_enable && alpha_func >= 0x200u && alpha_func <= 0x206u)
        key.alpha_func = alpha_func;

    uint64_t h = hash_u32_slice(14695981039346656037ULL, (const uint32_t *)&key, sizeof(key) / 4);
    unsigned slot = (unsigned)(h & (PS_CACHE_BUCKETS - 1));
    for (unsigned probe = 0; probe < PS_CACHE_BUCKETS; probe++) {
        PsCacheEntry *e = &s_ps_cache[(slot + probe) & (PS_CACHE_BUCKETS - 1)];
        if (!e->used) {
            if (s_ps_count >= PS_CACHE_MAX)
                return NULL;
            s_ps_misses++;
            ID3D11PixelShader *ps = compile_ps_jit(device, &key, h);
            if (!ps)
                s_ps_fails++;
            e->used = 1;
            e->hash = h;
            e->key = key;
            e->shader = ps;
            s_ps_count++;
            return ps;
        }
        if (e->hash == h && memcmp(&e->key, &key, sizeof key) == 0) {
            s_ps_hits++;
            return e->shader;
        }
    }
    return NULL;
}

/* ============================================================================
 * 3. Persistent On-Disk DXBC Shader Bytecode Cache
 * ============================================================================ */

enum {
    SHADER_CACHE_MAGIC   = 0x434A4642u, /* "BFJC" */
    SHADER_CACHE_VERSION = 1u,
    SHADER_KIND_VSH      = 1u,
    SHADER_KIND_PS       = 2u
};

typedef struct {
    uint32_t magic;
    uint32_t version;
} ShaderCacheHeader;

typedef struct {
    uint32_t kind;
    uint32_t key_bytes;
    uint32_t dxbc_bytes;
    uint32_t reserved;
    uint64_t hash;
} ShaderCacheRec;

static int s_cache_inited = 0;
static FILE *s_cache_file = NULL;

static int shader_cache_resolve_path(char *out, size_t out_sz)
{
    const char *env = getenv("RECOMP_SHADER_CACHE");
    if (env && strcmp(env, "0") == 0)
        return 0;
    if (env && *env && strcmp(env, "1") != 0) {
        _snprintf_s(out, out_sz, _TRUNCATE, "%s", env);
        return 1;
    }
    const char *save_dir = getenv("RECOMP_SAVE_DIR");
    if (save_dir && *save_dir) {
        _snprintf_s(out, out_sz, _TRUNCATE, "%s\\bf2_shader_cache.bin", save_dir);
        return 1;
    }
    _snprintf_s(out, out_sz, _TRUNCATE, "bf2_shader_cache.bin");
    return 1;
}

static void shader_cache_insert_vsh_loaded(ID3D11Device *device, uint64_t hash,
                                           uint32_t count, uint32_t mask16,
                                           const uint32_t *ins,
                                           const void *dxbc, uint32_t dxbc_bytes,
                                           unsigned *loaded_count)
{
    if (s_vsh_count >= VSH_CACHE_MAX)
        return;
    size_t words = (size_t)count * VSH_INST_STRIDE;
    unsigned slot = (unsigned)(hash & (VSH_CACHE_BUCKETS - 1));
    for (unsigned probe = 0; probe < VSH_CACHE_BUCKETS; probe++) {
        VshCacheEntry *e = &s_vsh_cache[(slot + probe) & (VSH_CACHE_BUCKETS - 1)];
        if (!e->used) {
            ID3D11VertexShader *vs = NULL;
            if (FAILED(ID3D11Device_CreateVertexShader(device, dxbc, dxbc_bytes, NULL, &vs)) || !vs)
                return;
            uint32_t *copy = NULL;
            if (words) {
                copy = (uint32_t *)malloc(words * sizeof(uint32_t));
                if (!copy) {
                    ID3D11VertexShader_Release(vs);
                    return;
                }
                memcpy(copy, ins, words * sizeof(uint32_t));
            }
            e->used = 1;
            e->hash = hash;
            e->ins_count = count;
            e->stream_mask = mask16;
            e->ins_copy = copy;
            e->shader = vs;
            s_vsh_count++;
            (*loaded_count)++;
            return;
        }
        if (e->hash == hash && e->ins_count == count && e->stream_mask == mask16 &&
            (words == 0 || memcmp(e->ins_copy, ins, words * sizeof(uint32_t)) == 0))
            return;
    }
}

static void shader_cache_insert_ps_loaded(ID3D11Device *device, uint64_t hash,
                                          const PsJitKey *key,
                                          const void *dxbc, uint32_t dxbc_bytes,
                                          unsigned *loaded_count)
{
    if (s_ps_count >= PS_CACHE_MAX)
        return;
    unsigned slot = (unsigned)(hash & (PS_CACHE_BUCKETS - 1));
    for (unsigned probe = 0; probe < PS_CACHE_BUCKETS; probe++) {
        PsCacheEntry *e = &s_ps_cache[(slot + probe) & (PS_CACHE_BUCKETS - 1)];
        if (!e->used) {
            ID3D11PixelShader *ps = NULL;
            if (FAILED(ID3D11Device_CreatePixelShader(device, dxbc, dxbc_bytes, NULL, &ps)) || !ps)
                return;
            e->used = 1;
            e->hash = hash;
            e->key = *key;
            e->shader = ps;
            s_ps_count++;
            (*loaded_count)++;
            return;
        }
        if (e->hash == hash && memcmp(&e->key, key, sizeof(*key)) == 0)
            return;
    }
}

static void shader_cache_ensure_loaded(ID3D11Device *device)
{
    if (s_cache_inited)
        return;
    s_cache_inited = 1;

    char path[MAX_PATH];
    if (!shader_cache_resolve_path(path, sizeof path))
        return;

    LARGE_INTEGER freq, t0, t1;
    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&t0);

    int valid_existing = 0;
    unsigned loaded_vsh = 0, loaded_ps = 0;
    FILE *rf = NULL;
    if (fopen_s(&rf, path, "rb") == 0 && rf) {
        ShaderCacheHeader hdr;
        if (fread(&hdr, sizeof hdr, 1, rf) == 1 &&
            hdr.magic == SHADER_CACHE_MAGIC && hdr.version == SHADER_CACHE_VERSION) {
            valid_existing = 1;
            ShaderCacheRec rec;
            while (fread(&rec, sizeof rec, 1, rf) == 1) {
                if (rec.dxbc_bytes == 0 || rec.dxbc_bytes > 4u * 1024u * 1024u ||
                    rec.key_bytes > 1024u * 1024u)
                    break;
                uint8_t *kbuf = rec.key_bytes ? (uint8_t *)malloc(rec.key_bytes) : NULL;
                uint8_t *dbuf = (uint8_t *)malloc(rec.dxbc_bytes);
                if ((rec.key_bytes && !kbuf) || !dbuf) {
                    free(kbuf);
                    free(dbuf);
                    break;
                }
                int ok = (!rec.key_bytes || fread(kbuf, rec.key_bytes, 1, rf) == 1) &&
                         (fread(dbuf, rec.dxbc_bytes, 1, rf) == 1);
                if (!ok) {
                    free(kbuf);
                    free(dbuf);
                    break;
                }
                if (rec.kind == SHADER_KIND_VSH && rec.key_bytes >= 8) {
                    uint32_t count = 0, mask16 = 0;
                    memcpy(&count, kbuf, 4);
                    memcpy(&mask16, kbuf + 4, 4);
                    size_t expect = 8u + (size_t)count * VSH_INST_STRIDE * sizeof(uint32_t);
                    if (count <= VSH_MAX_INS && rec.key_bytes == expect) {
                        shader_cache_insert_vsh_loaded(device, rec.hash, count, mask16,
                                                       (const uint32_t *)(kbuf + 8),
                                                       dbuf, rec.dxbc_bytes, &loaded_vsh);
                    }
                } else if (rec.kind == SHADER_KIND_PS && rec.key_bytes == sizeof(PsJitKey)) {
                    PsJitKey key;
                    memcpy(&key, kbuf, sizeof key);
                    shader_cache_insert_ps_loaded(device, rec.hash, &key,
                                                  dbuf, rec.dxbc_bytes, &loaded_ps);
                }
                free(kbuf);
                free(dbuf);
            }
        }
        fclose(rf);
    }

    if (valid_existing) {
        fopen_s(&s_cache_file, path, "ab");
    } else {
        if (fopen_s(&s_cache_file, path, "wb") == 0 && s_cache_file) {
            ShaderCacheHeader hdr = { SHADER_CACHE_MAGIC, SHADER_CACHE_VERSION };
            fwrite(&hdr, sizeof hdr, 1, s_cache_file);
            fflush(s_cache_file);
        }
    }

    QueryPerformanceCounter(&t1);
    double ms = freq.QuadPart ? (double)(t1.QuadPart - t0.QuadPart) * 1000.0 / (double)freq.QuadPart : 0.0;
    if (loaded_vsh || loaded_ps) {
        fprintf(stderr, "[GPU-JIT-CACHE] loaded %u VSH + %u PS from %s in %.1f ms\n",
                loaded_vsh, loaded_ps, path, ms);
    }
}

static void shader_cache_save_vsh(uint64_t hash, uint32_t ins_count, uint32_t stream_mask,
                                  const uint32_t *ins, const void *dxbc, uint32_t dxbc_bytes)
{
    if (!s_cache_file || !dxbc || !dxbc_bytes)
        return;
    uint32_t ins_bytes = ins_count * VSH_INST_STRIDE * (uint32_t)sizeof(uint32_t);
    ShaderCacheRec rec = { SHADER_KIND_VSH, 8u + ins_bytes, dxbc_bytes, 0, hash };
    uint32_t khdr[2] = { ins_count, stream_mask & 0xFFFFu };
    fwrite(&rec, sizeof rec, 1, s_cache_file);
    fwrite(khdr, sizeof khdr, 1, s_cache_file);
    if (ins_bytes)
        fwrite(ins, ins_bytes, 1, s_cache_file);
    fwrite(dxbc, dxbc_bytes, 1, s_cache_file);
    fflush(s_cache_file);
}

static void shader_cache_save_ps(uint64_t hash, const void *key, uint32_t key_bytes,
                                 const void *dxbc, uint32_t dxbc_bytes)
{
    if (!s_cache_file || !key || !dxbc || !dxbc_bytes)
        return;
    ShaderCacheRec rec = { SHADER_KIND_PS, key_bytes, dxbc_bytes, 0, hash };
    fwrite(&rec, sizeof rec, 1, s_cache_file);
    fwrite(key, key_bytes, 1, s_cache_file);
    fwrite(dxbc, dxbc_bytes, 1, s_cache_file);
    fflush(s_cache_file);
}

void gpu_jit_report_stats(void)
{
    static uint64_t last_v_miss = 0, last_p_miss = 0;
    if (s_vsh_misses != last_v_miss || s_ps_misses != last_p_miss) {
        fprintf(stderr, "[GPU-JIT] vsh=%u (hits=%llu misses=%llu fails=%llu) ps=%u (hits=%llu misses=%llu fails=%llu)\n",
                s_vsh_count, (unsigned long long)s_vsh_hits, (unsigned long long)s_vsh_misses, (unsigned long long)s_vsh_fails,
                s_ps_count, (unsigned long long)s_ps_hits, (unsigned long long)s_ps_misses, (unsigned long long)s_ps_fails);
        last_v_miss = s_vsh_misses;
        last_p_miss = s_ps_misses;
    }
}

void gpu_jit_shutdown(void)
{
    if (s_cache_file) {
        fclose(s_cache_file);
        s_cache_file = NULL;
    }
    s_cache_inited = 0;
    for (unsigned i = 0; i < VSH_CACHE_BUCKETS; i++) {
        if (s_vsh_cache[i].used) {
            if (s_vsh_cache[i].shader)
                ID3D11VertexShader_Release(s_vsh_cache[i].shader);
            free(s_vsh_cache[i].ins_copy);
            memset(&s_vsh_cache[i], 0, sizeof s_vsh_cache[i]);
        }
    }
    s_vsh_count = 0;
    memset(s_vsh_rev_cache, 0, sizeof s_vsh_rev_cache);
    for (unsigned i = 0; i < PS_CACHE_BUCKETS; i++) {
        if (s_ps_cache[i].used) {
            if (s_ps_cache[i].shader)
                ID3D11PixelShader_Release(s_ps_cache[i].shader);
            memset(&s_ps_cache[i], 0, sizeof s_ps_cache[i]);
        }
    }
    s_ps_count = 0;
}
