use serde::{Deserialize, Serialize};
use std::fs;
use std::path::{Path, PathBuf};

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ModInfo {
    pub id: String,
    pub title: String,
    pub description: String,
    pub is_enabled: bool,
    pub is_xbox_native: bool,
    pub path: String,
    pub size_bytes: u64,
}

fn calculate_dir_size(dir: &Path) -> u64 {
    let mut total = 0;
    if let Ok(entries) = fs::read_dir(dir) {
        for entry in entries.flatten() {
            let p = entry.path();
            if p.is_file() {
                if let Ok(meta) = p.metadata() {
                    total += meta.len();
                }
            } else if p.is_dir() {
                total += calculate_dir_size(&p);
            }
        }
    }
    total
}

fn detect_xbox_native(dir: &Path) -> bool {
    let mut is_xbox = false;
    let mut is_pc = false;

    fn walk(p: &Path, is_xbox: &mut bool, is_pc: &mut bool) {
        if let Ok(entries) = fs::read_dir(p) {
            for entry in entries.flatten() {
                let path = entry.path();
                let path_str = path.to_string_lossy().to_ascii_uppercase();

                if path_str.contains("_LVL_XBOX") {
                    *is_xbox = true;
                } else if path_str.contains("_LVL_PC") {
                    *is_pc = true;
                }

                if path.is_dir() {
                    walk(&path, is_xbox, is_pc);
                } else if path.is_file() && path_str.ends_with(".LVL") {
                    // Check file prefix bytes
                    if let Ok(bytes) = fs::read(&path) {
                        if bytes.windows(8).any(|w| w == b"_LVL_XBO" || w == b"XBOX_lvl") {
                            *is_xbox = true;
                        } else if bytes.windows(7).any(|w| w == b"_LVL_PC") {
                            *is_pc = true;
                        }
                    }
                }
            }
        }
    }

    walk(dir, &mut is_xbox, &mut is_pc);
    if is_xbox {
        true
    } else if is_pc {
        false
    } else {
        // Default to xbox native if no PC markers found
        true
    }
}

fn parse_addme_script(script_path: &Path, fallback_id: &str) -> (String, String) {
    let bytes = match fs::read(script_path) {
        Ok(b) => b,
        Err(_) => return (fallback_id.to_string(), String::new()),
    };

    // Check if compiled Lua 5.0 chunk (\x1bLua\x50)
    if bytes.starts_with(&[0x1b, b'L', b'u', b'a']) {
        // Skip Lua header (12 bytes) and extract ASCII strings of printable characters >= 4 bytes
        let scan_bytes = if bytes.len() > 12 { &bytes[12..] } else { &bytes[..] };
        let mut extracted = Vec::new();
        let mut current = Vec::new();
        for &b in scan_bytes {
            if (0x20..=0x7e).contains(&b) {
                current.push(b);
            } else {
                if current.len() >= 4 {
                    if let Ok(s) = String::from_utf8(current.clone()) {
                        extracted.push(s);
                    }
                }
                current.clear();
            }
        }
        if current.len() >= 4 {
            if let Ok(s) = String::from_utf8(current.clone()) {
                extracted.push(s);
            }
        }

        // Look for string matching title or description
        for s in extracted {
            let s_lower = s.to_ascii_lowercase();
            if s.len() > 3
                && s != fallback_id
                && !s_lower.starts_with("lua")
                && !s_lower.contains(".lvl")
                && !s_lower.contains("addme")
                && !s_lower.contains("downloadable")
            {
                return (s, format!("Extracted from Lua bytecode ({})", fallback_id));
            }
        }
        return (fallback_id.to_string(), "Custom Battlefront II Addon".to_string());
    }

    // Otherwise plain text Lua
    if let Ok(text) = String::from_utf8(bytes) {
        // Look for AddDownloadableContent("BFR", "Title", ...)
        for line in text.lines() {
            if line.contains("AddDownloadableContent") {
                let parts: Vec<&str> = line.split('"').collect();
                if parts.len() >= 4 {
                    let title = parts[3].trim().to_string();
                    if !title.is_empty() {
                        return (title, format!("Battlefront II Addon Map ({})", fallback_id));
                    }
                }
            }
        }
    }

    (fallback_id.to_string(), "Custom Battlefront II Addon".to_string())
}

