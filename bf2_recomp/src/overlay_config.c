#include "overlay_config.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

extern void mkb_apply_live_config(double sens, double sens_x, double sens_y, double dz, int smooth, int invert_y, long full);

void overlay_config_defaults(OverlayConfig *cfg)
{
    if (!cfg) return;
    cfg->res_scale = 2;
    strncpy(cfg->aspect, "16:9", sizeof(cfg->aspect) - 1);
    cfg->aspect[sizeof(cfg->aspect) - 1] = '\0';
    cfg->vsync = 0;
    cfg->fps_limit = 0;
    cfg->cas = 1;
    cfg->mouse_sens = 1.0f;
    cfg->mouse_sens_x = 1.0f;
    cfg->mouse_sens_y = 1.0f;
    cfg->deadzone = 0.18f;
    cfg->mouse_smoothing = 0;
    cfg->mouse_invert_y = 0;
    cfg->mouse_full = 48;
    cfg->show_fps = 1;
}

static float clamp_f(float val, float min_v, float max_v)
{
    if (val < min_v) return min_v;
    if (val > max_v) return max_v;
    return val;
}

static int clamp_i(int val, int min_v, int max_v)
{
    if (val < min_v) return min_v;
    if (val > max_v) return max_v;
    return val;
}

void overlay_config_clamp(OverlayConfig *cfg)
{
    if (!cfg) return;
    cfg->res_scale = clamp_i(cfg->res_scale, 1, 4);
    cfg->vsync = cfg->vsync ? 1 : 0;
    cfg->fps_limit = clamp_i(cfg->fps_limit, 0, 360);
    cfg->cas = cfg->cas ? 1 : 0;
    cfg->mouse_sens = clamp_f(cfg->mouse_sens, 0.1f, 10.0f);
    cfg->mouse_sens_x = clamp_f(cfg->mouse_sens_x, 0.1f, 10.0f);
    cfg->mouse_sens_y = clamp_f(cfg->mouse_sens_y, 0.1f, 10.0f);
    cfg->deadzone = clamp_f(cfg->deadzone, 0.0f, 0.9f);
    cfg->mouse_smoothing = cfg->mouse_smoothing ? 1 : 0;
    cfg->mouse_invert_y = cfg->mouse_invert_y ? 1 : 0;
    cfg->mouse_full = clamp_i(cfg->mouse_full, 8, 128);
    cfg->show_fps = cfg->show_fps ? 1 : 0;
}

static char *trim_whitespace(char *str)
{
    char *end;
    while (isspace((unsigned char)*str)) str++;
    if (*str == 0) return str;
    end = str + strlen(str) - 1;
    while (end > str && isspace((unsigned char)*end)) end--;
    end[1] = '\0';
    return str;
}

bool overlay_config_load(OverlayConfig *cfg, const char *ini_path)
{
    if (!cfg || !ini_path) return false;
    FILE *f = fopen(ini_path, "r");
    if (!f) return false;

    char line[256];
    char current_section[64] = "";

    while (fgets(line, sizeof(line), f)) {
        char *p = trim_whitespace(line);
        if (*p == ';' || *p == '#' || *p == '\0') continue;

        if (*p == '[' && strchr(p, ']')) {
            char *close = strchr(p, ']');
            *close = '\0';
            strncpy(current_section, p + 1, sizeof(current_section) - 1);
            current_section[sizeof(current_section) - 1] = '\0';
            continue;
        }

        char *eq = strchr(p, '=');
        if (!eq) continue;
        *eq = '\0';
        char *key = trim_whitespace(p);
        char *val = trim_whitespace(eq + 1);

        if (!strcmp(key, "aspect")) {
            strncpy(cfg->aspect, val, sizeof(cfg->aspect) - 1);
            cfg->aspect[sizeof(cfg->aspect) - 1] = '\0';
        } else if (!strcmp(key, "res_scale")) {
            cfg->res_scale = atoi(val);
        } else if (!strcmp(key, "vsync")) {
            cfg->vsync = atoi(val);
        } else if (!strcmp(key, "fps_limit")) {
            cfg->fps_limit = atoi(val);
        } else if (!strcmp(key, "cas")) {
            cfg->cas = atoi(val);
        } else if (!strcmp(key, "show_fps")) {
            cfg->show_fps = atoi(val);
        } else if (!strcmp(key, "mouse_sens")) {
            cfg->mouse_sens = (float)atof(val);
        } else if (!strcmp(key, "mouse_sens_x")) {
            cfg->mouse_sens_x = (float)atof(val);
        } else if (!strcmp(key, "mouse_sens_y")) {
            cfg->mouse_sens_y = (float)atof(val);
        } else if (!strcmp(key, "deadzone")) {
            cfg->deadzone = (float)atof(val);
        } else if (!strcmp(key, "mouse_smoothing")) {
            cfg->mouse_smoothing = atoi(val);
        } else if (!strcmp(key, "mouse_invert_y")) {
            cfg->mouse_invert_y = atoi(val);
        } else if (!strcmp(key, "mouse_full")) {
            cfg->mouse_full = atoi(val);
        }
    }

    fclose(f);
    overlay_config_clamp(cfg);
    return true;
}

