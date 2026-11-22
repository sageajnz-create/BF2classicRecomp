use ini::Ini;
use serde::{Deserialize, Serialize};
use std::collections::HashMap;
use std::path::{Path, PathBuf};

#[derive(Debug, Clone, Serialize, Deserialize, PartialEq)]
pub struct RecompConfig {
    // [Graphics]
    pub aspect: String,
    pub res_scale: u32,
    pub window_scale: u32,
    pub fullscreen: u32,
    pub anisotropy: u32,
    pub cas: u32,
    pub gpu_vsh: u32,
    pub shader_cache: u32,
    pub visibility_uav: u32,
    pub pipelined_query: u32,
    pub pb_kick_ack: u32,
    pub vsync: u32,
    pub fps_limit: u32,
    pub show_fps: u32,

    // [Controls]
    pub mouse_input: u32,
    pub mouse_sens: f32,
    pub mouse_full: u32,
    pub mouse_sens_x: f32,
    pub mouse_sens_y: f32,
    pub mouse_smoothing: u32,
    pub mouse_acc: f32,
    pub mouse_invert_y: u32,
    pub deadzone: f32,

    // [Kernel]
    pub dispatch_gate: u32,
    pub save_dir: Option<String>,
}

impl Default for RecompConfig {
    fn default() -> Self {
        Self {
            aspect: "16:9".to_string(),
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
            save_dir: None,
        }
    }
}

impl RecompConfig {
    pub fn sanitize(&mut self) {
        if self.res_scale < 1 { self.res_scale = 1; }
        if self.res_scale > 4 { self.res_scale = 4; }

        if self.window_scale < 1 { self.window_scale = 1; }
        if self.window_scale > 4 { self.window_scale = 4; }

        if self.fullscreen > 1 { self.fullscreen = 1; }
        if self.vsync > 1 { self.vsync = 1; }
        if self.cas > 1 { self.cas = 1; }
        if self.gpu_vsh > 1 { self.gpu_vsh = 1; }
        if self.shader_cache > 1 { self.shader_cache = 1; }
        if self.visibility_uav > 1 { self.visibility_uav = 1; }
        if self.show_fps > 1 { self.show_fps = 1; }

        if self.mouse_input > 1 { self.mouse_input = 1; }
        if self.mouse_sens < 0.1 { self.mouse_sens = 0.1; }
        if self.mouse_sens > 10.0 { self.mouse_sens = 10.0; }
        if self.mouse_sens_x < 0.1 { self.mouse_sens_x = 0.1; }
        if self.mouse_sens_x > 10.0 { self.mouse_sens_x = 10.0; }
        if self.mouse_sens_y < 0.1 { self.mouse_sens_y = 0.1; }
        if self.mouse_sens_y > 10.0 { self.mouse_sens_y = 10.0; }

        if self.mouse_full < 8 { self.mouse_full = 8; }
        if self.mouse_full > 128 { self.mouse_full = 128; }

        if self.deadzone < 0.0 { self.deadzone = 0.0; }
        if self.deadzone > 0.9 { self.deadzone = 0.9; }

        if self.mouse_acc < 1.0 { self.mouse_acc = 1.0; }
        if self.mouse_acc > 3.0 { self.mouse_acc = 3.0; }
    }

