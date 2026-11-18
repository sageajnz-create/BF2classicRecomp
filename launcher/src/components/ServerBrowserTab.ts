import { invoke } from "@tauri-apps/api/core";

interface ServerInfo {
  id: string;
  name: string;
  ip: string;
  port: number;
  map: string;
  mode: string;
  players: number;
  max_players: number;
  ping_ms: number;
  requires_password: boolean;
  is_lan: boolean;
}

export default {
  async mount(container: HTMLElement) {
    container.innerHTML = `
      <div class="flex-1 flex flex-col max-w-5xl mx-auto w-full">
        <!-- Control Header -->
        <div class="flex items-center justify-between mb-4">
          <div class="flex items-center space-x-2">
            <button id="src-internet" class="px-3.5 py-1.5 rounded text-xs font-mono font-bold bg-recomp-accent text-slate-950">
              COMMUNITY SERVERS
            </button>
            <button id="src-lan" class="px-3.5 py-1.5 rounded text-xs font-mono font-bold bg-recomp-panel hover:bg-recomp-border/60 text-recomp-textMuted hover:text-white border border-recomp-border">
              LAN SYSTEM LINK (3074/3658)
            </button>
          </div>

          <div class="flex items-center space-x-3">
            <div class="flex items-center space-x-1.5 bg-recomp-panel border border-recomp-border rounded px-3 py-1">
              <span class="text-[11px] font-mono text-recomp-textMuted">DIRECT IP:</span>
              <input id="direct-ip" type="text" placeholder="127.0.0.1:3074" class="bg-transparent text-xs font-mono text-white placeholder-slate-600 focus:outline-none w-36" />
              <button id="btn-direct-connect" class="px-2 py-0.5 rounded bg-recomp-accent/20 hover:bg-recomp-accent/40 text-recomp-accent text-[10px] font-mono font-semibold">
                JOIN
              </button>
            </div>
            <button id="btn-refresh-servers" class="px-3 py-1.5 rounded bg-recomp-panel border border-recomp-border hover:bg-recomp-border text-xs font-mono text-recomp-textLight flex items-center space-x-1.5">
              <svg class="w-3.5 h-3.5" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2"><path d="M21 2v6h-6M3 12a9 9 0 0 1 15-6.7L21 8M3 22v-6h6M21 12a9 9 0 0 1-15 6.7L3 16"/></svg>
              <span>REFRESH</span>
            </button>
          </div>
        </div>

        <!-- Servers Table -->
        <div class="flex-1 bg-recomp-panel border border-recomp-border rounded-lg overflow-hidden flex flex-col">
          <div class="grid grid-cols-12 bg-recomp-dark/50 border-b border-recomp-border px-4 py-2 text-[10px] font-mono text-recomp-textMuted uppercase tracking-wider font-semibold">
            <div class="col-span-5">Server Name</div>
            <div class="col-span-2">Map</div>
            <div class="col-span-2">Mode</div>
            <div class="col-span-1 text-center">Players</div>
            <div class="col-span-1 text-center">Ping</div>
            <div class="col-span-1 text-right">Action</div>
          </div>
          <div id="servers-table-body" class="flex-1 overflow-auto divide-y divide-recomp-border/40 font-mono text-xs">
            <div class="p-8 text-center text-recomp-textMuted">Querying servers...</div>
          </div>
        </div>
      </div>
    `;

    let activeSource = "internet";

    async function loadServers() {
      const body = document.getElementById("servers-table-body");
      if (!body) return;
      body.innerHTML = `<div class="p-8 text-center text-recomp-textMuted font-mono animate-pulse">Scanning ${activeSource === "lan" ? "local subnet broadcast (UDP 3074/3658)" : "master server directory"}...</div>`;

      try {
        const servers = await invoke<ServerInfo[]>("get_servers", { source: activeSource });
        if (servers.length === 0) {
          body.innerHTML = `<div class="p-8 text-center text-recomp-textMuted font-mono">No active servers discovered on ${activeSource}. Host a server or check subnet.</div>`;
          return;
        }

        body.innerHTML = servers
          .map((s) => {
            const pingColor = s.ping_ms < 50 ? "text-emerald-400" : s.ping_ms < 100 ? "text-amber-400" : "text-recomp-imperial";
            return `
              <div class="grid grid-cols-12 px-4 py-2.5 items-center hover:bg-slate-800/40 transition">
                <div class="col-span-5 flex items-center space-x-2">
                  <span class="inline-block w-1.5 h-1.5 rounded-full ${s.is_lan ? "bg-cyan-400" : "bg-emerald-400"}"></span>
                  <span class="font-bold text-white truncate">${s.name}</span>
                </div>
                <div class="col-span-2 text-recomp-textMuted truncate">${s.map}</div>
                <div class="col-span-2 text-recomp-textMuted truncate">${s.mode}</div>
                <div class="col-span-1 text-center font-semibold text-slate-300">${s.players}/${s.max_players}</div>
                <div class="col-span-1 text-center font-bold ${pingColor}">${s.ping_ms}ms</div>
                <div class="col-span-1 text-right">
                  <button data-ip="${s.ip}" data-port="${s.port}" class="btn-join-server px-2.5 py-1 rounded bg-recomp-accent hover:bg-recomp-accentHover text-slate-950 font-bold text-[10px] tracking-wider transition">
                    JOIN
                  </button>
                </div>
              </div>
            `;
          })
          .join("");

        // Bind join buttons
        document.querySelectorAll(".btn-join-server").forEach((btn) => {
          btn.addEventListener("click", async (e) => {
            const target = e.currentTarget as HTMLElement;
            const ip = target.dataset.ip;
            const port = parseInt(target.dataset.port || "3074", 10);
            if (ip) {
              await connectToServer(ip, port);
            }
          });
        });
      } catch (err: any) {
        body.innerHTML = `<div class="p-8 text-center text-recomp-imperial font-mono">Failed to query servers: ${err?.toString()}</div>`;
      }
    }

    async function connectToServer(ip: string, port: number) {
      try {
        await invoke("launch_game", {
          options: {
            connect_ip: ip,
            connect_port: port,
          },
        });
      } catch (err: any) {
        alert("Failed to connect: " + err?.toString());
      }
    }

    // Direct connect
    document.getElementById("btn-direct-connect")?.addEventListener("click", async () => {
      const input = document.getElementById("direct-ip") as HTMLInputElement;
      const raw = input?.value?.trim();
      if (!raw) return;

      const [ip, portStr] = raw.split(":");
      const port = portStr ? parseInt(portStr, 10) : 3074;
      await connectToServer(ip, port);
    });

    // Refresh button
    document.getElementById("btn-refresh-servers")?.addEventListener("click", () => {
      loadServers();
    });

    // Source buttons
    const btnInternet = document.getElementById("src-internet");
    const btnLan = document.getElementById("src-lan");

    btnInternet?.addEventListener("click", () => {
      activeSource = "internet";
      btnInternet.className = "px-3.5 py-1.5 rounded text-xs font-mono font-bold bg-recomp-accent text-slate-950";
      if (btnLan) btnLan.className = "px-3.5 py-1.5 rounded text-xs font-mono font-bold bg-recomp-panel hover:bg-recomp-border/60 text-recomp-textMuted hover:text-white border border-recomp-border";
      loadServers();
    });

    btnLan?.addEventListener("click", () => {
      activeSource = "lan";
      btnLan.className = "px-3.5 py-1.5 rounded text-xs font-mono font-bold bg-recomp-accent text-slate-950";
      if (btnInternet) btnInternet.className = "px-3.5 py-1.5 rounded text-xs font-mono font-bold bg-recomp-panel hover:bg-recomp-border/60 text-recomp-textMuted hover:text-white border border-recomp-border";
      loadServers();
    });

    loadServers();
  },
};
