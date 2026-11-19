/*
 * mkb_input.c -- mouse + keyboard as a virtual Xbox gamepad.
 *
 * A hidden window on its own thread registers for Raw Input with
 * RIDEV_INPUTSINK, so mouse deltas and key presses arrive whether or
 * not the game's own window is the one with focus, and no matter which
 * window the runtime happens to present through (the GDI debug window,
 * the FMV window, a D3D11 swap chain -- the input layer should not
 * have to care).
 *
 * The poll side drains the accumulated deltas and turns them into a
 * stick deflection that is proportional to the movement since the last
 * poll: the title integrates deflection over its own frame, so the
 * total rotation comes out proportional to total mouse travel at any
 * frame rate, which is the property mouse aim has to keep.
 *
 * Small movements get a floor of RECOMP_MKB_DZ of full throw, because
 * every console title applies its own dead zone to the stick, and a
 * mouse correction smaller than it would be silently eaten.
 */

/* Raw input needs a modern _WIN32_WINNT; the toolkit's platform header
 * includes windows.h first, so these have to land before anything else. */
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif
#ifndef WINVER
#define WINVER 0x0601
#endif
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "mkb_input.h"

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

extern int overlay_is_open(void);

/* ---- configuration ----------------------------------------------------- */

typedef struct {
    double sens;        /* multiplier on the aim deflection          */
    double sens_x;      /* horizontal sensitivity multiplier         */
    double sens_y;      /* vertical sensitivity multiplier           */
    double dz;          /* assumed game deadzone, 0..1               */
    double acc;         /* aim acceleration exponent, 1 = linear     */
    long   full;        /* mouse counts for full throw, per poll     */
    int    smooth;      /* mouse smoothing filter: 0 = raw, 1 = smooth */
    int    invert_y;    /* invert the vertical aim axis              */
    int    swap_sticks; /* mouse aims with the left stick instead    */
} MkbConfig;

static MkbConfig s_cfg = { 1.0, 1.0, 1.0, 0.18, 1.0, 48, 0, 0, 0 };

void mkb_apply_live_config(double sens, double sens_x, double sens_y, double dz, int smooth, int invert_y, long full)
{
    if (sens > 0.0 && sens < 100.0) s_cfg.sens = sens;
    if (sens_x > 0.0 && sens_x < 100.0) s_cfg.sens_x = sens_x;
    if (sens_y > 0.0 && sens_y < 100.0) s_cfg.sens_y = sens_y;
    if (dz >= 0.0 && dz < 0.9) s_cfg.dz = dz;
    s_cfg.smooth = smooth != 0;
    s_cfg.invert_y = invert_y != 0;
    if (full > 0 && full < 10000) s_cfg.full = full;
}

/* One "key=value" line; returns 1 when the key was recognised. */
static int mkb_apply_kv(const char *key, const char *val)
{
    double d;
    long   l;

    if (!strcmp(key, "sens")) {
        d = strtod(val, NULL); if (d > 0.0 && d < 100.0) s_cfg.sens = d;
    } else if (!strcmp(key, "sens_x")) {
        d = strtod(val, NULL); if (d > 0.0 && d < 100.0) s_cfg.sens_x = d;
    } else if (!strcmp(key, "sens_y")) {
        d = strtod(val, NULL); if (d > 0.0 && d < 100.0) s_cfg.sens_y = d;
    } else if (!strcmp(key, "smooth") || !strcmp(key, "mouse_smoothing")) {
        s_cfg.smooth = atoi(val) != 0;
    } else if (!strcmp(key, "dz") || !strcmp(key, "deadzone")) {
        d = strtod(val, NULL); if (d >= 0.0 && d < 0.9) s_cfg.dz = d;
    } else if (!strcmp(key, "acc")) {
        d = strtod(val, NULL); if (d > 0.0 && d < 10.0) s_cfg.acc = d;
    } else if (!strcmp(key, "full") || !strcmp(key, "mouse_full")) {
        l = strtol(val, NULL, 0); if (l > 0 && l < 10000) s_cfg.full = l;
    } else if (!strcmp(key, "invert_y") || !strcmp(key, "mouse_invert_y")) {
        s_cfg.invert_y = atoi(val) != 0;
    } else if (!strcmp(key, "swap_sticks")) {
        s_cfg.swap_sticks = atoi(val) != 0;
    } else {
        return 0;
    }
    return 1;
}

