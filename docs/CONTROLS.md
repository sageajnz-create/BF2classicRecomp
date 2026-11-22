# Controls

## Windows

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

## In-game settings overlay

Press **`F1`** or **`Home`** at any point during gameplay or in menus to open the holographic Star Wars settings overlay:
- **Display & Graphics**: Live adjustment of Internal 3D Resolution Scale (1x, 2x HD, 3x QHD, 4x 4K), Aspect Ratio Viewport (16:9, 4:3, 21:9 Ultrawide, 32:9), VSync, FPS Limit (Uncapped, 60, 120, 144, 240), and AMD FidelityFX CAS Sharpness.
- **Controls & Aim**: Interactive tuning of Mouse Sensitivity, Horizontal/Vertical sensitivity multipliers, Stick Deadzone compensation curve, EMA smoothing, and Invert Y.
- **Telemetry**: Real-time pipeline status and system information.
- **Navigation**: Supports mouse clicking/dragging, keyboard (`Up`/`Down`/`Left`/`Right`/`Enter`/`Tab`/`Esc`), and gamepad D-pad. While open, background weapon firing and camera movement are muted. Clicking **`[ APPLY & SAVE TO INI ]`** (or closing the menu) atomically persists changes to `bf2_recomp.ini`.

## Native Linux preview

SDL2 handles compatible controllers. With the default keyboard bindings,
use Enter for Start, Z to select, X to go back, and the arrow keys for the
D-pad. In combat, use WASD to move, IJKL to aim, and 3 to fire.
