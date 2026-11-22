# Port status and handoff

Updated 23 November 2026 NZDT.

- **Windows** builds with D3D11, XAudio2, and the F1/Home overlay. Local
  testing previously completed Coruscant Conquest. The archived benchmark
  recorded a 64.5 FPS weighted average over 12 combat windows at 2× on the
  test PC. See the [port log](docs/history/port-log.md) for its settings.
- **Native Linux x86-64** reached the title in WSL2, saved and reopened a
  profile, and loaded, spawned, moved, and fired in Coruscant Conquest.
  Combat ran at about 3–4 FPS with software NV2A rendering. The preview also
  has some menu rendering errors. Six startup checks passed after the guest
  address reservation fix. Real audio playback, full-match completion, and
  GeForce 940M performance on Bazzite remain unverified.
- **Proton and Wine** use the Windows runtime. The local Wine/DXVK smoke test
  reached combat. The reported Hotfix crash as audio starts and 0 FPS stalls
  under Proton 11.0.2 and Experimental need logs from the Bazzite laptop.

The local Linux archive is `out/swbf2-linux-x86_64-preview.tar.gz`. Keep test
captures and diagnostic logs under `logs/`. Keep the Windows host audio
settings and devices untouched during automated tests.

See the [build guide](docs/BUILD.md), [development guide](docs/DEVELOPMENT.md),
and [archived milestones](docs/history/port-log.md).
