# Star Wars: Battlefront II - In-Game D3D11 Settings Overlay Menu Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Build an interactive, lightweight native C11 D3D11 in-game settings overlay menu (OSD) toggleable during gameplay and menus via `F1`/`Home`, enabling real-time graphics and control tuning with atomic INI synchronization.

**Architecture:** Pure C11 modular architecture hooking into `present_world()` in `bf2_recomp/src/gpu_world.c` immediately before swapchain presentation. An embedded monospace bitmap font and dynamic 2D quad batcher render holographic Star Wars themed UI tabs, sliders, and toggles. Win32 WndProc routing in `tools/xboxrecomp/src/video/fb_present.c` and input gating in `tools/xboxrecomp/src/input/mkb_input.c` allow seamless hybrid navigation (mouse, keyboard arrows, and gamepad D-pad) while muting gameplay background input.

**Tech Stack:** C11, Direct3D 11, Win32 API, CMake.

**Spec:** [In-game overlay design](../specs/2026-11-19-ingame-overlay-menu-design.md)

---

## Global Constraints

- **Host Audio Invariant:** Under NO circumstances shall any overlay or menu code query, alter, or touch Windows host audio devices or volume settings.
- **Language & Standard:** Pure C11 standard (`set(CMAKE_C_STANDARD 11)`). Zero external C++ dependencies or third-party GUI library bloat.
- **Asset Protection:** Zero copyrighted assets or proprietary fonts in Git. Monospace font bitmap data is strictly embedded as C byte arrays.
- **Performance Invariant:** Zero GPU cost when closed (single boolean check). When open, draw call budget < 4 draw calls and < 0.1ms render time.
- **Filesystem Confinement:** File manipulations are strictly confined to reading and atomically serializing `bf2_recomp.ini`.

---

## Review Focus

1. **Multi-Monitor / DPI Window Coordinates:** Windows windowed and Per-Monitor-V2 DPI scaling must map mouse click coordinates accurately to overlay UI elements without offset drift.
2. **Input Isolation & Gating:** While the overlay is open, clicking UI elements or pressing navigation keys must never trigger weapon firing, jumping, or camera deflection in the background game simulation.
3. **INI Atomic Serialization:** Rapid slider dragging or menu closing must never corrupt or partially write `bf2_recomp.ini`.
4. **Swapchain Resizing Cleanliness:** Window resize events (`WM_SIZE` / `ResizeBuffers`) must not leak D3D11 render targets or cause null pointer exceptions during overlay draw.
5. **Setting Value Clamping:** Malformed or out-of-range slider values must be strictly clamped before applying to runtime variables or disk.

---

## Tasks

### Task 1: Configuration Bridge & Atomic INI Persistence (`overlay_config`)

**Files:**
- Create: `bf2_recomp/src/overlay_config.h`
- Create: `bf2_recomp/src/overlay_config.c`
- Test: `bf2_recomp/tests/check_overlay_config.c`
- Modify: `bf2_recomp/CMakeLists.txt`

**Interfaces:**
- Produces:
  ```c
  typedef struct {
      int   res_scale;        // 1..4
      char  aspect[16];       // "16:9", "4:3", "21:9", "32:9"
      int   vsync;            // 0 or 1
      int   fps_limit;        // 0, 60, 120, 144, 240
      int   cas;              // 0 or 1
      float mouse_sens;       // 0.1 .. 10.0
      float mouse_sens_x;     // 0.1 .. 10.0
      float mouse_sens_y;     // 0.1 .. 10.0
      float deadzone;         // 0.0 .. 0.9
      int   mouse_smoothing;  // 0 or 1
      int   mouse_invert_y;   // 0 or 1
      int   mouse_full;       // 8 .. 128
      int   show_fps;         // 0 or 1
  } OverlayConfig;

  void overlay_config_defaults(OverlayConfig *cfg);
  bool overlay_config_load(OverlayConfig *cfg, const char *ini_path);
  bool overlay_config_save(const OverlayConfig *cfg, const char *ini_path);
  void overlay_config_apply_to_runtime(const OverlayConfig *cfg);
  ```

