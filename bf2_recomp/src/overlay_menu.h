#ifndef OVERLAY_MENU_H
#define OVERLAY_MENU_H

#define CINTERFACE
#define COBJMACROS
#include <stdbool.h>
#include <stdint.h>
#include <d3d11.h>
#include "overlay_config.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Initialize D3D11 shaders, constant/vertex buffers, font atlas and blend states */
bool overlay_init(ID3D11Device *device, ID3D11DeviceContext *context);

/* Free all D3D11 resources and batches */
void overlay_shutdown(void);

/* Render overlay onto the swapchain backbuffer */
void overlay_render(ID3D11RenderTargetView *backbuffer_rtv, uint32_t screen_w, uint32_t screen_h);

/* Visibility and state controls */
bool overlay_is_open(void);
void overlay_set_open(bool open);
void overlay_toggle(void);

/* Access active config */
OverlayConfig *overlay_get_config(void);

/* Input handling */
void overlay_navigate(int delta_row);
void overlay_adjust_value(int delta);
void overlay_activate(void);
void overlay_next_tab(void);
void overlay_prev_tab(void);
void overlay_set_mouse_pos(int mouse_x, int mouse_y);
void overlay_on_mouse_click(int mouse_x, int mouse_y, bool down);

#ifdef __cplusplus
}
#endif

#endif /* OVERLAY_MENU_H */
