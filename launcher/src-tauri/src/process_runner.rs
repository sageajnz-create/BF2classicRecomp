use serde::{Deserialize, Serialize};
use std::collections::HashMap;
use std::fs;
use std::io::Read;
use std::path::{Path, PathBuf};
use std::process::{Command, Stdio};
use std::sync::atomic::{AtomicBool, Ordering};
use tauri::Emitter;

use crate::config_manager::{locate_ini_path, RecompConfig};

static IS_RUNNING: AtomicBool = AtomicBool::new(false);

#[derive(Debug, Clone, Serialize, Deserialize, Default)]
pub struct LaunchOptions {
    pub connect_ip: Option<String>,
    pub connect_port: Option<u16>,
    pub active_mod: Option<String>,
    pub fullscreen_override: Option<bool>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct GameExitPayload {
    pub exit_code: i32,
    pub crash_log: Option<String>,
}

pub fn find_game_binary() -> Result<PathBuf, String> {
    let candidates = [
        PathBuf::from("swbf2_recomp.exe"),
        PathBuf::from("swbf2_recomp"),
        PathBuf::from("game_files/swbf2_recomp.exe"),
        PathBuf::from("game_files/swbf2_recomp"),
        PathBuf::from("../game_files/swbf2_recomp.exe"),
        PathBuf::from("../../game_files/swbf2_recomp.exe"),
        PathBuf::from("bf2_recomp/game_files/swbf2_recomp.exe"),
        PathBuf::from("bf2_recomp/build/Release/swbf2_recomp.exe"),
        PathBuf::from("../bf2_recomp/build/Release/swbf2_recomp.exe"),
    ];

    for candidate in &candidates {
        if candidate.exists() {
            return Ok(candidate.clone());
        }
    }

    // Default to game_files/swbf2_recomp.exe
    Ok(PathBuf::from("game_files/swbf2_recomp.exe"))
}

pub fn build_launch_command(
    opts: &LaunchOptions,
    cfg: &RecompConfig,
) -> Result<(PathBuf, Vec<String>, HashMap<String, String>), String> {
    let binary_path = find_game_binary()?;
    let mut args = Vec::new();
    let mut envs = cfg.to_env_map();

    if let Some(ref ip) = opts.connect_ip {
        let port = opts.connect_port.unwrap_or(3074);
        let endpoint = format!("{}:{}", ip, port);
        args.push("-connect".to_string());
        args.push(endpoint.clone());
        envs.insert("RECOMP_CONNECT_IP".to_string(), ip.clone());
        envs.insert("RECOMP_CONNECT_PORT".to_string(), port.to_string());
    }

    if let Some(fs) = opts.fullscreen_override {
        if fs {
            args.push("-fullscreen".to_string());
            envs.insert("RECOMP_FULLSCREEN".to_string(), "1".to_string());
        } else {
            args.push("-windowed".to_string());
            envs.insert("RECOMP_FULLSCREEN".to_string(), "0".to_string());
        }
    }

    if let Some(ref mod_id) = opts.active_mod {
        args.push("-mod".to_string());
        args.push(mod_id.clone());
        envs.insert("RECOMP_ACTIVE_MOD".to_string(), mod_id.clone());
    }

    Ok((binary_path, args, envs))
}

#[tauri::command]
pub fn is_game_running() -> bool {
    IS_RUNNING.load(Ordering::SeqCst)
}

#[tauri::command]
pub fn launch_game(options: LaunchOptions, app: tauri::AppHandle) -> Result<u32, String> {
    if IS_RUNNING.swap(true, Ordering::SeqCst) {
        return Err("A game instance is already running. Please close it before launching again.".to_string());
    }

    let ini_path = locate_ini_path();
    let cfg = RecompConfig::load_from_path(&ini_path).unwrap_or_default();
    let (binary_path, args, envs) = match build_launch_command(&options, &cfg) {
        Ok(res) => res,
        Err(e) => {
            IS_RUNNING.store(false, Ordering::SeqCst);
            return Err(e);
        }
    };

    let working_dir = binary_path
        .parent()
        .filter(|p| !p.as_os_str().is_empty())
        .unwrap_or_else(|| Path::new("."));

    let mut cmd = Command::new(&binary_path);
    cmd.args(&args);
    cmd.envs(&envs);
    cmd.current_dir(working_dir);
    cmd.stdout(Stdio::piped());
    cmd.stderr(Stdio::piped());

    let mut child = match cmd.spawn() {
        Ok(child) => child,
        Err(e) => {
            IS_RUNNING.store(false, Ordering::SeqCst);
            return Err(format!("Failed to spawn game process '{}': {}", binary_path.display(), e));
        }
    };

    let pid = child.id();
    let app_handle = app.clone();
    let game_dir = working_dir.to_path_buf();

    // Spawn supervisor thread to monitor child process exit
    std::thread::spawn(move || {
        let status = child.wait();
        IS_RUNNING.store(false, Ordering::SeqCst);

        let code = match status {
            Ok(s) => s.code().unwrap_or(-1),
            Err(_) => -1,
        };

        let mut crash_log = None;
        if code != 0 {
            // Read tail of stderr if available
            let mut stderr_str = String::new();
            if let Some(mut err_stream) = child.stderr.take() {
                let _ = err_stream.read_to_string(&mut stderr_str);
            }

            // Also check xbox_kernel.log in game directory
            let kernel_log_path = game_dir.join("xbox_kernel.log");
            let mut log_tail = String::new();
            if let Ok(content) = fs::read_to_string(&kernel_log_path) {
                let lines: Vec<&str> = content.lines().collect();
                let start = if lines.len() > 30 { lines.len() - 30 } else { 0 };
                log_tail = lines[start..].join("\n");
            }

            let combined = format!("Process exited with code {}\nSTDERR:\n{}\n\nXBOX KERNEL LOG TAIL:\n{}", code, stderr_str, log_tail);
            crash_log = Some(combined);
        }

        let payload = GameExitPayload {
            exit_code: code,
            crash_log,
        };

        let _ = app_handle.emit("game-exit", payload);
    });

    Ok(pid)
}
