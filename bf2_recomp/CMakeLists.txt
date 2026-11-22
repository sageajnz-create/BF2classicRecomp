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

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    set(XBOXRECOMP_BUILD_D3D8 OFF)
endif()
add_subdirectory(${XBOXRECOMP_DIR} ${CMAKE_BINARY_DIR}/xboxrecomp)

# Recompiled generated C sources
file(GLOB RECOMP_GEN_SOURCES CONFIGURE_DEPENDS "src/recomp/gen/*.c")

set(GAME_SOURCES
    src/main.c
    src/cmdline_parser.c
    src/recomp_manual.c
)
if(WIN32)
    list(APPEND GAME_SOURCES
        src/gpu_resolve.c
        src/gpu_shader_jit.c
        src/gpu_world.c
        src/host_profile.c
        src/overlay_config.c
        src/overlay_draw.c
        src/overlay_menu.c
    )
endif()

add_executable(${PROJECT_NAME}
    ${GAME_SOURCES}
    ${RECOMP_GEN_SOURCES}
)
target_link_libraries(${PROJECT_NAME} PRIVATE xboxrecomp)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/recomp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/recomp/gen
    ${XBOXRECOMP_DIR}/include
)

if(WIN32)
    include(cmake/RendererShaders.cmake)
    bf2_world_shaders(${PROJECT_NAME})
    bf2_resolve_shader(${PROJECT_NAME})
    target_link_libraries(${PROJECT_NAME} PRIVATE
        d3d11 d3dcompiler dxgi dxguid xinput winmm dbghelp
    )
endif()

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

# Automatically deploy the Windows build to the development game directory.
if(WIN32)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E make_directory
            "${CMAKE_CURRENT_SOURCE_DIR}/game_files"
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "$<TARGET_FILE:${PROJECT_NAME}>"
            "${CMAKE_CURRENT_SOURCE_DIR}/game_files/$<TARGET_FILE_NAME:${PROJECT_NAME}>"
        COMMAND ${CMAKE_COMMAND}
            "-DDEFAULT_INI=${CMAKE_CURRENT_SOURCE_DIR}/../bf2_recomp.ini"
            "-DGAME_DIR=${CMAKE_CURRENT_SOURCE_DIR}/game_files"
            -P "${CMAKE_CURRENT_SOURCE_DIR}/cmake/SeedGameConfig.cmake"
        COMMENT "Deploying swbf2_recomp.exe to game_files"
        VERBATIM
    )
endif()

# Stage the host's runtime. The Windows package also includes the Wine helper. The user
# supplies the disc files separately in this same directory.
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION .)
install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/../bf2_recomp.ini" DESTINATION .)
if(WIN32)
    install(PROGRAMS "${CMAKE_CURRENT_SOURCE_DIR}/../run_swbf2_linux.sh" DESTINATION .)
endif()

# ============================================================================
# Overlay Menu Unit Tests
# ============================================================================
enable_testing()

add_executable(check_cli_args tests/check_cli_args.c src/cmdline_parser.c)
add_test(NAME check_cli_args COMMAND check_cli_args)

if(WIN32)
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
endif()
