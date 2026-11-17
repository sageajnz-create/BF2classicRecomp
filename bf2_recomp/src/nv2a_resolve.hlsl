struct Vertex {
    float4 pos;
    float4 d0;
    float4 d1;
    float4 stc[4];
};

StructuredBuffer<Vertex> vertices : register(t0);
StructuredBuffer<uint> t0 : register(t1);
StructuredBuffer<uint> t1 : register(t2);
StructuredBuffer<uint> t2 : register(t3);
StructuredBuffer<uint> t3 : register(t4);
StructuredBuffer<uint> previous : register(t5);
RWStructuredBuffer<uint> resolved : register(u0);

cbuffer Resolve : register(b1) {
    uint4 surface; // width, height, blend mode
    uint4 region; // x, y, width, height
    uint4 texture_info[4]; // address U, address V, filter and border flags, border ARGB
    float4 inverse[2]; // three inverse W values, then inverse triangle area
    float4 vertex_fog[2];
    float4 fog_color[2];
    float4 unorm8[64];
};

float unpack_byte(uint n)
{
    n &= 255;
    return unorm8[n >> 2][n & 3];
}

float4 unpack_argb(uint c)
{
    return float4(unpack_byte(c >> 16), unpack_byte(c >> 8),
                  unpack_byte(c), unpack_byte(c >> 24));
}

uint pack_argb(float4 c)
{
    uint4 b = (uint4)(saturate(c) * 255.0 + 0.5);
    return (b.a << 24) | (b.r << 16) | (b.g << 8) | b.b;
}

int address(int x, int size, uint mode)
{
    if (x >= 0 && x < size)
        return x;
    if (mode == 1 || mode == 2) {
        uint period = (uint)(mode == 1 ? size : 2 * size);
        uint wrapped = x >= 0 ? (uint)x % period
                              : period - 1 - (uint)(-(x + 1)) % period;
        return (int)(wrapped < (uint)size ? wrapped : period - 1 - wrapped);
    }
    return clamp(x, 0, size - 1);
}

float4 fetch_texel(uint stage, int2 xy)
{
    uint4 t = texture_info[stage];
    if (((t.z & 2) != 0) &&
        ((t.x == 4 && (uint)xy.x >= surface.x) ||
         (t.y == 4 && (uint)xy.y >= surface.y)))
        return unpack_argb(t.w);
    uint x = (uint)address(xy.x, (int)surface.x, t.x);
    uint y = (uint)address(xy.y, (int)surface.y, t.y);
    uint i = y * surface.x + x;
    switch (stage) {
        case 0: return unpack_argb(t0[i]);
        case 1: return unpack_argb(t1[i]);
        case 2: return unpack_argb(t2[i]);
        default: return unpack_argb(t3[i]);
    }
}

float4 projected(uint stage, float4 tc)
{
    float2 uv = tc.xy / (tc.w != 0.0 ? tc.w : 1.0);
    if (!(texture_info[stage].z & 1))
        return fetch_texel(stage, (int2)floor(uv));

    float2 texel = uv - 0.5;
    float2 base = floor(texel);
    float2 fraction = texel - base;
    int2 xy = (int2)base;
    float4 a = fetch_texel(stage, xy);
    float4 b = fetch_texel(stage, xy + int2(1, 0));
    float4 c = fetch_texel(stage, xy + int2(0, 1));
    float4 d = fetch_texel(stage, xy + int2(1, 1));
    precise float4 value = (a * (1.0 - fraction.x) + b * fraction.x) * (1.0 - fraction.y)
                         + (c * (1.0 - fraction.x) + d * fraction.x) * fraction.y;
    return value;
}

float edge(float2 a, float2 b, float2 p)
{
    precise float v = (b.x - a.x) * (p.y - a.y) - (b.y - a.y) * (p.x - a.x);
    return v;
}

float4 interpolate(float4 a, float4 b, float4 c, float3 bary)
{
    precise float4 v = (bary.x * a + bary.y * b) + bary.z * c;
    return v;
}

[numthreads(64, 1, 1)]
void main(uint3 id : SV_DispatchThreadID)
{
    if (id.x >= region.z * region.w)
        return;
    uint2 xy = region.xy + uint2(id.x % region.z, id.x / region.z);
    uint index = xy.y * surface.x + xy.x;
    float2 pt = (float2)xy + 0.5;
    uint current = previous[index];
    [loop] for (uint tri = 0; tri < 2; tri++) {
        Vertex a = vertices[tri * 3];
        Vertex b = vertices[tri * 3 + 1];
        Vertex c = vertices[tri * 3 + 2];
        float3 sides = float3(edge(b.pos.xy, c.pos.xy, pt), edge(c.pos.xy, a.pos.xy, pt),
                              edge(a.pos.xy, b.pos.xy, pt));
        if (!(all(sides >= 0.0) || all(sides <= 0.0)))
            continue;
        float3 bary = sides * inverse[tri].w;
        precise float pw = (bary.x * inverse[tri].x + bary.y * inverse[tri].y)
                         + bary.z * inverse[tri].z;
        PixelInput p;
        p.v0 = interpolate(a.d0, b.d0, c.d0, bary);
        p.v1 = interpolate(a.d1, b.d1, c.d1, bary);
        precise float f = (bary.x * vertex_fog[tri].x + bary.y * vertex_fog[tri].y)
                        + bary.z * vertex_fog[tri].z;
        p.fog = float4(fog_color[tri].rgb, f);
        [unroll] for (uint stage = 0; stage < 4; stage++) {
            p.tex[stage] = float4(0.0, 0.0, 0.0, 1.0);
            if (config.y & (1u << (stage * 5)))
                p.tex[stage] = projected(stage, interpolate(a.stc[stage], b.stc[stage], c.stc[stage], bary) / pw);
        }
        uint argb = pack_argb(combine_pixel(p));
        if (surface.z) {
            float4 src = unpack_argb(argb);
            float4 dst = unpack_argb(current);
            precise float4 blended = surface.z == 1 ? src + dst
                                    : src * src.a + dst * (1.0 - src.a);
            argb = pack_argb(blended);
        }
        current = argb;
    }
    resolved[id.x] = current;
}
