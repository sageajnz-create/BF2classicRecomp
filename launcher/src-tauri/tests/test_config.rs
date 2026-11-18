use std::fs;
use swbf2_launcher_lib::config_manager::RecompConfig;

#[test]
fn test_default_config() {
    let cfg = RecompConfig::default();
    assert_eq!(cfg.res_scale, 2);
    assert_eq!(cfg.aspect, "16:9");
    assert_eq!(cfg.fullscreen, 0);
    assert_eq!(cfg.cas, 1);
    assert_eq!(cfg.anisotropy, 16);
    assert_eq!(cfg.mouse_input, 1);
    assert!((cfg.deadzone - 0.18).abs() < 1e-4);
}

#[test]
fn test_load_and_save_roundtrip() {
    let temp_dir = std::env::temp_dir().join("swbf2_launcher_test_config");
    let _ = fs::create_dir_all(&temp_dir);
    let ini_path = temp_dir.join("bf2_recomp.ini");

    let initial_content = r#"; Test ini
[Graphics]
aspect=21:9
res_scale=3
window_scale=3
fullscreen=1
anisotropy=8
cas=0
gpu_vsh=1
shader_cache=1
visibility_uav=1
pipelined_query=0
pb_kick_ack=0
vsync=1
fps_limit=144
show_fps=0

[Controls]
mouse_input=1
mouse_sens=1.5
mouse_full=32
mouse_sens_x=1.2
mouse_sens_y=1.3
mouse_smoothing=1
mouse_acc=1.0
mouse_invert_y=1
deadzone=0.22

[Kernel]
dispatch_gate=1
"#;
    fs::write(&ini_path, initial_content).expect("Failed to write test ini");

    let loaded = RecompConfig::load_from_path(&ini_path).expect("Failed to load config");
    assert_eq!(loaded.aspect, "21:9");
    assert_eq!(loaded.res_scale, 3);
    assert_eq!(loaded.fullscreen, 1);
    assert_eq!(loaded.fps_limit, 144);
    assert_eq!(loaded.mouse_invert_y, 1);
    assert!((loaded.deadzone - 0.22).abs() < 1e-4);

    // Modify and save
    let mut modified = loaded.clone();
    modified.res_scale = 4;
    modified.aspect = "32:9".to_string();
    modified.save_to_path(&ini_path).expect("Failed to save config");

    let reloaded = RecompConfig::load_from_path(&ini_path).expect("Failed to reload config");
    assert_eq!(reloaded.res_scale, 4);
    assert_eq!(reloaded.aspect, "32:9");

    let _ = fs::remove_dir_all(&temp_dir);
}

#[test]
fn test_config_env_map() {
    let mut cfg = RecompConfig::default();
    cfg.res_scale = 3;
    cfg.aspect = "21:9".to_string();
    cfg.fullscreen = 1;
    cfg.mouse_sens = 2.0;

    let envs = cfg.to_env_map();
    assert_eq!(envs.get("RECOMP_RES_SCALE").unwrap(), "3");
    assert_eq!(envs.get("RECOMP_ASPECT").unwrap(), "21:9");
    assert_eq!(envs.get("RECOMP_FULLSCREEN").unwrap(), "1");
    assert_eq!(envs.get("RECOMP_MKB").unwrap(), "1");
}

#[test]
fn test_config_clamping() {
    let mut cfg = RecompConfig::default();
    cfg.res_scale = 99; // should clamp to 4
    cfg.deadzone = 5.0; // should clamp to 0.9
    cfg.sanitize();

    assert_eq!(cfg.res_scale, 4);
    assert!((cfg.deadzone - 0.9).abs() < 1e-4);
}
