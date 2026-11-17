/**
 * Star Wars Battlefront 2 - Recompiled code chunk 66
 * Functions: 250 (0x0039F440 - 0x003A13E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0039F440
 * Original: 0x0039F440 - 0x0039F459 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F440(void)
{
    int _cf = 0; /* carry flag */

loc_0039F440: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF854C); /* divss */
    MEMF(0xBF8558) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F460
 * Original: 0x0039F460 - 0x0039F479 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F460(void)
{
    int _cf = 0; /* carry flag */

loc_0039F460: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8554); /* divss */
    MEMF(0xBF855C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F480
 * Original: 0x0039F480 - 0x0039F491 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F480(void)
{
    int _cf = 0; /* carry flag */

loc_0039F480: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8560) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F4A0
 * Original: 0x0039F4A0 - 0x0039F4B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F4A0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F4A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8568) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F4C0
 * Original: 0x0039F4C0 - 0x0039F4D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F4C0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F4C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8564) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F4E0
 * Original: 0x0039F4E0 - 0x0039F4F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F4E0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F4E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8560); /* divss */
    MEMF(0xBF856C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F500
 * Original: 0x0039F500 - 0x0039F519 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F500(void)
{
    int _cf = 0; /* carry flag */

loc_0039F500: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8568); /* divss */
    MEMF(0xBF85D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F520
 * Original: 0x0039F520 - 0x0039F566 (70 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039F520: ;
    SET_LO8(ecx, MEM8(0xBF8574));
    SET_LO8(edx, MEM8(0xBF858C));
    SET_LO8(eax, 0xFE);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0xBF8574) = LO8(ecx);
    SET_LO8(ecx, MEM8(0xBF85A4));
    MEM8(0xBF858C) = LO8(edx);
    SET_LO8(edx, MEM8(0xBF85BC));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x3ADE70);
    MEM8(0xBF85A4) = LO8(ecx);
    MEM8(0xBF85BC) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F564u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039F564: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039F570
 * Original: 0x0039F570 - 0x0039F581 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F570(void)
{
    int _cf = 0; /* carry flag */

loc_0039F570: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF85EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F590
 * Original: 0x0039F590 - 0x0039F5A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F590(void)
{
    int _cf = 0; /* carry flag */

loc_0039F590: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF85F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F5B0
 * Original: 0x0039F5B0 - 0x0039F5C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F5B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F5B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF85F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F5D0
 * Original: 0x0039F5D0 - 0x0039F5E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F5D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F5D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF85EC); /* divss */
    MEMF(0xBF85F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F5F0
 * Original: 0x0039F5F0 - 0x0039F609 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F5F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F5F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF85F4); /* divss */
    MEMF(0xBF85FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F610
 * Original: 0x0039F610 - 0x0039F621 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F610(void)
{
    int _cf = 0; /* carry flag */

loc_0039F610: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8600) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F630
 * Original: 0x0039F630 - 0x0039F641 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F630(void)
{
    int _cf = 0; /* carry flag */

loc_0039F630: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8608) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F650
 * Original: 0x0039F650 - 0x0039F661 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F650(void)
{
    int _cf = 0; /* carry flag */

loc_0039F650: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8604) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F670
 * Original: 0x0039F670 - 0x0039F689 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F670(void)
{
    int _cf = 0; /* carry flag */

loc_0039F670: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8600); /* divss */
    MEMF(0xBF860C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F690
 * Original: 0x0039F690 - 0x0039F6A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F690(void)
{
    int _cf = 0; /* carry flag */

loc_0039F690: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8608); /* divss */
    MEMF(0xBF8610) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F6B0
 * Original: 0x0039F6B0 - 0x0039F6BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039F6B0: ;
    PUSH32(esp, 0x3ADE80);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F6BAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039F6BA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039F6C0
 * Original: 0x0039F6C0 - 0x0039F6E2 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039F6C0: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3ADE90);
    MEM32(0x4D9568) = eax;
    MEM32(0x4D956C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F6E0u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039F6E0: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039F6F0
 * Original: 0x0039F6F0 - 0x0039F6FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039F6F0: ;
    PUSH32(esp, 0x3ADEA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F6FAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039F6FA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039F700
 * Original: 0x0039F700 - 0x0039F711 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F700(void)
{
    int _cf = 0; /* carry flag */

loc_0039F700: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8614) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F720
 * Original: 0x0039F720 - 0x0039F731 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F720(void)
{
    int _cf = 0; /* carry flag */

loc_0039F720: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF861C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F740
 * Original: 0x0039F740 - 0x0039F751 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F740(void)
{
    int _cf = 0; /* carry flag */

loc_0039F740: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8618) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F760
 * Original: 0x0039F760 - 0x0039F779 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F760(void)
{
    int _cf = 0; /* carry flag */

loc_0039F760: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8614); /* divss */
    MEMF(0xBF8620) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F780
 * Original: 0x0039F780 - 0x0039F799 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F780(void)
{
    int _cf = 0; /* carry flag */

loc_0039F780: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF861C); /* divss */
    MEMF(0xBF8624) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F7A0
 * Original: 0x0039F7A0 - 0x0039F7AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039F7A0: ;
    PUSH32(esp, 0x3ADEB0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F7AAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039F7AA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039F7B0
 * Original: 0x0039F7B0 - 0x0039F7DC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039F7B0: ;
    edx = 0x493630;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x46);
    /* nop */

loc_0039F7C0: ;
    ecx = SX8(LO8(ecx));
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 1));
    _fa = ((int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1000193) != (int64_t)(int32_t)((uint32_t)(eax) * (uint32_t)(0x1000193)));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1000193);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0039F7C0; /* jne: not equal / not zero */

loc_0039F7D6: ;
    MEM32(0xBF8628) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F7E0
 * Original: 0x0039F7E0 - 0x0039F7F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F7E0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F7E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF862C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F800
 * Original: 0x0039F800 - 0x0039F811 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F800(void)
{
    int _cf = 0; /* carry flag */

loc_0039F800: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8634) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F820
 * Original: 0x0039F820 - 0x0039F831 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F820(void)
{
    int _cf = 0; /* carry flag */

loc_0039F820: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8630) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F840
 * Original: 0x0039F840 - 0x0039F859 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F840(void)
{
    int _cf = 0; /* carry flag */

loc_0039F840: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF862C); /* divss */
    MEMF(0xBF8638) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F860
 * Original: 0x0039F860 - 0x0039F879 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F860(void)
{
    int _cf = 0; /* carry flag */

loc_0039F860: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8634); /* divss */
    MEMF(0xBF863C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F880
 * Original: 0x0039F880 - 0x0039F891 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F880(void)
{
    int _cf = 0; /* carry flag */

loc_0039F880: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8640) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F8A0
 * Original: 0x0039F8A0 - 0x0039F8B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F8A0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F8A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8648) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F8C0
 * Original: 0x0039F8C0 - 0x0039F8D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F8C0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F8C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8644) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F8E0
 * Original: 0x0039F8E0 - 0x0039F8F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F8E0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F8E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8640); /* divss */
    MEMF(0xBF864C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F900
 * Original: 0x0039F900 - 0x0039F919 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F900(void)
{
    int _cf = 0; /* carry flag */

loc_0039F900: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8648); /* divss */
    MEMF(0xBF8650) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F920
 * Original: 0x0039F920 - 0x0039F931 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F920(void)
{
    int _cf = 0; /* carry flag */

loc_0039F920: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8654) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F940
 * Original: 0x0039F940 - 0x0039F951 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F940(void)
{
    int _cf = 0; /* carry flag */

loc_0039F940: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF865C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F960
 * Original: 0x0039F960 - 0x0039F971 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F960(void)
{
    int _cf = 0; /* carry flag */

loc_0039F960: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8658) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F980
 * Original: 0x0039F980 - 0x0039F999 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F980(void)
{
    int _cf = 0; /* carry flag */

loc_0039F980: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8654); /* divss */
    MEMF(0xBF8660) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F9A0
 * Original: 0x0039F9A0 - 0x0039F9B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F9A0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F9A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF865C); /* divss */
    MEMF(0xBF8664) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F9C0
 * Original: 0x0039F9C0 - 0x0039F9CC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039F9C0: ;
    PUSH32(esp, 0x3ADEC0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F9CAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039F9CA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039F9D0
 * Original: 0x0039F9D0 - 0x0039F9E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F9D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F9D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8668) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F9F0
 * Original: 0x0039F9F0 - 0x0039FA01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F9F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F9F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8670) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FA10
 * Original: 0x0039FA10 - 0x0039FA21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FA10(void)
{
    int _cf = 0; /* carry flag */

loc_0039FA10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF866C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FA30
 * Original: 0x0039FA30 - 0x0039FA49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FA30(void)
{
    int _cf = 0; /* carry flag */

loc_0039FA30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8668); /* divss */
    MEMF(0xBF8674) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FA50
 * Original: 0x0039FA50 - 0x0039FA69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FA50(void)
{
    int _cf = 0; /* carry flag */

loc_0039FA50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8670); /* divss */
    MEMF(0xBF8678) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FA70
 * Original: 0x0039FA70 - 0x0039FA92 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039FA70: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3ADED0);
    MEM32(0x4D95D4) = eax;
    MEM32(0x4D95D8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FA90u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039FA90: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039FAA0
 * Original: 0x0039FAA0 - 0x0039FACC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039FAA0: ;
    edx = 0x49364C;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x46);
    /* nop */

loc_0039FAB0: ;
    ecx = SX8(LO8(ecx));
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 1));
    _fa = ((int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1000193) != (int64_t)(int32_t)((uint32_t)(eax) * (uint32_t)(0x1000193)));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1000193);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0039FAB0; /* jne: not equal / not zero */

