import { defineConfig } from "vite";

export default defineConfig({
  clearScreen: false,
  server: {
    host: "0.0.0.0",
    port: 3000,
    strictPort: true,
    hmr: false,
  },
  envPrefix: ["VITE_", "TAURI_"],
  build: {
    target: process.env.TAURI_ENV_PLATFORM == "windows" ? "chrome105" : "safari13",
    minify: !process.env.TAURI_ENV_DEBUG ? "esbuild" : false,
    sourcemap: !!process.env.TAURI_ENV_DEBUG,
  },
});
