"""Run the overlay smoke check against the existing Windows Release build."""

import configparser
import ctypes
from ctypes import wintypes
from contextlib import contextmanager
import os
from pathlib import Path
import re
import struct
import subprocess
import sys
import tempfile
import time


ROOT = Path(__file__).resolve().parents[1]
BUILD = ROOT / "bf2_recomp" / "build" / "Release" / "swbf2_recomp.exe"
ASSETS = ROOT / "bf2_recomp" / "game_files"
VK_RETURN, VK_TAB, VK_HOME, VK_UP, VK_RIGHT, VK_F1 = 0x0D, 0x09, 0x24, 0x26, 0x27, 0x70
WM_CLOSE, WM_KEYDOWN, WM_KEYUP = 0x0010, 0x0100, 0x0101
START = 0x0010
INPUT = re.compile(r"\[INPUT\] kbd_env=1 window_has_RETURN=(\d+) "
                   r"InputGetState=0 buttons=0x([0-9A-Fa-f]+)")
CAPTURE = re.compile(r"\[D3D11-WORLD\] screenshot: .*\b(present-\d+\.bmp) \(")


class SmokeFailure(Exception):
    pass


def require(condition, message):
    if not condition:
        raise SmokeFailure(message)


class Game:
    def __init__(self, process, log, shots):
        self.process = process
        self.log = log
        self.shots = shots
        self.hwnd = None
        self.user32 = ctypes.WinDLL("user32", use_last_error=True)
        self.user32.FindWindowExW.argtypes = (wintypes.HWND, wintypes.HWND,
                                              wintypes.LPCWSTR, wintypes.LPCWSTR)
        self.user32.FindWindowExW.restype = wintypes.HWND
        self.user32.GetWindowThreadProcessId.argtypes = (wintypes.HWND, ctypes.POINTER(wintypes.DWORD))
        self.user32.SendMessageTimeoutW.argtypes = (
            wintypes.HWND, wintypes.UINT, wintypes.WPARAM, wintypes.LPARAM,
            wintypes.UINT, wintypes.UINT, ctypes.POINTER(ctypes.c_size_t),
        )
        self.user32.SendMessageTimeoutW.restype = wintypes.LPARAM

    def find_window(self):
        hwnd = None
        # The renderer can update the window title after startup.
        while hwnd := self.user32.FindWindowExW(None, hwnd, "XboxRecompFramebuffer", None):
            owner = wintypes.DWORD()
            self.user32.GetWindowThreadProcessId(hwnd, ctypes.byref(owner))
            if owner.value == self.process.pid:
                return hwnd
        return None

    def wait_for(self, description, probe, timeout=35):
        deadline = time.monotonic() + timeout
        while time.monotonic() < deadline:
            status = self.process.poll()
            require(status is None, f"Game exited ({status}) while waiting for {description}")
            value = probe()
            if value is not None:
                return value
            time.sleep(0.05)
        raise SmokeFailure(f"Timed out waiting for {description}")

    def send(self, message, vk=0, flags=0):
        # Send only to the exact process/window started by this run. No focus
        # changes or desktop-wide synthetic keyboard events.
        require(self.hwnd and self.hwnd == self.find_window(), "Lost the smoke game window")
        result = ctypes.c_size_t()
        sent = self.user32.SendMessageTimeoutW(
            self.hwnd, message, vk, flags, 0x0002, 2000, ctypes.byref(result),
        )
        require(sent, f"Game window did not respond to message 0x{message:04X}")

    @contextmanager
    def hold(self, vk):
        self.send(WM_KEYDOWN, vk, 1)
        try:
            yield
        finally:
            self.send(WM_KEYUP, vk, 0xC0000001)

    def tap(self, *keys):
        for vk in keys:
            with self.hold(vk):
                pass

    def wait_for_log(self, pattern, description, timeout=35):
        def read_match():
            while True:
                position = self.log.tell()
                line = self.log.readline()
                if not line:
                    return None
                # A game write can be observed before its newline arrives.
                if not line.endswith("\n"):
                    self.log.seek(position)
                    return None
                if match := pattern.search(line):
                    return match

        return self.wait_for(description, read_match, timeout)

    def frame(self, description, tab=None, invert_on=False):
        match = self.wait_for_log(CAPTURE, description)
        path = self.shots / match[1]
        visible_tab, green_invert_value = inspect_frame(path)
        require(visible_tab == tab, f"{description}: expected tab {tab}, found {visible_tab} in {path.name}")
        if invert_on:
            require(green_invert_value, f"{description}: expected Invert Vertical Aim Axis ON in {path.name}")
        print(f"PASS {description} ({self.shots.name}/{path.name})", flush=True)

    def start_probe(self, muted):
        # Start is a guest gameplay/pause control as well as a menu control.
        # Probe on Telemetry while open, where Enter cannot change a setting.
        self.log.seek(0, os.SEEK_END)
        with self.hold(VK_RETURN):
            # Skip a sample that may have been taken just before key-down.
            self.wait_for_log(INPUT, "first controller poll with Enter held", timeout=8)
            match = self.wait_for_log(INPUT, "second controller poll with Enter held", timeout=8)
        received, buttons = int(match[1]), int(match[2], 16)
        expected = (0, False) if muted else (1, True)
        require((received, bool(buttons & START)) == expected,
                f"Enter {'while open' if muted else 'while closed'} produced "
                f"window_has_RETURN={received}, buttons=0x{buttons:04X}")
        print(f"PASS Enter {'muted while open' if muted else 'reached guest Start while closed'} "
              f"(window_has_RETURN={received}, buttons=0x{buttons:04X})", flush=True)


