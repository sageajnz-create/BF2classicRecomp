# Optional desktop hub

The Windows Tauri hub provides a graphical launcher and settings UI.
The game also runs from the repository's `run_swbf2.bat` entry point.
Use the game executable directly from a Bazzite Steam shortcut.

## Build the Windows hub

Install Node.js and npm, Rust, and the Windows Tauri prerequisites, including
WebView2. [Tauri prerequisites](https://v2.tauri.app/start/prerequisites/)

From the repository root, run the following in PowerShell.

```powershell
npm --prefix launcher ci
.\launcher\scripts\build_all_platforms.ps1
.\run_swbf2_hub.bat
```

The script stages `swbf2_launcher.exe` under `out/swbf2-hub/`. Use the batch
file from the repository to launch with the game workspace as its working directory.
Build the [Windows game](../docs/BUILD.md#windows) first so the hub can find
the runtime and its local INI.

## Develop and check

Run these commands from the repository root after installing the dependencies.

| Command | What it runs |
| --- | --- |
| `npm run lint` | Frontend type check |
| `npm run build` | Frontend build into `launcher/dist/` |
| `npm run dev` | Browser development preview on `http://127.0.0.1:3000` |
| `npm start` | Browser preview of the built frontend |
| `npm --prefix launcher run tauri -- dev` | Desktop development build using Vite on port 1420 |

The browser preview has a local API for launcher operations. Both previews
bind to the loopback interface. The npm lockfile lives in this directory.