static void mkb_load_config(void)
{
    static const char *kv[] = {
        "RECOMP_MKB_SENS",      "sens",
        "RECOMP_MKB_SENS_X",    "sens_x",
        "RECOMP_MKB_SENS_Y",    "sens_y",
        "RECOMP_MKB_SMOOTH",    "smooth",
        "RECOMP_MKB_DZ",        "dz",
        "RECOMP_MKB_DEADZONE",  "dz",
        "RECOMP_MKB_ACC",       "acc",
        "RECOMP_MKB_FULL",      "full",
        "RECOMP_MKB_INVERT_Y",  "invert_y",
        "RECOMP_MKB_SWAP_STICKS", "swap_sticks",
        NULL
    };
    char path[MAX_PATH];
    const char *ini;
    DWORD n;
    FILE *f;
    int i;

    for (i = 0; kv[i]; i += 2) {
        const char *v = getenv(kv[i]);
        if (v && *v)
            mkb_apply_kv(kv[i + 1], v);
    }

    ini = getenv("RECOMP_MKB_INI");
    if (ini && *ini) {
        snprintf(path, sizeof path, "%s", ini);
    } else {
        n = GetModuleFileNameA(NULL, path, sizeof path - 12);
        if (!n || n >= sizeof path - 12)
            return;
        snprintf(path + n, 12, "\\..\\mkb.ini");   /* beside the .exe */
    }
    f = fopen(path, "r");
    if (!f)
        return;
    {
        char line[128];
        while (fgets(line, sizeof line, f)) {
            char *eq = strchr(line, '=');
            char *k, *v;
            if (!eq) continue;
            *eq = 0;
            k = line; v = eq + 1;
            while (*k == ' ' || *k == '\t') k++;
            while (*v == ' ' || *v == '\t') v++;
            k[strcspn(k, " \t\r\n")] = 0;
            v[strcspn(v, " \t\r\n")] = 0;
            if (*k && *v)
                mkb_apply_kv(k, v);
        }
    }
    fclose(f);
}

/* ---- raw input thread -------------------------------------------------- */

/* Accumulators, written by the input thread and drained by the poll.
 * InterlockedExchange is the whole protocol: the input thread adds
 * with InterlockedAdd, the poll takes everything with Exchange(0). */
static volatile LONG s_dx, s_dy;
static volatile LONG s_wheel;        /* wheel steps since last poll   */
static volatile LONG s_mouse_btn;    /* 1 L, 2 R, 4 M, 8 X1, 16 X2    */
static volatile unsigned char s_vk_down[256];

static volatile LONG s_active = 1;   /* F9 toggles this               */
static volatile LONG s_thread_up;

/* F9 is read on the input thread, so the toggle works even while the
 * game is stalled on the poll side. */
#define MKB_TOGGLE_VK  VK_F9