loc_0039FAC6: ;
    MEM32(0xBF867C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FAD0
 * Original: 0x0039FAD0 - 0x0039FAE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FAD0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FAD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8680) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FAF0
 * Original: 0x0039FAF0 - 0x0039FB01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FAF0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FAF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8688) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FB10
 * Original: 0x0039FB10 - 0x0039FB21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FB10(void)
{
    int _cf = 0; /* carry flag */

loc_0039FB10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8684) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FB30
 * Original: 0x0039FB30 - 0x0039FB49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FB30(void)
{
    int _cf = 0; /* carry flag */

loc_0039FB30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8680); /* divss */
    MEMF(0xBF868C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FB50
 * Original: 0x0039FB50 - 0x0039FB69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FB50(void)
{
    int _cf = 0; /* carry flag */

loc_0039FB50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8688); /* divss */
    MEMF(0xBF8690) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FB70
 * Original: 0x0039FB70 - 0x0039FB7C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039FB70: ;
    PUSH32(esp, 0x3ADEE0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FB7Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039FB7A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039FB80
 * Original: 0x0039FB80 - 0x0039FB91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FB80(void)
{
    int _cf = 0; /* carry flag */

loc_0039FB80: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8694) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FBA0
 * Original: 0x0039FBA0 - 0x0039FBB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FBA0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FBA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF869C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FBC0
 * Original: 0x0039FBC0 - 0x0039FBD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FBC0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FBC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8698) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FBE0
 * Original: 0x0039FBE0 - 0x0039FBF9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FBE0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FBE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8694); /* divss */
    MEMF(0xBF86A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FC00
 * Original: 0x0039FC00 - 0x0039FC19 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FC00(void)
{
    int _cf = 0; /* carry flag */

loc_0039FC00: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF869C); /* divss */
    MEMF(0xBF86A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FC20
 * Original: 0x0039FC20 - 0x0039FC42 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039FC20: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3ADEF0);
    MEM32(0x4D9634) = eax;
    MEM32(0x4D9638) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FC40u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039FC40: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039FC50
 * Original: 0x0039FC50 - 0x0039FC7C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039FC50: ;
    edx = 0x493684;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x46);
    /* nop */

