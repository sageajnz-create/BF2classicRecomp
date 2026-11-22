Texture2D source_texture : register(t0);
SamplerState source_sampler : register(s0);

struct Vertex {
    float4 position : SV_Position;
    float2 uv : TEXCOORD0;
};

Vertex fullscreen_vs(uint i : SV_VertexID)
{
    Vertex output;
    float2 uv = float2((i << 1) & 2, i & 2);
    output.uv = uv;
    output.position = float4(uv * float2(2, -2) + float2(-1, 1), 0, 1);
    return output;
}

float4 blit_ps(Vertex input) : SV_Target
{
    return source_texture.Sample(source_sampler, input.uv);
}

float4 present_ps(Vertex input) : SV_Target
{
    return float4(source_texture.Sample(source_sampler, input.uv).rgb, 1);
}

float4 cas_ps(Vertex input) : SV_Target
{
    float width, height;
    source_texture.GetDimensions(width, height);
    float2 dx = float2(1 / width, 0);
    float2 dy = float2(0, 1 / height);
    float3 a = source_texture.Sample(source_sampler, input.uv - dy).rgb;
    float3 b = source_texture.Sample(source_sampler, input.uv - dx).rgb;
    float3 e = source_texture.Sample(source_sampler, input.uv).rgb;
    float3 d = source_texture.Sample(source_sampler, input.uv + dx).rgb;
    float3 c = source_texture.Sample(source_sampler, input.uv + dy).rgb;
    float3 mn = min(min(a, b), min(min(c, d), e));
    float3 mx = max(max(a, b), max(max(c, d), e));
    float3 amp = saturate(min(mn, 2.0 - mx) / max(mx, 0.001));
    float3 wgt = amp * -0.125;
    float3 color = (e + (a + b + c + d) * wgt) / (1.0 + 4.0 * wgt);
    return float4(saturate(color), 1.0);
}
