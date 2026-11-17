/* GPU interpreter for decoded NV2A vertex programs.
 *
 * This mirrors nv2a_vsh_interp.c's vsh_run_decoded instruction for
 * instruction: the same DecIns fields, the same MAC/ILU op tables, the same
 * source mux/swizzle/negate/a0-relative constant rules, the same write masks
 * and the same output-register mapping to oPos/oD0/oD1/oFog/oTex0..3.
 *
 * The C side exports one decoded instruction as INST_STRIDE uints (see the
 * test harness / world backend); this file reads those fields by index so
 * the HLSL and C layouts cannot silently drift. Constants are c[0..191].
 *
 * The same `interpret` function is used by a compute shader (the CPU-vs-GPU
 * verification harness) and by the production vertex shader.
 */

#define NV2A_VSH_CONSTANTS 192
#define INST_STRIDE 44

/* Instruction field indices within an INST_STRIDE block. */
#define I_MAC 0
#define I_ILU 1
#define I_MAC_MASK 2
#define I_ILU_MASK 3
#define I_MAC_DST 4
#define I_ILU_DST 5
#define I_OMASK 6
#define I_OADDR 7
#define I_TO_O 8
#define I_FROM_ILU 9
#define I_FINAL 10
#define I_READS 11
/* Source k starts at 12 + k*10: mux, idx, neg, rel, ident, sw0..3, c. */
#define SRC_BASE(k) (12 + (k) * 10)
#define S_MUX 0
#define S_IDX 1
#define S_NEG 2
#define S_REL 3
#define S_IDENT 4
#define S_SW0 5
#define S_C 9

#define DEC_TEMP 1
#define DEC_INPUT 2
#define DEC_CONST 3
#define NO_DST 255

StructuredBuffer<uint> g_ins : register(t0);
StructuredBuffer<float4> g_const : register(t1);
StructuredBuffer<float4> g_inputs : register(t2); /* 16 float4 per vertex */
RWStructuredBuffer<float4> g_out : register(u0);  /* 8 float4 per vertex */

cbuffer Params : register(b0)
{
    uint g_ins_count;
    uint g_vertex_count;
    uint g_ins_base;
    uint g_const_base;
};

struct VshRegs {
    float4 r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12;
};

struct VshInp {
    float4 v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15;
};

struct VshResult {
    float4 pos, d0, d1, fog, tex0, tex1, tex2, tex3;
};

static void write_masked(inout float4 dst, float4 s, uint mask)
{
    dst.x = (mask & 8) ? s.x : dst.x;
    dst.y = (mask & 4) ? s.y : dst.y;
    dst.z = (mask & 2) ? s.z : dst.z;
    dst.w = (mask & 1) ? s.w : dst.w;
}

static float4 get_vsh_reg(uint idx, VshRegs r) {
    switch (idx) {
    case 0: return r.r0;
    case 1: return r.r1;
    case 2: return r.r2;
    case 3: return r.r3;
    case 4: return r.r4;
    case 5: return r.r5;
    case 6: return r.r6;
    case 7: return r.r7;
    case 8: return r.r8;
    case 9: return r.r9;
    case 10: return r.r10;
    case 11: return r.r11;
    default: return r.r12;
    }
}

static void set_vsh_reg(uint idx, float4 val, uint mask, inout VshRegs r) {
    switch (idx) {
    case 0: write_masked(r.r0, val, mask); break;
    case 1: write_masked(r.r1, val, mask); break;
    case 2: write_masked(r.r2, val, mask); break;
    case 3: write_masked(r.r3, val, mask); break;
    case 4: write_masked(r.r4, val, mask); break;
    case 5: write_masked(r.r5, val, mask); break;
    case 6: write_masked(r.r6, val, mask); break;
    case 7: write_masked(r.r7, val, mask); break;
    case 8: write_masked(r.r8, val, mask); break;
    case 9: write_masked(r.r9, val, mask); break;
    case 10: write_masked(r.r10, val, mask); break;
    case 11: write_masked(r.r11, val, mask); break;
    case 12: write_masked(r.r12, val, mask); break;
    }
}

static float4 get_vsh_inp(uint idx, VshInp v) {
    switch (idx) {
    case 0: return v.v0;
    case 1: return v.v1;
    case 2: return v.v2;
    case 3: return v.v3;
    case 4: return v.v4;
    case 5: return v.v5;
    case 6: return v.v6;
    case 7: return v.v7;
    case 8: return v.v8;
    case 9: return v.v9;
    case 10: return v.v10;
    case 11: return v.v11;
    case 12: return v.v12;
    case 13: return v.v13;
    case 14: return v.v14;
    default: return v.v15;
    }
}