static void mkb_handle_raw(HRAWINPUT h)
{
    BYTE buf[sizeof(RAWINPUT) + 64];
    UINT size = sizeof buf;
    RAWINPUT *ri = (RAWINPUT *)buf;

    if (GetRawInputData(h, RID_INPUT, buf, &size, sizeof(RAWINPUTHEADER))
            == (UINT)-1)
        return;

    if (ri->header.dwType == RIM_TYPEMOUSE) {
        const RAWMOUSE *m = &ri->data.mouse;

        if (!(m->usFlags & MOUSE_MOVE_ABSOLUTE)) {
            if (m->lLastX) InterlockedAdd(&s_dx, m->lLastX);
            if (m->lLastY) InterlockedAdd(&s_dy, m->lLastY);
        }
        if (m->usButtonFlags & RI_MOUSE_LEFT_BUTTON_DOWN)
            InterlockedOr(&s_mouse_btn, 1);
        if (m->usButtonFlags & RI_MOUSE_LEFT_BUTTON_UP)
            InterlockedAnd(&s_mouse_btn, ~1);
        if (m->usButtonFlags & RI_MOUSE_RIGHT_BUTTON_DOWN)
            InterlockedOr(&s_mouse_btn, 2);
        if (m->usButtonFlags & RI_MOUSE_RIGHT_BUTTON_UP)
            InterlockedAnd(&s_mouse_btn, ~2);
        if (m->usButtonFlags & RI_MOUSE_MIDDLE_BUTTON_DOWN)
            InterlockedOr(&s_mouse_btn, 4);
        if (m->usButtonFlags & RI_MOUSE_MIDDLE_BUTTON_UP)
            InterlockedAnd(&s_mouse_btn, ~4);
        if (m->usButtonFlags & RI_MOUSE_BUTTON_4_DOWN)
            InterlockedOr(&s_mouse_btn, 8);
        if (m->usButtonFlags & RI_MOUSE_BUTTON_4_UP)
            InterlockedAnd(&s_mouse_btn, ~8);
        if (m->usButtonFlags & RI_MOUSE_BUTTON_5_DOWN)
            InterlockedOr(&s_mouse_btn, 16);
        if (m->usButtonFlags & RI_MOUSE_BUTTON_5_UP)
            InterlockedAnd(&s_mouse_btn, ~16);
        if (m->usButtonFlags & RI_MOUSE_WHEEL) {
            SHORT d = (SHORT)m->usButtonData;
            InterlockedAdd(&s_wheel, d / WHEEL_DELTA);
        }
    } else if (ri->header.dwType == RIM_TYPEKEYBOARD) {
        const RAWKEYBOARD *k = &ri->data.keyboard;
        UINT vk = k->VKey;

        if (vk == MKB_TOGGLE_VK) {
            if (k->Message == WM_KEYDOWN && !s_vk_down[vk & 0xFF]) {
                LONG now = !s_active;
                InterlockedExchange(&s_active, now);
                fprintf(stderr, "  [MKB] %s\n", now ? "captured"
                                                    : "released (F9)");
                fflush(stderr);
            }
        }
        if (vk && vk < 256) {
            if (k->Message == WM_KEYDOWN || k->Message == WM_SYSKEYDOWN)
                s_vk_down[vk] = 1;
            else
                s_vk_down[vk] = 0;
        }
    }
}

static LRESULT CALLBACK mkb_wndproc(HWND h, UINT m, WPARAM w, LPARAM l)
{
    if (m == WM_INPUT) {
        mkb_handle_raw((HRAWINPUT)l);
        return 0;
    }
    if (m == WM_CLOSE || m == WM_DESTROY)
        return 0;
    return DefWindowProcA(h, m, w, l);
}

