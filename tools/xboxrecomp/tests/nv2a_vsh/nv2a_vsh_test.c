/* The Xbox D3D screen-space epilogue, as every title's programs end:
 *
 *   mov o[0], v0                      position (stand-in for the DP4s)
 *   mul o[0].xyz, R12, c[58]  + rcc R1.x, R12.w
 *   mad o[0].xyz, R12, R1.x, c[59]
 *
 * The rcc is paired with a MAC op that writes no temp, and must still land
 * in R1; sent to the instruction's temp field instead, R1.x stayed 0 and
 * every vertex came out at c[59]. */
#include "nv2a_vsh_interp.h"
#include <math.h>
#include <stdio.h>

enum { T = 1, V = 2, C = 3 };             /* source mux */
#define XYZW 0x1B                         /* swizzle x,y,z,w */
#define WWWW 0xFF
#define XXXX 0x00

static void src(uint32_t w[4], int which, int mux, int reg, int swz)
{
    if (which == 0) { w[1] |= swz; w[2] |= (mux << 26) | (reg << 28); }
    else if (which == 1) { w[2] |= (swz << 17) | (mux << 11) | (reg << 13); }
    else { w[2] |= (swz << 2) | (reg >> 2); w[3] |= (mux << 28) | ((reg & 3) << 30); }
}

