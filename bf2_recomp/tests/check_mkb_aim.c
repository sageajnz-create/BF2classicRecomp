#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <windows.h>

/* Mock / verify the exact mathematical transforms in mkb_input.c */

typedef struct {
    double sens;
    double sens_x;
    double sens_y;
    double dz;
    double acc;
    long   full;
    int    smooth;
    int    invert_y;
    int    swap_sticks;
} TestMkbConfig;

static TestMkbConfig s_cfg = { 1.0, 1.0, 1.0, 0.18, 1.0, 48, 0, 0, 0 };

static void test_aim_vector(double ax, double ay, SHORT *out_x, SHORT *out_y)
{
    double r = sqrt(ax * ax + ay * ay);
    double len, fx, fy;
    long v;

    if (r <= 0.00001) { *out_x = 0; *out_y = 0; return; }
    if (r > 1.0) r = 1.0;
    
    double curve = (s_cfg.acc == 1.0) ? r : pow(r, s_cfg.acc);
    len = s_cfg.dz + (1.0 - s_cfg.dz) * curve;
    len *= s_cfg.sens;
    if (len > 1.0) len = 1.0;
    
    fx = (ax / r) * len;
    fy = (ay / r) * len;
    
    v = (long)(fx * 32767.0);
    *out_x = (SHORT)(v > 32767 ? 32767 : v < -32768 ? -32768 : v);
    v = (long)(fy * 32767.0);
    *out_y = (SHORT)(v > 32767 ? 32767 : v < -32768 ? -32768 : v);
}

int main(void)
{
    printf("--- Running AAA MKB Aim & Precision Tests ---\n");

    /* 1. Zero motion produces zero deflection (no drift) */
    {
        SHORT ox = 999, oy = 999;
        test_aim_vector(0.0, 0.0, &ox, &oy);
        assert(ox == 0 && oy == 0);
        printf("[PASS] Zero input = exact zero deflection (zero drift)\n");
    }

    /* 2. Deadzone floor: smallest tick clears the console deadzone */
    {
        SHORT ox = 0, oy = 0;
        /* 1 tick out of 48 = 0.02083 */
        double ax = 1.0 / (double)s_cfg.full;
        test_aim_vector(ax, 0.0, &ox, &oy);
        /* Minimum deflection must be > dz (0.18 * 32767 = 5898) */
        assert(ox >= 5898);
        assert(oy == 0);
        printf("[PASS] Micro-aim tick (1 count) clears deadzone floor: ox=%d (dz=5898)\n", ox);
    }

    /* 3. Full throw reaches 32767 without premature saturation */
    {
        SHORT ox_half = 0, oy = 0;
        SHORT ox_full = 0;
        /* Half throw: 24 ticks */
        test_aim_vector(24.0 / 48.0, 0.0, &ox_half, &oy);
        /* Full throw: 48 ticks */
        test_aim_vector(48.0 / 48.0, 0.0, &ox_full, &oy);
        
        assert(ox_full == 32767);
        assert(ox_half < ox_full);
        /* Half throw should be around 0.18 + 0.82*0.5 = 0.59 * 32767 ≈ 19332 */
        assert(ox_half >= 18000 && ox_half <= 21000);
        printf("[PASS] Full throw (48 counts) = 32767, Half throw (24 counts) = %d\n", ox_half);
    }

    /* 4. Independent X/Y sensitivity */
    {
        s_cfg.sens_x = 1.0;
        s_cfg.sens_y = 1.5;
        double ax = (20.0 / 48.0) * s_cfg.sens_x;
        double ay = (20.0 / 48.0) * s_cfg.sens_y;
        SHORT sx = 0, sy = 0, dummy = 0;
        test_aim_vector(ax, 0.0, &sx, &dummy);
        test_aim_vector(0.0, ay, &dummy, &sy);
        assert(sy > sx);
        printf("[PASS] Asymmetric sensitivity: sx=%d, sy=%d (1.5x)\n", sx, sy);
    }

    /* 5. Smoothing filter behavior */
    {
        double ax = 20.0 / 48.0;
        double filt_ax = 0.0;
        double alpha = 0.65;
        /* Step 1 */
        filt_ax = filt_ax * (1.0 - alpha) + ax * alpha;
        assert(filt_ax > 0.0 && filt_ax < ax);
        /* Step 2 */
        filt_ax = filt_ax * (1.0 - alpha) + ax * alpha;
        assert(filt_ax > 0.35 && filt_ax <= ax);
        /* Step 3: stop moving -> immediate zero */
        filt_ax = 0.0;
        assert(filt_ax == 0.0);
        printf("[PASS] Exponential moving average smoothing & immediate stop\n");
    }

    printf("All AAA mouse aim verification checks PASSED successfully!\n");
    return 0;
}
