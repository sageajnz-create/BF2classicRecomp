use swbf2_launcher_lib::config_manager::RecompConfig;
use swbf2_launcher_lib::process_runner::{build_launch_command, LaunchOptions};

#[test]
fn test_build_launch_command_args() {
    let opts = LaunchOptions {
        connect_ip: Some("192.168.1.42".to_string()),
        connect_port: Some(3074),
        active_mod: Some("BFR".to_string()),
        fullscreen_override: Some(true),
    };

    let cfg = RecompConfig::default();
    let (_exe_path, args, envs) = build_launch_command(&opts, &cfg).expect("Should build command");

    assert!(args.contains(&"-connect".to_string()));
    assert!(args.contains(&"192.168.1.42:3074".to_string()));
    assert!(args.contains(&"-fullscreen".to_string()));
    assert!(args.contains(&"-mod".to_string()));
    assert!(args.contains(&"BFR".to_string()));

    // Check envs populated
    assert_eq!(envs.get("RECOMP_MKB").unwrap(), "1");
    assert_eq!(envs.get("RECOMP_RES_SCALE").unwrap(), "2");
}

#[test]
fn test_build_launch_command_windowed_override() {
    let opts = LaunchOptions {
        connect_ip: None,
        connect_port: None,
        active_mod: None,
        fullscreen_override: Some(false),
    };

    let cfg = RecompConfig::default();
    let (_exe, args, _envs) = build_launch_command(&opts, &cfg).expect("Should build command");

    assert!(args.contains(&"-windowed".to_string()));
    assert!(!args.contains(&"-fullscreen".to_string()));
}
