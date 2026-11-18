import { invoke } from "@tauri-apps/api/core";

interface RecompConfig {
  aspect: string;
  res_scale: number;
  window_scale: number;
  fullscreen: number;
  anisotropy: number;
  cas: number;
  gpu_vsh: number;
  shader_cache: number;
  visibility_uav: number;
  pipelined_query: number;
  pb_kick_ack: number;
  vsync: number;
  fps_limit: number;
  show_fps: number;
  mouse_input: number;
  mouse_sens: number;
  mouse_full: number;
  mouse_sens_x: number;
  mouse_sens_y: number;
  mouse_smoothing: number;
  mouse_acc: number;
  mouse_invert_y: number;
  deadzone: number;
  dispatch_gate: number;
  save_dir?: string;
}

export default {
  async mount(container: HTMLElement) {
    container.innerHTML = `
      <div class="flex-1 flex flex-col max-w-4xl mx-auto w-full pb-6 overflow-auto">
        <div class="flex items-center justify-between mb-6">
          <div>
            <h2 class="text-lg font-bold font-mono text-white">RECOMPILATION SETTINGS</h2>
            <p class="text-xs font-mono text-recomp-textMuted">Bi-directional synchronization with bf2_recomp.ini & environment variables</p>
          </div>
          <button id="btn-save-settings" class="px-6 py-2 rounded-lg bg-recomp-accent hover:bg-recomp-accentHover text-slate-950 font-bold font-mono tracking-wider transition shadow-[0_0_15px_rgba(56,189,248,0.3)]">
            SAVE CONFIG
          </button>
        </div>

        <div class="grid grid-cols-2 gap-6">
          <!-- Graphics Column -->
          <div class="bg-recomp-panel border border-recomp-border rounded-lg p-5 flex flex-col space-y-4">
            <h3 class="text-xs font-mono font-bold text-recomp-accent tracking-widest uppercase border-b border-recomp-border pb-2">
              Graphics & Display Engine
            </h3>

            <div>
              <label class="block text-xs font-mono text-slate-300 mb-1">Internal 3D Render Scale</label>
              <select id="cfg-res-scale" class="w-full bg-recomp-dark border border-recomp-border rounded px-3 py-1.5 text-xs font-mono text-white focus:border-recomp-accent focus:outline-none">
                <option value="1">1x Native (640x480)</option>
                <option value="2">2x High Definition (1280x960 HD)</option>
                <option value="3">3x Quad High Definition (1920x1440 QHD)</option>
                <option value="4">4x Ultra HD 4K (2560x1920 4K)</option>
              </select>
            </div>

            <div>
              <label class="block text-xs font-mono text-slate-300 mb-1">Aspect Ratio</label>
              <select id="cfg-aspect" class="w-full bg-recomp-dark border border-recomp-border rounded px-3 py-1.5 text-xs font-mono text-white focus:border-recomp-accent focus:outline-none">
                <option value="16:9">16:9 (Native Modern Widescreen)</option>
                <option value="21:9">21:9 (Ultrawide Panoramic)</option>
                <option value="32:9">32:9 (Super-Ultrawide Dual-FHD)</option>
                <option value="4:3">4:3 (Original CRT Aspect)</option>
              </select>
            </div>

            <div class="grid grid-cols-2 gap-3">
              <div>
                <label class="block text-xs font-mono text-slate-300 mb-1">Display Mode</label>
                <select id="cfg-fullscreen" class="w-full bg-recomp-dark border border-recomp-border rounded px-3 py-1.5 text-xs font-mono text-white focus:border-recomp-accent focus:outline-none">
                  <option value="0">Windowed</option>
                  <option value="1">Borderless Fullscreen</option>
                </select>
              </div>
              <div>
                <label class="block text-xs font-mono text-slate-300 mb-1">VSync / Latency</label>
                <select id="cfg-vsync" class="w-full bg-recomp-dark border border-recomp-border rounded px-3 py-1.5 text-xs font-mono text-white focus:border-recomp-accent focus:outline-none">
                  <option value="0">Off (Lowest Latency / VRR)</option>
                  <option value="1">On (Tear-Free Lock)</option>
                </select>
              </div>
            </div>

            <div class="grid grid-cols-2 gap-3">
              <div>
                <label class="block text-xs font-mono text-slate-300 mb-1">AMD CAS Sharpening</label>
                <select id="cfg-cas" class="w-full bg-recomp-dark border border-recomp-border rounded px-3 py-1.5 text-xs font-mono text-white focus:border-recomp-accent focus:outline-none">
                  <option value="1">Enabled (Crisp Textures)</option>
                  <option value="0">Disabled</option>
                </select>
              </div>
              <div>
                <label class="block text-xs font-mono text-slate-300 mb-1">Anisotropic Filtering</label>
                <select id="cfg-anisotropy" class="w-full bg-recomp-dark border border-recomp-border rounded px-3 py-1.5 text-xs font-mono text-white focus:border-recomp-accent focus:outline-none">
                  <option value="16">16x Max Fidelity</option>
                  <option value="8">8x High</option>
                  <option value="4">4x Medium</option>
                  <option value="1">1x Off</option>
                </select>
              </div>
            </div>

            <div>
              <label class="block text-xs font-mono text-slate-300 mb-1">Frame Rate Limit</label>
              <select id="cfg-fps-limit" class="w-full bg-recomp-dark border border-recomp-border rounded px-3 py-1.5 text-xs font-mono text-white focus:border-recomp-accent focus:outline-none">
                <option value="0">Uncapped (Max Smoothness)</option>
                <option value="60">60 FPS</option>
                <option value="120">120 FPS</option>
                <option value="144">144 FPS</option>
                <option value="240">240 FPS</option>
              </select>
            </div>
          </div>

          <!-- Controls Column -->
          <div class="bg-recomp-panel border border-recomp-border rounded-lg p-5 flex flex-col space-y-4">
            <h3 class="text-xs font-mono font-bold text-recomp-accent tracking-widest uppercase border-b border-recomp-border pb-2">
              PC Mouse & Input Calibration
            </h3>

            <div>
              <div class="flex justify-between items-center mb-1">
                <label class="text-xs font-mono text-slate-300">Aim Sensitivity</label>
                <span id="val-sens" class="text-xs font-mono text-recomp-accent font-bold">1.00x</span>
              </div>
              <input id="cfg-sens" type="range" min="0.1" max="5.0" step="0.05" value="1.0" class="w-full accent-recomp-accent bg-recomp-dark h-1.5 rounded cursor-pointer" />
            </div>

            <div>
              <div class="flex justify-between items-center mb-1">
                <label class="text-xs font-mono text-slate-300">Virtual Stick Deadzone Compensation</label>
                <span id="val-deadzone" class="text-xs font-mono text-recomp-accent font-bold">0.18</span>
              </div>
              <input id="cfg-deadzone" type="range" min="0.0" max="0.5" step="0.01" value="0.18" class="w-full accent-recomp-accent bg-recomp-dark h-1.5 rounded cursor-pointer" />
              <span class="text-[10px] font-mono text-recomp-textMuted mt-1 block">Compensates guest game engine stick threshold for instant micro-aim.</span>
            </div>

            <div>
              <div class="flex justify-between items-center mb-1">
                <label class="text-xs font-mono text-slate-300">Aim Acceleration Curve</label>
                <span id="val-acc" class="text-xs font-mono text-recomp-accent font-bold">1.00 (Linear)</span>
              </div>
              <input id="cfg-acc" type="range" min="1.0" max="2.0" step="0.05" value="1.0" class="w-full accent-recomp-accent bg-recomp-dark h-1.5 rounded cursor-pointer" />
            </div>

            <div class="grid grid-cols-2 gap-3 pt-2">
              <div>
                <label class="block text-xs font-mono text-slate-300 mb-1">Vertical Invert</label>
                <select id="cfg-invert-y" class="w-full bg-recomp-dark border border-recomp-border rounded px-3 py-1.5 text-xs font-mono text-white focus:border-recomp-accent focus:outline-none">
                  <option value="0">Normal</option>
                  <option value="1">Inverted</option>
                </select>
              </div>
              <div>
                <label class="block text-xs font-mono text-slate-300 mb-1">Show FPS In Title</label>
                <select id="cfg-show-fps" class="w-full bg-recomp-dark border border-recomp-border rounded px-3 py-1.5 text-xs font-mono text-white focus:border-recomp-accent focus:outline-none">
                  <option value="1">Enabled</option>
                  <option value="0">Disabled</option>
                </select>
              </div>
            </div>
          </div>
        </div>
      </div>
    `;

    let activeConfig: RecompConfig;

    try {
      activeConfig = await invoke<RecompConfig>("get_game_config");

      // Populate input values
      (document.getElementById("cfg-res-scale") as HTMLSelectElement).value = String(activeConfig.res_scale);
      (document.getElementById("cfg-aspect") as HTMLSelectElement).value = activeConfig.aspect;
      (document.getElementById("cfg-fullscreen") as HTMLSelectElement).value = String(activeConfig.fullscreen);
      (document.getElementById("cfg-vsync") as HTMLSelectElement).value = String(activeConfig.vsync);
      (document.getElementById("cfg-cas") as HTMLSelectElement).value = String(activeConfig.cas);
      (document.getElementById("cfg-anisotropy") as HTMLSelectElement).value = String(activeConfig.anisotropy);
      (document.getElementById("cfg-fps-limit") as HTMLSelectElement).value = String(activeConfig.fps_limit);

      (document.getElementById("cfg-sens") as HTMLInputElement).value = String(activeConfig.mouse_sens);
      (document.getElementById("val-sens") as HTMLElement).innerText = `${activeConfig.mouse_sens.toFixed(2)}x`;

      (document.getElementById("cfg-deadzone") as HTMLInputElement).value = String(activeConfig.deadzone);
      (document.getElementById("val-deadzone") as HTMLElement).innerText = activeConfig.deadzone.toFixed(2);

      (document.getElementById("cfg-acc") as HTMLInputElement).value = String(activeConfig.mouse_acc);
      (document.getElementById("val-acc") as HTMLElement).innerText = activeConfig.mouse_acc === 1.0 ? "1.00 (Linear)" : `${activeConfig.mouse_acc.toFixed(2)} (Curved)`;

      (document.getElementById("cfg-invert-y") as HTMLSelectElement).value = String(activeConfig.mouse_invert_y);
      (document.getElementById("cfg-show-fps") as HTMLSelectElement).value = String(activeConfig.show_fps);
    } catch (e) {
      console.warn("Failed to load initial settings:", e);
    }

    // Interactive slider value updates
    const sensInput = document.getElementById("cfg-sens") as HTMLInputElement;
    sensInput?.addEventListener("input", () => {
      const valElem = document.getElementById("val-sens");
      if (valElem) valElem.innerText = `${parseFloat(sensInput.value).toFixed(2)}x`;
    });

    const dzInput = document.getElementById("cfg-deadzone") as HTMLInputElement;
    dzInput?.addEventListener("input", () => {
      const valElem = document.getElementById("val-deadzone");
      if (valElem) valElem.innerText = parseFloat(dzInput.value).toFixed(2);
    });

    const accInput = document.getElementById("cfg-acc") as HTMLInputElement;
    accInput?.addEventListener("input", () => {
      const valElem = document.getElementById("val-acc");
      const v = parseFloat(accInput.value);
      if (valElem) valElem.innerText = v === 1.0 ? "1.00 (Linear)" : `${v.toFixed(2)} (Curved)`;
    });

    // Save button
    document.getElementById("btn-save-settings")?.addEventListener("click", async () => {
      const updated: RecompConfig = {
        ...activeConfig,
        res_scale: parseInt((document.getElementById("cfg-res-scale") as HTMLSelectElement).value, 10),
        aspect: (document.getElementById("cfg-aspect") as HTMLSelectElement).value,
        fullscreen: parseInt((document.getElementById("cfg-fullscreen") as HTMLSelectElement).value, 10),
        vsync: parseInt((document.getElementById("cfg-vsync") as HTMLSelectElement).value, 10),
        cas: parseInt((document.getElementById("cfg-cas") as HTMLSelectElement).value, 10),
        anisotropy: parseInt((document.getElementById("cfg-anisotropy") as HTMLSelectElement).value, 10),
        fps_limit: parseInt((document.getElementById("cfg-fps-limit") as HTMLSelectElement).value, 10),
        mouse_sens: parseFloat(sensInput.value),
        deadzone: parseFloat(dzInput.value),
        mouse_acc: parseFloat(accInput.value),
        mouse_invert_y: parseInt((document.getElementById("cfg-invert-y") as HTMLSelectElement).value, 10),
        show_fps: parseInt((document.getElementById("cfg-show-fps") as HTMLSelectElement).value, 10),
      };

      try {
        await invoke("save_game_config", { config: updated });
        const saveBtn = document.getElementById("btn-save-settings");
        if (saveBtn) {
          const original = saveBtn.innerText;
          saveBtn.innerText = "SAVED!";
          saveBtn.className = "px-6 py-2 rounded-lg bg-emerald-500 text-slate-950 font-bold font-mono tracking-wider transition";
          setTimeout(() => {
            saveBtn.innerText = original;
            saveBtn.className = "px-6 py-2 rounded-lg bg-recomp-accent hover:bg-recomp-accentHover text-slate-950 font-bold font-mono tracking-wider transition shadow-[0_0_15px_rgba(56,189,248,0.3)]";
          }, 1500);
        }
      } catch (err: any) {
        alert("Failed to save settings: " + err?.toString());
      }
    });
  },
};
