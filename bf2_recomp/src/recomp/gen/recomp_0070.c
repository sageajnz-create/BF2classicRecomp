/**
 * Star Wars Battlefront 2 - Recompiled code chunk 70
 * Functions: 250 (0x003A6940 - 0x003A85E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003A6940
 * Original: 0x003A6940 - 0x003A6953 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6940(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6940: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD57644)); /* fdiv dword ptr [0xd57644] */
    MEMF(0xD5764C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6960
 * Original: 0x003A6960 - 0x003A696B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6960(void)
{
    int _cf = 0; /* carry flag */

loc_003A6960: ;
    MEM32(0xD58658) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6970
 * Original: 0x003A6970 - 0x003A697B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6970(void)
{
    int _cf = 0; /* carry flag */

loc_003A6970: ;
    MEM32(0xD58660) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6980
 * Original: 0x003A6980 - 0x003A698B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6980(void)
{
    int _cf = 0; /* carry flag */

loc_003A6980: ;
    MEM32(0xD5865C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6990
 * Original: 0x003A6990 - 0x003A69A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6990(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6990: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58658)); /* fdiv dword ptr [0xd58658] */
    MEMF(0xD58664) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A69B0
 * Original: 0x003A69B0 - 0x003A69C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A69B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A69B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58660)); /* fdiv dword ptr [0xd58660] */
    MEMF(0xD58668) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A69D0
 * Original: 0x003A69D0 - 0x003A69DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A69D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A69D0: ;
    MEM32(0xD58654) = 0x3991A2B4;
    esp += 4; return; /* ret */

}

/**
 * sub_003A69E0
 * Original: 0x003A69E0 - 0x003A69EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A69E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A69E0: ;
    MEM32(0xD58670) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A69F0
 * Original: 0x003A69F0 - 0x003A69FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A69F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A69F0: ;
    MEM32(0xD58678) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6A00
 * Original: 0x003A6A00 - 0x003A6A0B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6A00(void)
{
    int _cf = 0; /* carry flag */

loc_003A6A00: ;
    MEM32(0xD58674) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6A10
 * Original: 0x003A6A10 - 0x003A6A23 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6A10(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6A10: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58670)); /* fdiv dword ptr [0xd58670] */
    MEMF(0xD5867C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6A30
 * Original: 0x003A6A30 - 0x003A6A43 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6A30(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6A30: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58678)); /* fdiv dword ptr [0xd58678] */
    MEMF(0xD58680) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6A50
 * Original: 0x003A6A50 - 0x003A6A73 (35 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6A50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x4960CC;
    esi = 0x11;
    edi = 0x4AC5D4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6A66u); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_003A6A66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6A70; /* je: equal / zero */

loc_003A6A6A: ;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;

loc_003A6A70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6A80
 * Original: 0x003A6A80 - 0x003A6AA3 (35 bytes, 13 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6A80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x4960C0;
    esi = 0x11;
    edi = 0xB74594;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6A96u); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_003A6A96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6AA0; /* je: equal / zero */

loc_003A6A9A: ;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;

loc_003A6AA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6AB0
 * Original: 0x003A6AB0 - 0x003A6AD3 (35 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6AB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x4960AC;
    esi = 0x11;
    edi = 0x4AC5D5;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6AC6u); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_003A6AC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6AD0; /* je: equal / zero */

loc_003A6ACA: ;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;

loc_003A6AD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6AE0
 * Original: 0x003A6AE0 - 0x003A6B03 (35 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6AE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x496098;
    esi = 0x11;
    edi = 0x4AC5D6;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6AF6u); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_003A6AF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6B00; /* je: equal / zero */

loc_003A6AFA: ;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;

loc_003A6B00: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6B10
 * Original: 0x003A6B10 - 0x003A6B30 (32 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6B10: ;
    ecx = 0x1000;
    eax = 8;
    edx = 0x4DD170;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6B24u); RECOMP_ABI_CALL(0x002E3350u, sub_002E3350); /* call 0x002E3350 */

loc_003A6B24: ;
    PUSH32(esp, 0x3AF840);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6B2Eu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A6B2E: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6B30
 * Original: 0x003A6B30 - 0x003A6B60 (48 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x496088;
    esi = 0x11;
    edi = 0xB74595;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6B46u); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_003A6B46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6B50; /* je: equal / zero */

loc_003A6B4A: ;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;

