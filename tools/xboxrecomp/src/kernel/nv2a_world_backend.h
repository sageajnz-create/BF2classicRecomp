#ifndef NV2A_WORLD_BACKEND_H
#define NV2A_WORLD_BACKEND_H

#include "nv2a_backend.h"
#include "nv2a_combiner.h"
#include <stddef.h>

enum { NV2A_WORLD_WIDTH = 640, NV2A_WORLD_HEIGHT = 480 };

typedef struct {
    float pos[4], diffuse[4], specular[4], tex[4][4], fog;
    float padding[3];
} Nv2aWorldVertex;

typedef struct {
    Nv2aTexture desc;
    const uint8_t *bytes;
    uint32_t byte_count, border;
    int normalized, bilinear, border_color;
} Nv2aWorldTexture;

typedef struct {
    const Nv2aWorldVertex *vertices;
    uint32_t vertex_count;
    const Nv2aCombinerProgram *program;
    Nv2aWorldTexture texture[4];
    const Nv2aRenderState *state;
    float fog_color[4];
    uint32_t *color;
    float *depth;
    uint8_t *stencil;
    uint32_t depth_stride;
    int visibility;
    uint32_t width, height;
} Nv2aWorldDraw;

typedef struct {
    const uint32_t *instructions;
    uint32_t instruction_count;
    const float (*constants)[4];
    uint32_t constant_count;
    const uint32_t *vertex_words;
    uint32_t vertex_bytes;
    uint32_t attributes[16][4];
    const uint32_t *indices;
    uint32_t index_count;
    float attribute_defaults[16][4];
    uint32_t stream_mask;
    uint32_t start_slot;
    uint32_t program_revision;
    uint32_t const_revision;
    float aa_scale[2];
    float fog_param[2];
    uint32_t fog_mode;

    const Nv2aCombinerProgram *program;
    Nv2aWorldTexture texture[4];
    const Nv2aRenderState *state;
    float fog_color[4];
    uint32_t *color;
    float *depth;
    uint8_t *stencil;
    uint32_t depth_stride;
    int visibility;
    uint32_t width, height;
} Nv2aWorldDrawProgram;

typedef struct {
    const uint8_t *bytes;
    size_t size;
} Nv2aWorldRegion;

enum {
    NV2A_FLUSH_SRC_INTERNAL  = 0,
    NV2A_FLUSH_SRC_SEGMENT   = 1,
    NV2A_FLUSH_SRC_SEMAPHORE = 2,
    NV2A_FLUSH_SRC_OTHER     = 3
};

typedef struct {
    /* Submit in guest order. Returning 0 leaves this draw for the CPU. */
    int (*draw)(const Nv2aWorldDraw *);
    int (*draw_program)(const Nv2aWorldDrawProgram *);
    /* Commit and invalidate the indicated CPU surfaces. NULL regions means
     * all color surfaces; a NULL depth selects no depth unless all_depth. */
    void (*sync)(const Nv2aWorldRegion *regions, unsigned count, const float *depth, int all_depth);
    int (*clear_color)(uint32_t *target, uint32_t argb, uint32_t mask, uint32_t width, uint32_t height);
    void (*clear_depth)(const float *depth, uint32_t flags, float value, uint8_t stencil);
    void (*clear_visibility)(void);
    /* Return 1 when the backend owns completion of this report. */
    int (*queue_visibility_report)(uint8_t *destination, uint64_t stamp, uint32_t cpu_pixels);
    void (*flush_visibility_reports)(int src);
    /* Direct swapchain presentation. Returning 1 indicates the backend presented directly. */
    int (*present)(const void *target, uint32_t pitch);
} Nv2aWorldBackend;

void nv2a_set_world_backend(const Nv2aWorldBackend *backend);
void nv2a_flush_world_visibility_reports(int src);

#endif
