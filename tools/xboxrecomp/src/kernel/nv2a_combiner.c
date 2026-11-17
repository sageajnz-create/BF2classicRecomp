/**
 * NV2A register combiners. See nv2a_combiner.h.
 *
 * Register numbers (an input or output byte's low nibble):
 *   0 zero/discard  1 c0  2 c1  3 fog  4 v0  5 v1  8-11 t0-t3  12 r0  13 r1
 *   14 v1+r0 sum and 15 E*F product (final combiner only)
 * An input byte is reg | alpha<<4 | mapping<<5. In the RGB portion the alpha
 * bit replicates .a; in the alpha portion it picks .a over .b.
 */
#include "nv2a_combiner.h"

#include <string.h>

enum { R_ZERO = 0, R_C0 = 1, R_C1 = 2, R_FOG = 3, R_V0 = 4, R_V1 = 5,
       R_T0 = 8, R_R0 = 12, R_R1 = 13, R_SUM = 14, R_EF = 15 };

void nv2a_rc_unpack(uint32_t c, float o[4])
{
    o[0] = (float)((c >> 16) & 0xFF) / 255.0f;
    o[1] = (float)((c >>  8) & 0xFF) / 255.0f;
    o[2] = (float)( c        & 0xFF) / 255.0f;
    o[3] = (float)( c >> 24        ) / 255.0f;
}

static uint32_t input_registers(uint32_t icw)
{
    return (1u << ((icw >> 24) & 0xF)) | (1u << ((icw >> 16) & 0xF))
         | (1u << ((icw >> 8) & 0xF)) | (1u << (icw & 0xF));
}

void nv2a_rc_prepare(Nv2aCombinerProgram *program, const Nv2aCombiner *rc)
{
    uint32_t n = rc->control & 0xFF, flags = rc->control >> 8, stage;
    uint32_t inputs = input_registers(rc->final0) | (1u << ((rc->final1 >> 8) & 0xF));

    program->final_uses_product = (inputs & (1u << R_EF)) != 0;
    /* E and F can themselves use the V1+R0 sum. */
    if (program->final_uses_product)
        inputs |= input_registers(rc->final1 & 0xFFFF0000u);
    program->final_uses_sum = (inputs & (1u << R_SUM)) != 0;
    program->registers = *rc;
    for (stage = 0; stage < n && stage < 8; stage++) {
        nv2a_rc_unpack(rc->factor0[(flags & 0x010) ? stage : 0], program->c0[stage]);
        nv2a_rc_unpack(rc->factor1[(flags & 0x100) ? stage : 0], program->c1[stage]);
    }
    nv2a_rc_unpack(rc->final_c0, program->final_c0);
    nv2a_rc_unpack(rc->final_c1, program->final_c1);
}

static float clampf(float x, float lo, float hi)
{
    return x < lo ? lo : (x > hi ? hi : x);
}

/* PS_INPUTMAPPING, psh.c get_input_var. */
static float map_in(float x, uint32_t byte)
{
    float p = x < 0.0f ? 0.0f : x;
    switch ((byte >> 5) & 7) {
    case 0:  return p;                               /* unsigned identity */
    case 1:  return 1.0f - clampf(x, 0.0f, 1.0f);    /* unsigned invert   */
    case 2:  return 2.0f * p - 1.0f;                 /* expand normal     */
    case 3:  return -2.0f * p + 1.0f;                /* expand negate     */
    case 4:  return p - 0.5f;                        /* half-bias normal  */
    case 5:  return -p + 0.5f;                       /* half-bias negate  */
    case 6:  return x;                               /* signed identity   */
    default: return -x;                              /* signed negate     */
    }
}

/* PS_COMBINEROUTPUT scale/bias, psh.c get_output. */
static float map_out(float x, uint32_t mapping)
{
    switch (mapping) {
    case 0x08: return x - 0.5f;
    case 0x10: return x * 2.0f;
    case 0x18: return (x - 0.5f) * 2.0f;
    case 0x20: return x * 4.0f;
    case 0x30: return x * 0.5f;
    default:   return x;
    }
}

