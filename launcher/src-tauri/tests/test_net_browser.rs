use swbf2_launcher_lib::net_browser::{
    build_lan_probe_packet, parse_lan_response_packet,
};

#[test]
fn test_lan_probe_packet_structure() {
    let packet = build_lan_probe_packet();
    assert_eq!(&packet[0..4], b"SWBF");
    assert_eq!(&packet[4..8], &[0x4C, 0x53, 0x00, 0x02]);
    assert_eq!(packet[8], 0x01);
}

#[test]
fn test_parse_valid_lan_response() {
    let mut response = Vec::new();
    response.extend_from_slice(b"SWBF");
    response.push(0x02); // Pong opcode
    response.extend_from_slice(b"Coruscant 24/7\0");
    response.extend_from_slice(b"cor1g_con\0");
    response.extend_from_slice(b"Conquest\0");
    response.push(16); // players
    response.push(64); // max_players
    response.push(0);  // no password

    let info = parse_lan_response_packet(&response, "192.168.1.10", 3074, 15)
        .expect("Should parse LAN beacon");

    assert_eq!(info.name, "Coruscant 24/7");
    assert_eq!(info.ip, "192.168.1.10");
    assert_eq!(info.port, 3074);
    assert_eq!(info.map, "cor1g_con");
    assert_eq!(info.mode, "Conquest");
    assert_eq!(info.players, 16);
    assert_eq!(info.max_players, 64);
    assert_eq!(info.ping_ms, 15);
    assert!(!info.requires_password);
    assert!(info.is_lan);
}

#[test]
fn test_reject_corrupt_lan_packet() {
    let invalid = b"INVALID_PACKET_HEADER";
    let res = parse_lan_response_packet(invalid, "192.168.1.10", 3074, 10);
    assert!(res.is_none());
}
