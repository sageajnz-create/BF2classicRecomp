cmake_minimum_required(VERSION 3.20)
project(bf2_world_component C)
set(CMAKE_C_STANDARD 11)
set(game ../..)
set(kernel ../../../tools/xboxrecomp/src/kernel)
file(READ "${game}/src/nv2a_combiner.hlsli" shared_code)
file(READ "${game}/src/nv2a_world.hlsl" shader_code)
set(source "${shared_code}\n${shader_code}")
string(REPLACE "\\" "\\\\" source "${source}")
string(REPLACE "\"" "\\\"" source "${source}")
string(REPLACE "\r" "" source "${source}")
string(REPLACE "\n" "\\n\"\n\"" BF2_WORLD_SOURCE "${source}")
configure_file("${game}/src/gpu_world_shader.h.in" gpu_world_shader.h @ONLY)

file(READ "${game}/src/nv2a_vsh_gpu.hlsl" vsh_code)
file(READ "${game}/src/nv2a_vsh_gather.hlsli" gather_code)
set(vsh_combined "${vsh_code}\n${gather_code}")
string(REPLACE "\\" "\\\\" vsh_combined "${vsh_combined}")
string(REPLACE "\"" "\\\"" vsh_combined "${vsh_combined}")
string(REPLACE "\r" "" vsh_combined "${vsh_combined}")
string(REPLACE "\n" "\\n\"\n\"" BF2_VSH_SOURCE "${vsh_combined}")
configure_file("${game}/src/gpu_vsh_shader.h.in" gpu_vsh_shader.h @ONLY)

set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
    "${game}/src/nv2a_combiner.hlsli" "${game}/src/nv2a_world.hlsl"
    "${game}/src/nv2a_vsh_gpu.hlsl" "${game}/src/nv2a_vsh_gather.hlsli")
add_executable(world-component check.c "${game}/src/gpu_world.c" "${kernel}/nv2a_combiner.c")
target_include_directories(world-component PRIVATE "${game}/src" "${CMAKE_CURRENT_BINARY_DIR}" "${kernel}")
target_link_libraries(world-component PRIVATE d3d11 d3dcompiler dxgi dxguid)
target_compile_definitions(world-component PRIVATE _CRT_SECURE_NO_WARNINGS)
enable_testing()
add_test(NAME gpu-world-regression COMMAND world-component)
set_tests_properties(gpu-world-regression PROPERTIES ENVIRONMENT "RECOMP_D3D11_WORLD=snapshot")
# Per-draw occlusion queries are the default (spans measured 3x slower on this
# AMD driver, see logs/gpu60-20261117/NOTES.md); the opt-in span model must
# report identical counts, so cover it explicitly.
add_test(NAME gpu-world-span COMMAND world-component)
set_tests_properties(gpu-world-span PROPERTIES ENVIRONMENT "RECOMP_D3D11_WORLD=snapshot;RECOMP_VISIBILITY_SPAN=1")
# Pipelined queries resolve reports one flush late; check that the same
# pixel counts are eventually written (the fixture has a second flush).
add_test(NAME gpu-world-pipelined COMMAND world-component)
set_tests_properties(gpu-world-pipelined PROPERTIES ENVIRONMENT "RECOMP_D3D11_WORLD=snapshot;RECOMP_PIPELINED_QUERY=1")
# Query-free visibility counting via Early-Z UAV atomics
add_test(NAME gpu-world-uav COMMAND world-component)
set_tests_properties(gpu-world-uav PROPERTIES ENVIRONMENT "RECOMP_D3D11_WORLD=snapshot;RECOMP_VISIBILITY_UAV=1")
