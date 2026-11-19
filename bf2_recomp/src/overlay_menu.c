#define CINTERFACE
#define COBJMACROS
#include "overlay_menu.h"
#include "overlay_draw.h"
#include "overlay_config.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <d3d11.h>
#include <d3dcompiler.h>

typedef enum {
    TAB_DISPLAY = 0,
    TAB_CONTROLS = 1,
    TAB_TELEMETRY = 2,
    TAB_COUNT
} OverlayTab;

static struct {
    ID3D11Device           *device;
    ID3D11DeviceContext    *context;
    ID3D11VertexShader     *vs;
    ID3D11PixelShader      *ps;
    ID3D11InputLayout      *layout;
    ID3D11Buffer           *vb;
    ID3D11Buffer           *cb_screen;
    ID3D11Texture2D        *atlas_tex;
    ID3D11ShaderResourceView *atlas_srv;
    ID3D11SamplerState     *sampler;
    ID3D11BlendState       *blend_state;

    bool                    is_open;
    OverlayTab              active_tab;
    int                     selected_row;
    OverlayConfig           config;

    int                     mouse_x;
    int                     mouse_y;
    bool                    mouse_down;
    int                     dragging_slider; /* -1 for none */

    char                    status_msg[64];
    uint32_t                status_timer;

    OverlayBatch            batch;
} s_overlay = {0};

/* HLSL for 2D UI presentation */
static const char s_overlay_hlsl[] =
    "cbuffer ScreenParams : register(b0) {\n"
    "    float2 g_screen_dim;\n"
    "    float2 g_pad;\n"
    "};\n"
    "struct VSInput {\n"
    "    float2 pos : POSITION;\n"
    "    float2 uv  : TEXCOORD0;\n"
    "    float4 col : COLOR0;\n"
    "};\n"
    "struct PSInput {\n"
    "    float4 pos : SV_Position;\n"
    "    float2 uv  : TEXCOORD0;\n"
    "    float4 col : COLOR0;\n"
    "};\n"
    "PSInput vs_main(VSInput input) {\n"
    "    PSInput output;\n"
    "    output.pos = float4(input.pos.x / (g_screen_dim.x * 0.5) - 1.0,\n"
    "                        1.0 - input.pos.y / (g_screen_dim.y * 0.5),\n"
    "                        0.0, 1.0);\n"
    "    output.uv  = input.uv;\n"
    "    output.col = input.col;\n"
    "    return output;\n"
    "}\n"
    "Texture2D g_atlas : register(t0);\n"
    "SamplerState g_sampler : register(s0);\n"
    "float4 ps_main(PSInput input) : SV_Target {\n"
    "    float a = g_atlas.Sample(g_sampler, input.uv).r;\n"
    "    return input.col * float4(1.0, 1.0, 1.0, a);\n"
    "}\n";

bool overlay_is_open(void)
{
    return s_overlay.is_open;
}

void overlay_set_open(bool open)
{
    if (s_overlay.is_open != open) {
        s_overlay.is_open = open;
        if (open) {
            overlay_config_load(&s_overlay.config, "bf2_recomp.ini");
            s_overlay.dragging_slider = -1;
            s_overlay.status_msg[0] = '\0';
        } else {
            overlay_config_save(&s_overlay.config, "bf2_recomp.ini");
            overlay_config_apply_to_runtime(&s_overlay.config);
        }
    }
}

void overlay_toggle(void)
{
    overlay_set_open(!s_overlay.is_open);
}

OverlayConfig *overlay_get_config(void)
{
    return &s_overlay.config;
}

