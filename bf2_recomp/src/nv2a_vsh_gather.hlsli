/* Uploaded guest vertex ranges. Offsets are rebased into this buffer, never
 * guest pointers. The host must validate and snapshot the ranges per draw.
 * Descriptor: byte offset, byte stride, NV2A type, component count. */
StructuredBuffer<uint> g_vertex_words : register(t3);
StructuredBuffer<uint4> g_attributes : register(t4);
StructuredBuffer<uint> g_indices : register(t5);
StructuredBuffer<float4> g_attribute_defaults : register(t6);
cbuffer GatherParams : register(b1) {
    uint g_vertex_bytes;
    uint g_stream_mask;
    uint g_index_count;
    uint g_words_base;
};

cbuffer TransformParams : register(b2) {
    float2 g_aa_scale;
    float2 g_fog_param;
    uint g_fog_mode;
    float2 g_half_dim;
    uint g_transform_reserved; /* low 16: attrs_base/16, high 16: defaults_base/16 */
};

uint vertex_byte(uint address)
{
    return (g_vertex_words[g_words_base + (address >> 2)] >> ((address & 3) * 8)) & 255;
}

uint vertex_word(uint address)
{
    uint w = g_words_base + (address >> 2);
    uint lo = g_vertex_words[w];
    uint shift = (address & 3) * 8;
    if (!shift) return lo;
    return (lo >> shift) | (g_vertex_words[w + 1] << (32 - shift));
}

float4 gather_attribute(uint slot, uint index)
{
    uint attr_base = (g_transform_reserved & 0xFFFFu) * 16u;
    uint def_base = (g_transform_reserved >> 16) * 16u;
    if (!(g_stream_mask & (1u << slot))) return g_attribute_defaults[def_base + slot];
    if (index >= 0x01000000u) return float4(0, 0, 0, 1);
    uint4 d = g_attributes[attr_base + slot];
    float4 result = float4(0, 0, 0, 1);
    uint n = min(d.w, 4u);
    if (!n || !d.y) return result;
    uint bytes = (d.z == 0 || d.z == 6) ? 4 :
                 (d.z == 1 || d.z == 5) ? 2 * n : d.z == 4 ? n : 4 * n;
    if (d.x > g_vertex_bytes || bytes > g_vertex_bytes - d.x) return result;
    uint max_offset = g_vertex_bytes - d.x - bytes;
    uint offset = index * d.y;
    if (offset > max_offset) return result;
    uint address = d.x + offset;
    if (d.z == 0) {
        uint v = vertex_word(address);
        return float4((v >> 16) & 255, (v >> 8) & 255, v & 255, v >> 24) / 255.0;
    }
    if (d.z == 6) {
        uint v = vertex_word(address);
        result.xyz = float3((int)(v << 21) >> 21, (int)(v << 10) >> 21,
                            (int)v >> 22) / float3(1023.0, 1023.0, 511.0);
        return result;
    }
    [unroll] for (uint k = 0; k < 4; k++) {
        if (k >= n) break;
        if (d.z == 2) result[k] = asfloat(vertex_word(address + k * 4));
        else if (d.z == 4) result[k] = vertex_byte(address + k) / 255.0;
        else if (d.z == 1 || d.z == 5) {
            uint a = address + k * 2;
            int v = (int)((vertex_byte(a) | (vertex_byte(a + 1) << 8)) << 16) >> 16;
            result[k] = d.z == 1 ? v / 32767.0 : (float)v;
        }
    }
    return result;
}

VshInp gather_all_attributes(uint index)
{
    VshInp inp;
    inp.v0  = gather_attribute(0, index);
    inp.v1  = gather_attribute(1, index);
    inp.v2  = gather_attribute(2, index);
    inp.v3  = gather_attribute(3, index);
    inp.v4  = gather_attribute(4, index);
    inp.v5  = gather_attribute(5, index);
    inp.v6  = gather_attribute(6, index);
    inp.v7  = gather_attribute(7, index);
    inp.v8  = gather_attribute(8, index);
    inp.v9  = gather_attribute(9, index);
    inp.v10 = gather_attribute(10, index);
    inp.v11 = gather_attribute(11, index);
    inp.v12 = gather_attribute(12, index);
    inp.v13 = gather_attribute(13, index);
    inp.v14 = gather_attribute(14, index);
    inp.v15 = gather_attribute(15, index);
    return inp;
}

/* Verification entry writes all attributes, including template values. */
[numthreads(64, 1, 1)]
void cs_gather(uint tid : SV_DispatchThreadID)
{
    if (tid >= g_index_count) return;
    uint index = g_indices[tid];
    [unroll] for (uint a = 0; a < 16; a++)
        g_out[tid * 16 + a] = gather_attribute(a, index);
}