- [ ] **Step 1: Write failing unit test `check_overlay_config.c`**
  - Verify default initialization values match game defaults.
  - Verify loading a valid mock INI file parses all fields correctly.
  - Verify saving modifies fields atomically without corrupting unrelated sections.
  - Verify clamping logic rejects invalid / out-of-bound inputs.

- [ ] **Step 2: Run test to verify failure**
  - Build test executable and verify compilation failure due to missing headers/functions.

- [ ] **Step 3: Implement `overlay_config.h` and `overlay_config.c`**
  - Implement parsing of `bf2_recomp.ini` supporting `[Display]`, `[Graphics]`, and `[Controls]`.
  - Implement atomic write (write to temporary file `bf2_recomp.ini.tmp` and `ReplaceFileA` / `rename`).
  - Wire `overlay_config_apply_to_runtime()` to set runtime variables (`mouse_sens_x`, `deadzone`, etc.) and environment variables via `_putenv_s`.

- [ ] **Step 4: Run test to verify it passes**
  - Compile and run `check_overlay_config.exe` with 100% assertions passing.

- [ ] **Step 5: Commit**
  - Git commit: `feat(overlay): implement configuration bridge and atomic INI serialization`

---

### Task 2: Embedded Font Atlas & 2D Quad Vertex Generator (`overlay_draw`)

**Files:**
- Create: `bf2_recomp/src/overlay_font.h`
- Create: `bf2_recomp/src/overlay_draw.h`
- Create: `bf2_recomp/src/overlay_draw.c`
- Test: `bf2_recomp/tests/check_overlay_draw.c`
- Modify: `bf2_recomp/CMakeLists.txt`

**Interfaces:**
- Produces:
  ```c
  typedef struct {
      float x, y;
      float u, v;
      uint32_t color; // RGBA8
  } OverlayVertex;

  typedef struct {
      OverlayVertex *vertices;
      uint32_t count;
      uint32_t capacity;
  } OverlayBatch;

  void overlay_batch_init(OverlayBatch *batch, uint32_t max_quads);
  void overlay_batch_clear(OverlayBatch *batch);
  void overlay_batch_free(OverlayBatch *batch);

  void overlay_draw_rect(OverlayBatch *batch, float x, float y, float w, float h, uint32_t color);
  void overlay_draw_rect_outline(OverlayBatch *batch, float x, float y, float w, float h, float thickness, uint32_t color);
  void overlay_draw_text(OverlayBatch *batch, float x, float y, float scale, const char *text, uint32_t color);
  ```

- [ ] **Step 1: Write failing unit test `check_overlay_draw.c`**
  - Test batch allocation and capacity growth.
  - Test `overlay_draw_rect` emits 6 vertices (2 triangles) with correct UV coordinates (mapped to solid white pixel).
  - Test `overlay_draw_text` emits correct UV mapping for ASCII characters based on font atlas dimensions.

- [ ] **Step 2: Run test to verify failure**
  - Verify test fails to link / compile.

- [ ] **Step 3: Implement `overlay_font.h`, `overlay_draw.h`, and `overlay_draw.c`**
  - In `overlay_font.h`, embed standard 8x14 bitmap font (ASCII 32..126) packed into a 128x128 1-byte-per-pixel luminance atlas.
  - In `overlay_draw.c`, implement 2D triangle-pair emission with clipping checks.

- [ ] **Step 4: Run test to verify passing**
  - Run `check_overlay_draw.exe` and confirm 100% assertions pass.

- [ ] **Step 5: Commit**
  - Git commit: `feat(overlay): create embedded font atlas and 2D quad geometry batcher`

---

### Task 3: Direct3D 11 Pipeline & Presentation Hook Integration

**Files:**
- Create: `bf2_recomp/src/overlay_menu.h`
- Create: `bf2_recomp/src/overlay_menu.c`
- Modify: `bf2_recomp/src/gpu_world.c:3556-3680`
- Modify: `bf2_recomp/CMakeLists.txt`

**Interfaces:**
- Produces:
  ```c
  bool overlay_init(ID3D11Device *device, ID3D11DeviceContext *context);
  void overlay_shutdown(void);
  void overlay_render(ID3D11RenderTargetView *backbuffer_rtv, uint32_t screen_w, uint32_t screen_h);
  bool overlay_is_open(void);
  void overlay_set_open(bool open);
  void overlay_toggle(void);
  ```