loc_0039FC60: ;
    ecx = SX8(LO8(ecx));
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 1));
    _fa = ((int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1000193) != (int64_t)(int32_t)((uint32_t)(eax) * (uint32_t)(0x1000193)));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1000193);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0039FC60; /* jne: not equal / not zero */

loc_0039FC76: ;
    MEM32(0xBF86A8) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FC80
 * Original: 0x0039FC80 - 0x0039FC91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FC80(void)
{
    int _cf = 0; /* carry flag */

loc_0039FC80: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF86AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FCA0
 * Original: 0x0039FCA0 - 0x0039FCB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FCA0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FCA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF86B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FCC0
 * Original: 0x0039FCC0 - 0x0039FCD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FCC0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FCC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF86B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FCE0
 * Original: 0x0039FCE0 - 0x0039FCF9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FCE0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FCE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF86AC); /* divss */
    MEMF(0xBF86B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FD00
 * Original: 0x0039FD00 - 0x0039FD19 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FD00(void)
{
    int _cf = 0; /* carry flag */

loc_0039FD00: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF86B4); /* divss */
    MEMF(0xBF86BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FD20
 * Original: 0x0039FD20 - 0x0039FD42 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039FD20: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3ADF00);
    MEM32(0x4D9650) = eax;
    MEM32(0x4D9654) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FD40u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039FD40: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039FD50
 * Original: 0x0039FD50 - 0x0039FD7C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039FD50: ;
    edx = 0x4936B4;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x46);
    /* nop */

loc_0039FD60: ;
    ecx = SX8(LO8(ecx));
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx + 1));
    _fa = ((int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1000193) != (int64_t)(int32_t)((uint32_t)(eax) * (uint32_t)(0x1000193)));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1000193);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0039FD60; /* jne: not equal / not zero */

