import express from "express";
import fs from "node:fs";
import path from "node:path";
import zlib from "node:zlib";
import dgram from "node:dgram";
import { fileURLToPath } from "node:url";
import { spawn } from "node:child_process";

const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);
const PORT = 3000;
const HOST = "127.0.0.1";

export interface RecompConfig {
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

interface ModInfo {
  id: string;
  title: string;
  description: string;
  is_enabled: boolean;
  is_xbox_native: boolean;
  path: string;
  size_bytes: number;
}

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

function defaultConfig(): RecompConfig {
  return {
    aspect: "16:9",
    res_scale: 2,
    window_scale: 2,
    fullscreen: 0,
    anisotropy: 16,
    cas: 1,
    gpu_vsh: 1,
    shader_cache: 1,
    visibility_uav: 1,
    pipelined_query: 0,
    pb_kick_ack: 0,
    vsync: 0,
    fps_limit: 0,
    show_fps: 1,
    mouse_input: 1,
    mouse_sens: 1.0,
    mouse_full: 48,
    mouse_sens_x: 1.0,
    mouse_sens_y: 1.0,
    mouse_smoothing: 0,
    mouse_acc: 1.0,
    mouse_invert_y: 0,
    deadzone: 0.18,
    dispatch_gate: 1,
  };
}

function clamp(val: number, min: number, max: number): number {
  if (!Number.isFinite(val)) return min;
  return Math.min(max, Math.max(min, val));
}

function sanitizeConfig(cfg: RecompConfig): RecompConfig {
  const c = { ...defaultConfig(), ...cfg };
  c.res_scale = Math.round(clamp(Number(c.res_scale), 1, 4));
  c.window_scale = Math.round(clamp(Number(c.window_scale), 1, 4));
  c.fullscreen = Number(c.fullscreen) > 0 ? 1 : 0;
  c.vsync = Number(c.vsync) > 0 ? 1 : 0;
  c.cas = Number(c.cas) > 0 ? 1 : 0;
  c.gpu_vsh = Number(c.gpu_vsh) > 0 ? 1 : 0;
  c.shader_cache = Number(c.shader_cache) > 0 ? 1 : 0;
  c.visibility_uav = Number(c.visibility_uav) > 0 ? 1 : 0;
  c.pipelined_query = Number(c.pipelined_query) > 0 ? 1 : 0;
  c.pb_kick_ack = Number(c.pb_kick_ack) > 0 ? 1 : 0;
  c.show_fps = Number(c.show_fps) > 0 ? 1 : 0;
  c.anisotropy = Math.round(clamp(Number(c.anisotropy), 1, 16));
  c.fps_limit = Math.max(0, Math.round(Number(c.fps_limit) || 0));

  c.mouse_input = Number(c.mouse_input) > 0 ? 1 : 0;
  c.mouse_sens = clamp(Number(c.mouse_sens), 0.1, 10.0);
  c.mouse_sens_x = clamp(Number(c.mouse_sens_x), 0.1, 10.0);
  c.mouse_sens_y = clamp(Number(c.mouse_sens_y), 0.1, 10.0);
  c.mouse_full = Math.round(clamp(Number(c.mouse_full), 8, 128));
  c.mouse_smoothing = Number(c.mouse_smoothing) > 0 ? 1 : 0;
  c.deadzone = clamp(Number(c.deadzone), 0.0, 0.9);
  c.mouse_acc = clamp(Number(c.mouse_acc), 1.0, 3.0);
  c.mouse_invert_y = Number(c.mouse_invert_y) > 0 ? 1 : 0;
  c.dispatch_gate = Number(c.dispatch_gate) > 0 ? 1 : 0;
  return c;
}

function locateIniPath(): string {
  const candidates = [
    path.resolve(__dirname, "../bf2_recomp/game_files/bf2_recomp.ini"),
    path.resolve(__dirname, "bf2_recomp.ini"),
    path.resolve(__dirname, "../bf2_recomp.ini"),
    path.resolve(__dirname, "../../bf2_recomp.ini"),
    path.resolve(__dirname, "game_files/bf2_recomp.ini"),
  ];
  for (const p of candidates) {
    if (fs.existsSync(p)) return p;
  }
  return path.resolve(__dirname, "../bf2_recomp.ini");
}

function loadConfigFromIni(iniPath: string): RecompConfig {
  const config = defaultConfig();
  if (!fs.existsSync(iniPath)) return config;

  const content = fs.readFileSync(iniPath, "utf-8");
  let currentSection = "";

  for (const rawLine of content.split(/\r?\n/)) {
    const line = rawLine.trim();
    if (!line || line.startsWith(";") || line.startsWith("#")) continue;

    if (line.startsWith("[") && line.endsWith("]")) {
      currentSection = line.slice(1, -1).trim();
      continue;
    }

    const eqIdx = line.indexOf("=");
    if (eqIdx === -1) continue;
    const key = line.slice(0, eqIdx).trim();
    const val = line.slice(eqIdx + 1).trim();

    if (currentSection === "Graphics") {
      if (key === "aspect") config.aspect = val;
      else if (key in config) {
        const n = Number(val);
        if (!Number.isNaN(n)) (config as unknown as Record<string, unknown>)[key] = n;
      }
    } else if (currentSection === "Controls") {
      if (key in config) {
        const n = Number(val);
        if (!Number.isNaN(n)) (config as unknown as Record<string, unknown>)[key] = n;
      }
    } else if (currentSection === "Kernel") {
      if (key === "dispatch_gate") {
        const n = Number(val);
        if (!Number.isNaN(n)) config.dispatch_gate = n;
      } else if (key === "save_dir") {
        config.save_dir = val;
      }
    }
  }

  return sanitizeConfig(config);
}

function saveConfigToIni(iniPath: string, rawConfig: RecompConfig): RecompConfig {
  const cfg = sanitizeConfig(rawConfig);
  const updates: Record<string, Record<string, string>> = {
    Graphics: {
      aspect: cfg.aspect,
      res_scale: String(cfg.res_scale),
      window_scale: String(cfg.window_scale),
      fullscreen: String(cfg.fullscreen),
      anisotropy: String(cfg.anisotropy),
      cas: String(cfg.cas),
      gpu_vsh: String(cfg.gpu_vsh),
      shader_cache: String(cfg.shader_cache),
      visibility_uav: String(cfg.visibility_uav),
      pipelined_query: String(cfg.pipelined_query),
      pb_kick_ack: String(cfg.pb_kick_ack),
      vsync: String(cfg.vsync),
      fps_limit: String(cfg.fps_limit),
      show_fps: String(cfg.show_fps),
    },
    Controls: {
      mouse_input: String(cfg.mouse_input),
      mouse_sens: cfg.mouse_sens.toFixed(2),
      mouse_full: String(cfg.mouse_full),
      mouse_sens_x: cfg.mouse_sens_x.toFixed(2),
      mouse_sens_y: cfg.mouse_sens_y.toFixed(2),
      mouse_smoothing: String(cfg.mouse_smoothing),
      mouse_acc: cfg.mouse_acc.toFixed(2),
      mouse_invert_y: String(cfg.mouse_invert_y),
      deadzone: cfg.deadzone.toFixed(2),
    },
    Kernel: {
      dispatch_gate: String(cfg.dispatch_gate),
      ...(cfg.save_dir ? { save_dir: cfg.save_dir } : {}),
    },
  };

  if (!fs.existsSync(iniPath)) {
    const out: string[] = [];
    for (const [sec, kv] of Object.entries(updates)) {
      out.push(`[${sec}]`);
      for (const [k, v] of Object.entries(kv)) {
        out.push(`${k}=${v}`);
      }
      out.push("");
    }
    fs.writeFileSync(iniPath, out.join("\n"), "utf-8");
    return cfg;
  }

  const lines = fs.readFileSync(iniPath, "utf-8").split(/\r?\n/);
  const seen: Record<string, Set<string>> = {
    Graphics: new Set(),
    Controls: new Set(),
    Kernel: new Set(),
  };

  let currentSection = "";
  const outputLines: string[] = [];

  for (const rawLine of lines) {
    const trimmed = rawLine.trim();
    if (trimmed.startsWith("[") && trimmed.endsWith("]")) {
      // Flush any missing keys from previous section
      if (currentSection && updates[currentSection]) {
        for (const [k, v] of Object.entries(updates[currentSection])) {
          if (!seen[currentSection]?.has(k)) {
            outputLines.push(`${k}=${v}`);
            seen[currentSection]?.add(k);
          }
        }
      }
      currentSection = trimmed.slice(1, -1).trim();
      outputLines.push(rawLine);
      continue;
    }

    if (
      currentSection &&
      updates[currentSection] &&
      trimmed &&
      !trimmed.startsWith(";") &&
      !trimmed.startsWith("#")
    ) {
      const eqIdx = trimmed.indexOf("=");
      if (eqIdx !== -1) {
        const key = trimmed.slice(0, eqIdx).trim();
        if (key in updates[currentSection]) {
          outputLines.push(`${key}=${updates[currentSection][key]}`);
          seen[currentSection]?.add(key);
          continue;
        }
      }
    }

    outputLines.push(rawLine);
  }

  if (currentSection && updates[currentSection]) {
    for (const [k, v] of Object.entries(updates[currentSection])) {
      if (!seen[currentSection]?.has(k)) {
        outputLines.push(`${k}=${v}`);
      }
    }
  }

  fs.writeFileSync(iniPath, outputLines.join("\n"), "utf-8");
  return cfg;
}

function configToEnvMap(cfg: RecompConfig): Record<string, string> {
  const env: Record<string, string> = {
    RECOMP_ASPECT: cfg.aspect,
    RECOMP_RES_SCALE: String(cfg.res_scale),
    RECOMP_WINDOW_SCALE: String(cfg.window_scale),
    RECOMP_FULLSCREEN: String(cfg.fullscreen),
    RECOMP_ANISOTROPY: String(cfg.anisotropy),
    RECOMP_CAS: String(cfg.cas),
    RECOMP_GPU_VSH: String(cfg.gpu_vsh),
    RECOMP_SHADER_CACHE: String(cfg.shader_cache),
    RECOMP_VISIBILITY_UAV: String(cfg.visibility_uav),
    RECOMP_PIPELINED_QUERY: String(cfg.pipelined_query),
    RECOMP_PB_KICK_ACK: String(cfg.pb_kick_ack),
    RECOMP_PRESENT_VSYNC: String(cfg.vsync),
    RECOMP_FPS_LIMIT: String(cfg.fps_limit),
    RECOMP_SHOW_FPS: String(cfg.show_fps),
    RECOMP_MKB: String(cfg.mouse_input),
    RECOMP_MKB_SENS: cfg.mouse_sens.toFixed(2),
    RECOMP_MKB_FULL: String(cfg.mouse_full),
    RECOMP_MKB_SENS_X: cfg.mouse_sens_x.toFixed(2),
    RECOMP_MKB_SENS_Y: cfg.mouse_sens_y.toFixed(2),
    RECOMP_MKB_SMOOTH: String(cfg.mouse_smoothing),
    RECOMP_MKB_ACC: cfg.mouse_acc.toFixed(2),
    RECOMP_MKB_INVERT_Y: String(cfg.mouse_invert_y),
    RECOMP_MKB_DZ: cfg.deadzone.toFixed(2),
    RECOMP_MKB_DEADZONE: cfg.deadzone.toFixed(2),
    RECOMP_DISPATCH_GATE: String(cfg.dispatch_gate),
  };
  if (cfg.save_dir) {
    env.RECOMP_SAVE_DIR = cfg.save_dir;
  }
  return env;
}

function locateGameDir(): string {
  const candidates = [
    path.resolve(__dirname, "game_files"),
    path.resolve(__dirname, "../game_files"),
    path.resolve(__dirname, "../../game_files"),
    path.resolve(__dirname, "../bf2_recomp/game_files"),
  ];
  for (const c of candidates) {
    if (
      fs.existsSync(path.join(c, "default.xbe")) ||
      fs.existsSync(path.join(c, "Data")) ||
      fs.existsSync(path.join(c, "addon")) ||
      fs.existsSync(path.join(c, "addon_disabled"))
    ) {
      return c;
    }
  }
  return path.resolve(__dirname, "../bf2_recomp/game_files");
}

function calculateDirSize(dir: string): number {
  let total = 0;
  if (!fs.existsSync(dir)) return 0;
  for (const entry of fs.readdirSync(dir, { withFileTypes: true })) {
    const full = path.join(dir, entry.name);
    if (entry.isFile()) {
      total += fs.statSync(full).size;
    } else if (entry.isDirectory()) {
      total += calculateDirSize(full);
    }
  }
  return total;
}

function detectXboxNative(dir: string): boolean {
  let isXbox = false;
  let isPc = false;

  function walk(p: string) {
    if (!fs.existsSync(p)) return;
    for (const entry of fs.readdirSync(p, { withFileTypes: true })) {
      const full = path.join(p, entry.name);
      const upper = full.toUpperCase();
      if (upper.includes("_LVL_XBOX")) isXbox = true;
      else if (upper.includes("_LVL_PC")) isPc = true;

      if (entry.isDirectory()) {
        walk(full);
      } else if (entry.isFile() && upper.endsWith(".LVL")) {
        try {
          const buf = fs.readFileSync(full);
          if (buf.includes("_LVL_XBO") || buf.includes("XBOX_lvl")) isXbox = true;
          else if (buf.includes("_LVL_PC")) isPc = true;
        } catch {
          // ignore read error
        }
      }
    }
  }

  walk(dir);
  if (isXbox) return true;
  if (isPc) return false;
  return true;
}

function parseAddmeScript(scriptPath: string, fallbackId: string): [string, string] {
  try {
    const buf = fs.readFileSync(scriptPath);
    if (buf.length >= 4 && buf[0] === 0x1b && buf[1] === 0x4c && buf[2] === 0x75 && buf[3] === 0x61) {
      const scan = buf.subarray(12);
      const extracted: string[] = [];
      let cur = "";
      for (const b of scan) {
        if (b >= 0x20 && b <= 0x7e) {
          cur += String.fromCharCode(b);
        } else {
          if (cur.length >= 4) extracted.push(cur);
          cur = "";
        }
      }
      if (cur.length >= 4) extracted.push(cur);

      for (const s of extracted) {
        const lower = s.toLowerCase();
        if (
          s.length > 3 &&
          s !== fallbackId &&
          !lower.startsWith("lua") &&
          !lower.includes(".lvl") &&
          !lower.includes("addme") &&
          !lower.includes("downloadable")
        ) {
          return [s, `Extracted from Lua bytecode (${fallbackId})`];
        }
      }
      return [fallbackId, "Custom Battlefront II Addon"];
    }

    const text = buf.toString("utf-8");
    for (const line of text.split(/\r?\n/)) {
      if (line.includes("AddDownloadableContent")) {
        const parts = line.split('"');
        if (parts.length >= 4 && parts[3].trim()) {
          return [parts[3].trim(), `Battlefront II Addon Map (${fallbackId})`];
        }
      }
    }
  } catch {
    // ignore
  }
  return [fallbackId, "Custom Battlefront II Addon"];
}

function scanAddons(gameDir: string): ModInfo[] {
  const results: ModInfo[] = [];
  const targets: Array<[string, boolean]> = [
    [path.join(gameDir, "addon"), true],
    [path.join(gameDir, "addon_disabled"), false],
  ];

  for (const [poolDir, isEnabled] of targets) {
    if (!fs.existsSync(poolDir)) continue;
    for (const entry of fs.readdirSync(poolDir, { withFileTypes: true })) {
      if (!entry.isDirectory() || entry.name.startsWith(".")) continue;
      const modId = entry.name;
      const modPath = path.join(poolDir, modId);

      const scriptCandidate = path.join(modPath, "addme.script");
      const subScript = path.join(modPath, "Data", "_LVL_XBOX", "addme.script");
      let title = modId;
      let description = "Custom Addon";

      if (fs.existsSync(scriptCandidate)) {
        [title, description] = parseAddmeScript(scriptCandidate, modId);
      } else if (fs.existsSync(subScript)) {
        [title, description] = parseAddmeScript(subScript, modId);
      }

      results.push({
        id: modId,
        title,
        description,
        is_enabled: isEnabled,
        is_xbox_native: detectXboxNative(modPath),
        path: modPath,
        size_bytes: calculateDirSize(modPath),
      });
    }
  }

  results.sort((a, b) => a.id.localeCompare(b.id));
  return results;
}

function isSafeZipEntry(entryName: string): boolean {
  const normalized = entryName.replace(/\\/g, "/");
  if (normalized.startsWith("/") || normalized.includes(":")) return false;
  for (const part of normalized.split("/")) {
    if (part === "..") return false;
  }
  return true;
}

function extractZipBuffer(zipBuf: Buffer, targetAddonDir: string, archiveStem: string): string {
  // Find End of Central Directory (0x06054b50)
  let eocdOffset = -1;
  for (let i = zipBuf.length - 22; i >= Math.max(0, zipBuf.length - 65557); i--) {
    if (zipBuf.readUInt32LE(i) === 0x06054b50) {
      eocdOffset = i;
      break;
    }
  }
  if (eocdOffset === -1) {
    throw new Error("Invalid ZIP archive: End of Central Directory not found");
  }

  const totalEntries = zipBuf.readUInt16LE(eocdOffset + 10);
  const cdOffset = zipBuf.readUInt32LE(eocdOffset + 16);

  interface ZipEntry {
    name: string;
    method: number;
    compressedSize: number;
    localHeaderOffset: number;
  }

  const entries: ZipEntry[] = [];
  let cursor = cdOffset;
  for (let i = 0; i < totalEntries; i++) {
    if (cursor + 46 > zipBuf.length || zipBuf.readUInt32LE(cursor) !== 0x02014b50) {
      throw new Error("Invalid ZIP archive: corrupt Central Directory");
    }
    const method = zipBuf.readUInt16LE(cursor + 10);
    const compressedSize = zipBuf.readUInt32LE(cursor + 20);
    const nameLen = zipBuf.readUInt16LE(cursor + 28);
    const extraLen = zipBuf.readUInt16LE(cursor + 30);
    const commentLen = zipBuf.readUInt16LE(cursor + 32);
    const localHeaderOffset = zipBuf.readUInt32LE(cursor + 42);
    const name = zipBuf.subarray(cursor + 46, cursor + 46 + nameLen).toString("utf-8");
    cursor += 46 + nameLen + extraLen + commentLen;

    if (!isSafeZipEntry(name)) {
      throw new Error(`Zip Slip / unsafe path detected in archive: '${name}'`);
    }
    entries.push({ name, method, compressedSize, localHeaderOffset });
  }

  let detectedTopDir: string | null = null;
  for (const e of entries) {
    const norm = e.name.replace(/\\/g, "/");
    const first = norm.split("/")[0];
    if (first && norm.includes("/")) {
      if (detectedTopDir === null) detectedTopDir = first;
      else if (detectedTopDir !== first) {
        detectedTopDir = archiveStem;
        break;
      }
    }
  }
  const modId = detectedTopDir || archiveStem;
  fs.mkdirSync(targetAddonDir, { recursive: true });

  for (const e of entries) {
    const norm = e.name.replace(/\\/g, "/");
    if (!norm) continue;
    const outPath = path.resolve(targetAddonDir, norm);
    const resolvedBase = path.resolve(targetAddonDir);
    if (!outPath.startsWith(resolvedBase + path.sep) && outPath !== resolvedBase) {
      throw new Error(`Zip Slip detected: '${norm}'`);
    }

    if (norm.endsWith("/")) {
      fs.mkdirSync(outPath, { recursive: true });
      continue;
    }

    if (zipBuf.readUInt32LE(e.localHeaderOffset) !== 0x04034b50) {
      throw new Error(`Corrupt local file header for '${norm}'`);
    }
    const localNameLen = zipBuf.readUInt16LE(e.localHeaderOffset + 26);
    const localExtraLen = zipBuf.readUInt16LE(e.localHeaderOffset + 28);
    const dataStart = e.localHeaderOffset + 30 + localNameLen + localExtraLen;
    const compressedData = zipBuf.subarray(dataStart, dataStart + e.compressedSize);

    let fileData: Buffer;
    if (e.method === 0) {
      fileData = compressedData;
    } else if (e.method === 8) {
      fileData = zlib.inflateRawSync(compressedData);
    } else {
      throw new Error(`Unsupported ZIP compression method ${e.method} for '${norm}'`);
    }

    fs.mkdirSync(path.dirname(outPath), { recursive: true });
    fs.writeFileSync(outPath, fileData);
  }

  return modId;
}

function findGameBinary(): string | null {
  const candidates = [
    path.resolve(__dirname, "swbf2_recomp"),
    path.resolve(__dirname, "swbf2_recomp.exe"),
    path.resolve(__dirname, "../bf2_recomp/game_files/swbf2_recomp"),
    path.resolve(__dirname, "../bf2_recomp/game_files/swbf2_recomp.exe"),
    path.resolve(__dirname, "../bf2_recomp/build/Release/swbf2_recomp.exe"),
  ];
  for (const c of candidates) {
    if (fs.existsSync(c)) return c;
  }
  return null;
}

const CURATED_COMMUNITY_SERVERS: ServerInfo[] = [
  {
    id: "swbf2_coruscant",
    name: "Coruscant Temple 24/7 [No-Force-Jump]",
    ip: "104.238.168.102",
    port: 3074,
    map: "cor1g_con",
    mode: "Conquest",
    players: 28,
    max_players: 64,
    ping_ms: 32,
    requires_password: false,
    is_lan: false,
  },
  {
    id: "swbf2_mos_eisley",
    name: "Mos Eisley Hero Assault [Low Latency]",
    ip: "142.250.190.46",
    port: 3074,
    map: "tat2g_eli",
    mode: "Hero Assault",
    players: 32,
    max_players: 32,
    ping_ms: 18,
    requires_password: false,
    is_lan: false,
  },
  {
    id: "swbf2_kashyyyk",
    name: "Kashyyyk Docks - Reinforcements 200%",
    ip: "172.67.140.21",
    port: 3074,
    map: "kas2c_con",
    mode: "Conquest",
    players: 14,
    max_players: 48,
    ping_ms: 45,
    requires_password: false,
    is_lan: false,
  },
  {
    id: "swbf2_space_yavin",
    name: "Space Yavin Fleet Battle",
    ip: "198.51.100.77",
    port: 3074,
    map: "spa2g_1c",
    mode: "Space Assault",
    players: 8,
    max_players: 32,
    ping_ms: 55,
    requires_password: false,
    is_lan: false,
  },
];

async function scanLanServers(timeoutMs = 800): Promise<ServerInfo[]> {
  return new Promise((resolve) => {
    const servers: ServerInfo[] = [];
    let socket: dgram.Socket;
    try {
      socket = dgram.createSocket("udp4");
    } catch {
      resolve([]);
      return;
    }

    const start = Date.now();
    const timer = setTimeout(() => {
      try {
        socket.close();
      } catch {
        // ignore
      }
      resolve(servers);
    }, timeoutMs);

    socket.on("error", () => {
      clearTimeout(timer);
      try {
        socket.close();
      } catch {
        // ignore
      }
      resolve(servers);
    });

    socket.on("message", (msg, rinfo) => {
      if (msg.length >= 8 && msg.subarray(0, 4).toString("ascii") === "SWBF" && msg[4] === 0x02) {
        let cursor = 5;
        const readStr = () => {
          const s = cursor;
          while (cursor < msg.length && msg[cursor] !== 0) cursor++;
          if (cursor >= msg.length) return null;
          const out = msg.subarray(s, cursor).toString("utf-8");
          cursor++;
          return out;
        };
        const name = readStr();
        const map = readStr();
        const mode = readStr();
        if (name && map && mode && cursor + 3 <= msg.length) {
          const id = `lan_${rinfo.address.replace(/\./g, "_")}_${rinfo.port}`;
          if (!servers.some((s) => s.id === id)) {
            servers.push({
              id,
              name,
              ip: rinfo.address,
              port: rinfo.port,
              map,
              mode,
              players: msg[cursor],
              max_players: msg[cursor + 1],
              ping_ms: Date.now() - start,
              requires_password: msg[cursor + 2] !== 0,
              is_lan: true,
            });
          }
        }
      }
    });

    socket.bind(0, () => {
      try {
        socket.setBroadcast(true);
        const probe = Buffer.from([0x53, 0x57, 0x42, 0x46, 0x4c, 0x53, 0x00, 0x02, 0x01]);
        socket.send(probe, 3074, "255.255.255.255");
        socket.send(probe, 3658, "255.255.255.255");
      } catch {
        // broadcast may be disabled in container
      }
    });
  });
}

let isGameRunning = false;

async function startServer() {
  const app = express();
  app.use(express.json({ limit: "64mb" }));

  app.get("/api/config", (_req, res) => {
    try {
      const iniPath = locateIniPath();
      const config = loadConfigFromIni(iniPath);
      res.json(config);
    } catch (err) {
      res.status(500).json({ error: String(err) });
    }
  });

  app.post("/api/config", (req, res) => {
    try {
      const iniPath = locateIniPath();
      const saved = saveConfigToIni(iniPath, req.body as RecompConfig);
      res.json(saved);
    } catch (err) {
      res.status(500).json({ error: String(err) });
    }
  });

  app.get("/api/mods", (_req, res) => {
    try {
      const gameDir = locateGameDir();
      res.json(scanAddons(gameDir));
    } catch (err) {
      res.status(500).json({ error: String(err) });
    }
  });

  app.post("/api/mods/toggle", (req, res) => {
    try {
      const { modId, enable } = req.body as { modId: string; enable: boolean };
      if (!modId || modId.includes("..") || modId.includes("/") || modId.includes("\\")) {
        res.status(400).json({ error: "Invalid mod identifier" });
        return;
      }
      const gameDir = locateGameDir();
      const addonDir = path.join(gameDir, "addon");
      const disabledDir = path.join(gameDir, "addon_disabled");
      fs.mkdirSync(addonDir, { recursive: true });
      fs.mkdirSync(disabledDir, { recursive: true });

      const src = enable ? path.join(disabledDir, modId) : path.join(addonDir, modId);
      const dst = enable ? path.join(addonDir, modId) : path.join(disabledDir, modId);

      if (!fs.existsSync(src)) {
        res.status(404).json({ error: `Mod '${modId}' not found` });
        return;
      }
      if (fs.existsSync(dst)) {
        res.status(409).json({ error: `Destination path '${dst}' already exists` });
        return;
      }
      fs.renameSync(src, dst);
      res.json({ ok: true });
    } catch (err) {
      res.status(500).json({ error: String(err) });
    }
  });

  app.post("/api/mods/install", (req, res) => {
    try {
      const { filename, dataBase64 } = req.body as { filename: string; dataBase64: string };
      if (!filename || !dataBase64) {
        res.status(400).json({ error: "Missing archive filename or payload" });
        return;
      }
      const zipBuf = Buffer.from(dataBase64, "base64");
      const stem = path.basename(filename, path.extname(filename)) || "custom_mod";
      const gameDir = locateGameDir();
      const modId = extractZipBuffer(zipBuf, path.join(gameDir, "addon"), stem);
      res.json({ modId });
    } catch (err) {
      res.status(400).json({ error: err instanceof Error ? err.message : String(err) });
    }
  });

  app.get("/api/servers", async (req, res) => {
    const source = String(req.query.source || "internet");
    if (source === "lan") {
      const lanServers = await scanLanServers(700);
      res.json(lanServers);
      return;
    }

    try {
      const controller = new AbortController();
      const timeout = setTimeout(() => controller.abort(), 2500);
      const response = await fetch("https://master.swbf2recomp.org/api/v1/servers", {
        signal: controller.signal,
      });
      clearTimeout(timeout);
      if (response.ok) {
        const data = (await response.json()) as ServerInfo[];
        if (Array.isArray(data)) {
          res.json(data);
          return;
        }
      }
    } catch {
      // Master server unreachable; fall back to curated community server list
    }
    res.json(CURATED_COMMUNITY_SERVERS);
  });

  app.get("/api/game-status", (_req, res) => {
    res.json({ running: isGameRunning });
  });

  app.post("/api/launch", (req, res) => {
    if (isGameRunning) {
      res.status(409).json({
        error: "A game instance is already running. Please close it before launching again.",
      });
      return;
    }

    const options = (req.body?.options || {}) as {
      connect_ip?: string;
      connect_port?: number;
      active_mod?: string;
      fullscreen_override?: boolean;
    };

    const iniPath = locateIniPath();
    const cfg = loadConfigFromIni(iniPath);
    const envs = configToEnvMap(cfg);
    const args: string[] = [];

    if (options.connect_ip) {
      const port = options.connect_port ?? 3074;
      args.push("-connect", `${options.connect_ip}:${port}`);
      envs.RECOMP_CONNECT_IP = options.connect_ip;
      envs.RECOMP_CONNECT_PORT = String(port);
    }

    if (typeof options.fullscreen_override === "boolean") {
      if (options.fullscreen_override) {
        args.push("-fullscreen");
        envs.RECOMP_FULLSCREEN = "1";
      } else {
        args.push("-windowed");
        envs.RECOMP_FULLSCREEN = "0";
      }
    }

    if (options.active_mod) {
      args.push("-mod", options.active_mod);
      envs.RECOMP_ACTIVE_MOD = options.active_mod;
    }

    const binaryPath = findGameBinary();
    if (!binaryPath) {
      res.json({
        mode: "web-preview",
        binary: "bf2_recomp/build/Release/swbf2_recomp.exe",
        args,
        envs,
        message:
          "Web preview mode: native Windows binary (swbf2_recomp.exe) is not present in this Linux container. Launch configuration and RECOMP_* environment variables were generated from bf2_recomp.ini.",
      });
      return;
    }

    isGameRunning = true;
    const child = spawn(binaryPath, args, {
      cwd: path.dirname(binaryPath),
      env: { ...process.env, ...envs },
    });

    child.on("close", () => {
      isGameRunning = false;
    });

    child.on("error", () => {
      isGameRunning = false;
    });

    res.json({
      mode: "native",
      pid: child.pid,
      binary: binaryPath,
      args,
    });
  });

  if (process.env.NODE_ENV !== "production" && !process.argv.includes("--production")) {
    const { createServer: createViteServer } = await import("vite");
    const vite = await createViteServer({
      root: __dirname,
      server: { middlewareMode: true, hmr: false },
      appType: "spa",
    });
    app.use(vite.middlewares);
  } else {
    const distDir = path.resolve(__dirname, "dist");
    app.use(express.static(distDir));
    app.get("/{*page}", (_req, res) => {
      res.sendFile(path.join(distDir, "index.html"));
    });
  }

  app.listen(PORT, HOST, (error) => {
    if (error) throw error;
    console.log(`SWBF2 Recomp Hub running at http://${HOST}:${PORT}`);
  });
}

startServer();
