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

let activeTabKey = "play";
let currentTabController: TabController | null = null;

async function switchTab(tabKey: string) {
  if (!tabs[tabKey]) return;
  activeTabKey = tabKey;

  // Update nav buttons
  document.querySelectorAll(".nav-btn").forEach((btn) => {
    const key = (btn as HTMLElement).dataset.tab;
    if (key === tabKey) {
      btn.className = "nav-btn px-4 py-1.5 rounded transition text-recomp-accent bg-recomp-border/40 font-semibold";
    } else {
      btn.className = "nav-btn px-4 py-1.5 rounded transition text-recomp-textMuted hover:text-recomp-textLight";
    }
  });

  const main = document.getElementById("tab-content");
  if (!main) return;

  if (currentTabController?.unmount) {
    currentTabController.unmount();
  }

  main.innerHTML = "";
  const mod = await tabs[tabKey]();
  currentTabController = mod.default;
  currentTabController.mount(main);
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
