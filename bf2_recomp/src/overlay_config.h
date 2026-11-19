#ifndef OVERLAY_CONFIG_H
#define OVERLAY_CONFIG_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int   res_scale;        /* 1..4 (640x480 to 2560x1920) */
    char  aspect[16];       /* "16:9", "4:3", "21:9", "32:9" */
    int   vsync;            /* 0 or 1 */
    int   fps_limit;        /* 0, 60, 120, 144, 240 */
    int   cas;              /* 0 or 1 (Contrast Adaptive Sharpening) */
    float mouse_sens;       /* 0.1 .. 10.0 */
    float mouse_sens_x;     /* 0.1 .. 10.0 */
    float mouse_sens_y;     /* 0.1 .. 10.0 */
    float deadzone;         /* 0.0 .. 0.9 */
    int   mouse_smoothing;  /* 0 or 1 */
    int   mouse_invert_y;   /* 0 or 1 */
    int   mouse_full;       /* 8 .. 128 */
    int   show_fps;         /* 0 or 1 */
} OverlayConfig;

/* Initializes cfg with standard recompilation defaults */
void overlay_config_defaults(OverlayConfig *cfg);

/* Clamps all fields to safe, valid ranges */
void overlay_config_clamp(OverlayConfig *cfg);

/* Loads configuration from ini_path. Returns true if file was read. */
bool overlay_config_load(OverlayConfig *cfg, const char *ini_path);

/* Atomically saves configuration to ini_path using a temporary file. */
bool overlay_config_save(const OverlayConfig *cfg, const char *ini_path);

/* Applies configuration to active environment variables and runtime globals */
void overlay_config_apply_to_runtime(const OverlayConfig *cfg);

#ifdef __cplusplus
}
#endif

#endif /* OVERLAY_CONFIG_H */
