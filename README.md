# Star Wars: Battlefront II (2005) Recompilation

An in-development x86-64 port of the original Xbox version of Battlefront II.
The project builds the recompiled game and its host runtime. You supply the
extracted files from your own Xbox disc.

## Choose a build

| Platform | Current status |
| --- | --- |
| [Windows](docs/BUILD.md#windows) | D3D11 rendering, XInput, mouse and keyboard, and an in-game settings overlay. Local testing reached full offline match completion. |
| [Native Linux x86-64](docs/BUILD.md#native-linux-preview) | SDL2 preview with a 640×480 software renderer. WSL2 testing covered profiles and Coruscant movement and firing. Combat ran at about 3–4 FPS there. Bazzite hardware remains untested. |
| [Steam Proton or Wine](docs/BUILD.md#proton-or-wine) | Runs the Windows executable. Wine/DXVK reached offline combat in a local smoke test. Startup crashes and freezes reported on Bazzite remain open. |

## Get started

1. [Extract the Xbox disc files](docs/BUILD.md#game-files) into `bf2_recomp/game_files/`.
2. Follow the build guide for your platform. On Windows, build the Release
   target and run `run_swbf2.bat`. On Linux, run the staged `swbf2_recomp`
   from the directory containing your disc files.
3. See the [controls](docs/CONTROLS.md) and [startup troubleshooting](docs/TROUBLESHOOTING.md)
   guides. Windows settings are available with F1 or Home.

The [optional Windows desktop hub](launcher/README.md) has its own build
instructions. For Steam shortcuts on Bazzite, use the game executable directly.

## Project layout

| Path | Contents |
| --- | --- |
| [bf2_recomp/](bf2_recomp/) | Game entry point, lifted C code, renderer integration, and tests |
| [tools/xboxrecomp/](tools/xboxrecomp/) | Xbox runtime shims and recompilation tools |
| [launcher/](launcher/) | Optional Tauri desktop hub and local browser preview |
| [docs/](docs/) | Setup, controls, troubleshooting, development notes, and port history |
| [HANDOFF.md](HANDOFF.md) | Latest verification and outstanding port work |

Local disc backups belong under `local/disc/`. Extracted files and saves live
in the game directory. Build output and staging stay under `bf2_recomp/build/`
or `out/`. Test captures stay under `logs/`. These directories are Git-ignored.

See the [development guide](docs/DEVELOPMENT.md) for build checks and profiling.
See [release readiness](docs/RELEASE.md) for RecompLauncher integration and package verification.
