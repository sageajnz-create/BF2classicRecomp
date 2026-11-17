#ifndef BF2_GPU_SHADER_JIT_H
#define BF2_GPU_SHADER_JIT_H

#include <d3d11.h>
#include <stdint.h>
#include "gpu_combiner.h"

/* Native HLSL JIT compiler + cache for NV2A vertex programs and register
 * combiners. Compiles each unique program once to straight-line HLSL (SM 5.0),
 * eliminating per-vertex/per-pixel bytecode interpreter loops, dynamic register
 * switches, and unused vertex-attribute / texture-stage fetches.
 *
 * Returns NULL on cache overflow, compile error, or when disabled via
 * RECOMP_VSH_JIT=0 / RECOMP_PS_JIT=0 so the caller seamlessly falls back to
 * the generic interpreter shader. */

ID3D11VertexShader *gpu_jit_get_vsh(ID3D11Device *device,
                                    const uint32_t *instructions,
                                    uint32_t instruction_count,
                                    uint32_t stream_mask,
                                    uint32_t program_revision);

ID3D11PixelShader *gpu_jit_get_ps(ID3D11Device *device,
                                  const CombinerConstants *combiner,
                                  uint32_t alpha_test_enable,
                                  uint32_t alpha_func);

void gpu_jit_report_stats(void);
void gpu_jit_shutdown(void);

#endif
