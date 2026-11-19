# Star Wars: Battlefront II - In-Game D3D11 Settings Overlay Menu Design

## 1. Intent & Purpose

Players currently configure display settings (resolution scaling, aspect ratio, VSync, frame pacing) and control parameters (mouse sensitivity, deadzone, smoothing) either through the external desktop launcher hub or by manually editing `bf2_recomp.ini`.

This feature introduces a native, in-game D3D11 settings overlay menu (OSD) toggleable at any time during gameplay or in-engine menus (via `F1` or `Home`). It gives players real-time feedback when tuning aim responsiveness or graphics fidelity, seamlessly updating runtime variables and persisting changes to `bf2_recomp.ini`.

---

## 2. Goals, Non-Goals, and Anti-Goals

### Goals
- **Instant Live Tuning**: Adjust mouse sensitivity (X/Y), smoothing, deadzone compensation, resolution scale (1x–4x), aspect ratio, VSync, and FPS limiter with immediate effect without restarting the game.
- **Pure C11 Architecture**: Implemented cleanly in native C11 to maintain 100% compatibility with `swbf2_recomp` (`set(CMAKE_C_STANDARD 11)`) and zero third-party C++ runtime overhead.
- **Clean Input Arbitration**: When the overlay is toggled open, release the mouse cursor confinement (`ClipCursor(NULL)`), restore cursor visibility (`ShowCursor(TRUE)`), and zero out controller analog stick deflections so mouse clicks interact with the menu instead of spinning the player camera.
- **Star Wars Themed Styling**: Holographic dark sci-fi UI matching the launcher hub aesthetic (dark translucent backdrop, neon blue `#38BDF8` borders/accents, crisp monospace text, interactive sliders, toggles, and buttons).
- **Atomic INI Serialization**: Provide a dedicated "Save to INI" action (and auto-save on close option) that safely updates `bf2_recomp.ini`.

### Non-Goals
- Replacing the game's original in-engine Lua menus (`shell.lvl` / `ingame.lvl`) or re-skinning game screens like spawn/instant action.
- Building a full floating window/docking desktop environment inside the game (keep it as a focused, high-performance in-game settings OSD).

### Anti-Goals
- Introducing C++ compiler requirements or complex external GUI frameworks (Dear ImGui, Nuklear, Qt) into the pure C11 codebase.
- Modifying, querying, or touching host audio devices under any circumstances (strictly adhering to the Host Audio Rule).
- Adding frame lag or GPU memory overhead when the overlay is closed.

---

## 3. Constraints

1. **Host Audio Invariant**: Under NO circumstances shall any overlay or menu code query, alter, or touch Windows host audio devices or volume settings.
2. **Standard Compatibility**: Built as pure C11, MSVC and Clang compatible.
3. **Asset Protection**: No copyrighted assets or proprietary fonts in Git. The font will be an embedded minimalist 8x13 or 8x16 monospace bitmap font compiled directly into C byte arrays.
4. **Performance**: Zero GPU cost when closed (bypassed with single boolean check). When open, draw call budget < 4 draw calls and < 0.1ms render time.

---

## 4. Approaches Considered

### Approach A: Pure C11 Native D3D11 Star Wars HUD Overlay (Selected)
- **Architecture**: A dedicated C module (`bf2_recomp/src/overlay_menu.c` and `overlay_menu.h`) with an embedded D3D11 vertex/pixel shader and monospace font bitmap.
- **Integration**: Called from `present_world()` in `bf2_recomp/src/gpu_world.c` directly before `IDXGISwapChain_Present()`.
- **Why Chosen**: 
  - Retains pure C11 toolchain with zero C++ compilation overhead.
  - Footprint is under 40 KB of compiled code.
  - Seamlessly accesses `gpu_world`'s existing `ID3D11Device` and swapchain backbuffer render target.
  - No risk of symbol clashes or ABI mismatches with the recompiled game code.

### Approach B: Dear ImGui (D3D11 + Win32 Backend)
- **Architecture**: Integrating Dear ImGui C++ library or `cimgui` wrapper.
- **Why Rejected**:
  - Requires enabling C++ compiler flags and runtime in `bf2_recomp/CMakeLists.txt`.
  - Introduces large external source trees (~500 KB+), complicates build pipelines, and can conflict with the custom raw-input hook in `fb_present.c` and `mkb_input.c`.

---

## 5. Architectural Specification

### 5.1 Modules and File Structure

- `bf2_recomp/src/overlay_menu.h`: Public API for overlay lifecycle, input handling, and rendering.
- `bf2_recomp/src/overlay_menu.c`: Overlay state machine, UI layout, slider/toggle widget logic, embedded font atlas, D3D11 quad renderer, and INI writer.
- `bf2_recomp/src/overlay_font.h`: Embedded 8x14 bitmap font glyph data (ASCII 32..126) for crisp pixel-perfect rendering.
- `bf2_recomp/src/gpu_world.c`: Hooks `overlay_render()` into `present_world()`.
- `tools/xboxrecomp/src/input/mkb_input.c`: Hooks overlay toggle (`F1` / `Home`) and pauses gameplay mouse motion when overlay is active.
- `tools/xboxrecomp/src/video/fb_present.c`: Routes Win32 mouse click/move messages to overlay when active.

### 5.2 Public API (`overlay_menu.h`)