int main(void)
{
    uint32_t i0[4] = {0}, i1[4] = {0}, i2[4] = {0};
    const float c58[4] = {320, -240, 1000, 0}, c59[4] = {320, 240, 0, 0};
    float in[NV2A_VSH_INPUTS][4] = {{0}};
    Nv2aVshOutput o;

    /* mov o[0].xyzw, v0 */
    i0[1] = (1u << 21);                         /* MAC mov, input v0 */
    src(i0, 0, V, 0, XYZW);
    i0[3] |= (0xFu << 12) | (1u << 11);         /* o[0] mask xyzw */

    /* mul o[0].xyz, R12, c[58] ; rcc R1.x, R12.w (temp field says R7) */
    i1[1] = (3u << 25) | (2u << 21) | (58u << 13);
    src(i1, 0, T, 12, XYZW); src(i1, 1, C, 0, XYZW); src(i1, 2, T, 12, WWWW);
    i1[3] |= (7u << 20) | (8u << 16) | (0xEu << 12) | (1u << 11);

    /* mad o[0].xyz, R12, R1.x, c[59] ; final */
    i2[1] = (4u << 21) | (59u << 13);
    src(i2, 0, T, 12, XYZW); src(i2, 1, T, 1, XXXX); src(i2, 2, C, 0, XYZW);
    i2[3] |= (0xEu << 12) | (1u << 11) | 1u;

    nv2a_vsh_set_instruction(0, i0);
    nv2a_vsh_set_instruction(1, i1);
    nv2a_vsh_set_instruction(2, i2);
    nv2a_vsh_set_constant(58, c58);
    nv2a_vsh_set_constant(59, c59);

    in[0][0] = 1.0f; in[0][1] = 0.5f; in[0][2] = 0.25f; in[0][3] = 2.0f;
    if (!nv2a_vsh_run((const float (*)[4])in, &o)) {
        puts("FAIL: program did not run");
        return 1;
    }
    /* x = 1*320/2 + 320, y = 0.5*-240/2 + 240, z = 0.25*1000/2, w kept */
    if (fabsf(o.pos[0] - 480) > 1e-3f || fabsf(o.pos[1] - 180) > 1e-3f
        || fabsf(o.pos[2] - 125) > 1e-3f || o.pos[3] != 2.0f) {
        printf("FAIL: pos %g %g %g %g, want 480 180 125 2\n",
               o.pos[0], o.pos[1], o.pos[2], o.pos[3]);
        return 1;
    }
    {
        int reuse;
        uint32_t mask = nv2a_vsh_batch_inputs(&reuse);
        if (reuse && mask != 1u) {
            printf("FAIL: input-use mask %04X for the v0 program\n", mask);
            return 1;
        }
        /* A live context write can make two occurrences of the same vertex
         * index see different constant values. */
        uint32_t write[4] = {0};
        write[1] = (1u << 21) | (5u << 9);
        src(write, 0, V, 0, XYZW);
        write[3] |= (0xFu << 12) | 1u;                   /* mov c[0], v5; final */
        nv2a_vsh_set_start_slot(3);
        nv2a_vsh_set_instruction(3, write);
        nv2a_vsh_set_cxt_write(1);
        mask = nv2a_vsh_batch_inputs(&reuse);
        if (reuse || !(mask & (1u << 5))) {
            puts("FAIL: vertex reuse allowed across a context write");
            return 1;
        }
        nv2a_vsh_set_cxt_write(0);
        mask = nv2a_vsh_batch_inputs(&reuse);
        if (reuse && mask != (1u << 5)) {
            puts("FAIL: input-use mask for v5");
            return 1;
        }
        nv2a_vsh_set_start_slot(0);
    }

    /* The colour outputs are clamped to 0..1, as the NV2A does before it
     * interpolates them: mov oD0, c[0] / mov oD1, -c[0] with c[0] out of
     * range. Lighting programs push oD0 well above 1, and unclamped every
     * lit model came out washed out. */
    {
        uint32_t d0[4] = {0}, d1[4] = {0};
        const float c0[4] = {2.0f, -1.0f, 0.5f, 1.0f};
        d0[1] = (1u << 21);                     /* MAC mov, c[0] */
        src(d0, 0, C, 0, XYZW);
        d0[3] |= (0xFu << 12) | (1u << 11) | (3u << 3);         /* oD0 = o[3] */
        d1[1] = (1u << 21);
        src(d1, 0, C, 0, XYZW);
        d1[1] |= 1u << 8;                       /* negate a */
        d1[3] |= (0xFu << 12) | (1u << 11) | (4u << 3) | 1u;    /* oD1 = o[4], final */
        nv2a_vsh_set_instruction(0, d0);
        nv2a_vsh_set_instruction(1, d1);
        nv2a_vsh_set_constant(0, c0);
        if (!nv2a_vsh_run((const float (*)[4])in, &o)) {
            puts("FAIL: colour program did not run");
            return 1;
        }
        if (o.d0[0] != 1.0f || o.d0[1] != 0.0f || o.d0[2] != 0.5f || o.d0[3] != 1.0f
            || o.d1[0] != 0.0f || o.d1[1] != 1.0f || o.d1[2] != 0.0f || o.d1[3] != 0.0f) {
            printf("FAIL: oD0 %g %g %g %g (want 1 0 0.5 1), oD1 %g %g %g %g (want 0 1 0 0)\n",
                   o.d0[0], o.d0[1], o.d0[2], o.d0[3], o.d1[0], o.d1[1], o.d1[2], o.d1[3]);
            return 1;
        }
    }
    {
        uint32_t exported[2 * NV2A_VSH_GPU_INST_STRIDE];
        memset(exported, 0xA5, sizeof exported);
        /* The colour program above has two instructions. */
        if (nv2a_vsh_export_gpu(exported, 1, NULL, 0) || exported[0] != 0xA5A5A5A5u ||
            nv2a_vsh_export_gpu(NULL, 2, NULL, 0) ||
            nv2a_vsh_export_gpu(exported, 2, NULL, 0) != 2) {
            puts("FAIL: GPU export capacity contract"); return 1;
        }
        uint32_t write[4] = {0, 1u << 21, 2u << 26, (15u << 12) | 1u};
        nv2a_vsh_set_instruction(0, write);
        nv2a_vsh_set_cxt_write(1);
        if (nv2a_vsh_export_gpu(exported, 2, NULL, 0)) {
            puts("FAIL: GPU exported an enabled constant write"); return 1;
        }
        nv2a_vsh_set_cxt_write(0);
        if (nv2a_vsh_export_gpu(exported, 2, NULL, 0) != 1) {
            puts("FAIL: GPU rejected an ignored constant write"); return 1;
        }
        write[3] &= ~1u;
        nv2a_vsh_set_start_slot(NV2A_VSH_SLOTS - 1);
        nv2a_vsh_set_instruction(NV2A_VSH_SLOTS - 1, write);
        if (nv2a_vsh_export_gpu(exported, 2, NULL, 0)) {
            puts("FAIL: GPU exported a program without FINAL"); return 1;
        }
    }
    puts("ok");
    return 0;
}
