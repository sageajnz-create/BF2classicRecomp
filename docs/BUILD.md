# Build and run

Run these commands from the repository root unless a step gives another
directory. The checked-in C sources build without your disc files. The game
needs those files when it starts.

## Game files

Extract your original Xbox disc into `bf2_recomp/game_files/`. If those
files are already in place, skip extraction. Use the included XISO tool with
Python 3 if you have a disc image.

```sh
python -m tools.xboxrecomp.tools.xiso unpack "local/disc/StarWarsBattlefrontII.iso" -o bf2_recomp/game_files
```

Use your actual image path. The extracted directory must contain
`default.xbe`, `Data/`, and `media/` at the same level. Keep the full
extraction so the runtime can find the other files it needs. Use a writable
game directory for configuration and saves.

## Windows

Use a Visual Studio C++ toolchain, CMake 3.20 or newer, and a Windows SDK
with `fxc.exe`. The build embeds the fixed D3D11 shaders. If CMake cannot
locate FXC, pass `-DBF2_FXC=C:/path/to/fxc.exe` when configuring.
[Microsoft FXC documentation](https://learn.microsoft.com/en-us/windows/win32/direct3dtools/fxc)

```powershell
cmake -S bf2_recomp -B bf2_recomp/build -A x64
cmake --build bf2_recomp/build --config Release --parallel
.\run_swbf2.bat
```

The launcher runs the Release executable with `bf2_recomp/game_files/` as
the working directory. A build also copies the executable into that game
directory and seeds an INI on first use. Edit the game directory's
`bf2_recomp.ini` for local settings. The repository-root INI is the default
template. Press F1 or Home for [in-game settings](CONTROLS.md#in-game-settings-overlay).

## Native Linux preview

Build on x86-64 Linux with a C compiler, CMake 3.20 or newer, and the SDL2
and OpenSSL development packages.

```sh
cmake -S bf2_recomp -B out/build-linux -DCMAKE_BUILD_TYPE=Release
cmake --build out/build-linux --parallel 4
ctest --test-dir out/build-linux --output-on-failure
cmake --install out/build-linux --prefix "$PWD/out/swbf2-linux"
```

Use a fresh staging directory for each version. Copy your extracted disc
files into `out/swbf2-linux/` beside the executable. Put an existing
`saves/` directory there if you want to reuse that installation's saves.

```sh
cd out/swbf2-linux
./swbf2_recomp -windowed
```

A prebuilt preview made on Ubuntu 24.04 requires SDL2 and glibc 2.38 or
newer. It uses SDL2 for display, audio, and input, and the CPU for rendering.
On Bazzite, use `swbf2_recomp` as the Steam shortcut target, set **Start In**
to its directory, and leave the compatibility override off.

## Proton or Wine

Build the Windows Release target and install it to a fresh staging directory.
The package includes the executable, default INI, and Wine helper.

```powershell
cmake --install bf2_recomp/build --config Release --prefix ./out/swbf2-runtime
```

Copy the staging directory to Linux, then put the extracted disc files
beside `swbf2_recomp.exe`. To run on Bazzite, add that executable as a
non-Steam game in Desktop Mode. Set **Start In** to the directory containing
the executable and `default.xbe`. Under **Compatibility**, force an
installed Proton version. [Bazzite game launcher documentation](https://docs.bazzite.gg/Gaming/Game_Launchers/)

To launch from a terminal with 64-bit Wine or umu installed, run the helper
from the staging directory.

```sh
sh ./run_swbf2_linux.sh -windowed
```

The helper prefers `umu-run` when available. Set `SWBF2_LINUX_RUNNER` to
`wine` or `umu` to choose explicitly. It creates a prefix per runner under
`${XDG_DATA_HOME:-$HOME/.local/share}/swbf2-recomp` unless you set an
absolute `WINEPREFIX`. Set `SWBF2_GAME_DIR` to use another game directory.
[umu runner options](https://github.com/Open-Wine-Components/umu-launcher/blob/main/docs/umu.1.scd)

See [troubleshooting](TROUBLESHOOTING.md) for WebView2, startup crashes, and freezes.
