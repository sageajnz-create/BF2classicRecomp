/**
 * Star Wars Battlefront 2 - Recompiled code chunk 67
 * Functions: 250 (0x003A1400 - 0x003A32A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003A1400
 * Original: 0x003A1400 - 0x003A1420 (32 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1400(void)
{
    int _cf = 0; /* carry flag */

loc_003A1400: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0xBF944C); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(0xBF9448) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1420
 * Original: 0x003A1420 - 0x003A1440 (32 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1420(void)
{
    int _cf = 0; /* carry flag */

loc_003A1420: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9450) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1440
 * Original: 0x003A1440 - 0x003A1451 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1440(void)
{
    int _cf = 0; /* carry flag */

loc_003A1440: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9458) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1460
 * Original: 0x003A1460 - 0x003A1471 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1460(void)
{
    int _cf = 0; /* carry flag */

loc_003A1460: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9454) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1480
 * Original: 0x003A1480 - 0x003A1499 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1480(void)
{
    int _cf = 0; /* carry flag */

loc_003A1480: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9450); /* divss */
    MEMF(0xBF945C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A14A0
 * Original: 0x003A14A0 - 0x003A14B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A14A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A14A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9458); /* divss */
    MEMF(0xBF9460) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A14C0
 * Original: 0x003A14C0 - 0x003A14D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A14C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A14C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9464) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A14E0
 * Original: 0x003A14E0 - 0x003A14F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A14E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A14E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF946C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1500
 * Original: 0x003A1500 - 0x003A1511 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1500(void)
{
    int _cf = 0; /* carry flag */

loc_003A1500: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9468) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1520
 * Original: 0x003A1520 - 0x003A1539 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1520(void)
{
    int _cf = 0; /* carry flag */

loc_003A1520: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9464); /* divss */
    MEMF(0xBF9470) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1540
 * Original: 0x003A1540 - 0x003A1559 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1540(void)
{
    int _cf = 0; /* carry flag */

loc_003A1540: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF946C); /* divss */
    MEMF(0xBF9474) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1560
 * Original: 0x003A1560 - 0x003A1571 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1560(void)
{
    int _cf = 0; /* carry flag */

loc_003A1560: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9478) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1580
 * Original: 0x003A1580 - 0x003A1591 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1580(void)
{
    int _cf = 0; /* carry flag */

loc_003A1580: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9480) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A15A0
 * Original: 0x003A15A0 - 0x003A15B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A15A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A15A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF947C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A15C0
 * Original: 0x003A15C0 - 0x003A15D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A15C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A15C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9478); /* divss */
    MEMF(0xBF9484) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A15E0
 * Original: 0x003A15E0 - 0x003A15F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A15E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A15E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9480); /* divss */
    MEMF(0xBF9488) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1600
 * Original: 0x003A1600 - 0x003A1611 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1600(void)
{
    int _cf = 0; /* carry flag */

loc_003A1600: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF948C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1620
 * Original: 0x003A1620 - 0x003A1631 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1620(void)
{
    int _cf = 0; /* carry flag */

loc_003A1620: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9494) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1640
 * Original: 0x003A1640 - 0x003A1651 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1640(void)
{
    int _cf = 0; /* carry flag */

loc_003A1640: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9490) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1660
 * Original: 0x003A1660 - 0x003A1679 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1660(void)
{
    int _cf = 0; /* carry flag */

loc_003A1660: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF948C); /* divss */
    MEMF(0xBF9498) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1680
 * Original: 0x003A1680 - 0x003A1699 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1680(void)
{
    int _cf = 0; /* carry flag */

loc_003A1680: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9494); /* divss */
    MEMF(0xBF949C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A16A0
 * Original: 0x003A16A0 - 0x003A16B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A16A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A16A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF94A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A16C0
 * Original: 0x003A16C0 - 0x003A16D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A16C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A16C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF94A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A16E0
 * Original: 0x003A16E0 - 0x003A16F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A16E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A16E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF94A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1700
 * Original: 0x003A1700 - 0x003A1719 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1700(void)
{
    int _cf = 0; /* carry flag */

loc_003A1700: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF94A0); /* divss */
    MEMF(0xBF94AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1720
 * Original: 0x003A1720 - 0x003A1739 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1720(void)
{
    int _cf = 0; /* carry flag */

loc_003A1720: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF94A8); /* divss */
    MEMF(0xBF94B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1740
 * Original: 0x003A1740 - 0x003A1751 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1740(void)
{
    int _cf = 0; /* carry flag */

loc_003A1740: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF94B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1760
 * Original: 0x003A1760 - 0x003A1771 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1760(void)
{
    int _cf = 0; /* carry flag */

loc_003A1760: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF94BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1780
 * Original: 0x003A1780 - 0x003A1791 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1780(void)
{
    int _cf = 0; /* carry flag */

loc_003A1780: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF94B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A17A0
 * Original: 0x003A17A0 - 0x003A17B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A17A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A17A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF94B4); /* divss */
    MEMF(0xBF94C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A17C0
 * Original: 0x003A17C0 - 0x003A17D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A17C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A17C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF94BC); /* divss */
    MEMF(0xBF94C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A17E0
 * Original: 0x003A17E0 - 0x003A17EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A17E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A17E0: ;
    PUSH32(esp, 0x3ADFB0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A17EAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A17EA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A17F0
 * Original: 0x003A17F0 - 0x003A1801 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A17F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A17F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF94C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1810
 * Original: 0x003A1810 - 0x003A1821 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1810(void)
{
    int _cf = 0; /* carry flag */

loc_003A1810: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF94D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1830
 * Original: 0x003A1830 - 0x003A1841 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1830(void)
{
    int _cf = 0; /* carry flag */

loc_003A1830: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF94CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1850
 * Original: 0x003A1850 - 0x003A1869 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1850(void)
{
    int _cf = 0; /* carry flag */

loc_003A1850: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF94C8); /* divss */
    MEMF(0xBF94D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1870
 * Original: 0x003A1870 - 0x003A1889 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1870(void)
{
    int _cf = 0; /* carry flag */

loc_003A1870: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF94D0); /* divss */
    MEMF(0xBF94D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1890
 * Original: 0x003A1890 - 0x003A189B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1890(void)
{
    int _cf = 0; /* carry flag */

loc_003A1890: ;
    MEM32(0xBF94DC) = 0xC0;
    esp += 4; return; /* ret */

}

/**
 * sub_003A18A0
 * Original: 0x003A18A0 - 0x003A18B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A18A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A18A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF94E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A18C0
 * Original: 0x003A18C0 - 0x003A18D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A18C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A18C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF94E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A18E0
 * Original: 0x003A18E0 - 0x003A18F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A18E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A18E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF94E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1900
 * Original: 0x003A1900 - 0x003A1919 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1900(void)
{
    int _cf = 0; /* carry flag */

loc_003A1900: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF94E0); /* divss */
    MEMF(0xBF94EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1920
 * Original: 0x003A1920 - 0x003A1939 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1920(void)
{
    int _cf = 0; /* carry flag */

loc_003A1920: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF94E8); /* divss */
    MEMF(0xBF94F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1940
 * Original: 0x003A1940 - 0x003A1951 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1940(void)
{
    int _cf = 0; /* carry flag */

loc_003A1940: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF94F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1960
 * Original: 0x003A1960 - 0x003A1971 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1960(void)
{
    int _cf = 0; /* carry flag */

loc_003A1960: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF94FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1980
 * Original: 0x003A1980 - 0x003A1991 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1980(void)
{
    int _cf = 0; /* carry flag */

loc_003A1980: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF94F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A19A0
 * Original: 0x003A19A0 - 0x003A19B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A19A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A19A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF94F4); /* divss */
    MEMF(0xBF9500) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A19C0
 * Original: 0x003A19C0 - 0x003A19D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A19C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A19C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF94FC); /* divss */
    MEMF(0xBF9504) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A19E0
 * Original: 0x003A19E0 - 0x003A19F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A19E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A19E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9514) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1A00
 * Original: 0x003A1A00 - 0x003A1A11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1A00(void)
{
    int _cf = 0; /* carry flag */

loc_003A1A00: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF951C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1A20
 * Original: 0x003A1A20 - 0x003A1A31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1A20(void)
{
    int _cf = 0; /* carry flag */

loc_003A1A20: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9518) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1A40
 * Original: 0x003A1A40 - 0x003A1A59 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1A40(void)
{
    int _cf = 0; /* carry flag */

loc_003A1A40: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9514); /* divss */
    MEMF(0xBF9520) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1A60
 * Original: 0x003A1A60 - 0x003A1A79 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1A60(void)
{
    int _cf = 0; /* carry flag */

loc_003A1A60: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF951C); /* divss */
    MEMF(0xBF9524) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1A80
 * Original: 0x003A1A80 - 0x003A1A91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1A80(void)
{
    int _cf = 0; /* carry flag */

loc_003A1A80: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBF952C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1AA0
 * Original: 0x003A1AA0 - 0x003A1AB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1AA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A1AA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBF950C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1AC0
 * Original: 0x003A1AC0 - 0x003A1AD9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1AC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A1AC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF950C); /* divss */
    MEMF(0xBF9508) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1AE0
 * Original: 0x003A1AE0 - 0x003A1AFD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1AE0: ;
    fp_push(MEMF(0xBF950C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1AF7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1AF7: ;
    MEM32(0xBF9528) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A1B00
 * Original: 0x003A1B00 - 0x003A1B1D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1B00: ;
    fp_push(MEMF(0xBF950C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1B17u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1B17: ;
    MEM32(0xBF9510) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A1B20
 * Original: 0x003A1B20 - 0x003A1B4F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1B20: ;
    SET_LO16(eax, MEM16(0x4DA2E8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA2E8) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA2E8));
    PUSH32(esp, 0x3ADFC0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA2E8) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1B4Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1B4D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1B50
 * Original: 0x003A1B50 - 0x003A1B7F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1B50: ;
    SET_LO16(eax, MEM16(0x4DA300));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA300) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA300));
    PUSH32(esp, 0x3AE010);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA300) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1B7Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1B7D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1B80
 * Original: 0x003A1B80 - 0x003A1BAF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1B80: ;
    SET_LO16(eax, MEM16(0x4DA318));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA318) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA318));
    PUSH32(esp, 0x3AE060);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA318) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1BADu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1BAD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1BB0
 * Original: 0x003A1BB0 - 0x003A1BDF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1BB0: ;
    SET_LO16(eax, MEM16(0x4DA330));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA330) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA330));
    PUSH32(esp, 0x3AE0B0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA330) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1BDDu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1BDD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1BE0
 * Original: 0x003A1BE0 - 0x003A1C0F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1BE0: ;
    SET_LO16(eax, MEM16(0x4DA348));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA348) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA348));
    PUSH32(esp, 0x3AE100);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA348) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1C0Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1C0D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1C10
 * Original: 0x003A1C10 - 0x003A1C3F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1C10: ;
    SET_LO16(eax, MEM16(0x4DA360));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA360) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA360));
    PUSH32(esp, 0x3AE150);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA360) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1C3Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1C3D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1C40
 * Original: 0x003A1C40 - 0x003A1C6F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1C40: ;
    SET_LO16(eax, MEM16(0x4DA378));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA378) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA378));
    PUSH32(esp, 0x3AE1A0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA378) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1C6Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1C6D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1C70
 * Original: 0x003A1C70 - 0x003A1C9F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1C70: ;
    SET_LO16(eax, MEM16(0x4DA390));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA390) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA390));
    PUSH32(esp, 0x3AE1F0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA390) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1C9Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1C9D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1CA0
 * Original: 0x003A1CA0 - 0x003A1CCF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1CA0: ;
    SET_LO16(eax, MEM16(0x4DA3A8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA3A8) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA3A8));
    PUSH32(esp, 0x3AE240);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA3A8) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1CCDu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1CCD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1CD0
 * Original: 0x003A1CD0 - 0x003A1CFF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1CD0: ;
    SET_LO16(eax, MEM16(0x4DA3C0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA3C0) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA3C0));
    PUSH32(esp, 0x3AE290);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA3C0) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1CFDu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1CFD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1D00
 * Original: 0x003A1D00 - 0x003A1D2F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1D00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1D00: ;
    SET_LO16(eax, MEM16(0x4DA3D8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA3D8) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA3D8));
    PUSH32(esp, 0x3AE2E0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA3D8) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1D2Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1D2D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1D30
 * Original: 0x003A1D30 - 0x003A1D41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1D30(void)
{
    int _cf = 0; /* carry flag */

loc_003A1D30: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9530) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1D50
 * Original: 0x003A1D50 - 0x003A1D61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1D50(void)
{
    int _cf = 0; /* carry flag */

loc_003A1D50: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9538) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1D70
 * Original: 0x003A1D70 - 0x003A1D81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1D70(void)
{
    int _cf = 0; /* carry flag */

loc_003A1D70: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9534) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1D90
 * Original: 0x003A1D90 - 0x003A1DA9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1D90(void)
{
    int _cf = 0; /* carry flag */

loc_003A1D90: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9530); /* divss */
    MEMF(0xBF953C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1DB0
 * Original: 0x003A1DB0 - 0x003A1DC9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1DB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A1DB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9538); /* divss */
    MEMF(0xBF9540) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1DD0
 * Original: 0x003A1DD0 - 0x003A1DFF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1DD0: ;
    SET_LO16(eax, MEM16(0x4DA438));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA438) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA438));
    PUSH32(esp, 0x3AE330);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA438) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1DFDu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1DFD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1E00
 * Original: 0x003A1E00 - 0x003A1E2F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1E00: ;
    SET_LO16(eax, MEM16(0x4DA450));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA450) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA450));
    PUSH32(esp, 0x3AE380);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA450) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1E2Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1E2D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1E30
 * Original: 0x003A1E30 - 0x003A1E5F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1E30: ;
    SET_LO16(eax, MEM16(0x4DA468));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA468) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA468));
    PUSH32(esp, 0x3AE3D0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA468) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1E5Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1E5D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1E60
 * Original: 0x003A1E60 - 0x003A1E8F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1E60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1E60: ;
    SET_LO16(eax, MEM16(0x4DA480));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA480) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA480));
    PUSH32(esp, 0x3AE420);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA480) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1E8Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1E8D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1E90
 * Original: 0x003A1E90 - 0x003A1EBF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1E90: ;
    SET_LO16(eax, MEM16(0x4DA498));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA498) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA498));
    PUSH32(esp, 0x3AE470);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA498) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1EBDu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1EBD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1EC0
 * Original: 0x003A1EC0 - 0x003A1EEF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1EC0: ;
    SET_LO16(eax, MEM16(0x4DA4B0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA4B0) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA4B0));
    PUSH32(esp, 0x3AE4C0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA4B0) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1EEDu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1EED: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1EF0
 * Original: 0x003A1EF0 - 0x003A1F1F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1EF0: ;
    SET_LO16(eax, MEM16(0x4DA4C8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA4C8) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA4C8));
    PUSH32(esp, 0x3AE510);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA4C8) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1F1Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1F1D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1F20
 * Original: 0x003A1F20 - 0x003A1F4F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1F20: ;
    SET_LO16(eax, MEM16(0x4DA4E0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA4E0) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA4E0));
    PUSH32(esp, 0x3AE560);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA4E0) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A1F4Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A1F4D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A1F50
 * Original: 0x003A1F50 - 0x003A1F61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1F50(void)
{
    int _cf = 0; /* carry flag */

loc_003A1F50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9544) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1F70
 * Original: 0x003A1F70 - 0x003A1F81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1F70(void)
{
    int _cf = 0; /* carry flag */

loc_003A1F70: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF954C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1F90
 * Original: 0x003A1F90 - 0x003A1FA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1F90(void)
{
    int _cf = 0; /* carry flag */

loc_003A1F90: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9548) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1FB0
 * Original: 0x003A1FB0 - 0x003A1FC9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1FB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A1FB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9544); /* divss */
    MEMF(0xBF9550) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1FD0
 * Original: 0x003A1FD0 - 0x003A1FE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1FD0(void)
{
    int _cf = 0; /* carry flag */

loc_003A1FD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF954C); /* divss */
    MEMF(0xBF9554) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1FF0
 * Original: 0x003A1FF0 - 0x003A201F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A1FF0: ;
    SET_LO16(eax, MEM16(0x4DA4F8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA4F8) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA4F8));
    PUSH32(esp, 0x3AE5B0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA4F8) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A201Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A201D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2020
 * Original: 0x003A2020 - 0x003A204F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2020: ;
    SET_LO16(eax, MEM16(0x4DA510));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA510) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA510));
    PUSH32(esp, 0x3AE600);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA510) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A204Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A204D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2050
 * Original: 0x003A2050 - 0x003A207F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2050: ;
    SET_LO16(eax, MEM16(0x4DA528));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA528) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA528));
    PUSH32(esp, 0x3AE650);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA528) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A207Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A207D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2080
 * Original: 0x003A2080 - 0x003A20AF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2080: ;
    SET_LO16(eax, MEM16(0x4DA540));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA540) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA540));
    PUSH32(esp, 0x3AE6A0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA540) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A20ADu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A20AD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A20B0
 * Original: 0x003A20B0 - 0x003A20C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A20B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A20B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9564) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A20D0
 * Original: 0x003A20D0 - 0x003A20E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A20D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A20D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF956C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A20F0
 * Original: 0x003A20F0 - 0x003A2101 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A20F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A20F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9568) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2110
 * Original: 0x003A2110 - 0x003A2129 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2110(void)
{
    int _cf = 0; /* carry flag */

loc_003A2110: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9564); /* divss */
    MEMF(0xBF9570) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2130
 * Original: 0x003A2130 - 0x003A2149 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2130(void)
{
    int _cf = 0; /* carry flag */

loc_003A2130: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF956C); /* divss */
    MEMF(0xBF9574) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2150
 * Original: 0x003A2150 - 0x003A2161 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2150(void)
{
    int _cf = 0; /* carry flag */

loc_003A2150: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBF957C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2170
 * Original: 0x003A2170 - 0x003A2181 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2170(void)
{
    int _cf = 0; /* carry flag */

loc_003A2170: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBF955C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2190
 * Original: 0x003A2190 - 0x003A21A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2190(void)
{
    int _cf = 0; /* carry flag */

loc_003A2190: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF955C); /* divss */
    MEMF(0xBF9558) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A21B0
 * Original: 0x003A21B0 - 0x003A21CD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A21B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A21B0: ;
    fp_push(MEMF(0xBF955C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A21C7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A21C7: ;
    MEM32(0xBF9578) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A21D0
 * Original: 0x003A21D0 - 0x003A21ED (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A21D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A21D0: ;
    fp_push(MEMF(0xBF955C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A21E7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A21E7: ;
    MEM32(0xBF9560) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A21F0
 * Original: 0x003A21F0 - 0x003A221F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A21F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A21F0: ;
    SET_LO16(eax, MEM16(0x4DA598));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA598) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA598));
    PUSH32(esp, 0x3AE6F0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA598) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A221Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A221D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2220
 * Original: 0x003A2220 - 0x003A224F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2220: ;
    SET_LO16(eax, MEM16(0x4DA5B0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA5B0) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA5B0));
    PUSH32(esp, 0x3AE740);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA5B0) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A224Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A224D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2250
 * Original: 0x003A2250 - 0x003A227F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2250: ;
    SET_LO16(eax, MEM16(0x4DA5C8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA5C8) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA5C8));
    PUSH32(esp, 0x3AE790);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA5C8) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A227Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A227D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2280
 * Original: 0x003A2280 - 0x003A22AF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2280: ;
    SET_LO16(eax, MEM16(0x4DA5E0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA5E0) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA5E0));
    PUSH32(esp, 0x3AE7E0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA5E0) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A22ADu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A22AD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A22B0
 * Original: 0x003A22B0 - 0x003A22DF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A22B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A22B0: ;
    SET_LO16(eax, MEM16(0x4DA5F8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA5F8) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA5F8));
    PUSH32(esp, 0x3AE830);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA5F8) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A22DDu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A22DD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A22E0
 * Original: 0x003A22E0 - 0x003A22F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A22E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A22E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9580) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2300
 * Original: 0x003A2300 - 0x003A2311 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2300(void)
{
    int _cf = 0; /* carry flag */

loc_003A2300: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9588) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2320
 * Original: 0x003A2320 - 0x003A2331 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2320(void)
{
    int _cf = 0; /* carry flag */

loc_003A2320: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9584) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2340
 * Original: 0x003A2340 - 0x003A2359 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2340(void)
{
    int _cf = 0; /* carry flag */

loc_003A2340: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9580); /* divss */
    MEMF(0xBF958C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2360
 * Original: 0x003A2360 - 0x003A2379 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2360(void)
{
    int _cf = 0; /* carry flag */

loc_003A2360: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9588); /* divss */
    MEMF(0xBF9590) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2380
 * Original: 0x003A2380 - 0x003A2391 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2380(void)
{
    int _cf = 0; /* carry flag */

loc_003A2380: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9594) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A23A0
 * Original: 0x003A23A0 - 0x003A23B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A23A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A23A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF959C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A23C0
 * Original: 0x003A23C0 - 0x003A23D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A23C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A23C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9598) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A23E0
 * Original: 0x003A23E0 - 0x003A23F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A23E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A23E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9594); /* divss */
    MEMF(0xBF95A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2400
 * Original: 0x003A2400 - 0x003A2419 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2400(void)
{
    int _cf = 0; /* carry flag */

loc_003A2400: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF959C); /* divss */
    MEMF(0xBF95A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2420
 * Original: 0x003A2420 - 0x003A2431 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2420(void)
{
    int _cf = 0; /* carry flag */

loc_003A2420: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF95A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2440
 * Original: 0x003A2440 - 0x003A2451 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2440(void)
{
    int _cf = 0; /* carry flag */

loc_003A2440: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF95B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2460
 * Original: 0x003A2460 - 0x003A2471 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2460(void)
{
    int _cf = 0; /* carry flag */

loc_003A2460: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF95AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2480
 * Original: 0x003A2480 - 0x003A2499 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2480(void)
{
    int _cf = 0; /* carry flag */

loc_003A2480: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF95A8); /* divss */
    MEMF(0xBF95B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A24A0
 * Original: 0x003A24A0 - 0x003A24B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A24A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A24A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF95B0); /* divss */
    MEMF(0xBF95B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A24C0
 * Original: 0x003A24C0 - 0x003A24EF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A24C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A24C0: ;
    SET_LO16(eax, MEM16(0x4DA658));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA658) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA658));
    PUSH32(esp, 0x3AE880);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA658) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A24EDu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A24ED: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A24F0
 * Original: 0x003A24F0 - 0x003A251F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A24F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A24F0: ;
    SET_LO16(eax, MEM16(0x4DA670));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA670) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA670));
    PUSH32(esp, 0x3AE8D0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA670) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A251Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A251D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2520
 * Original: 0x003A2520 - 0x003A254F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2520: ;
    SET_LO16(eax, MEM16(0x4DA688));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA688) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA688));
    PUSH32(esp, 0x3AE920);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA688) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A254Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A254D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2550
 * Original: 0x003A2550 - 0x003A257F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2550: ;
    SET_LO16(eax, MEM16(0x4DA6A0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA6A0) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA6A0));
    PUSH32(esp, 0x3AE970);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA6A0) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A257Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A257D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2580
 * Original: 0x003A2580 - 0x003A25AF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2580: ;
    SET_LO16(eax, MEM16(0x4DA6B8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA6B8) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA6B8));
    PUSH32(esp, 0x3AE9C0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA6B8) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A25ADu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A25AD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A25B0
 * Original: 0x003A25B0 - 0x003A25DF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A25B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A25B0: ;
    SET_LO16(eax, MEM16(0x4DA6D0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA6D0) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA6D0));
    PUSH32(esp, 0x3AEA10);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA6D0) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A25DDu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A25DD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A25E0
 * Original: 0x003A25E0 - 0x003A260F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A25E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A25E0: ;
    SET_LO16(eax, MEM16(0x4DA6E8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA6E8) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA6E8));
    PUSH32(esp, 0x3AEA60);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA6E8) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A260Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A260D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2610
 * Original: 0x003A2610 - 0x003A263F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2610: ;
    SET_LO16(eax, MEM16(0x4DA700));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA700) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA700));
    PUSH32(esp, 0x3AEAB0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA700) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A263Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A263D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2640
 * Original: 0x003A2640 - 0x003A266F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2640: ;
    SET_LO16(eax, MEM16(0x4DA718));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA718) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA718));
    PUSH32(esp, 0x3AEB00);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA718) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A266Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A266D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2670
 * Original: 0x003A2670 - 0x003A269F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2670: ;
    SET_LO16(eax, MEM16(0x4DA730));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA730) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA730));
    PUSH32(esp, 0x3AEB50);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA730) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A269Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A269D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A26A0
 * Original: 0x003A26A0 - 0x003A26CF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A26A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A26A0: ;
    SET_LO16(eax, MEM16(0x4DA748));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA748) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA748));
    PUSH32(esp, 0x3AEBA0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA748) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A26CDu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A26CD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A26D0
 * Original: 0x003A26D0 - 0x003A26FF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A26D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A26D0: ;
    SET_LO16(eax, MEM16(0x4DA760));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA760) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA760));
    PUSH32(esp, 0x3AEBF0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA760) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A26FDu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A26FD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2700
 * Original: 0x003A2700 - 0x003A2711 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2700(void)
{
    int _cf = 0; /* carry flag */

loc_003A2700: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF95C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2720
 * Original: 0x003A2720 - 0x003A2731 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2720(void)
{
    int _cf = 0; /* carry flag */

loc_003A2720: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF95D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2740
 * Original: 0x003A2740 - 0x003A2751 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2740(void)
{
    int _cf = 0; /* carry flag */

loc_003A2740: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF95CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2760
 * Original: 0x003A2760 - 0x003A2779 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2760(void)
{
    int _cf = 0; /* carry flag */

loc_003A2760: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF95C8); /* divss */
    MEMF(0xBF95D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2780
 * Original: 0x003A2780 - 0x003A2799 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2780(void)
{
    int _cf = 0; /* carry flag */

loc_003A2780: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF95D0); /* divss */
    MEMF(0xBF95D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A27A0
 * Original: 0x003A27A0 - 0x003A27B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A27A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A27A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBF95E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A27C0
 * Original: 0x003A27C0 - 0x003A27D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A27C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A27C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBF95C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A27E0
 * Original: 0x003A27E0 - 0x003A27F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A27E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A27E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF95C0); /* divss */
    MEMF(0xBF95BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2800
 * Original: 0x003A2800 - 0x003A281D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2800: ;
    fp_push(MEMF(0xBF95C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2817u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A2817: ;
    MEM32(0xBF95DC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2820
 * Original: 0x003A2820 - 0x003A283D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2820: ;
    fp_push(MEMF(0xBF95C0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2837u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A2837: ;
    MEM32(0xBF95C4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2840
 * Original: 0x003A2840 - 0x003A286F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2840: ;
    SET_LO16(eax, MEM16(0x4DA7B8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA7B8) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA7B8));
    PUSH32(esp, 0x3AEC40);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA7B8) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A286Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A286D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2870
 * Original: 0x003A2870 - 0x003A289F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2870: ;
    SET_LO16(eax, MEM16(0x4DA7D0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA7D0) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA7D0));
    PUSH32(esp, 0x3AEC90);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA7D0) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A289Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A289D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A28A0
 * Original: 0x003A28A0 - 0x003A28B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A28A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A28A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF95E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A28C0
 * Original: 0x003A28C0 - 0x003A28D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A28C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A28C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF95EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A28E0
 * Original: 0x003A28E0 - 0x003A28F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A28E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A28E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF95E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2900
 * Original: 0x003A2900 - 0x003A2919 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2900(void)
{
    int _cf = 0; /* carry flag */

loc_003A2900: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF95E4); /* divss */
    MEMF(0xBF95F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2920
 * Original: 0x003A2920 - 0x003A2939 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2920(void)
{
    int _cf = 0; /* carry flag */

loc_003A2920: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF95EC); /* divss */
    MEMF(0xBF95F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2940
 * Original: 0x003A2940 - 0x003A296F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2940: ;
    SET_LO16(eax, MEM16(0x4DA7E8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA7E8) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA7E8));
    PUSH32(esp, 0x3AECE0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA7E8) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A296Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A296D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2970
 * Original: 0x003A2970 - 0x003A299F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2970: ;
    SET_LO16(eax, MEM16(0x4DA800));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA800) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA800));
    PUSH32(esp, 0x3AED30);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA800) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A299Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A299D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A29A0
 * Original: 0x003A29A0 - 0x003A29CF (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A29A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A29A0: ;
    SET_LO16(eax, MEM16(0x4DA818));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA818) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA818));
    PUSH32(esp, 0x3AED80);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA818) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A29CDu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A29CD: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A29D0
 * Original: 0x003A29D0 - 0x003A29E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A29D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A29D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF95F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A29F0
 * Original: 0x003A29F0 - 0x003A2A01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A29F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A29F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9600) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2A10
 * Original: 0x003A2A10 - 0x003A2A21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2A10(void)
{
    int _cf = 0; /* carry flag */

loc_003A2A10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF95FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2A30
 * Original: 0x003A2A30 - 0x003A2A49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2A30(void)
{
    int _cf = 0; /* carry flag */

loc_003A2A30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF95F8); /* divss */
    MEMF(0xBF9604) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2A50
 * Original: 0x003A2A50 - 0x003A2A69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2A50(void)
{
    int _cf = 0; /* carry flag */

loc_003A2A50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9600); /* divss */
    MEMF(0xBF9608) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2A70
 * Original: 0x003A2A70 - 0x003A2A9F (47 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2A70: ;
    SET_LO16(eax, MEM16(0x4DA830));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) | ((3) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(0x4DA830) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x4DA830));
    PUSH32(esp, 0x3AEDD0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x4DA830) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2A9Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A2A9D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2AA0
 * Original: 0x003A2AA0 - 0x003A2AAB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2AA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2AA0: ;
    MEM32(0xBF960C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2AB0
 * Original: 0x003A2AB0 - 0x003A2ABB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2AB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2AB0: ;
    MEM32(0xBF9614) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2AC0
 * Original: 0x003A2AC0 - 0x003A2ACB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2AC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2AC0: ;
    MEM32(0xBF9610) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2AD0
 * Original: 0x003A2AD0 - 0x003A2AE3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2AD0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2AD0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF960C)); /* fdiv dword ptr [0xbf960c] */
    MEMF(0xBF9618) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2AF0
 * Original: 0x003A2AF0 - 0x003A2B03 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2AF0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2AF0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF9614)); /* fdiv dword ptr [0xbf9614] */
    MEMF(0xBF961C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2B10
 * Original: 0x003A2B10 - 0x003A2B26 (22 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2B10(void)
{
    int _cf = 0; /* carry flag */

loc_003A2B10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x4DA840;
    edi = 0xBF9620;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003A2B30
 * Original: 0x003A2B30 - 0x003A2B3B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2B30(void)
{
    int _cf = 0; /* carry flag */

loc_003A2B30: ;
    MEM32(0xBF9660) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2B40
 * Original: 0x003A2B40 - 0x003A2B4B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2B40(void)
{
    int _cf = 0; /* carry flag */

loc_003A2B40: ;
    MEM32(0xBF9668) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2B50
 * Original: 0x003A2B50 - 0x003A2B5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2B50(void)
{
    int _cf = 0; /* carry flag */

loc_003A2B50: ;
    MEM32(0xBF9664) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2B60
 * Original: 0x003A2B60 - 0x003A2B73 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2B60(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2B60: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF9660)); /* fdiv dword ptr [0xbf9660] */
    MEMF(0xBF966C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2B80
 * Original: 0x003A2B80 - 0x003A2B93 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2B80(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2B80: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF9668)); /* fdiv dword ptr [0xbf9668] */
    MEMF(0xBF9670) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2BA0
 * Original: 0x003A2BA0 - 0x003A2BAC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2BA0: ;
    PUSH32(esp, 0x3AEE20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2BAAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A2BAA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2BB0
 * Original: 0x003A2BB0 - 0x003A2BBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2BB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2BB0: ;
    MEM32(0xBF9674) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2BC0
 * Original: 0x003A2BC0 - 0x003A2BCB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2BC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2BC0: ;
    MEM32(0xBF967C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2BD0
 * Original: 0x003A2BD0 - 0x003A2BDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2BD0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2BD0: ;
    MEM32(0xBF9678) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2BE0
 * Original: 0x003A2BE0 - 0x003A2BF3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2BE0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2BE0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF9674)); /* fdiv dword ptr [0xbf9674] */
    MEMF(0xBF9680) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2C00
 * Original: 0x003A2C00 - 0x003A2C13 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2C00(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2C00: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF967C)); /* fdiv dword ptr [0xbf967c] */
    MEMF(0xBF9684) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2C20
 * Original: 0x003A2C20 - 0x003A2C43 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2C20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2C2Cu); RECOMP_ABI_CALL(0x00320974u, sub_00320974); /* call 0x00320974 */

loc_003A2C2C: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(0x533530) = ecx;
    MEM32(0x533534) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2C50
 * Original: 0x003A2C50 - 0x003A2C5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2C50(void)
{
    int _cf = 0; /* carry flag */

loc_003A2C50: ;
    MEM32(0xBF968C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2C60
 * Original: 0x003A2C60 - 0x003A2C6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2C60(void)
{
    int _cf = 0; /* carry flag */

loc_003A2C60: ;
    MEM32(0xBF9694) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2C70
 * Original: 0x003A2C70 - 0x003A2C7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2C70(void)
{
    int _cf = 0; /* carry flag */

loc_003A2C70: ;
    MEM32(0xBF9690) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2C80
 * Original: 0x003A2C80 - 0x003A2C93 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2C80(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2C80: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF968C)); /* fdiv dword ptr [0xbf968c] */
    MEMF(0xBF9698) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2CA0
 * Original: 0x003A2CA0 - 0x003A2CB3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2CA0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2CA0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF9694)); /* fdiv dword ptr [0xbf9694] */
    MEMF(0xBF969C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2CC0
 * Original: 0x003A2CC0 - 0x003A2CCB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2CC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2CC0: ;
    eax = MEM32(0xB74394);
    MEM32(0xBF96A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2CD0
 * Original: 0x003A2CD0 - 0x003A2CDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2CD0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2CD0: ;
    MEM32(0xBF96A4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2CE0
 * Original: 0x003A2CE0 - 0x003A2CEB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2CE0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2CE0: ;
    MEM32(0xBF96AC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2CF0
 * Original: 0x003A2CF0 - 0x003A2CFB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2CF0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2CF0: ;
    MEM32(0xBF96A8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2D00
 * Original: 0x003A2D00 - 0x003A2D13 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2D00(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2D00: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF96A4)); /* fdiv dword ptr [0xbf96a4] */
    MEMF(0xBF96B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2D20
 * Original: 0x003A2D20 - 0x003A2D33 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2D20(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2D20: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF96AC)); /* fdiv dword ptr [0xbf96ac] */
    MEMF(0xBF96B4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2D40
 * Original: 0x003A2D40 - 0x003A2D7C (60 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A2D40: ;
    eax = MEM32(0x4DA934);
    _fa = ((int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x19660D) != (int64_t)(int32_t)((uint32_t)(eax) * (uint32_t)(0x19660D)));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x19660D);
    _fb = (uint32_t)(0x3C6EF35F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3C6EF35F)) >> 32) & 1);
    eax = eax + 0x3C6EF35F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4DA934) = eax;
    ecx = eax;
    _fa = ((int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x19660D) != (int64_t)(int32_t)((uint32_t)(eax) * (uint32_t)(0x19660D)));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x19660D);
    _fb = (uint32_t)(0x3C6EF35F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3C6EF35F)) >> 32) & 1);
    eax = eax + 0x3C6EF35F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x4DA934) = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (((0x10) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((0x10) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((0x10) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0xC71C2830u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0xBF96B8) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A2D80
 * Original: 0x003A2D80 - 0x003A2D8B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2D80(void)
{
    int _cf = 0; /* carry flag */

loc_003A2D80: ;
    MEM32(0xBF96BC) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2D90
 * Original: 0x003A2D90 - 0x003A2D9B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2D90(void)
{
    int _cf = 0; /* carry flag */

loc_003A2D90: ;
    MEM32(0xBF96C4) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2DA0
 * Original: 0x003A2DA0 - 0x003A2DAB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2DA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2DA0: ;
    MEM32(0xBF96C0) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2DB0
 * Original: 0x003A2DB0 - 0x003A2DC3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2DB0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2DB0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF96BC)); /* fdiv dword ptr [0xbf96bc] */
    MEMF(0xBF96C8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2DD0
 * Original: 0x003A2DD0 - 0x003A2DE3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2DD0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2DD0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF96C4)); /* fdiv dword ptr [0xbf96c4] */
    MEMF(0xBF96CC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2DF0
 * Original: 0x003A2DF0 - 0x003A2E00 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2DF0: ;
    edx = 0x495940;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A2DFAu); RECOMP_ABI_CALL(0x0029F520u, sub_0029F520); /* call 0x0029F520 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A2DFA: ;
    MEM32(0xBF96D0) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A2E00
 * Original: 0x003A2E00 - 0x003A2E10 (16 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2E00(void)
{
    int _cf = 0; /* carry flag */

loc_003A2E00: ;
    MEM32(0xBF96D4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2E10
 * Original: 0x003A2E10 - 0x003A2E1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2E10(void)
{
    int _cf = 0; /* carry flag */

loc_003A2E10: ;
    MEM32(0xBF96DC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2E20
 * Original: 0x003A2E20 - 0x003A2E2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2E20(void)
{
    int _cf = 0; /* carry flag */

loc_003A2E20: ;
    MEM32(0xBF96D8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2E30
 * Original: 0x003A2E30 - 0x003A2E43 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2E30(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2E30: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF96D4)); /* fdiv dword ptr [0xbf96d4] */
    MEMF(0xBF96E0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2E50
 * Original: 0x003A2E50 - 0x003A2E63 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2E50(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2E50: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF96DC)); /* fdiv dword ptr [0xbf96dc] */
    MEMF(0xBF96E4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2E70
 * Original: 0x003A2E70 - 0x003A2E7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2E70(void)
{
    int _cf = 0; /* carry flag */

loc_003A2E70: ;
    MEM32(0xBF96E8) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2E80
 * Original: 0x003A2E80 - 0x003A2E8B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2E80(void)
{
    int _cf = 0; /* carry flag */

loc_003A2E80: ;
    MEM32(0xBF96F0) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2E90
 * Original: 0x003A2E90 - 0x003A2E9B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2E90(void)
{
    int _cf = 0; /* carry flag */

loc_003A2E90: ;
    MEM32(0xBF96EC) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2EA0
 * Original: 0x003A2EA0 - 0x003A2EB3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2EA0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2EA0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF96E8)); /* fdiv dword ptr [0xbf96e8] */
    MEMF(0xBF96F4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2EC0
 * Original: 0x003A2EC0 - 0x003A2ED3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2EC0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2EC0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBF96F0)); /* fdiv dword ptr [0xbf96f0] */
    MEMF(0xBF96F8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2EE0
 * Original: 0x003A2EE0 - 0x003A2EEA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A2EE0: ;
    eax = 0xBF9700;
    g_seh_ebp = ebp; sub_002A3920(); return; /* tail jmp 0x002A3920 */

}

/**
 * sub_003A2EF0
 * Original: 0x003A2EF0 - 0x003A2EFB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2EF0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2EF0: ;
    MEM32(0xBFD700) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2F00
 * Original: 0x003A2F00 - 0x003A2F0B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2F00(void)
{
    int _cf = 0; /* carry flag */

loc_003A2F00: ;
    MEM32(0xBFD708) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2F10
 * Original: 0x003A2F10 - 0x003A2F1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2F10(void)
{
    int _cf = 0; /* carry flag */

loc_003A2F10: ;
    MEM32(0xBFD704) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2F20
 * Original: 0x003A2F20 - 0x003A2F33 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2F20(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2F20: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD700)); /* fdiv dword ptr [0xbfd700] */
    MEMF(0xBFD70C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2F40
 * Original: 0x003A2F40 - 0x003A2F53 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2F40(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2F40: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD708)); /* fdiv dword ptr [0xbfd708] */
    MEMF(0xBFD710) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2F60
 * Original: 0x003A2F60 - 0x003A2F6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2F60(void)
{
    int _cf = 0; /* carry flag */

loc_003A2F60: ;
    MEM32(0xBFD714) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2F70
 * Original: 0x003A2F70 - 0x003A2F7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2F70(void)
{
    int _cf = 0; /* carry flag */

loc_003A2F70: ;
    MEM32(0xBFD71C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2F80
 * Original: 0x003A2F80 - 0x003A2F8B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2F80(void)
{
    int _cf = 0; /* carry flag */

loc_003A2F80: ;
    MEM32(0xBFD718) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2F90
 * Original: 0x003A2F90 - 0x003A2FA3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2F90(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2F90: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD714)); /* fdiv dword ptr [0xbfd714] */
    MEMF(0xBFD720) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2FB0
 * Original: 0x003A2FB0 - 0x003A2FC3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A2FB0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A2FB0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD71C)); /* fdiv dword ptr [0xbfd71c] */
    MEMF(0xBFD724) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A2FD0
 * Original: 0x003A2FD0 - 0x003A2FDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2FD0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2FD0: ;
    MEM32(0xBFD728) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2FE0
 * Original: 0x003A2FE0 - 0x003A2FEB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2FE0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2FE0: ;
    MEM32(0xBFD730) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A2FF0
 * Original: 0x003A2FF0 - 0x003A2FFB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A2FF0(void)
{
    int _cf = 0; /* carry flag */

loc_003A2FF0: ;
    MEM32(0xBFD72C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3000
 * Original: 0x003A3000 - 0x003A3013 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3000(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3000: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD728)); /* fdiv dword ptr [0xbfd728] */
    MEMF(0xBFD734) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3020
 * Original: 0x003A3020 - 0x003A3033 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3020(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3020: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD730)); /* fdiv dword ptr [0xbfd730] */
    MEMF(0xBFD738) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3040
 * Original: 0x003A3040 - 0x003A304B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3040(void)
{
    int _cf = 0; /* carry flag */

loc_003A3040: ;
    MEM32(0xBFD73C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3050
 * Original: 0x003A3050 - 0x003A305B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3050(void)
{
    int _cf = 0; /* carry flag */

loc_003A3050: ;
    MEM32(0xBFD744) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3060
 * Original: 0x003A3060 - 0x003A306B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3060(void)
{
    int _cf = 0; /* carry flag */

loc_003A3060: ;
    MEM32(0xBFD740) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3070
 * Original: 0x003A3070 - 0x003A3083 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3070(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3070: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD73C)); /* fdiv dword ptr [0xbfd73c] */
    MEMF(0xBFD748) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3090
 * Original: 0x003A3090 - 0x003A30A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3090(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3090: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD744)); /* fdiv dword ptr [0xbfd744] */
    MEMF(0xBFD74C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A30B0
 * Original: 0x003A30B0 - 0x003A30BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A30B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A30B0: ;
    MEM32(0xBFD750) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A30C0
 * Original: 0x003A30C0 - 0x003A30CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A30C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A30C0: ;
    MEM32(0xBFD758) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A30D0
 * Original: 0x003A30D0 - 0x003A30DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A30D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A30D0: ;
    MEM32(0xBFD754) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A30E0
 * Original: 0x003A30E0 - 0x003A30F3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A30E0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A30E0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD750)); /* fdiv dword ptr [0xbfd750] */
    MEMF(0xBFD75C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3100
 * Original: 0x003A3100 - 0x003A3113 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3100(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3100: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD758)); /* fdiv dword ptr [0xbfd758] */
    MEMF(0xBFD760) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3120
 * Original: 0x003A3120 - 0x003A312B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3120(void)
{
    int _cf = 0; /* carry flag */

loc_003A3120: ;
    MEM32(0xBFD764) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3130
 * Original: 0x003A3130 - 0x003A313B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3130(void)
{
    int _cf = 0; /* carry flag */

loc_003A3130: ;
    MEM32(0xBFD76C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3140
 * Original: 0x003A3140 - 0x003A314B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3140(void)
{
    int _cf = 0; /* carry flag */

loc_003A3140: ;
    MEM32(0xBFD768) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3150
 * Original: 0x003A3150 - 0x003A3163 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3150(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3150: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD764)); /* fdiv dword ptr [0xbfd764] */
    MEMF(0xBFD770) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3170
 * Original: 0x003A3170 - 0x003A3183 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3170(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3170: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD76C)); /* fdiv dword ptr [0xbfd76c] */
    MEMF(0xBFD774) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3190
 * Original: 0x003A3190 - 0x003A3195 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3190: ;
    g_seh_ebp = ebp; sub_002A6600(); return; /* tail jmp 0x002A6600 */

}

/**
 * sub_003A31A0
 * Original: 0x003A31A0 - 0x003A31AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A31A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A31A0: ;
    MEM32(0xBFD77C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A31B0
 * Original: 0x003A31B0 - 0x003A31BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A31B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A31B0: ;
    MEM32(0xBFD784) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A31C0
 * Original: 0x003A31C0 - 0x003A31CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A31C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A31C0: ;
    MEM32(0xBFD780) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A31D0
 * Original: 0x003A31D0 - 0x003A31E3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A31D0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A31D0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD77C)); /* fdiv dword ptr [0xbfd77c] */
    MEMF(0xBFD788) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A31F0
 * Original: 0x003A31F0 - 0x003A3203 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A31F0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A31F0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD784)); /* fdiv dword ptr [0xbfd784] */
    MEMF(0xBFD78C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3210
 * Original: 0x003A3210 - 0x003A321B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3210(void)
{
    int _cf = 0; /* carry flag */

loc_003A3210: ;
    MEM32(0xBFD790) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3220
 * Original: 0x003A3220 - 0x003A322B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3220(void)
{
    int _cf = 0; /* carry flag */

loc_003A3220: ;
    MEM32(0xBFD798) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3230
 * Original: 0x003A3230 - 0x003A323B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3230(void)
{
    int _cf = 0; /* carry flag */

loc_003A3230: ;
    MEM32(0xBFD794) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3240
 * Original: 0x003A3240 - 0x003A3253 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3240(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3240: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD790)); /* fdiv dword ptr [0xbfd790] */
    MEMF(0xBFD79C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3260
 * Original: 0x003A3260 - 0x003A3273 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3260(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3260: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD798)); /* fdiv dword ptr [0xbfd798] */
    MEMF(0xBFD7A0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3280
 * Original: 0x003A3280 - 0x003A328B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3280(void)
{
    int _cf = 0; /* carry flag */

loc_003A3280: ;
    MEM32(0xBFD7A4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3290
 * Original: 0x003A3290 - 0x003A329B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3290(void)
{
    int _cf = 0; /* carry flag */

loc_003A3290: ;
    MEM32(0xBFD7AC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A32A0
 * Original: 0x003A32A0 - 0x003A32AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A32A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A32A0: ;
    MEM32(0xBFD7A8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}