loc_0039FD76: ;
    MEM32(0xBF86C0) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FD80
 * Original: 0x0039FD80 - 0x0039FD91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FD80(void)
{
    int _cf = 0; /* carry flag */

loc_0039FD80: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF86C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FDA0
 * Original: 0x0039FDA0 - 0x0039FDB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FDA0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FDA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF86CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FDC0
 * Original: 0x0039FDC0 - 0x0039FDD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FDC0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FDC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF86C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FDE0
 * Original: 0x0039FDE0 - 0x0039FDF9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FDE0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FDE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF86C4); /* divss */
    MEMF(0xBF86D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FE00
 * Original: 0x0039FE00 - 0x0039FE19 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FE00(void)
{
    int _cf = 0; /* carry flag */

loc_0039FE00: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF86CC); /* divss */
    MEMF(0xBF86D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FE20
 * Original: 0x0039FE20 - 0x0039FE31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FE20(void)
{
    int _cf = 0; /* carry flag */

loc_0039FE20: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF86D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FE40
 * Original: 0x0039FE40 - 0x0039FE51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FE40(void)
{
    int _cf = 0; /* carry flag */

loc_0039FE40: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF86E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FE60
 * Original: 0x0039FE60 - 0x0039FE71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FE60(void)
{
    int _cf = 0; /* carry flag */

loc_0039FE60: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF86DC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FE80
 * Original: 0x0039FE80 - 0x0039FE99 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FE80(void)
{
    int _cf = 0; /* carry flag */

loc_0039FE80: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF86D8); /* divss */
    MEMF(0xBF86E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FEA0
 * Original: 0x0039FEA0 - 0x0039FEB9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FEA0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FEA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF86E0); /* divss */
    MEMF(0xBF86E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FEC0
 * Original: 0x0039FEC0 - 0x0039FED1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FEC0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FEC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF86EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FEE0
 * Original: 0x0039FEE0 - 0x0039FEF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FEE0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FEE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF86F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FF00
 * Original: 0x0039FF00 - 0x0039FF11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FF00(void)
{
    int _cf = 0; /* carry flag */

loc_0039FF00: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF86F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FF20
 * Original: 0x0039FF20 - 0x0039FF39 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FF20(void)
{
    int _cf = 0; /* carry flag */

loc_0039FF20: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF86EC); /* divss */
    MEMF(0xBF86F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FF40
 * Original: 0x0039FF40 - 0x0039FF59 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FF40(void)
{
    int _cf = 0; /* carry flag */

loc_0039FF40: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF86F4); /* divss */
    MEMF(0xBF86FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FF60
 * Original: 0x0039FF60 - 0x0039FFB7 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039FF60: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x49375C);
    PUSH32(esp, 0x4D9730);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FF71u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_0039FF71: ;
    MEM8(0x4D974F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FF7Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039FF7D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4D9720;
    MEM32(0x4D9720) = eax;
    MEM32(0x4D9724) = eax;
    MEM32(0x4D972C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4D9728) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4D9728);
    PUSH32(esp, 0x3ADF10);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039FFB3u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_0039FFB3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039FFC0
 * Original: 0x0039FFC0 - 0x0039FFD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FFC0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FFC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF900C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039FFE0
 * Original: 0x0039FFE0 - 0x0039FFF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039FFE0(void)
{
    int _cf = 0; /* carry flag */

loc_0039FFE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9014) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0000
 * Original: 0x003A0000 - 0x003A0011 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0000(void)
{
    int _cf = 0; /* carry flag */

loc_003A0000: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9010) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0008
 * Original: 0x003A0008 - 0x003A0011 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0008(void)
{
    int _cf = 0; /* carry flag */

loc_003A0008: ;
    MEMF(0xBF9010) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0020
 * Original: 0x003A0020 - 0x003A0039 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0020(void)
{
    int _cf = 0; /* carry flag */

loc_003A0020: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF900C); /* divss */
    MEMF(0xBF9018) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0040
 * Original: 0x003A0040 - 0x003A0059 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0040(void)
{
    int _cf = 0; /* carry flag */

loc_003A0040: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9014); /* divss */
    MEMF(0xBF901C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0060
 * Original: 0x003A0060 - 0x003A006C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A0060: ;
    PUSH32(esp, 0x3ADF20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A006Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A006A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A006B
 * Original: 0x003A006B - 0x003A006C (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A006B(void)
{
    int _cf = 0; /* carry flag */

loc_003A006B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003A0070
 * Original: 0x003A0070 - 0x003A00C7 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A0070: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x493780);
    PUSH32(esp, 0x4D97D8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0081u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_003A0081: ;
    MEM8(0x4D97F7) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A008Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_003A008D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4D97C8;
    MEM32(0x4D97C8) = eax;
    MEM32(0x4D97CC) = eax;
    MEM32(0x4D97D4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4D97D0) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4D97D0);
    PUSH32(esp, 0x3ADF40);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A00C3u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A00C3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A00D0
 * Original: 0x003A00D0 - 0x003A00E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A00D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A00D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9024) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A00F0
 * Original: 0x003A00F0 - 0x003A0101 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A00F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A00F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF902C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0100
 * Original: 0x003A0100 - 0x003A0101 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0100(void)
{
    int _cf = 0; /* carry flag */

loc_003A0100: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003A0110
 * Original: 0x003A0110 - 0x003A0121 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0110(void)
{
    int _cf = 0; /* carry flag */

loc_003A0110: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9028) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0130
 * Original: 0x003A0130 - 0x003A0149 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0130(void)
{
    int _cf = 0; /* carry flag */

loc_003A0130: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9024); /* divss */
    MEMF(0xBF9030) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0150
 * Original: 0x003A0150 - 0x003A0169 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0150(void)
{
    int _cf = 0; /* carry flag */

loc_003A0150: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF902C); /* divss */
    MEMF(0xBF9034) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0170
 * Original: 0x003A0170 - 0x003A0181 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0170(void)
{
    int _cf = 0; /* carry flag */

loc_003A0170: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    MEMF(0xBF9040) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0190
 * Original: 0x003A0190 - 0x003A01A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0190(void)
{
    int _cf = 0; /* carry flag */

loc_003A0190: ;
    xmm0 = XMM_SCALAR(MEMF(0x497CA4)); /* movss */
    MEMF(0xBF9020) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A01B0
 * Original: 0x003A01B0 - 0x003A01C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A01B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A01B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498044)); /* movss */
    MEMF(0xBF9038) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A01D0
 * Original: 0x003A01D0 - 0x003A01E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A01D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A01D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9038); /* divss */
    MEMF(0xBF903C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A01F0
 * Original: 0x003A01F0 - 0x003A0201 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A01F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A01F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9044) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0200
 * Original: 0x003A0200 - 0x003A0201 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0200(void)
{
    int _cf = 0; /* carry flag */

loc_003A0200: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003A0210
 * Original: 0x003A0210 - 0x003A0221 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0210(void)
{
    int _cf = 0; /* carry flag */

loc_003A0210: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF904C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0230
 * Original: 0x003A0230 - 0x003A0241 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0230(void)
{
    int _cf = 0; /* carry flag */

loc_003A0230: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9048) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0250
 * Original: 0x003A0250 - 0x003A0269 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0250(void)
{
    int _cf = 0; /* carry flag */

loc_003A0250: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9044); /* divss */
    MEMF(0xBF9050) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0270
 * Original: 0x003A0270 - 0x003A0289 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0270(void)
{
    int _cf = 0; /* carry flag */

loc_003A0270: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF904C); /* divss */
    MEMF(0xBF9054) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0290
 * Original: 0x003A0290 - 0x003A02A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0290(void)
{
    int _cf = 0; /* carry flag */

loc_003A0290: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9058) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A02B0
 * Original: 0x003A02B0 - 0x003A02C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A02B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A02B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9060) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A02D0
 * Original: 0x003A02D0 - 0x003A02E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A02D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A02D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF905C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A02F0
 * Original: 0x003A02F0 - 0x003A0309 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A02F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A02F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9058); /* divss */
    MEMF(0xBF9064) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0300
 * Original: 0x003A0300 - 0x003A0309 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0300(void)
{
    int _cf = 0; /* carry flag */

loc_003A0300: ;
    MEMF(0xBF9064) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0310
 * Original: 0x003A0310 - 0x003A0329 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0310(void)
{
    int _cf = 0; /* carry flag */

loc_003A0310: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9060); /* divss */
    MEMF(0xBF9068) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0330
 * Original: 0x003A0330 - 0x003A0341 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0330(void)
{
    int _cf = 0; /* carry flag */

loc_003A0330: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9080) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0350
 * Original: 0x003A0350 - 0x003A0361 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0350(void)
{
    int _cf = 0; /* carry flag */

loc_003A0350: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9088) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0370
 * Original: 0x003A0370 - 0x003A0381 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0370(void)
{
    int _cf = 0; /* carry flag */

loc_003A0370: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9084) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0390
 * Original: 0x003A0390 - 0x003A03A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0390(void)
{
    int _cf = 0; /* carry flag */

loc_003A0390: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9080); /* divss */
    MEMF(0xBF908C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A03B0
 * Original: 0x003A03B0 - 0x003A03C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A03B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A03B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9088); /* divss */
    MEMF(0xBF9090) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A03D0
 * Original: 0x003A03D0 - 0x003A03E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A03D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A03D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9094) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A03F0
 * Original: 0x003A03F0 - 0x003A0401 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A03F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A03F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF909C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0400
 * Original: 0x003A0400 - 0x003A0401 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0400(void)
{
    int _cf = 0; /* carry flag */

loc_003A0400: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003A0410
 * Original: 0x003A0410 - 0x003A0421 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0410(void)
{
    int _cf = 0; /* carry flag */

loc_003A0410: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9098) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0430
 * Original: 0x003A0430 - 0x003A0449 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0430(void)
{
    int _cf = 0; /* carry flag */

loc_003A0430: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9094); /* divss */
    MEMF(0xBF90A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0450
 * Original: 0x003A0450 - 0x003A0469 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0450(void)
{
    int _cf = 0; /* carry flag */

loc_003A0450: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF909C); /* divss */
    MEMF(0xBF90A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0470
 * Original: 0x003A0470 - 0x003A0481 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0470(void)
{
    int _cf = 0; /* carry flag */

loc_003A0470: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF90B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0490
 * Original: 0x003A0490 - 0x003A04A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0490(void)
{
    int _cf = 0; /* carry flag */

loc_003A0490: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF90BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A04B0
 * Original: 0x003A04B0 - 0x003A04C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A04B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A04B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF90B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A04D0
 * Original: 0x003A04D0 - 0x003A04E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A04D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A04D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF90B4); /* divss */
    MEMF(0xBF90C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A04F0
 * Original: 0x003A04F0 - 0x003A0509 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A04F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A04F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF90BC); /* divss */
    MEMF(0xBF90C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0510
 * Original: 0x003A0510 - 0x003A0521 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0510(void)
{
    int _cf = 0; /* carry flag */

loc_003A0510: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBF90CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0530
 * Original: 0x003A0530 - 0x003A0541 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0530(void)
{
    int _cf = 0; /* carry flag */

loc_003A0530: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBF90AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0550
 * Original: 0x003A0550 - 0x003A0569 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0550(void)
{
    int _cf = 0; /* carry flag */

loc_003A0550: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF90AC); /* divss */
    MEMF(0xBF90A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0570
 * Original: 0x003A0570 - 0x003A058D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0570(void)
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

loc_003A0570: ;
    fp_push(MEMF(0xBF90AC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0587u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A0587: ;
    MEM32(0xBF90C8) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A0590
 * Original: 0x003A0590 - 0x003A05AD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0590(void)
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

loc_003A0590: ;
    fp_push(MEMF(0xBF90AC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A05A7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A05A7: ;
    MEM32(0xBF90B0) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A05B0
 * Original: 0x003A05B0 - 0x003A0607 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A05B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A05B0: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x4939D0);
    PUSH32(esp, 0x4D99B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A05C1u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_003A05C1: ;
    MEM8(0x4D99CF) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A05CDu); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_003A05CD: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4D99A0;
    MEM32(0x4D99A0) = eax;
    MEM32(0x4D99A4) = eax;
    MEM32(0x4D99AC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4D99A8) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4D99A8);
    PUSH32(esp, 0x3ADF50);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0603u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A0603: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A0610
 * Original: 0x003A0610 - 0x003A0621 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0610(void)
{
    int _cf = 0; /* carry flag */

loc_003A0610: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF90D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0630
 * Original: 0x003A0630 - 0x003A0641 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0630(void)
{
    int _cf = 0; /* carry flag */

loc_003A0630: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF90D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0650
 * Original: 0x003A0650 - 0x003A0661 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0650(void)
{
    int _cf = 0; /* carry flag */

loc_003A0650: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF90D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0670
 * Original: 0x003A0670 - 0x003A0689 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0670(void)
{
    int _cf = 0; /* carry flag */

loc_003A0670: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF90D0); /* divss */
    MEMF(0xBF90DC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0690
 * Original: 0x003A0690 - 0x003A06A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0690(void)
{
    int _cf = 0; /* carry flag */

loc_003A0690: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF90D8); /* divss */
    MEMF(0xBF90E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A06B0
 * Original: 0x003A06B0 - 0x003A06C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A06B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A06B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF90E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A06D0
 * Original: 0x003A06D0 - 0x003A06E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A06D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A06D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF90EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A06F0
 * Original: 0x003A06F0 - 0x003A0701 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A06F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A06F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF90E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0710
 * Original: 0x003A0710 - 0x003A0729 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0710(void)
{
    int _cf = 0; /* carry flag */

loc_003A0710: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF90E4); /* divss */
    MEMF(0xBF90F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0730
 * Original: 0x003A0730 - 0x003A0749 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0730(void)
{
    int _cf = 0; /* carry flag */

loc_003A0730: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF90EC); /* divss */
    MEMF(0xBF90F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0750
 * Original: 0x003A0750 - 0x003A0761 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0750(void)
{
    int _cf = 0; /* carry flag */

loc_003A0750: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF90F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0770
 * Original: 0x003A0770 - 0x003A0781 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0770(void)
{
    int _cf = 0; /* carry flag */

loc_003A0770: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9100) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0790
 * Original: 0x003A0790 - 0x003A07A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0790(void)
{
    int _cf = 0; /* carry flag */

loc_003A0790: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF90FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A07B0
 * Original: 0x003A07B0 - 0x003A07C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A07B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A07B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF90F8); /* divss */
    MEMF(0xBF9104) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A07D0
 * Original: 0x003A07D0 - 0x003A07E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A07D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A07D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9100); /* divss */
    MEMF(0xBF9108) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A07F0
 * Original: 0x003A07F0 - 0x003A0801 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A07F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A07F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF910C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0810
 * Original: 0x003A0810 - 0x003A0821 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0810(void)
{
    int _cf = 0; /* carry flag */

loc_003A0810: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9114) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0830
 * Original: 0x003A0830 - 0x003A0841 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0830(void)
{
    int _cf = 0; /* carry flag */

loc_003A0830: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9110) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0850
 * Original: 0x003A0850 - 0x003A0869 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0850(void)
{
    int _cf = 0; /* carry flag */

loc_003A0850: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF910C); /* divss */
    MEMF(0xBF9118) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0870
 * Original: 0x003A0870 - 0x003A0889 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0870(void)
{
    int _cf = 0; /* carry flag */

loc_003A0870: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9114); /* divss */
    MEMF(0xBF911C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0890
 * Original: 0x003A0890 - 0x003A08A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0890(void)
{
    int _cf = 0; /* carry flag */

loc_003A0890: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9120) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A08B0
 * Original: 0x003A08B0 - 0x003A08C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A08B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A08B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9128) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A08D0
 * Original: 0x003A08D0 - 0x003A08E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A08D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A08D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9124) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A08F0
 * Original: 0x003A08F0 - 0x003A0909 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A08F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A08F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9120); /* divss */
    MEMF(0xBF912C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0910
 * Original: 0x003A0910 - 0x003A0929 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0910(void)
{
    int _cf = 0; /* carry flag */

loc_003A0910: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9128); /* divss */
    MEMF(0xBF9130) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0930
 * Original: 0x003A0930 - 0x003A0941 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0930(void)
{
    int _cf = 0; /* carry flag */

loc_003A0930: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9134) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0950
 * Original: 0x003A0950 - 0x003A0961 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0950(void)
{
    int _cf = 0; /* carry flag */

loc_003A0950: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF913C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0970
 * Original: 0x003A0970 - 0x003A0981 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0970(void)
{
    int _cf = 0; /* carry flag */

loc_003A0970: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9138) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0990
 * Original: 0x003A0990 - 0x003A09A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0990(void)
{
    int _cf = 0; /* carry flag */

loc_003A0990: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9134); /* divss */
    MEMF(0xBF9140) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A09B0
 * Original: 0x003A09B0 - 0x003A09C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A09B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A09B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF913C); /* divss */
    MEMF(0xBF9144) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A09D0
 * Original: 0x003A09D0 - 0x003A09E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A09D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A09D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9148) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A09F0
 * Original: 0x003A09F0 - 0x003A0A01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A09F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A09F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9150) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0A10
 * Original: 0x003A0A10 - 0x003A0A21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0A10(void)
{
    int _cf = 0; /* carry flag */

loc_003A0A10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF914C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0A30
 * Original: 0x003A0A30 - 0x003A0A49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0A30(void)
{
    int _cf = 0; /* carry flag */

loc_003A0A30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9148); /* divss */
    MEMF(0xBF9154) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0A50
 * Original: 0x003A0A50 - 0x003A0A69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0A50(void)
{
    int _cf = 0; /* carry flag */

loc_003A0A50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9150); /* divss */
    MEMF(0xBF9158) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0A70
 * Original: 0x003A0A70 - 0x003A0A81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0A70(void)
{
    int _cf = 0; /* carry flag */

loc_003A0A70: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF915C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0A90
 * Original: 0x003A0A90 - 0x003A0AA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0A90(void)
{
    int _cf = 0; /* carry flag */

loc_003A0A90: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9164) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0AB0
 * Original: 0x003A0AB0 - 0x003A0AC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0AB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0AB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9160) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0AD0
 * Original: 0x003A0AD0 - 0x003A0AE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0AD0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0AD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF915C); /* divss */
    MEMF(0xBF9168) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0AF0
 * Original: 0x003A0AF0 - 0x003A0B09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0AF0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0AF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9164); /* divss */
    MEMF(0xBF916C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0B10
 * Original: 0x003A0B10 - 0x003A0B67 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A0B10: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x493C1C);
    PUSH32(esp, 0x4D9C00);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0B21u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_003A0B21: ;
    MEM8(0x4D9C1F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0B2Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_003A0B2D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4D9BF0;
    MEM32(0x4D9BF0) = eax;
    MEM32(0x4D9BF4) = eax;
    MEM32(0x4D9BFC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4D9BF8) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4D9BF8);
    PUSH32(esp, 0x3ADF60);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0B63u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A0B63: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A0B70
 * Original: 0x003A0B70 - 0x003A0B81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0B70(void)
{
    int _cf = 0; /* carry flag */

loc_003A0B70: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9170) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0B90
 * Original: 0x003A0B90 - 0x003A0BA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0B90(void)
{
    int _cf = 0; /* carry flag */

loc_003A0B90: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9178) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0BB0
 * Original: 0x003A0BB0 - 0x003A0BC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0BB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0BB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9174) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0BD0
 * Original: 0x003A0BD0 - 0x003A0BE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0BD0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0BD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9170); /* divss */
    MEMF(0xBF917C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0BF0
 * Original: 0x003A0BF0 - 0x003A0C09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0BF0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0BF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9178); /* divss */
    MEMF(0xBF9180) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0C10
 * Original: 0x003A0C10 - 0x003A0C1C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A0C10: ;
    PUSH32(esp, 0x3ADF70);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A0C1Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A0C1A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A0C20
 * Original: 0x003A0C20 - 0x003A0C31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0C20(void)
{
    int _cf = 0; /* carry flag */

loc_003A0C20: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9184) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0C40
 * Original: 0x003A0C40 - 0x003A0C51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0C40(void)
{
    int _cf = 0; /* carry flag */

loc_003A0C40: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF918C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0C60
 * Original: 0x003A0C60 - 0x003A0C71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0C60(void)
{
    int _cf = 0; /* carry flag */

loc_003A0C60: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9188) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0C80
 * Original: 0x003A0C80 - 0x003A0C99 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0C80(void)
{
    int _cf = 0; /* carry flag */

loc_003A0C80: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9184); /* divss */
    MEMF(0xBF9190) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0CA0
 * Original: 0x003A0CA0 - 0x003A0CB9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0CA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0CA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF918C); /* divss */
    MEMF(0xBF9194) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0CC0
 * Original: 0x003A0CC0 - 0x003A0CD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0CC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0CC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9198) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0CE0
 * Original: 0x003A0CE0 - 0x003A0CF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0CE0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0CE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF91A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0D00
 * Original: 0x003A0D00 - 0x003A0D11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0D00(void)
{
    int _cf = 0; /* carry flag */

loc_003A0D00: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF919C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0D20
 * Original: 0x003A0D20 - 0x003A0D39 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0D20(void)
{
    int _cf = 0; /* carry flag */

loc_003A0D20: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9198); /* divss */
    MEMF(0xBF91A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0D40
 * Original: 0x003A0D40 - 0x003A0D59 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0D40(void)
{
    int _cf = 0; /* carry flag */

loc_003A0D40: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF91A0); /* divss */
    MEMF(0xBF91A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0D60
 * Original: 0x003A0D60 - 0x003A0D71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0D60(void)
{
    int _cf = 0; /* carry flag */

loc_003A0D60: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF91AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0D80
 * Original: 0x003A0D80 - 0x003A0D91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0D80(void)
{
    int _cf = 0; /* carry flag */

loc_003A0D80: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF91B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0DA0
 * Original: 0x003A0DA0 - 0x003A0DB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0DA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0DA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF91B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0DC0
 * Original: 0x003A0DC0 - 0x003A0DD9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0DC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0DC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF91AC); /* divss */
    MEMF(0xBF91B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0DE0
 * Original: 0x003A0DE0 - 0x003A0DF9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0DE0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0DE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF91B4); /* divss */
    MEMF(0xBF91BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0E00
 * Original: 0x003A0E00 - 0x003A0E11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0E00(void)
{
    int _cf = 0; /* carry flag */

loc_003A0E00: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF91C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0E20
 * Original: 0x003A0E20 - 0x003A0E31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0E20(void)
{
    int _cf = 0; /* carry flag */

loc_003A0E20: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF91C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0E40
 * Original: 0x003A0E40 - 0x003A0E51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0E40(void)
{
    int _cf = 0; /* carry flag */

loc_003A0E40: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF91C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0E60
 * Original: 0x003A0E60 - 0x003A0E79 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0E60(void)
{
    int _cf = 0; /* carry flag */

loc_003A0E60: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF91C0); /* divss */
    MEMF(0xBF91CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0E80
 * Original: 0x003A0E80 - 0x003A0E99 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0E80(void)
{
    int _cf = 0; /* carry flag */

loc_003A0E80: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF91C8); /* divss */
    MEMF(0xBF91D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0EA0
 * Original: 0x003A0EA0 - 0x003A0EB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0EA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0EA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF91D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0EC0
 * Original: 0x003A0EC0 - 0x003A0ED1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0EC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0EC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF91DC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0EE0
 * Original: 0x003A0EE0 - 0x003A0EF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0EE0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0EE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF91D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0F00
 * Original: 0x003A0F00 - 0x003A0F19 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0F00(void)
{
    int _cf = 0; /* carry flag */

loc_003A0F00: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF91D4); /* divss */
    MEMF(0xBF91E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0F20
 * Original: 0x003A0F20 - 0x003A0F39 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0F20(void)
{
    int _cf = 0; /* carry flag */

loc_003A0F20: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF91DC); /* divss */
    MEMF(0xBF91E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0F40
 * Original: 0x003A0F40 - 0x003A0F51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0F40(void)
{
    int _cf = 0; /* carry flag */

loc_003A0F40: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF91E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0F60
 * Original: 0x003A0F60 - 0x003A0F71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0F60(void)
{
    int _cf = 0; /* carry flag */

loc_003A0F60: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF91F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0F80
 * Original: 0x003A0F80 - 0x003A0F91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0F80(void)
{
    int _cf = 0; /* carry flag */

loc_003A0F80: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF91EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0FA0
 * Original: 0x003A0FA0 - 0x003A0FB9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0FA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0FA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF91E8); /* divss */
    MEMF(0xBF91F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0FC0
 * Original: 0x003A0FC0 - 0x003A0FD9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0FC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0FC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF91F0); /* divss */
    MEMF(0xBF91F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A0FE0
 * Original: 0x003A0FE0 - 0x003A0FF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A0FE0(void)
{
    int _cf = 0; /* carry flag */

loc_003A0FE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF91FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1000
 * Original: 0x003A1000 - 0x003A1011 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1000(void)
{
    int _cf = 0; /* carry flag */

loc_003A1000: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9204) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1020
 * Original: 0x003A1020 - 0x003A1031 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1020(void)
{
    int _cf = 0; /* carry flag */

loc_003A1020: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9200) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1040
 * Original: 0x003A1040 - 0x003A1059 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1040(void)
{
    int _cf = 0; /* carry flag */

loc_003A1040: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF91FC); /* divss */
    MEMF(0xBF9208) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1060
 * Original: 0x003A1060 - 0x003A1079 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1060(void)
{
    int _cf = 0; /* carry flag */

loc_003A1060: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9204); /* divss */
    MEMF(0xBF920C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1080
 * Original: 0x003A1080 - 0x003A1091 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1080(void)
{
    int _cf = 0; /* carry flag */

loc_003A1080: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9210) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A10A0
 * Original: 0x003A10A0 - 0x003A10B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A10A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A10A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9218) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A10C0
 * Original: 0x003A10C0 - 0x003A10D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A10C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A10C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9214) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A10E0
 * Original: 0x003A10E0 - 0x003A10F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A10E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A10E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9210); /* divss */
    MEMF(0xBF921C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1100
 * Original: 0x003A1100 - 0x003A1119 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1100(void)
{
    int _cf = 0; /* carry flag */

loc_003A1100: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9218); /* divss */
    MEMF(0xBF9220) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1120
 * Original: 0x003A1120 - 0x003A1131 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1120(void)
{
    int _cf = 0; /* carry flag */

loc_003A1120: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9224) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1140
 * Original: 0x003A1140 - 0x003A1151 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1140(void)
{
    int _cf = 0; /* carry flag */

loc_003A1140: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF922C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1160
 * Original: 0x003A1160 - 0x003A1171 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1160(void)
{
    int _cf = 0; /* carry flag */

loc_003A1160: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9228) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1180
 * Original: 0x003A1180 - 0x003A1199 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1180(void)
{
    int _cf = 0; /* carry flag */

loc_003A1180: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9224); /* divss */
    MEMF(0xBF9230) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A11A0
 * Original: 0x003A11A0 - 0x003A11B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A11A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A11A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF922C); /* divss */
    MEMF(0xBF9234) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A11C0
 * Original: 0x003A11C0 - 0x003A11D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A11C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A11C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9238) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A11E0
 * Original: 0x003A11E0 - 0x003A11F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A11E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A11E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF9240) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1200
 * Original: 0x003A1200 - 0x003A1211 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1200(void)
{
    int _cf = 0; /* carry flag */

loc_003A1200: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF923C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1220
 * Original: 0x003A1220 - 0x003A1239 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1220(void)
{
    int _cf = 0; /* carry flag */

loc_003A1220: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9238); /* divss */
    MEMF(0xBF9244) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1240
 * Original: 0x003A1240 - 0x003A1259 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1240(void)
{
    int _cf = 0; /* carry flag */

loc_003A1240: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9240); /* divss */
    MEMF(0xBF9248) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1260
 * Original: 0x003A1260 - 0x003A1271 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1260(void)
{
    int _cf = 0; /* carry flag */

loc_003A1260: ;
    xmm0 = XMM_SCALAR(MEMF(0x498244)); /* movss */
    MEMF(0xBF9250) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1280
 * Original: 0x003A1280 - 0x003A12A0 (32 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1280(void)
{
    int _cf = 0; /* carry flag */

loc_003A1280: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(0xBF9250); /* subss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(0xBF924C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A12A0
 * Original: 0x003A12A0 - 0x003A12C0 (32 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A12A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A12A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF9254) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A12C0
 * Original: 0x003A12C0 - 0x003A12D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A12C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A12C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF925C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A12E0
 * Original: 0x003A12E0 - 0x003A12F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A12E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A12E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF9258) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1300
 * Original: 0x003A1300 - 0x003A1319 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1300(void)
{
    int _cf = 0; /* carry flag */

loc_003A1300: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF9254); /* divss */
    MEMF(0xBF9260) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1320
 * Original: 0x003A1320 - 0x003A1339 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1320(void)
{
    int _cf = 0; /* carry flag */

loc_003A1320: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF925C); /* divss */
    MEMF(0xBF9264) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1340
 * Original: 0x003A1340 - 0x003A1351 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1340(void)
{
    int _cf = 0; /* carry flag */

loc_003A1340: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF92B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1360
 * Original: 0x003A1360 - 0x003A1371 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1360(void)
{
    int _cf = 0; /* carry flag */

loc_003A1360: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF92B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A1380
 * Original: 0x003A1380 - 0x003A1391 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A1380(void)
{
    int _cf = 0; /* carry flag */

loc_003A1380: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF92B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A13A0
 * Original: 0x003A13A0 - 0x003A13B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A13A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A13A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF92B0); /* divss */
    MEMF(0xBF92BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A13C0
 * Original: 0x003A13C0 - 0x003A13D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A13C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A13C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF92B8); /* divss */
    MEMF(0xBF92C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003A13E0
 * Original: 0x003A13E0 - 0x003A13F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A13E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A13E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498244)); /* movss */
    MEMF(0xBF944C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}