bool overlay_config_save(const OverlayConfig *cfg, const char *ini_path)
{
    if (!cfg || !ini_path) return false;

    char tmp_path[MAX_PATH];
    snprintf(tmp_path, sizeof(tmp_path), "%s.tmp", ini_path);

    FILE *fin = fopen(ini_path, "r");
    FILE *fout = fopen(tmp_path, "w");
    if (!fout) {
        if (fin) fclose(fin);
        return false;
    }

    if (!fin) {
        /* Write fresh INI if original does not exist */
        fprintf(fout, "; Star Wars: Battlefront II - Recompilation Settings\n\n");
        fprintf(fout, "[Graphics]\n");
        fprintf(fout, "aspect=%s\n", cfg->aspect);
        fprintf(fout, "res_scale=%d\n", cfg->res_scale);
        fprintf(fout, "vsync=%d\n", cfg->vsync);
        fprintf(fout, "fps_limit=%d\n", cfg->fps_limit);
        fprintf(fout, "cas=%d\n", cfg->cas);
        fprintf(fout, "show_fps=%d\n\n", cfg->show_fps);
        fprintf(fout, "[Controls]\n");
        fprintf(fout, "mouse_input=1\n");
        fprintf(fout, "mouse_sens=%.2f\n", cfg->mouse_sens);
        fprintf(fout, "mouse_sens_x=%.2f\n", cfg->mouse_sens_x);
        fprintf(fout, "mouse_sens_y=%.2f\n", cfg->mouse_sens_y);
        fprintf(fout, "deadzone=%.2f\n", cfg->deadzone);
        fprintf(fout, "mouse_smoothing=%d\n", cfg->mouse_smoothing);
        fprintf(fout, "mouse_invert_y=%d\n", cfg->mouse_invert_y);
        fprintf(fout, "mouse_full=%d\n", cfg->mouse_full);
        fclose(fout);
        return MoveFileExA(tmp_path, ini_path, MOVEFILE_REPLACE_EXISTING) != 0;
    }

    /* Preserve existing file comments and structure while updating values */
    char line[512];
    char current_section[64] = "";
    bool seen_graphics = false, seen_controls = false;
    bool wrote_aspect = false, wrote_res_scale = false, wrote_vsync = false;
    bool wrote_fps_limit = false, wrote_cas = false, wrote_show_fps = false;
    bool wrote_sens = false, wrote_sens_x = false, wrote_sens_y = false;
    bool wrote_deadzone = false, wrote_smoothing = false, wrote_invert_y = false, wrote_full = false;

    #define FLUSH_SECTION_KEYS() do { \
        if (!strcmp(current_section, "Graphics")) { \
            if (!wrote_aspect) { fprintf(fout, "aspect=%s\n", cfg->aspect); wrote_aspect = true; } \
            if (!wrote_res_scale) { fprintf(fout, "res_scale=%d\n", cfg->res_scale); wrote_res_scale = true; } \
            if (!wrote_vsync) { fprintf(fout, "vsync=%d\n", cfg->vsync); wrote_vsync = true; } \
            if (!wrote_fps_limit) { fprintf(fout, "fps_limit=%d\n", cfg->fps_limit); wrote_fps_limit = true; } \
            if (!wrote_cas) { fprintf(fout, "cas=%d\n", cfg->cas); wrote_cas = true; } \
            if (!wrote_show_fps) { fprintf(fout, "show_fps=%d\n", cfg->show_fps); wrote_show_fps = true; } \
        } else if (!strcmp(current_section, "Controls")) { \
            if (!wrote_sens) { fprintf(fout, "mouse_sens=%.2f\n", cfg->mouse_sens); wrote_sens = true; } \
            if (!wrote_sens_x) { fprintf(fout, "mouse_sens_x=%.2f\n", cfg->mouse_sens_x); wrote_sens_x = true; } \
            if (!wrote_sens_y) { fprintf(fout, "mouse_sens_y=%.2f\n", cfg->mouse_sens_y); wrote_sens_y = true; } \
            if (!wrote_deadzone) { fprintf(fout, "deadzone=%.2f\n", cfg->deadzone); wrote_deadzone = true; } \
            if (!wrote_smoothing) { fprintf(fout, "mouse_smoothing=%d\n", cfg->mouse_smoothing); wrote_smoothing = true; } \
            if (!wrote_invert_y) { fprintf(fout, "mouse_invert_y=%d\n", cfg->mouse_invert_y); wrote_invert_y = true; } \
            if (!wrote_full) { fprintf(fout, "mouse_full=%d\n", cfg->mouse_full); wrote_full = true; } \
        } \
    } while (0)

    while (fgets(line, sizeof(line), fin)) {
        char trimmed[512];
        strncpy(trimmed, line, sizeof(trimmed) - 1);
        trimmed[sizeof(trimmed) - 1] = '\0';
        char *p = trim_whitespace(trimmed);

        if (*p == '[' && strchr(p, ']')) {
            FLUSH_SECTION_KEYS();
            char *close = strchr(p, ']');
            *close = '\0';
            strncpy(current_section, p + 1, sizeof(current_section) - 1);
            current_section[sizeof(current_section) - 1] = '\0';
            if (!strcmp(current_section, "Graphics")) seen_graphics = true;
            if (!strcmp(current_section, "Controls")) seen_controls = true;
            fputs(line, fout);
            continue;
        }

        if (*p == ';' || *p == '#' || *p == '\0') {
            fputs(line, fout);
            continue;
        }

        char *eq = strchr(p, '=');
        if (!eq) {
            fputs(line, fout);
            continue;
        }

        *eq = '\0';
        char *key = trim_whitespace(p);

        if (!strcmp(key, "aspect")) {
            fprintf(fout, "aspect=%s\n", cfg->aspect);
            wrote_aspect = true;
        } else if (!strcmp(key, "res_scale")) {
            fprintf(fout, "res_scale=%d\n", cfg->res_scale);
            wrote_res_scale = true;
        } else if (!strcmp(key, "vsync")) {
            fprintf(fout, "vsync=%d\n", cfg->vsync);
            wrote_vsync = true;
        } else if (!strcmp(key, "fps_limit")) {
            fprintf(fout, "fps_limit=%d\n", cfg->fps_limit);
            wrote_fps_limit = true;
        } else if (!strcmp(key, "cas")) {
            fprintf(fout, "cas=%d\n", cfg->cas);
            wrote_cas = true;
        } else if (!strcmp(key, "show_fps")) {
            fprintf(fout, "show_fps=%d\n", cfg->show_fps);
            wrote_show_fps = true;
        } else if (!strcmp(key, "mouse_sens")) {
            fprintf(fout, "mouse_sens=%.2f\n", cfg->mouse_sens);
            wrote_sens = true;
        } else if (!strcmp(key, "mouse_sens_x")) {
            fprintf(fout, "mouse_sens_x=%.2f\n", cfg->mouse_sens_x);
            wrote_sens_x = true;
        } else if (!strcmp(key, "mouse_sens_y")) {
            fprintf(fout, "mouse_sens_y=%.2f\n", cfg->mouse_sens_y);
            wrote_sens_y = true;
        } else if (!strcmp(key, "deadzone")) {
            fprintf(fout, "deadzone=%.2f\n", cfg->deadzone);
            wrote_deadzone = true;
        } else if (!strcmp(key, "mouse_smoothing")) {
            fprintf(fout, "mouse_smoothing=%d\n", cfg->mouse_smoothing);
            wrote_smoothing = true;
        } else if (!strcmp(key, "mouse_invert_y")) {
            fprintf(fout, "mouse_invert_y=%d\n", cfg->mouse_invert_y);
            wrote_invert_y = true;
        } else if (!strcmp(key, "mouse_full")) {
            fprintf(fout, "mouse_full=%d\n", cfg->mouse_full);
            wrote_full = true;
        } else {
            fputs(line, fout);
        }
    }

    FLUSH_SECTION_KEYS();

    if (!seen_graphics) {
        fprintf(fout, "\n[Graphics]\n");
        strncpy(current_section, "Graphics", sizeof(current_section) - 1);
        FLUSH_SECTION_KEYS();
    }
    if (!seen_controls) {
        fprintf(fout, "\n[Controls]\n");
        strncpy(current_section, "Controls", sizeof(current_section) - 1);
        FLUSH_SECTION_KEYS();
    }
    #undef FLUSH_SECTION_KEYS

    fclose(fin);
    fclose(fout);

    return MoveFileExA(tmp_path, ini_path, MOVEFILE_REPLACE_EXISTING) != 0;
}

