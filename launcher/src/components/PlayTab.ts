import { invoke } from "@tauri-apps/api/core";
import { listen } from "@tauri-apps/api/event";

interface RecompConfig {
  aspect: string;
  res_scale: number;
  fullscreen: number;
  mouse_input: number;
}

interface ModInfo {
  id: string;
  title: string;
  is_enabled: boolean;
}

export default {
  async mount(container: HTMLElement) {
    container.innerHTML = `
      <div class="flex-1 flex flex-col justify-between max-w-4xl mx-auto w-full py-4">
        <!-- Hero Banner -->
        <div class="relative overflow-hidden rounded-xl border border-recomp-border bg-gradient-to-r from-recomp-panel to-slate-900 p-8 shadow-2xl">
          <div class="absolute -right-10 -bottom-10 w-64 h-64 opacity-10 pointer-events-none">
            <svg viewBox="0 0 100 100" fill="currentColor" class="text-recomp-accent">
              <polygon points="50,5 95,25 95,75 50,95 5,75 5,25" />
            </svg>
          </div>
          <div class="relative z-10">
            <span class="inline-block px-2.5 py-0.5 rounded text-[11px] font-mono tracking-widest font-semibold bg-recomp-accent/20 text-recomp-accent border border-recomp-accent/30 mb-3 uppercase">
              Static Recompilation Engine v1.0
            </span>
            <h2 class="text-3xl font-extrabold tracking-tight text-white mb-2">STAR WARS: BATTLEFRONT II</h2>
            <p class="text-recomp-textMuted text-sm max-w-lg mb-6">
              Original Xbox binary lifted into modern native 64-bit Direct3D 11 runtime. Unlocked 60+ FPS, 1:1 raw PC mouse aim, and high-definition upscaling.
            </p>

            <div class="flex items-center space-x-6">
              <button id="btn-launch-game" class="px-8 py-3.5 rounded-lg bg-recomp-accent hover:bg-recomp-accentHover text-slate-950 font-bold font-mono tracking-wider transition-all duration-200 transform hover:scale-[1.02] shadow-[0_0_20px_rgba(56,189,248,0.4)] flex items-center space-x-2">
                <svg class="w-5 h-5 fill-current" viewBox="0 0 24 24"><path d="M8 5v14l11-7z"/></svg>
                <span>LAUNCH GAME</span>
              </button>
              <div id="play-status-pill" class="flex items-center space-x-2 text-xs font-mono text-emerald-400">
                <span class="w-2.5 h-2.5 rounded-full bg-emerald-400 animate-pulse"></span>
                <span>STATUS: READY</span>
              </div>
            </div>
          </div>
        </div>

        <!-- Telemetry Cards -->
        <div class="grid grid-cols-3 gap-4 my-6">
          <div class="bg-recomp-panel border border-recomp-border rounded-lg p-4">
            <span class="text-xs font-mono text-recomp-textMuted uppercase tracking-wider">Display Target</span>
            <div id="card-resolution" class="text-lg font-bold font-mono text-white mt-1">1280x960 (2x HD)</div>
            <span id="card-aspect" class="text-[11px] font-mono text-recomp-accent">Aspect: 16:9 Widescreen</span>
          </div>
          <div class="bg-recomp-panel border border-recomp-border rounded-lg p-4">
            <span class="text-xs font-mono text-recomp-textMuted uppercase tracking-wider">Controls Engine</span>
            <div id="card-controls" class="text-lg font-bold font-mono text-white mt-1">1:1 Raw Mouse Aim</div>
            <span class="text-[11px] font-mono text-emerald-400">Low-Latency Hook Active</span>
          </div>
          <div class="bg-recomp-panel border border-recomp-border rounded-lg p-4">
            <span class="text-xs font-mono text-recomp-textMuted uppercase tracking-wider">Active Addons</span>
            <div id="card-mods" class="text-lg font-bold font-mono text-white mt-1">Loading...</div>
            <span class="text-[11px] font-mono text-recomp-textMuted">Custom Map Staging</span>
          </div>
        </div>

        <!-- Crash Alert Modal (Hidden by default) -->
        <div id="crash-alert" class="hidden bg-red-950/40 border border-red-500/40 rounded-lg p-4 text-xs font-mono text-red-200">
          <div class="flex items-center space-x-2 font-bold mb-1">
            <span class="text-red-400">XBOX RECOMP CRASH REPORT:</span>
          </div>
          <pre id="crash-log-text" class="overflow-x-auto text-[11px] text-red-300 max-h-32 bg-black/40 p-2 rounded mt-2"></pre>
        </div>
      </div>
    `;

    // Fetch config and mods
    try {
      const cfg = await invoke<RecompConfig>("get_game_config");
      const resLabels: Record<number, string> = {
        1: "640x480 (1x Native)",
        2: "1280x960 (2x HD)",
        3: "1920x1440 (3x QHD)",
        4: "2560x1920 (4x 4K)",
      };
      const resElem = document.getElementById("card-resolution");
      if (resElem) resElem.innerText = resLabels[cfg.res_scale] || "1280x960 (2x HD)";

      const aspectElem = document.getElementById("card-aspect");
      if (aspectElem) aspectElem.innerText = `Aspect: ${cfg.aspect} (${cfg.fullscreen ? "Fullscreen" : "Windowed"})`;

      const footerRes = document.getElementById("footer-res-summary");
      if (footerRes) footerRes.innerText = `INTERNAL: ${resLabels[cfg.res_scale] || "2x HD"} | ASPECT: ${cfg.aspect}`;
    } catch (e) {
      console.warn("Failed to load config for play tab:", e);
    }

    try {
      const mods = await invoke<ModInfo[]>("list_mods");
      const activeCount = mods.filter((m) => m.is_enabled).length;
      const modsElem = document.getElementById("card-mods");
      if (modsElem) modsElem.innerText = `${activeCount} Enabled / ${mods.length} Total`;
    } catch {
      const modsElem = document.getElementById("card-mods");
      if (modsElem) modsElem.innerText = "0 Installed";
    }

    // Launch button handler
    const launchBtn = document.getElementById("btn-launch-game");
    launchBtn?.addEventListener("click", async () => {
      const statusPill = document.getElementById("play-status-pill");
      const crashAlert = document.getElementById("crash-alert");
      if (crashAlert) crashAlert.className = "hidden";

      try {
        if (statusPill) {
          statusPill.innerHTML = `
            <span class="w-2.5 h-2.5 rounded-full bg-recomp-accent animate-ping"></span>
            <span class="text-recomp-accent">STATUS: RUNNING</span>
          `;
        }
        await invoke("launch_game", { options: {} });
      } catch (err: any) {
        if (statusPill) {
          statusPill.innerHTML = `
            <span class="w-2.5 h-2.5 rounded-full bg-recomp-imperial"></span>
            <span class="text-recomp-imperial">ERROR</span>
          `;
        }
        alert("Launch Failed: " + (err?.toString() || "Unknown error"));
      }
    });

    // Listen for game exit event
    await listen<any>("game-exit", (event) => {
      const statusPill = document.getElementById("play-status-pill");
      if (statusPill) {
        statusPill.innerHTML = `
          <span class="w-2.5 h-2.5 rounded-full bg-emerald-400"></span>
          <span class="text-emerald-400">STATUS: READY</span>
        `;
      }

      if (event.payload?.exit_code !== 0 && event.payload?.crash_log) {
        const crashAlert = document.getElementById("crash-alert");
        const crashLogText = document.getElementById("crash-log-text");
        if (crashAlert && crashLogText) {
          crashAlert.className = "bg-red-950/40 border border-red-500/40 rounded-lg p-4 text-xs font-mono text-red-200";
          crashLogText.innerText = event.payload.crash_log;
        }
      }
    });
  },
};
