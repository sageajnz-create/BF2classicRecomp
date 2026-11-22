# Troubleshooting

## Missing game files

Run the game from the directory with `default.xbe`, `Data/`, and `media/`.
In Steam, set **Start In** to that directory. See the
[disc extraction instructions](BUILD.md#game-files).

## WebView2 on Bazzite

The optional Windows hub, `swbf2_launcher.exe`, uses WebView2. Use
`swbf2_recomp.exe` for a Proton shortcut or `swbf2_recomp` for a native Linux
shortcut. Both game executables can run without the hub.

## Proton crashes or freezes at startup

In Steam **Properties → Launch Options**, start with a baseline under the
Proton version that failed.

```sh
PROTON_LOG=1 %command%
```

Proton writes `steam-<AppID>.log` to your home directory. Save a copy before
the next launch and keep the same Proton version for the comparison.
[Valve Proton runtime options](https://github.com/ValveSoftware/Proton#runtime-config-options)

If the game crashes as sound starts, try the same build with host playback
disabled. The Xbox audio hardware and interrupts continue during this silent
test.

```sh
PROTON_LOG=1 RECOMP_AUDIO_NO_OUTPUT=1 %command%
```

If the first loading screen freezes, try the graphics settings that reached
combat in the local Wine/DXVK smoke test. This path uses the framebuffer
window, which has no F1/Home settings overlay.

```sh
PROTON_LOG=1 RECOMP_DIRECT_PRESENT=0 RECOMP_D3D_PRESENT=0 RECOMP_VSH_JIT=0 RECOMP_PS_JIT=0 %command% -windowed -res 1
```

If a freeze leaves the process running, add `RECOMP_WATCHDOG_SECS=120`
before `%command%` for that diagnostic run. It dumps guest state and exits
at the time limit even if loading succeeds. Remove the timer for normal play.
Include the log, exact Proton version, GPU, and whether you used Desktop Mode
or Gaming Mode when reporting a failure.

## Native Linux startup

Run `./swbf2_recomp -windowed` in a terminal from the game directory to see the
startup diagnostics. To save them, append `> swbf2-startup.log 2>&1` to the
command. The Ubuntu-built preview needs `libSDL2-2.0.so.0` and glibc 2.38 or
newer. The [native Linux build instructions](BUILD.md#native-linux-preview)
also cover building the preview from source.