static DWORD WINAPI mkb_thread(LPVOID unused)
{
    WNDCLASSA wc;
    HWND hwnd;
    RAWINPUTDEVICE rid[2];
    MSG msg;

    (void)unused;
    memset(&wc, 0, sizeof wc);
    wc.lpfnWndProc   = mkb_wndproc;
    wc.hInstance     = GetModuleHandleA(NULL);
    wc.lpszClassName = "XboxRecompMKB";
    RegisterClassA(&wc);
    /* Not visible: it exists to own the WM_INPUT delivery, nothing else. */
    hwnd = CreateWindowExA(0, "XboxRecompMKB", "mkb", WS_OVERLAPPED,
                           0, 0, 0, 0, NULL, NULL,
                           GetModuleHandleA(NULL), NULL);
    if (!hwnd) {
        fprintf(stderr, "  [MKB] window creation failed (%lu)\n",
                (unsigned long)GetLastError());
        return 0;
    }

    memset(rid, 0, sizeof rid);
    rid[0].usUsagePage = 0x01;  rid[0].usUsage = 0x02;  /* mouse     */
    rid[1].usUsagePage = 0x01;  rid[1].usUsage = 0x06;  /* keyboard  */
    rid[0].dwFlags = RIDEV_INPUTSINK;   /* deliver without focus */
    rid[1].dwFlags = RIDEV_INPUTSINK;
    rid[0].hwndTarget = hwnd;
    rid[1].hwndTarget = hwnd;
    if (!RegisterRawInputDevices(rid, 2, sizeof(RAWINPUTDEVICE))) {
        fprintf(stderr, "  [MKB] RegisterRawInputDevices failed (%lu)\n",
                (unsigned long)GetLastError());
        return 0;
    }

    InterlockedExchange(&s_thread_up, 1);
    fprintf(stderr, "  [MKB] mouse+keyboard captured (F9 releases; "
            "sens=%.2f dz=%.2f full=%ld)\n",
            s_cfg.sens, s_cfg.dz, s_cfg.full);
    fflush(stderr);

    while (GetMessageA(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
    InterlockedExchange(&s_thread_up, 0);
    return 0;
}

/* ---- poll side --------------------------------------------------------- */

int mkb_enabled(void)
{
    static int on = -1;
    if (on < 0) {
        /* Opt-in, like RECOMP_KEYBOARD: a keyboard silently acting as
         * player 1 is surprising when a real pad is what you meant to use.
         * RECOMP_MKB=1 turns the layer on. */
        const char *v = getenv("RECOMP_MKB");
        on = v && *v && *v != '0';
        if (on) {
            mkb_load_config();
            if (InterlockedCompareExchange(&s_thread_up, 0, 0) == 0) {
                static LONG started = 0;
                if (InterlockedCompareExchange(&started, 1, 0) == 0)
                    CloseHandle(CreateThread(NULL, 0, mkb_thread,
                                             NULL, 0, NULL));
            }
        }
    }
    return on;
}

/* The recompiled game's process is the foreground one. Raw input with
 * INPUTSINK keeps arriving while the user is in another app, and the
 * mouse must go on behaving normally there. */
static int game_is_foreground(void)
{
    DWORD pid = 0;
    HWND fg = GetForegroundWindow();
    if (!fg)
        return 0;
    GetWindowThreadProcessId(fg, &pid);
    return pid == GetCurrentProcessId();
}

/* Hide and confine the pointer while captured. Aiming with raw deltas
 * does not move the pointer by itself, but Windows still moves it from
 * the same physical movement, so it would wander across the screen and
 * end up clicking other apps' title bars. */
static int s_cursor_hidden = 0;
static int s_cursor_clipped = 0;

/* Hide and confine the pointer while captured. Aiming with raw deltas
 * does not move the pointer by itself, but Windows still moves it from
 * the same physical movement, so it would wander across the screen and
 * end up clicking other apps' title bars. */
static void mkb_manage_cursor(int capture)
{
    HWND fg = GetForegroundWindow();
    DWORD pid = 0;
    if (fg)
        GetWindowThreadProcessId(fg, &pid);
    int is_fg = (fg && pid == GetCurrentProcessId());

    if (capture && is_fg) {
        RECT rc;
        if (GetClientRect(fg, &rc)) {
            POINT pt1 = { rc.left, rc.top };
            POINT pt2 = { rc.right, rc.bottom };
            ClientToScreen(fg, &pt1);
            ClientToScreen(fg, &pt2);
            RECT clip = { pt1.x, pt1.y, pt2.x, pt2.y };
            ClipCursor(&clip);
            s_cursor_clipped = 1;
        }
        if (!s_cursor_hidden) {
            while (ShowCursor(FALSE) >= 0) {}
            s_cursor_hidden = 1;
        }
    } else {
        if (s_cursor_clipped) {
            ClipCursor(NULL);
            s_cursor_clipped = 0;
        }
        if (s_cursor_hidden) {
            while (ShowCursor(TRUE) < 0) {}
            s_cursor_hidden = 0;
        }
    }
}

/* Radial deadzone compensation: an input radius in [0..1] comes out as
 * [dz..1], so the smallest mouse correction still clears the title's
 * own deadzone, and the response stays linear above it. */
static void mkb_aim_vector(double ax, double ay, SHORT *out_x, SHORT *out_y)
{
    double r = sqrt(ax * ax + ay * ay);
    double len, fx, fy;
    long v;

    if (r <= 0.00001) { *out_x = 0; *out_y = 0; return; }
    if (r > 1.0) r = 1.0;
    
    double curve = (s_cfg.acc == 1.0) ? r : pow(r, s_cfg.acc);
    len = s_cfg.dz + (1.0 - s_cfg.dz) * curve;
    len *= s_cfg.sens;
    if (len > 1.0) len = 1.0;
    
    fx = (ax / r) * len;
    fy = (ay / r) * len;
    
    v = (long)(fx * 32767.0);
    *out_x = (SHORT)(v > 32767 ? 32767 : v < -32768 ? -32768 : v);
    v = (long)(fy * 32767.0);
    *out_y = (SHORT)(v > 32767 ? 32767 : v < -32768 ? -32768 : v);
}

#define MK_VK(k)  ((unsigned)(k) < 256 && s_vk_down[(k)])

int mkb_merge(DWORD dwPort, XBOX_INPUT_STATE *pState)
{
    SHORT aim_x = 0, aim_y = 0, mov_x = 0, mov_y = 0;
    WORD b = 0;
    BYTE analog[8];
    LONG dx, dy, wheel, btn;
    int any = 0, i;
    static DWORD packet;

    if (!pState || dwPort != 0 || !mkb_enabled())
        return 0;
    if (!s_thread_up)
        return 0;

    if (!s_active) {
        mkb_manage_cursor(0);
        return 0;
    }

    /* Foreground gate: while the user is elsewhere the mouse belongs to
     * whoever has it, and the game should read a pad at rest. */
    if (!game_is_foreground()) {
        mkb_manage_cursor(0);
        InterlockedExchange(&s_dx, 0);
        InterlockedExchange(&s_dy, 0);
        InterlockedExchange(&s_mouse_btn, 0);
        return 0;
    }

    /* Overlay gate: when in-game overlay menu is active, free cursor and mute input */
    if (overlay_is_open()) {
        mkb_manage_cursor(0);
        InterlockedExchange(&s_dx, 0);
        InterlockedExchange(&s_dy, 0);
        InterlockedExchange(&s_mouse_btn, 0);
        return 0;
    }
    mkb_manage_cursor(1);

    dx    = InterlockedExchange(&s_dx, 0);
    dy    = InterlockedExchange(&s_dy, 0);
    wheel = InterlockedExchange(&s_wheel, 0);
    btn   = InterlockedCompareExchange(&s_mouse_btn, 0, 0);

    memset(analog, 0, sizeof analog);

    /* ---- mouse buttons, as the Xbox pad sees them ---- */
    if (btn & 0x01) analog[XBOX_BUTTON_RTRIGGER] = 255;  /* fire      */
    if (btn & 0x02) analog[XBOX_BUTTON_LTRIGGER] = 255;  /* ADS/aim   */
    if (btn & 0x04) analog[XBOX_BUTTON_Y]        = 255;  /* M: cycle weapon */
    if (btn & 0x08) analog[XBOX_BUTTON_WHITE]    = 255;  /* Mouse 4 (Thumb): grenade */
    if (btn & 0x10) analog[XBOX_BUTTON_BLACK]    = 255;  /* Mouse 5 (Thumb): alt/melee */

    /* ---- keyboard: WASD movement ---- */
    {
        int mx = 0, my = 0;
        if (MK_VK('W')) my += 1;
        if (MK_VK('S')) my -= 1;
        if (MK_VK('A')) mx -= 1;
        if (MK_VK('D')) mx += 1;
        if (mx && my) {
            mov_x = (SHORT)(mx > 0 ? 23170 : -23170);
            mov_y = (SHORT)(my > 0 ? 23170 : -23170);
        } else if (mx) {
            mov_x = (SHORT)(mx > 0 ? 32767 : -32768);
        } else if (my) {
            mov_y = (SHORT)(my > 0 ? 32767 : -32768);
        }
    }

    /* ---- mouse: aim ---- */
    static double s_filt_ax = 0.0, s_filt_ay = 0.0;
    if (dx || dy) {
        double ax = ((double)dx / (double)s_cfg.full) * s_cfg.sens_x;
        double ay = -((double)dy / (double)s_cfg.full) * s_cfg.sens_y;
        if (s_cfg.invert_y) ay = -ay;
        if (s_cfg.smooth) {
            double alpha = 0.65;
            s_filt_ax = s_filt_ax * (1.0 - alpha) + ax * alpha;
            s_filt_ay = s_filt_ay * (1.0 - alpha) + ay * alpha;
            ax = s_filt_ax;
            ay = s_filt_ay;
        }
        mkb_aim_vector(ax, ay, &aim_x, &aim_y);
    } else {
        s_filt_ax = 0.0;
        s_filt_ay = 0.0;
    }

    /* ---- keyboard: buttons (PC FPS layout for Star Wars Battlefront II) ---- */
    if (MK_VK(VK_SPACE))       analog[XBOX_BUTTON_A]     = 255; /* use/jump / menu select */
    if (MK_VK('E'))            analog[XBOX_BUTTON_X]     = 255; /* enter vehicle / action */
    if (MK_VK('R'))            analog[XBOX_BUTTON_X]     = 255; /* reload    */
    if (MK_VK('C'))            analog[XBOX_BUTTON_B]     = 255; /* crouch / roll */
    if (MK_VK(VK_LCONTROL))    analog[XBOX_BUTTON_B]     = 255; /* ctrl = crouch */
    if (MK_VK(VK_LMENU))       analog[XBOX_BUTTON_B]     = 255; /* alt = crouch / roll */
    if (MK_VK(VK_BACK))        analog[XBOX_BUTTON_B]     = 255; /* backspace = menu back */
    if (MK_VK('Z'))            analog[XBOX_BUTTON_A]     = 255; /* Z = A button (menu select) */
    if (MK_VK('X'))            analog[XBOX_BUTTON_B]     = 255; /* X = B button (menu back) */
    if (MK_VK('Q'))            analog[XBOX_BUTTON_WHITE] = 255; /* grenade   */
    if (MK_VK('F'))            analog[XBOX_BUTTON_BLACK] = 255; /* alt weapon / melee */
    if (MK_VK('G'))            analog[XBOX_BUTTON_WHITE] = 255; /* grenade alt */
    if (MK_VK('1') || MK_VK('2')) analog[XBOX_BUTTON_Y] = 255; /* cycle weapon */
    if (MK_VK('3'))            analog[XBOX_BUTTON_WHITE] = 255; /* special weapon */
    if (MK_VK('4'))            analog[XBOX_BUTTON_BLACK] = 255; /* ability / mines */
    if (MK_VK(VK_RETURN))      b |= XBOX_GAMEPAD_START;         /* Enter = Start / pause */
    if (MK_VK(VK_ESCAPE))      b |= XBOX_GAMEPAD_START;         /* Esc = Pause */
    if (MK_VK(VK_TAB))         b |= XBOX_GAMEPAD_BACK;          /* Tab = Scoreboard / stats */
    if (MK_VK('M'))            b |= XBOX_GAMEPAD_BACK;          /* M = Map / Command Post */
    if (MK_VK(VK_LSHIFT))      b |= XBOX_GAMEPAD_LEFT_THUMB;    /* sprint */
    if (MK_VK('V'))            b |= XBOX_GAMEPAD_RIGHT_THUMB;   /* V = zoom / view switch */
    if (MK_VK('T'))            b |= XBOX_GAMEPAD_DPAD_UP;       /* T = squad command */
    if (MK_VK(VK_UP))          b |= XBOX_GAMEPAD_DPAD_UP;
    if (MK_VK(VK_DOWN))        b |= XBOX_GAMEPAD_DPAD_DOWN;
    if (MK_VK(VK_LEFT))        b |= XBOX_GAMEPAD_DPAD_LEFT;
    if (MK_VK(VK_RIGHT))       b |= XBOX_GAMEPAD_DPAD_RIGHT;

    /* ---- wheel / middle button: cycle weapon ---- */
    if (wheel || (btn & 0x04))
        analog[XBOX_BUTTON_Y] = 255;

    /* ---- merge on top of whatever the host pad produced ---- */
    if (b)        { pState->Gamepad.wButtons |= b; any = 1; }
    for (i = 0; i < 8; i++) {
        if (analog[i]) {
            if (analog[i] > pState->Gamepad.bAnalogButtons[i])
                pState->Gamepad.bAnalogButtons[i] = analog[i];
            any = 1;
        }
    }
    if (aim_x || aim_y) {
        if (s_cfg.swap_sticks) {
            pState->Gamepad.sThumbLX = aim_x;
            pState->Gamepad.sThumbLY = aim_y;
        } else {
            pState->Gamepad.sThumbRX = aim_x;
            pState->Gamepad.sThumbRY = aim_y;
        }
        any = 1;
    }
    if (mov_x || mov_y) {
        if (s_cfg.swap_sticks) {
            pState->Gamepad.sThumbRX = mov_x;
            pState->Gamepad.sThumbRY = mov_y;
        } else {
            pState->Gamepad.sThumbLX = mov_x;
            pState->Gamepad.sThumbLY = mov_y;
        }
        any = 1;
    }

    /* Edge detection: a title polling for changes ignores a state whose
     * packet number did not move. When motion stops, bump packet once more
     * so the title sees the sticks return to center. */
    static int s_had_movement = 0;
    if (any || s_had_movement) {
        pState->dwPacketNumber = ++packet;
        s_had_movement = (aim_x != 0 || aim_y != 0 || mov_x != 0 || mov_y != 0);
    }
    return any;
}