```c
#ifndef OVERLAY_MENU_H
#define OVERLAY_MENU_H

#include <stdint.h>
#include <stdbool.h>
#include <d3d11.h>
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

// Initialization and destruction
bool overlay_init(ID3D11Device *device, ID3D11DeviceContext *context);
void overlay_shutdown(void);

// Visibility state
bool overlay_is_open(void);
void overlay_set_open(bool open);
void overlay_toggle(void);

// Input handling (called from Win32 message loop / mkb_input)
// Returns true if the message was intercepted/consumed by the overlay
bool overlay_handle_wndproc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

// Render hook (called before Present in present_world)
void overlay_render(ID3D11RenderTargetView *backbuffer_rtv, uint32_t screen_w, uint32_t screen_h);

// Live setting accessors & sync
void overlay_load_from_ini(const char *ini_path);
void overlay_save_to_ini(const char *ini_path);

#ifdef __cplusplus
}
#endif

#endif // OVERLAY_MENU_H
```

### 5.3 User Interface Layout & Aesthetic

```
+-------------------------------------------------------------------------+
| [//] STAR WARS: BATTLEFRONT II - SYSTEM CONFIGURATION        [X] CLOSE  |
+-------------------------------------------------------------------------+
| [DISPLAY]                | [CONTROLS & AIM]         | [TELEMETRY]       |
+--------------------------+--------------------------+-------------------+
| Internal Resolution:     [ < 2x HD (1280x960) > ]                       |
| Aspect Ratio:            [ < 16:9 Widescreen > ]                        |
| VSync:                   [ ON ]                                         |
| FPS Limiter:             [ < 144 FPS > ]                                |
| Contrast Adaptive Sharp: [ ON ]                                         |
|                                                                         |
| Mouse Sensitivity:       [=====|---------] 1.50                         |
| Mouse Sens X / Y:        X: [1.00]  Y: [1.00]                           |
| Deadzone Compensation:   [===|-----------] 0.18                         |
| EMA Mouse Smoothing:     [ OFF ]                                        |
| Invert Y Axis:           [ OFF ]                                        |
| Full Aim Saturation:     [=======|-------] 48                           |
|                                                                         |
| Frame Time: 10.4 ms (96.2 FPS) | Active Shaders: 75 VSH / 33 PS         |
|                                                                         |
| [ SAVE TO INI ]                              [ RESTORE DEFAULTS ]       |
+-------------------------------------------------------------------------+
```

### 5.4 Input State Machine & Cursor Control

1. **Input Modality**:
   - **Primary**: Mouse point-and-click with smooth hover states and slider dragging.
   - **Keyboard & Gamepad Navigation**:
     - `Up` / `Down` (or D-pad Up/Down): Cycle active widget/row.
     - `Left` / `Right` (or D-pad Left/Right): Decrease / increase slider values or cycle options.
     - `Enter` / `Space` (or Gamepad A): Activate button / toggle checkbox.
     - `Esc` / `Backspace` (or Gamepad B): Close overlay.
     - `Tab` / `Q`/`E` (or Gamepad LB/RB): Switch menu tabs.
   - Controller & MKB Input Gating: When open, inputs are consumed by the overlay. Raw character movement and weapon firing in `mkb_input.c` and `xinput_device.c` are muted so no accidental actions occur in the background.

2. **Simulation & Real-Time Feedback Behavior**:
   - The game continues rendering in the background at full speed behind a subtle translucent backdrop (dark blur/tint).
   - This allows instant visual feedback for graphics changes (resolution scale, sharpness, VSync, and FPS limit).
   - Aim changes (sensitivities, deadzone, smoothing) take effect immediately when the overlay is toggled closed, or can be tested on the fly.

3. **Display Settings Scope**:
   - **Resolution Scale (1x–4x)**: Controls native NV2A 3D internal render surface scaling (`res_scale`), supersampling geometry to crisp HD.
   - **Aspect Ratio**: Controls the presentation blit letterbox/pillarbox and widescreen viewport mapping in `gpu_world.c`.
   - **Fullscreen**: Uses existing borderless fullscreen toggle (`F11`).

### 5.5 Rendering Pipeline

- **Geometry**: A single dynamic vertex buffer containing 2D quads:
  - 1 vertex format: `float2 pos`, `float2 uv`, `uint color (RGBA8)`.
- **Textures**: 
  - 1 font texture atlas (8-bit alpha or luminance) generated at `overlay_init` from font glyph table.
  - 1 white pixel for solid colored rects/borders.
- **D3D11 Pipeline State**:
  - Minimal vertex shader performing orthogonal projection: `pos_clip = float4(pos.x / (W/2) - 1.0, 1.0 - pos.y / (H/2), 0, 1)`.
  - Minimal pixel shader sampling texture and multiplying by vertex color.
  - Standard alpha blending state (`SrcAlpha, InvSrcAlpha`).
  - Saved & restored blend, rasterizer, and viewport state so the main renderer remains undisturbed.

---

## 6. Verification & Test Plan

1. **Unit & Functional Tests**:
   - Create `bf2_recomp/tests/check_overlay_menu.c`:
     - Test overlay initialization and shutdown lifecycle.
     - Test tab selection and setting mutation state machine.
     - Test serialization and deserialization of `bf2_recomp.ini`.
     - Test clamp limits on sensitivities, deadzone, resolution scale, and FPS limit.
2. **Integration Verification**:
   - Build `swbf2_recomp.exe` with `CMakeLists.txt` updated.
   - Run existing regression suites (`gpu-world-regression`, `gpu-vsh-regression`) to verify zero impact on core rendering.
   - Launch `swbf2_recomp.exe` under test harness:
     - Press `F1` in combat window. Verify overlay renders cleanly without crash or visual corruption.
     - Verify mouse aim does not spin while clicking overlay buttons.
     - Press `F1` again to close. Verify aim resumes cleanly and settings are saved.
