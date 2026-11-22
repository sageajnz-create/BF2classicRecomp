# Desktop Hub Launcher Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Build a standalone, high-performance, cross-platform desktop hub launcher for Star Wars: Battlefront II PC recompilation featuring process supervision, configuration synchronization, online multiplayer browser with LAN discovery, and mod management with Zip Slip-hardened extraction.

**Architecture:** Tauri 2.0 application with a lightweight Rust backend for native process supervision, UDP socket discovery, and filesystem safety, paired with a modern Star Wars themed TypeScript/Vite/Tailwind frontend. Communicates with `swbf2_recomp` via atomic `bf2_recomp.ini` updates, environment variable overrides, and CLI parameters.

**Tech Stack:** Rust 2021, Tauri 2.0, Tokio (async UDP & filesystem), TypeScript, Vite, Tailwind CSS, C11 (`bf2_recomp`).

**Spec:** [Desktop hub design](../specs/2026-11-18-desktop-hub-launcher-design.md)

---

## Global Constraints

- **Host Audio Invariant:** Launcher code NEVER queries, manipulates, or alters Windows host audio hardware or default devices under any circumstances.
- **Copyright Asset Protection:** Never commit copyrighted assets (`*.iso`, `*.xbe`, `game_files/`, `logs/`, `*.obj`) to Git.
- **Resource Footprint:** Cold launch under 250ms, idle memory usage under 40MB RAM.
- **Cross-Platform Readiness:** All launcher code compiles cleanly across Windows, Linux, and macOS without platform-exclusive API leaks.
- **Filesystem Confinement:** File manipulations are strictly confined within the application directory (`bf2_recomp.ini`, `game_files/addon/`, `game_files/addon_disabled/`).

---

## Review Focus

1. **Zip Slip / Directory Traversal in Mod Archives:** A malicious or improperly packed mod zip containing `../../something.dll` must be rejected before any file is written to disk.
2. **Compiled Lua 5.0 Bytecode in `addme.script`:** Mod metadata reader must safely handle binary Lua bytecode chunks without crashing or outputting garbage characters.
3. **Malformed or Missing `bf2_recomp.ini`:** Parsing an invalid or partial ini file must fallback gracefully to default values without corrupting existing user preferences.
4. **Network Timeout / UDP Packet Loss in LAN Scanner:** Scanning for LAN games on non-responsive subnets must never block the UI or hang asynchronous tasks.
5. **Single-Instance Collision:** Launching the game while an existing instance is already running must be intercepted and reported to prevent fixed virtual memory crashes.

---

## Tasks

### Task 1: Project Scaffolding & Tauri 2.0 Rust/Web Architecture (`launcher/`)

**Files:**
- Create: `launcher/package.json`
- Create: `launcher/tsconfig.json`
- Create: `launcher/vite.config.ts`
- Create: `launcher/index.html`
- Create: `launcher/src-tauri/Cargo.toml`
- Create: `launcher/src-tauri/tauri.conf.json`
- Create: `launcher/src-tauri/capabilities/default.json`
- Create: `launcher/src-tauri/src/main.rs`
- Create: `launcher/src-tauri/src/lib.rs`

- [ ] **Step 1: Write package.json and frontend dependencies**
  - Setup Vite, TypeScript, and `@tauri-apps/cli` v2 with `@tauri-apps/api` v2.
  - Run `npm install` inside `launcher/`.

- [ ] **Step 2: Write Cargo.toml and Tauri 2.0 configuration**
  - Configure `launcher/src-tauri/Cargo.toml` with `tauri = "2"`, `serde = { version = "1", features = ["derive"] }`, `serde_json = "1"`, `tokio = { version = "1", features = ["full"] }`, `ini = "1.3"`, `zip = "2"`.
  - Configure `tauri.conf.json` with product title "SWBF2 Recomp Hub", identifier "org.swbf2recomp.launcher", and window dimensions (980x640, dark frame).
  - Configure `capabilities/default.json` scoping filesystem and core Tauri commands.

