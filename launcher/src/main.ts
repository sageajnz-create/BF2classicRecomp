// SWBF2 Desktop Hub - Main Entry Point

export interface TabController {
  mount(container: HTMLElement): void;
  unmount?(): void;
}

const tabs: Record<string, () => Promise<{ default: TabController }>> = {
  play: () => import("./components/PlayTab.ts"),
  servers: () => import("./components/ServerBrowserTab.ts"),
  mods: () => import("./components/ModManagerTab.ts"),
  settings: () => import("./components/SettingsTab.ts"),
};

let currentTabController: TabController | null = null;
let tabRequest = 0;

async function switchTab(tabKey: string) {
  if (!Object.prototype.hasOwnProperty.call(tabs, tabKey)) return;

  const main = document.getElementById("tab-content");
  if (!main) return;

  const request = ++tabRequest;
  let controller: TabController;
  try {
    controller = (await tabs[tabKey]()).default;
  } catch (error) {
    if (request === tabRequest) {
      console.error(`Could not load the ${tabKey} tab`, error);
      const notice = document.createElement("p");
      notice.setAttribute("role", "alert");
      notice.textContent = "Could not open this tab. Select it again to retry.";
      main.querySelector("[data-tab-load-error]")?.remove();
      notice.setAttribute("data-tab-load-error", "");
      main.prepend(notice);
    }
    return;
  }
  if (request !== tabRequest) return;

  // Update nav buttons
  document.querySelectorAll(".nav-btn").forEach((btn) => {
    const key = (btn as HTMLElement).dataset.tab;
    if (key === tabKey) {
      btn.className = "nav-btn px-4 py-1.5 rounded transition text-recomp-accent bg-recomp-border/40 font-semibold";
    } else {
      btn.className = "nav-btn px-4 py-1.5 rounded transition text-recomp-textMuted hover:text-recomp-textLight";
    }
  });

  currentTabController?.unmount?.();
  main.innerHTML = "";
  currentTabController = controller;
  controller.mount(main);
}

window.addEventListener("DOMContentLoaded", () => {
  document.querySelectorAll(".nav-btn").forEach((btn) => {
    btn.addEventListener("click", () => {
      const tab = (btn as HTMLElement).dataset.tab;
      if (tab) switchTab(tab);
    });
  });

  switchTab("play");
});
