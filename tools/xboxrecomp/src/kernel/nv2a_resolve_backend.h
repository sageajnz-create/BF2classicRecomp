#ifndef NV2A_RESOLVE_BACKEND_H
#define NV2A_RESOLVE_BACKEND_H

#include "nv2a_combiner.h"

typedef struct {
    float pos[4], diffuse[4], specular[4], tex[4][4];
} Nv2aResolveVertex;

typedef struct {
    const uint32_t *pixels;
    uint32_t addr_u, addr_v, border;
    int bilinear, border_color;
} Nv2aResolveTexture;

/* A two-triangle pass on a 640x480 linear A8R8G8B8 surface. Active textures
 * use the same layout and describe the data before the draw. A texture may
 * point to the destination itself. */
typedef struct {
    const Nv2aCombinerProgram *program;
    Nv2aResolveVertex vertex[6];
    float inverse[2][4], vertex_fog[2][4], fog_color[2][4];
    Nv2aResolveTexture texture[4];
    uint32_t *target;
    uint32_t x, y, width, height;
    enum { NV2A_RESOLVE_REPLACE, NV2A_RESOLVE_ADD, NV2A_RESOLVE_SRC_ALPHA } blend;
} Nv2aResolveDraw;

enum { NV2A_RESOLVE_WIDTH = 640, NV2A_RESOLVE_HEIGHT = 480 };

/* The callback is synchronous on the pushbuffer thread. Return 1 after
 * committing the completed color surface, or 0 without touching it. Depth
 * and visibility counts remain the executor's responsibility. */
void nv2a_set_resolve_backend(int (*draw)(const Nv2aResolveDraw *));

#endif
