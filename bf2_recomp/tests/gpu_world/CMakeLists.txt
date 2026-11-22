cmake_minimum_required(VERSION 3.20)
project(bf2_world_component C)
set(CMAKE_C_STANDARD 11)
set(game ../..)
set(kernel ../../../tools/xboxrecomp/src/kernel)
add_executable(world-component check.c "${game}/src/gpu_world.c" "${game}/src/gpu_shader_jit.c" "${kernel}/nv2a_combiner.c")
include("${game}/cmake/RendererShaders.cmake")
bf2_world_shaders(world-component)
target_include_directories(world-component PRIVATE "${game}/src" "${CMAKE_CURRENT_BINARY_DIR}" "${kernel}")
target_link_libraries(world-component PRIVATE d3d11 d3dcompiler dxgi dxguid)
target_compile_definitions(world-component PRIVATE _CRT_SECURE_NO_WARNINGS)
enable_testing()
add_test(NAME gpu-world-regression COMMAND world-component)
set_tests_properties(gpu-world-regression PROPERTIES ENVIRONMENT "RECOMP_D3D11_WORLD=snapshot;RECOMP_SHADER_CACHE=0")
# Per-draw occlusion queries are the default (spans measured 3x slower on this
# AMD driver, see logs/gpu60-20261117/NOTES.md); the opt-in span model must
# report identical counts, so cover it explicitly.
add_test(NAME gpu-world-span COMMAND world-component)
set_tests_properties(gpu-world-span PROPERTIES ENVIRONMENT "RECOMP_D3D11_WORLD=snapshot;RECOMP_VISIBILITY_SPAN=1;RECOMP_SHADER_CACHE=0")
# Pipelined queries resolve reports one flush late; check that the same
# pixel counts are eventually written (the fixture has a second flush).
add_test(NAME gpu-world-pipelined COMMAND world-component)
set_tests_properties(gpu-world-pipelined PROPERTIES ENVIRONMENT "RECOMP_D3D11_WORLD=snapshot;RECOMP_PIPELINED_QUERY=1;RECOMP_SHADER_CACHE=0")
# Query-free visibility counting via Early-Z UAV atomics
add_test(NAME gpu-world-uav COMMAND world-component)
set_tests_properties(gpu-world-uav PROPERTIES ENVIRONMENT "RECOMP_D3D11_WORLD=snapshot;RECOMP_VISIBILITY_UAV=1;RECOMP_SHADER_CACHE=0")
# Pipelined Early-Z UAV atomics (double-buffered non-blocking readback)
add_test(NAME gpu-world-uav-pipelined COMMAND world-component)
set_tests_properties(gpu-world-uav-pipelined PROPERTIES ENVIRONMENT "RECOMP_D3D11_WORLD=snapshot;RECOMP_VISIBILITY_UAV=1;RECOMP_PIPELINED_QUERY=1;RECOMP_SHADER_CACHE=0")
# Native 2x HD internal resolution scaling (1280x960) + readback downsample + visibility normalization
add_test(NAME gpu-world-hd COMMAND world-component)
set_tests_properties(gpu-world-hd PROPERTIES ENVIRONMENT "RECOMP_D3D11_WORLD=snapshot;RECOMP_RES_SCALE=2;RECOMP_VISIBILITY_UAV=1;RECOMP_PIPELINED_QUERY=1;RECOMP_SHADER_CACHE=0")
# Generic HLSL interpreter fallback (JIT disabled)
add_test(NAME gpu-world-nojit COMMAND world-component)
set_tests_properties(gpu-world-nojit PROPERTIES ENVIRONMENT "RECOMP_D3D11_WORLD=snapshot;RECOMP_VSH_JIT=0;RECOMP_PS_JIT=0;RECOMP_SHADER_CACHE=0")