def inspect_frame(path):
    # The existing D3D11 capture emits a bottom-up, uncompressed BGRX BMP.
    data = path.read_bytes()
    require(len(data) >= 54 and data[:2] == b"BM", f"Invalid BMP: {path.name}")
    offset, = struct.unpack_from("<I", data, 10)
    width, height, planes, bpp, compression = struct.unpack_from("<iiHHI", data, 18)
    require(width >= 680 and height >= 440 and (planes, bpp, compression) == (1, 32, 0)
            and 54 <= offset <= len(data) - width * height * 4,
            f"Unexpected capture layout in {path.name}: {width}x{height}, {bpp} bpp")

    def pixel(x, y):
        i = offset + ((height - 1 - y) * width + x) * 4
        return data[i:i + 3]

    # The overlay's packed vertex colors arrive red/blue swapped in the BMP.
    # Sample the opaque modal border and tab fills, away from text.
    left, top = (width - 680) // 2, (height - 440) // 2
    cyan = bytes.fromhex("38 bd f8")
    if not all(pixel(left + x, top) == cyan for x in (100, 340, 580)):
        return None, False
    active = [name for i, name in enumerate(("Display", "Controls", "Telemetry"))
              if pixel(left + 150 + 150 * i, top + 43) == cyan]
    require(len(active) == 1, f"Expected exactly one active overlay tab in {path.name}, found {active}")

    # In Controls, the ON glyphs in the Invert Vertical Aim Axis row are green.
    green = bytes.fromhex("10 b9 81")
    invert_on = active == ["Controls"] and any(
        pixel(left + x, top + y) == green
        for y in range(268, 280) for x in range(320, 368)
    )
    return active[0], invert_on


@contextmanager
def launch(run_dir, name, seconds):
    shots = run_dir / name
    shots.mkdir()
    title = f"BF2 overlay smoke {run_dir.name} {name}"
    # Use reproducible child-only settings and clear inherited recomp overrides.
    env = {key: value for key, value in os.environ.items() if not key.upper().startswith("RECOMP_")}
    env.update(RECOMP_WINDOW_TITLE=title, RECOMP_SAVE_DIR=str(run_dir / "saves"),
               RECOMP_SCREENSHOT_DIR=str(shots), RECOMP_SCREENSHOT_SECONDS=seconds,
               RECOMP_INPUT_DIAG="1")
    log_path = run_dir / f"{name}.log"
    with log_path.open("wb") as output:
        process = subprocess.Popen([str(run_dir / BUILD.name)], cwd=run_dir, env=env,
                                   stdin=subprocess.DEVNULL, stdout=output, stderr=subprocess.STDOUT)
    with log_path.open(encoding="utf-8", errors="replace") as log:
        game = Game(process, log, shots)
        try:
            game.hwnd = game.wait_for("the framebuffer window", game.find_window)
            yield game
        finally:
            if process.poll() is None:
                try:
                    game.hwnd = game.find_window()
                    game.send(WM_CLOSE)
                    process.wait(timeout=5)
                except (SmokeFailure, subprocess.TimeoutExpired):
                    process.kill()
                    process.wait(timeout=5)
    require(process.returncode == 0, f"Game exited with {process.returncode} during {name}")


