pub mod config_manager;
pub mod process_runner;
pub mod mod_scanner;
pub mod net_browser;
pub mod archive_extractor;

#[cfg_attr(mobile, tauri::mobile_entry_point)]
pub fn run() {
    tauri::Builder::default()
        .plugin(tauri_plugin_shell::init())
        .invoke_handler(tauri::generate_handler![
            config_manager::get_game_config,
            config_manager::save_game_config,
            process_runner::launch_game,
            process_runner::is_game_running,
            mod_scanner::list_mods,
            mod_scanner::toggle_mod_state,
            archive_extractor::install_mod_archive,
        ])
        .run(tauri::generate_context!())
        .expect("error while running tauri application");
}
