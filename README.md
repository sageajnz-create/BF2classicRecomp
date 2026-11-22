# Star Wars: Battlefront II — Native PC Recompilation

A native 64-bit Windows port in development for **Star Wars: Battlefront II (2005)**. It uses ahead-of-time (AOT) static recompilation of the original Xbox executable and loads the extracted assets from your copy of the disc.

## Quick Start

Double-click `run_swbf2.bat` in the root directory, or run it from PowerShell:

```powershell
./run_swbf2.bat
```

The launcher starts the latest build in `bf2_recomp/build/Release/` and uses the existing assets in `bf2_recomp/game_files/`.

The current Windows build enables the accelerated D3D11 renderer by default.
`run_swbf2_hardware.bat` explicitly selects its hardware profile. Prior Windows
playtests verified a Coruscant match completion and round transitions. Later
Windows benchmarks recorded a 64.5 FPS weighted average over 12 combat windows
at 2× internal resolution, with the heaviest firefights dipping into the
50–60 FPS range. See `HANDOFF.md` for the tested builds and settings.

### Linux and Bazzite

The Linux launch path uses the x64 Windows build through Proton or Wine. It
requires the extracted files from your own Xbox copy and a writable game
directory for settings and saves.

1. On Windows, build the Release target as described below and stage the runtime
   into a new directory.

   ```powershell
   cmake --install bf2_recomp/build --config Release --prefix ./out/swbf2-runtime
   ```

2. Copy the staged directory to the Linux machine. Put the extracted disc files
   in it so that `default.xbe`, the `Data` and `media` directories, and
   `swbf2_recomp.exe` are siblings.
