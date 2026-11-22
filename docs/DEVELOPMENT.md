# Development

## Workspace

| Path | Contents |
| --- | --- |
| `local/disc/` | Local disc backups and standalone extracted XBE copies |
| `bf2_recomp/game_files/` | Development game install, settings, and saves |
| `bf2_recomp/build/` | Windows build tree and Release executable and symbols |
| `out/` | Native Linux build tree and staged runtime packages |
| `logs/` | Local captures, traces, and archived test output |
| [reference/xbe-analysis.json](reference/xbe-analysis.json) | XBE section, entry point, and import metadata |

The local paths above are Git-ignored. Keep disc images, game assets, saves,
compiled binaries, and diagnostic captures out of commits. The
[port log](history/port-log.md) refers to workspace-only evidence by path.

## Build checks

Run the [build steps](BUILD.md) for the platform first. CTest fixtures run
without disc files.

```powershell
ctest --test-dir bf2_recomp/build -C Release --output-on-failure
```

```sh
ctest --test-dir out/build-linux --output-on-failure
```

Run the renderer fixtures from their own build trees. See the
[world renderer fixtures](../bf2_recomp/tests/gpu_world/) and
[vertex shader checks](../bf2_recomp/tests/gpu_vsh/README.md).

On a Windows desktop with CPython and the game files in place, run
`python tools/check_overlay_live.py` from the repository root. It checks
F1/Home, keyboard navigation, guest Start input suppression while the overlay
is open, and persistence across launches. It saves captures and diagnostics
under `logs/overlay-smoke/` with a separate INI and saves.

For a live overlay check, spawn in an offline match. Confirm movement, aiming,
and firing work before opening the overlay. Try the same inputs while it is
open, then verify they resume normally after closing it. Repeat with a
controller when checking controller support.

## Runtime and profiling

The lifted x86 code drives the NV2A pushbuffer executor in
[xboxrecomp](../tools/xboxrecomp/). Windows uses the D3D11 renderer and XAudio2.
The Linux preview uses the software renderer and SDL2 for presentation,
playback, and input.

- `RECOMP_RASTER_TIMING=1` logs five-second draw, raster, and present totals.
- `RECOMP_GPU_TIMING=1` adds D3D11 GPU timestamp reports when raster timing is enabled.
- `RECOMP_HOST_PROFILE=1` samples the guest thread on Windows. Keep the matching PDB alongside the executable.
- `RECOMP_FLIP_PACING=edge` enables Windows frame pacing. Menus and Coruscant movement were smoke-tested with this setting.

See [HANDOFF.md](../HANDOFF.md) for the latest results and remaining checks.
