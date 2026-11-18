# Design Specification: Star Wars Battlefront II Cross-Platform Desktop Hub Launcher

**Date:** 18 November 2026  
**Status:** Approved & Revised (Incorporating Architectural Engine Audit)  
**Target Platforms:** Windows (10/11 x64), Linux (x86_64 / arm64), macOS (Apple Silicon / Intel x86_64)  
**Architecture:** Standalone Desktop Hub (Tauri 2.0 + Rust Core + Modern Web UI)

---

## 1. Intent & Executive Summary

Star Wars: Battlefront II (Classic Recomp) is currently a high-performance native 60+ FPS executable. To elevate the port to true AAA modern standards across all desktop platforms, a dedicated **Standalone Desktop Hub Launcher** is required. 

This launcher serves as the primary player entry point, providing:
1. **Cross-Platform Native Packaging:** Built with Tauri 2.0 for Windows (`.exe` / `.msi`), Linux (`.AppImage` / `.deb`), and macOS (`.dmg` / `.app`), with lightweight cold launch (<250ms) and minimal RAM footprint (<40MB).
2. **Settings & Preset Synchronization:** Seamless GUI configuration of `bf2_recomp.ini` and process environment overrides (internal resolution 1x–4x HD, 16:9 / 21:9 / 32:9 aspect ratios, tearing VRR, 1:1 mouse aim calibration, audio synchronization).
3. **Full Online Multiplayer Hub:** Live community master-server browser, local subnet LAN auto-discovery (Xbox System Link port `3074` / PC port `3658`), real-time ping tracking, 1-click connect, and dedicated lobby hosting.
4. **First-Class Modding Suite:** 1-click custom map and addon manager (`addon/<mapID>`), Lua 5.0 bytecode-safe metadata parser, format compatibility verification (Xbox `_LVL_XBOX` vs PC `_LVL_PC`), non-destructive enabling/disabling, and Zip Slip-safe drag-and-drop archive extraction.

---

## 2. Goals, Non-Goals, and Anti-Goals

### 2.1 Goals
- **Blazing Fast & Lightweight:** Cold launch in <250ms with idle memory usage <40MB RAM.
- **Zero-Friction Game Launch & Process Supervision:**
  - Direct process supervision of `swbf2_recomp.exe` on Windows.
  - Transparent Wine/Proton/CrossOver runner bridge on Linux and macOS with automatic path translation (`winepath`) and `WINEPREFIX` management, preparing for future native POSIX/Metal recompiler targets.
  - Enforce single-instance process locking to prevent overlapping NV2A / guest address collisions.
  - Capture child process `stderr` and `xbox_kernel.log` on exit for instant, user-friendly crash diagnostics.
- **Online Server Browser & Netplay:**
  - Query modern community master server API (REST / JSON) with live ping metrics.
  - Local subnet LAN auto-discovery via UDP broadcast sockets (port `3074` System Link and port `3658` PC LAN).
  - 1-Click Connect with automated pre-flight checks (installed maps, required version).
- **Mod Management & Addon Staging:**
  - Automatic detection of custom maps in `game_files/addon/<mapID>/` and `game_files/TDATA/`.
  - Bytecode-safe `addme.script` parsing supporting both plain-text Lua and compiled Lua 5.0 chunk string tables.
  - Format compatibility badging: detect whether mods contain Xbox-native assets (`_LVL_XBOX`) or PC DirectX 9 assets (`_LVL_PC`).
  - Non-destructive toggle (active staging vs `addon_disabled/<mapID>`).
  - Drag-and-drop archive decompression (`.zip`, `.7z`, `.rar`) with strict Zip Slip path sanitization.
- **Bi-Directional Configuration Synchronization:**
  - Manage all `bf2_recomp.ini` keys with GUI controls (sliders, dropdowns, toggles).
  - Inject environment variables (`RECOMP_RES_SCALE`, `RECOMP_ASPECT`, `RECOMP_CAS`, `RECOMP_PRESENT_VSYNC`, `RECOMP_MKB`, etc.) at process spawn for guaranteed instant override.

### 2.2 Non-Goals
- Re-implementing the game simulation inside the launcher; gameplay simulation remains inside `swbf2_recomp`.
- Bundling proprietary copyright game assets into the launcher repository.
- Modifying or querying Windows host audio hardware devices under any circumstances.

### 2.3 Anti-Goals
- **Heavy Webview Bloat:** Avoiding multi-gigabyte RAM footprints or multi-second startup lag (common in heavyweight Electron wrappers).
- **Destructive Mod Handling:** Never overwrite core base game files when installing community maps.
- **Platform Incompatibilities:** No Windows-only APIs in the launcher core; all launcher code must compile identically on macOS, Linux, and Windows.

---

## 3. Technology Stack & Approaches Evaluated