static void set_out_reg(uint oaddr, float4 val, uint mask, inout VshRegs r, inout VshResult o) {
    switch (oaddr) {
    case 0: write_masked(r.r12, val, mask); break;
    case 3: write_masked(o.d0, val, mask); break;
    case 4: write_masked(o.d1, val, mask); break;
    case 5: write_masked(o.fog, val, mask); break;
    case 9: write_masked(o.tex0, val, mask); break;
    case 10: write_masked(o.tex1, val, mask); break;
    case 11: write_masked(o.tex2, val, mask); break;
    case 12: write_masked(o.tex3, val, mask); break;
    }
}

static float4 rd_src(uint base, VshInp inp, VshRegs regs, int a0)
{
    uint mux = g_ins[base + S_MUX];
    uint idx = g_ins[base + S_IDX];
    uint neg = g_ins[base + S_NEG];
    uint rel = g_ins[base + S_REL];
    uint ident = g_ins[base + S_IDENT];
    uint c = g_ins[base + S_C];

    float4 s;
    if (mux == DEC_TEMP)
        s = get_vsh_reg(idx, regs);
    else if (mux == DEC_INPUT)
        s = get_vsh_inp(idx, inp);
    else {
        int ci = (int)c + (rel ? a0 : 0);
        if (ci < 0 || ci >= NV2A_VSH_CONSTANTS)
            ci = 0;
        s = g_const[g_const_base + (uint)ci];
    }
    float4 r;
    if (ident) {
        r = s;
    } else {
        uint sw0 = g_ins[base + S_SW0];
        uint sw1 = g_ins[base + S_SW0 + 1];
        uint sw2 = g_ins[base + S_SW0 + 2];
        uint sw3 = g_ins[base + S_SW0 + 3];
        r = float4(s[sw0], s[sw1], s[sw2], s[sw3]);
    }
    if (neg)
        r = -r;
    return r;
}

static float4 splat(float f) { return float4(f, f, f, f); }
static float clampf(float x, float a, float b) { return min(max(x, a), b); }

static float4 run_mac(uint op, float4 a, float4 b, float4 c, inout int a0)
{
    switch (op) {
    case 0: case 1: return a;                                   /* nop, mov */
    case 2: return a * b;                                       /* mul */
    case 3: return a + c;                                       /* add */
    case 4: return mad(a, b, c);                                /* mad */
    case 5: return splat(dot(a.xyz, b.xyz));                    /* dp3 */
    case 6: return splat(dot(a.xyz, b.xyz) + b.w);              /* dph */
    case 7: return splat(dot(a, b));                            /* dp4 */
    case 8: return float4(1.0, a.y * b.y, a.z, b.w);            /* dst */
    case 9: return min(a, b);                                   /* min */
    case 10: return max(a, b);                                  /* max */
    case 11: return (a >= b) ? float4(0, 0, 0, 0) : float4(1, 1, 1, 1); /* slt (a<b) */
    case 12: return (a >= b) ? float4(1, 1, 1, 1) : float4(0, 0, 0, 0); /* sge */
    case 13: a0 = (int)floor(a.x + 0.001f); return a;           /* arl */
    default: return a;
    }
}

static float4 run_ilu(uint op, float4 c)
{
    float x = c.x;
    switch (op) {
    case 0: case 1: return c;                                   /* nop, mov */
    case 2: return splat(1.0 / x);                              /* rcp */
    case 3: {                                                   /* rcc */
        float f = 1.0 / x;
        float af = abs(f);
        if (af < 5.42101e-20f) f = (f < 0 ? -1 : 1) * 5.42101e-20f;
        else if (af > 1.884467e19f) f = (f < 0 ? -1 : 1) * 1.884467e19f;
        return splat(f);
    }
    case 4: return splat(rsqrt(abs(x)));                        /* rsq */
    case 5: {                                                   /* exp */
        float fl = floor(x);
        return float4(exp2(fl), x - fl, exp2(x), 1.0);
    }
    case 6: {                                                   /* log */
        float ax = abs(x);
        if (ax == 0.0)
            return float4(-1.0 / 0.0, 1.0, -1.0 / 0.0, 1.0);
        float e = floor(log2(ax));
        return float4(e, ax / exp2(e), log2(ax), 1.0);
    }
    case 7: {                                                   /* lit */
        float nl = max(c.x, 0.0), nh = max(c.y, 0.0);
        float p = clampf(c.w, -127.9961f, 127.9961f);
        return float4(1.0, nl, (c.x > 0.0) ? pow(nh, p) : 0.0, 1.0);
    }
    default: return c;
    }
}