3. On Bazzite, add `swbf2_recomp.exe` as a non-Steam game in Desktop Mode. In the
   shortcut properties, set **Start In** to the game directory and enable
   **Force the use of a specific Steam Play compatibility tool** under
   **Compatibility**. Choose an installed Proton version. The shortcut can also
   be launched from Gaming Mode. [Bazzite game launcher documentation](https://docs.bazzite.gg/Gaming/Game_Launchers/)

For a terminal launch on other x86-64 distributions, install `umu-run` or
64-bit Wine and run this from the staged directory.

```sh
sh ./run_swbf2_linux.sh -windowed
```

The helper prefers `umu-run` and otherwise uses Wine. Set
`SWBF2_LINUX_RUNNER=wine` or `SWBF2_LINUX_RUNNER=umu` to choose explicitly.
Each runner gets its own prefix under `${XDG_DATA_HOME:-$HOME/.local/share}/swbf2-recomp`
unless `WINEPREFIX` is set. Set `SWBF2_GAME_DIR` if the executable and disc files
are in a different directory. [umu runner options](https://github.com/Open-Wine-Components/umu-launcher/blob/main/docs/umu.1.scd)

Linux testing under Wine and DXVK covers startup, profile saving and reopening,
and spawning, movement, and firing in Coruscant Conquest. The combat smoke test
used a virtual display and software Vulkan at 1× internal resolution. Full
matches and performance on Bazzite hardware are still pending.

### Controls

An XInput controller uses the game's original controls. When using native PC Mouse and Keyboard (`mouse_input=1` in `bf2_recomp.ini`), controls follow standard PC FPS conventions with 1:1 raw mouse look and automatic cursor confinement:

| Mouse / Keyboard | In-Game Action | Xbox Control Equivalent |
| --- | --- | --- |
| **Mouse Move** | Look / Aim (1:1 Raw Input) | Right stick |
| **Left Click** | Primary Fire | Right Trigger |
| **Right Click** | Secondary Fire / Zoom (ADS) | Left Trigger |
| **Middle Click / Wheel** | Cycle Weapon | Y Button |
| **Mouse 4 (Thumb 1)** | Throw Grenade | White Button |
| **Mouse 5 (Thumb 2)** | Melee / Secondary Attack | Black Button |
| **W / A / S / D** | Movement | Left Stick |
| **Space** | Jump / Menu Select | A Button |
| **Left Ctrl / C / Alt** | Crouch / Combat Roll | B Button |
| **Left Shift** | Sprint | Left Stick Click |
| **R** | Reload Weapon | X Button |
| **E** | Enter Vehicle / Action / Interact | X Button |
| **Q / G** | Grenade | White Button |
| **F** | Melee / Secondary Weapon | Black Button |
| **1 / 2** | Primary / Secondary Weapon | Y Button |
| **3 / 4** | Special / Ability Equipment | White / Black Button |
| **V** | Toggle 1st / 3rd Person View | Right Stick Click |
| **Tab / M** | Scoreboard / Map & Command Posts | Back Button |
| **Esc / Enter** | Pause / Menu | Start Button |
| **Backspace / X** | Cancel / Menu Back | B Button |
| **Z** | Menu Select | A Button |
| **Arrow keys** | D-pad navigation | D-pad |
| **F1 / Home** | Toggle In-Game Settings Overlay (OSD) | — |
| **F9** | Toggle Mouse Capture & Release | — |
| **F11 / Alt+Enter** | Toggle Borderless Fullscreen | — |
| **F12** | Save In-Game Screenshot (`screenshots/`) | — |

### In-Game Settings Overlay

Press **`F1`** or **`Home`** at any point during gameplay or in menus to open the holographic Star Wars settings overlay:
- **Display & Graphics**: Live adjustment of Internal 3D Resolution Scale (1x, 2x HD, 3x QHD, 4x 4K), Aspect Ratio Viewport (16:9, 4:3, 21:9 Ultrawide, 32:9), VSync, FPS Limit (Uncapped, 60, 120, 144, 240), and AMD FidelityFX CAS Sharpness.
- **Controls & Aim**: Interactive tuning of Mouse Sensitivity, Horizontal/Vertical sensitivity multipliers, Stick Deadzone compensation curve, EMA smoothing, and Invert Y.
- **Telemetry**: Real-time pipeline status and system information.
- **Navigation**: Supports mouse clicking/dragging, keyboard (`Up`/`Down`/`Left`/`Right`/`Enter`/`Tab`/`Esc`), and gamepad D-pad. While open, background weapon firing and camera movement are muted. Clicking **`[ APPLY & SAVE TO INI ]`** (or closing the menu) atomically persists changes to `bf2_recomp.ini`.

Optional frame pacing has been checked through menus, Coruscant movement,
firing and return to the main menu. It keeps menus near 60 FPS and follows
the game's requested swap interval. Longer sessions remain to be checked:

```powershell
$env:RECOMP_FLIP_PACING = 'edge'
./run_swbf2_hardware.bat
```

Close that PowerShell session to discard the option, or set it to `0`.

### Live overlay smoke check

Run from the project root on a Windows desktop with CPython, the existing
Release build, and the extracted `bf2_recomp/game_files/`:

```powershell
python tools/check_overlay_live.py
```

The script launches the game twice and sends keyboard messages only to its own
game window. It checks D3D11 captures for F1 and Home open/close and for keyboard
navigation to **Controls → Invert Vertical Aim Axis**. It checks the guest-facing
controller state for Start while Enter is held before opening, while open, and
after closing. Start must be suppressed while open. The changed setting must be
written on close and appear as **ON** after relaunch. A failed check returns a
nonzero exit code.

Each run writes its captures, logs, and test INI under the Git-ignored
`logs/overlay-smoke/`. The script links the existing build and extracted files
into that directory for the duration of the run. It uses its own INI and guest
saves and makes no Windows audio settings queries or changes.

**Manual gameplay acceptance.** Spawn in an offline match and confirm movement,
mouse look, and firing work. Open the overlay with a physical F1 or Home press.
Try WASD, move the mouse, and click an overlay control. Verify the soldier stays
still, the view stays fixed, and the weapon does not fire. Close the overlay and
verify normal movement, aiming, and firing resume without a camera jump or stuck
input. Repeat with a controller if one is in scope for the playtest.

### Rebuild from source

Run from the project root with Visual Studio C++, CMake, and a Windows SDK
that includes `fxc.exe`. The build embeds the fixed D3D11 shaders as bytecode.
If CMake cannot find the SDK's shader compiler, configure with
`-DBF2_FXC=C:/path/to/fxc.exe`. [Microsoft FXC documentation](https://learn.microsoft.com/en-us/windows/win32/direct3dtools/fxc)

```powershell
cmake -S bf2_recomp -B bf2_recomp/build -A x64
cmake --build bf2_recomp/build --config Release --target swbf2_recomp
```

The build writes `swbf2_recomp.exe` and its PDB into `bf2_recomp/build/Release/`.

### Runtime

The game runs as native x64 code generated from Xbox x86 instructions. The original Xbox D3D code drives xboxrecomp's NV2A pushbuffer executor, software rasterizer, and framebuffer window. The toolkit supplies the MCPX audio model with XAudio2 and the USB gamepad model with Windows gamepad and keyboard input.

Two opt-in diagnostics help when profiling: `RECOMP_RASTER_TIMING=1` prints a five-second draw breakdown (vertex, triangle setup, submission, clears, present), and `RECOMP_HOST_PROFILE=1` samples the guest thread and prints the functions it spends its time in. Neither is needed to play. With the D3D11 world renderer, `RECOMP_GPU_TIMING=1` (alongside `RECOMP_RASTER_TIMING=1`) adds `[GPU-TIMING]` reports measuring actual GPU execution per flip via timestamp queries — world draws and the present blit separately — plus occlusion queries per flip, so CPU-side waits can be told apart from GPU work.

---

## Directory Structure

```
BF2classicRecomp/
├── run_swbf2.bat                   # Convenient launcher
├── StarWarsBattlefrontII.iso       # Original game disc image
├── default.xbe                     # Extracted Xbox game executable
├── default_analysis.json           # XBE section map, entry point & kernel import table
├── bf2_recomp/                     # Recompiled game project
│   ├── CMakeLists.txt              # CMake project build script
│   ├── build/                      # Visual Studio build tree
│   │   └── Release/                # Native 64-bit executable & PDB
│   ├── game_files/                 # Game deployment directory
│   │   ├── default.xbe             # Game header & data references
│   │   ├── Data/                   # Extracted game assets (.lvl levels, sounds, models)
│   │   └── media/                  # Fonts and audio packages
│   └── src/
│       ├── main.c                  # Host loader, memory layout & VEH crash diagnostics
│       ├── recomp_manual.c         # Manual function override hooks
│       └── recomp/gen/             # 85 generated C source files (recomp_0000.c - recomp_0084.c)
│           ├── recomp_funcs.h      # Declarations for all 21,006 functions
│           ├── recomp_types.h      # Runtime CPU register & memory model
│           └── recomp_dispatch.c   # Indirect call (ICALL) binary-search dispatch table
└── tools/
    └── xboxrecomp/                 # Static recompilation toolkit & runtime libraries
        ├── src/kernel/             # Xbox kernel -> Win32 translation (146 imports)
        ├── src/d3d/                # Xbox D3D8 -> Direct3D 11 graphics backend
        ├── src/audio/              # DirectSound & XAudio2 backend
        ├── src/apu/                # MCPX APU hardware audio emulation
        ├── src/nv2a/               # NV2A GPU state & pushbuffer emulation
        ├── src/input/              # Gamepad -> XInput & keyboard input
        └── tools/                  # Python analysis pipeline (parser, disasm, func_id, recomp)
```

---

## Technical Pipeline Summary

1. **XISO Asset Extraction**:
   - `tools.xiso` unpacked all 219 game assets (`Data/_LVL_XBOX/*.lvl`, `Movies/*.mvs`, sound banks, and fonts) into `bf2_recomp/game_files/`.
2. **XBE Binary Analysis**:
   - Analyzed sections: `.text` (3.7 MB), `D3DX`, `XONLINE`, `XNET`, `XMV`, `DSOUND`, `D3D`, `XGRPH`, `XPP`, `DOLBY`.
   - Mapped all 146 Xbox kernel imports (all provided by `xbox_kernel`).
3. **Disassembly & Function Detection**:
   - Processed 1,424,323 machine instructions.
   - Identified 21,005 functions, 277,444 cross-references, 1,096 C++ vtables, and 23,948 virtual methods.
4. **ABI & Calling Convention Recovery**:
   - Detected 3,053 `thiscall` member functions, plus `cdecl` and `stdcall` conventions with parameter counts and stack frame shapes.
5. **Static Lifting to C**:
   - Lifted all 21,006 functions to 85 modular C translation units with full control flow reconstruction and register state modeling.
6. **Native Compilation**:
   - Compiled with MSVC 2026 `/MP` (multi-threaded compilation) and linked against the Direct3D 11, XAudio2, and Xbox kernel runtime shims.
