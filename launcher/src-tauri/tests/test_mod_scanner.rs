use std::fs;
use swbf2_launcher_lib::mod_scanner::{scan_addons, toggle_mod};

#[test]
fn test_scan_and_toggle_mods() {
    let temp_dir = std::env::temp_dir().join("swbf2_launcher_test_mod_scanner");
    let _ = fs::remove_dir_all(&temp_dir);
    let addon_dir = temp_dir.join("addon");
    let disabled_dir = temp_dir.join("addon_disabled");
    fs::create_dir_all(&addon_dir).unwrap();
    fs::create_dir_all(&disabled_dir).unwrap();

    // 1. Create active Xbox Native mod: BFR
    let bfr_dir = addon_dir.join("BFR");
    let bfr_lvl_dir = bfr_dir.join("Data").join("_LVL_XBOX");
    fs::create_dir_all(&bfr_lvl_dir).unwrap();
    fs::write(bfr_lvl_dir.join("core.lvl"), b"LVL_XBOX_DUMMY_DATA").unwrap();
    let addme_script = r#"
AddDownloadableContent("BFR", "Battlefront Remastered", 0)
"#;
    fs::write(bfr_dir.join("addme.script"), addme_script).unwrap();

    // 2. Create disabled PC mod: KOTOR (with synthetic compiled Lua bytecode header)
    let kotor_dir = disabled_dir.join("KOTOR");
    let kotor_lvl_dir = kotor_dir.join("Data").join("_LVL_PC");
    fs::create_dir_all(&kotor_lvl_dir).unwrap();
    fs::write(kotor_lvl_dir.join("core.lvl"), b"LVL_PC_DUMMY_DATA").unwrap();
    // Synthetic Lua 5.0 bytecode chunk
    let mut lua_bytecode = vec![0x1b, b'L', b'u', b'a', 0x50];
    lua_bytecode.extend_from_slice(b"\x00\x00\x00\x0e\x00\x00\x00Knights of the Old Republic\x00");
    fs::write(kotor_dir.join("addme.script"), lua_bytecode).unwrap();

    // Scan mods
    let mods = scan_addons(&temp_dir);
    assert_eq!(mods.len(), 2);

    let bfr_mod = mods.iter().find(|m| m.id == "BFR").expect("BFR not found");
    assert!(bfr_mod.is_enabled);
    assert!(bfr_mod.is_xbox_native);
    assert!(bfr_mod.title.contains("Battlefront Remastered") || bfr_mod.title == "BFR");

    let kotor_mod = mods.iter().find(|m| m.id == "KOTOR").expect("KOTOR not found");
    assert!(!kotor_mod.is_enabled);
    assert!(!kotor_mod.is_xbox_native);
    assert!(kotor_mod.title.contains("Knights of the Old Republic") || kotor_mod.title == "KOTOR");

    // Toggle BFR disabled
    toggle_mod(&temp_dir, "BFR", false).expect("Toggle off should succeed");
    assert!(!addon_dir.join("BFR").exists());
    assert!(disabled_dir.join("BFR").exists());

    // Toggle KOTOR enabled
    toggle_mod(&temp_dir, "KOTOR", true).expect("Toggle on should succeed");
    assert!(addon_dir.join("KOTOR").exists());
    assert!(!disabled_dir.join("KOTOR").exists());

    let _ = fs::remove_dir_all(&temp_dir);
}
