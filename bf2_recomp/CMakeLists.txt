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
    src/cmdline_parser.c
    src/recomp_manual.c
    src/gpu_resolve.c
    src/gpu_shader_jit.c
    src/gpu_world.c
    src/host_profile.c
    src/overlay_config.c
    src/overlay_draw.c
    src/overlay_menu.c
)

add_executable(${PROJECT_NAME}
    ${GAME_SOURCES}
    ${RECOMP_GEN_SOURCES}
)
include(cmake/RendererShaders.cmake)
bf2_world_shaders(${PROJECT_NAME})
bf2_resolve_shader(${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} PRIVATE xboxrecomp)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
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

# Stage a portable runtime for Steam/Proton or the Linux launcher. The user
# supplies the disc files separately in this same directory.
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION .)
install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/../bf2_recomp.ini" DESTINATION .)
install(PROGRAMS "${CMAKE_CURRENT_SOURCE_DIR}/../run_swbf2_linux.sh" DESTINATION .)

# ============================================================================
# Overlay Menu Unit Tests
# ============================================================================
enable_testing()

add_executable(check_overlay_config
    tests/check_overlay_config.c
    src/overlay_config.c
)
target_include_directories(check_overlay_config PRIVATE src)
add_test(NAME check_overlay_config COMMAND check_overlay_config)

add_executable(check_overlay_draw
    tests/check_overlay_draw.c
    src/overlay_draw.c
)
target_include_directories(check_overlay_draw PRIVATE src)
add_test(NAME check_overlay_draw COMMAND check_overlay_draw)

add_executable(check_overlay_widgets
    tests/check_overlay_widgets.c
    src/overlay_menu.c
    src/overlay_draw.c
    src/overlay_config.c
)
target_include_directories(check_overlay_widgets PRIVATE src "${CMAKE_CURRENT_BINARY_DIR}")
target_link_libraries(check_overlay_widgets PRIVATE d3d11 d3dcompiler dxgi)
add_test(NAME check_overlay_widgets COMMAND check_overlay_widgets)