| Component | Technology | Rationale |
| :--- | :--- | :--- |
| **Backend Core** | Rust 2021 + Tauri 2.0 Core | Ultra-fast native execution, async I/O (`tokio`), raw UDP sockets, memory safety, zero-overhead packaging. |
| **Frontend Framework** | TypeScript + Vite + Tailwind CSS | Instant Hot-Module-Replacement, crisp UI rendering, low memory overhead, easily themed. |
| **Packaging & Bundling** | Tauri CLI v2 (`cargo tauri build`) | Produces native platform installers: `.msi`/`.exe` (Windows), `.AppImage`/`.deb` (Linux), `.dmg`/`.app` (macOS). |
| **Network Engine** | `tokio::net::UdpSocket` + `reqwest` | Asynchronous non-blocking LAN discovery and HTTPS master server API queries. |
| **Archive Decompression**| `zip`, `flate2` with canonical path verification | Safe, fast local extraction without external dependencies. |

---

## 4. System Architecture & Component Design

```
+-------------------------------------------------------------------------+
|                  Star Wars: Battlefront II Desktop Hub                  |
+-------------------------------------------------------------------------+
|  [Launch]  |  [Server Browser]  |  [Mod Manager]  |  [Host]  |  [Config] |
+-------------------------------------------------------------------------+
                                    | IPC (Tauri Commands)
                                    v
+-------------------------------------------------------------------------+
|                              Rust Backend                               |
|  - process_runner.rs: Launches & supervises swbf2_recomp (Win/Wine)     |
|  - config_manager.rs: Parses/serializes bf2_recomp.ini & env overrides  |
|  - mod_scanner.rs: Discovers addons, parses Lua bytecode, checks format |
|  - net_browser.rs: UDP LAN discovery (3074/3658) + master server REST   |
|  - archive_extractor.rs: Zip Slip-hardened drag-and-drop installer       |
+-------------------------------------------------------------------------+
             |                                    |
             v                                    v
+------------------------+              +-------------------+
|  Target File System    |              | Network Sockets   |
|  - bf2_recomp.ini      |              | - Master Server   |
|  - game_files/addon/   |              | - LAN UDP 3074    |
|  - swbf2_recomp.exe    |              | - LAN UDP 3658    |
+------------------------+              +-------------------+
```

### 4.1 Cross-Platform Process Runner (`process_runner.rs`)
- **Windows (Tier-1 Native):**
  - Spawns `swbf2_recomp.exe` directly via `std::process::Command`.
  - Sets process environment variables (`RECOMP_RES_SCALE`, `RECOMP_ASPECT`, `RECOMP_CAS`, `RECOMP_PRESENT_VSYNC`, `RECOMP_MKB`, etc.).
  - Passes CLI arguments `-connect <ip>:<port>`, `-fullscreen`, `-mod <id>`.
  - Holds single-instance lock via system named mutex (`SWBF2_RECOMP_INSTANCE_MUTEX`).
- **Linux & macOS (Wine/Proton Bridge):**
  - Detects installed Wine / Proton (`/usr/bin/wine`, `lutris`, `steamapps/common/Proton*`, or macOS Whisky / CrossOver).
  - Translates game and addon paths into Wine DOS paths via `winepath -w`.
  - Sets up sandboxed `WINEPREFIX` with DXVK enabled.
  - Monitors the Wine child process PID and streams stdout/stderr back to the launcher UI.
- **Exit Telemetry & Crash Handling:**
  - Upon child exit, if exit code is non-zero, captures the tail of `stderr` and `game_files/xbox_kernel.log`.
  - Pops a native diagnostics modal showing the failure reason (e.g. missing asset, unmapped virtual address, or direct sound fault).

### 4.2 Configuration Engine (`config_manager.rs`)
- Full bi-directional parsing and serialization of `bf2_recomp.ini`.
- Supported key sections:
  - `[Graphics]`: `res_scale` (1=640x480, 2=1280x960 HD, 3=1920x1440 QHD, 4=2560x1920 4K), `aspect` (`16:9`, `21:9`, `32:9`, `4:3`), `window_scale`, `fullscreen`, `vsync`, `fps_limit`, `cas`, `anisotropy`, `gpu_vsh`, `shader_cache`, `visibility_uav`.
  - `[Controls]`: `mouse_input`, `mouse_sens`, `mouse_full`, `mouse_sens_x`, `mouse_sens_y`, `mouse_smoothing`, `mouse_acc`, `mouse_invert_y`, `deadzone`.
  - `[Kernel]`: `dispatch_gate`, `save_dir`.
- Automatic validation: Clamp numerical ranges, enforce safe minimum deadzones (0.0 to 0.9), and sanitize aspect ratio strings.

