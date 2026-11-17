/**
 * Star Wars Battlefront 2 - Recompiled code chunk 73
 * Functions: 250 (0x003AC990 - 0x003AEF80)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003AC990
 * Original: 0x003AC990 - 0x003AC99B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AC990(void)
{
    int _cf = 0; /* carry flag */

loc_003AC990: ;
    MEM32(0x4B18D0) = 0x489DC8;
    esp += 4; return; /* ret */

}

/**
 * sub_003AC9A0
 * Original: 0x003AC9A0 - 0x003AC9BE (30 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AC9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AC9A0: ;
    MEM32(0xBA3660) = 0x4960E8;
    MEM32(0xBA3684) = 0x4960D8;
    ecx = 0xBA3660;
    g_seh_ebp = ebp; sub_002E5D60(); return; /* tail jmp 0x002E5D60 */

}

/**
 * sub_003AC9C0
 * Original: 0x003AC9C0 - 0x003AC9CD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AC9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AC9C0: ;
    PUSH32(esp, esi);
    esi = 0x4B1BE0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AC9CBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AC9CB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AC9D0
 * Original: 0x003AC9D0 - 0x003AC9DD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AC9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AC9D0: ;
    PUSH32(esp, esi);
    esi = 0x4B1C30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AC9DBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AC9DB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AC9E0
 * Original: 0x003AC9E0 - 0x003AC9ED (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AC9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AC9E0: ;
    PUSH32(esp, esi);
    esi = 0x4B1CC0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AC9EBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AC9EB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AC9F0
 * Original: 0x003AC9F0 - 0x003AC9FD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AC9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AC9F0: ;
    PUSH32(esp, esi);
    esi = 0x4B1D10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AC9FBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AC9FB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACA00
 * Original: 0x003ACA00 - 0x003ACA0D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACA00: ;
    PUSH32(esp, esi);
    esi = 0x4B1D60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACA0Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACA0B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACA10
 * Original: 0x003ACA10 - 0x003ACA1D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACA10: ;
    PUSH32(esp, esi);
    esi = 0x4B1DB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACA1Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACA1B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACA20
 * Original: 0x003ACA20 - 0x003ACA2D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACA20: ;
    PUSH32(esp, esi);
    esi = 0x4B1E00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACA2Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACA2B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACA30
 * Original: 0x003ACA30 - 0x003ACA3D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACA30: ;
    PUSH32(esp, esi);
    esi = 0x4B1E50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACA3Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACA3B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACA40
 * Original: 0x003ACA40 - 0x003ACA4D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACA40: ;
    PUSH32(esp, esi);
    esi = 0x4B1EA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACA4Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACA4B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACA50
 * Original: 0x003ACA50 - 0x003ACA5D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACA50: ;
    PUSH32(esp, esi);
    esi = 0x4B1F70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACA5Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACA5B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACA60
 * Original: 0x003ACA60 - 0x003ACA6D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACA60: ;
    PUSH32(esp, esi);
    esi = 0x4B2040;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACA6Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACA6B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACA70
 * Original: 0x003ACA70 - 0x003ACA7D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACA70: ;
    PUSH32(esp, esi);
    esi = 0x4B2430;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACA7Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACA7B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACA80
 * Original: 0x003ACA80 - 0x003ACA8D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACA80: ;
    PUSH32(esp, esi);
    esi = 0x4B24C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACA8Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACA8B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACA90
 * Original: 0x003ACA90 - 0x003ACA9D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACA90: ;
    PUSH32(esp, esi);
    esi = 0x4B2550;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACA9Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACA9B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACAA0
 * Original: 0x003ACAA0 - 0x003ACAA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACAA0(void)
{
    int _cf = 0; /* carry flag */

loc_003ACAA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003ACAB0
 * Original: 0x003ACAB0 - 0x003ACABD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACAB0: ;
    PUSH32(esp, esi);
    esi = 0x4B2AA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACABBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACABB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACAC0
 * Original: 0x003ACAC0 - 0x003ACAF1 (49 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACAC0: ;
    eax = MEM32(0xBA43B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0xBA43B0) = 0x48C964;
    if (CMP_EQ(_fa, _fb)) goto loc_003ACADD; /* je: equal / zero */

loc_003ACAD3: ;
    ecx = 0xBA43B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACADDu); RECOMP_ABI_CALL(0x0005EB60u, sub_0005EB60); /* call 0x0005EB60 */

loc_003ACADD: ;
    MEM32(0xBA43B0) = 0x4826B4;
    ecx = 0xBA43B0;
    g_seh_ebp = ebp; sub_0005EB60(); return; /* tail jmp 0x0005EB60 */

}

/**
 * sub_003ACB00
 * Original: 0x003ACB00 - 0x003ACB0D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACB00: ;
    PUSH32(esp, esi);
    esi = 0x4B2CB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACB0Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACB0B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACB10
 * Original: 0x003ACB10 - 0x003ACB1D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACB10: ;
    PUSH32(esp, esi);
    esi = 0x4B2D40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACB1Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACB1B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACB20
 * Original: 0x003ACB20 - 0x003ACB2D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACB20: ;
    PUSH32(esp, esi);
    esi = 0x4B2E50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACB2Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACB2B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACB30
 * Original: 0x003ACB30 - 0x003ACB3D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACB30: ;
    PUSH32(esp, esi);
    esi = 0x4B2F40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACB3Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACB3B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACB40
 * Original: 0x003ACB40 - 0x003ACB4D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACB40: ;
    PUSH32(esp, esi);
    esi = 0x4B31F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACB4Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACB4B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACB50
 * Original: 0x003ACB50 - 0x003ACB5D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACB50: ;
    PUSH32(esp, esi);
    esi = 0x4B3300;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACB5Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACB5B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACB60
 * Original: 0x003ACB60 - 0x003ACB6D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACB60: ;
    PUSH32(esp, esi);
    esi = 0x4B3420;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACB6Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACB6B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACB70
 * Original: 0x003ACB70 - 0x003ACB7D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACB70: ;
    PUSH32(esp, esi);
    esi = 0x4B34F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACB7Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACB7B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACB80
 * Original: 0x003ACB80 - 0x003ACB8D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACB80: ;
    PUSH32(esp, esi);
    esi = 0x4B35E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACB8Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACB8B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACB90
 * Original: 0x003ACB90 - 0x003ACB9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACB90: ;
    ecx = 0xBA5320;
    g_seh_ebp = ebp; sub_001BA460(); return; /* tail jmp 0x001BA460 */

}

/**
 * sub_003ACBA0
 * Original: 0x003ACBA0 - 0x003ACBAD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACBA0: ;
    PUSH32(esp, esi);
    esi = 0x4B3670;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACBABu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACBAB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACBB0
 * Original: 0x003ACBB0 - 0x003ACBBD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACBB0: ;
    PUSH32(esp, esi);
    esi = 0x4B3700;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACBBBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACBBB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACBC0
 * Original: 0x003ACBC0 - 0x003ACBCD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACBC0: ;
    PUSH32(esp, esi);
    esi = 0x4B3850;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACBCBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACBCB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACBD0
 * Original: 0x003ACBD0 - 0x003ACBDD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACBD0: ;
    PUSH32(esp, esi);
    esi = 0x4B38A0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACBDBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACBDB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACBE0
 * Original: 0x003ACBE0 - 0x003ACBED (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACBE0: ;
    PUSH32(esp, esi);
    esi = 0x4B38F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACBEBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACBEB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACBF0
 * Original: 0x003ACBF0 - 0x003ACBFD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACBF0: ;
    PUSH32(esp, esi);
    esi = 0x4B3940;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACBFBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACBFB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACC00
 * Original: 0x003ACC00 - 0x003ACC14 (20 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACC00: ;
    MEM32(0x4B3C20) = 0x4826B4;
    ecx = 0x4B3C20;
    g_seh_ebp = ebp; sub_0005EB60(); return; /* tail jmp 0x0005EB60 */

}

/**
 * sub_003ACC20
 * Original: 0x003ACC20 - 0x003ACC21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACC20(void)
{
    int _cf = 0; /* carry flag */

loc_003ACC20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003ACC30
 * Original: 0x003ACC30 - 0x003ACC31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACC30(void)
{
    int _cf = 0; /* carry flag */

loc_003ACC30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003ACC40
 * Original: 0x003ACC40 - 0x003ACCA5 (101 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACC40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x4B3FC8;
    ebx = 4;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003ACC50: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x2C));
    esi = esi - 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + -8;
    MEM32(ecx) = 0x4826B4;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x4826C4); PUSH32(esp, 0x003ACC62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003ACC5Cu); } /* indirect call */
    }

loc_003ACC62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003ACC9E; /* je: equal / zero */

loc_003ACC66: ;
    ecx = MEM32(0xB8FBF0);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003ACC82; /* je: equal / zero */

loc_003ACC73: ;
    edx = esi + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003ACC82; /* jne: not equal / not zero */

loc_003ACC7A: ;
    eax = MEM32(ecx + 4);
    MEM32(0xB8FBF0) = eax;

loc_003ACC82: ;
    eax = MEM32(esi + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    MEM32(esi + -4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(ecx + 8) = edx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    MEM32(eax + 4) = ecx;

loc_003ACC9E: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ACC50; /* jne: not equal / not zero */

loc_003ACCA1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACCB0
 * Original: 0x003ACCB0 - 0x003ACCCD (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACCB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACCB0: ;
    PUSH32(esp, esi);
    esi = 0xBABCC0;
    MEM32(0xBABCC0) = 0x4961B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACCC5u); RECOMP_ABI_CALL(0x002ECAD0u, sub_002ECAD0); /* call 0x002ECAD0 */

loc_003ACCC5: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002DB020(); return; /* tail jmp 0x002DB020 */

}

/**
 * sub_003ACCD0
 * Original: 0x003ACCD0 - 0x003ACCDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACCD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACCD0: ;
    ecx = 0xBABB00;
    g_seh_ebp = ebp; sub_002E8A70(); return; /* tail jmp 0x002E8A70 */

}

/**
 * sub_003ACCE0
 * Original: 0x003ACCE0 - 0x003ACCEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACCE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACCE0: ;
    ecx = 0xBABD60;
    g_seh_ebp = ebp; sub_002E8A70(); return; /* tail jmp 0x002E8A70 */

}

/**
 * sub_003ACCF0
 * Original: 0x003ACCF0 - 0x003ACCFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACCF0: ;
    ecx = 0xBABBD0;
    g_seh_ebp = ebp; sub_002E8A70(); return; /* tail jmp 0x002E8A70 */

}

/**
 * sub_003ACD00
 * Original: 0x003ACD00 - 0x003ACD1E (30 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACD00: ;
    ecx = 0xBABE30;
    MEM32(0xBABE30) = 0x4961F8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACD14u); RECOMP_ABI_CALL(0x002ED740u, sub_002ED740); /* call 0x002ED740 */

loc_003ACD14: ;
    ecx = 0xBABE30;
    g_seh_ebp = ebp; sub_002DB020(); return; /* tail jmp 0x002DB020 */

}

/**
 * sub_003ACD20
 * Original: 0x003ACD20 - 0x003ACD85 (101 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACD20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBAC020;
    ebx = 4;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003ACD30: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x3C));
    esi = esi - 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + -8;
    MEM32(ecx) = 0x4826B4;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x4826C4); PUSH32(esp, 0x003ACD42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003ACD3Cu); } /* indirect call */
    }

loc_003ACD42: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003ACD7E; /* je: equal / zero */

loc_003ACD46: ;
    ecx = MEM32(0xB8FBF0);
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003ACD62; /* je: equal / zero */

loc_003ACD53: ;
    edx = esi + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003ACD62; /* jne: not equal / not zero */