    pub fn load_from_path(path: &Path) -> Result<Self, String> {
        let mut config = Self::default();
        if !path.exists() {
            return Ok(config);
        }

        let ini = Ini::load_from_file(path).map_err(|e| e.to_string())?;

        if let Some(graphics) = ini.section(Some("Graphics")) {
            if let Some(v) = graphics.get("aspect") { config.aspect = v.to_string(); }
            if let Some(v) = graphics.get("res_scale") { if let Ok(n) = v.parse() { config.res_scale = n; } }
            if let Some(v) = graphics.get("window_scale") { if let Ok(n) = v.parse() { config.window_scale = n; } }
            if let Some(v) = graphics.get("fullscreen") { if let Ok(n) = v.parse() { config.fullscreen = n; } }
            if let Some(v) = graphics.get("anisotropy") { if let Ok(n) = v.parse() { config.anisotropy = n; } }
            if let Some(v) = graphics.get("cas") { if let Ok(n) = v.parse() { config.cas = n; } }
            if let Some(v) = graphics.get("gpu_vsh") { if let Ok(n) = v.parse() { config.gpu_vsh = n; } }
            if let Some(v) = graphics.get("shader_cache") { if let Ok(n) = v.parse() { config.shader_cache = n; } }
            if let Some(v) = graphics.get("visibility_uav") { if let Ok(n) = v.parse() { config.visibility_uav = n; } }
            if let Some(v) = graphics.get("pipelined_query") { if let Ok(n) = v.parse() { config.pipelined_query = n; } }
            if let Some(v) = graphics.get("pb_kick_ack") { if let Ok(n) = v.parse() { config.pb_kick_ack = n; } }
            if let Some(v) = graphics.get("vsync") { if let Ok(n) = v.parse() { config.vsync = n; } }
            if let Some(v) = graphics.get("fps_limit") { if let Ok(n) = v.parse() { config.fps_limit = n; } }
            if let Some(v) = graphics.get("show_fps") { if let Ok(n) = v.parse() { config.show_fps = n; } }
        }

        if let Some(controls) = ini.section(Some("Controls")) {
            if let Some(v) = controls.get("mouse_input") { if let Ok(n) = v.parse() { config.mouse_input = n; } }
            if let Some(v) = controls.get("mouse_sens") { if let Ok(n) = v.parse() { config.mouse_sens = n; } }
            if let Some(v) = controls.get("mouse_full") { if let Ok(n) = v.parse() { config.mouse_full = n; } }
            if let Some(v) = controls.get("mouse_sens_x") { if let Ok(n) = v.parse() { config.mouse_sens_x = n; } }
            if let Some(v) = controls.get("mouse_sens_y") { if let Ok(n) = v.parse() { config.mouse_sens_y = n; } }
            if let Some(v) = controls.get("mouse_smoothing") { if let Ok(n) = v.parse() { config.mouse_smoothing = n; } }
            if let Some(v) = controls.get("mouse_acc") { if let Ok(n) = v.parse() { config.mouse_acc = n; } }
            if let Some(v) = controls.get("mouse_invert_y") { if let Ok(n) = v.parse() { config.mouse_invert_y = n; } }
            if let Some(v) = controls.get("deadzone") { if let Ok(n) = v.parse() { config.deadzone = n; } }
        }

        if let Some(kernel) = ini.section(Some("Kernel")) {
            if let Some(v) = kernel.get("dispatch_gate") { if let Ok(n) = v.parse() { config.dispatch_gate = n; } }
            if let Some(v) = kernel.get("save_dir") { config.save_dir = Some(v.to_string()); }
        }

        config.sanitize();
        Ok(config)
    }

    pub fn save_to_path(&self, path: &Path) -> Result<(), String> {
        let mut ini = if path.exists() {
            Ini::load_from_file(path).unwrap_or_else(|_| Ini::new())
        } else {
            Ini::new()
        };

        ini.with_section(Some("Graphics"))
            .set("aspect", &self.aspect)
            .set("res_scale", self.res_scale.to_string())
            .set("window_scale", self.window_scale.to_string())
            .set("fullscreen", self.fullscreen.to_string())
            .set("anisotropy", self.anisotropy.to_string())
            .set("cas", self.cas.to_string())
            .set("gpu_vsh", self.gpu_vsh.to_string())
            .set("shader_cache", self.shader_cache.to_string())
            .set("visibility_uav", self.visibility_uav.to_string())
            .set("pipelined_query", self.pipelined_query.to_string())
            .set("pb_kick_ack", self.pb_kick_ack.to_string())
            .set("vsync", self.vsync.to_string())
            .set("fps_limit", self.fps_limit.to_string())
            .set("show_fps", self.show_fps.to_string());

        ini.with_section(Some("Controls"))
            .set("mouse_input", self.mouse_input.to_string())
            .set("mouse_sens", format!("{:.2}", self.mouse_sens))
            .set("mouse_full", self.mouse_full.to_string())
            .set("mouse_sens_x", format!("{:.2}", self.mouse_sens_x))
            .set("mouse_sens_y", format!("{:.2}", self.mouse_sens_y))
            .set("mouse_smoothing", self.mouse_smoothing.to_string())
            .set("mouse_acc", format!("{:.2}", self.mouse_acc))
            .set("mouse_invert_y", self.mouse_invert_y.to_string())
            .set("deadzone", format!("{:.2}", self.deadzone));

        ini.with_section(Some("Kernel"))
            .set("dispatch_gate", self.dispatch_gate.to_string());

        if let Some(ref dir) = self.save_dir {
            ini.with_section(Some("Kernel")).set("save_dir", dir);
        }

        ini.write_to_file(path).map_err(|e| e.to_string())?;
        Ok(())
    }