static VshResult interpret(uint id, VshInp inp)
{
    VshRegs regs = (VshRegs)0;
    VshResult o;
    o.pos = float4(0, 0, 0, 0);
    o.d0 = float4(0, 0, 0, 1);
    o.d1 = float4(0, 0, 0, 1);
    o.fog = float4(0, 0, 0, 0);
    o.tex0 = float4(0, 0, 0, 1);
    o.tex1 = float4(0, 0, 0, 1);
    o.tex2 = float4(0, 0, 0, 1);
    o.tex3 = float4(0, 0, 0, 1);
    int a0 = 0;

    uint count = min(g_ins_count, 136u);
    for (uint i = 0; i < count; i++) {
        uint base = g_ins_base + i * INST_STRIDE;
        uint mac = g_ins[base + I_MAC];
        uint ilu = g_ins[base + I_ILU];
        uint mac_mask = g_ins[base + I_MAC_MASK];
        uint ilu_mask = g_ins[base + I_ILU_MASK];
        uint mac_dst = g_ins[base + I_MAC_DST];
        uint ilu_dst = g_ins[base + I_ILU_DST];
        uint omask = g_ins[base + I_OMASK];
        uint oaddr = g_ins[base + I_OADDR];
        uint to_o = g_ins[base + I_TO_O];
        uint from_ilu = g_ins[base + I_FROM_ILU];
        uint reads = g_ins[base + I_READS];

        float4 a = float4(0, 0, 0, 0), b = a, c = a;
        if (reads & 1) a = rd_src(base + SRC_BASE(0), inp, regs, a0);
        if (reads & 2) b = rd_src(base + SRC_BASE(1), inp, regs, a0);
        if (reads & 4) c = rd_src(base + SRC_BASE(2), inp, regs, a0);

        float4 mres = float4(0, 0, 0, 0), ires = mres;
        if (mac) mres = run_mac(mac, a, b, c, a0);
        if (ilu) ires = run_ilu(ilu, c);

        if (mac_mask && mac_dst != NO_DST)
            set_vsh_reg(mac_dst, mres, mac_mask, regs);
        if (ilu_mask && ilu_dst != NO_DST)
            set_vsh_reg(ilu_dst, ires, ilu_mask, regs);
        if (omask) {
            float4 src = from_ilu ? ires : mres;
            if (to_o) {
                set_out_reg(oaddr, src, omask, regs, o);
            }
            /* !to_o writes c[] (context write); the GPU path refuses programs
             * that write constants, so it is intentionally a no-op here. */
        }
        if (g_ins[base + I_FINAL])
            break;
    }

    o.pos = regs.r12;
    o.d0 = saturate(o.d0);
    o.d1 = saturate(o.d1);
    return o;
}

/* ---- compute entry (verification harness) ---- */
[numthreads(64, 1, 1)]
void cs_main(uint tid : SV_DispatchThreadID)
{
    if (tid >= g_vertex_count)
        return;
    uint base_in = tid * 16;
    VshInp inp;
    inp.v0  = g_inputs[base_in + 0];
    inp.v1  = g_inputs[base_in + 1];
    inp.v2  = g_inputs[base_in + 2];
    inp.v3  = g_inputs[base_in + 3];
    inp.v4  = g_inputs[base_in + 4];
    inp.v5  = g_inputs[base_in + 5];
    inp.v6  = g_inputs[base_in + 6];
    inp.v7  = g_inputs[base_in + 7];
    inp.v8  = g_inputs[base_in + 8];
    inp.v9  = g_inputs[base_in + 9];
    inp.v10 = g_inputs[base_in + 10];
    inp.v11 = g_inputs[base_in + 11];
    inp.v12 = g_inputs[base_in + 12];
    inp.v13 = g_inputs[base_in + 13];
    inp.v14 = g_inputs[base_in + 14];
    inp.v15 = g_inputs[base_in + 15];
    VshResult o = interpret(tid, inp);
    uint b = tid * 8;
    g_out[b + 0] = o.pos;
    g_out[b + 1] = o.d0;
    g_out[b + 2] = o.d1;
    g_out[b + 3] = o.fog;
    g_out[b + 4] = o.tex0;
    g_out[b + 5] = o.tex1;
    g_out[b + 6] = o.tex2;
    g_out[b + 7] = o.tex3;
}