loc_003ACD5A: ;
    eax = MEM32(ecx + 4);
    MEM32(0xB8FBF0) = eax;

loc_003ACD62: ;
    eax = MEM32(esi + -4);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    MEM32(esi + -4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(ecx + 8) = edx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    MEM32(eax + 4) = ecx;

loc_003ACD7E: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ACD30; /* jne: not equal / not zero */

loc_003ACD81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACD90
 * Original: 0x003ACD90 - 0x003ACD9D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACD90: ;
    PUSH32(esp, esi);
    esi = 0x4B41C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACD9Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ACD9B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ACDA0
 * Original: 0x003ACDA0 - 0x003ACF2A (394 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACDA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0xBB35D0;
    MEM32(esp + 0x14) = 8;
    goto loc_003ACDC0;

loc_003ACDC0: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(0xD0));
    ebx = ebx - 0xD0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx + -192) = 0x49612C;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003ACEA4; /* je: equal / zero */

loc_003ACDDE: ;
    SET_LO8(ecx, MEM8(0xB74444));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003ACE9E; /* je: equal / zero */

loc_003ACDEC: ;
    ecx = MEM32(0xB74438);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = MEM32(0xB74440);
    esi = MEM32(0xB7443C);
    if (CMP_L(_fas, _fbs)) goto loc_003ACE6A; /* jl: less (signed <) */

loc_003ACE02: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003ACE6A; /* jge: greater or equal (signed >=) */

loc_003ACE06: ;
    ecx = ecx + ecx * 8;
    edx = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi + ecx * 4;
    if (CMP_B(_fa, _fb)) goto loc_003ACE6A; /* jb: below (unsigned <) */

loc_003ACE13: ;
    edi = MEM32(ecx + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003ACE6A; /* ja: above (unsigned >) */

loc_003ACE1C: ;
    edx = MEM32(ecx + 0x1C);
    esi = edx + -1;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xB)) >> 32) & 1);
    edx = edx + 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ~esi;
    _cf = 0; /* logical op clears CF */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003ACE38; /* je: equal / zero */

loc_003ACE32: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_003ACE3D;

loc_003ACE38: ;
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;

loc_003ACE3D: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003ACE4B; /* je: equal / zero */

loc_003ACE43: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_003ACE51;

loc_003ACE4B: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xC) = edx;

loc_003ACE51: ;
    edi = ecx + 4;
    ecx = eax;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACE68u); RECOMP_ABI_CALL(0x002BAFC0u, sub_002BAFC0); /* call 0x002BAFC0 */

loc_003ACE68: ;
    goto loc_003ACE9E;

loc_003ACE6A: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003ACE95; /* jle: less or equal (signed <=) */

loc_003ACE70: ;
    edx = esi;

loc_003ACE72: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003ACE8D; /* jl: less (signed <) */

loc_003ACE76: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003ACE8D; /* jge: greater or equal (signed >=) */

loc_003ACE7A: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003ACE8D; /* jb: below (unsigned <) */

loc_003ACE80: ;
    ebx = MEM32(edx + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003ACECF; /* jbe: below or equal (unsigned <=) */

loc_003ACE89: ;
    ebx = MEM32(esp + 0x10);

loc_003ACE8D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x24)) >> 32) & 1);
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003ACE72; /* jl: less (signed <) */

loc_003ACE95: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACE9Bu); RECOMP_ABI_CALL(0x00375061u, sub_00375061); /* call 0x00375061 */

loc_003ACE9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ACE9E: ;
    MEM32(ebx) = 0;

loc_003ACEA4: ;
    esi = ebx + -192;
    MEM32(ebx + 8) = 0;
    MEM32(ebx + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACEBDu); RECOMP_ABI_CALL(0x002DDB60u, sub_002DDB60); /* call 0x002DDB60 */

loc_003ACEBD: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ACDC0; /* jne: not equal / not zero */

loc_003ACEC7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_003ACECF: ;
    ecx = ecx + ecx * 8;
    edx = esi + ecx * 4;
    ecx = MEM32(edx + 0x1C);
    esi = ecx + -1;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xB)) >> 32) & 1);
    ecx = ecx + 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ~esi;
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003ACEF1; /* je: equal / zero */

loc_003ACEEB: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    goto loc_003ACEF6;

loc_003ACEF1: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x10) = ecx;

loc_003ACEF6: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003ACF04; /* je: equal / zero */

loc_003ACEFC: ;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;
    goto loc_003ACF0A;

loc_003ACF04: ;
    ecx = MEM32(eax + 4);
    MEM32(edx + 0xC) = ecx;

loc_003ACF0A: ;
    edi = edx + 4;
    ecx = eax;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACF21u); RECOMP_ABI_CALL(0x002BAFC0u, sub_002BAFC0); /* call 0x002BAFC0 */

loc_003ACF21: ;
    ebx = MEM32(esp + 0x10);
    goto loc_003ACE9E;

}

/**
 * sub_003ACF30
 * Original: 0x003ACF30 - 0x003AD0BA (394 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ACF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ACF30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0xBB3920;
    MEM32(esp + 0x14) = 4;
    goto loc_003ACF50;

loc_003ACF50: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(0xD0));
    ebx = ebx - 0xD0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx + -192) = 0x49612C;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003AD034; /* je: equal / zero */

loc_003ACF6E: ;
    SET_LO8(ecx, MEM8(0xB74444));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD02E; /* je: equal / zero */

loc_003ACF7C: ;
    ecx = MEM32(0xB74438);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = MEM32(0xB74440);
    esi = MEM32(0xB7443C);
    if (CMP_L(_fas, _fbs)) goto loc_003ACFFA; /* jl: less (signed <) */

loc_003ACF92: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003ACFFA; /* jge: greater or equal (signed >=) */

loc_003ACF96: ;
    ecx = ecx + ecx * 8;
    edx = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi + ecx * 4;
    if (CMP_B(_fa, _fb)) goto loc_003ACFFA; /* jb: below (unsigned <) */

loc_003ACFA3: ;
    edi = MEM32(ecx + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003ACFFA; /* ja: above (unsigned >) */

loc_003ACFAC: ;
    edx = MEM32(ecx + 0x1C);
    esi = edx + -1;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xB)) >> 32) & 1);
    edx = edx + 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ~esi;
    _cf = 0; /* logical op clears CF */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003ACFC8; /* je: equal / zero */

loc_003ACFC2: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_003ACFCD;

loc_003ACFC8: ;
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;

loc_003ACFCD: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003ACFDB; /* je: equal / zero */

loc_003ACFD3: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_003ACFE1;

loc_003ACFDB: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xC) = edx;

loc_003ACFE1: ;
    edi = ecx + 4;
    ecx = eax;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ACFF8u); RECOMP_ABI_CALL(0x002BAFC0u, sub_002BAFC0); /* call 0x002BAFC0 */

loc_003ACFF8: ;
    goto loc_003AD02E;

loc_003ACFFA: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003AD025; /* jle: less or equal (signed <=) */

loc_003AD000: ;
    edx = esi;

loc_003AD002: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003AD01D; /* jl: less (signed <) */

loc_003AD006: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003AD01D; /* jge: greater or equal (signed >=) */

loc_003AD00A: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003AD01D; /* jb: below (unsigned <) */

loc_003AD010: ;
    ebx = MEM32(edx + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003AD05F; /* jbe: below or equal (unsigned <=) */

loc_003AD019: ;
    ebx = MEM32(esp + 0x10);

loc_003AD01D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x24)) >> 32) & 1);
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003AD002; /* jl: less (signed <) */

loc_003AD025: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD02Bu); RECOMP_ABI_CALL(0x00375061u, sub_00375061); /* call 0x00375061 */

loc_003AD02B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD02E: ;
    MEM32(ebx) = 0;

loc_003AD034: ;
    esi = ebx + -192;
    MEM32(ebx + 8) = 0;
    MEM32(ebx + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD04Du); RECOMP_ABI_CALL(0x002DDB60u, sub_002DDB60); /* call 0x002DDB60 */

loc_003AD04D: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ACF50; /* jne: not equal / not zero */

loc_003AD057: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_003AD05F: ;
    ecx = ecx + ecx * 8;
    edx = esi + ecx * 4;
    ecx = MEM32(edx + 0x1C);
    esi = ecx + -1;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xB)) >> 32) & 1);
    ecx = ecx + 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ~esi;
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD081; /* je: equal / zero */

loc_003AD07B: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    goto loc_003AD086;

loc_003AD081: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x10) = ecx;

loc_003AD086: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD094; /* je: equal / zero */

loc_003AD08C: ;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;
    goto loc_003AD09A;

loc_003AD094: ;
    ecx = MEM32(eax + 4);
    MEM32(edx + 0xC) = ecx;

loc_003AD09A: ;
    edi = edx + 4;
    ecx = eax;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD0B1u); RECOMP_ABI_CALL(0x002BAFC0u, sub_002BAFC0); /* call 0x002BAFC0 */

loc_003AD0B1: ;
    ebx = MEM32(esp + 0x10);
    goto loc_003AD02E;

}

/**
 * sub_003AD0C0
 * Original: 0x003AD0C0 - 0x003AD24A (394 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD0C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD0C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0xBACB10;
    MEM32(esp + 0x14) = 4;
    goto loc_003AD0E0;

loc_003AD0E0: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(0xD0));
    ebx = ebx - 0xD0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx + -192) = 0x49612C;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003AD1C4; /* je: equal / zero */

loc_003AD0FE: ;
    SET_LO8(ecx, MEM8(0xB74444));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD1BE; /* je: equal / zero */

loc_003AD10C: ;
    ecx = MEM32(0xB74438);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = MEM32(0xB74440);
    esi = MEM32(0xB7443C);
    if (CMP_L(_fas, _fbs)) goto loc_003AD18A; /* jl: less (signed <) */

loc_003AD122: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003AD18A; /* jge: greater or equal (signed >=) */

loc_003AD126: ;
    ecx = ecx + ecx * 8;
    edx = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi + ecx * 4;
    if (CMP_B(_fa, _fb)) goto loc_003AD18A; /* jb: below (unsigned <) */

loc_003AD133: ;
    edi = MEM32(ecx + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003AD18A; /* ja: above (unsigned >) */

loc_003AD13C: ;
    edx = MEM32(ecx + 0x1C);
    esi = edx + -1;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xB)) >> 32) & 1);
    edx = edx + 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ~esi;
    _cf = 0; /* logical op clears CF */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD158; /* je: equal / zero */

loc_003AD152: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_003AD15D;

loc_003AD158: ;
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;

loc_003AD15D: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD16B; /* je: equal / zero */

loc_003AD163: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_003AD171;

loc_003AD16B: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xC) = edx;

loc_003AD171: ;
    edi = ecx + 4;
    ecx = eax;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD188u); RECOMP_ABI_CALL(0x002BAFC0u, sub_002BAFC0); /* call 0x002BAFC0 */

loc_003AD188: ;
    goto loc_003AD1BE;

loc_003AD18A: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003AD1B5; /* jle: less or equal (signed <=) */

loc_003AD190: ;
    edx = esi;

loc_003AD192: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003AD1AD; /* jl: less (signed <) */

loc_003AD196: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003AD1AD; /* jge: greater or equal (signed >=) */

loc_003AD19A: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003AD1AD; /* jb: below (unsigned <) */

loc_003AD1A0: ;
    ebx = MEM32(edx + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003AD1EF; /* jbe: below or equal (unsigned <=) */

loc_003AD1A9: ;
    ebx = MEM32(esp + 0x10);

loc_003AD1AD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x24)) >> 32) & 1);
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003AD192; /* jl: less (signed <) */

loc_003AD1B5: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD1BBu); RECOMP_ABI_CALL(0x00375061u, sub_00375061); /* call 0x00375061 */

loc_003AD1BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD1BE: ;
    MEM32(ebx) = 0;

loc_003AD1C4: ;
    esi = ebx + -192;
    MEM32(ebx + 8) = 0;
    MEM32(ebx + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD1DDu); RECOMP_ABI_CALL(0x002DDB60u, sub_002DDB60); /* call 0x002DDB60 */

