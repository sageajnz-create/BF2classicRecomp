# Build the fixed shaders with the Windows SDK. Wine's runtime HLSL compiler
# does not support all the syntax used by these shaders.
function(bf2_combine_shader output)
    set(source "")
    foreach(file IN LISTS ARGN)
        set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${file}")
        file(READ "${file}" code)
        string(APPEND source "${code}\n")
    endforeach()
    file(CONFIGURE OUTPUT "${output}" CONTENT "${source}" @ONLY)
endfunction()

function(bf2_compile_shader target source name entry profile)
    find_program(BF2_FXC NAMES fxc.exe HINTS
        "$ENV{WindowsSdkVerBinPath}/x64"
        "$ENV{ProgramFiles\(x86\)}/Windows Kits/10/bin/${CMAKE_VS_WINDOWS_TARGET_PLATFORM_VERSION}/x64"
        REQUIRED)
    set(header "${CMAKE_CURRENT_BINARY_DIR}/bf2_${name}.h")
    add_custom_command(OUTPUT "${header}"
        COMMAND "${BF2_FXC}" /nologo /Gis /O3 /T "${profile}" /E "${entry}"
                /Fh "${header}" /Vn "bf2_${name}" ${ARGN} "${source}"
        DEPENDS "${source}" "${BF2_FXC}"
        VERBATIM)
    target_sources(${target} PRIVATE "${header}")
endfunction()

function(bf2_world_shaders target)
    set(src "${CMAKE_CURRENT_FUNCTION_LIST_DIR}/../src")
    set(world "${CMAKE_CURRENT_BINARY_DIR}/world_combined.hlsl")
    set(vsh "${CMAKE_CURRENT_BINARY_DIR}/vsh_combined.hlsl")
    bf2_combine_shader("${world}" "${src}/nv2a_combiner.hlsli" "${src}/nv2a_world.hlsl")
    bf2_combine_shader("${vsh}" "${src}/nv2a_vsh_gpu.hlsl" "${src}/nv2a_vsh_gather.hlsli")
    bf2_compile_shader(${target} "${world}" vertex_main vertex_main vs_5_0)
    bf2_compile_shader(${target} "${world}" pixel_main pixel_main ps_5_0)
    bf2_compile_shader(${target} "${world}" pixel_visibility pixel_visibility ps_5_0 /D VISIBILITY_UAV=1)
    bf2_compile_shader(${target} "${world}" vertex_clear vertex_clear vs_5_0)
    bf2_compile_shader(${target} "${world}" pixel_clear pixel_clear ps_5_0)
    bf2_compile_shader(${target} "${vsh}" vs_gather_transform_indexed vs_gather_transform_indexed vs_5_0)
    set(fullscreen "${src}/gpu_fullscreen.hlsl")
    bf2_compile_shader(${target} "${fullscreen}" fullscreen_vs fullscreen_vs vs_5_0)
    bf2_compile_shader(${target} "${fullscreen}" blit_ps blit_ps ps_5_0)
    bf2_compile_shader(${target} "${fullscreen}" present_ps present_ps ps_5_0)
    bf2_compile_shader(${target} "${fullscreen}" cas_ps cas_ps ps_5_0)
endfunction()

function(bf2_resolve_shader target)
    set(src "${CMAKE_CURRENT_FUNCTION_LIST_DIR}/../src")
    set(resolve "${CMAKE_CURRENT_BINARY_DIR}/resolve_combined.hlsl")
    bf2_combine_shader("${resolve}" "${src}/nv2a_combiner.hlsli" "${src}/nv2a_resolve.hlsl")
    bf2_compile_shader(${target} "${resolve}" resolve_shader main cs_5_0)
endfunction()
