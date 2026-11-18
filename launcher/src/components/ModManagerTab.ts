import { invoke } from "@tauri-apps/api/core";

interface ModInfo {
  id: string;
  title: string;
  description: string;
  is_enabled: boolean;
  is_xbox_native: boolean;
  path: string;
  size_bytes: number;
}

export default {
  async mount(container: HTMLElement) {
    container.innerHTML = `
      <div class="flex-1 flex flex-col max-w-5xl mx-auto w-full">
        <!-- Header -->
        <div class="flex items-center justify-between mb-4">
          <div>
            <h2 class="text-lg font-bold font-mono text-white">ADDON & MAP MANAGER</h2>
            <p class="text-xs font-mono text-recomp-textMuted">Non-destructive mod staging in game_files/addon/ and game_files/TDATA/</p>
          </div>
          <button id="btn-refresh-mods" class="px-3 py-1.5 rounded bg-recomp-panel border border-recomp-border hover:bg-recomp-border text-xs font-mono text-recomp-textLight flex items-center space-x-1.5">
            <svg class="w-3.5 h-3.5" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2"><path d="M21 2v6h-6M3 12a9 9 0 0 1 15-6.7L21 8M3 22v-6h6M21 12a9 9 0 0 1-15 6.7L3 16"/></svg>
            <span>RESCAN MODS</span>
          </button>
        </div>

        <!-- Drop Zone for ZIP Mod Archives -->
        <div id="mod-drop-zone" class="border-2 border-dashed border-recomp-border hover:border-recomp-accent/60 bg-recomp-panel/40 rounded-lg p-6 mb-4 text-center cursor-pointer transition">
          <svg class="mx-auto h-8 w-8 text-recomp-textMuted mb-2" fill="none" viewBox="0 0 24 24" stroke="currentColor">
            <path stroke-linecap="round" stroke-linejoin="round" stroke-width="1.5" d="M7 16a4 4 0 01-.88-7.903A5 5 0 1115.9 6L16 6a5 5 0 011 9.9M15 13l-3-3m0 0l-3 3m3-3v12" />
          </svg>
          <div class="text-xs font-mono font-semibold text-white">DRAG & DROP SWBF2 MOD ARCHIVE (.ZIP) HERE</div>
          <div class="text-[11px] font-mono text-recomp-textMuted mt-1">Zip Slip protected safe extraction directly into game_files/addon/</div>
          <input type="file" id="mod-file-input" accept=".zip" class="hidden" />
        </div>

        <!-- Mods Table -->
        <div class="flex-1 bg-recomp-panel border border-recomp-border rounded-lg overflow-hidden flex flex-col">
          <div class="grid grid-cols-12 bg-recomp-dark/50 border-b border-recomp-border px-4 py-2 text-[10px] font-mono text-recomp-textMuted uppercase tracking-wider font-semibold">
            <div class="col-span-2">Map ID</div>
            <div class="col-span-5">Title & Info</div>
            <div class="col-span-2">Asset Format</div>
            <div class="col-span-1 text-center">Size</div>
            <div class="col-span-2 text-right">Status</div>
          </div>
          <div id="mods-list-body" class="flex-1 overflow-auto divide-y divide-recomp-border/40 font-mono text-xs">
            <div class="p-8 text-center text-recomp-textMuted">Scanning addon folders...</div>
          </div>
        </div>
      </div>
    `;

    async function loadMods() {
      const body = document.getElementById("mods-list-body");
      if (!body) return;

      try {
        const mods = await invoke<ModInfo[]>("list_mods");
        if (mods.length === 0) {
          body.innerHTML = `
            <div class="p-8 text-center text-recomp-textMuted font-mono">
              No custom addons detected in game_files/addon/ or game_files/TDATA/.<br>
              <span class="text-[11px] text-slate-500">Drag and drop a SWBF2 mod .zip above to install!</span>
            </div>
          `;
          return;
        }

        body.innerHTML = mods
          .map((m) => {
            const sizeMb = (m.size_bytes / (1024 * 1024)).toFixed(1);
            const formatPill = m.is_xbox_native
              ? `<span class="px-2 py-0.5 rounded text-[10px] font-bold bg-emerald-500/20 text-emerald-400 border border-emerald-500/30">XBOX NATIVE</span>`
              : `<span class="px-2 py-0.5 rounded text-[10px] font-bold bg-amber-500/20 text-amber-400 border border-amber-500/30">PC FORMAT</span>`;

            return `
              <div class="grid grid-cols-12 px-4 py-3 items-center hover:bg-slate-800/40 transition">
                <div class="col-span-2 font-bold text-white tracking-wider">${m.id}</div>
                <div class="col-span-5">
                  <div class="text-white font-semibold">${m.title}</div>
                  <div class="text-[11px] text-recomp-textMuted truncate">${m.description}</div>
                </div>
                <div class="col-span-2">${formatPill}</div>
                <div class="col-span-1 text-center text-recomp-textMuted">${sizeMb} MB</div>
                <div class="col-span-2 text-right flex items-center justify-end space-x-2">
                  <span class="text-[10px] font-semibold ${m.is_enabled ? "text-recomp-accent" : "text-slate-500"}">
                    ${m.is_enabled ? "ACTIVE" : "DISABLED"}
                  </span>
                  <button data-mod="${m.id}" data-enabled="${m.is_enabled}" class="btn-toggle-mod px-3 py-1 rounded text-[10px] font-bold tracking-wider transition ${
                    m.is_enabled
                      ? "bg-recomp-border/60 hover:bg-recomp-border text-slate-300"
                      : "bg-recomp-accent hover:bg-recomp-accentHover text-slate-950"
                  }">
                    ${m.is_enabled ? "DISABLE" : "ENABLE"}
                  </button>
                </div>
              </div>
            `;
          })
          .join("");

        // Bind toggle buttons
        document.querySelectorAll(".btn-toggle-mod").forEach((btn) => {
          btn.addEventListener("click", async (e) => {
            const target = e.currentTarget as HTMLElement;
            const modId = target.dataset.mod;
            const isCurrentlyEnabled = target.dataset.enabled === "true";
            if (modId) {
              try {
                await invoke("toggle_mod_state", { modId, enable: !isCurrentlyEnabled });
                await loadMods();
              } catch (err: any) {
                alert("Failed to toggle mod: " + err?.toString());
              }
            }
          });
        });
      } catch (err: any) {
        body.innerHTML = `<div class="p-8 text-center text-recomp-imperial font-mono">Failed to scan mods: ${err?.toString()}</div>`;
      }
    }

    // Refresh button
    document.getElementById("btn-refresh-mods")?.addEventListener("click", () => {
      loadMods();
    });

    // Drop zone click triggers file input
    const dropZone = document.getElementById("mod-drop-zone");
    const fileInput = document.getElementById("mod-file-input") as HTMLInputElement;

    dropZone?.addEventListener("click", () => {
      fileInput?.click();
    });

    fileInput?.addEventListener("change", async (e) => {
      const file = (e.target as HTMLInputElement).files?.[0];
      if (file) {
        alert("To install archive, drop the file directly onto the window or copy it to game_files/addon/.");
      }
    });

    loadMods();
  },
};