    pub fn to_env_map(&self) -> HashMap<String, String> {
        let mut map = HashMap::new();
        map.insert("RECOMP_ASPECT".to_string(), self.aspect.clone());
        map.insert("RECOMP_RES_SCALE".to_string(), self.res_scale.to_string());
        map.insert("RECOMP_WINDOW_SCALE".to_string(), self.window_scale.to_string());
        map.insert("RECOMP_FULLSCREEN".to_string(), self.fullscreen.to_string());
        map.insert("RECOMP_ANISOTROPY".to_string(), self.anisotropy.to_string());
        map.insert("RECOMP_CAS".to_string(), self.cas.to_string());
        map.insert("RECOMP_GPU_VSH".to_string(), self.gpu_vsh.to_string());
        map.insert("RECOMP_SHADER_CACHE".to_string(), self.shader_cache.to_string());
        map.insert("RECOMP_VISIBILITY_UAV".to_string(), self.visibility_uav.to_string());
        map.insert("RECOMP_PIPELINED_QUERY".to_string(), self.pipelined_query.to_string());
        map.insert("RECOMP_PB_KICK_ACK".to_string(), self.pb_kick_ack.to_string());
        map.insert("RECOMP_PRESENT_VSYNC".to_string(), self.vsync.to_string());
        map.insert("RECOMP_FPS_LIMIT".to_string(), self.fps_limit.to_string());
        map.insert("RECOMP_SHOW_FPS".to_string(), self.show_fps.to_string());

        map.insert("RECOMP_MKB".to_string(), self.mouse_input.to_string());
        map.insert("RECOMP_MKB_SENS".to_string(), format!("{:.2}", self.mouse_sens));
        map.insert("RECOMP_MKB_FULL".to_string(), self.mouse_full.to_string());
        map.insert("RECOMP_MKB_SENS_X".to_string(), format!("{:.2}", self.mouse_sens_x));
        map.insert("RECOMP_MKB_SENS_Y".to_string(), format!("{:.2}", self.mouse_sens_y));
        map.insert("RECOMP_MKB_SMOOTH".to_string(), self.mouse_smoothing.to_string());
        map.insert("RECOMP_MKB_ACC".to_string(), format!("{:.2}", self.mouse_acc));
        map.insert("RECOMP_MKB_INVERT_Y".to_string(), self.mouse_invert_y.to_string());
        map.insert("RECOMP_MKB_DZ".to_string(), format!("{:.2}", self.deadzone));
        map.insert("RECOMP_MKB_DEADZONE".to_string(), format!("{:.2}", self.deadzone));

        map.insert("RECOMP_DISPATCH_GATE".to_string(), self.dispatch_gate.to_string());
        if let Some(ref dir) = self.save_dir {
            map.insert("RECOMP_SAVE_DIR".to_string(), dir.clone());
        }

        map
    }
}

pub fn locate_ini_path() -> PathBuf {
    let candidates = [
        PathBuf::from("bf2_recomp/game_files/bf2_recomp.ini"),
        PathBuf::from("../bf2_recomp/game_files/bf2_recomp.ini"),
        PathBuf::from("bf2_recomp.ini"),
        PathBuf::from("../bf2_recomp.ini"),
        PathBuf::from("../../bf2_recomp.ini"),
        PathBuf::from("game_files/bf2_recomp.ini"),
        PathBuf::from("../game_files/bf2_recomp.ini"),
    ];

    for candidate in &candidates {
        if candidate.exists() {
            return candidate.clone();
        }
    }

    PathBuf::from("bf2_recomp.ini")
}

#[tauri::command]
pub fn get_game_config() -> Result<RecompConfig, String> {
    let path = locate_ini_path();
    RecompConfig::load_from_path(&path)
}

#[tauri::command]
pub fn save_game_config(config: RecompConfig) -> Result<(), String> {
    let path = locate_ini_path();
    config.save_to_path(&path)
}