loc_003AD1DD: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AD0E0; /* jne: not equal / not zero */

loc_003AD1E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_003AD1EF: ;
    ecx = ecx + ecx * 8;
    edx = esi + ecx * 4;
    ecx = MEM32(edx + 0x1C);
    esi = ecx + -1;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xB)) >> 32) & 1);
    ecx = ecx + 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ~esi;
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD211; /* je: equal / zero */

loc_003AD20B: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    goto loc_003AD216;

loc_003AD211: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x10) = ecx;

loc_003AD216: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD224; /* je: equal / zero */

loc_003AD21C: ;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;
    goto loc_003AD22A;

loc_003AD224: ;
    ecx = MEM32(eax + 4);
    MEM32(edx + 0xC) = ecx;

loc_003AD22A: ;
    edi = edx + 4;
    ecx = eax;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD241u); RECOMP_ABI_CALL(0x002BAFC0u, sub_002BAFC0); /* call 0x002BAFC0 */

loc_003AD241: ;
    ebx = MEM32(esp + 0x10);
    goto loc_003AD1BE;

}

/**
 * sub_003AD250
 * Original: 0x003AD250 - 0x003AD3DA (394 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD250: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0xBB2A40;
    MEM32(esp + 0x14) = 4;
    goto loc_003AD270;

loc_003AD270: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(0xD0));
    ebx = ebx - 0xD0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebx + -192) = 0x49612C;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003AD354; /* je: equal / zero */

loc_003AD28E: ;
    SET_LO8(ecx, MEM8(0xB74444));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD34E; /* je: equal / zero */

loc_003AD29C: ;
    ecx = MEM32(0xB74438);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = MEM32(0xB74440);
    esi = MEM32(0xB7443C);
    if (CMP_L(_fas, _fbs)) goto loc_003AD31A; /* jl: less (signed <) */

loc_003AD2B2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003AD31A; /* jge: greater or equal (signed >=) */

loc_003AD2B6: ;
    ecx = ecx + ecx * 8;
    edx = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi + ecx * 4;
    if (CMP_B(_fa, _fb)) goto loc_003AD31A; /* jb: below (unsigned <) */

loc_003AD2C3: ;
    edi = MEM32(ecx + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003AD31A; /* ja: above (unsigned >) */

loc_003AD2CC: ;
    edx = MEM32(ecx + 0x1C);
    esi = edx + -1;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xB)) >> 32) & 1);
    edx = edx + 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ~esi;
    _cf = 0; /* logical op clears CF */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD2E8; /* je: equal / zero */

loc_003AD2E2: ;
    esi = MEM32(eax);
    MEM32(edx) = esi;
    goto loc_003AD2ED;

loc_003AD2E8: ;
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;

loc_003AD2ED: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD2FB; /* je: equal / zero */

loc_003AD2F3: ;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    goto loc_003AD301;

loc_003AD2FB: ;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xC) = edx;

loc_003AD301: ;
    edi = ecx + 4;
    ecx = eax;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD318u); RECOMP_ABI_CALL(0x002BAFC0u, sub_002BAFC0); /* call 0x002BAFC0 */

loc_003AD318: ;
    goto loc_003AD34E;

loc_003AD31A: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003AD345; /* jle: less or equal (signed <=) */

loc_003AD320: ;
    edx = esi;

loc_003AD322: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003AD33D; /* jl: less (signed <) */

loc_003AD326: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003AD33D; /* jge: greater or equal (signed >=) */

loc_003AD32A: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003AD33D; /* jb: below (unsigned <) */

loc_003AD330: ;
    ebx = MEM32(edx + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003AD37F; /* jbe: below or equal (unsigned <=) */

loc_003AD339: ;
    ebx = MEM32(esp + 0x10);

loc_003AD33D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x24)) >> 32) & 1);
    edx = edx + 0x24;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003AD322; /* jl: less (signed <) */

loc_003AD345: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD34Bu); RECOMP_ABI_CALL(0x00375061u, sub_00375061); /* call 0x00375061 */

loc_003AD34B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003AD34E: ;
    MEM32(ebx) = 0;

loc_003AD354: ;
    esi = ebx + -192;
    MEM32(ebx + 8) = 0;
    MEM32(ebx + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD36Du); RECOMP_ABI_CALL(0x002DDB60u, sub_002DDB60); /* call 0x002DDB60 */

loc_003AD36D: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AD270; /* jne: not equal / not zero */

loc_003AD377: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_003AD37F: ;
    ecx = ecx + ecx * 8;
    edx = esi + ecx * 4;
    ecx = MEM32(edx + 0x1C);
    esi = ecx + -1;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xB)) >> 32) & 1);
    ecx = ecx + 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ~esi;
    _cf = 0; /* logical op clears CF */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD3A1; /* je: equal / zero */

loc_003AD39B: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    goto loc_003AD3A6;

loc_003AD3A1: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x10) = ecx;

loc_003AD3A6: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AD3B4; /* je: equal / zero */

loc_003AD3AC: ;
    esi = MEM32(eax + 4);
    MEM32(ecx + 4) = esi;
    goto loc_003AD3BA;

loc_003AD3B4: ;
    ecx = MEM32(eax + 4);
    MEM32(edx + 0xC) = ecx;

loc_003AD3BA: ;
    edi = edx + 4;
    ecx = eax;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD3D1u); RECOMP_ABI_CALL(0x002BAFC0u, sub_002BAFC0); /* call 0x002BAFC0 */

loc_003AD3D1: ;
    ebx = MEM32(esp + 0x10);
    goto loc_003AD34E;

}

/**
 * sub_003AD3E0
 * Original: 0x003AD3E0 - 0x003AD40E (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD3E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBACF10;
    edi = 4;
    /* nop */

loc_003AD3F0: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x90));
    esi = esi - 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = 0x4961B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD401u); RECOMP_ABI_CALL(0x002ECAD0u, sub_002ECAD0); /* call 0x002ECAD0 */

loc_003AD401: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD408u); RECOMP_ABI_CALL(0x002DB020u, sub_002DB020); /* call 0x002DB020 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD408: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AD3F0; /* jne: not equal / not zero */

loc_003AD40B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD410
 * Original: 0x003AD410 - 0x003AD43E (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD410: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB3AA0;
    edi = 4;
    /* nop */

loc_003AD420: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x90));
    esi = esi - 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = 0x4961B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD431u); RECOMP_ABI_CALL(0x002ECAD0u, sub_002ECAD0); /* call 0x002ECAD0 */

loc_003AD431: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD438u); RECOMP_ABI_CALL(0x002DB020u, sub_002DB020); /* call 0x002DB020 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD438: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AD420; /* jne: not equal / not zero */

loc_003AD43B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD440
 * Original: 0x003AD440 - 0x003AD463 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD440: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB23A0;
    edi = 8;
    /* nop */

loc_003AD450: ;
    _fb = (uint32_t)(0xA90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0xA90));
    esi = esi - 0xA90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD45Du); RECOMP_ABI_CALL(0x001D25F0u, sub_001D25F0); /* call 0x001D25F0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD45D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AD450; /* jne: not equal / not zero */

loc_003AD460: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD470
 * Original: 0x003AD470 - 0x003AD49E (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD470: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB2E90;
    edi = 4;
    /* nop */

loc_003AD480: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0xA0));
    esi = esi - 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = 0x4961B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD491u); RECOMP_ABI_CALL(0x002ECAD0u, sub_002ECAD0); /* call 0x002ECAD0 */

loc_003AD491: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD498u); RECOMP_ABI_CALL(0x002DB020u, sub_002DB020); /* call 0x002DB020 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD498: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AD480; /* jne: not equal / not zero */

loc_003AD49B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD4A0
 * Original: 0x003AD4A0 - 0x003AD4CE (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD4A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB3D20;
    edi = 4;
    /* nop */

loc_003AD4B0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0xA0));
    esi = esi - 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = 0x4961B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD4C1u); RECOMP_ABI_CALL(0x002ECAD0u, sub_002ECAD0); /* call 0x002ECAD0 */

loc_003AD4C1: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD4C8u); RECOMP_ABI_CALL(0x002DB020u, sub_002DB020); /* call 0x002DB020 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD4C8: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AD4B0; /* jne: not equal / not zero */

loc_003AD4CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD4D0
 * Original: 0x003AD4D0 - 0x003AD4FE (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD4D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBACCD0;
    edi = 4;
    /* nop */

loc_003AD4E0: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0xA0));
    esi = esi - 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = 0x4961B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD4F1u); RECOMP_ABI_CALL(0x002ECAD0u, sub_002ECAD0); /* call 0x002ECAD0 */

loc_003AD4F1: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD4F8u); RECOMP_ABI_CALL(0x002DB020u, sub_002DB020); /* call 0x002DB020 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD4F8: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AD4E0; /* jne: not equal / not zero */

loc_003AD4FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD500
 * Original: 0x003AD500 - 0x003AD52E (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD500: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB2C10;
    edi = 4;
    /* nop */

loc_003AD510: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0xA0));
    esi = esi - 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = 0x4961B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD521u); RECOMP_ABI_CALL(0x002ECAD0u, sub_002ECAD0); /* call 0x002ECAD0 */

loc_003AD521: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD528u); RECOMP_ABI_CALL(0x002DB020u, sub_002DB020); /* call 0x002DB020 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD528: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AD510; /* jne: not equal / not zero */

loc_003AD52B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD530
 * Original: 0x003AD530 - 0x003AD55E (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD530: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB3F70;
    edi = 4;
    /* nop */

loc_003AD540: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x90));
    esi = esi - 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = 0x4961B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD551u); RECOMP_ABI_CALL(0x002ECAD0u, sub_002ECAD0); /* call 0x002ECAD0 */

loc_003AD551: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD558u); RECOMP_ABI_CALL(0x002DB020u, sub_002DB020); /* call 0x002DB020 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD558: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AD540; /* jne: not equal / not zero */

loc_003AD55B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD560
 * Original: 0x003AD560 - 0x003AD58E (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD560: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB2620;
    edi = 4;
    /* nop */

loc_003AD570: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0xA0));
    esi = esi - 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = 0x4961B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD581u); RECOMP_ABI_CALL(0x002ECAD0u, sub_002ECAD0); /* call 0x002ECAD0 */

loc_003AD581: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD588u); RECOMP_ABI_CALL(0x002DB020u, sub_002DB020); /* call 0x002DB020 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD588: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AD570; /* jne: not equal / not zero */

loc_003AD58B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD590
 * Original: 0x003AD590 - 0x003AD5C7 (55 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD590: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBAC700;
    edi = 4;
    /* nop */

loc_003AD5A0: ;
    ecx = MEM32(esi + -8);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x150));
    esi = esi - 0x150;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi) = 0x4962F0;
    if (CMP_EQ(_fa, _fb)) goto loc_003AD5BA; /* je: equal / zero */

loc_003AD5B3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003AD5BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003AD5B7u); } /* indirect call */
    }

loc_003AD5BA: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD5C1u); RECOMP_ABI_CALL(0x002DB020u, sub_002DB020); /* call 0x002DB020 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD5C1: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AD5A0; /* jne: not equal / not zero */

