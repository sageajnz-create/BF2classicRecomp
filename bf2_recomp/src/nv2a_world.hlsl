Texture2D tex0 : register(t0);
Texture2D tex1 : register(t1);
Texture2D tex2 : register(t2);
Texture2D tex3 : register(t3);
Texture2DArray cube0 : register(t4);
Texture2DArray cube1 : register(t5);
Texture2DArray cube2 : register(t6);
Texture2DArray cube3 : register(t7);
SamplerState samp0 : register(s0);
SamplerState samp1 : register(s1);
SamplerState samp2 : register(s2);
SamplerState samp3 : register(s3);

cbuffer DrawInfo : register(b1) {
    float4 texture_scale[4]; // reciprocal dimensions for linear textures
    float4 fog_color;
    uint4 alpha_state; // reference, compare function, enabled
    float2 half_dim; // half dimensions (e.g. 320, 240 or 32, 32)
    uint visibility_slot; // RECOMP_VISIBILITY_UAV: counter for this draw
    float pad;            // keeps the HLSL constant block at 112 bytes
};

/* Query-free visibility counting (RECOMP_VISIBILITY_UAV): each pixel that
 * reaches this shader increments one slot in a typed UAV. The buffer is read
 * back and cleared once per flush, replacing hundreds of expensive D3D11
 * occlusion queries. An early-Z test drops occluded pixels before the shader
 * runs, matching what an occlusion query measures. */
#ifdef VISIBILITY_UAV
RWBuffer<uint> visibility_counters : register(u1);
#endif

struct InputVertex {
    float4 position : POSITION;
    float4 diffuse : COLOR0;
    float4 specular : COLOR1;
    float4 tc0 : TEXCOORD0;
    float4 tc1 : TEXCOORD1;
    float4 tc2 : TEXCOORD2;
    float4 tc3 : TEXCOORD3;
    float fog : FOG;
};

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

RasterVertex vertex_main(InputVertex v)
{
    RasterVertex outv;
    float2 hd = half_dim.x > 0.0 ? half_dim : float2(320.0, 240.0);
    outv.position = float4(v.position.x / hd.x - 1.0, 1.0 - v.position.y / hd.y,
                           v.position.z / 33554432.0, 1.0);
    outv.diffuse = v.diffuse;
    outv.specular = v.specular;
    outv.tc0 = v.tc0;
    outv.tc1 = v.tc1;
    outv.tc2 = v.tc2;
    outv.tc3 = v.tc3;
    outv.fog = v.fog;
    return outv;
}

/* CUBEMAP (SHADER_STAGE_PROGRAM mode 3): the same face selection and (sc,tc)
 * as rc_stage_fetch in the CPU evaluator, so a direction lands on the same
 * texel. The coordinate arrives premultiplied by 1/w like the other stages;
 * cube lookup is scale-invariant, so the ratios are unchanged. Faces are
 * uploaded in +X,-X,+Y,-Y,+Z,-Z order, matching the face indices below. */
float4 cube_sample(uint stage, float3 dir)
{
    float x = dir.x, y = dir.y, z = dir.z;
    float ax = abs(x), ay = abs(y), az = abs(z);
    float ma, sc, tc;
    uint face;
    if (ax >= ay && ax >= az) {
        face = x > 0 ? 0u : 1u; ma = ax; sc = x > 0 ? -z : z; tc = -y;
    } else if (ay >= az) {
        face = y > 0 ? 2u : 3u; ma = ay; sc = x; tc = y > 0 ? z : -z;
    } else {
        face = z > 0 ? 4u : 5u; ma = az; sc = z > 0 ? x : -x; tc = -y;
    }
    if (ma == 0.0)
        ma = 1.0;
    float2 uv = float2((sc / ma + 1.0) * 0.5, (tc / ma + 1.0) * 0.5);
    switch (stage) {
        case 0: return cube0.SampleLevel(samp0, float3(uv, face), 0.0);
        case 1: return cube1.SampleLevel(samp1, float3(uv, face), 0.0);
        case 2: return cube2.SampleLevel(samp2, float3(uv, face), 0.0);
        default: return cube3.SampleLevel(samp3, float3(uv, face), 0.0);
    }
}

float4 sample_stage(uint stage, float4 tc)
{
    /* SHADER_STAGE_PROGRAM, five bits per stage: 0 none, 1 PROJECT2D,
     * 2 PROJECT3D, 3 CUBEMAP, 4 passthru; anything 6 or above is a bump/dot
     * mode the CPU evaluator reads as zero. 5 (clip plane) never reaches
     * here: the executor keeps those batches on the CPU. Every branch matches
     * rc_stage_fetch, so a batch moving to this path keeps its pixels. */
    uint mode = (config.y >> (5 * stage)) & 31u;
    if (!mode)
        return float4(0.0, 0.0, 0.0, 1.0);
    if (mode == 3) {
        if (texture_scale[stage].z == 0.0)
            return 1.0;
        return cube_sample(stage, tc.xyz);
    }
    if (mode == 4)
        return clamp(tc, 0.0, 1.0);
    if (mode >= 6)
        return float4(0.0, 0.0, 0.0, 0.0);
    float4 scale = texture_scale[stage];
    if (scale.z == 0.0)
        return 1.0;
    float2 uv = tc.xy * scale.xy / (tc.w != 0.0 ? tc.w : 1.0);
    switch (stage) {
        case 0: return tex0.SampleLevel(samp0, uv, 0.0);
        case 1: return tex1.SampleLevel(samp1, uv, 0.0);
        case 2: return tex2.SampleLevel(samp2, uv, 0.0);
        default: return tex3.SampleLevel(samp3, uv, 0.0);
    }
}

bool alpha_pass(uint value, uint reference, uint compare)
{
    switch (compare) {
        case 0x200: return false;
        case 0x201: return value < reference;
        case 0x202: return value == reference;
        case 0x203: return value <= reference;
        case 0x204: return value > reference;
        case 0x205: return value != reference;
        case 0x206: return value >= reference;
        default: return true;
    }
}

float4 pixel_main(RasterVertex v) : SV_TARGET
{
    PixelInput p;
    p.v0 = v.diffuse;
    p.v1 = v.specular;
    p.fog = float4(fog_color.rgb, v.fog);
    p.tex[0] = sample_stage(0, v.tc0);
    p.tex[1] = sample_stage(1, v.tc1);
    p.tex[2] = sample_stage(2, v.tc2);
    p.tex[3] = sample_stage(3, v.tc3);
    float4 bytes = floor(combine_pixel(p) * 255.0 + 0.5);
    if (alpha_state.z && !alpha_pass((uint)bytes.a, alpha_state.x, alpha_state.y))
        discard;
    return bytes / 255.0;
}

#ifdef VISIBILITY_UAV
[earlydepthstencil]
void pixel_visibility(RasterVertex v)
{
    InterlockedAdd(visibility_counters[visibility_slot], 1);
}
#endif

cbuffer ClearColor : register(b2) { float4 clear_value; }

float4 vertex_clear(uint id : SV_VertexID) : SV_POSITION
{
    float2 corner = float2((id << 1) & 2, id & 2);
    return float4(corner * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
}

float4 pixel_clear() : SV_TARGET
{
    return clear_value;
}