def smoke(run_dir):
    ini_path = run_dir / "bf2_recomp.ini"
    ini_path.write_text("[Graphics]\nwindow_scale=2\nres_scale=1\nfullscreen=0\n"
                        "fps_limit=60\nshow_fps=0\n[Controls]\nmouse_invert_y=0\n", encoding="ascii")
    (run_dir / "saves").mkdir()

    # The built-in screenshot timer starts on the first D3D11 present. Wait for
    # each completed capture before sending the next action. Gaps allow time
    # to deliver input without capturing every frame or requiring a capture SDK.
    with launch(run_dir, "first-launch", "0,5,10,15,20") as game:
        game.frame("overlay initially closed")
        game.tap(VK_F1)
        game.frame("F1 opens Display", "Display")
        game.tap(VK_F1)
        game.frame("F1 closes overlay")
        game.tap(VK_HOME, VK_TAB, VK_UP, VK_UP, VK_RIGHT)
        game.frame("Home opens overlay and keyboard turns Invert Y on", "Controls", invert_on=True)
        game.tap(VK_HOME)
        game.frame("Home closes overlay")

        saved = configparser.ConfigParser()
        saved.read(ini_path, encoding="ascii")
        require(saved.get("Controls", "mouse_invert_y", fallback=None) == "1",
                "Closing the overlay did not persist mouse_invert_y=1")
        print("PASS closing the overlay saved mouse_invert_y=1", flush=True)

        game.wait_for_log(INPUT, "guest controller polling (title or menus)", timeout=90)
        game.start_probe(muted=False)
        game.tap(VK_F1, VK_TAB)  # Controls stays selected across close/open.
        game.start_probe(muted=True)
        game.tap(VK_F1)
        game.start_probe(muted=False)

    with launch(run_dir, "relaunch", "0,5") as game:
        game.frame("relaunch initially closed")
        game.tap(VK_HOME, VK_TAB)
        game.frame("relaunch loads Invert Y as ON", "Controls", invert_on=True)


def main():
    if sys.platform != "win32":
        print("This smoke check requires Windows and a D3D11 desktop session.", file=sys.stderr)
        return 1
    import _winapi

    try:
        require(BUILD.is_file(), f"Existing Release executable missing: {BUILD}")
        require((ASSETS / "default.xbe").is_file() and all(
            (ASSETS / name).is_dir() for name in ("Data", "media")
        ), f"Extracted default.xbe, Data and media are required in {ASSETS}")
        logs = ROOT / "logs" / "overlay-smoke"
        logs.mkdir(parents=True, exist_ok=True)
        run_dir = Path(tempfile.mkdtemp(prefix="run-", dir=logs))
        print(f"Smoke output: {run_dir}", flush=True)

        # The exe and cwd must share the isolated INI: startup prefers the
        # exe-side file, and the overlay reads/writes its working-directory INI.
        remove_links = []
        try:
            for source in (BUILD, ASSETS / "default.xbe"):
                link = run_dir / source.name
                os.link(source, link)
                remove_links.append(link.unlink)
            for name in ("Data", "media"):
                junction = run_dir / name
                _winapi.CreateJunction(str(ASSETS / name), str(junction))
                remove_links.append(junction.rmdir)
            smoke(run_dir)
        finally:
            for remove in reversed(remove_links):
                remove()
    except (SmokeFailure, OSError, configparser.Error) as error:
        print(f"FAIL {error}", file=sys.stderr, flush=True)
        return 1

    print("PASS live overlay smoke. Manual combat acceptance is still required.", flush=True)
    return 0


if __name__ == "__main__":
    sys.exit(main())
