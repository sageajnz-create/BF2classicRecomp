#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "../src/overlay_draw.h"

int main(void)
{
    printf("--- Running Overlay Draw & Font Batcher Unit Tests ---\n");

    /* 1. Batch initialization and lifecycle */
    OverlayBatch batch;
    overlay_batch_init(&batch, 16);
    assert(batch.capacity >= 16 * 6);
    assert(batch.count == 0);
    assert(batch.vertices != NULL);
    printf("  [PASS] overlay_batch_init\n");

    /* 2. overlay_draw_rect emits 2 triangles (6 vertices) */
    overlay_draw_rect(&batch, 10.0f, 20.0f, 100.0f, 50.0f, 0xFF38BDF8);
    assert(batch.count == 6);
    assert(batch.vertices[0].x == 10.0f && batch.vertices[0].y == 20.0f);
    assert(batch.vertices[1].x == 110.0f && batch.vertices[1].y == 20.0f);
    assert(batch.vertices[2].x == 10.0f && batch.vertices[2].y == 70.0f);
    assert(batch.vertices[0].color == 0xFF38BDF8);
    printf("  [PASS] overlay_draw_rect\n");

    /* 3. overlay_draw_rect_outline emits 4 borders (24 vertices) */
    uint32_t prev_count = batch.count;
    overlay_draw_rect_outline(&batch, 50.0f, 50.0f, 200.0f, 100.0f, 2.0f, 0xFFFFFFFF);
    assert(batch.count == prev_count + 24);
    printf("  [PASS] overlay_draw_rect_outline\n");

    /* 4. overlay_draw_text emits 6 vertices per printable glyph */
    overlay_batch_clear(&batch);
    assert(batch.count == 0);
    overlay_draw_text(&batch, 0.0f, 0.0f, 1.0f, "STAR WARS", 0xFFFFFFFF);
    // "STAR WARS" is 9 chars with 1 space -> 8 printable chars * 6 = 48 vertices
    assert(batch.count == 8 * 6);
    printf("  [PASS] overlay_draw_text\n");

    /* 5. Font atlas generation */
    uint8_t atlas[128 * 128];
    memset(atlas, 0, sizeof(atlas));
    overlay_font_build_atlas(atlas, 128, 128);
    // Solid white pixel at (0, 0)
    assert(atlas[0] == 255);
    // Non-zero font glyph pixels exist in atlas
    int non_zero = 0;
    for (int i = 1; i < 128 * 128; i++) {
        if (atlas[i] > 0) non_zero++;
    }
    assert(non_zero > 500);
    printf("  [PASS] overlay_font_build_atlas\n");

    overlay_batch_free(&batch);
    assert(batch.vertices == NULL);
    assert(batch.count == 0);
    printf("All Overlay Draw tests passed!\n");
    return 0;
}
