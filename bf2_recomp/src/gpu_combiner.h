#ifndef BF2_GPU_COMBINER_H
#define BF2_GPU_COMBINER_H

#include "nv2a_combiner.h"
#include <string.h>

typedef struct {
    uint32_t color_icw[8], alpha_icw[8], color_ocw[8], alpha_ocw[8];
    float c0[8][4], c1[8][4], final_c0[4], final_c1[4];
    uint32_t config[4];
} CombinerConstants;

_Static_assert(sizeof(CombinerConstants) == 432, "HLSL combiner constants");

static inline void pack_combiner(CombinerConstants *out, const Nv2aCombinerProgram *program)
{
    const Nv2aCombiner *rc = &program->registers;
    memset(out, 0, sizeof *out);
    memcpy(out->color_icw, rc->color_icw, sizeof out->color_icw);
    memcpy(out->alpha_icw, rc->alpha_icw, sizeof out->alpha_icw);
    memcpy(out->color_ocw, rc->color_ocw, sizeof out->color_ocw);
    memcpy(out->alpha_ocw, rc->alpha_ocw, sizeof out->alpha_ocw);
    for (unsigned i = 0; i < (rc->control & 255) && i < 8; i++) {
        memcpy(out->c0[i], program->c0[i], sizeof out->c0[i]);
        memcpy(out->c1[i], program->c1[i], sizeof out->c1[i]);
    }
    memcpy(out->final_c0, program->final_c0, sizeof out->final_c0);
    memcpy(out->final_c1, program->final_c1, sizeof out->final_c1);
    out->config[0] = rc->control;
    out->config[1] = rc->stage_program;
    out->config[2] = rc->final0;
    out->config[3] = rc->final1;
}

#endif