void overlay_config_apply_to_runtime(const OverlayConfig *cfg)
{
    if (!cfg) return;

    char buf[64];
    snprintf(buf, sizeof(buf), "%d", cfg->res_scale);
    _putenv_s("RECOMP_RES_SCALE", buf);

    _putenv_s("RECOMP_ASPECT", cfg->aspect);

    snprintf(buf, sizeof(buf), "%d", cfg->vsync);
    _putenv_s("RECOMP_PRESENT_VSYNC", buf);

    snprintf(buf, sizeof(buf), "%d", cfg->fps_limit);
    _putenv_s("RECOMP_FPS_LIMIT", buf);

    snprintf(buf, sizeof(buf), "%d", cfg->cas);
    _putenv_s("RECOMP_CAS", buf);

    snprintf(buf, sizeof(buf), "%.2f", cfg->mouse_sens);
    _putenv_s("RECOMP_MKB_SENS", buf);

    snprintf(buf, sizeof(buf), "%.2f", cfg->mouse_sens_x);
    _putenv_s("RECOMP_MKB_SENS_X", buf);

    snprintf(buf, sizeof(buf), "%.2f", cfg->mouse_sens_y);
    _putenv_s("RECOMP_MKB_SENS_Y", buf);

    snprintf(buf, sizeof(buf), "%.2f", cfg->deadzone);
    _putenv_s("RECOMP_MKB_DZ", buf);
    _putenv_s("RECOMP_MKB_DEADZONE", buf);

    snprintf(buf, sizeof(buf), "%d", cfg->mouse_smoothing);
    _putenv_s("RECOMP_MKB_SMOOTH", buf);

    snprintf(buf, sizeof(buf), "%d", cfg->mouse_invert_y);
    _putenv_s("RECOMP_MKB_INVERT_Y", buf);

    snprintf(buf, sizeof(buf), "%d", cfg->mouse_full);
    _putenv_s("RECOMP_MKB_FULL", buf);

    /* Update live input tuning in mkb_input engine */
    mkb_apply_live_config((double)cfg->mouse_sens, (double)cfg->mouse_sens_x, (double)cfg->mouse_sens_y,
                          (double)cfg->deadzone, cfg->mouse_smoothing, cfg->mouse_invert_y, (long)cfg->mouse_full);
}
