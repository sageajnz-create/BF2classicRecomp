export interface LaunchResult {
  mode?: "native" | "web-preview";
  pid?: number;
  binary?: string;
  args?: string[];
  envs?: Record<string, string>;
  message?: string;
}

type EventHandler<T> = (event: { payload: T }) => void;
const eventBus = new EventTarget();

function isTauriRuntime(): boolean {
  return typeof window !== "undefined" && "__TAURI_INTERNALS__" in window;
}

export function emitLocalEvent<T>(eventName: string, payload: T): void {
  eventBus.dispatchEvent(new CustomEvent(eventName, { detail: payload }));
}

export async function listen<T>(
  eventName: string,
  handler: EventHandler<T>
): Promise<() => void> {
  if (isTauriRuntime()) {
    const { listen: tauriListen } = await import("@tauri-apps/api/event");
    return tauriListen<T>(eventName, handler);
  }

  const listener = (e: Event) => {
    const custom = e as CustomEvent<T>;
    handler({ payload: custom.detail });
  };
  eventBus.addEventListener(eventName, listener);
  return () => eventBus.removeEventListener(eventName, listener);
}

export async function invoke<T = unknown>(
  cmd: string,
  args?: Record<string, unknown>
): Promise<T> {
  if (isTauriRuntime()) {
    const { invoke: tauriInvoke } = await import("@tauri-apps/api/core");
    return tauriInvoke<T>(cmd, args);
  }

  switch (cmd) {
    case "get_game_config": {
      const res = await fetch("/api/config");
      if (!res.ok) throw new Error(await res.text());
      return res.json() as Promise<T>;
    }
    case "save_game_config": {
      const res = await fetch("/api/config", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify(args?.config ?? {}),
      });
      if (!res.ok) throw new Error(await res.text());
      return res.json() as Promise<T>;
    }
    case "list_mods": {
      const res = await fetch("/api/mods");
      if (!res.ok) throw new Error(await res.text());
      return res.json() as Promise<T>;
    }
    case "toggle_mod_state": {
      const res = await fetch("/api/mods/toggle", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({
          modId: args?.modId,
          enable: args?.enable,
        }),
      });
      if (!res.ok) {
        const data = await res.json().catch(() => ({ error: res.statusText }));
        throw new Error(data.error || "Failed to toggle mod");
      }
      return res.json() as Promise<T>;
    }
    case "install_mod_archive": {
      const res = await fetch("/api/mods/install", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({
          filename: args?.filename,
          dataBase64: args?.dataBase64,
        }),
      });
      if (!res.ok) {
        const data = await res.json().catch(() => ({ error: res.statusText }));
        throw new Error(data.error || "Failed to install mod archive");
      }
      return res.json() as Promise<T>;
    }
    case "get_servers": {
      const source = encodeURIComponent(String(args?.source ?? "internet"));
      const res = await fetch(`/api/servers?source=${source}`);
      if (!res.ok) throw new Error(await res.text());
      return res.json() as Promise<T>;
    }
    case "launch_game": {
      const res = await fetch("/api/launch", {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ options: args?.options ?? {} }),
      });
      if (!res.ok) {
        const data = await res.json().catch(() => ({ error: res.statusText }));
        throw new Error(data.error || "Failed to launch game");
      }
      const result = (await res.json()) as LaunchResult;
      if (result.mode === "web-preview") {
        setTimeout(() => {
          emitLocalEvent("game-exit", { exit_code: 0 });
        }, 1200);
      }
      return result as unknown as T;
    }
    default:
      throw new Error(`Unsupported command in web mode: ${cmd}`);
  }
}