pub fn scan_addons(game_dir: &Path) -> Vec<ModInfo> {
    let mut results = Vec::new();

    let addon_dir = game_dir.join("addon");
    let disabled_dir = game_dir.join("addon_disabled");

    let targets = [(addon_dir, true), (disabled_dir, false)];

    for (pool_dir, is_enabled) in targets {
        if !pool_dir.exists() {
            continue;
        }

        if let Ok(entries) = fs::read_dir(&pool_dir) {
            for entry in entries.flatten() {
                let p = entry.path();
                if p.is_dir() {
                    let mod_id = p.file_name().unwrap_or_default().to_string_lossy().to_string();
                    if mod_id.starts_with('.') {
                        continue;
                    }

                    // Look for addme.script
                    let script_candidate = p.join("addme.script");
                    let (title, description) = if script_candidate.exists() {
                        parse_addme_script(&script_candidate, &mod_id)
                    } else {
                        // Check subdirectories
                        let sub_script = p.join("Data").join("_LVL_XBOX").join("addme.script");
                        if sub_script.exists() {
                            parse_addme_script(&sub_script, &mod_id)
                        } else {
                            (mod_id.clone(), "Custom Addon".to_string())
                        }
                    };

                    let is_xbox_native = detect_xbox_native(&p);
                    let size_bytes = calculate_dir_size(&p);

                    results.push(ModInfo {
                        id: mod_id,
                        title,
                        description,
                        is_enabled,
                        is_xbox_native,
                        path: p.to_string_lossy().to_string(),
                        size_bytes,
                    });
                }
            }
        }
    }

    results.sort_by(|a, b| a.id.cmp(&b.id));
    results
}

pub fn toggle_mod(game_dir: &Path, mod_id: &str, enable: bool) -> Result<(), String> {
    let addon_dir = game_dir.join("addon");
    let disabled_dir = game_dir.join("addon_disabled");

    fs::create_dir_all(&addon_dir).map_err(|e| e.to_string())?;
    fs::create_dir_all(&disabled_dir).map_err(|e| e.to_string())?;

    let src = if enable {
        disabled_dir.join(mod_id)
    } else {
        addon_dir.join(mod_id)
    };

    let dst = if enable {
        addon_dir.join(mod_id)
    } else {
        disabled_dir.join(mod_id)
    };

    if !src.exists() {
        return Err(format!("Mod '{}' not found at '{}'", mod_id, src.display()));
    }

    if dst.exists() {
        return Err(format!("Destination path '{}' already exists", dst.display()));
    }

    fs::rename(&src, &dst).map_err(|e| e.to_string())?;
    Ok(())
}

pub fn locate_game_dir() -> PathBuf {
    let candidates = [
        PathBuf::from("game_files"),
        PathBuf::from("../game_files"),
        PathBuf::from("../../game_files"),
        PathBuf::from("bf2_recomp/game_files"),
        PathBuf::from("."),
    ];

    for candidate in &candidates {
        if candidate.join("default.xbe").exists() || candidate.join("Data").exists() {
            return candidate.clone();
        }
    }

    PathBuf::from("game_files")
}

#[tauri::command]
pub fn list_mods() -> Result<Vec<ModInfo>, String> {
    let game_dir = locate_game_dir();
    Ok(scan_addons(&game_dir))
}

#[tauri::command]
pub fn toggle_mod_state(mod_id: String, enable: bool) -> Result<(), String> {
    let game_dir = locate_game_dir();
    toggle_mod(&game_dir, &mod_id, enable)
}
