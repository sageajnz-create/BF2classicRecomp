use std::fs::{self, File};
use std::io::Write;
use swbf2_launcher_lib::archive_extractor::{extract_mod_archive, is_safe_zip_entry};
use zip::write::SimpleFileOptions;
use zip::ZipWriter;

#[test]
fn test_zip_slip_detection() {
    assert!(!is_safe_zip_entry("../../malicious.exe"));
    assert!(!is_safe_zip_entry("..\\..\\malicious.exe"));
    assert!(!is_safe_zip_entry("/etc/passwd"));
    assert!(!is_safe_zip_entry("C:\\Windows\\system32\\calc.exe"));
    assert!(is_safe_zip_entry("BFR/addme.script"));
    assert!(is_safe_zip_entry("BFR/Data/_LVL_XBOX/core.lvl"));
}

#[test]
fn test_extract_valid_mod_archive() {
    let temp_dir = std::env::temp_dir().join("swbf2_launcher_test_archive");
    let _ = fs::remove_dir_all(&temp_dir);
    fs::create_dir_all(&temp_dir).unwrap();

    let zip_path = temp_dir.join("test_mod.zip");
    let target_dir = temp_dir.join("addon");
    fs::create_dir_all(&target_dir).unwrap();

    // Create synthetic zip with BFR/addme.script and BFR/Data/_LVL_XBOX/core.lvl
    let file = File::create(&zip_path).unwrap();
    let mut zip = ZipWriter::new(file);

    let options = SimpleFileOptions::default();
    zip.start_file("BFR/addme.script", options).unwrap();
    zip.write_all(b"AddDownloadableContent(\"BFR\", \"Battlefront Remastered\", 0)").unwrap();

    zip.start_file("BFR/Data/_LVL_XBOX/core.lvl", options).unwrap();
    zip.write_all(b"LVL_DATA").unwrap();

    zip.finish().unwrap();

    // Extract
    let mod_id = extract_mod_archive(&zip_path, &target_dir).expect("Extraction should succeed");
    assert_eq!(mod_id, "BFR");

    assert!(target_dir.join("BFR").join("addme.script").exists());
    assert!(target_dir.join("BFR").join("Data").join("_LVL_XBOX").join("core.lvl").exists());

    let _ = fs::remove_dir_all(&temp_dir);
}

#[test]
fn test_reject_zip_slip_archive() {
    let temp_dir = std::env::temp_dir().join("swbf2_launcher_test_archive_slip");
    let _ = fs::remove_dir_all(&temp_dir);
    fs::create_dir_all(&temp_dir).unwrap();

    let zip_path = temp_dir.join("malicious.zip");
    let target_dir = temp_dir.join("addon");
    fs::create_dir_all(&target_dir).unwrap();

    // Create zip with malicious path
    let file = File::create(&zip_path).unwrap();
    let mut zip = ZipWriter::new(file);
    let options = SimpleFileOptions::default();
    zip.start_file("../../evil.exe", options).unwrap();
    zip.write_all(b"EVIL_DATA").unwrap();
    zip.finish().unwrap();

    let result = extract_mod_archive(&zip_path, &target_dir);
    assert!(result.is_err());
    assert!(result.unwrap_err().contains("Zip Slip"));

    let _ = fs::remove_dir_all(&temp_dir);
}
