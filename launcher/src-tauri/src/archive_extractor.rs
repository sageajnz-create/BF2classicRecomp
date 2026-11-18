use std::fs::{self, File};
use std::io;
use std::path::{Path, PathBuf};
use zip::ZipArchive;

use crate::mod_scanner::locate_game_dir;

pub fn is_safe_zip_entry(entry_name: &str) -> bool {
    let normalized = entry_name.replace('\\', "/");
    if normalized.starts_with('/') {
        return false;
    }
    if normalized.contains(':') {
        return false;
    }

    for part in normalized.split('/') {
        if part == ".." {
            return false;
        }
    }
    true
}

pub fn extract_mod_archive(zip_path: &Path, target_addon_dir: &Path) -> Result<String, String> {
    if !zip_path.exists() {
        return Err(format!("Archive not found at '{}'", zip_path.display()));
    }

    let file = File::open(zip_path).map_err(|e| format!("Failed to open archive: {}", e))?;
    let mut archive = ZipArchive::new(file).map_err(|e| format!("Invalid ZIP archive: {}", e))?;

    // Pre-flight check: scan all entry names for Zip Slip attempts
    for i in 0..archive.len() {
        let entry = archive.by_index(i).map_err(|e| e.to_string())?;
        let name = entry.name();
        if !is_safe_zip_entry(name) {
            return Err(format!("Zip Slip / unsafe path detected in archive: '{}'", name));
        }
    }

    // Determine mod_id from top-level directory or file stem
    let archive_stem = zip_path
        .file_stem()
        .unwrap_or_default()
        .to_string_lossy()
        .to_string();

    let mut detected_top_dir = None;
    for i in 0..archive.len() {
        let entry = archive.by_index(i).map_err(|e| e.to_string())?;
        let name = entry.name().replace('\\', "/");
        if let Some(first_segment) = name.split('/').next() {
            if !first_segment.is_empty() && name.contains('/') {
                if detected_top_dir.is_none() {
                    detected_top_dir = Some(first_segment.to_string());
                } else if detected_top_dir.as_ref() != Some(&first_segment.to_string()) {
                    // Multiple top-level folders, fall back to archive stem
                    detected_top_dir = Some(archive_stem.clone());
                    break;
                }
            }
        }
    }

    let mod_id = detected_top_dir.unwrap_or(archive_stem);
    fs::create_dir_all(target_addon_dir).map_err(|e| e.to_string())?;

    for i in 0..archive.len() {
        let mut entry = archive.by_index(i).map_err(|e| e.to_string())?;
        let raw_name = entry.name().replace('\\', "/");
        let path = PathBuf::from(&raw_name);

        let outpath = target_addon_dir.join(&path);

        if entry.is_dir() {
            fs::create_dir_all(&outpath).map_err(|e| e.to_string())?;
        } else {
            if let Some(p) = outpath.parent() {
                if !p.exists() {
                    fs::create_dir_all(p).map_err(|e| e.to_string())?;
                }
            }
            let mut outfile = File::create(&outpath).map_err(|e| e.to_string())?;
            io::copy(&mut entry, &mut outfile).map_err(|e| e.to_string())?;
        }
    }

    Ok(mod_id)
}

#[tauri::command]
pub fn install_mod_archive(archive_path: String) -> Result<String, String> {
    let zip_path = PathBuf::from(archive_path);
    let game_dir = locate_game_dir();
    let addon_dir = game_dir.join("addon");
    extract_mod_archive(&zip_path, &addon_dir)
}