loc_003AD5C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD5D0
 * Original: 0x003AD5D0 - 0x003AD5DD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD5D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003AD5D0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x4B44D0) = eax;
    MEM32(0x4B44D4) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003AD5E0
 * Original: 0x003AD5E0 - 0x003AD5EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD5E0(void)
{
    int _cf = 0; /* carry flag */

loc_003AD5E0: ;
    MEM32(0x4B4660) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AD5F0
 * Original: 0x003AD5F0 - 0x003AD5FD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD5F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003AD5F0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x4B46B0) = eax;
    MEM32(0x4B46B4) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003AD600
 * Original: 0x003AD600 - 0x003AD60B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD600(void)
{
    int _cf = 0; /* carry flag */

loc_003AD600: ;
    MEM32(0x4B47C0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AD610
 * Original: 0x003AD610 - 0x003AD61B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD610(void)
{
    int _cf = 0; /* carry flag */

loc_003AD610: ;
    MEM32(0x4B47C4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AD620
 * Original: 0x003AD620 - 0x003AD621 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD620(void)
{
    int _cf = 0; /* carry flag */

loc_003AD620: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003AD630
 * Original: 0x003AD630 - 0x003AD662 (50 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD630: ;
    xmm0 = XMM_SCALAR(MEMF(0x497C7C)); /* movss */
    eax = 0xBB4108;
    /* nop */

loc_003AD640: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB4288) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB4288 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003AD640; /* jl: less (signed <) */

loc_003AD64E: ;
    MEM32(0x4B4810) = 0x4826B4;
    ecx = 0x4B4810;
    g_seh_ebp = ebp; sub_0005EB60(); return; /* tail jmp 0x0005EB60 */

}

/**
 * sub_003AD670
 * Original: 0x003AD670 - 0x003AD671 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD670(void)
{
    int _cf = 0; /* carry flag */

loc_003AD670: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003AD680
 * Original: 0x003AD680 - 0x003AD68D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003AD680: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x4B4870) = eax;
    MEM32(0x4B4874) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003AD690
 * Original: 0x003AD690 - 0x003AD69B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD690(void)
{
    int _cf = 0; /* carry flag */

loc_003AD690: ;
    MEM32(0x4B4940) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AD6A0
 * Original: 0x003AD6A0 - 0x003AD6AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD6A0(void)
{
    int _cf = 0; /* carry flag */

loc_003AD6A0: ;
    MEM32(0x4B4944) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AD6B0
 * Original: 0x003AD6B0 - 0x003AD6BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD6B0(void)
{
    int _cf = 0; /* carry flag */

loc_003AD6B0: ;
    MEM32(0x4B4990) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AD6C0
 * Original: 0x003AD6C0 - 0x003AD71D (93 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD6C0: ;
    eax = MEM32(0x4B4CE4);
    PUSH32(esp, esi);
    ecx = 0x4B4CE4;
    MEM32(0x4B4CB0) = 0x491810;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003AD6D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003AD6D5u); } /* indirect call */
    }

loc_003AD6D8: ;
    esi = 0x4B4CB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD6E2u); RECOMP_ABI_CALL(0x002CDC00u, sub_002CDC00); /* call 0x002CDC00 */

loc_003AD6E2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x4B4CE4;
    MEM32(0x4B4CCC) = eax;
    MEM32(0x4B4CD0) = eax;
    MEM32(0x4B4CDC) = eax;
    MEM8(0x4B4CE0) = LO8(eax);
    MEM32(0x4B4CE4) = 0x4917F4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD70Cu); RECOMP_ABI_CALL(0x002CDC00u, sub_002CDC00); /* call 0x002CDC00 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD70C: ;
    eax = 0x495C28;
    MEM32(0x4B4CE4) = eax;
    MEM32(0x4B4CB0) = eax;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD720
 * Original: 0x003AD720 - 0x003AD72D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD720: ;
    PUSH32(esp, esi);
    esi = 0x4B5010;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD72Bu); RECOMP_ABI_CALL(0x00204060u, sub_00204060); /* call 0x00204060 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD72B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD730
 * Original: 0x003AD730 - 0x003AD731 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD730(void)
{
    int _cf = 0; /* carry flag */

loc_003AD730: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003AD740
 * Original: 0x003AD740 - 0x003AD741 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD740(void)
{
    int _cf = 0; /* carry flag */

loc_003AD740: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003AD750
 * Original: 0x003AD750 - 0x003AD751 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD750(void)
{
    int _cf = 0; /* carry flag */

loc_003AD750: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003AD760
 * Original: 0x003AD760 - 0x003AD761 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD760(void)
{
    int _cf = 0; /* carry flag */

loc_003AD760: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003AD770
 * Original: 0x003AD770 - 0x003AD77D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD770: ;
    PUSH32(esp, esi);
    esi = 0x4B5240;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD77Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD77B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD780
 * Original: 0x003AD780 - 0x003AD78D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD780: ;
    PUSH32(esp, esi);
    esi = 0x4B5290;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD78Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD78B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD790
 * Original: 0x003AD790 - 0x003AD79D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD790: ;
    PUSH32(esp, esi);
    esi = 0x4B52E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD79Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD79B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD7A0
 * Original: 0x003AD7A0 - 0x003AD7AD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD7A0: ;
    PUSH32(esp, esi);
    esi = 0x4B5330;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD7ABu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD7AB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD7B0
 * Original: 0x003AD7B0 - 0x003AD7BD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD7B0: ;
    PUSH32(esp, esi);
    esi = 0x4B5380;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD7BBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD7BB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD7C0
 * Original: 0x003AD7C0 - 0x003AD7CD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD7C0: ;
    PUSH32(esp, esi);
    esi = 0x4B53D0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD7CBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD7CB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD7D0
 * Original: 0x003AD7D0 - 0x003AD7DD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD7D0: ;
    PUSH32(esp, esi);
    esi = 0x4B5420;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD7DBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD7DB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD7E0
 * Original: 0x003AD7E0 - 0x003AD7ED (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD7E0: ;
    PUSH32(esp, esi);
    esi = 0x4B5470;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD7EBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD7EB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD7F0
 * Original: 0x003AD7F0 - 0x003AD7FD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD7F0: ;
    PUSH32(esp, esi);
    esi = 0x4B54C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD7FBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD7FB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD800
 * Original: 0x003AD800 - 0x003AD80D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD800: ;
    PUSH32(esp, esi);
    esi = 0x4B5510;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD80Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD80B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD810
 * Original: 0x003AD810 - 0x003AD81D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD810: ;
    PUSH32(esp, esi);
    esi = 0x4B5560;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD81Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD81B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD820
 * Original: 0x003AD820 - 0x003AD82D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD820: ;
    PUSH32(esp, esi);
    esi = 0x4B55B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD82Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD82B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD830
 * Original: 0x003AD830 - 0x003AD83D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD830: ;
    PUSH32(esp, esi);
    esi = 0x4B5600;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD83Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD83B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD840
 * Original: 0x003AD840 - 0x003AD84D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD840: ;
    PUSH32(esp, esi);
    esi = 0x4B5650;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD84Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD84B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD850
 * Original: 0x003AD850 - 0x003AD85D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD850: ;
    PUSH32(esp, esi);
    esi = 0x4B56A0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD85Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD85B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD860
 * Original: 0x003AD860 - 0x003AD86D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD860: ;
    PUSH32(esp, esi);
    esi = 0x4B56F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD86Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD86B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD870
 * Original: 0x003AD870 - 0x003AD87D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD870: ;
    PUSH32(esp, esi);
    esi = 0x4B5740;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD87Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD87B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD880
 * Original: 0x003AD880 - 0x003AD88D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD880: ;
    PUSH32(esp, esi);
    esi = 0x4B5790;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD88Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD88B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD890
 * Original: 0x003AD890 - 0x003AD89D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD890: ;
    PUSH32(esp, esi);
    esi = 0x4B57E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD89Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD89B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD8A0
 * Original: 0x003AD8A0 - 0x003AD8AD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD8A0: ;
    PUSH32(esp, esi);
    esi = 0x4B5830;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD8ABu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD8AB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD8B0
 * Original: 0x003AD8B0 - 0x003AD8BD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD8B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD8B0: ;
    PUSH32(esp, esi);
    esi = 0x4B5880;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD8BBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD8BB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD8C0
 * Original: 0x003AD8C0 - 0x003AD8CD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD8C0: ;
    PUSH32(esp, esi);
    esi = 0x4B58D0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD8CBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD8CB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD8D0
 * Original: 0x003AD8D0 - 0x003AD8DD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD8D0: ;
    PUSH32(esp, esi);
    esi = 0x4B5920;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD8DBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD8DB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD8E0
 * Original: 0x003AD8E0 - 0x003AD8ED (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD8E0: ;
    PUSH32(esp, esi);
    esi = 0x4B5970;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD8EBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD8EB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD8F0
 * Original: 0x003AD8F0 - 0x003AD8FD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD8F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD8F0: ;
    PUSH32(esp, esi);
    esi = 0x4B59C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD8FBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD8FB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD900
 * Original: 0x003AD900 - 0x003AD90D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD900: ;
    PUSH32(esp, esi);
    esi = 0x4B5A10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD90Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD90B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD910
 * Original: 0x003AD910 - 0x003AD91D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD910: ;
    PUSH32(esp, esi);
    esi = 0x4B5A60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD91Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD91B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD920
 * Original: 0x003AD920 - 0x003AD92D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD920: ;
    PUSH32(esp, esi);
    esi = 0x4B5AB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD92Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD92B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD930
 * Original: 0x003AD930 - 0x003AD93D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD930: ;
    PUSH32(esp, esi);
    esi = 0x4B5B00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD93Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD93B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD940
 * Original: 0x003AD940 - 0x003AD94D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD940: ;
    PUSH32(esp, esi);
    esi = 0x4B5B50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD94Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD94B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD950
 * Original: 0x003AD950 - 0x003AD95D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD950: ;
    PUSH32(esp, esi);
    esi = 0x4B5BA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD95Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD95B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD960
 * Original: 0x003AD960 - 0x003AD96D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD960: ;
    PUSH32(esp, esi);
    esi = 0x4B5BF0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD96Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD96B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD970
 * Original: 0x003AD970 - 0x003AD97D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD970: ;
    PUSH32(esp, esi);
    esi = 0x4B5C40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD97Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD97B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD980
 * Original: 0x003AD980 - 0x003AD98D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD980: ;
    PUSH32(esp, esi);
    esi = 0x4B5C90;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD98Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD98B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD990
 * Original: 0x003AD990 - 0x003AD99D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD990: ;
    PUSH32(esp, esi);
    esi = 0x4B5CE0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD99Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD99B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD9A0
 * Original: 0x003AD9A0 - 0x003AD9AD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD9A0: ;
    PUSH32(esp, esi);
    esi = 0x4B5D30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD9ABu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD9AB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD9B0
 * Original: 0x003AD9B0 - 0x003AD9BD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD9B0: ;
    PUSH32(esp, esi);
    esi = 0x4B5D80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD9BBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD9BB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD9C0
 * Original: 0x003AD9C0 - 0x003AD9CD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD9C0: ;
    PUSH32(esp, esi);
    esi = 0x4B5DD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD9CBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD9CB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD9D0
 * Original: 0x003AD9D0 - 0x003AD9DD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD9D0: ;
    PUSH32(esp, esi);
    esi = 0x4B5E20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD9DBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD9DB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD9E0
 * Original: 0x003AD9E0 - 0x003AD9ED (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD9E0: ;
    PUSH32(esp, esi);
    esi = 0x4B5E70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD9EBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD9EB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AD9F0
 * Original: 0x003AD9F0 - 0x003AD9FD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AD9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AD9F0: ;
    PUSH32(esp, esi);
    esi = 0x4B5EC0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AD9FBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003AD9FB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADA00
 * Original: 0x003ADA00 - 0x003ADA0D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADA00: ;
    PUSH32(esp, esi);
    esi = 0x4B5F10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADA0Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADA0B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADA10
 * Original: 0x003ADA10 - 0x003ADA1D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADA10: ;
    PUSH32(esp, esi);
    esi = 0x4B5F60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADA1Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADA1B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADA20
 * Original: 0x003ADA20 - 0x003ADA2D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADA20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADA20: ;
    PUSH32(esp, esi);
    esi = 0x4B5FB0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADA2Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADA2B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADA30
 * Original: 0x003ADA30 - 0x003ADA3D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADA30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADA30: ;
    PUSH32(esp, esi);
    esi = 0x4B6000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADA3Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADA3B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADA40
 * Original: 0x003ADA40 - 0x003ADA4D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADA40: ;
    PUSH32(esp, esi);
    esi = 0x4B6050;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADA4Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADA4B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADA50
 * Original: 0x003ADA50 - 0x003ADA5D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADA50: ;
    PUSH32(esp, esi);
    esi = 0x4B60A0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADA5Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADA5B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADA60
 * Original: 0x003ADA60 - 0x003ADA6D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADA60: ;
    PUSH32(esp, esi);
    esi = 0x4B60F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADA6Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADA6B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADA70
 * Original: 0x003ADA70 - 0x003ADA7D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADA70: ;
    PUSH32(esp, esi);
    esi = 0x4B6140;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADA7Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADA7B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADA80
 * Original: 0x003ADA80 - 0x003ADA8D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADA80: ;
    PUSH32(esp, esi);
    esi = 0x4B6190;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADA8Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADA8B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADA90
 * Original: 0x003ADA90 - 0x003ADA9D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADA90: ;
    PUSH32(esp, esi);
    esi = 0x4B61E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADA9Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADA9B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADAA0
 * Original: 0x003ADAA0 - 0x003ADAAD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADAA0: ;
    PUSH32(esp, esi);
    esi = 0x4B6230;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADAABu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADAAB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADAB0
 * Original: 0x003ADAB0 - 0x003ADAB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADAB0(void)
{
    int _cf = 0; /* carry flag */

loc_003ADAB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADAC0
 * Original: 0x003ADAC0 - 0x003ADAC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADAC0(void)
{
    int _cf = 0; /* carry flag */

loc_003ADAC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADAD0
 * Original: 0x003ADAD0 - 0x003ADAD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADAD0(void)
{
    int _cf = 0; /* carry flag */

loc_003ADAD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADAE0
 * Original: 0x003ADAE0 - 0x003ADAEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADAE0: ;
    eax = 0x4B6480;
    g_seh_ebp = ebp; sub_00249500(); return; /* tail jmp 0x00249500 */

}

/**
 * sub_003ADAF0
 * Original: 0x003ADAF0 - 0x003ADAFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADAF0: ;
    eax = 0x4BC098;
    g_seh_ebp = ebp; sub_00249C60(); return; /* tail jmp 0x00249C60 */

}

/**
 * sub_003ADB00
 * Original: 0x003ADB00 - 0x003ADB0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADB00: ;
    eax = 0x4BC288;
    g_seh_ebp = ebp; sub_0024A150(); return; /* tail jmp 0x0024A150 */

}

/**
 * sub_003ADB10
 * Original: 0x003ADB10 - 0x003ADB1D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADB10: ;
    PUSH32(esp, esi);
    esi = 0x4BC540;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADB1Bu); RECOMP_ABI_CALL(0x00248B80u, sub_00248B80); /* call 0x00248B80 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADB1B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADB20
 * Original: 0x003ADB20 - 0x003ADB2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADB20: ;
    eax = 0xBCE160;
    g_seh_ebp = ebp; sub_0024AB30(); return; /* tail jmp 0x0024AB30 */

}

/**
 * sub_003ADB30
 * Original: 0x003ADB30 - 0x003ADB3D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADB30: ;
    PUSH32(esp, esi);
    esi = 0x4BC780;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADB3Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADB3B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADB40
 * Original: 0x003ADB40 - 0x003ADB63 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADB40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBDE000;
    edi = 4;
    /* nop */

loc_003ADB50: ;
    _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x24C));
    esi = esi - 0x24C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADB5Du); RECOMP_ABI_CALL(0x0024F900u, sub_0024F900); /* call 0x0024F900 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADB5D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ADB50; /* jne: not equal / not zero */

loc_003ADB60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADB70
 * Original: 0x003ADB70 - 0x003ADB8D (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADB70: ;
    PUSH32(esp, esi);
    esi = 0xBDE370;
    MEM32(0xBDE370) = 0x4961B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADB85u); RECOMP_ABI_CALL(0x002ECAD0u, sub_002ECAD0); /* call 0x002ECAD0 */

loc_003ADB85: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002DB020(); return; /* tail jmp 0x002DB020 */

}

/**
 * sub_003ADB90
 * Original: 0x003ADB90 - 0x003ADB9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADB90: ;
    ecx = 0xBDE020;
    g_seh_ebp = ebp; sub_002E8A70(); return; /* tail jmp 0x002E8A70 */

}

/**
 * sub_003ADBA0
 * Original: 0x003ADBA0 - 0x003ADBBD (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADBA0: ;
    PUSH32(esp, esi);
    esi = 0xBDE0F0;
    MEM32(0xBDE0F0) = 0x4961B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADBB5u); RECOMP_ABI_CALL(0x002ECAD0u, sub_002ECAD0); /* call 0x002ECAD0 */

loc_003ADBB5: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002DB020(); return; /* tail jmp 0x002DB020 */

}

/**
 * sub_003ADBC0
 * Original: 0x003ADBC0 - 0x003ADBCA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADBC0: ;
    ecx = 0xBDE4E0;
    g_seh_ebp = ebp; sub_002E8A70(); return; /* tail jmp 0x002E8A70 */

}

