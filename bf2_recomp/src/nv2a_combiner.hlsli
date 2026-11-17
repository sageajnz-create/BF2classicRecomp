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

/* Combiner registers: scalar struct to eliminate dcl_indexableTemp arrays on modern GPUs.
 * Register 0 (zero) is hardwired to zero; writes to register 0 are ignored. */
struct CombinerRegs {
    float4 r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15;
};

float4 get_reg(CombinerRegs r, uint idx)
{
    switch (idx & 15u) {
        case 0u: return r.r0;
        case 1u: return r.r1;
        case 2u: return r.r2;
        case 3u: return r.r3;
        case 4u: return r.r4;
        case 5u: return r.r5;
        case 6u: return r.r6;
        case 7u: return r.r7;
        case 8u: return r.r8;
        case 9u: return r.r9;
        case 10u: return r.r10;
        case 11u: return r.r11;
        case 12u: return r.r12;
        case 13u: return r.r13;
        case 14u: return r.r14;
        default: return r.r15;
    }
}

void set_reg(inout CombinerRegs r, uint idx, float4 val)
{
    switch (idx & 15u) {
        case 1u: r.r1 = val; break;
        case 2u: r.r2 = val; break;
        case 3u: r.r3 = val; break;
        case 4u: r.r4 = val; break;
        case 5u: r.r5 = val; break;
        case 6u: r.r6 = val; break;
        case 7u: r.r7 = val; break;
        case 8u: r.r8 = val; break;
        case 9u: r.r9 = val; break;
        case 10u: r.r10 = val; break;
        case 11u: r.r11 = val; break;
        case 12u: r.r12 = val; break;
        case 13u: r.r13 = val; break;
        case 14u: r.r14 = val; break;
        case 15u: r.r15 = val; break;
    }
}

void set_reg_rgb(inout CombinerRegs r, uint idx, float3 rgb)
{
    switch (idx & 15u) {
        case 1u: r.r1.rgb = rgb; break;
        case 2u: r.r2.rgb = rgb; break;
        case 3u: r.r3.rgb = rgb; break;
        case 4u: r.r4.rgb = rgb; break;
        case 5u: r.r5.rgb = rgb; break;
        case 6u: r.r6.rgb = rgb; break;
        case 7u: r.r7.rgb = rgb; break;
        case 8u: r.r8.rgb = rgb; break;
        case 9u: r.r9.rgb = rgb; break;
        case 10u: r.r10.rgb = rgb; break;
        case 11u: r.r11.rgb = rgb; break;
        case 12u: r.r12.rgb = rgb; break;
        case 13u: r.r13.rgb = rgb; break;
        case 14u: r.r14.rgb = rgb; break;
        case 15u: r.r15.rgb = rgb; break;
    }
}

void set_reg_a(inout CombinerRegs r, uint idx, float a)
{
    switch (idx & 15u) {
        case 1u: r.r1.a = a; break;
        case 2u: r.r2.a = a; break;
        case 3u: r.r3.a = a; break;
        case 4u: r.r4.a = a; break;
        case 5u: r.r5.a = a; break;
        case 6u: r.r6.a = a; break;
        case 7u: r.r7.a = a; break;
        case 8u: r.r8.a = a; break;
        case 9u: r.r9.a = a; break;
        case 10u: r.r10.a = a; break;
        case 11u: r.r11.a = a; break;
        case 12u: r.r12.a = a; break;
        case 13u: r.r13.a = a; break;
        case 14u: r.r14.a = a; break;
        case 15u: r.r15.a = a; break;
    }
}

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

#define READ_RGB(input) mapped_rgb(get_reg(r, (input) & 15u), input)
#define READ_ALPHA(input) mapped_alpha(get_reg(r, (input) & 15u), input)

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

void run_stage(inout CombinerRegs r, uint icw, uint aicw,
               uint ocw, uint aocw, uint flags)
{
    uint rgb_flags = ocw >> 12;
    uint alpha_flags = aocw >> 12;
    uint3 rgb_dst = uint3((ocw >> 4) & 15, ocw & 15, (ocw >> 8) & 15);
    uint3 alpha_dst = uint3((aocw >> 4) & 15, aocw & 15, (aocw >> 8) & 15);
    bool mux_cd = (flags & 1) ? (r.r12.a >= 0.5) : (((int)(r.r12.a * 255.0) & 1) != 0);
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
            float3 mapped_ab = map_output(ab, rgb_flags);
            set_reg_rgb(r, rgb_dst.x, mapped_ab);
            if (rgb_flags & 0x80)
                set_reg_a(r, rgb_dst.x, mapped_ab.b);
        }
        if (rgb_dst.y) {
            float3 mapped_cd = map_output(cd, rgb_flags);
            set_reg_rgb(r, rgb_dst.y, mapped_cd);
            if (rgb_flags & 0x40)
                set_reg_a(r, rgb_dst.y, mapped_cd.b);
        }
        if (rgb_dst.z)
            set_reg_rgb(r, rgb_dst.z, map_output(sum, rgb_flags));
    }
    if (alpha_dst.x) set_reg_a(r, alpha_dst.x, aout.x);
    if (alpha_dst.y) set_reg_a(r, alpha_dst.y, aout.y);
    if (alpha_dst.z) set_reg_a(r, alpha_dst.z, aout.z);
}

float4 combine_pixel(PixelInput p)
{
    CombinerRegs r = (CombinerRegs)0;
    r.r3 = p.fog;
    r.r4 = p.v0;
    r.r5 = p.v1;
    r.r8 = p.tex[0];
    r.r9 = p.tex[1];
    r.r10 = p.tex[2];
    r.r11 = p.tex[3];
    r.r12.a = (config.y & 31) ? r.r8.a : 1.0;
    for (uint stage = 0; stage < min(config.x & 255, 8); stage++) {
        uint group = stage >> 2;
        uint lane = stage & 3;
        uint ocw = color_ocw[group][lane];
        uint aocw = alpha_ocw[group][lane];
        if ((ocw | aocw) & 0xfff) {
            r.r1 = c0[stage];
            r.r2 = c1[stage];
            run_stage(r, color_icw[group][lane], alpha_icw[group][lane],
                      ocw, aocw, config.x >> 8);
        }
    }
    precise float4 result = r.r12;
    if (config.z || config.w) {
        r.r1 = final_c0;
        r.r2 = final_c1;
        float3 va = (config.w & 0x40) ? 1.0 - r.r5.rgb : r.r5.rgb;
        float3 ra = (config.w & 0x20) ? 1.0 - r.r12.rgb : r.r12.rgb;
        float3 sum = va + ra;
        r.r14 = float4((config.w & 0x80) ? saturate(sum) : sum, 0.0);
        r.r15 = float4(READ_RGB(config.w >> 24) * READ_RGB(config.w >> 16), 0.0);
        float3 a = READ_RGB(config.z >> 24);
        float3 b = READ_RGB(config.z >> 16);
        float3 c = READ_RGB(config.z >> 8);
        float3 d = READ_RGB(config.z);
        result = float4((d + c * (1.0 - a)) + b * a, READ_ALPHA(config.w >> 8));
    }
    return saturate(result);
}
