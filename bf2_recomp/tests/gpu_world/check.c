#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "gpu_world.h"
#include "nv2a_world_backend.h"

enum { PIXELS = NV2A_WORLD_WIDTH * NV2A_WORLD_HEIGHT, SIDE = 32 };
static uint32_t color[PIXELS];
static float depth[PIXELS];
static const Nv2aWorldBackend *backend;
void nv2a_set_world_backend(const Nv2aWorldBackend *value) { backend = value; }
HWND xbox_FramebufferWindowGetHwnd(void) { return NULL; }
void xbox_FramebufferWindowDirectActive(int active) { (void)active; }
int xbox_FramebufferWindowConsumeScreenshot(void) { return 0; }
void xbox_FramebufferWindowSetTitleText(const char *title) { (void)title; }
/* The cubemap fixture decodes linear faces from a host buffer standing in for
 * guest memory; desc.offset is relative to decode_base. */
static const uint8_t *decode_base;
void *xbox_GetMemoryOffset(void) { return (void *)decode_base; }
int nv2a_backend_decode_texture(const Nv2aTexture *d, uint32_t *out)
{
    if (d->color == 0x12 && decode_base) {
        const uint8_t *src = decode_base + d->offset;
        uint32_t pitch = d->pitch ? d->pitch : d->width * 4;
        for (uint32_t y = 0; y < d->height; y++)
            memcpy(out + (size_t)y * d->width, src + (size_t)y * pitch, d->width * 4);
        return 1;
    }
    return 0;
}

static const float points[6][2] = {
    {0,0},{SIDE,0},{0,SIDE},{0,SIDE},{SIDE,0},{SIDE,SIDE}
};
static Nv2aWorldVertex vertices[6];
static void quad(float x, float y, float z, uint32_t argb)
{
    for (unsigned i = 0; i < 6; i++) {
        Nv2aWorldVertex *v = &vertices[i];
        v->pos[0] = x + points[i][0];
        v->pos[1] = y + points[i][1];
        v->pos[2] = z;
        v->pos[3] = 1;
        v->tex[0][0] = points[i][0];
        v->tex[0][1] = points[i][1];
        v->tex[0][3] = 1;
        nv2a_rc_unpack(argb, v->diffuse);
    }
}

static uint8_t stencil[PIXELS];

/* Pipelined queries resolve the previous frame's reports, so the fixture has
 * to flush twice before reading them; the default path is unaffected. */
static void settle_reports(void)
{
    backend->flush_visibility_reports(NV2A_FLUSH_SRC_OTHER);
    if (getenv("RECOMP_PIPELINED_QUERY"))
        backend->flush_visibility_reports(NV2A_FLUSH_SRC_OTHER);
}

static int expect_report(const uint32_t slot[4], uint32_t stamp, uint32_t pixels)
{
    int ok = slot[0] == stamp && !slot[1] && slot[2] == pixels && !slot[3];
    printf("visibility: %u pixels, expected %u, stamp %u, completion %u (%s)\n",
           slot[2], pixels, slot[0], slot[3], ok ? "PASS" : "FAIL");
    return ok;
}

