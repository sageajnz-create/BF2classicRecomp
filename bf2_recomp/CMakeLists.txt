cmake_minimum_required(VERSION 3.20)

# ============================================================================
# Star Wars: Battlefront II - Native PC Static Recompilation
# ============================================================================

project(swbf2_recomp C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_compile_definitions(
    WIN32_LEAN_AND_MEAN
    NOMINMAX
    _CRT_SECURE_NO_WARNINGS
)

set(XBOXRECOMP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../tools/xboxrecomp" CACHE PATH
    "Path to the xboxrecomp toolkit root directory")

add_subdirectory(${XBOXRECOMP_DIR} ${CMAKE_BINARY_DIR}/xboxrecomp)

# Recompiled generated C sources
file(GLOB RECOMP_GEN_SOURCES CONFIGURE_DEPENDS "src/recomp/gen/*.c")

set(GAME_SOURCES
    src/main.c
    src/recomp_manual.c
    src/gpu_resolve.c
    src/gpu_shader_jit.c
    src/gpu_world.c
    src/host_profile.c
)

function(embed_nv2a_shader name source_var)
    set(combiner "${CMAKE_CURRENT_SOURCE_DIR}/src/nv2a_combiner.hlsli")
    set(shader "${CMAKE_CURRENT_SOURCE_DIR}/src/nv2a_${name}.hlsl")
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${combiner}" "${shader}")
    file(READ "${combiner}" shared_code)
    file(READ "${shader}" shader_code)
    set(source "${shared_code}\n${shader_code}")
    string(REPLACE "\\" "\\\\" source "${source}")
    string(REPLACE "\"" "\\\"" source "${source}")
    string(REPLACE "\r" "" source "${source}")
    string(REPLACE "\n" "\\n\"\n\"" ${source_var} "${source}")
    configure_file(src/gpu_${name}_shader.h.in gpu_${name}_shader.h @ONLY)
    set_property(SOURCE src/gpu_${name}.c APPEND PROPERTY INCLUDE_DIRECTORIES "${CMAKE_CURRENT_BINARY_DIR}")
endfunction()
embed_nv2a_shader(resolve BF2_RESOLVE_SOURCE)
embed_nv2a_shader(world BF2_WORLD_SOURCE)

file(READ "${CMAKE_CURRENT_SOURCE_DIR}/src/nv2a_vsh_gpu.hlsl" vsh_code)
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/src/nv2a_vsh_gather.hlsli" gather_code)
set(vsh_combined "${vsh_code}\n${gather_code}")
string(REPLACE "\\" "\\\\" vsh_combined "${vsh_combined}")
string(REPLACE "\"" "\\\"" vsh_combined "${vsh_combined}")
string(REPLACE "\r" "" vsh_combined "${vsh_combined}")
string(REPLACE "\n" "\\n\"\n\"" BF2_VSH_SOURCE "${vsh_combined}")
configure_file(src/gpu_vsh_shader.h.in gpu_vsh_shader.h @ONLY)
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/nv2a_vsh_gpu.hlsl"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/nv2a_vsh_gather.hlsli")

add_executable(${PROJECT_NAME}
    ${GAME_SOURCES}
    ${RECOMP_GEN_SOURCES}
)

target_link_libraries(${PROJECT_NAME} PRIVATE xboxrecomp)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/recomp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/recomp/gen
    ${XBOXRECOMP_DIR}/include
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    d3d11
    d3dcompiler
    dxgi
    dxguid
    xinput
    winmm
    dbghelp
)

if(MSVC)
    # MSVC's optimizer can spend many minutes on this generated unit alone.
    set_source_files_properties(src/recomp/gen/recomp_0027.c PROPERTIES COMPILE_OPTIONS /Od)

    target_link_options(${PROJECT_NAME} PRIVATE
        /LARGEADDRESSAWARE
        /DEBUG:FULL
        /OPT:REF
        # Identical-code folding merges byte-identical functions, which leaves
        # this app's sampling profiler (host_profile.c) reporting hot code under
        # an unrelated folded neighbour's name. Off, symbols name what ran.
        /OPT:NOICF
    )
    target_compile_options(${PROJECT_NAME} PRIVATE /bigobj /MP)
endif()

# Automatically deploy latest executable and config to game_files
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "$<TARGET_FILE:${PROJECT_NAME}>"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_files/$<TARGET_FILE_NAME:${PROJECT_NAME}>"
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_CURRENT_SOURCE_DIR}/../bf2_recomp.ini"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_files/bf2_recomp.ini"
    COMMENT "Deploying latest swbf2_recomp.exe and config to game_files"
)