loc_003A6B50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6B60
 * Original: 0x003A6B60 - 0x003A6B6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6B60(void)
{
    int _cf = 0; /* carry flag */

loc_003A6B60: ;
    MEM32(0xD58688) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6B70
 * Original: 0x003A6B70 - 0x003A6B7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6B70(void)
{
    int _cf = 0; /* carry flag */

loc_003A6B70: ;
    MEM32(0xD58690) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6B80
 * Original: 0x003A6B80 - 0x003A6B8B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6B80(void)
{
    int _cf = 0; /* carry flag */

loc_003A6B80: ;
    MEM32(0xD5868C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6B90
 * Original: 0x003A6B90 - 0x003A6BA3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6B90(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6B90: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58688)); /* fdiv dword ptr [0xd58688] */
    MEMF(0xD58694) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6BB0
 * Original: 0x003A6BB0 - 0x003A6BC3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6BB0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6BB0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58690)); /* fdiv dword ptr [0xd58690] */
    MEMF(0xD58698) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6BD0
 * Original: 0x003A6BD0 - 0x003A6BDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6BD0(void)
{
    int _cf = 0; /* carry flag */

loc_003A6BD0: ;
    MEM32(0xD5869C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6BE0
 * Original: 0x003A6BE0 - 0x003A6BEB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6BE0(void)
{
    int _cf = 0; /* carry flag */

loc_003A6BE0: ;
    MEM32(0xD586A4) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6BF0
 * Original: 0x003A6BF0 - 0x003A6BFB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6BF0(void)
{
    int _cf = 0; /* carry flag */

loc_003A6BF0: ;
    MEM32(0xD586A0) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6C00
 * Original: 0x003A6C00 - 0x003A6C13 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6C00(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6C00: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5869C)); /* fdiv dword ptr [0xd5869c] */
    MEMF(0xD586A8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6C20
 * Original: 0x003A6C20 - 0x003A6C33 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6C20(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6C20: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD586A4)); /* fdiv dword ptr [0xd586a4] */
    MEMF(0xD586AC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6C40
 * Original: 0x003A6C40 - 0x003A6C4B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6C40(void)
{
    int _cf = 0; /* carry flag */

loc_003A6C40: ;
    MEM32(0xD586B4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6C50
 * Original: 0x003A6C50 - 0x003A6C5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6C50(void)
{
    int _cf = 0; /* carry flag */

loc_003A6C50: ;
    MEM32(0xD586BC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6C60
 * Original: 0x003A6C60 - 0x003A6C6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6C60(void)
{
    int _cf = 0; /* carry flag */

loc_003A6C60: ;
    MEM32(0xD586B8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6C70
 * Original: 0x003A6C70 - 0x003A6C83 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6C70(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6C70: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD586B4)); /* fdiv dword ptr [0xd586b4] */
    MEMF(0xD586C0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6C90
 * Original: 0x003A6C90 - 0x003A6CA3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6C90(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6C90: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD586BC)); /* fdiv dword ptr [0xd586bc] */
    MEMF(0xD586C4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6CB0
 * Original: 0x003A6CB0 - 0x003A6CBC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6CB0: ;
    PUSH32(esp, 0x3AF850);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6CBAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A6CBA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6CC0
 * Original: 0x003A6CC0 - 0x003A6CE3 (35 bytes, 13 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6CC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x496194;
    esi = 0x11;
    edi = 0x4AC5EC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6CD6u); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_003A6CD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6CE0; /* je: equal / zero */

loc_003A6CDA: ;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;

loc_003A6CE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6CF0
 * Original: 0x003A6CF0 - 0x003A6D13 (35 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6CF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x496184;
    esi = 0x11;
    edi = 0x4AC5ED;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A6D06u); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_003A6D06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003A6D10; /* je: equal / zero */

loc_003A6D0A: ;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;

loc_003A6D10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6D20
 * Original: 0x003A6D20 - 0x003A6D2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6D20(void)
{
    int _cf = 0; /* carry flag */

loc_003A6D20: ;
    MEM32(0xD586C8) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6D30
 * Original: 0x003A6D30 - 0x003A6D3B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6D30(void)
{
    int _cf = 0; /* carry flag */

loc_003A6D30: ;
    MEM32(0xD586D0) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6D40
 * Original: 0x003A6D40 - 0x003A6D4B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6D40(void)
{
    int _cf = 0; /* carry flag */

loc_003A6D40: ;
    MEM32(0xD586CC) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6D50
 * Original: 0x003A6D50 - 0x003A6D63 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6D50(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6D50: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD586C8)); /* fdiv dword ptr [0xd586c8] */
    MEMF(0xD586D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6D70
 * Original: 0x003A6D70 - 0x003A6D83 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6D70(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6D70: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD586D0)); /* fdiv dword ptr [0xd586d0] */
    MEMF(0xD586D8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6D90
 * Original: 0x003A6D90 - 0x003A6D9B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6D90(void)
{
    int _cf = 0; /* carry flag */

loc_003A6D90: ;
    MEM32(0xD586DC) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6DA0
 * Original: 0x003A6DA0 - 0x003A6DAB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6DA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A6DA0: ;
    MEM32(0xD586E4) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6DB0
 * Original: 0x003A6DB0 - 0x003A6DBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6DB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A6DB0: ;
    MEM32(0xD586E0) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6DC0
 * Original: 0x003A6DC0 - 0x003A6DD3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6DC0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6DC0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD586DC)); /* fdiv dword ptr [0xd586dc] */
    MEMF(0xD586E8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6DE0
 * Original: 0x003A6DE0 - 0x003A6DF3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6DE0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6DE0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD586E4)); /* fdiv dword ptr [0xd586e4] */
    MEMF(0xD586EC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6E00
 * Original: 0x003A6E00 - 0x003A6E0B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6E00(void)
{
    int _cf = 0; /* carry flag */

loc_003A6E00: ;
    MEM32(0xD586F0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6E10
 * Original: 0x003A6E10 - 0x003A6E1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6E10(void)
{
    int _cf = 0; /* carry flag */

loc_003A6E10: ;
    MEM32(0xD586F8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6E20
 * Original: 0x003A6E20 - 0x003A6E2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6E20(void)
{
    int _cf = 0; /* carry flag */

loc_003A6E20: ;
    MEM32(0xD586F4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6E30
 * Original: 0x003A6E30 - 0x003A6E43 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6E30(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6E30: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD586F0)); /* fdiv dword ptr [0xd586f0] */
    MEMF(0xD586FC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6E50
 * Original: 0x003A6E50 - 0x003A6E63 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6E50(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6E50: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD586F8)); /* fdiv dword ptr [0xd586f8] */
    MEMF(0xD58700) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6E70
 * Original: 0x003A6E70 - 0x003A6E7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6E70(void)
{
    int _cf = 0; /* carry flag */

loc_003A6E70: ;
    MEM32(0xD58704) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6E80
 * Original: 0x003A6E80 - 0x003A6E8B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6E80(void)
{
    int _cf = 0; /* carry flag */

loc_003A6E80: ;
    MEM32(0xD5870C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6E90
 * Original: 0x003A6E90 - 0x003A6E9B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6E90(void)
{
    int _cf = 0; /* carry flag */

loc_003A6E90: ;
    MEM32(0xD58708) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6EA0
 * Original: 0x003A6EA0 - 0x003A6EB3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6EA0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6EA0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58704)); /* fdiv dword ptr [0xd58704] */
    MEMF(0xD58710) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6EC0
 * Original: 0x003A6EC0 - 0x003A6ED3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6EC0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6EC0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5870C)); /* fdiv dword ptr [0xd5870c] */
    MEMF(0xD58714) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6EE0
 * Original: 0x003A6EE0 - 0x003A6F0C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A6EE0: ;
    edx = 0x495E40;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x69);
    /* nop */

loc_003A6EF0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003A6EF0; /* jne: not equal / not zero */

loc_003A6F06: ;
    MEM32(0xD58718) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A6F10
 * Original: 0x003A6F10 - 0x003A6F1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6F10(void)
{
    int _cf = 0; /* carry flag */

loc_003A6F10: ;
    MEM32(0xD5871C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6F20
 * Original: 0x003A6F20 - 0x003A6F2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6F20(void)
{
    int _cf = 0; /* carry flag */

loc_003A6F20: ;
    MEM32(0xD58724) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6F30
 * Original: 0x003A6F30 - 0x003A6F3B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6F30(void)
{
    int _cf = 0; /* carry flag */

loc_003A6F30: ;
    MEM32(0xD58720) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6F40
 * Original: 0x003A6F40 - 0x003A6F53 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6F40(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6F40: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5871C)); /* fdiv dword ptr [0xd5871c] */
    MEMF(0xD58728) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6F60
 * Original: 0x003A6F60 - 0x003A6F73 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6F60(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6F60: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58724)); /* fdiv dword ptr [0xd58724] */
    MEMF(0xD5872C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6F80
 * Original: 0x003A6F80 - 0x003A6F8B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6F80(void)
{
    int _cf = 0; /* carry flag */

loc_003A6F80: ;
    MEM32(0xD58730) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6F90
 * Original: 0x003A6F90 - 0x003A6F9B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6F90(void)
{
    int _cf = 0; /* carry flag */

loc_003A6F90: ;
    MEM32(0xD58738) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6FA0
 * Original: 0x003A6FA0 - 0x003A6FAB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6FA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A6FA0: ;
    MEM32(0xD58734) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6FB0
 * Original: 0x003A6FB0 - 0x003A6FC3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6FB0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6FB0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58730)); /* fdiv dword ptr [0xd58730] */
    MEMF(0xD5873C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6FD0
 * Original: 0x003A6FD0 - 0x003A6FE3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6FD0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6FD0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58738)); /* fdiv dword ptr [0xd58738] */
    MEMF(0xD58740) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6FF0
 * Original: 0x003A6FF0 - 0x003A6FFB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6FF0(void)
{
    int _cf = 0; /* carry flag */

loc_003A6FF0: ;
    MEM32(0xD58744) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7000
 * Original: 0x003A7000 - 0x003A700B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7000(void)
{
    int _cf = 0; /* carry flag */

loc_003A7000: ;
    MEM32(0xD5874C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7010
 * Original: 0x003A7010 - 0x003A701B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7010(void)
{
    int _cf = 0; /* carry flag */

loc_003A7010: ;
    MEM32(0xD58748) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7020
 * Original: 0x003A7020 - 0x003A7033 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7020(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7020: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58744)); /* fdiv dword ptr [0xd58744] */
    MEMF(0xD58750) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7040
 * Original: 0x003A7040 - 0x003A7053 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7040(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7040: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5874C)); /* fdiv dword ptr [0xd5874c] */
    MEMF(0xD58754) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7060
 * Original: 0x003A7060 - 0x003A709D (61 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A7060: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x4ACE84);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xD58760);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A708Fu); RECOMP_ABI_CALL(0x002EDD30u, sub_002EDD30); /* call 0x002EDD30 */

loc_003A708F: ;
    PUSH32(esp, 0x3AF870);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7099u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A7099: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A70A0
 * Original: 0x003A70A0 - 0x003A70AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A70A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A70A0: ;
    MEM32(0xD58830) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A70B0
 * Original: 0x003A70B0 - 0x003A70BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A70B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A70B0: ;
    MEM32(0xD58838) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A70C0
 * Original: 0x003A70C0 - 0x003A70CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A70C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A70C0: ;
    MEM32(0xD58834) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A70D0
 * Original: 0x003A70D0 - 0x003A70E3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A70D0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A70D0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58830)); /* fdiv dword ptr [0xd58830] */
    MEMF(0xD5883C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A70F0
 * Original: 0x003A70F0 - 0x003A7103 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A70F0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A70F0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58838)); /* fdiv dword ptr [0xd58838] */
    MEMF(0xD58840) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7110
 * Original: 0x003A7110 - 0x003A713C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7110: ;
    edx = 0x4962D8;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x69);
    /* nop */

loc_003A7120: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003A7120; /* jne: not equal / not zero */

loc_003A7136: ;
    MEM32(0xD58844) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7140
 * Original: 0x003A7140 - 0x003A714B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7140(void)
{
    int _cf = 0; /* carry flag */

loc_003A7140: ;
    MEM32(0xD58848) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7150
 * Original: 0x003A7150 - 0x003A715B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7150(void)
{
    int _cf = 0; /* carry flag */

loc_003A7150: ;
    MEM32(0xD58850) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7160
 * Original: 0x003A7160 - 0x003A716B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7160(void)
{
    int _cf = 0; /* carry flag */

loc_003A7160: ;
    MEM32(0xD5884C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7170
 * Original: 0x003A7170 - 0x003A7183 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7170(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7170: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58848)); /* fdiv dword ptr [0xd58848] */
    MEMF(0xD58854) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7190
 * Original: 0x003A7190 - 0x003A71A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7190(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7190: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58850)); /* fdiv dword ptr [0xd58850] */
    MEMF(0xD58858) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A71B0
 * Original: 0x003A71B0 - 0x003A71BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A71B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A71B0: ;
    MEM32(0xD5885C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A71C0
 * Original: 0x003A71C0 - 0x003A71CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A71C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A71C0: ;
    MEM32(0xD58864) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A71D0
 * Original: 0x003A71D0 - 0x003A71DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A71D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A71D0: ;
    MEM32(0xD58860) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A71E0
 * Original: 0x003A71E0 - 0x003A71F3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A71E0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A71E0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5885C)); /* fdiv dword ptr [0xd5885c] */
    MEMF(0xD58868) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7200
 * Original: 0x003A7200 - 0x003A7213 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7200(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7200: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58864)); /* fdiv dword ptr [0xd58864] */
    MEMF(0xD5886C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7220
 * Original: 0x003A7220 - 0x003A722C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A7220: ;
    PUSH32(esp, 0x3AF890);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A722Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A722A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A7230
 * Original: 0x003A7230 - 0x003A723C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A7230: ;
    PUSH32(esp, 0x3AF8D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A723Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A723A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A7240
 * Original: 0x003A7240 - 0x003A724B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7240(void)
{
    int _cf = 0; /* carry flag */

loc_003A7240: ;
    MEM32(0xD58870) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7250
 * Original: 0x003A7250 - 0x003A725B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7250(void)
{
    int _cf = 0; /* carry flag */

loc_003A7250: ;
    MEM32(0xD58878) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7260
 * Original: 0x003A7260 - 0x003A726B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7260(void)
{
    int _cf = 0; /* carry flag */

loc_003A7260: ;
    MEM32(0xD58874) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7270
 * Original: 0x003A7270 - 0x003A7283 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7270(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7270: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58870)); /* fdiv dword ptr [0xd58870] */
    MEMF(0xD5887C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7290
 * Original: 0x003A7290 - 0x003A72A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7290(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7290: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD58878)); /* fdiv dword ptr [0xd58878] */
    MEMF(0xD58880) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A72B0
 * Original: 0x003A72B0 - 0x003A72BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A72B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A72B0: ;
    MEM32(0xD5B888) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A72C0
 * Original: 0x003A72C0 - 0x003A72CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A72C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A72C0: ;
    MEM32(0xD5B890) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A72D0
 * Original: 0x003A72D0 - 0x003A72DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A72D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A72D0: ;
    MEM32(0xD5B88C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A72E0
 * Original: 0x003A72E0 - 0x003A72F3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A72E0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A72E0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5B888)); /* fdiv dword ptr [0xd5b888] */
    MEMF(0xD5B894) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7300
 * Original: 0x003A7300 - 0x003A7313 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7300(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7300: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5B890)); /* fdiv dword ptr [0xd5b890] */
    MEMF(0xD5B898) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7320
 * Original: 0x003A7320 - 0x003A734C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7320: ;
    edx = 0x4963C0;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x69);
    /* nop */

loc_003A7330: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003A7330; /* jne: not equal / not zero */

loc_003A7346: ;
    MEM32(0xD5B89C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7325
 * Original: 0x003A7325 - 0x003A734C (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7325(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7325: ;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x69);
    /* nop */

loc_003A7330: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003A7330; /* jne: not equal / not zero */

loc_003A7346: ;
    MEM32(0xD5B89C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7350
 * Original: 0x003A7350 - 0x003A735B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7350(void)
{
    int _cf = 0; /* carry flag */

loc_003A7350: ;
    MEM32(0xD5B8A0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7360
 * Original: 0x003A7360 - 0x003A736B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7360(void)
{
    int _cf = 0; /* carry flag */

loc_003A7360: ;
    MEM32(0xD5B8A8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7370
 * Original: 0x003A7370 - 0x003A737B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7370(void)
{
    int _cf = 0; /* carry flag */

loc_003A7370: ;
    MEM32(0xD5B8A4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7380
 * Original: 0x003A7380 - 0x003A7393 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7380(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7380: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5B8A0)); /* fdiv dword ptr [0xd5b8a0] */
    MEMF(0xD5B8AC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A73A0
 * Original: 0x003A73A0 - 0x003A73B3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A73A0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A73A0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5B8A8)); /* fdiv dword ptr [0xd5b8a8] */
    MEMF(0xD5B8B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A73C0
 * Original: 0x003A73C0 - 0x003A73CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A73C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A73C0: ;
    MEM32(0xD5B8B4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A73D0
 * Original: 0x003A73D0 - 0x003A73DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A73D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A73D0: ;
    MEM32(0xD5B8BC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A73E0
 * Original: 0x003A73E0 - 0x003A73EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A73E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A73E0: ;
    MEM32(0xD5B8B8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A73F0
 * Original: 0x003A73F0 - 0x003A7403 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A73F0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A73F0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5B8B4)); /* fdiv dword ptr [0xd5b8b4] */
    MEMF(0xD5B8C0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7410
 * Original: 0x003A7410 - 0x003A7423 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7410(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7410: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5B8BC)); /* fdiv dword ptr [0xd5b8bc] */
    MEMF(0xD5B8C4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7430
 * Original: 0x003A7430 - 0x003A7487 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A7430: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x496464);
    PUSH32(esp, 0x4DEAE0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7441u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_003A7441: ;
    MEM8(0x4DEAFF) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A744Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_003A744D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4DEAD0;
    MEM32(0x4DEAD0) = eax;
    MEM32(0x4DEAD4) = eax;
    MEM32(0x4DEADC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4DEAD8) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4DEAD8);
    PUSH32(esp, 0x3AF910);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7483u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A7483: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A7490
 * Original: 0x003A7490 - 0x003A74E7 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A7490: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x49644C);
    PUSH32(esp, 0x4DEB30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A74A1u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_003A74A1: ;
    MEM8(0x4DEB4F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A74ADu); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_003A74AD: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4DEB20;
    MEM32(0x4DEB20) = eax;
    MEM32(0x4DEB24) = eax;
    MEM32(0x4DEB2C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4DEB28) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4DEB28);
    PUSH32(esp, 0x3AF920);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A74E3u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A74E3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A74F0
 * Original: 0x003A74F0 - 0x003A74FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A74F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A74F0: ;
    MEM32(0xD5B918) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7500
 * Original: 0x003A7500 - 0x003A750B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7500(void)
{
    int _cf = 0; /* carry flag */

loc_003A7500: ;
    MEM32(0xD5B920) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7510
 * Original: 0x003A7510 - 0x003A751B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7510(void)
{
    int _cf = 0; /* carry flag */

loc_003A7510: ;
    MEM32(0xD5B91C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7520
 * Original: 0x003A7520 - 0x003A7533 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7520(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7520: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5B918)); /* fdiv dword ptr [0xd5b918] */
    MEMF(0xD5B924) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7540
 * Original: 0x003A7540 - 0x003A7553 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7540(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7540: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5B920)); /* fdiv dword ptr [0xd5b920] */
    MEMF(0xD5B928) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7560
 * Original: 0x003A7560 - 0x003A75B7 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A7560: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 8;
    edi = esp + 0xC;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3EB33333;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7592u); RECOMP_ABI_CALL(0x000CC820u, sub_000CC820); /* call 0x000CC820 */

loc_003A7592: ;
    eax = MEM32(esp + 8);
    MEM8(0xD5B944) = LO8(eax);
    MEM8(0xD5B945) = HI8(eax);
    SET_LO16(eax, MEM16(esp + 0xA));
    POP32(esp, edi);
    MEM8(0xD5B946) = LO8(eax);
    MEM8(0xD5B947) = HI8(eax);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A75C0
 * Original: 0x003A75C0 - 0x003A75CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A75C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A75C0: ;
    MEM32(0xD5B970) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A75D0
 * Original: 0x003A75D0 - 0x003A75DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A75D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A75D0: ;
    MEM32(0xD5B978) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A75E0
 * Original: 0x003A75E0 - 0x003A75EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A75E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A75E0: ;
    MEM32(0xD5B974) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A75F0
 * Original: 0x003A75F0 - 0x003A7603 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A75F0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A75F0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5B970)); /* fdiv dword ptr [0xd5b970] */
    MEMF(0xD5B97C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7610
 * Original: 0x003A7610 - 0x003A7623 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7610(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7610: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5B978)); /* fdiv dword ptr [0xd5b978] */
    MEMF(0xD5C920) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7630
 * Original: 0x003A7630 - 0x003A763C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A7630: ;
    PUSH32(esp, 0x3AF930);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A763Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A763A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A7640
 * Original: 0x003A7640 - 0x003A764C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A7640: ;
    PUSH32(esp, 0x3AF940);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A764Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A764A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A7650
 * Original: 0x003A7650 - 0x003A765B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7650(void)
{
    int _cf = 0; /* carry flag */

loc_003A7650: ;
    MEM32(0xD5CA00) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7660
 * Original: 0x003A7660 - 0x003A766B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7660(void)
{
    int _cf = 0; /* carry flag */

loc_003A7660: ;
    MEM32(0xD5CA08) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7670
 * Original: 0x003A7670 - 0x003A767B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7670(void)
{
    int _cf = 0; /* carry flag */

loc_003A7670: ;
    MEM32(0xD5CA04) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7680
 * Original: 0x003A7680 - 0x003A7693 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7680(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7680: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5CA00)); /* fdiv dword ptr [0xd5ca00] */
    MEMF(0xD5CA0C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A76A0
 * Original: 0x003A76A0 - 0x003A76B3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A76A0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A76A0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5CA08)); /* fdiv dword ptr [0xd5ca08] */
    MEMF(0xD5CA10) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A76C0
 * Original: 0x003A76C0 - 0x003A7717 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A76C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A76C0: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x4964E0);
    PUSH32(esp, 0x4DECA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A76D1u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_003A76D1: ;
    MEM8(0x4DECBF) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A76DDu); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_003A76DD: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4DEC90;
    MEM32(0x4DEC90) = eax;
    MEM32(0x4DEC94) = eax;
    MEM32(0x4DEC9C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4DEC98) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4DEC98);
    PUSH32(esp, 0x3AF950);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7713u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A7713: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A7720
 * Original: 0x003A7720 - 0x003A77B9 (153 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A7720: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO16(eax, MEM16(0x4ACE2A));
    ecx = ZX8(LO8(eax));
    MEM32(esp) = ecx;
    ecx = MEM32(0x4ACE28);
    edx = ZX8(HI8(ecx));
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C28)); /* fmul dword ptr [0x497c28] */
    ecx = ZX8(LO8(ecx));
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ZX8(HI8(eax));
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C28)); /* fmul dword ptr [0x497c28] */
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xD5C940);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = edx;
    edx = esp + 0x1C;
    MEM32(esp + 0x10) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C28)); /* fmul dword ptr [0x497c28] */
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C28)); /* fmul dword ptr [0x497c28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A77ABu); RECOMP_ABI_CALL(0x002F6BB0u, sub_002F6BB0); /* call 0x002F6BB0 */

loc_003A77AB: ;
    PUSH32(esp, 0x3AF960);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A77B5u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A77B5: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A77C0
 * Original: 0x003A77C0 - 0x003A77CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A77C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A77C0: ;
    MEM32(0xD5CA14) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A77D0
 * Original: 0x003A77D0 - 0x003A77DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A77D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A77D0: ;
    MEM32(0xD5CA1C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A77E0
 * Original: 0x003A77E0 - 0x003A77EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A77E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A77E0: ;
    MEM32(0xD5CA18) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A77F0
 * Original: 0x003A77F0 - 0x003A7803 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A77F0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A77F0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5CA14)); /* fdiv dword ptr [0xd5ca14] */
    MEMF(0xD5CA20) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7810
 * Original: 0x003A7810 - 0x003A7823 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7810(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7810: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5CA1C)); /* fdiv dword ptr [0xd5ca1c] */
    MEMF(0xD5CA24) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7830
 * Original: 0x003A7830 - 0x003A785F (47 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A7830: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x4DA928);
    PUSH32(esp, 0x4ACE84);
    PUSH32(esp, 0xD5CA30);
    edx = 0xB7494C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7853u); RECOMP_ABI_CALL(0x002F7850u, sub_002F7850); /* call 0x002F7850 */

loc_003A7853: ;
    PUSH32(esp, 0x3AF980);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A785Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A785D: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A7860
 * Original: 0x003A7860 - 0x003A786B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7860(void)
{
    int _cf = 0; /* carry flag */

loc_003A7860: ;
    MEM32(0xD5D344) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7870
 * Original: 0x003A7870 - 0x003A787B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7870(void)
{
    int _cf = 0; /* carry flag */

loc_003A7870: ;
    MEM32(0xD5D34C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7880
 * Original: 0x003A7880 - 0x003A788B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7880(void)
{
    int _cf = 0; /* carry flag */

loc_003A7880: ;
    MEM32(0xD5D348) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7890
 * Original: 0x003A7890 - 0x003A78A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7890(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7890: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5D344)); /* fdiv dword ptr [0xd5d344] */
    MEMF(0xD5D350) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A78B0
 * Original: 0x003A78B0 - 0x003A78C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A78B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A78B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5D34C)); /* fdiv dword ptr [0xd5d34c] */
    MEMF(0xD5D35C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A78D0
 * Original: 0x003A78D0 - 0x003A78E1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A78D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A78D0: ;
    eax = MEM32(0xB74710);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74710) = eax;
    MEM32(0xD5DBB4) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A78F0
 * Original: 0x003A78F0 - 0x003A7901 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A78F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A78F0: ;
    eax = MEM32(0xB74880);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74880) = eax;
    MEM32(0xD5CB00) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7910
 * Original: 0x003A7910 - 0x003A7921 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7910: ;
    eax = MEM32(0xB748E0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB748E0) = eax;
    MEM32(0xD5CB10) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7930
 * Original: 0x003A7930 - 0x003A7941 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7930: ;
    eax = MEM32(0xB748F0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB748F0) = eax;
    MEM32(0xD5D37C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7950
 * Original: 0x003A7950 - 0x003A7961 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7950: ;
    eax = MEM32(0xB74824);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74824) = eax;
    MEM32(0xD5D368) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7970
 * Original: 0x003A7970 - 0x003A7981 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7970: ;
    eax = MEM32(0xB74658);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74658) = eax;
    MEM32(0xD5D370) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7990
 * Original: 0x003A7990 - 0x003A79A1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7990: ;
    eax = MEM32(0xB74744);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74744) = eax;
    MEM32(0xD5D360) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A79B0
 * Original: 0x003A79B0 - 0x003A79C1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A79B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A79B0: ;
    eax = MEM32(0xB748CC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB748CC) = eax;
    MEM32(0xD5CB18) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A79D0
 * Original: 0x003A79D0 - 0x003A79E1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A79D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A79D0: ;
    eax = MEM32(0xB74800);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74800) = eax;
    MEM32(0xD5CB08) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A79F0
 * Original: 0x003A79F0 - 0x003A7A01 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A79F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A79F0: ;
    eax = MEM32(0xB748D4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB748D4) = eax;
    MEM32(0xD5DBA0) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7A10
 * Original: 0x003A7A10 - 0x003A7A21 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7A10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7A10: ;
    eax = MEM32(0xB74874);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74874) = eax;
    MEM32(0xD5DBA8) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7A30
 * Original: 0x003A7A30 - 0x003A7A41 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7A30: ;
    eax = MEM32(0xB748F8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB748F8) = eax;
    MEM32(0xD5DB9C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7A50
 * Original: 0x003A7A50 - 0x003A7A61 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7A50: ;
    eax = MEM32(0xB74628);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74628) = eax;
    MEM32(0xD5D364) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7A70
 * Original: 0x003A7A70 - 0x003A7A81 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7A70: ;
    eax = MEM32(0xB74728);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74728) = eax;
    MEM32(0xD5D378) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7A90
 * Original: 0x003A7A90 - 0x003A7AA1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7A90: ;
    eax = MEM32(0xB74860);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74860) = eax;
    MEM32(0xD5DB90) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7AB0
 * Original: 0x003A7AB0 - 0x003A7AC1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7AB0: ;
    eax = MEM32(0xB74810);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74810) = eax;
    MEM32(0xD5D36C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7AD0
 * Original: 0x003A7AD0 - 0x003A7AE1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7AD0: ;
    eax = MEM32(0xB74868);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74868) = eax;
    MEM32(0xD5DBB0) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7AF0
 * Original: 0x003A7AF0 - 0x003A7B01 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7AF0: ;
    eax = MEM32(0xB74904);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74904) = eax;
    MEM32(0xD5DBA4) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7B10
 * Original: 0x003A7B10 - 0x003A7B21 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7B10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7B10: ;
    eax = MEM32(0xB74848);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74848) = eax;
    MEM32(0xD5D33C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7B30
 * Original: 0x003A7B30 - 0x003A7B41 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7B30: ;
    eax = MEM32(0xB7490C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB7490C) = eax;
    MEM32(0xD5CB1C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7B50
 * Original: 0x003A7B50 - 0x003A7B61 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7B50: ;
    eax = MEM32(0xB74840);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74840) = eax;
    MEM32(0xD5DBAC) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7B70
 * Original: 0x003A7B70 - 0x003A7B81 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7B70: ;
    eax = MEM32(0xB7482C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB7482C) = eax;
    MEM32(0xD5CB2C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7B90
 * Original: 0x003A7B90 - 0x003A7BA1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7B90: ;
    eax = MEM32(0xB74808);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74808) = eax;
    MEM32(0xD5DB8C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7BB0
 * Original: 0x003A7BB0 - 0x003A7BC1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7BB0: ;
    eax = MEM32(0xB747F4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB747F4) = eax;
    MEM32(0xD5DB98) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7BD0
 * Original: 0x003A7BD0 - 0x003A7BE1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7BD0: ;
    eax = MEM32(0xB7471C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB7471C) = eax;
    MEM32(0xD5D340) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7BF0
 * Original: 0x003A7BF0 - 0x003A7C01 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7BF0: ;
    eax = MEM32(0xB74918);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74918) = eax;
    MEM32(0xD5CB14) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7C10
 * Original: 0x003A7C10 - 0x003A7C21 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7C10: ;
    eax = MEM32(0xB748E8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB748E8) = eax;
    MEM32(0xD5CB04) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7C30
 * Original: 0x003A7C30 - 0x003A7C41 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7C30: ;
    eax = MEM32(0xB7481C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB7481C) = eax;
    MEM32(0xD5DB94) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7C50
 * Original: 0x003A7C50 - 0x003A7C61 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7C50: ;
    eax = MEM32(0xB748C4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB748C4) = eax;
    MEM32(0xD5D354) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7C70
 * Original: 0x003A7C70 - 0x003A7C81 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7C70: ;
    eax = MEM32(0xB74850);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74850) = eax;
    MEM32(0xD5CB0C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7C90
 * Original: 0x003A7C90 - 0x003A7CA1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7C90: ;
    eax = MEM32(0xB746E4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB746E4) = eax;
    MEM32(0xD5CB30) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7CB0
 * Original: 0x003A7CB0 - 0x003A7CC1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7CB0: ;
    eax = MEM32(0xB74838);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB74838) = eax;
    MEM32(0xD5CB28) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7CD0
 * Original: 0x003A7CD0 - 0x003A7CE1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7CD0: ;
    eax = MEM32(0xB748B0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB748B0) = eax;
    MEM32(0xD5D374) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7CF0
 * Original: 0x003A7CF0 - 0x003A7D01 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7CF0: ;
    eax = MEM32(0xB748A4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB748A4) = eax;
    MEM32(0xD5D380) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7D10
 * Original: 0x003A7D10 - 0x003A7D21 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A7D10: ;
    eax = MEM32(0xB748B8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0xB748B8) = eax;
    MEM32(0xD5D358) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A7D30
 * Original: 0x003A7D30 - 0x003A7D3B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7D30(void)
{
    int _cf = 0; /* carry flag */

loc_003A7D30: ;
    MEM32(0xD5DBB8) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7D40
 * Original: 0x003A7D40 - 0x003A7D4B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7D40(void)
{
    int _cf = 0; /* carry flag */

loc_003A7D40: ;
    MEM32(0xD5DBC0) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7D50
 * Original: 0x003A7D50 - 0x003A7D5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7D50(void)
{
    int _cf = 0; /* carry flag */

loc_003A7D50: ;
    MEM32(0xD5DBBC) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7D60
 * Original: 0x003A7D60 - 0x003A7D73 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7D60(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7D60: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5DBB8)); /* fdiv dword ptr [0xd5dbb8] */
    MEMF(0xD5DBC4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7D80
 * Original: 0x003A7D80 - 0x003A7D93 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7D80(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7D80: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5DBC0)); /* fdiv dword ptr [0xd5dbc0] */
    MEMF(0xD5DBC8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7DA0
 * Original: 0x003A7DA0 - 0x003A7DF7 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A7DA0: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x4965BC);
    PUSH32(esp, 0x4DED70);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7DB1u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_003A7DB1: ;
    MEM8(0x4DED8F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7DBDu); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_003A7DBD: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4DED60;
    MEM32(0x4DED60) = eax;
    MEM32(0x4DED64) = eax;
    MEM32(0x4DED6C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4DED68) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4DED68);
    PUSH32(esp, 0x3AF9A0);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7DF3u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A7DF3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A7E00
 * Original: 0x003A7E00 - 0x003A7E0B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7E00(void)
{
    int _cf = 0; /* carry flag */

loc_003A7E00: ;
    MEM32(0xD5DBCC) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7E10
 * Original: 0x003A7E10 - 0x003A7E1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7E10(void)
{
    int _cf = 0; /* carry flag */

loc_003A7E10: ;
    MEM32(0xD5DBD4) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7E20
 * Original: 0x003A7E20 - 0x003A7E2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7E20(void)
{
    int _cf = 0; /* carry flag */

loc_003A7E20: ;
    MEM32(0xD5DBD0) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7E30
 * Original: 0x003A7E30 - 0x003A7E43 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7E30(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7E30: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5DBCC)); /* fdiv dword ptr [0xd5dbcc] */
    MEMF(0xD5DBD8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7E50
 * Original: 0x003A7E50 - 0x003A7E63 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7E50(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7E50: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5DBD4)); /* fdiv dword ptr [0xd5dbd4] */
    MEMF(0xD5DBDC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7E70
 * Original: 0x003A7E70 - 0x003A7EC7 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A7E70: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x4965D8);
    PUSH32(esp, 0x4DEE48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7E81u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_003A7E81: ;
    MEM8(0x4DEE67) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7E8Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_003A7E8D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4DEE38;
    MEM32(0x4DEE38) = eax;
    MEM32(0x4DEE3C) = eax;
    MEM32(0x4DEE44) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4DEE40) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4DEE40);
    PUSH32(esp, 0x3AF9B0);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7EC3u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A7EC3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A7ED0
 * Original: 0x003A7ED0 - 0x003A7EDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7ED0(void)
{
    int _cf = 0; /* carry flag */

loc_003A7ED0: ;
    MEM32(0xD5FBE4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7EE0
 * Original: 0x003A7EE0 - 0x003A7EEB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7EE0(void)
{
    int _cf = 0; /* carry flag */

loc_003A7EE0: ;
    MEM32(0xD5FBEC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7EF0
 * Original: 0x003A7EF0 - 0x003A7EFB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7EF0(void)
{
    int _cf = 0; /* carry flag */

loc_003A7EF0: ;
    MEM32(0xD5FBE8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7F00
 * Original: 0x003A7F00 - 0x003A7F13 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7F00(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7F00: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5FBE4)); /* fdiv dword ptr [0xd5fbe4] */
    MEMF(0xD5FBF0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7F20
 * Original: 0x003A7F20 - 0x003A7F33 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7F20(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7F20: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5FBEC)); /* fdiv dword ptr [0xd5fbec] */
    MEMF(0xD5FBF4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7F40
 * Original: 0x003A7F40 - 0x003A7F97 (87 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A7F40: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x4965F4);
    PUSH32(esp, 0x4DEEE0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7F51u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_003A7F51: ;
    MEM8(0x4DEEFF) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7F5Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_003A7F5D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4DEED0;
    MEM32(0x4DEED0) = eax;
    MEM32(0x4DEED4) = eax;
    MEM32(0x4DEEDC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4DEED8) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4DEED8);
    PUSH32(esp, 0x3AF9C0);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A7F93u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A7F93: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A7FA0
 * Original: 0x003A7FA0 - 0x003A7FAB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7FA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A7FA0: ;
    MEM32(0xD61C04) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7FB0
 * Original: 0x003A7FB0 - 0x003A7FBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7FB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A7FB0: ;
    MEM32(0xD61C0C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7FC0
 * Original: 0x003A7FC0 - 0x003A7FCB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A7FC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A7FC0: ;
    MEM32(0xD61C08) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A7FD0
 * Original: 0x003A7FD0 - 0x003A7FE3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7FD0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7FD0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61C04)); /* fdiv dword ptr [0xd61c04] */
    MEMF(0xD61C10) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A7FF0
 * Original: 0x003A7FF0 - 0x003A8003 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A7FF0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A7FF0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61C0C)); /* fdiv dword ptr [0xd61c0c] */
    MEMF(0xD61C14) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A8010
 * Original: 0x003A8010 - 0x003A803C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A8010: ;
    edx = 0x49667C;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x53);
    /* nop */

loc_003A8020: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003A8020; /* jne: not equal / not zero */

loc_003A8036: ;
    MEM32(0xD61C18) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A8040
 * Original: 0x003A8040 - 0x003A80A4 (100 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A8040: ;
    ecx = MEM32(0xD61C18);
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0xD5D38C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = eax * 4 + 0xD5D38C;
    if (CMP_EQ(_fa, _fb)) goto loc_003A807A; /* je: equal / zero */

loc_003A805F: ;
    /* nop */

loc_003A8060: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A808C; /* je: equal / zero */

loc_003A8064: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD5D38C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD5D38C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003A8070; /* ja: above (unsigned >) */

loc_003A806B: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x400)) >> 32) & 1);
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003A8070: ;
    edx = MEM32(eax + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003A8060; /* jne: not equal / not zero */

loc_003A807A: ;
    MEM32(eax) = ecx;
    MEM32(eax + 0x400) = 0x4DEF80;
    MEM32(0xD5D388) = MEM32(0xD5D388) + 1;
    _fa = (uint32_t)(MEM32(0xD5D388)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003A808C: ;
    ecx = MEM32(0xD5D388);
    PUSH32(esp, 0x3AF9D0);
    MEM32(0xB74624) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A80A2u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A80A2: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A80B0
 * Original: 0x003A80B0 - 0x003A80C2 (18 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A80B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A80B0: ;
    PUSH32(esp, esi);
    edx = 0x496668;
    esi = 0xD61BFC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A80C0u); RECOMP_ABI_CALL(0x002FA4D0u, sub_002FA4D0); /* call 0x002FA4D0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A80C0: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A80D0
 * Original: 0x003A80D0 - 0x003A80DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A80D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A80D0: ;
    MEM32(0xD61C28) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A80E0
 * Original: 0x003A80E0 - 0x003A80EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A80E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A80E0: ;
    MEM32(0xD61C30) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A80F0
 * Original: 0x003A80F0 - 0x003A80FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A80F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A80F0: ;
    MEM32(0xD61C2C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A8100
 * Original: 0x003A8100 - 0x003A8113 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A8100(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A8100: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61C28)); /* fdiv dword ptr [0xd61c28] */
    MEMF(0xD61C34) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A8120
 * Original: 0x003A8120 - 0x003A8133 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A8120(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A8120: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61C30)); /* fdiv dword ptr [0xd61c30] */
    MEMF(0xD61C38) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A8140
 * Original: 0x003A8140 - 0x003A816C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A8140: ;
    edx = 0x4966FC;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x53);
    /* nop */

loc_003A8150: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003A8150; /* jne: not equal / not zero */

loc_003A8166: ;
    MEM32(0xD61C3C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A8170
 * Original: 0x003A8170 - 0x003A81D4 (100 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A8170: ;
    ecx = MEM32(0xD61C3C);
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0xD5D38C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = eax * 4 + 0xD5D38C;
    if (CMP_EQ(_fa, _fb)) goto loc_003A81AA; /* je: equal / zero */

loc_003A818F: ;
    /* nop */

loc_003A8190: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A81BC; /* je: equal / zero */

loc_003A8194: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD5D38C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD5D38C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003A81A0; /* ja: above (unsigned >) */

loc_003A819B: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x400)) >> 32) & 1);
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003A81A0: ;
    edx = MEM32(eax + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003A8190; /* jne: not equal / not zero */

loc_003A81AA: ;
    MEM32(eax) = ecx;
    MEM32(eax + 0x400) = 0x4DEFE0;
    MEM32(0xD5D388) = MEM32(0xD5D388) + 1;
    _fa = (uint32_t)(MEM32(0xD5D388)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003A81BC: ;
    ecx = MEM32(0xD5D388);
    PUSH32(esp, 0x3AF9F0);
    MEM32(0xB74630) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A81D2u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A81D2: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A81E0
 * Original: 0x003A81E0 - 0x003A81F2 (18 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A81E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A81E0: ;
    PUSH32(esp, esi);
    edx = 0x4966E8;
    esi = 0xD61C20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A81F0u); RECOMP_ABI_CALL(0x002FA4D0u, sub_002FA4D0); /* call 0x002FA4D0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A81F0: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A8200
 * Original: 0x003A8200 - 0x003A8222 (34 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8200(void)
{
    int _cf = 0; /* carry flag */

loc_003A8200: ;
    eax = MEM32(0x4ACE18);
    MEM8(0xD61C1C) = LO8(eax);
    MEM8(0xD61C1D) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE1A));
    MEM8(0xD61C1E) = LO8(eax);
    MEM8(0xD61C1F) = HI8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003A8230
 * Original: 0x003A8230 - 0x003A823B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8230(void)
{
    int _cf = 0; /* carry flag */

loc_003A8230: ;
    MEM32(0xD61C40) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A8240
 * Original: 0x003A8240 - 0x003A824B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8240(void)
{
    int _cf = 0; /* carry flag */

loc_003A8240: ;
    MEM32(0xD61C48) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A8250
 * Original: 0x003A8250 - 0x003A825B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8250(void)
{
    int _cf = 0; /* carry flag */

loc_003A8250: ;
    MEM32(0xD61C44) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A8260
 * Original: 0x003A8260 - 0x003A8273 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A8260(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A8260: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61C40)); /* fdiv dword ptr [0xd61c40] */
    MEMF(0xD61C4C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A8280
 * Original: 0x003A8280 - 0x003A8293 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A8280(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A8280: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61C48)); /* fdiv dword ptr [0xd61c48] */
    MEMF(0xD61C50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A82A0
 * Original: 0x003A82A0 - 0x003A82AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A82A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A82A0: ;
    MEM32(0xD61C54) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A82B0
 * Original: 0x003A82B0 - 0x003A82BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A82B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A82B0: ;
    MEM32(0xD61C5C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A82C0
 * Original: 0x003A82C0 - 0x003A82CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A82C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A82C0: ;
    MEM32(0xD61C58) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A82D0
 * Original: 0x003A82D0 - 0x003A82E3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A82D0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A82D0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61C54)); /* fdiv dword ptr [0xd61c54] */
    MEMF(0xD61C60) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A82F0
 * Original: 0x003A82F0 - 0x003A8303 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A82F0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A82F0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61C5C)); /* fdiv dword ptr [0xd61c5c] */
    MEMF(0xD61C64) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A8310
 * Original: 0x003A8310 - 0x003A834C (60 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A8310: ;
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
    MEM32(0xD61C68) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A8350
 * Original: 0x003A8350 - 0x003A835B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8350(void)
{
    int _cf = 0; /* carry flag */

loc_003A8350: ;
    MEM32(0xD61C6C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A8360
 * Original: 0x003A8360 - 0x003A836B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8360(void)
{
    int _cf = 0; /* carry flag */

loc_003A8360: ;
    MEM32(0xD61C74) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A8370
 * Original: 0x003A8370 - 0x003A837B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8370(void)
{
    int _cf = 0; /* carry flag */

loc_003A8370: ;
    MEM32(0xD61C70) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A8380
 * Original: 0x003A8380 - 0x003A8393 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A8380(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A8380: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61C6C)); /* fdiv dword ptr [0xd61c6c] */
    MEMF(0xD61C78) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A83A0
 * Original: 0x003A83A0 - 0x003A83B3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A83A0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A83A0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61C74)); /* fdiv dword ptr [0xd61c74] */
    MEMF(0xD61C7C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A83C0
 * Original: 0x003A83C0 - 0x003A83CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A83C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A83C0: ;
    MEM32(0xD61CB0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A83D0
 * Original: 0x003A83D0 - 0x003A83DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A83D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A83D0: ;
    MEM32(0xD61CB8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A83E0
 * Original: 0x003A83E0 - 0x003A83EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A83E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A83E0: ;
    MEM32(0xD61CB4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A83F0
 * Original: 0x003A83F0 - 0x003A8403 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A83F0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A83F0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61CB0)); /* fdiv dword ptr [0xd61cb0] */
    MEMF(0xD61CBC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A8410
 * Original: 0x003A8410 - 0x003A8423 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A8410(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A8410: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61CB8)); /* fdiv dword ptr [0xd61cb8] */
    MEMF(0xD61CC0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A8430
 * Original: 0x003A8430 - 0x003A845C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A8430: ;
    edx = 0x4967C4;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x54);
    /* nop */

loc_003A8440: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003A8440; /* jne: not equal / not zero */

loc_003A8456: ;
    MEM32(0xD61F08) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A8460
 * Original: 0x003A8460 - 0x003A84C4 (100 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A8460: ;
    ecx = MEM32(0xD61F08);
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(eax * 4 + 0xD5D38C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = eax * 4 + 0xD5D38C;
    if (CMP_EQ(_fa, _fb)) goto loc_003A849A; /* je: equal / zero */

loc_003A847F: ;
    /* nop */

loc_003A8480: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003A84AC; /* je: equal / zero */

loc_003A8484: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD5D38C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD5D38C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003A8490; /* ja: above (unsigned >) */

loc_003A848B: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x400)) >> 32) & 1);
    eax = eax + 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003A8490: ;
    edx = MEM32(eax + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003A8480; /* jne: not equal / not zero */

loc_003A849A: ;
    MEM32(eax) = ecx;
    MEM32(eax + 0x400) = 0x4DF0D0;
    MEM32(0xD5D388) = MEM32(0xD5D388) + 1;
    _fa = (uint32_t)(MEM32(0xD5D388)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003A84AC: ;
    ecx = MEM32(0xD5D388);
    PUSH32(esp, 0x3AFA10);
    MEM32(0xB74654) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A84C2u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A84C2: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A84D0
 * Original: 0x003A84D0 - 0x003A84E2 (18 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A84D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A84D0: ;
    PUSH32(esp, esi);
    edx = 0x4967B0;
    esi = 0xD61F0C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A84E0u); RECOMP_ABI_CALL(0x002FA4D0u, sub_002FA4D0); /* call 0x002FA4D0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A84E0: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A84F0
 * Original: 0x003A84F0 - 0x003A84FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A84F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A84F0: ;
    MEM32(0xD61F18) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A8500
 * Original: 0x003A8500 - 0x003A850B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8500(void)
{
    int _cf = 0; /* carry flag */

loc_003A8500: ;
    MEM32(0xD61F20) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A8510
 * Original: 0x003A8510 - 0x003A851B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8510(void)
{
    int _cf = 0; /* carry flag */

loc_003A8510: ;
    MEM32(0xD61F1C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A8520
 * Original: 0x003A8520 - 0x003A8533 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A8520(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A8520: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61F18)); /* fdiv dword ptr [0xd61f18] */
    MEMF(0xD61F24) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A8540
 * Original: 0x003A8540 - 0x003A8553 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A8540(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A8540: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD61F20)); /* fdiv dword ptr [0xd61f20] */
    MEMF(0xD61F28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A8560
 * Original: 0x003A8560 - 0x003A858C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A8560: ;
    edx = 0x4967F8;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x46);
    /* nop */

loc_003A8570: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003A8570; /* jne: not equal / not zero */

loc_003A8586: ;
    MEM32(0xD61F2C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A8590
 * Original: 0x003A8590 - 0x003A85BC (44 bytes, 14 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A8590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A8590: ;
    edx = 0x4967EC;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x53);
    /* nop */

loc_003A85A0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003A85A0; /* jne: not equal / not zero */

loc_003A85B6: ;
    MEM32(0xD61F14) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A85C0
 * Original: 0x003A85C0 - 0x003A85CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A85C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A85C0: ;
    MEM32(0xD61F38) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A85D0
 * Original: 0x003A85D0 - 0x003A85DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A85D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A85D0: ;
    MEM32(0xD61F40) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A85E0
 * Original: 0x003A85E0 - 0x003A85EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A85E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A85E0: ;
    MEM32(0xD61F3C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}
