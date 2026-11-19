#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include "../src/overlay_config.h"

int main(void)
{
    printf("--- Running Overlay Config Unit Tests ---\n");

    /* 1. Defaults verification */
    OverlayConfig cfg;
    overlay_config_defaults(&cfg);
    assert(cfg.res_scale == 2);
    assert(strcmp(cfg.aspect, "16:9") == 0);
    assert(cfg.vsync == 0);
    assert(cfg.fps_limit == 0);
    assert(cfg.cas == 1);
    assert(fabsf(cfg.mouse_sens - 1.0f) < 0.001f);
    assert(fabsf(cfg.mouse_sens_x - 1.0f) < 0.001f);
    assert(fabsf(cfg.mouse_sens_y - 1.0f) < 0.001f);
    assert(fabsf(cfg.deadzone - 0.18f) < 0.001f);
    assert(cfg.mouse_smoothing == 0);
    assert(cfg.mouse_invert_y == 0);
    assert(cfg.mouse_full == 48);
    assert(cfg.show_fps == 1);
    printf("  [PASS] overlay_config_defaults\n");

    /* 2. Round-trip Save and Load */
    const char *test_ini = "test_overlay_config.ini";
    cfg.res_scale = 3;
    snprintf(cfg.aspect, sizeof(cfg.aspect), "21:9");
    cfg.vsync = 1;
    cfg.fps_limit = 144;
    cfg.cas = 0;
    cfg.mouse_sens = 2.5f;
    cfg.mouse_sens_x = 1.25f;
    cfg.mouse_sens_y = 0.85f;
    cfg.deadzone = 0.22f;
    cfg.mouse_smoothing = 1;
    cfg.mouse_invert_y = 1;
    cfg.mouse_full = 64;
    cfg.show_fps = 0;

    bool saved = overlay_config_save(&cfg, test_ini);
    assert(saved);

    OverlayConfig loaded;
    overlay_config_defaults(&loaded);
    bool loaded_ok = overlay_config_load(&loaded, test_ini);
    assert(loaded_ok);

    assert(loaded.res_scale == 3);
    assert(strcmp(loaded.aspect, "21:9") == 0);
    assert(loaded.vsync == 1);
    assert(loaded.fps_limit == 144);
    assert(loaded.cas == 0);
    assert(fabsf(loaded.mouse_sens - 2.5f) < 0.01f);
    assert(fabsf(loaded.mouse_sens_x - 1.25f) < 0.01f);
    assert(fabsf(loaded.mouse_sens_y - 0.85f) < 0.01f);
    assert(fabsf(loaded.deadzone - 0.22f) < 0.01f);
    assert(loaded.mouse_smoothing == 1);
    assert(loaded.mouse_invert_y == 1);
    assert(loaded.mouse_full == 64);
    assert(loaded.show_fps == 0);
    printf("  [PASS] overlay_config_save and overlay_config_load round-trip\n");

    /* 3. Clamping of extreme values */
    loaded.res_scale = 99;
    loaded.mouse_sens = -10.0f;
    loaded.deadzone = 2.5f;
    loaded.mouse_full = 500;
    overlay_config_clamp(&loaded);
    assert(loaded.res_scale == 4);
    assert(loaded.mouse_sens >= 0.1f);
    assert(loaded.deadzone <= 0.9f);
    assert(loaded.mouse_full == 128);
    printf("  [PASS] overlay_config_clamp\n");

    /* 4. Apply to runtime & environment */
    overlay_config_apply_to_runtime(&cfg);
    const char *env_res = getenv("RECOMP_RES_SCALE");
    assert(env_res && strcmp(env_res, "3") == 0);
    const char *env_aspect = getenv("RECOMP_ASPECT");
    assert(env_aspect && strcmp(env_aspect, "21:9") == 0);
    const char *env_vsync = getenv("RECOMP_PRESENT_VSYNC");
    assert(env_vsync && strcmp(env_vsync, "1") == 0);
    printf("  [PASS] overlay_config_apply_to_runtime\n");

    remove(test_ini);
    printf("All Overlay Config tests passed!\n");
    return 0;
}