int main(void)
{
    const unsigned sample = NV2A_WORLD_WIDTH + 1;
    const unsigned feedback_sample = 42 * NV2A_WORLD_WIDTH + 42;
    Nv2aCombiner raw = {0};
    Nv2aCombinerProgram program;
    Nv2aRenderState state = {0};
    Nv2aWorldDraw draw = {0};
    uint32_t reports[5][4];
    int ok = 1;
    memset(reports, 0xff, sizeof reports);
    for (unsigned i = 0; i < PIXELS; i++) {
        color[i] = 0xFF101010;
        depth[i] = 3.4e38f;
    }
    bf2_register_gpu_world();
    if (!backend)
        return 20;
    raw.final0 = 4;
    raw.final1 = 0x1400;
    nv2a_rc_prepare(&program, &raw);
    state.color_mask = 0x01010101;
    state.depth_test_enable = state.depth_write = 1;
    state.depth_func = 0x201;
    draw.vertices = vertices;
    draw.vertex_count = 6;
    draw.program = &program;
    draw.state = &state;
    draw.color = color;
    draw.depth = depth;
    draw.stencil = stencil;
    draw.depth_stride = NV2A_WORLD_WIDTH;
    draw.visibility = 1;
    quad(0, 0, 500, 0xFFA02010);
    if (!backend->draw(&draw) || !backend->queue_visibility_report((uint8_t *)reports[0], 5, 7))
        return 21;
    quad(0, 0, 750, 0xFF102060);
    if (!backend->draw(&draw) || !backend->queue_visibility_report((uint8_t *)reports[1], 6, 0))
        return 22;
    backend->clear_visibility();
    state.alpha_test_enable = 1;
    state.alpha_func = 0x204;
    state.alpha_ref = 128;
    quad(0, 0, 250, 0x50102060);
    if (!backend->draw(&draw) || !backend->queue_visibility_report((uint8_t *)reports[2], 7, 0))
        return 23;
    quad(0, 0, 250, 0xFFA02010);
    if (!backend->draw(&draw) || !backend->queue_visibility_report((uint8_t *)reports[3], 8, 0))
        return 24;
    ok &= reports[0][3] == UINT32_MAX;
    settle_reports();
    ok &= expect_report(reports[0], 5, 1031);
    ok &= expect_report(reports[1], 6, 1024);
    ok &= expect_report(reports[2], 7, 0);
    ok &= expect_report(reports[3], 8, 1024);
    /* Pipelined mode resets its accumulator when events move to the pending
     * frame, so a report with no intervening draw is not queued; the live
     * guest always reports right after a test. Skip that edge case here. */
    if (!getenv("RECOMP_PIPELINED_QUERY")) {
        if (!backend->queue_visibility_report((uint8_t *)reports[4], 9, 3))
            return 25;
        settle_reports();
        ok &= expect_report(reports[4], 9, 1027);
    }

    raw.stage_program = 1;
    raw.final0 = 8;
    raw.final1 = 0x1800;
    nv2a_rc_prepare(&program, &raw);
    draw.visibility = 0;
    draw.depth = NULL;
    state.depth_test_enable = state.depth_write = state.alpha_test_enable = 0;
    draw.texture[0].desc = (Nv2aTexture){0, NV2A_WORLD_WIDTH, NV2A_WORLD_HEIGHT,
        NV2A_WORLD_WIDTH * 4, 0x12, 3, 3, 1, 0};
    draw.texture[0].bytes = (const uint8_t *)color;
    draw.texture[0].byte_count = sizeof color;
    quad(40, 40, 0, 0xFFFFFFFF);
    if (!backend->draw(&draw))
        return 26;
    ok &= color[feedback_sample] == 0xFF101010;
    backend->sync(NULL, 0, NULL, 1);
    printf("draw sample %08X, feedback sample %08X, outside %08X, depth %.1f\n",
           color[sample], color[feedback_sample], color[PIXELS-1], depth[sample]);
    ok &= color[sample] == 0xFFA02010 && color[feedback_sample] == 0xFFA02010 &&
          color[PIXELS-1] == 0xFF101010 && depth[sample] == 250;

    raw.stage_program = 0;
    raw.final0 = 4;
    raw.final1 = 0x1400;
    nv2a_rc_prepare(&program, &raw);
    memset(&draw.texture[0], 0, sizeof draw.texture[0]);
    draw.depth = depth;
    state.color_mask = 0;
    state.stencil_enable = 1;
    state.stencil_func = 0x207;
    state.stencil_func_mask = state.stencil_write_mask = 0xff;
    state.stencil_fail = state.stencil_zfail = 0x1e00;
    state.stencil_zpass = 0x1e01;
    state.stencil_ref = 0xab;
    quad(100, 100, 0, 0xFF005500);
    if (!backend->draw(&draw))
        return 27;
    backend->sync(NULL, 0, NULL, 1);
    const unsigned masked = 103 * NV2A_WORLD_WIDTH + 103;
    const unsigned outside = 99 * NV2A_WORLD_WIDTH + 103;
    ok &= stencil[masked] == 0xab && !stencil[outside] && color[masked] == 0xFF101010;
    state.color_mask = 0x01010101;
    state.stencil_func = 0x202;
    state.stencil_zpass = 0x1e00;
    quad(98, 98, 0, 0xFF005500);
    if (!backend->draw(&draw))
        return 28;
    backend->sync(NULL, 0, NULL, 1);
    printf("stencil after readback/reupload: inside %02X, outside %02X, draw %08X/%08X\n",
           stencil[masked], stencil[outside], color[masked], color[outside]);
    ok &= color[masked] == 0xFF005500 && color[outside] == 0xFF101010;
    state.stencil_enable = 0;
    state.depth_write = 1;
    draw.depth = depth;
    quad(200, 200, 172, 0xFF2050A0);
    if (!backend->draw(&draw))
        return 29;
    const unsigned resident = 211 * NV2A_WORLD_WIDTH + 211;
    Nv2aWorldRegion region = {(const uint8_t *)&reports[0], sizeof reports};
    backend->sync(&region, 1, NULL, 0);
    ok &= color[resident] == 0xFF101010 && depth[resident] > 1e30f;
    backend->sync(NULL, 0, NULL, 0);
    ok &= color[resident] == 0xFF2050A0 && depth[resident] > 1e30f;
    backend->clear_depth(depth, 3, 922, 42);
    backend->sync(&region, 1, depth, 0);
    ok &= depth[resident] == 922 && stencil[resident] == 42;
    printf("selective sync and resident clear: color %08X, depth %.1f, stencil %u\n",
           color[resident], depth[resident], stencil[resident]);
    if (!backend->draw(&draw) || !backend->clear_color(color, 0x53BEEFFE, 0x01000000, NV2A_WORLD_WIDTH, NV2A_WORLD_HEIGHT))
        return 30;
    backend->sync(NULL, 0, NULL, 0);
    ok &= color[resident] == 0x532050A0 && color[0] == 0x53A02010 &&
          color[PIXELS-1] == 0x53101010;
    printf("alpha-only clear: center %08X, first %08X, last %08X\n",
           color[resident], color[0], color[PIXELS-1]);
    /* Mutate texels outside the three former cache-signature samples. */
    static uint32_t texture[SIDE * SIDE];
    for (unsigned i = 0; i < SIDE * SIDE; i++) texture[i] = 0xFF112233;
    raw.stage_program = 1;
    raw.final0 = 8;
    raw.final1 = 0x1800;
    nv2a_rc_prepare(&program, &raw);
    state.depth_write = state.depth_test_enable = state.stencil_enable = 0;
    draw.depth = NULL;
    draw.texture[0].desc = (Nv2aTexture){1234, SIDE, SIDE, SIDE * 4, 0x12, 3, 3, 1, 0};
    draw.texture[0].bytes = (const uint8_t *)texture;
    draw.texture[0].byte_count = sizeof texture;
    quad(0, 0, 0, 0xFFFFFFFF);
    if (!backend->draw(&draw)) return 31;
    backend->sync(NULL, 0, NULL, 0);
    ok &= color[5 * NV2A_WORLD_WIDTH + 5] == 0xFF112233;
    for (unsigned y = 3; y < 9; y++)
        for (unsigned x = 3; x < 9; x++) texture[y * SIDE + x] = 0xFFABCDEF;
    if (!backend->draw(&draw)) return 32;
    backend->sync(NULL, 0, NULL, 0);
    printf("mutable texture: %08X, expected FFABCDEF\n", color[5 * NV2A_WORLD_WIDTH + 5]);
    ok &= color[5 * NV2A_WORLD_WIDTH + 5] == 0xFFABCDEF;
    /* PROJECT3D (stage program 2) samples like PROJECT2D in the CPU evaluator,
     * which divides by w. Doubling the coordinate with a matching w must
     * therefore land on the same texel: 5,5 is inside the mutated patch, while
     * skipping the divide would read 11,11 and get the base colour. */
    raw.stage_program = 2;
    nv2a_rc_prepare(&program, &raw);
    quad(0, 0, 0, 0xFFFFFFFF);
    for (unsigned i = 0; i < 6; i++) {
        vertices[i].tex[0][0] *= 2.0f;
        vertices[i].tex[0][1] *= 2.0f;
        vertices[i].tex[0][3] = 2.0f;
    }
    if (!backend->draw(&draw)) return 35;
    backend->sync(NULL, 0, NULL, 0);
    printf("project3d stage: %08X, expected FFABCDEF\n", color[5 * NV2A_WORLD_WIDTH + 5]);
    ok &= color[5 * NV2A_WORLD_WIDTH + 5] == 0xFFABCDEF;
    raw.stage_program = 1;
    nv2a_rc_prepare(&program, &raw);
    SYSTEM_INFO system;
    GetSystemInfo(&system);
    uint8_t *guarded = VirtualAlloc(NULL, system.dwPageSize * 2,
                                    MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
    DWORD old_protect;
    if (!guarded || !VirtualProtect(guarded + system.dwPageSize,
                                    system.dwPageSize, PAGE_NOACCESS, &old_protect))
        return 33;
    uint32_t *tiny = (uint32_t *)(guarded + system.dwPageSize - 8);
    tiny[0] = tiny[1] = 0xFF123456;
    draw.texture[0].desc = (Nv2aTexture){5678, 2, 1, 8, 0x12, 3, 3, 1, 0};
    draw.texture[0].bytes = (const uint8_t *)tiny;
    draw.texture[0].byte_count = 8;
    if (!backend->draw(&draw)) return 34;
    backend->sync(NULL, 0, NULL, 0);
    printf("guarded eight-byte texture: %08X, expected FF123456\n", color[sample]);
    ok &= color[sample] == 0xFF123456;
    VirtualFree(guarded, 0, MEM_RELEASE);

    /* CUBEMAP (stage program mode 3): the world shader selects the face with
     * the CPU evaluator's exact math. Six solid faces verify the face order
     * (+X,-X,+Y,-Y,+Z,-Z); a marker texel on +X verifies the (sc,tc)
     * orientation, so a flipped v or a swapped face would read the wrong
     * colour. */
    {
        enum { CSIDE = 16, CFACE = CSIDE * CSIDE * 4 };
        static uint32_t cube[6 * CSIDE * CSIDE];
        static const uint32_t face_color[6] = {
            0xFFFF0000, 0xFF00FF00, 0xFF0000FF, 0xFFFFFF00, 0xFFFF00FF, 0xFF00FFFF
        };
        static const float dir[6][3] = {
            {1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}
        };
        for (unsigned f = 0; f < 6; f++)
            for (unsigned p = 0; p < CSIDE * CSIDE; p++)
                cube[f * CSIDE * CSIDE + p] = face_color[f];
        cube[4 * CSIDE + 12] = 0xFF123456;      /* +X face, texel (12,4) */
        decode_base = (const uint8_t *)cube;
        raw.stage_program = 3u << 5;            /* stage 1 = CUBEMAP */
        raw.final0 = 9;                         /* RGB out = t1 */
        raw.final1 = 0x1900;                    /* alpha out = t1 */
        nv2a_rc_prepare(&program, &raw);
        state.depth_write = state.depth_test_enable = state.stencil_enable = 0;
        state.alpha_test_enable = 0;
        state.color_mask = 0x01010101;
        draw.depth = NULL;
        draw.visibility = 0;
        memset(&draw.texture[0], 0, sizeof draw.texture[0]);
        draw.texture[1].desc = (Nv2aTexture){0, CSIDE, CSIDE, CSIDE * 4, 0x12,
                                             3, 3, 1, 0, 1, CFACE};
        draw.texture[1].bytes = (const uint8_t *)cube;
        draw.texture[1].byte_count = sizeof cube;
        draw.texture[1].normalized = 1;
        draw.texture[1].bilinear = 0;
        for (unsigned f = 0; f < 6; f++) {
            quad(10 + f * 50, 300, 0, 0xFFFFFFFF);
            for (unsigned i = 0; i < 6; i++) {
                vertices[i].tex[1][0] = dir[f][0];
                vertices[i].tex[1][1] = dir[f][1];
                vertices[i].tex[1][2] = dir[f][2];
                vertices[i].tex[1][3] = 1;
            }
            if (!backend->draw(&draw)) return 40;
        }
        /* +X marker: uv=(12.5/16,4.5/16) needs sc/ma=0.5625, tc/ma=-0.4375;
         * +X maps sc=-z, tc=-y, so dir=(1, 0.4375, -0.5625). */
        quad(310, 300, 0, 0xFFFFFFFF);
        for (unsigned i = 0; i < 6; i++) {
            vertices[i].tex[1][0] = 1.0f;
            vertices[i].tex[1][1] = 0.4375f;
            vertices[i].tex[1][2] = -0.5625f;
            vertices[i].tex[1][3] = 1;
        }
        if (!backend->draw(&draw)) return 41;
        backend->sync(NULL, 0, NULL, 0);
        for (unsigned f = 0; f < 6; f++) {
            unsigned px = (10 + f * 50 + 5) + 305 * NV2A_WORLD_WIDTH;
            printf("cube face %u: %08X, expected %08X\n", f, color[px], face_color[f]);
            ok &= color[px] == face_color[f];
        }
        unsigned marker = 315 + 305 * NV2A_WORLD_WIDTH;
        printf("cube +X marker: %08X, expected FF123456\n", color[marker]);
        ok &= color[marker] == 0xFF123456;
        decode_base = NULL;
    }

    /* A single occlusion query can cover several draws
     * (RECOMP_VISIBILITY_SPAN): a report must equal the sum of the pixels each
     * draw would count on its own, and a report in the middle of a span must
     * split it. Two non-overlapping 32x32 quads count 2048 in one span. */
    {
        memset(&draw.texture[0], 0, sizeof draw.texture[0]);
        memset(&draw.texture[1], 0, sizeof draw.texture[1]);
        raw.stage_program = 0;
        raw.final0 = 4;
        raw.final1 = 0x1400;
        nv2a_rc_prepare(&program, &raw);
        state.depth_test_enable = state.depth_write = 0;
        state.alpha_test_enable = 0;
        /* Shaded, like the live visibility passes: a draw with no colour
         * writes, no depth writes and no pixel shader is not rasterised at
         * all on this driver, so it can never produce a count. */
        state.color_mask = 0x01010101;
        draw.depth = depth;
        draw.visibility = 1;
        backend->clear_visibility();
        quad(0, 0, 0, 0xFFFFFFFF);
        if (!backend->draw(&draw)) return 42;
        quad(SIDE, 0, 0, 0xFFFFFFFF);
        if (!backend->draw(&draw)) return 43;
        if (!backend->queue_visibility_report((uint8_t *)reports[0], 10, 0)) return 44;
        quad(2 * SIDE, 0, 0, 0xFFFFFFFF);
        if (!backend->draw(&draw)) return 45;
        if (!backend->queue_visibility_report((uint8_t *)reports[1], 11, 0)) return 46;
        settle_reports();
        ok &= expect_report(reports[0], 10, 2048);
        ok &= expect_report(reports[1], 11, 3072);
    }

    /* Unshaded bounding-box visibility passes (RECOMP_VISIBILITY_UAV):
     * A bounding-box occlusion test draws an untextured, unshaded box with
     * color_mask == 0, depth_write == 0, and depth_test_enable == 1.
     * We draw an occluder at z=500 with depth write, then test an occluded quad
     * at z=750 (expects 0 pixels) and a visible quad at z=250 (expects 1024 pixels). */
    {
        memset(&draw.texture[0], 0, sizeof draw.texture[0]);
        memset(&draw.texture[1], 0, sizeof draw.texture[1]);
        raw.stage_program = 0;
        raw.final0 = 4;
        raw.final1 = 0x1400;
        nv2a_rc_prepare(&program, &raw);

        state.color_mask = 0x01010101;
        state.depth_test_enable = 1;
        state.depth_write = 1;
        state.depth_func = 0x201; /* LESS */
        state.alpha_test_enable = 0;
        draw.visibility = 0;
        draw.depth = depth;
        backend->clear_depth(depth, 3, 10000.0f, 0);
        quad(0, 0, 500, 0xFFFFFFFF);
        if (!backend->draw(&draw)) return 50;

        state.color_mask = 0;
        state.depth_write = 0;
        state.depth_test_enable = 1;
        draw.visibility = 1;
        backend->clear_visibility();

        quad(0, 0, 750, 0xFFFFFFFF);
        if (!backend->draw(&draw)) return 51;
        if (!backend->queue_visibility_report((uint8_t *)reports[0], 20, 0)) return 52;

        quad(0, 0, 250, 0xFFFFFFFF);
        if (!backend->draw(&draw)) return 53;
        if (!backend->queue_visibility_report((uint8_t *)reports[1], 21, 0)) return 54;

        settle_reports();
        ok &= expect_report(reports[0], 20, 0);
        ok &= expect_report(reports[1], 21, 1024);
    }
    return !ok;
}