/**
 * sub_003ADBD0
 * Original: 0x003ADBD0 - 0x003ADBDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADBD0: ;
    ecx = 0xBDE1A0;
    g_seh_ebp = ebp; sub_002E8A70(); return; /* tail jmp 0x002E8A70 */

}

/**
 * sub_003ADBE0
 * Original: 0x003ADBE0 - 0x003ADBEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADBE0: ;
    ecx = 0xBDE410;
    g_seh_ebp = ebp; sub_002E8A70(); return; /* tail jmp 0x002E8A70 */

}

/**
 * sub_003ADBF0
 * Original: 0x003ADBF0 - 0x003ADC0D (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADBF0: ;
    PUSH32(esp, esi);
    esi = 0xBDE5B0;
    MEM32(0xBDE5B0) = 0x4961B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADC05u); RECOMP_ABI_CALL(0x002ECAD0u, sub_002ECAD0); /* call 0x002ECAD0 */

loc_003ADC05: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002DB020(); return; /* tail jmp 0x002DB020 */

}

/**
 * sub_003ADC10
 * Original: 0x003ADC10 - 0x003ADC1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADC10: ;
    ecx = 0xBDE660;
    g_seh_ebp = ebp; sub_002E8A70(); return; /* tail jmp 0x002E8A70 */

}

/**
 * sub_003ADC20
 * Original: 0x003ADC20 - 0x003ADC2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADC20: ;
    ecx = 0xBDE270;
    g_seh_ebp = ebp; sub_002E8A70(); return; /* tail jmp 0x002E8A70 */

}

/**
 * sub_003ADC30
 * Original: 0x003ADC30 - 0x003ADC3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADC30(void)
{
    int _cf = 0; /* carry flag */

loc_003ADC30: ;
    MEM32(0x4BC810) = 0x489DC8;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADC40
 * Original: 0x003ADC40 - 0x003ADC5F (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003ADC40: ;
    eax = 0x4BCC00;
    ecx = 4;
    /* nop */

loc_003ADC50: ;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x94));
    eax = eax - 0x94;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0;
    if ((_fa != 0)) goto loc_003ADC50; /* jne: not equal / not zero */

loc_003ADC5E: ;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003ADC60
 * Original: 0x003ADC60 - 0x003ADC74 (20 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADC60: ;
    MEM32(0x4BCB80) = 0x4826B4;
    ecx = 0x4BCB80;
    g_seh_ebp = ebp; sub_0005EB60(); return; /* tail jmp 0x0005EB60 */

}

/**
 * sub_003ADC80
 * Original: 0x003ADC80 - 0x003ADCB0 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADC80: ;
    eax = MEM32(0xBDE894);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003ADCA2; /* je: equal / zero */

loc_003ADC8C: ;
    ecx = MEM32(0xB74438);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADC99u); RECOMP_ABI_CALL(0x002BAF10u, sub_002BAF10); /* call 0x002BAF10 */

loc_003ADC99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0xBDE894) = esi;

loc_003ADCA2: ;
    MEM32(0xBDE89C) = esi;
    MEM32(0xBDE898) = esi;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADCB0
 * Original: 0x003ADCB0 - 0x003ADD0C (92 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003ADCB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0xB743FC);
    ecx = 0xBF7144;
    ebx = 0x380;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003ADCC4: ;
    SET_LO16(eax, MEM16(ecx + -112));
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(0x70));
    ecx = ecx - 0x70;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003ADCFF; /* je: equal / zero */

loc_003ADCD0: ;
    eax = ZX16(LO16(eax));
    _fa = ((int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xC8) != (int64_t)(int32_t)((uint32_t)(eax) * (uint32_t)(0xC8)));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    eax = eax + esi + -200;
    MEM32(eax + 0xC0) = edx;
    MEM32(eax + 0xC4) = edx;
    MEM32(eax + 0xAC) = 0x2AC700;
    MEM32(eax + 0xB0) = eax;
    MEM16(ecx) = LO16(edx);

loc_003ADCFF: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + -100) = 0x492F04;
    if ((_fa != 0)) goto loc_003ADCC4; /* jne: not equal / not zero */

loc_003ADD09: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003ADD10
 * Original: 0x003ADD10 - 0x003ADD1A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADD10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADD10: ;
    ecx = 0xBF7108;
    g_seh_ebp = ebp; sub_0025A030(); return; /* tail jmp 0x0025A030 */

}

/**
 * sub_003ADD20
 * Original: 0x003ADD20 - 0x003ADD3B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADD20: ;
    eax = MEM32(0x4BCD60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003ADD3A; /* je: equal / zero */

loc_003ADD29: ;
    ecx = MEM32(0xB74438);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADD37u); RECOMP_ABI_CALL(0x002BAF10u, sub_002BAF10); /* call 0x002BAF10 */

loc_003ADD37: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ADD3A: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADD40
 * Original: 0x003ADD40 - 0x003ADD5B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADD40: ;
    eax = MEM32(0x4BCD70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003ADD5A; /* je: equal / zero */

loc_003ADD49: ;
    ecx = MEM32(0xB74438);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADD57u); RECOMP_ABI_CALL(0x002BAF10u, sub_002BAF10); /* call 0x002BAF10 */

loc_003ADD57: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ADD5A: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADD60
 * Original: 0x003ADD60 - 0x003ADD7B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADD60: ;
    eax = MEM32(0x4BCD80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003ADD7A; /* je: equal / zero */

loc_003ADD69: ;
    ecx = MEM32(0xB74438);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADD77u); RECOMP_ABI_CALL(0x002BAF10u, sub_002BAF10); /* call 0x002BAF10 */