- [ ] **Step 1: Implement D3D11 shaders and GPU resources in `overlay_menu.c`**
  - Compile minimal HLSL Vertex and Pixel Shaders using `D3DCompile` or embedded bytecode:
    - VS: 2D orthogonal projection to NDC `[-1, 1]`.
    - PS: Samples texture atlas (or solid white) and modulates with vertex RGBA color.
  - Create dynamic vertex buffer (`D3D11_USAGE_DYNAMIC`, `D3D11_CPU_ACCESS_WRITE`).
  - Create font atlas texture and SRV (`DXGI_FORMAT_R8_UNORM`).
  - Create alpha blend state (`D3D11_BLEND_SRC_ALPHA`, `D3D11_BLEND_INV_SRC_ALPHA`).

- [ ] **Step 2: Hook overlay rendering into `bf2_recomp/src/gpu_world.c`**
  - In `present_world()`, right after `ID3D11DeviceContext_Draw(world.context, 3, 0)` and before unbinding render targets:
    ```c
    if (overlay_is_open()) {
        overlay_render(world.swapchain_rtv, world.swapchain_w, world.swapchain_h);
    }
    ```
  - In `init_swapchain()` / `cleanup_world()`, call `overlay_init` and `overlay_shutdown`.

- [ ] **Step 3: Compile and verify clean build**
  - Build `swbf2_recomp.exe` and verify zero compiler warnings or linking errors.

- [ ] **Step 4: Run GPU regression tests**
  - Run `ctest --test-dir bf2_recomp/tests/gpu_world/build -C Release` and verify 7/7 tests pass.

- [ ] **Step 5: Commit**
  - Git commit: `feat(overlay): integrate D3D11 overlay rendering into presentation blit`

---

### Task 4: Interactive UI Widgets & Navigation State Machine

**Files:**
- Modify: `bf2_recomp/src/overlay_menu.c`
- Modify: `bf2_recomp/src/overlay_menu.h`
- Test: `bf2_recomp/tests/check_overlay_widgets.c`

**Interfaces:**
- Consumes: `overlay_draw.h`, `overlay_config.h`
- Produces:
  ```c
  typedef enum {
      TAB_DISPLAY,
      TAB_CONTROLS,
      TAB_TELEMETRY,
      TAB_COUNT
  } OverlayTab;

  void overlay_navigate(int delta_row);
  void overlay_adjust_value(int delta);
  void overlay_activate(void);
  void overlay_set_mouse_pos(int mouse_x, int mouse_y);
  void overlay_on_mouse_click(int mouse_x, int mouse_y, bool down);
  ```

- [ ] **Step 1: Write unit test `check_overlay_widgets.c`**
  - Test keyboard navigation cycling through rows.
  - Test adjusting slider values with boundary clamping.
  - Test tab switching logic.
  - Test mouse point-in-rect hit-testing for sliders, tabs, and buttons.

- [ ] **Step 2: Run test to verify failure**
  - Verify test fails before widget logic implementation.

- [ ] **Step 3: Implement widget rendering and navigation in `overlay_menu.c`**
  - Render dark holographic frame (`#0B0E14` with `#38BDF8` border).
  - Render Tab Header: `[DISPLAY]`, `[CONTROLS]`, `[TELEMETRY]`.
  - Render Display Tab: Resolution Scale (1x, 2x HD, 3x, 4x), Aspect Ratio (16:9, 4:3, 21:9), VSync (ON/OFF), FPS Limiter (0/Uncapped, 60, 120, 144, 240), CAS Sharpness (ON/OFF).
  - Render Controls Tab: Mouse Sensitivity (0.1..5.0), Sens X, Sens Y, Deadzone (0.0..0.5), Smoothing (ON/OFF), Invert Y (ON/OFF).
  - Render Telemetry Tab: Real-time FPS, frame latency, shader cache stats.
  - Render footer buttons: `[ SAVE TO INI ]` and `[ CLOSE (ESC) ]`.

- [ ] **Step 4: Run test to verify it passes**
  - Run `check_overlay_widgets.exe` and confirm 100% assertions pass.