bool overlay_init(ID3D11Device *device, ID3D11DeviceContext *context)
{
    if (!device || !context) return false;
    overlay_shutdown();

    s_overlay.device = device;
    s_overlay.context = context;
    overlay_config_defaults(&s_overlay.config);
    overlay_config_load(&s_overlay.config, "bf2_recomp.ini");

    /* 1. Compile Shaders */
    ID3DBlob *vs_blob = NULL, *ps_blob = NULL;
    HRESULT hr = D3DCompile(s_overlay_hlsl, sizeof(s_overlay_hlsl) - 1,
                            "overlay_shaders", NULL, NULL,
                            "vs_main", "vs_5_0", 0, 0, &vs_blob, NULL);
    if (FAILED(hr) || !vs_blob) return false;

    hr = D3DCompile(s_overlay_hlsl, sizeof(s_overlay_hlsl) - 1,
                    "overlay_shaders", NULL, NULL,
                    "ps_main", "ps_5_0", 0, 0, &ps_blob, NULL);
    if (FAILED(hr) || !ps_blob) {
        ID3D10Blob_Release(vs_blob);
        return false;
    }

    hr = ID3D11Device_CreateVertexShader(device, ID3D10Blob_GetBufferPointer(vs_blob),
                                         ID3D10Blob_GetBufferSize(vs_blob), NULL, &s_overlay.vs);
    hr = ID3D11Device_CreatePixelShader(device, ID3D10Blob_GetBufferPointer(ps_blob),
                                        ID3D10Blob_GetBufferSize(ps_blob), NULL, &s_overlay.ps);

    /* 2. Input Layout */
    D3D11_INPUT_ELEMENT_DESC layout_desc[] = {
        { "POSITION", 0, DXGI_FORMAT_R32G32_FLOAT,       0, 0,  D3D11_INPUT_PER_VERTEX_DATA, 0 },
        { "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,       0, 8,  D3D11_INPUT_PER_VERTEX_DATA, 0 },
        { "COLOR",    0, DXGI_FORMAT_R8G8B8A8_UNORM,     0, 16, D3D11_INPUT_PER_VERTEX_DATA, 0 },
    };
    ID3D11Device_CreateInputLayout(device, layout_desc, 3,
                                  ID3D10Blob_GetBufferPointer(vs_blob),
                                  ID3D10Blob_GetBufferSize(vs_blob),
                                  &s_overlay.layout);
    ID3D10Blob_Release(vs_blob);
    ID3D10Blob_Release(ps_blob);

    /* 3. Screen Constant Buffer */
    D3D11_BUFFER_DESC cbd = {0};
    cbd.ByteWidth = 16;
    cbd.Usage = D3D11_USAGE_DYNAMIC;
    cbd.BindFlags = D3D11_BIND_CONSTANT_BUFFER;
    cbd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    ID3D11Device_CreateBuffer(device, &cbd, NULL, &s_overlay.cb_screen);

    /* 4. Dynamic Vertex Buffer (1024 quads = 6144 vertices) */
    D3D11_BUFFER_DESC vbd = {0};
    vbd.ByteWidth = 1024 * 6 * sizeof(OverlayVertex);
    vbd.Usage = D3D11_USAGE_DYNAMIC;
    vbd.BindFlags = D3D11_BIND_VERTEX_BUFFER;
    vbd.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;
    ID3D11Device_CreateBuffer(device, &vbd, NULL, &s_overlay.vb);

    /* 5. Font Atlas Texture & SRV (128x128 R8_UNORM) */
    uint8_t atlas_raw[128 * 128];
    overlay_font_build_atlas(atlas_raw, 128, 128);

    D3D11_TEXTURE2D_DESC td = {0};
    td.Width = 128;
    td.Height = 128;
    td.MipLevels = 1;
    td.ArraySize = 1;
    td.Format = DXGI_FORMAT_R8_UNORM;
    td.SampleDesc.Count = 1;
    td.Usage = D3D11_USAGE_IMMUTABLE;
    td.BindFlags = D3D11_BIND_SHADER_RESOURCE;

    D3D11_SUBRESOURCE_DATA srd = {0};
    srd.pSysMem = atlas_raw;
    srd.SysMemPitch = 128;
    ID3D11Device_CreateTexture2D(device, &td, &srd, &s_overlay.atlas_tex);
    if (s_overlay.atlas_tex) {
        ID3D11Device_CreateShaderResourceView(device, (ID3D11Resource *)s_overlay.atlas_tex,
                                             NULL, &s_overlay.atlas_srv);
    }

    /* 6. Sampler (Point / Clamp) */
    D3D11_SAMPLER_DESC smpd = {0};
    smpd.Filter = D3D11_FILTER_MIN_MAG_MIP_POINT;
    smpd.AddressU = smpd.AddressV = smpd.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
    smpd.MaxLOD = D3D11_FLOAT32_MAX;
    ID3D11Device_CreateSamplerState(device, &smpd, &s_overlay.sampler);

    /* 7. Alpha Blend State */
    D3D11_BLEND_DESC bld = {0};
    bld.RenderTarget[0].BlendEnable = TRUE;
    bld.RenderTarget[0].SrcBlend = D3D11_BLEND_SRC_ALPHA;
    bld.RenderTarget[0].DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
    bld.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD;
    bld.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
    bld.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_ZERO;
    bld.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
    bld.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;
    ID3D11Device_CreateBlendState(device, &bld, &s_overlay.blend_state);

    overlay_batch_init(&s_overlay.batch, 512);
    return true;
}

void overlay_shutdown(void)
{
    overlay_batch_free(&s_overlay.batch);
    if (s_overlay.blend_state) { ID3D11BlendState_Release(s_overlay.blend_state); s_overlay.blend_state = NULL; }
    if (s_overlay.sampler)     { ID3D11SamplerState_Release(s_overlay.sampler); s_overlay.sampler = NULL; }
    if (s_overlay.atlas_srv)   { ID3D11ShaderResourceView_Release(s_overlay.atlas_srv); s_overlay.atlas_srv = NULL; }
    if (s_overlay.atlas_tex)   { ID3D11Texture2D_Release(s_overlay.atlas_tex); s_overlay.atlas_tex = NULL; }
    if (s_overlay.cb_screen)   { ID3D11Buffer_Release(s_overlay.cb_screen); s_overlay.cb_screen = NULL; }
    if (s_overlay.vb)          { ID3D11Buffer_Release(s_overlay.vb); s_overlay.vb = NULL; }
    if (s_overlay.layout)      { ID3D11InputLayout_Release(s_overlay.layout); s_overlay.layout = NULL; }
    if (s_overlay.ps)          { ID3D11PixelShader_Release(s_overlay.ps); s_overlay.ps = NULL; }
    if (s_overlay.vs)          { ID3D11VertexShader_Release(s_overlay.vs); s_overlay.vs = NULL; }
}

void overlay_next_tab(void)
{
    s_overlay.active_tab = (OverlayTab)((s_overlay.active_tab + 1) % TAB_COUNT);
    s_overlay.selected_row = 0;
}

void overlay_prev_tab(void)
{
    s_overlay.active_tab = (OverlayTab)((s_overlay.active_tab + TAB_COUNT - 1) % TAB_COUNT);
    s_overlay.selected_row = 0;
}

void overlay_navigate(int delta_row)
{
    int max_rows = (s_overlay.active_tab == TAB_DISPLAY) ? 5 :
                   (s_overlay.active_tab == TAB_CONTROLS) ? 7 : 2;
    s_overlay.selected_row += delta_row;
    if (s_overlay.selected_row < 0) s_overlay.selected_row = max_rows - 1;
    if (s_overlay.selected_row >= max_rows) s_overlay.selected_row = 0;
}

void overlay_adjust_value(int delta)
{
    OverlayConfig *c = &s_overlay.config;
    if (s_overlay.active_tab == TAB_DISPLAY) {
        switch (s_overlay.selected_row) {
            case 0: c->res_scale = (c->res_scale + delta); break;
            case 1: {
                static const char *aspects[] = { "16:9", "4:3", "21:9", "32:9" };
                int idx = 0;
                for (int i = 0; i < 4; i++) {
                    if (!strcmp(c->aspect, aspects[i])) { idx = i; break; }
                }
                idx = (idx + delta + 4) % 4;
                strncpy(c->aspect, aspects[idx], sizeof(c->aspect) - 1);
                break;
            }
            case 2: c->vsync = !c->vsync; break;
            case 3: {
                static const int limits[] = { 0, 60, 120, 144, 240 };
                int idx = 0;
                for (int i = 0; i < 5; i++) {
                    if (c->fps_limit == limits[i]) { idx = i; break; }
                }
                idx = (idx + delta + 5) % 5;
                c->fps_limit = limits[idx];
                break;
            }
            case 4: c->cas = !c->cas; break;
        }
    } else if (s_overlay.active_tab == TAB_CONTROLS) {
        switch (s_overlay.selected_row) {
            case 0: c->mouse_sens += (float)delta * 0.1f; break;
            case 1: c->mouse_sens_x += (float)delta * 0.1f; break;
            case 2: c->mouse_sens_y += (float)delta * 0.1f; break;
            case 3: c->deadzone += (float)delta * 0.02f; break;
            case 4: c->mouse_smoothing = !c->mouse_smoothing; break;
            case 5: c->mouse_invert_y = !c->mouse_invert_y; break;
            case 6: c->mouse_full += delta * 4; break;
        }
    }
    overlay_config_clamp(c);
    overlay_config_apply_to_runtime(c);
}

void overlay_activate(void)
{
    overlay_adjust_value(1);
}

void overlay_set_mouse_pos(int mouse_x, int mouse_y)
{
    s_overlay.mouse_x = mouse_x;
    s_overlay.mouse_y = mouse_y;
}

static bool point_in_rect(int px, int py, float rx, float ry, float rw, float rh)
{
    return (px >= rx && px <= rx + rw && py >= ry && py <= ry + rh);
}

void overlay_on_mouse_click(int mouse_x, int mouse_y, bool down)
{
    s_overlay.mouse_x = mouse_x;
    s_overlay.mouse_y = mouse_y;
    s_overlay.mouse_down = down;

    if (!down) {
        s_overlay.dragging_slider = -1;
        return;
    }

    /* Modal bounds centered on 1280x720 base */
    float mw = 680.0f;
    float mh = 440.0f;
    float mx = (1280.0f - mw) * 0.5f;
    float my = (720.0f - mh) * 0.5f;

    /* Close button [X] at top-right */
    if (point_in_rect(mouse_x, mouse_y, mx + mw - 34.0f, my + 6.0f, 26.0f, 22.0f)) {
        overlay_set_open(false);
        return;
    }

    /* Tab buttons */
    float tab_y = my + 38.0f;
    float tab_w = 140.0f;
    if (point_in_rect(mouse_x, mouse_y, mx + 20.0f, tab_y, tab_w, 26.0f)) {
        s_overlay.active_tab = TAB_DISPLAY;
        s_overlay.selected_row = 0;
        return;
    }
    if (point_in_rect(mouse_x, mouse_y, mx + 170.0f, tab_y, tab_w, 26.0f)) {
        s_overlay.active_tab = TAB_CONTROLS;
        s_overlay.selected_row = 0;
        return;
    }
    if (point_in_rect(mouse_x, mouse_y, mx + 320.0f, tab_y, tab_w, 26.0f)) {
        s_overlay.active_tab = TAB_TELEMETRY;
        s_overlay.selected_row = 0;
        return;
    }

    /* Save to INI button */
    float btn_w = 180.0f;
    float btn_h = 30.0f;
    float save_btn_x = mx + 20.0f;
    float save_btn_y = my + mh - 44.0f;
    if (point_in_rect(mouse_x, mouse_y, save_btn_x, save_btn_y, btn_w, btn_h)) {
        if (overlay_config_save(&s_overlay.config, "bf2_recomp.ini")) {
            strncpy(s_overlay.status_msg, "[+] SETTINGS SAVED TO bf2_recomp.ini", sizeof(s_overlay.status_msg) - 1);
            s_overlay.status_timer = 120;
        }
        overlay_config_apply_to_runtime(&s_overlay.config);
        return;
    }

    /* Close button */
    float close_btn_x = mx + mw - 140.0f;
    if (point_in_rect(mouse_x, mouse_y, close_btn_x, save_btn_y, 120.0f, btn_h)) {
        overlay_set_open(false);
        return;
    }

    /* Row clicking & slider drag detection */
    float content_y = my + 80.0f;
    float row_h = 38.0f;
    int max_rows = (s_overlay.active_tab == TAB_DISPLAY) ? 5 :
                   (s_overlay.active_tab == TAB_CONTROLS) ? 7 : 0;

    for (int r = 0; r < max_rows; r++) {
        float ry = content_y + (float)r * row_h;
        if (point_in_rect(mouse_x, mouse_y, mx + 20.0f, ry, mw - 40.0f, row_h - 4.0f)) {
            s_overlay.selected_row = r;

            /* Check if clicking on slider or toggle area (right column: mx + 320 to mx + mw - 40) */
            float control_x = mx + 320.0f;
            float control_w = mw - 360.0f;
            if (point_in_rect(mouse_x, mouse_y, control_x, ry, control_w, row_h - 4.0f)) {
                if (s_overlay.active_tab == TAB_DISPLAY) {
                    if (r == 2 || r == 4) {
                        /* VSync or CAS toggle */
                        overlay_adjust_value(1);
                    } else {
                        /* Multi-choice / slider */
                        if (mouse_x < control_x + control_w * 0.5f) {
                            overlay_adjust_value(-1);
                        } else {
                            overlay_adjust_value(1);
                        }
                    }
                } else if (s_overlay.active_tab == TAB_CONTROLS) {
                    if (r == 4 || r == 5) {
                        /* Smoothing or Invert toggle */
                        overlay_adjust_value(1);
                    } else {
                        /* Continuous sliders: compute ratio */
                        float ratio = ((float)mouse_x - control_x) / control_w;
                        if (ratio < 0.0f) ratio = 0.0f;
                        if (ratio > 1.0f) ratio = 1.0f;
                        OverlayConfig *c = &s_overlay.config;
                        if (r == 0) c->mouse_sens = 0.1f + ratio * (5.0f - 0.1f);
                        if (r == 1) c->mouse_sens_x = 0.1f + ratio * (5.0f - 0.1f);
                        if (r == 2) c->mouse_sens_y = 0.1f + ratio * (5.0f - 0.1f);
                        if (r == 3) c->deadzone = ratio * 0.5f;
                        if (r == 6) c->mouse_full = 8 + (int)(ratio * (128 - 8));
                        overlay_config_clamp(c);
                        overlay_config_apply_to_runtime(c);
                        s_overlay.dragging_slider = r;
                    }
                }
            }
            break;
        }
    }
}

void overlay_render(ID3D11RenderTargetView *backbuffer_rtv, uint32_t screen_w, uint32_t screen_h)
{
    if (!s_overlay.is_open || !s_overlay.device || !s_overlay.context) return;
    if (!backbuffer_rtv || screen_w == 0 || screen_h == 0) return;

    /* Handle dragging slider update */
    float mw = 680.0f;
    float mh = 440.0f;
    float mx = ((float)screen_w - mw) * 0.5f;
    float my = ((float)screen_h - mh) * 0.5f;
    float control_x = mx + 320.0f;
    float control_w = mw - 360.0f;

    if (s_overlay.mouse_down && s_overlay.dragging_slider >= 0 && s_overlay.active_tab == TAB_CONTROLS) {
        float ratio = ((float)s_overlay.mouse_x - control_x) / control_w;
        if (ratio < 0.0f) ratio = 0.0f;
        if (ratio > 1.0f) ratio = 1.0f;
        OverlayConfig *c = &s_overlay.config;
        int r = s_overlay.dragging_slider;
        if (r == 0) c->mouse_sens = 0.1f + ratio * (5.0f - 0.1f);
        if (r == 1) c->mouse_sens_x = 0.1f + ratio * (5.0f - 0.1f);
        if (r == 2) c->mouse_sens_y = 0.1f + ratio * (5.0f - 0.1f);
        if (r == 3) c->deadzone = ratio * 0.5f;
        if (r == 6) c->mouse_full = 8 + (int)(ratio * (128 - 8));
        overlay_config_clamp(c);
        overlay_config_apply_to_runtime(c);
    }

    OverlayBatch *b = &s_overlay.batch;
    overlay_batch_clear(b);

    /* 1. Translucent backdrop covering entire screen */
    overlay_draw_rect(b, 0.0f, 0.0f, (float)screen_w, (float)screen_h, 0x9006090F);

    /* 2. Main Dialog Frame */
    overlay_draw_rect(b, mx, my, mw, mh, 0xF20B0E14);
    overlay_draw_rect_outline(b, mx, my, mw, mh, 1.5f, 0xFF38BDF8);

    /* Title Bar */
    overlay_draw_rect(b, mx + 2.0f, my + 2.0f, mw - 4.0f, 30.0f, 0xFF141C2B);
    overlay_draw_text(b, mx + 16.0f, my + 10.0f, 1.1f,
                      "[//] STAR WARS: BATTLEFRONT II - SYSTEM CONFIGURATION", 0xFF38BDF8);

    /* Close Button [X] */
    bool hover_close = point_in_rect(s_overlay.mouse_x, s_overlay.mouse_y, mx + mw - 32.0f, my + 6.0f, 24.0f, 20.0f);
    overlay_draw_rect(b, mx + mw - 32.0f, my + 6.0f, 24.0f, 20.0f, hover_close ? 0xFFEF4444 : 0xFF243048);
    overlay_draw_text(b, mx + mw - 24.0f, my + 10.0f, 1.0f, "X", 0xFFFFFFFF);

    /* 3. Navigation Tabs */
    float tab_y = my + 38.0f;
    const char *tabs[] = { "[ DISPLAY ]", "[ CONTROLS ]", "[ TELEMETRY ]" };
    for (int t = 0; t < 3; t++) {
        float tx = mx + 20.0f + (float)t * 150.0f;
        bool is_active = (s_overlay.active_tab == (OverlayTab)t);
        bool is_hover = point_in_rect(s_overlay.mouse_x, s_overlay.mouse_y, tx, tab_y, 140.0f, 26.0f);
        uint32_t bg = is_active ? 0xFF38BDF8 : (is_hover ? 0xFF1E293B : 0xFF0F172A);
        uint32_t fg = is_active ? 0xFF0B0E14 : (is_hover ? 0xFFF8FAFC : 0xFF94A3B8);
        overlay_draw_rect(b, tx, tab_y, 140.0f, 26.0f, bg);
        overlay_draw_text(b, tx + 16.0f, tab_y + 7.0f, 1.0f, tabs[t], fg);
    }

    /* Content Area */
    float content_y = my + 78.0f;
    float row_h = 36.0f;
    OverlayConfig *c = &s_overlay.config;

    if (s_overlay.active_tab == TAB_DISPLAY) {
        struct { const char *label; char val[32]; } rows[5];
        rows[0].label = "Internal 3D Resolution:";
        snprintf(rows[0].val, sizeof(rows[0].val), "< %dx (%s) >", c->res_scale,
                 c->res_scale == 1 ? "640x480" : c->res_scale == 2 ? "1280x960 HD" :
                 c->res_scale == 3 ? "1920x1440 QHD" : "2560x1920 4K");

        rows[1].label = "Aspect Ratio Viewport:";
        snprintf(rows[1].val, sizeof(rows[1].val), "< %s >", c->aspect);

        rows[2].label = "Vertical Sync (VSync):";
        snprintf(rows[2].val, sizeof(rows[2].val), "[ %s ]", c->vsync ? "ON" : "OFF");

        rows[3].label = "Target FPS Limiter:";
        snprintf(rows[3].val, sizeof(rows[3].val), "< %s >", c->fps_limit == 0 ? "UNCAPPED" :
                 c->fps_limit == 60 ? "60 FPS" : c->fps_limit == 120 ? "120 FPS" :
                 c->fps_limit == 144 ? "144 FPS" : "240 FPS");

        rows[4].label = "FidelityFX Sharpness (CAS):";
        snprintf(rows[4].val, sizeof(rows[4].val), "[ %s ]", c->cas ? "ON" : "OFF");

        for (int r = 0; r < 5; r++) {
            float ry = content_y + (float)r * row_h;
            bool is_selected = (s_overlay.selected_row == r);
            if (is_selected) {
                overlay_draw_rect(b, mx + 16.0f, ry, mw - 32.0f, row_h - 4.0f, 0x3038BDF8);
                overlay_draw_rect_outline(b, mx + 16.0f, ry, mw - 32.0f, row_h - 4.0f, 1.0f, 0x8038BDF8);
            }
            overlay_draw_text(b, mx + 26.0f, ry + 10.0f, 1.0f, rows[r].label, 0xFFE2E8F0);
            overlay_draw_text(b, control_x, ry + 10.0f, 1.0f, rows[r].val, 0xFF38BDF8);
        }
    } else if (s_overlay.active_tab == TAB_CONTROLS) {
        struct { const char *label; float val; float min_v; float max_v; int is_toggle; } rows[7] = {
            { "Mouse Sensitivity:",       c->mouse_sens,     0.1f, 5.0f, 0 },
            { "Horizontal Sensitivity X:", c->mouse_sens_x,   0.1f, 5.0f, 0 },
            { "Vertical Sensitivity Y:",   c->mouse_sens_y,   0.1f, 5.0f, 0 },
            { "Stick Deadzone Comp:",      c->deadzone,       0.0f, 0.5f, 0 },
            { "EMA Input Smoothing:",      (float)c->mouse_smoothing, 0, 1, 1 },
            { "Invert Vertical Aim Axis:", (float)c->mouse_invert_y,  0, 1, 1 },
            { "Aim Saturation (Full):",    (float)c->mouse_full, 8.0f, 128.0f, 0 },
        };

        for (int r = 0; r < 7; r++) {
            float ry = content_y + (float)r * row_h;
            bool is_selected = (s_overlay.selected_row == r);
            if (is_selected) {
                overlay_draw_rect(b, mx + 16.0f, ry, mw - 32.0f, row_h - 4.0f, 0x3038BDF8);
                overlay_draw_rect_outline(b, mx + 16.0f, ry, mw - 32.0f, row_h - 4.0f, 1.0f, 0x8038BDF8);
            }
            overlay_draw_text(b, mx + 26.0f, ry + 10.0f, 1.0f, rows[r].label, 0xFFE2E8F0);

            if (rows[r].is_toggle) {
                const char *ts = rows[r].val > 0.5f ? "[ ON ]" : "[ OFF ]";
                uint32_t tc = rows[r].val > 0.5f ? 0xFF10B981 : 0xFF94A3B8;
                overlay_draw_text(b, control_x, ry + 10.0f, 1.0f, ts, tc);
            } else {
                /* Slider track */
                float sw = control_w - 70.0f;
                float sh = 8.0f;
                float sy = ry + 12.0f;
                overlay_draw_rect(b, control_x, sy, sw, sh, 0xFF1E293B);
                overlay_draw_rect_outline(b, control_x, sy, sw, sh, 1.0f, 0xFF475569);

                float ratio = (rows[r].val - rows[r].min_v) / (rows[r].max_v - rows[r].min_v);
                if (ratio < 0.0f) ratio = 0.0f;
                if (ratio > 1.0f) ratio = 1.0f;

                /* Filled bar and handle */
                overlay_draw_rect(b, control_x, sy, sw * ratio, sh, 0xFF38BDF8);
                overlay_draw_rect(b, control_x + sw * ratio - 3.0f, sy - 3.0f, 6.0f, sh + 6.0f, 0xFFF8FAFC);

                /* Value text */
                char val_str[16];
                if (r == 6) {
                    snprintf(val_str, sizeof(val_str), "%d", (int)rows[r].val);
                } else {
                    snprintf(val_str, sizeof(val_str), "%.2f", rows[r].val);
                }
                overlay_draw_text(b, control_x + sw + 10.0f, ry + 10.0f, 1.0f, val_str, 0xFF38BDF8);
            }
        }
    } else {
        /* Telemetry Tab */
        overlay_draw_text(b, mx + 26.0f, content_y + 10.0f, 1.1f,
                          "STAR WARS BATTLEFRONT II NATIVE RECOMPILATION", 0xFF38BDF8);
        overlay_draw_text(b, mx + 26.0f, content_y + 40.0f, 1.0f,
                          "Display Pipeline: Direct3D 11 Hardware Presentation", 0xFFE2E8F0);
        overlay_draw_text(b, mx + 26.0f, content_y + 65.0f, 1.0f,
                          "Shader Subsystem: HLSL Vertex & Pixel JIT Compiler with DXBC Cache", 0xFFE2E8F0);
        overlay_draw_text(b, mx + 26.0f, content_y + 90.0f, 1.0f,
                          "Visibility Culling: Hardware Early-Z UAV Atomic Counting", 0xFFE2E8F0);
        overlay_draw_text(b, mx + 26.0f, content_y + 115.0f, 1.0f,
                          "Input System: AAA Raw PC Mouse Look & Aim with Smooth Deadzone", 0xFFE2E8F0);
        overlay_draw_text(b, mx + 26.0f, content_y + 145.0f, 1.0f,
                          "Hotkeys: F1=Overlay Menu | F9=Mouse Lock | F11=Fullscreen | F12=Screenshot", 0xFF94A3B8);
    }

    /* Footer Buttons & Status */
    float btn_w = 210.0f;
    float btn_h = 30.0f;
    float save_btn_x = mx + 20.0f;
    float save_btn_y = my + mh - 44.0f;
    bool hover_save = point_in_rect(s_overlay.mouse_x, s_overlay.mouse_y, save_btn_x, save_btn_y, btn_w, btn_h);

    overlay_draw_rect(b, save_btn_x, save_btn_y, btn_w, btn_h, hover_save ? 0xFF0284C7 : 0xFF38BDF8);
    overlay_draw_text(b, save_btn_x + 16.0f, save_btn_y + 9.0f, 1.0f, "[ APPLY & SAVE TO INI ]", 0xFF0B0E14);

    float close_btn_x = mx + mw - 140.0f;
    bool hover_close_btn = point_in_rect(s_overlay.mouse_x, s_overlay.mouse_y, close_btn_x, save_btn_y, 120.0f, btn_h);
    overlay_draw_rect(b, close_btn_x, save_btn_y, 120.0f, btn_h, hover_close_btn ? 0xFF334155 : 0xFF1E293B);
    overlay_draw_text(b, close_btn_x + 14.0f, save_btn_y + 9.0f, 1.0f, "[ CLOSE (ESC) ]", 0xFFF8FAFC);

    if (s_overlay.status_timer > 0) {
        s_overlay.status_timer--;
        overlay_draw_text(b, save_btn_x + btn_w + 14.0f, save_btn_y + 9.0f, 1.0f, s_overlay.status_msg, 0xFF10B981);
    }

    /* 4. Mouse Pointer */
    float cursor_x = (float)s_overlay.mouse_x;
    float cursor_y = (float)s_overlay.mouse_y;
    overlay_draw_rect(b, cursor_x, cursor_y, 3.0f, 14.0f, 0xFF38BDF8);
    overlay_draw_rect(b, cursor_x, cursor_y, 14.0f, 3.0f, 0xFF38BDF8);
    overlay_draw_rect(b, cursor_x + 3.0f, cursor_y + 3.0f, 7.0f, 7.0f, 0xFFFFFFFF);

    /* --- Direct3D 11 Draw Submission --- */
    if (b->count == 0) return;

    /* Update dynamic vertex buffer */
    D3D11_MAPPED_SUBRESOURCE mapped;
    HRESULT hr = ID3D11DeviceContext_Map(s_overlay.context, (ID3D11Resource *)s_overlay.vb,
                                         0, D3D11_MAP_WRITE_DISCARD, 0, &mapped);
    if (SUCCEEDED(hr)) {
        memcpy(mapped.pData, b->vertices, b->count * sizeof(OverlayVertex));
        ID3D11DeviceContext_Unmap(s_overlay.context, (ID3D11Resource *)s_overlay.vb, 0);
    } else {
        return;
    }

    /* Update screen constant buffer */
    hr = ID3D11DeviceContext_Map(s_overlay.context, (ID3D11Resource *)s_overlay.cb_screen,
                                 0, D3D11_MAP_WRITE_DISCARD, 0, &mapped);
    if (SUCCEEDED(hr)) {
        float dim[4] = { (float)screen_w, (float)screen_h, 0.0f, 0.0f };
        memcpy(mapped.pData, dim, sizeof(dim));
        ID3D11DeviceContext_Unmap(s_overlay.context, (ID3D11Resource *)s_overlay.cb_screen, 0);
    }

    /* Set pipeline state */
    ID3D11DeviceContext_OMSetRenderTargets(s_overlay.context, 1, &backbuffer_rtv, NULL);

    D3D11_VIEWPORT vp = {0};
    vp.Width = (float)screen_w;
    vp.Height = (float)screen_h;
    vp.MinDepth = 0.0f;
    vp.MaxDepth = 1.0f;
    ID3D11DeviceContext_RSSetViewports(s_overlay.context, 1, &vp);

    UINT stride = sizeof(OverlayVertex);
    UINT offset = 0;
    ID3D11DeviceContext_IASetInputLayout(s_overlay.context, s_overlay.layout);
    ID3D11DeviceContext_IASetVertexBuffers(s_overlay.context, 0, 1, &s_overlay.vb, &stride, &offset);
    ID3D11DeviceContext_IASetPrimitiveTopology(s_overlay.context, D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

    ID3D11DeviceContext_VSSetShader(s_overlay.context, s_overlay.vs, NULL, 0);
    ID3D11DeviceContext_VSSetConstantBuffers(s_overlay.context, 0, 1, &s_overlay.cb_screen);

    ID3D11DeviceContext_PSSetShader(s_overlay.context, s_overlay.ps, NULL, 0);
    ID3D11DeviceContext_PSSetShaderResources(s_overlay.context, 0, 1, &s_overlay.atlas_srv);
    ID3D11DeviceContext_PSSetSamplers(s_overlay.context, 0, 1, &s_overlay.sampler);

    const float blend_factor[4] = { 0, 0, 0, 0 };
    ID3D11DeviceContext_OMSetBlendState(s_overlay.context, s_overlay.blend_state, blend_factor, 0xFFFFFFFF);
    ID3D11DeviceContext_OMSetDepthStencilState(s_overlay.context, NULL, 0);

    /* Draw full batch */
    ID3D11DeviceContext_Draw(s_overlay.context, b->count, 0);
}