loc_003ADD77: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ADD7A: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADD80
 * Original: 0x003ADD80 - 0x003ADD8B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADD80(void)
{
    int _cf = 0; /* carry flag */

loc_003ADD80: ;
    MEM32(0x4BEA10) = 0x48908C;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADD90
 * Original: 0x003ADD90 - 0x003ADD9D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADD90: ;
    PUSH32(esp, esi);
    esi = 0x4D90D0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADD9Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADD9B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADDA0
 * Original: 0x003ADDA0 - 0x003ADDAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADDA0(void)
{
    int _cf = 0; /* carry flag */

loc_003ADDA0: ;
    MEM32(0x4D9120) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADDB0
 * Original: 0x003ADDB0 - 0x003ADDBD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADDB0: ;
    PUSH32(esp, esi);
    esi = 0x4D9128;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADDBBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADDBB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADDC0
 * Original: 0x003ADDC0 - 0x003ADDCB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADDC0(void)
{
    int _cf = 0; /* carry flag */

loc_003ADDC0: ;
    MEM32(0x4D9178) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADDD0
 * Original: 0x003ADDD0 - 0x003ADDDD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADDD0: ;
    PUSH32(esp, esi);
    esi = 0x4D9180;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADDDBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADDDB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADDE0
 * Original: 0x003ADDE0 - 0x003ADDEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADDE0(void)
{
    int _cf = 0; /* carry flag */

loc_003ADDE0: ;
    MEM32(0x4D91D0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADDF0
 * Original: 0x003ADDF0 - 0x003ADDFD (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADDF0: ;
    PUSH32(esp, esi);
    esi = 0x4D9220;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADDFBu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADDFB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADE00
 * Original: 0x003ADE00 - 0x003ADE0D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADE00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003ADE00: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x4D9270) = eax;
    MEM32(0x4D9274) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003ADE10
 * Original: 0x003ADE10 - 0x003ADE1D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADE10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003ADE10: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x4D927C) = eax;
    MEM32(0x4D9280) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003ADE20
 * Original: 0x003ADE20 - 0x003ADE2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADE20(void)
{
    int _cf = 0; /* carry flag */

loc_003ADE20: ;
    MEM32(0x4D92D0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADE30
 * Original: 0x003ADE30 - 0x003ADE3D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADE30: ;
    PUSH32(esp, esi);
    esi = 0x4D92D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADE3Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADE3B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADE40
 * Original: 0x003ADE40 - 0x003ADE4D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADE40: ;
    PUSH32(esp, esi);
    esi = 0x4D9370;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADE4Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADE4B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADE50
 * Original: 0x003ADE50 - 0x003ADE5D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADE50: ;
    PUSH32(esp, esi);
    esi = 0x4D9400;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADE5Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADE5B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADE60
 * Original: 0x003ADE60 - 0x003ADE61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADE60(void)
{
    int _cf = 0; /* carry flag */

loc_003ADE60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADE70
 * Original: 0x003ADE70 - 0x003ADE71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADE70(void)
{
    int _cf = 0; /* carry flag */

loc_003ADE70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADE80
 * Original: 0x003ADE80 - 0x003ADE8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADE80(void)
{
    int _cf = 0; /* carry flag */

loc_003ADE80: ;
    MEM32(0x4D9554) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADE90
 * Original: 0x003ADE90 - 0x003ADE9B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADE90(void)
{
    int _cf = 0; /* carry flag */

loc_003ADE90: ;
    MEM32(0x4D9564) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADEA0
 * Original: 0x003ADEA0 - 0x003ADEAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADEA0(void)
{
    int _cf = 0; /* carry flag */

loc_003ADEA0: ;
    MEM32(0x4D9574) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADEB0
 * Original: 0x003ADEB0 - 0x003ADEBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADEB0(void)
{
    int _cf = 0; /* carry flag */

loc_003ADEB0: ;
    MEM32(0x4D9578) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADEC0
 * Original: 0x003ADEC0 - 0x003ADECB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADEC0(void)
{
    int _cf = 0; /* carry flag */

loc_003ADEC0: ;
    MEM32(0x4D95C0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADED0
 * Original: 0x003ADED0 - 0x003ADEDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADED0(void)
{
    int _cf = 0; /* carry flag */

loc_003ADED0: ;
    MEM32(0x4D95D0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADEE0
 * Original: 0x003ADEE0 - 0x003ADEEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADEE0(void)
{
    int _cf = 0; /* carry flag */

loc_003ADEE0: ;
    MEM32(0x4D9620) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADEF0
 * Original: 0x003ADEF0 - 0x003ADEFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADEF0(void)
{
    int _cf = 0; /* carry flag */

loc_003ADEF0: ;
    MEM32(0x4D9630) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADF00
 * Original: 0x003ADF00 - 0x003ADF0B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADF00(void)
{
    int _cf = 0; /* carry flag */

loc_003ADF00: ;
    MEM32(0x4D964C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADF10
 * Original: 0x003ADF10 - 0x003ADF1D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADF10: ;
    PUSH32(esp, esi);
    esi = 0x4D9720;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADF1Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADF1B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADF20
 * Original: 0x003ADF20 - 0x003ADF34 (20 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADF20: ;
    MEM32(0x4D97B0) = 0x4826B4;
    ecx = 0x4D97B0;
    g_seh_ebp = ebp; sub_0005EB60(); return; /* tail jmp 0x0005EB60 */

}

/**
 * sub_003ADF40
 * Original: 0x003ADF40 - 0x003ADF4D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADF40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADF40: ;
    PUSH32(esp, esi);
    esi = 0x4D97C8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADF4Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADF4B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADF50
 * Original: 0x003ADF50 - 0x003ADF5D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADF50: ;
    PUSH32(esp, esi);
    esi = 0x4D99A0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADF5Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADF5B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADF60
 * Original: 0x003ADF60 - 0x003ADF6D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADF60: ;
    PUSH32(esp, esi);
    esi = 0x4D9BF0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADF6Bu); RECOMP_ABI_CALL(0x002D59C0u, sub_002D59C0); /* call 0x002D59C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003ADF6B: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADF70
 * Original: 0x003ADF70 - 0x003ADFA1 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADF70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x4D9D00;
    edi = 4;
    /* nop */

loc_003ADF80: ;
    eax = MEM32(esi + -20);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x14));
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003ADF9B; /* je: equal / zero */

loc_003ADF8A: ;
    ecx = MEM32(0xB74438);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADF98u); RECOMP_ABI_CALL(0x002BAF10u, sub_002BAF10); /* call 0x002BAF10 */

loc_003ADF98: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ADF9B: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ADF80; /* jne: not equal / not zero */

loc_003ADF9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003ADFB0
 * Original: 0x003ADFB0 - 0x003ADFBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADFB0(void)
{
    int _cf = 0; /* carry flag */

loc_003ADFB0: ;
    MEM32(0x4DA1B8) = 0x495C28;
    esp += 4; return; /* ret */

}

/**
 * sub_003ADFC0
 * Original: 0x003ADFC0 - 0x003AE008 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ADFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ADFC0: ;
    ecx = MEM32(0x4DA2F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA2E4) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003ADFE3; /* je: equal / zero */

loc_003ADFD4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADFD9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003ADFD9: ;
    ecx = MEM32(0x4DA2F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003ADFD4; /* jne: not equal / not zero */

loc_003ADFE3: ;
    ecx = 0x4DA2E4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ADFEDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003ADFED: ;
    SET_LO16(eax, MEM16(0x4DA2E8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA2E4) = 0x489DD4;
    MEM16(0x4DA2E8) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE010
 * Original: 0x003AE010 - 0x003AE058 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE010: ;
    ecx = MEM32(0x4DA308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA2FC) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE033; /* je: equal / zero */

loc_003AE024: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE029u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE029: ;
    ecx = MEM32(0x4DA308);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE024; /* jne: not equal / not zero */

loc_003AE033: ;
    ecx = 0x4DA2FC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE03Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE03D: ;
    SET_LO16(eax, MEM16(0x4DA300));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA2FC) = 0x489DD4;
    MEM16(0x4DA300) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE060
 * Original: 0x003AE060 - 0x003AE0A8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE060: ;
    ecx = MEM32(0x4DA320);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA314) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE083; /* je: equal / zero */

loc_003AE074: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE079u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE079: ;
    ecx = MEM32(0x4DA320);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE074; /* jne: not equal / not zero */

loc_003AE083: ;
    ecx = 0x4DA314;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE08Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE08D: ;
    SET_LO16(eax, MEM16(0x4DA318));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA314) = 0x489DD4;
    MEM16(0x4DA318) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE0B0
 * Original: 0x003AE0B0 - 0x003AE0F8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE0B0: ;
    ecx = MEM32(0x4DA338);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA32C) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE0D3; /* je: equal / zero */

loc_003AE0C4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE0C9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE0C9: ;
    ecx = MEM32(0x4DA338);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE0C4; /* jne: not equal / not zero */

loc_003AE0D3: ;
    ecx = 0x4DA32C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE0DDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE0DD: ;
    SET_LO16(eax, MEM16(0x4DA330));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA32C) = 0x489DD4;
    MEM16(0x4DA330) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE100
 * Original: 0x003AE100 - 0x003AE148 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE100: ;
    ecx = MEM32(0x4DA350);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA344) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE123; /* je: equal / zero */

loc_003AE114: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE119u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE119: ;
    ecx = MEM32(0x4DA350);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE114; /* jne: not equal / not zero */

loc_003AE123: ;
    ecx = 0x4DA344;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE12Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE12D: ;
    SET_LO16(eax, MEM16(0x4DA348));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA344) = 0x489DD4;
    MEM16(0x4DA348) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE150
 * Original: 0x003AE150 - 0x003AE198 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE150: ;
    ecx = MEM32(0x4DA368);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA35C) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE173; /* je: equal / zero */

loc_003AE164: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE169u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE169: ;
    ecx = MEM32(0x4DA368);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE164; /* jne: not equal / not zero */

loc_003AE173: ;
    ecx = 0x4DA35C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE17Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE17D: ;
    SET_LO16(eax, MEM16(0x4DA360));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA35C) = 0x489DD4;
    MEM16(0x4DA360) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE1A0
 * Original: 0x003AE1A0 - 0x003AE1E8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE1A0: ;
    ecx = MEM32(0x4DA380);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA374) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE1C3; /* je: equal / zero */

loc_003AE1B4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE1B9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE1B9: ;
    ecx = MEM32(0x4DA380);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE1B4; /* jne: not equal / not zero */

loc_003AE1C3: ;
    ecx = 0x4DA374;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE1CDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE1CD: ;
    SET_LO16(eax, MEM16(0x4DA378));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA374) = 0x489DD4;
    MEM16(0x4DA378) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE1F0
 * Original: 0x003AE1F0 - 0x003AE238 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE1F0: ;
    ecx = MEM32(0x4DA398);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA38C) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE213; /* je: equal / zero */

loc_003AE204: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE209u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE209: ;
    ecx = MEM32(0x4DA398);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE204; /* jne: not equal / not zero */

loc_003AE213: ;
    ecx = 0x4DA38C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE21Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE21D: ;
    SET_LO16(eax, MEM16(0x4DA390));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA38C) = 0x489DD4;
    MEM16(0x4DA390) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE240
 * Original: 0x003AE240 - 0x003AE288 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE240: ;
    ecx = MEM32(0x4DA3B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA3A4) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE263; /* je: equal / zero */

loc_003AE254: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE259u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE259: ;
    ecx = MEM32(0x4DA3B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE254; /* jne: not equal / not zero */

loc_003AE263: ;
    ecx = 0x4DA3A4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE26Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE26D: ;
    SET_LO16(eax, MEM16(0x4DA3A8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA3A4) = 0x489DD4;
    MEM16(0x4DA3A8) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE290
 * Original: 0x003AE290 - 0x003AE2D8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE290: ;
    ecx = MEM32(0x4DA3C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA3BC) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE2B3; /* je: equal / zero */

loc_003AE2A4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE2A9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE2A9: ;
    ecx = MEM32(0x4DA3C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE2A4; /* jne: not equal / not zero */

loc_003AE2B3: ;
    ecx = 0x4DA3BC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE2BDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE2BD: ;
    SET_LO16(eax, MEM16(0x4DA3C0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA3BC) = 0x489DD4;
    MEM16(0x4DA3C0) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE2E0
 * Original: 0x003AE2E0 - 0x003AE328 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE2E0: ;
    ecx = MEM32(0x4DA3E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA3D4) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE303; /* je: equal / zero */

loc_003AE2F4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE2F9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE2F9: ;
    ecx = MEM32(0x4DA3E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE2F4; /* jne: not equal / not zero */

loc_003AE303: ;
    ecx = 0x4DA3D4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE30Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE30D: ;
    SET_LO16(eax, MEM16(0x4DA3D8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA3D4) = 0x489DD4;
    MEM16(0x4DA3D8) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE330
 * Original: 0x003AE330 - 0x003AE378 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE330: ;
    ecx = MEM32(0x4DA440);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA434) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE353; /* je: equal / zero */

loc_003AE344: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE349u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE349: ;
    ecx = MEM32(0x4DA440);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE344; /* jne: not equal / not zero */

loc_003AE353: ;
    ecx = 0x4DA434;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE35Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE35D: ;
    SET_LO16(eax, MEM16(0x4DA438));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA434) = 0x489DD4;
    MEM16(0x4DA438) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE380
 * Original: 0x003AE380 - 0x003AE3C8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE380: ;
    ecx = MEM32(0x4DA458);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA44C) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE3A3; /* je: equal / zero */

loc_003AE394: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE399u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE399: ;
    ecx = MEM32(0x4DA458);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE394; /* jne: not equal / not zero */

loc_003AE3A3: ;
    ecx = 0x4DA44C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE3ADu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE3AD: ;
    SET_LO16(eax, MEM16(0x4DA450));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA44C) = 0x489DD4;
    MEM16(0x4DA450) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE3D0
 * Original: 0x003AE3D0 - 0x003AE418 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE3D0: ;
    ecx = MEM32(0x4DA470);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA464) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE3F3; /* je: equal / zero */

loc_003AE3E4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE3E9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE3E9: ;
    ecx = MEM32(0x4DA470);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE3E4; /* jne: not equal / not zero */

loc_003AE3F3: ;
    ecx = 0x4DA464;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE3FDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE3FD: ;
    SET_LO16(eax, MEM16(0x4DA468));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA464) = 0x489DD4;
    MEM16(0x4DA468) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE420
 * Original: 0x003AE420 - 0x003AE468 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE420: ;
    ecx = MEM32(0x4DA488);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA47C) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE443; /* je: equal / zero */

loc_003AE434: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE439u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE439: ;
    ecx = MEM32(0x4DA488);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE434; /* jne: not equal / not zero */

loc_003AE443: ;
    ecx = 0x4DA47C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE44Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE44D: ;
    SET_LO16(eax, MEM16(0x4DA480));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA47C) = 0x489DD4;
    MEM16(0x4DA480) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE470
 * Original: 0x003AE470 - 0x003AE4B8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE470: ;
    ecx = MEM32(0x4DA4A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA494) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE493; /* je: equal / zero */

loc_003AE484: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE489u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE489: ;
    ecx = MEM32(0x4DA4A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE484; /* jne: not equal / not zero */

loc_003AE493: ;
    ecx = 0x4DA494;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE49Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE49D: ;
    SET_LO16(eax, MEM16(0x4DA498));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA494) = 0x489DD4;
    MEM16(0x4DA498) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE4C0
 * Original: 0x003AE4C0 - 0x003AE508 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE4C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE4C0: ;
    ecx = MEM32(0x4DA4B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA4AC) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE4E3; /* je: equal / zero */

loc_003AE4D4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE4D9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE4D9: ;
    ecx = MEM32(0x4DA4B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE4D4; /* jne: not equal / not zero */

loc_003AE4E3: ;
    ecx = 0x4DA4AC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE4EDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE4ED: ;
    SET_LO16(eax, MEM16(0x4DA4B0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA4AC) = 0x489DD4;
    MEM16(0x4DA4B0) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE510
 * Original: 0x003AE510 - 0x003AE558 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE510: ;
    ecx = MEM32(0x4DA4D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA4C4) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE533; /* je: equal / zero */

loc_003AE524: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE529u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE529: ;
    ecx = MEM32(0x4DA4D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE524; /* jne: not equal / not zero */

loc_003AE533: ;
    ecx = 0x4DA4C4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE53Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE53D: ;
    SET_LO16(eax, MEM16(0x4DA4C8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA4C4) = 0x489DD4;
    MEM16(0x4DA4C8) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE560
 * Original: 0x003AE560 - 0x003AE5A8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE560: ;
    ecx = MEM32(0x4DA4E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA4DC) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE583; /* je: equal / zero */

loc_003AE574: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE579u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE579: ;
    ecx = MEM32(0x4DA4E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE574; /* jne: not equal / not zero */

loc_003AE583: ;
    ecx = 0x4DA4DC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE58Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE58D: ;
    SET_LO16(eax, MEM16(0x4DA4E0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA4DC) = 0x489DD4;
    MEM16(0x4DA4E0) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE5B0
 * Original: 0x003AE5B0 - 0x003AE5F8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE5B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE5B0: ;
    ecx = MEM32(0x4DA500);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA4F4) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE5D3; /* je: equal / zero */

loc_003AE5C4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE5C9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE5C9: ;
    ecx = MEM32(0x4DA500);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE5C4; /* jne: not equal / not zero */

loc_003AE5D3: ;
    ecx = 0x4DA4F4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE5DDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE5DD: ;
    SET_LO16(eax, MEM16(0x4DA4F8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA4F4) = 0x489DD4;
    MEM16(0x4DA4F8) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE600
 * Original: 0x003AE600 - 0x003AE648 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE600: ;
    ecx = MEM32(0x4DA518);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA50C) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE623; /* je: equal / zero */

loc_003AE614: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE619u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE619: ;
    ecx = MEM32(0x4DA518);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE614; /* jne: not equal / not zero */

loc_003AE623: ;
    ecx = 0x4DA50C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE62Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE62D: ;
    SET_LO16(eax, MEM16(0x4DA510));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA50C) = 0x489DD4;
    MEM16(0x4DA510) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE650
 * Original: 0x003AE650 - 0x003AE698 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE650: ;
    ecx = MEM32(0x4DA530);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA524) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE673; /* je: equal / zero */

loc_003AE664: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE669u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE669: ;
    ecx = MEM32(0x4DA530);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE664; /* jne: not equal / not zero */

loc_003AE673: ;
    ecx = 0x4DA524;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE67Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE67D: ;
    SET_LO16(eax, MEM16(0x4DA528));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA524) = 0x489DD4;
    MEM16(0x4DA528) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE6A0
 * Original: 0x003AE6A0 - 0x003AE6E8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE6A0: ;
    ecx = MEM32(0x4DA548);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA53C) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE6C3; /* je: equal / zero */

loc_003AE6B4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE6B9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE6B9: ;
    ecx = MEM32(0x4DA548);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE6B4; /* jne: not equal / not zero */

loc_003AE6C3: ;
    ecx = 0x4DA53C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE6CDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE6CD: ;
    SET_LO16(eax, MEM16(0x4DA540));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA53C) = 0x489DD4;
    MEM16(0x4DA540) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE6F0
 * Original: 0x003AE6F0 - 0x003AE738 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE6F0: ;
    ecx = MEM32(0x4DA5A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA594) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE713; /* je: equal / zero */

loc_003AE704: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE709u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE709: ;
    ecx = MEM32(0x4DA5A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE704; /* jne: not equal / not zero */

loc_003AE713: ;
    ecx = 0x4DA594;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE71Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE71D: ;
    SET_LO16(eax, MEM16(0x4DA598));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA594) = 0x489DD4;
    MEM16(0x4DA598) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE740
 * Original: 0x003AE740 - 0x003AE788 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE740: ;
    ecx = MEM32(0x4DA5B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA5AC) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE763; /* je: equal / zero */

loc_003AE754: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE759u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE759: ;
    ecx = MEM32(0x4DA5B8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE754; /* jne: not equal / not zero */

loc_003AE763: ;
    ecx = 0x4DA5AC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE76Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE76D: ;
    SET_LO16(eax, MEM16(0x4DA5B0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA5AC) = 0x489DD4;
    MEM16(0x4DA5B0) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE790
 * Original: 0x003AE790 - 0x003AE7D8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE790: ;
    ecx = MEM32(0x4DA5D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA5C4) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE7B3; /* je: equal / zero */

loc_003AE7A4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE7A9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE7A9: ;
    ecx = MEM32(0x4DA5D0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE7A4; /* jne: not equal / not zero */

loc_003AE7B3: ;
    ecx = 0x4DA5C4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE7BDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE7BD: ;
    SET_LO16(eax, MEM16(0x4DA5C8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA5C4) = 0x489DD4;
    MEM16(0x4DA5C8) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE7E0
 * Original: 0x003AE7E0 - 0x003AE828 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE7E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE7E0: ;
    ecx = MEM32(0x4DA5E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA5DC) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE803; /* je: equal / zero */

loc_003AE7F4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE7F9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE7F9: ;
    ecx = MEM32(0x4DA5E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE7F4; /* jne: not equal / not zero */

loc_003AE803: ;
    ecx = 0x4DA5DC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE80Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE80D: ;
    SET_LO16(eax, MEM16(0x4DA5E0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA5DC) = 0x489DD4;
    MEM16(0x4DA5E0) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE830
 * Original: 0x003AE830 - 0x003AE878 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE830: ;
    ecx = MEM32(0x4DA600);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA5F4) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE853; /* je: equal / zero */

loc_003AE844: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE849u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE849: ;
    ecx = MEM32(0x4DA600);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE844; /* jne: not equal / not zero */

loc_003AE853: ;
    ecx = 0x4DA5F4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE85Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE85D: ;
    SET_LO16(eax, MEM16(0x4DA5F8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA5F4) = 0x489DD4;
    MEM16(0x4DA5F8) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE880
 * Original: 0x003AE880 - 0x003AE8C8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE880: ;
    ecx = MEM32(0x4DA660);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA654) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE8A3; /* je: equal / zero */

loc_003AE894: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE899u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE899: ;
    ecx = MEM32(0x4DA660);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE894; /* jne: not equal / not zero */

loc_003AE8A3: ;
    ecx = 0x4DA654;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE8ADu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE8AD: ;
    SET_LO16(eax, MEM16(0x4DA658));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA654) = 0x489DD4;
    MEM16(0x4DA658) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE8D0
 * Original: 0x003AE8D0 - 0x003AE918 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE8D0: ;
    ecx = MEM32(0x4DA678);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA66C) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE8F3; /* je: equal / zero */

loc_003AE8E4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE8E9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE8E9: ;
    ecx = MEM32(0x4DA678);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE8E4; /* jne: not equal / not zero */

loc_003AE8F3: ;
    ecx = 0x4DA66C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE8FDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE8FD: ;
    SET_LO16(eax, MEM16(0x4DA670));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA66C) = 0x489DD4;
    MEM16(0x4DA670) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE920
 * Original: 0x003AE920 - 0x003AE968 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE920: ;
    ecx = MEM32(0x4DA690);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA684) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE943; /* je: equal / zero */

loc_003AE934: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE939u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE939: ;
    ecx = MEM32(0x4DA690);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE934; /* jne: not equal / not zero */

loc_003AE943: ;
    ecx = 0x4DA684;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE94Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE94D: ;
    SET_LO16(eax, MEM16(0x4DA688));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA684) = 0x489DD4;
    MEM16(0x4DA688) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE970
 * Original: 0x003AE970 - 0x003AE9B8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE970: ;
    ecx = MEM32(0x4DA6A8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA69C) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE993; /* je: equal / zero */

loc_003AE984: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE989u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE989: ;
    ecx = MEM32(0x4DA6A8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE984; /* jne: not equal / not zero */

loc_003AE993: ;
    ecx = 0x4DA69C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE99Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE99D: ;
    SET_LO16(eax, MEM16(0x4DA6A0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA69C) = 0x489DD4;
    MEM16(0x4DA6A0) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AE9C0
 * Original: 0x003AE9C0 - 0x003AEA08 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AE9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AE9C0: ;
    ecx = MEM32(0x4DA6C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA6B4) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AE9E3; /* je: equal / zero */

loc_003AE9D4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE9D9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE9D9: ;
    ecx = MEM32(0x4DA6C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AE9D4; /* jne: not equal / not zero */

loc_003AE9E3: ;
    ecx = 0x4DA6B4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AE9EDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AE9ED: ;
    SET_LO16(eax, MEM16(0x4DA6B8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA6B4) = 0x489DD4;
    MEM16(0x4DA6B8) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AEA10
 * Original: 0x003AEA10 - 0x003AEA58 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AEA10: ;
    ecx = MEM32(0x4DA6D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA6CC) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AEA33; /* je: equal / zero */

loc_003AEA24: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEA29u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEA29: ;
    ecx = MEM32(0x4DA6D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AEA24; /* jne: not equal / not zero */

loc_003AEA33: ;
    ecx = 0x4DA6CC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEA3Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEA3D: ;
    SET_LO16(eax, MEM16(0x4DA6D0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA6CC) = 0x489DD4;
    MEM16(0x4DA6D0) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AEA60
 * Original: 0x003AEA60 - 0x003AEAA8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AEA60: ;
    ecx = MEM32(0x4DA6F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA6E4) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AEA83; /* je: equal / zero */

loc_003AEA74: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEA79u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEA79: ;
    ecx = MEM32(0x4DA6F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AEA74; /* jne: not equal / not zero */

loc_003AEA83: ;
    ecx = 0x4DA6E4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEA8Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEA8D: ;
    SET_LO16(eax, MEM16(0x4DA6E8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA6E4) = 0x489DD4;
    MEM16(0x4DA6E8) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AEAB0
 * Original: 0x003AEAB0 - 0x003AEAF8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AEAB0: ;
    ecx = MEM32(0x4DA708);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA6FC) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AEAD3; /* je: equal / zero */

loc_003AEAC4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEAC9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEAC9: ;
    ecx = MEM32(0x4DA708);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AEAC4; /* jne: not equal / not zero */

loc_003AEAD3: ;
    ecx = 0x4DA6FC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEADDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEADD: ;
    SET_LO16(eax, MEM16(0x4DA700));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA6FC) = 0x489DD4;
    MEM16(0x4DA700) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AEB00
 * Original: 0x003AEB00 - 0x003AEB48 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AEB00: ;
    ecx = MEM32(0x4DA720);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA714) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AEB23; /* je: equal / zero */

loc_003AEB14: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEB19u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEB19: ;
    ecx = MEM32(0x4DA720);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AEB14; /* jne: not equal / not zero */

loc_003AEB23: ;
    ecx = 0x4DA714;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEB2Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEB2D: ;
    SET_LO16(eax, MEM16(0x4DA718));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA714) = 0x489DD4;
    MEM16(0x4DA718) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AEB50
 * Original: 0x003AEB50 - 0x003AEB98 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AEB50: ;
    ecx = MEM32(0x4DA738);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA72C) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AEB73; /* je: equal / zero */

loc_003AEB64: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEB69u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEB69: ;
    ecx = MEM32(0x4DA738);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AEB64; /* jne: not equal / not zero */

loc_003AEB73: ;
    ecx = 0x4DA72C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEB7Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEB7D: ;
    SET_LO16(eax, MEM16(0x4DA730));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA72C) = 0x489DD4;
    MEM16(0x4DA730) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AEBA0
 * Original: 0x003AEBA0 - 0x003AEBE8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AEBA0: ;
    ecx = MEM32(0x4DA750);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA744) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AEBC3; /* je: equal / zero */

loc_003AEBB4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEBB9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEBB9: ;
    ecx = MEM32(0x4DA750);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AEBB4; /* jne: not equal / not zero */

loc_003AEBC3: ;
    ecx = 0x4DA744;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEBCDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEBCD: ;
    SET_LO16(eax, MEM16(0x4DA748));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA744) = 0x489DD4;
    MEM16(0x4DA748) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AEBF0
 * Original: 0x003AEBF0 - 0x003AEC38 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AEBF0: ;
    ecx = MEM32(0x4DA768);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA75C) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AEC13; /* je: equal / zero */

loc_003AEC04: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEC09u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEC09: ;
    ecx = MEM32(0x4DA768);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AEC04; /* jne: not equal / not zero */

loc_003AEC13: ;
    ecx = 0x4DA75C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEC1Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEC1D: ;
    SET_LO16(eax, MEM16(0x4DA760));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA75C) = 0x489DD4;
    MEM16(0x4DA760) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AEC40
 * Original: 0x003AEC40 - 0x003AEC88 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AEC40: ;
    ecx = MEM32(0x4DA7C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA7B4) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AEC63; /* je: equal / zero */

loc_003AEC54: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEC59u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEC59: ;
    ecx = MEM32(0x4DA7C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AEC54; /* jne: not equal / not zero */

loc_003AEC63: ;
    ecx = 0x4DA7B4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEC6Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEC6D: ;
    SET_LO16(eax, MEM16(0x4DA7B8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA7B4) = 0x489DD4;
    MEM16(0x4DA7B8) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AEC90
 * Original: 0x003AEC90 - 0x003AECD8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AEC90: ;
    ecx = MEM32(0x4DA7D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA7CC) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AECB3; /* je: equal / zero */

loc_003AECA4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AECA9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AECA9: ;
    ecx = MEM32(0x4DA7D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AECA4; /* jne: not equal / not zero */

loc_003AECB3: ;
    ecx = 0x4DA7CC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AECBDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AECBD: ;
    SET_LO16(eax, MEM16(0x4DA7D0));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA7CC) = 0x489DD4;
    MEM16(0x4DA7D0) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AECE0
 * Original: 0x003AECE0 - 0x003AED28 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AECE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AECE0: ;
    ecx = MEM32(0x4DA7F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA7E4) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AED03; /* je: equal / zero */

loc_003AECF4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AECF9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AECF9: ;
    ecx = MEM32(0x4DA7F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AECF4; /* jne: not equal / not zero */

loc_003AED03: ;
    ecx = 0x4DA7E4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AED0Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AED0D: ;
    SET_LO16(eax, MEM16(0x4DA7E8));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA7E4) = 0x489DD4;
    MEM16(0x4DA7E8) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AED30
 * Original: 0x003AED30 - 0x003AED78 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AED30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AED30: ;
    ecx = MEM32(0x4DA808);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA7FC) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AED53; /* je: equal / zero */

loc_003AED44: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AED49u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AED49: ;
    ecx = MEM32(0x4DA808);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AED44; /* jne: not equal / not zero */

loc_003AED53: ;
    ecx = 0x4DA7FC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AED5Du); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AED5D: ;
    SET_LO16(eax, MEM16(0x4DA800));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA7FC) = 0x489DD4;
    MEM16(0x4DA800) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AED80
 * Original: 0x003AED80 - 0x003AEDC8 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AED80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AED80: ;
    ecx = MEM32(0x4DA820);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA814) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AEDA3; /* je: equal / zero */