### 4.3 Multiplayer Server Browser & Netplay Protocol (`net_browser.rs`)
- **Master Server REST Client:**
  - Endpoint: Configurable (defaults to community endpoint `https://master.swbf2recomp.org/api/v1/servers`, with mock fallback for local testing).
  - JSON Schema:
    ```json
    [
      {
        "id": "srv_01",
        "name": "Coruscant 24/7 [Low Ping]",
        "ip": "142.250.190.46",
        "port": 3074,
        "map": "cor1g_con",
        "mode": "Conquest",
        "players": 24,
        "max_players": 64,
        "ping_ms": 28,
        "requires_password": false
      }
    ]
    ```
- **Local LAN Discovery Protocol:**
  - Binds async UDP socket on `0.0.0.0:0`.
  - Broadcasts probe beacons to `255.255.255.255:3074` (Xbox System Link) and `255.255.255.255:3658` (PC LAN).
  - Packet Format: Magic header `0x53574246` ("SWBF"), Title ID `0x4C530002`, opcode `0x01` (PING).
  - Responding hosts return server name, current map, active players, and max slots.
- **1-Click Connect Handshake:**
  - Verifies required map is installed (checks `Data/_LVL_XBOX/<MAP>/` or `addon/<MAP>/`).
  - Launches `swbf2_recomp.exe` with `RECOMP_CONNECT_IP=<ip>` and `RECOMP_CONNECT_PORT=<port>` and CLI `-connect <ip>:<port>`.

### 4.4 Modding & Addon Suite (`mod_scanner.rs`, `archive_extractor.rs`)
- **Directory Layout & File Mapping:**
  - Active mods reside in `game_files/addon/<mapID>/` (e.g. `addon/BFR/`, `addon/KOTOR/`, `addon/BF1/`).
  - Recomp path router bridges `game_files/addon/` into Xbox `T:\` (`TDATA\<title_id>`) DLC paths.
- **Bytecode-Safe Metadata Parsing:**
  - Reads `addme.script`.
  - If plain-text Lua: Parses `AddDownloadableContent("<mapID>", ...)`.
  - If compiled Lua 5.0 bytecode (signature `\x1bLua\x50`): Iterates constant string tables in function prototypes to extract map titles, descriptions, and game mode identifiers.
- **Asset Compatibility Verification:**
  - Scans mod directory for `.lvl` files.
  - Inspects file headers:
    - Xbox Native: Contains `_LVL_XBOX` or NV2A texture chunk identifiers. (Marked **Verified Recomp Compatible**).
    - PC DirectX 9: Contains `_LVL_PC` or desktop DX9 D3DFMT textures. (Marked **PC Format - Needs Recomp Conversion**).
- **Non-Destructive Toggling:**
  - Disabling a mod renames `game_files/addon/<mapID>` to `game_files/addon_disabled/<mapID>`.
- **Zip Slip-Hardened Archive Extractor:**
  - Inspects all entries before extraction.
  - Rejects any entry containing `..`, absolute drives (`C:\`), or leading slashes.
  - Validates that `canonicalize(target_path).starts_with(canonicalize(addon_dir))`.

---

## 5. Host Safety & Security Invariants

1. **Host Audio Invariant:** Launcher code NEVER queries, manipulates, or alters Windows host audio hardware or default devices under any circumstances.
2. **Safe Path Confinement:** All file operations are strictly confined within the `game_files/` directory and `bf2_recomp.ini`.
3. **Tauri 2.0 Scoped Capabilities:**
   - Filesystem access limited to the application installation folder.
   - Sockets restricted to outbound UDP ports 3074/3658 and HTTPS master server queries.
   - Shell process spawning restricted to `swbf2_recomp.exe` and `wine`.

---

## 6. Implementation Milestones

1. **Phase 1: Project Scaffolding (`launcher/`)**
   - Initialize Tauri 2.0 app with Rust backend and Vite/Tailwind frontend.
   - Set up Star Wars dark sci-fi UI theme and tab navigation (Play, Servers, Mods, Settings).
2. **Phase 2: Configuration & Process Runner**
   - Implement `config_manager.rs` for `bf2_recomp.ini` parsing, serialization, and validation.
   - Implement `process_runner.rs` with single-instance lock, environment injection, and crash log telemetry.
   - Add CLI argument parsing in `bf2_recomp/src/main.c`.
3. **Phase 3: Modding Engine & Archive Extractor**
   - Implement `mod_scanner.rs` with Lua bytecode string table parsing.
   - Implement `archive_extractor.rs` with Zip Slip security checks.
   - Build Mod Manager UI with enable/disable switches and compatibility badges.
4. **Phase 4: Multiplayer Server Browser**
   - Implement async UDP LAN scanner (ports 3074/3658).
   - Implement master server REST client with mock fallback.
   - Build server browser UI with filter, sorting, and 1-click connect.
5. **Phase 5: Verification & Packaging**
   - Run end-to-end integration tests on Windows and verify cross-platform build scripts for Linux and macOS.