- [ ] **Step 3: Build and verify Tauri skeleton compilation**
  - Run `cargo check --manifest-path launcher/src-tauri/Cargo.toml` to ensure all crates resolve and compile cleanly.

- [ ] **Step 4: Commit**
  - Git commit: `chore(launcher): initialize Tauri 2.0 desktop hub project skeleton`

---

### Task 2: CLI Argument & Environment Variable Handling in `bf2_recomp/src/main.c`

**Files:**
- Modify: `bf2_recomp/src/main.c`
- Test: `bf2_recomp/tests/check_cli_args.c`

- [ ] **Step 1: Write failing unit test for CLI argument parsing**
  - Create `bf2_recomp/tests/check_cli_args.c` testing a dedicated argument parser function:
    - `-connect <ip>:<port>` sets `RECOMP_CONNECT_IP` and `RECOMP_CONNECT_PORT`.
    - `-fullscreen` sets `RECOMP_FULLSCREEN=1`.
    - `-res <scale>` sets `RECOMP_RES_SCALE`.
    - `-mod <id>` sets `RECOMP_ACTIVE_MOD`.
  - Add test target to CMake and verify test fails before implementation.

- [ ] **Step 2: Implement CLI argument parsing in `main.c`**
  - Update `main(int argc, char **argv)` and `WinMain` to parse command line strings and populate environment variables using `_putenv_s`.
  - Ensure CLI parameters take precedence over `bf2_recomp.ini`.

- [ ] **Step 3: Run tests and verify passing**
  - Compile and run `check_cli_args.exe`. Ensure 100% assertions pass.

- [ ] **Step 4: Commit**
  - Git commit: `feat(recomp): add CLI argument parsing and environment override support`

---

### Task 3: Configuration Engine (`config_manager.rs`)

**Files:**
- Create: `launcher/src-tauri/src/config_manager.rs`
- Create: `launcher/src-tauri/tests/test_config.rs`
- Modify: `launcher/src-tauri/src/lib.rs`

- [ ] **Step 1: Write failing test for `bf2_recomp.ini` parsing and serialization**
  - Create test `launcher/src-tauri/tests/test_config.rs` exercising:
    - Loading valid `bf2_recomp.ini` with all `[Graphics]`, `[Controls]`, `[Kernel]` values.
    - Handling missing or partial keys with safe defaults (e.g. `res_scale=2`, `aspect="16:9"`).
    - Serializing modifications atomically to disk without losing comments or ordering.
    - Range clamping: `res_scale` (1..4), `deadzone` (0.0..0.9), `fps_limit` (0, 60, 120, 144, 240).

- [ ] **Step 2: Implement `config_manager.rs`**
  - Implement struct `RecompConfig` with `load_from_path(path: &Path)`, `save_to_path(path: &Path)`, and `to_env_map(&self) -> HashMap<String, String>`.
  - Expose Tauri commands: `get_game_config()`, `save_game_config(config: RecompConfig)`.

- [ ] **Step 3: Run Rust tests and verify passing**
  - Run `cargo test --manifest-path launcher/src-tauri/Cargo.toml --test test_config`.

- [ ] **Step 4: Commit**
  - Git commit: `feat(launcher): implement configuration engine with atomic ini serialization`

---

### Task 4: Process Runner & Cross-Platform Execution Supervisor (`process_runner.rs`)

**Files:**
- Create: `launcher/src-tauri/src/process_runner.rs`
- Create: `launcher/src-tauri/tests/test_process_runner.rs`
- Modify: `launcher/src-tauri/src/lib.rs`

- [ ] **Step 1: Write failing test for process launch environment generation & instance check**
  - Test command generation on Windows (`swbf2_recomp.exe` + args + env) and mock Wine invocation on Linux/macOS.
  - Test single-instance lock validation logic.

- [ ] **Step 2: Implement `process_runner.rs`**
  - Implement `launch_game(options: LaunchOptions) -> Result<u32, String>`.
  - Populate environment variables from `config_manager.to_env_map()`.
  - Inject CLI arguments: `-connect <ip>:<port>` if connecting to a multiplayer server.
  - Add exit watcher thread that captures `stderr` output and detects crashes, emitting a Tauri event `game-exited` with exit code and crash logs.
  - Expose Tauri command `launch_game(options: LaunchOptions)`.