/* Shared gather/interpret path, still offline until clip and viewport gates
 * pass. Programs that write constants must remain on the CPU. */
[numthreads(64, 1, 1)]
void cs_gather_transform(uint tid : SV_DispatchThreadID)
{
    if (tid >= g_index_count) return;
    VshInp inp = gather_all_attributes(g_indices[tid]);
    VshResult o = interpret(tid, inp);
    uint b = tid * 8;
    g_out[b] = o.pos; g_out[b+1] = o.d0; g_out[b+2] = o.d1; g_out[b+3] = o.fog;
    g_out[b+4] = o.tex0; g_out[b+5] = o.tex1; g_out[b+6] = o.tex2; g_out[b+7] = o.tex3;
}

/* Transformed vertex stage matching nv2a_world.hlsl RasterVertex */
struct RasterVertex {
    float4 position : SV_POSITION;
    noperspective float4 diffuse : COLOR0;
    noperspective float4 specular : COLOR1;
    noperspective float4 tc0 : TEXCOORD0;
    noperspective float4 tc1 : TEXCOORD1;
    noperspective float4 tc2 : TEXCOORD2;
    noperspective float4 tc3 : TEXCOORD3;
    noperspective float fog : TEXCOORD4;
};

float eval_fog(float d)
{
    if (!g_fog_mode)
        return 1.0;
    float f;
    float px = g_fog_param.x, py = g_fog_param.y;
    if (g_fog_mode == 0x800u || g_fog_mode == 0x802u)
        f = px + exp2(d * py * 16.0) - 1.5;
    else if (g_fog_mode == 0x801u || g_fog_mode == 0x803u)
        f = px + exp2(-d * d * py * py * 32.0) - 1.5;
    else
        f = px + d * py - 1.0;
    if (g_fog_mode == 0x802u || g_fog_mode == 0x803u || g_fog_mode == 0x804u)
        f = abs(f);
    if (isnan(f))
        f = 1.0;
    return saturate(f);
}

RasterVertex compute_vertex_by_index(uint index)
{
    VshInp inp = gather_all_attributes(index);

    VshResult o = interpret(0u, inp);

    /* The title's vertex program writes oPos in screen pixels (it has already
     * divided by the clip-space w and applied the viewport), with the clip w
     * left in oPos.w. Multiplying x/y/z by w and carrying w into SV_POSITION
     * reproduces the clip space: D3D's perspective divide maps back to the same
     * pixels while its frustum test gets the near-plane clipping the CPU path
     * performs explicitly in raster_xf_clipped. A w of positive zero means the
     * program never divided by w; as on the CPU transform path, treat it as 1. */
    float w = o.pos.w;
    if (w == 0.0f && asuint(w) == 0u)
        w = 1.0f;

    float2 pos_xy = o.pos.xy * g_aa_scale;
    float pos_z = o.pos.z;

    float2 hd = g_half_dim.x > 0.0 ? g_half_dim : float2(320.0, 240.0);
    RasterVertex outv;
    outv.position = float4((pos_xy.x / hd.x - 1.0) * w,
                           (1.0 - pos_xy.y / hd.y) * w,
                           (pos_z / 33554432.0) * w,
                           w);

    outv.diffuse = o.d0;
    outv.specular = o.d1;

    float inv_w = 1.0f / w;
    outv.tc0 = o.tex0 * inv_w;
    outv.tc1 = o.tex1 * inv_w;
    outv.tc2 = o.tex2 * inv_w;
    outv.tc3 = o.tex3 * inv_w;
    outv.fog = eval_fog(o.fog.x);

    return outv;
}

RasterVertex compute_vertex(uint vid)
{
    return compute_vertex_by_index(g_indices[vid]);
}

RasterVertex vs_gather_transform(uint vid : SV_VertexID)
{
    return compute_vertex(vid);
}

RasterVertex vs_gather_transform_indexed(uint index : SV_VertexID)
{
    return compute_vertex_by_index(index);
}

[numthreads(64, 1, 1)]
void cs_gather_vertex(uint tid : SV_DispatchThreadID)
{
    if (tid >= g_index_count) return;
    RasterVertex v = compute_vertex(tid);
    uint b = tid * 8;
    g_out[b + 0] = v.position;
    g_out[b + 1] = v.diffuse;
    g_out[b + 2] = v.specular;
    g_out[b + 3] = v.tc0;
    g_out[b + 4] = v.tc1;
    g_out[b + 5] = v.tc2;
    g_out[b + 6] = v.tc3;
    g_out[b + 7] = float4(v.fog, 0, 0, 0);
}
