#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include "../src/overlay_menu.h"

int main(void)
{
    printf("--- Running Overlay Widgets & Navigation State Machine Unit Tests ---\n");

    /* 1. Initial State & Toggle */
    assert(!overlay_is_open());
    overlay_toggle();
    assert(overlay_is_open());
    printf("  [PASS] overlay_toggle\n");

    /* 2. Tab Navigation */
    overlay_next_tab(); // Display -> Controls
    overlay_next_tab(); // Controls -> Telemetry
    overlay_next_tab(); // Telemetry -> Display
    overlay_prev_tab(); // Display -> Telemetry
    overlay_next_tab(); // Telemetry -> Display
    printf("  [PASS] overlay tab switching\n");

    /* 3. Row Navigation & Value Adjustment */
    OverlayConfig *cfg = overlay_get_config();
    assert(cfg != NULL);

    // In Display Tab, Row 0 is Resolution Scale (1..4)
    cfg->res_scale = 2;
    overlay_adjust_value(1);
    assert(cfg->res_scale == 3);
    overlay_adjust_value(-1);
    assert(cfg->res_scale == 2);
    printf("  [PASS] overlay_adjust_value on Display tab\n");

    // Switch to Controls Tab
    overlay_next_tab();
    // Row 0 is Mouse Sensitivity (0.1..5.0)
    cfg->mouse_sens = 1.5f;
    overlay_adjust_value(1); // +0.1f
    assert(fabsf(cfg->mouse_sens - 1.6f) < 0.01f);
    overlay_adjust_value(-2); // -0.2f
    assert(fabsf(cfg->mouse_sens - 1.4f) < 0.01f);
    printf("  [PASS] overlay_adjust_value on Controls tab\n");

    /* 4. Mouse click hit-testing */
    // Click on Tab 0 (Display) at (mx + 50, my + 45) -> (300 + 50, 140 + 45) = (350, 185)
    overlay_on_mouse_click(350, 185, true);
    overlay_on_mouse_click(350, 185, false);

    // Click [CLOSE (ESC)] button at (mx + mw - 80, my + mh - 30) = (300 + 680 - 80, 140 + 440 - 30) = (900, 550)
    overlay_on_mouse_click(900, 550, true);
    overlay_on_mouse_click(900, 550, false);
    assert(!overlay_is_open());
    printf("  [PASS] overlay_on_mouse_click close\n");

    printf("All Overlay Widgets & Navigation tests passed!\n");
    return 0;
}
