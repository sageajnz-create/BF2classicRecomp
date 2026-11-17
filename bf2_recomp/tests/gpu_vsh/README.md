# GPU vertex-program interpreter — verification component

This is the correctness gate for moving BF2's vertex transform off the CPU and
onto the GPU (the dominant remaining frame cost; see `HANDOFF.md`).

## What is here

- `../../src/nv2a_vsh_gpu.hlsl` — an HLSL interpreter of decoded NV2A vertex
  programs. It mirrors `nv2a_vsh_interp.c`'s `vsh_run_decoded` instruction for
  instruction: MAC/ILU op tables, source mux/swizzle/negate, a0-relative
  constants, write masks, and oPos/oD0/oD1/oFog/oTex0..3 mapping. One shader
  runs every program, read from a structured buffer of decoded instructions —
  no per-program recompilation.
- `nv2a_vsh_export_gpu` in `nv2a_vsh_interp.c` serializes the *already decoded*
  program (the same `DecIns[]` the CPU runs) into the flat layout the shader
  reads. There is no second decoder that could drift.
- `check.c` — runs the same programs through the CPU interpreter and the GPU
  shader (via a compute entry sharing the `interpret()` function) and compares
  every output float.

## What is verified

- 600 randomized programs (1–40 instructions, all source muxes, swizzles,
  negates, a0-relative constants, all output registers) × 128 vertices:
  **2,457,600 output floats matched** within an IEEE tolerance, plus signed
  infinity/NaN cases handled explicitly.
- All 16 MAC ops and all 8 ILU ops, each in a controlled single-instruction
  program with bounded operands (so EXP/LOG/LIT/RCC have identical results on
  CPU and GPU): matched.
- A no-op program confirms the default output registers (oD0/oD1/oTex* start
  w=1) are reproduced.

Run it:

```powershell
cmake -S bf2_recomp/tests/gpu_vsh -B bf2_recomp/tests/gpu_vsh/build -A x64
cmake --build bf2_recomp/tests/gpu_vsh/build --config Release
& bf2_recomp/tests/gpu_vsh/build/Release/gpu-vsh-test.exe
# gpu-vsh: ... output floats matched ... / ok
```

A program is only safe to run on the GPU if this test says its outputs match.
EXP/LOG/LIT on arbitrary *extreme* random values are excluded from the stress
test: MSVC scalar math and HLSL round overflow at slightly different
thresholds. Real D3D vertex shaders use bounded fog/transcendental inputs, and
the controlled per-op phase covers those ops at realistic values.

## Remaining work to put this in the live renderer (not done)

The interpreter is verified; the transform around it is not yet moved. To get
the FPS win, the executor/world backend must:

1. Add a vertex-shader entry using `interpret()` that gathers the guest vertex
   attributes from GPU buffers (upload the referenced attribute ranges plus the
   index list) — the gather, ~75% of the CPU transform cost, must move too, or
   moving only the ~25% interpreter arithmetic will not change FPS.
2. Reproduce the CPU path's near-plane clip (`raster_xf_clipped`) and the
   perspective divide (`T.stc = tex * 1/w`) before the existing `RasterVertex`
   handoff, so hardware clipping and the `noperspective` pixel shader stay
   correct. This is the subtle part and needs the project's frame-comparison
   verification against the CPU path before any live claim.
3. Gate with an opt-in env flag, keep the CPU transform as reference/fallback,
   and do a matched-camera run (like `logs/perf-20261117`) to measure.

## Gather and export contracts

- `t3` contains padded uint words from validated guest ranges; descriptors at `t4` hold rebased byte offset, stride, NV2A type and component count. Zero is a valid rebased offset. `t5` contains uint indices; `t6` contains 16 immediate/default float4 attributes.
- `b1` supplies logical byte length, stream mask and index count. The host must ensure these lengths fit the uploaded resources and keep constants stable for each draw. The shader checks byte-range and index overflow before reads. Masked-off streams use the supplied template; invalid enabled streams produce (0,0,0,1).
- The host must fall back for enabled constant-writing programs. `nv2a_vsh_export_gpu` now returns zero for these, insufficient instruction capacity, null instruction output, or missing FINAL. It never exports a truncated program.
- CPU gather reference intentionally follows the current executor semantics, including signed normalized minima below -1. This does not independently prove original NV2A hardware fidelity.
- Run both suites with `ctest --test-dir logs/smooth-20261117/gpu-vsh-build -C Release --output-on-failure`. Real captured program replay still uses `gpu-vsh-test.exe logs/smooth-20261117/vsh-captures`.