- [ ] **Step 3: Run Rust tests and verify passing**
  - Run `cargo test --manifest-path launcher/src-tauri/Cargo.toml --test test_process_runner`.

- [ ] **Step 4: Commit**
  - Git commit: `feat(launcher): implement cross-platform process runner and crash telemetry supervisor`

---

### Task 5: Modding Engine & Bytecode-Safe Addon Scanner (`mod_scanner.rs`)

**Files:**
- Create: `launcher/src-tauri/src/mod_scanner.rs`
- Create: `launcher/src-tauri/tests/test_mod_scanner.rs`
- Modify: `launcher/src-tauri/src/lib.rs`

- [ ] **Step 1: Write failing test for addon discovery and metadata parsing**
  - Test detecting mods in `game_files/addon/<mapID>/`.
  - Test parsing plain-text `addme.script` for `AddDownloadableContent`.
  - Test parsing compiled Lua 5.0 bytecode chunks (`\x1bLua\x50`) to extract string literals safely.
  - Test detecting whether `.lvl` files contain `_LVL_XBOX` (Xbox Native) vs `_LVL_PC` (PC Format).
  - Test toggling mod status: moving folder between `addon/<mapID>` and `addon_disabled/<mapID>`.

- [ ] **Step 2: Implement `mod_scanner.rs`**
  - Implement `scan_addons(game_dir: &Path) -> Vec<ModInfo>`.
  - Implement binary Lua string scanner for extracting ASCII strings between 3 and 64 characters from bytecode chunks.
  - Implement `toggle_mod(game_dir: &Path, mod_id: &str, enable: bool) -> Result<(), String>`.
  - Expose Tauri commands: `list_mods()`, `toggle_mod(mod_id: String, enable: bool)`.

- [ ] **Step 3: Run Rust tests and verify passing**
  - Run `cargo test --manifest-path launcher/src-tauri/Cargo.toml --test test_mod_scanner`.

- [ ] **Step 4: Commit**
  - Git commit: `feat(launcher): implement bytecode-safe mod scanner and non-destructive addon toggle`

---

### Task 6: Safe Drag-and-Drop Archive Extractor with Zip Slip Protection (`archive_extractor.rs`)

**Files:**
- Create: `launcher/src-tauri/src/archive_extractor.rs`
- Create: `launcher/src-tauri/tests/test_archive_extractor.rs`
- Modify: `launcher/src-tauri/src/lib.rs`

- [ ] **Step 1: Write failing test for Zip Slip detection and safe mod extraction**
  - Create test with synthetic zip files:
    - Normal mod zip with `addon/XYZ/...` extracting safely.
    - Path traversal attack zip with `../../malicious.txt` returning `Err(ZipSlipDetected)`.
    - Absolute path entry `C:\evil.exe` returning `Err(InvalidPath)`.

- [ ] **Step 2: Implement `archive_extractor.rs`**
  - Implement `extract_mod_archive(zip_path: &Path, target_dir: &Path) -> Result<ExtractedModInfo, String>`.
  - Canonicalize paths and verify `target_file.starts_with(&target_dir)`.
  - Automatically detect root folder structure and unpack into `game_files/addon/<mapID>/`.
  - Expose Tauri command `install_mod_from_archive(archive_path: String)`.

- [ ] **Step 3: Run Rust tests and verify passing**
  - Run `cargo test --manifest-path launcher/src-tauri/Cargo.toml --test test_archive_extractor`.

- [ ] **Step 4: Commit**
  - Git commit: `feat(launcher): implement Zip Slip-hardened archive extractor for mod installs`

---

### Task 7: Multiplayer Server Browser & UDP LAN Protocol (`net_browser.rs`)

**Files:**
- Create: `launcher/src-tauri/src/net_browser.rs`
- Create: `launcher/src-tauri/tests/test_net_browser.rs`
- Modify: `launcher/src-tauri/src/lib.rs`

