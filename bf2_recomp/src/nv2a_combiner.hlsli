struct PixelInput {
    float4 v0;
    float4 v1;
    float4 fog;
    float4 tex[4];
};

cbuffer Program : register(b0) {
    uint4 color_icw[2];
    uint4 alpha_icw[2];
    uint4 color_ocw[2];
    uint4 alpha_ocw[2];
    float4 c0[8];
    float4 c1[8];
    float4 final_c0;
    float4 final_c1;
    uint4 config; // stage control, stage program, final RGB word, final alpha word
};

float map_input(float x, uint input_byte)
{
    float p = max(x, 0.0);
    switch ((input_byte >> 5) & 7) {
        case 0: return p;
        case 1: return 1.0 - saturate(x);
        case 2: return 2.0 * p - 1.0;
        case 3: return 1.0 - 2.0 * p;
        case 4: return p - 0.5;
        case 5: return 0.5 - p;
        case 6: return x;
        default: return -x;
    }
}

float3 mapped_rgb(float4 v, uint input_byte)
{
    float3 c = (input_byte & 16) ? v.aaa : v.rgb;
    return float3(map_input(c.r, input_byte),
                  map_input(c.g, input_byte),
                  map_input(c.b, input_byte));
}

float mapped_alpha(float4 v, uint input_byte)
{
    return map_input((input_byte & 16) ? v.a : v.b, input_byte);
}

#define READ_RGB(input) mapped_rgb(r[(input) & 15], input)
#define READ_ALPHA(input) mapped_alpha(r[(input) & 15], input)

float3 map_output(float3 c, uint flag)
{
    switch (flag & 0x38) {
        case 0x08: c = c - 0.5; break;
        case 0x10: c = c * 2.0; break;
        case 0x18: c = (c - 0.5) * 2.0; break;
        case 0x20: c = c * 4.0; break;
        case 0x30: c = c * 0.5; break;
    }
    return clamp(c, -1.0, 1.0);
}

void run_stage(inout float4 r[16], uint icw, uint aicw,
               uint ocw, uint aocw, uint flags)
{
    uint rgb_flags = ocw >> 12;
    uint alpha_flags = aocw >> 12;
    uint3 rgb_dst = uint3((ocw >> 4) & 15, ocw & 15, (ocw >> 8) & 15);
    uint3 alpha_dst = uint3((aocw >> 4) & 15, aocw & 15, (aocw >> 8) & 15);
    bool mux_cd = (flags & 1) ? (r[12].a >= 0.5) : (((int)(r[12].a * 255.0) & 1) != 0);
    float3 aout = 0.0;

    if (aocw & 0xfff) {
        float ab = READ_ALPHA(aicw >> 24) * READ_ALPHA(aicw >> 16);
        float cd = READ_ALPHA(aicw >> 8) * READ_ALPHA(aicw);
        float sum = (alpha_flags & 4) ? (mux_cd ? cd : ab) : ab + cd;
        aout = map_output(float3(ab, cd, sum), alpha_flags);
    }
    if (ocw & 0xfff) {
        float3 a = READ_RGB(icw >> 24);
        float3 b = READ_RGB(icw >> 16);
        float3 c = READ_RGB(icw >> 8);
        float3 d = READ_RGB(icw);
        precise float3 ab = a * b;
        precise float3 cd = c * d;
        if (rgb_flags & 2)
            ab = ab.r + ab.g + ab.b;
        if (rgb_flags & 1)
            cd = cd.r + cd.g + cd.b;
        float3 sum = (rgb_flags & 4) ? (mux_cd ? cd : ab) : ab + cd;
        if (rgb_dst.x) {
            r[rgb_dst.x].rgb = map_output(ab, rgb_flags);
            if (rgb_flags & 0x80)
                r[rgb_dst.x].a = r[rgb_dst.x].b;
        }
        if (rgb_dst.y) {
            r[rgb_dst.y].rgb = map_output(cd, rgb_flags);
            if (rgb_flags & 0x40)
                r[rgb_dst.y].a = r[rgb_dst.y].b;
        }
        if (rgb_dst.z)
            r[rgb_dst.z].rgb = map_output(sum, rgb_flags);
    }
    if (alpha_dst.x) r[alpha_dst.x].a = aout.x;
    if (alpha_dst.y) r[alpha_dst.y].a = aout.y;
    if (alpha_dst.z) r[alpha_dst.z].a = aout.z;
}

float4 combine_pixel(PixelInput p)
{
    float4 r[16];
    [unroll] for (uint i = 0; i < 16; i++)
        r[i] = 0.0;
    r[3] = p.fog;
    r[4] = p.v0;
    r[5] = p.v1;
    [unroll] for (uint j = 0; j < 4; j++)
        r[8 + j] = p.tex[j];
    r[12].a = (config.y & 31) ? r[8].a : 1.0;
    for (uint stage = 0; stage < min(config.x & 255, 8); stage++) {
        uint group = stage >> 2;
        uint lane = stage & 3;
        uint ocw = color_ocw[group][lane];
        uint aocw = alpha_ocw[group][lane];
        if ((ocw | aocw) & 0xfff) {
            r[1] = c0[stage];
            r[2] = c1[stage];
            run_stage(r, color_icw[group][lane], alpha_icw[group][lane],
                      ocw, aocw, config.x >> 8);
        }
    }
    precise float4 result = r[12];
    if (config.z || config.w) {
        r[1] = final_c0;
        r[2] = final_c1;
        float3 va = (config.w & 0x40) ? 1.0 - r[5].rgb : r[5].rgb;
        float3 ra = (config.w & 0x20) ? 1.0 - r[12].rgb : r[12].rgb;
        float3 sum = va + ra;
        r[14] = float4((config.w & 0x80) ? saturate(sum) : sum, 0.0);
        r[15] = float4(READ_RGB(config.w >> 24) * READ_RGB(config.w >> 16), 0.0);
        float3 a = READ_RGB(config.z >> 24);
        float3 b = READ_RGB(config.z >> 16);
        float3 c = READ_RGB(config.z >> 8);
        float3 d = READ_RGB(config.z);
        result = float4((d + c * (1.0 - a)) + b * a, READ_ALPHA(config.w >> 8));
    }
    return saturate(result);
}