loc_003AED94: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AED99u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AED99: ;
    ecx = MEM32(0x4DA820);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AED94; /* jne: not equal / not zero */

loc_003AEDA3: ;
    ecx = 0x4DA814;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEDADu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEDAD: ;
    SET_LO16(eax, MEM16(0x4DA818));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA814) = 0x489DD4;
    MEM16(0x4DA818) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AEDD0
 * Original: 0x003AEDD0 - 0x003AEE18 (72 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AEDD0: ;
    ecx = MEM32(0x4DA838);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4DA82C) = 0x493EB4;
    if (CMP_EQ(_fa, _fb)) goto loc_003AEDF3; /* je: equal / zero */

loc_003AEDE4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEDE9u); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEDE9: ;
    ecx = MEM32(0x4DA838);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003AEDE4; /* jne: not equal / not zero */

loc_003AEDF3: ;
    ecx = 0x4DA82C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003AEDFDu); RECOMP_ABI_CALL(0x00292CB0u, sub_00292CB0); /* call 0x00292CB0 */

loc_003AEDFD: ;
    SET_LO16(eax, MEM16(0x4DA830));
    _cf = 0; /* logical op clears CF */
    SET_LO16(eax, LO16(eax) & ((0xFFFC) & 0xFFFFu));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(0x4DA82C) = 0x489DD4;
    MEM16(0x4DA830) = LO16(eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003AEE20
 * Original: 0x003AEE20 - 0x003AEE2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEE20(void)
{
    int _cf = 0; /* carry flag */

loc_003AEE20: ;
    MEM32(0x4DA8C0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AEE30
 * Original: 0x003AEE30 - 0x003AEE3B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEE30(void)
{
    int _cf = 0; /* carry flag */

loc_003AEE30: ;
    MEM32(0x4DABCC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AEE40
 * Original: 0x003AEE40 - 0x003AEE4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003AEE40: ;
    eax = 0x4DABE0;
    g_seh_ebp = ebp; sub_002A6CD0(); return; /* tail jmp 0x002A6CD0 */

}

/**
 * sub_003AEE50
 * Original: 0x003AEE50 - 0x003AEE95 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003AEE50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0x4DAD84;
    esi = 4;
    edx = 0x4DAFB0;

loc_003AEE61: ;
    ecx = MEM32(eax + -60);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x38));
    eax = eax - 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AEE84; /* je: equal / zero */

loc_003AEE6B: ;
    ebx = MEM32(eax);
    MEM32(eax + -4) = edx;
    ecx = MEM32(0x4DAFE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003AEE84; /* je: equal / zero */

loc_003AEE7A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AEE82; /* je: equal / zero */

loc_003AEE7E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + -52) = MEM32(eax + -52) | 4;
    _fa = (uint32_t)(MEM32(eax + -52)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003AEE82: ;
    MEM32(eax) = ecx;

loc_003AEE84: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AEE8F; /* je: equal / zero */

loc_003AEE89: ;
    MEM32(eax) = 0;

loc_003AEE8F: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AEE61; /* jne: not equal / not zero */

loc_003AEE92: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003AEEA0
 * Original: 0x003AEEA0 - 0x003AEEBC (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEEA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003AEEA0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x4DAD68) = eax;
    MEM32(0x4DAD5C) = eax;
    MEM32(0x4DAD60) = eax;
    MEM32(0x4DAD50) = eax;
    MEM32(0x4DAD54) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003AEEC0
 * Original: 0x003AEEC0 - 0x003AEECB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEEC0(void)
{
    int _cf = 0; /* carry flag */

loc_003AEEC0: ;
    MEM32(0x4DAD70) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AEED0
 * Original: 0x003AEED0 - 0x003AEEDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEED0(void)
{
    int _cf = 0; /* carry flag */

loc_003AEED0: ;
    MEM32(0x4DAD80) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AEEE0
 * Original: 0x003AEEE0 - 0x003AEEEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEEE0(void)
{
    int _cf = 0; /* carry flag */

loc_003AEEE0: ;
    MEM32(0x4DAD9C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AEEF0
 * Original: 0x003AEEF0 - 0x003AEF0C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003AEEF0: ;
    eax = 0xBFD8A0;
    ecx = 6;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003AEF00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xC));
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    if ((_fa != 0)) goto loc_003AEF00; /* jne: not equal / not zero */

loc_003AEF0B: ;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003AEF10
 * Original: 0x003AEF10 - 0x003AEF1D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEF10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003AEF10: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x4DADAC) = eax;
    MEM32(0x4DADB0) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003AEF20
 * Original: 0x003AEF20 - 0x003AEF5D (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003AEF20: ;
    PUSH32(esp, edi);
    eax = 0xBFDDC4;
    edi = 0x18;
    goto loc_003AEF30;

loc_003AEF30: ;
    ecx = MEM32(eax + -52);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x34));
    eax = eax - 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AEF58; /* je: equal / zero */

loc_003AEF3A: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003AEF58; /* je: equal / zero */

loc_003AEF41: ;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;

loc_003AEF58: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003AEF30; /* jne: not equal / not zero */

loc_003AEF5B: ;
    POP32(esp, edi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003AEF60
 * Original: 0x003AEF60 - 0x003AEF6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEF60(void)
{
    int _cf = 0; /* carry flag */

loc_003AEF60: ;
    MEM32(0x4DADB8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AEF70
 * Original: 0x003AEF70 - 0x003AEF7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEF70(void)
{
    int _cf = 0; /* carry flag */

loc_003AEF70: ;
    MEM32(0x4DADBC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003AEF80
 * Original: 0x003AEF80 - 0x003AEF9C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003AEF80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003AEF80: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x4DAE18) = eax;
    MEM32(0x4DAE0C) = eax;
    MEM32(0x4DAE10) = eax;
    MEM32(0x4DAE00) = eax;
    MEM32(0x4DAE04) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}