- [ ] **Step 1: Write failing test for master server query and UDP LAN broadcast packet encoding**
  - Test encoding LAN ping packet `0x53574246` ("SWBF").
  - Test decoding response beacon containing server name, map name, player counts.
  - Test querying mock REST endpoint returning JSON server list.

- [ ] **Step 2: Implement `net_browser.rs`**
  - Implement `scan_lan_servers(timeout_ms: u64) -> Vec<ServerInfo>` using `tokio::net::UdpSocket`.
  - Implement `query_master_server(url: &str) -> Result<Vec<ServerInfo>, String>`.
  - Expose Tauri commands: `get_servers(source: String) -> Result<Vec<ServerInfo>, String>`.

- [ ] **Step 3: Run Rust tests and verify passing**
  - Run `cargo test --manifest-path launcher/src-tauri/Cargo.toml --test test_net_browser`.

- [ ] **Step 4: Commit**
  - Git commit: `feat(launcher): implement UDP LAN discovery protocol and master server REST client`

---

### Task 8: Modern Star Wars Themed Desktop Hub UI (`launcher/src/`)

**Files:**
- Create: `launcher/src/index.html`
- Create: `launcher/src/styles.css`
- Create: `launcher/src/main.ts`
- Create: `launcher/src/components/PlayTab.ts`
- Create: `launcher/src/components/ServerBrowserTab.ts`
- Create: `launcher/src/components/ModManagerTab.ts`
- Create: `launcher/src/components/SettingsTab.ts`

- [ ] **Step 1: Implement Star Wars Dark Sci-Fi CSS Styling**
  - Slate dark backgrounds (`#0B0E14`), holographic neon blue accents (`#38BDF8`), Imperial red indicators (`#EF4444`), crisp monospace telemetry headers.
  - Responsive header with game title, active status, and soundless visual audio meters.

- [ ] **Step 2: Implement Tabs and Tauri IPC Integrations**
  - **Play Tab:** Large "LAUNCH BATTLEFRONT II" button, current resolution badge, active mod summary, instant launch triggering `launch_game()`.
  - **Server Browser Tab:** Table with filter by map/mode, ping indicator, "Refresh LAN", "Refresh Internet", and "Connect" button triggering 1-click connect.
  - **Mod Manager Tab:** List of detected addons with Xbox Native vs PC format badges, 1-click enable/disable switches, and drag-and-drop archive drop zone.
  - **Settings Tab:** GUI controls for Resolution Scale (1x to 4x), Aspect Ratio (16:9, 21:9, 32:9), Mouse Sensitivity, Raw Aim Deadzone, VSync, and CAS.

- [ ] **Step 3: Verify frontend bundle build**
  - Run `npm run build` in `launcher/` and verify clean TypeScript and Vite compilation.

- [ ] **Step 4: Commit**
  - Git commit: `feat(launcher): create responsive Star Wars themed desktop hub user interface`

---

### Task 9: End-to-End Integration, Cross-Platform Packaging & Verification

**Files:**
- Modify: `launcher/src-tauri/tauri.conf.json`
- Create: `launcher/scripts/build_all_platforms.ps1`
- Test: Manual end-to-end launch verification

- [ ] **Step 1: End-to-end integration test of Launcher <-> Game**
  - Test launcher reading existing `bf2_recomp.ini` from repository root.
  - Test launching `swbf2_recomp.exe` through launcher with custom resolution scale and mouse sensitivity.
  - Test process termination clean exit code detection.

- [ ] **Step 2: Package Release Windows Binary**
  - Run `cargo tauri build` to generate standalone `launcher.exe` in `launcher/src-tauri/target/release/`.

- [ ] **Step 3: Document packaging instructions for Linux and macOS**
  - Write multi-platform instructions for Linux (`.AppImage` with WebKitGTK 4.1) and macOS (`.dmg`).

- [ ] **Step 4: Final commit and land**
  - Git commit: `feat(launcher): complete standalone cross-platform desktop hub launcher implementation`