static void read_rgb(float R[16][4], uint32_t byte, float v[3])
{
    const float *r = R[byte & 0xF];
    int i;
    for (i = 0; i < 3; i++)
        v[i] = map_in((byte & 0x10) ? r[3] : r[i], byte);
}

static float read_alpha(float R[16][4], uint32_t byte)
{
    const float *r = R[byte & 0xF];
    return map_in((byte & 0x10) ? r[3] : r[2], byte);
}

void nv2a_rc_eval_prepared(const Nv2aCombinerProgram *program, const float v0[4],
                          const float v1[4], const float fog[4],
                          const float t[4][4], float out[4])
{
    const Nv2aCombiner *rc = &program->registers;
    float R[16][4];
    uint32_t n = rc->control & 0xFF, flags = rc->control >> 8, s;
    int i;

    if (n > 8)
        n = 8;
    /* Only the registers a program can read before writing need a value:
     * zero, r0, r1 and the final-combiner specials. */
    for (i = 0; i < 4; i++) {
        R[0][i] = R[6][i] = R[7][i] = 0.0f;
        R[12][i] = R[13][i] = R[14][i] = R[15][i] = 0.0f;
    }
    for (i = 0; i < 4; i++) {
        R[R_FOG][i] = fog[i];
        R[R_V0][i] = v0[i];
        R[R_V1][i] = v1[i];
        R[R_T0 + 0][i] = t[0][i];
        R[R_T0 + 1][i] = t[1][i];
        R[R_T0 + 2][i] = t[2][i];
        R[R_T0 + 3][i] = t[3][i];
    }
    /* r0.a starts as texture 0's alpha, or 1 with stage 0 off (psh.c). */
    R[R_R0][3] = (rc->stage_program & 0x1F) ? t[0][3] : 1.0f;

    for (s = 0; s < n; s++) {
        uint32_t icw = rc->color_icw[s], ocw = rc->color_ocw[s];
        uint32_t aicw = rc->alpha_icw[s], aocw = rc->alpha_ocw[s];
        uint32_t fl = ocw >> 12, afl = aocw >> 12;
        uint32_t ab_dst = (ocw >> 4) & 0xF, cd_dst = ocw & 0xF;
        uint32_t sum_dst = (ocw >> 8) & 0xF;
        uint32_t aab_dst = (aocw >> 4) & 0xF, acd_dst = aocw & 0xF;
        uint32_t asum_dst = (aocw >> 8) & 0xF;
        float aab = 0.0f, acd = 0.0f, ams = 0.0f;
        int mux_cd = 0;

        if (!((ocw | aocw) & 0xFFFu))
            continue;                      /* both portions discard every result */

        /* One c0/c1 for every stage, or one per stage (COMBINERCOUNT). */
        memcpy(R[R_C0], program->c0[s], sizeof R[R_C0]);
        memcpy(R[R_C1], program->c1[s], sizeof R[R_C1]);
        if ((fl | afl) & 4)
            mux_cd = (flags & 1) ? R[R_R0][3] >= 0.5f
                                : ((int)(R[R_R0][3] * 255.0f) & 1);

        /* Read alpha before RGB can update any register, including when
         * RGB's blue-to-alpha flag writes the same alpha component. */
        if (aocw & 0xFFFu) {
            float pab = read_alpha(R, aicw >> 24) * read_alpha(R, aicw >> 16);
            float pcd = read_alpha(R, aicw >> 8) * read_alpha(R, aicw);
            if (aab_dst) aab = clampf(map_out(pab, afl & 0x38), -1.0f, 1.0f);
            if (acd_dst) acd = clampf(map_out(pcd, afl & 0x38), -1.0f, 1.0f);
            if (asum_dst) {
                float sum = (afl & 4) ? (mux_cd ? pcd : pab) : pab + pcd;
                ams = clampf(map_out(sum, afl & 0x38), -1.0f, 1.0f);
            }
        }

        if (ocw & 0xFFFu) {
            float A[3], B[3], C[3], D[3], ab[3], cd[3], ms[3], dab = 0.0f, dcd = 0.0f;

            read_rgb(R, icw >> 24, A); read_rgb(R, icw >> 16, B);
            read_rgb(R, icw >> 8, C);  read_rgb(R, icw, D);
            if (fl & 2) dab = A[0] * B[0] + A[1] * B[1] + A[2] * B[2];
            if (fl & 1) dcd = C[0] * D[0] + C[1] * D[1] + C[2] * D[2];
            for (i = 0; i < 3; i++) {
                float pab = (fl & 2) ? dab : A[i] * B[i];
                float pcd = (fl & 1) ? dcd : C[i] * D[i];
                if (ab_dst) ab[i] = clampf(map_out(pab, fl & 0x38), -1.0f, 1.0f);
                if (cd_dst) cd[i] = clampf(map_out(pcd, fl & 0x38), -1.0f, 1.0f);
                if (sum_dst) {
                    float sum = (fl & 4) ? (mux_cd ? pcd : pab) : pab + pcd;
                    ms[i] = clampf(map_out(sum, fl & 0x38), -1.0f, 1.0f);
                }
            }
            if (ab_dst) {
                memcpy(R[ab_dst], ab, sizeof ab);
                if (fl & 0x80) R[ab_dst][3] = ab[2];
            }
            if (cd_dst) {
                memcpy(R[cd_dst], cd, sizeof cd);
                if (fl & 0x40) R[cd_dst][3] = cd[2];
            }
            if (sum_dst)
                memcpy(R[sum_dst], ms, sizeof ms);
        }
        if (aab_dst) R[aab_dst][3] = aab;
        if (acd_dst) R[acd_dst][3] = acd;
        if (asum_dst) R[asum_dst][3] = ams;
    }

    if (rc->final0 || rc->final1) {
        uint32_t f0 = rc->final0, f1 = rc->final1, fflags = f1 & 0xFF;
        float A[3], B[3], C[3], D[3];

        memcpy(R[R_C0], program->final_c0, sizeof R[R_C0]);
        memcpy(R[R_C1], program->final_c1, sizeof R[R_C1]);
        /* V1R0 sum: optional complements (0x40 v1, 0x20 r0), clamp (0x80). */
        if (program->final_uses_sum) {
            for (i = 0; i < 3; i++) {
                float a = (fflags & 0x40) ? 1.0f - R[R_V1][i] : R[R_V1][i];
                float b = (fflags & 0x20) ? 1.0f - R[R_R0][i] : R[R_R0][i];
                R[R_SUM][i] = (fflags & 0x80) ? clampf(a + b, 0.0f, 1.0f) : a + b;
            }
            R[R_SUM][3] = 0.0f;
        }
        if (program->final_uses_product) {
            float E[3], F[3];
            read_rgb(R, f1 >> 24, E);
            read_rgb(R, f1 >> 16, F);
            for (i = 0; i < 3; i++)
                R[R_EF][i] = E[i] * F[i];
            R[R_EF][3] = 0.0f;
        }
        read_rgb(R, f0 >> 24, A); read_rgb(R, f0 >> 16, B);
        read_rgb(R, f0 >> 8, C);  read_rgb(R, f0, D);
        /* D + mix(C, B, A), alpha from G. */
        for (i = 0; i < 3; i++)
            out[i] = D[i] + C[i] * (1.0f - A[i]) + B[i] * A[i];
        out[3] = read_alpha(R, f1 >> 8);
    } else {
        for (i = 0; i < 4; i++)
            out[i] = R[R_R0][i];
    }
    for (i = 0; i < 4; i++)
        out[i] = clampf(out[i], 0.0f, 1.0f);
}

void nv2a_rc_eval(const Nv2aCombiner *rc, const float v0[4],
                  const float v1[4], const float fog[4],
                  const float t[4][4], float out[4])
{
    Nv2aCombinerProgram program;
    nv2a_rc_prepare(&program, rc);
    nv2a_rc_eval_prepared(&program, v0, v1, fog, t, out);
}
