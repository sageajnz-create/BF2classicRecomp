# RecompLauncher release readiness

## Current evidence

| Target | Evidence | Release status |
| --- | --- | --- |
| Windows x64 | An earlier build completed Coruscant Conquest. Five existing CTest binaries passed on November 28, 2026. The staged executable is older than the executable in the build tree. | First candidate. The exact package still needs a fresh-install and full-match check. |
| Native Linux x64 | The CachyOS smoke log records OpenGL 4.6 initialization on the RX 6650 XT. The handoff records a black frame. The software renderer reached the frontend and logged about 9 flips per second. | Preview development continues. A visible playthrough and performance measurements are pending. |
| Proton and Wine | An older Wine/DXVK smoke test reached offline combat. The newer CachyOS log records flips during startup. | A complete hardware playthrough on the target configuration is pending. |

The CachyOS flip counters measure presentation activity. Use gameplay footage and frame timings from a real match to assess rendered output and performance. See the [port handoff](../HANDOFF.md) and [port history](history/port-log.md) for earlier results.

## Windows package for manual setup

The [launcher manifest](../recomplauncher.json) names the Windows executable and tracks the default save directory. It assumes `default.xbe`, `Data/`, and `media/` are placed directly in the install directory so the runtime uses `{install}/saves`. See the [disc extraction instructions](BUILD.md#game-files).

- Place `recomplauncher.json` beside `swbf2_recomp.exe` at the root of a Windows x64 ZIP. Use an asset name such as `BF2classicRecomp-v0.1.0-Windows-x64.zip`.
- Start with an empty staging directory. Include runtime files and setup instructions. Keep the Xbox disc image, extracted assets, local saves, logs, and debug symbols outside the archive.
- Keep the live `bf2_recomp.ini` outside the archive. The current CMake install stages a default INI under that filename. Package it as a separately named template so updates preserve player settings.
- Validate the manifest in RecompLauncher and test from a clean install with a user-supplied Xbox disc dump. Check cold startup, an offline match through the results screen, audio, keyboard and mouse, controller input, and persistence after restart. Verify an update preserves saves and settings.

Easy Setup requires an import step for the complete extracted disc. The manifest currently covers manual setup and launch. Verified disc hashes, editable settings in RecompLauncher, and Linux packaging still need integration and verification.

## Catalog submission

RecompLauncher installs packages from GitHub Releases. A catalog submission uses the developer account associated with the GitHub repository and goes through RecompLauncher review. Confirm the published catalog entry by opening its game page and installing the listed asset. [Developer guide](https://github.com/elripalda/RecompLauncher/blob/main/docs/DEVELOPERS.md) · [PC submission form](https://recomplauncher.com/submit?platform=pc)
