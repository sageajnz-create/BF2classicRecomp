#ifndef OVERLAY_DRAW_H
#define OVERLAY_DRAW_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    float x, y;
    float u, v;
    uint32_t color; /* RGBA8 (0xAABBGGRR in memory on x86 little endian) */
} OverlayVertex;

typedef struct {
    OverlayVertex *vertices;
    uint32_t count;
    uint32_t capacity;
} OverlayBatch;

/* Initialize batch with capacity for initial_quads */
void overlay_batch_init(OverlayBatch *batch, uint32_t initial_quads);

/* Reset vertex count to 0 without freeing memory */
void overlay_batch_clear(OverlayBatch *batch);

/* Free allocated vertex array */
void overlay_batch_free(OverlayBatch *batch);

/* Reserve capacity for additional quads */
void overlay_batch_reserve(OverlayBatch *batch, uint32_t additional_quads);

/* Draw solid colored filled rectangle */
void overlay_draw_rect(OverlayBatch *batch, float x, float y, float w, float h, uint32_t color);

/* Draw rectangle outline */
void overlay_draw_rect_outline(OverlayBatch *batch, float x, float y, float w, float h, float thickness, uint32_t color);

/* Draw formatted text string using embedded 8x12 font atlas */
void overlay_draw_text(OverlayBatch *batch, float x, float y, float scale, const char *text, uint32_t color);

/* Generates 128x128 8-bit luminance texture atlas */
void overlay_font_build_atlas(uint8_t *atlas_out, uint32_t width, uint32_t height);

#ifdef __cplusplus
}
#endif

#endif /* OVERLAY_DRAW_H */