- [ ] **Step 5: Commit**
  - Git commit: `feat(overlay): implement interactive UI widgets and navigation state machine`

---

### Task 5: Win32 Message Routing, Cursor Arbitration & Input Gating

**Files:**
- Modify: `tools/xboxrecomp/src/input/mkb_input.c`
- Modify: `tools/xboxrecomp/src/video/fb_present.c`
- Test: Manual / interactive verification

**Interfaces:**
- Consumes: `overlay_is_open()`, `overlay_toggle()`, `overlay_on_mouse_click()`, `overlay_set_mouse_pos()`, `overlay_navigate()`, `overlay_adjust_value()`

- [ ] **Step 1: Hook hotkeys (`F1` / `Home`) in `fb_present.c` / `mkb_input.c`**
  - Detect `VK_F1` or `VK_HOME` key press to trigger `overlay_toggle()`.
  - When opening:
    - Call `ClipCursor(NULL)` to release cursor confinement.
    - Show hardware mouse cursor via `ShowCursor(TRUE)`.
  - When closing:
    - Re-confine cursor to game client rect via `ClipCursor(&rect)`.
    - Hide cursor if hardware mouse aim is active via `ShowCursor(FALSE)`.
    - Automatically call `overlay_config_save()` to persist changes.

- [ ] **Step 2: Implement Win32 WndProc event routing in `fb_present.c`**
  - Route `WM_MOUSEMOVE`, `WM_LBUTTONDOWN`, `WM_LBUTTONUP`, and keyboard navigation (`VK_UP`, `VK_DOWN`, `VK_LEFT`, `VK_RIGHT`, `VK_RETURN`, `VK_ESCAPE`, `VK_TAB`) to overlay handler when `overlay_is_open()`.

- [ ] **Step 3: Implement input gating in `mkb_input.c`**
  - In `mkb_poll_gamepad()`, if `overlay_is_open()`:
    - Zero out `aim_x`, `aim_y`, `mov_x`, `mov_y`.
    - Mute trigger and face buttons (`analog[XBOX_BUTTON_RTRIGGER] = 0`, etc.).
    - Return early so gameplay simulation receives neutral input.

- [ ] **Step 4: Build Release binary**
  - Build `swbf2_recomp.exe` in `bf2_recomp/build/Release/`.
  - Copy binary to `bf2_recomp/game_files/swbf2_recomp.exe`.

- [ ] **Step 5: Commit**
  - Git commit: `feat(overlay): implement Win32 input routing, cursor arbitration and gameplay input muting`

---

### Task 6: End-to-End Verification & Benchmark Regression

**Files:**
- Test: `check_overlay_config.exe`
- Test: `check_overlay_draw.exe`
- Test: `check_overlay_widgets.exe`
- Test: Full ctest suites

- [ ] **Step 1: Execute all unit and component test suites**
  - Run `check_overlay_config.exe` -> verify 100% pass.
  - Run `check_overlay_draw.exe` -> verify 100% pass.
  - Run `check_overlay_widgets.exe` -> verify 100% pass.
  - Run `ctest --test-dir bf2_recomp/tests/gpu_world/build -C Release` -> verify 7/7 pass.
  - Run `ctest --test-dir bf2_recomp/tests/gpu_vsh/build -C Release` -> verify 2/2 pass.

- [ ] **Step 2: Live gameplay test of overlay hotkey and settings**
  - Launch `swbf2_recomp.exe` and test `F1` overlay opening in gameplay.
  - Verify mouse pointer moves smoothly and clicks widgets.
  - Adjust sensitivity and resolution scale; verify immediate visual feedback.
  - Press `F1` to close; verify aim resumes smoothly without camera jump.
  - Inspect `bf2_recomp.ini` to confirm atomic save of adjusted settings.

- [ ] **Step 3: Update documentation and handoff**
  - Update [README.md](../../../README.md) and [HANDOFF.md](../../../HANDOFF.md) detailing the in-game settings overlay controls (`F1` / `Home`) and features.

- [ ] **Step 4: Final commit**
  - Git commit: `feat(overlay): finalize in-game D3D11 settings overlay and update documentation`
