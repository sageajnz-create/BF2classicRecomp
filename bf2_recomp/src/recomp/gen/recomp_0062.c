/**
 * Star Wars Battlefront 2 - Recompiled code chunk 62
 * Functions: 250 (0x00395D00 - 0x00398420)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00395D00
 * Original: 0x00395D00 - 0x00395D19 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395D00(void)
{
    int _cf = 0; /* carry flag */

loc_00395D00: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA064); /* divss */
    MEMF(0xBAA070) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395D20
 * Original: 0x00395D20 - 0x00395D39 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395D20(void)
{
    int _cf = 0; /* carry flag */

loc_00395D20: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA06C); /* divss */
    MEMF(0xBAA074) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395D40
 * Original: 0x00395D40 - 0x00395D51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395D40(void)
{
    int _cf = 0; /* carry flag */

loc_00395D40: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBAA07C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395D60
 * Original: 0x00395D60 - 0x00395D71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395D60(void)
{
    int _cf = 0; /* carry flag */

loc_00395D60: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBAA05C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395D80
 * Original: 0x00395D80 - 0x00395D99 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395D80(void)
{
    int _cf = 0; /* carry flag */

loc_00395D80: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA05C); /* divss */
    MEMF(0xBAA058) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395DA0
 * Original: 0x00395DA0 - 0x00395DBD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395DA0(void)
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

loc_00395DA0: ;
    fp_push(MEMF(0xBAA05C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395DB7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00395DB7: ;
    MEM32(0xBAA078) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00395DC0
 * Original: 0x00395DC0 - 0x00395DDD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395DC0(void)
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

loc_00395DC0: ;
    fp_push(MEMF(0xBAA05C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395DD7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00395DD7: ;
    MEM32(0xBAA060) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00395DE0
 * Original: 0x00395DE0 - 0x00395DF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395DE0(void)
{
    int _cf = 0; /* carry flag */

loc_00395DE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAA08C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395E00
 * Original: 0x00395E00 - 0x00395E11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395E00(void)
{
    int _cf = 0; /* carry flag */

loc_00395E00: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAA094) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395E20
 * Original: 0x00395E20 - 0x00395E31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395E20(void)
{
    int _cf = 0; /* carry flag */

loc_00395E20: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAA090) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395E40
 * Original: 0x00395E40 - 0x00395E59 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395E40(void)
{
    int _cf = 0; /* carry flag */

loc_00395E40: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA08C); /* divss */
    MEMF(0xBAA098) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395E60
 * Original: 0x00395E60 - 0x00395E79 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395E60(void)
{
    int _cf = 0; /* carry flag */

loc_00395E60: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA094); /* divss */
    MEMF(0xBAA09C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395E80
 * Original: 0x00395E80 - 0x00395E91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395E80(void)
{
    int _cf = 0; /* carry flag */

loc_00395E80: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBAA0A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395EA0
 * Original: 0x00395EA0 - 0x00395EB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395EA0(void)
{
    int _cf = 0; /* carry flag */

loc_00395EA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBAA084) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395EC0
 * Original: 0x00395EC0 - 0x00395ED9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395EC0(void)
{
    int _cf = 0; /* carry flag */

loc_00395EC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA084); /* divss */
    MEMF(0xBAA080) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395EE0
 * Original: 0x00395EE0 - 0x00395EFD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395EE0(void)
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

loc_00395EE0: ;
    fp_push(MEMF(0xBAA084)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395EF7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00395EF7: ;
    MEM32(0xBAA0A0) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00395F00
 * Original: 0x00395F00 - 0x00395F1D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395F00(void)
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

loc_00395F00: ;
    fp_push(MEMF(0xBAA084)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395F17u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00395F17: ;
    MEM32(0xBAA088) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00395F20
 * Original: 0x00395F20 - 0x00395F31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395F20(void)
{
    int _cf = 0; /* carry flag */

loc_00395F20: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAA0B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395F40
 * Original: 0x00395F40 - 0x00395F51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395F40(void)
{
    int _cf = 0; /* carry flag */

loc_00395F40: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAA0BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395F60
 * Original: 0x00395F60 - 0x00395F71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395F60(void)
{
    int _cf = 0; /* carry flag */

loc_00395F60: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAA0B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395F80
 * Original: 0x00395F80 - 0x00395F99 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395F80(void)
{
    int _cf = 0; /* carry flag */

loc_00395F80: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA0B4); /* divss */
    MEMF(0xBAA0C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395FA0
 * Original: 0x00395FA0 - 0x00395FB9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395FA0(void)
{
    int _cf = 0; /* carry flag */

loc_00395FA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA0BC); /* divss */
    MEMF(0xBAA0C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395FC0
 * Original: 0x00395FC0 - 0x00395FD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395FC0(void)
{
    int _cf = 0; /* carry flag */

loc_00395FC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBAA0DC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395FE0
 * Original: 0x00395FE0 - 0x00395FF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395FE0(void)
{
    int _cf = 0; /* carry flag */

loc_00395FE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBAA0AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396000
 * Original: 0x00396000 - 0x00396019 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396000(void)
{
    int _cf = 0; /* carry flag */

loc_00396000: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA0AC); /* divss */
    MEMF(0xBAA0A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396020
 * Original: 0x00396020 - 0x0039603D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396020(void)
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

loc_00396020: ;
    fp_push(MEMF(0xBAA0AC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396037u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396037: ;
    MEM32(0xBAA0D8) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00396040
 * Original: 0x00396040 - 0x0039605D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396040(void)
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

loc_00396040: ;
    fp_push(MEMF(0xBAA0AC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396057u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396057: ;
    MEM32(0xBAA0B0) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00396060
 * Original: 0x00396060 - 0x00396098 (56 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00396060: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x497C7C)); /* movss */
    PUSH32(esp, 0x3FB2B8C3);
    eax = esp + 4;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = 0xBAA0C8;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396094u); RECOMP_ABI_CALL(0x00060BD0u, sub_00060BD0); /* call 0x00060BD0 */

loc_00396094: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003960A0
 * Original: 0x003960A0 - 0x003960B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003960A0(void)
{
    int _cf = 0; /* carry flag */

loc_003960A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAA0EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003960C0
 * Original: 0x003960C0 - 0x003960D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003960C0(void)
{
    int _cf = 0; /* carry flag */

loc_003960C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAA0F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003960E0
 * Original: 0x003960E0 - 0x003960F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003960E0(void)
{
    int _cf = 0; /* carry flag */

loc_003960E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAA0F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396100
 * Original: 0x00396100 - 0x00396119 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396100(void)
{
    int _cf = 0; /* carry flag */

loc_00396100: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA0EC); /* divss */
    MEMF(0xBAA0F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396120
 * Original: 0x00396120 - 0x00396139 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396120(void)
{
    int _cf = 0; /* carry flag */

loc_00396120: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA0F4); /* divss */
    MEMF(0xBAA0FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396140
 * Original: 0x00396140 - 0x00396151 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396140(void)
{
    int _cf = 0; /* carry flag */

loc_00396140: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBAA104) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396160
 * Original: 0x00396160 - 0x00396171 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396160(void)
{
    int _cf = 0; /* carry flag */

loc_00396160: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBAA0E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396180
 * Original: 0x00396180 - 0x00396199 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396180(void)
{
    int _cf = 0; /* carry flag */

loc_00396180: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA0E4); /* divss */
    MEMF(0xBAA0E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003961A0
 * Original: 0x003961A0 - 0x003961BD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003961A0(void)
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

loc_003961A0: ;
    fp_push(MEMF(0xBAA0E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003961B7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003961B7: ;
    MEM32(0xBAA100) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003961C0
 * Original: 0x003961C0 - 0x003961DD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003961C0(void)
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

loc_003961C0: ;
    fp_push(MEMF(0xBAA0E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003961D7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003961D7: ;
    MEM32(0xBAA0E8) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003961E0
 * Original: 0x003961E0 - 0x003961F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003961E0(void)
{
    int _cf = 0; /* carry flag */

loc_003961E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAA108) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396200
 * Original: 0x00396200 - 0x00396211 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396200(void)
{
    int _cf = 0; /* carry flag */

loc_00396200: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAA110) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396220
 * Original: 0x00396220 - 0x00396231 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396220(void)
{
    int _cf = 0; /* carry flag */

loc_00396220: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAA10C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396240
 * Original: 0x00396240 - 0x00396259 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396240(void)
{
    int _cf = 0; /* carry flag */

loc_00396240: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA108); /* divss */
    MEMF(0xBAA114) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396260
 * Original: 0x00396260 - 0x00396279 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396260(void)
{
    int _cf = 0; /* carry flag */

loc_00396260: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA110); /* divss */
    MEMF(0xBAA118) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396280
 * Original: 0x00396280 - 0x00396291 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396280(void)
{
    int _cf = 0; /* carry flag */

loc_00396280: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAADB0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003962A0
 * Original: 0x003962A0 - 0x003962B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003962A0(void)
{
    int _cf = 0; /* carry flag */

loc_003962A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAADB8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003962C0
 * Original: 0x003962C0 - 0x003962D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003962C0(void)
{
    int _cf = 0; /* carry flag */

loc_003962C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAADB4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003962E0
 * Original: 0x003962E0 - 0x003962F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003962E0(void)
{
    int _cf = 0; /* carry flag */

loc_003962E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAADB0); /* divss */
    MEMF(0xBAADBC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396300
 * Original: 0x00396300 - 0x00396319 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396300(void)
{
    int _cf = 0; /* carry flag */

loc_00396300: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAADB8); /* divss */
    MEMF(0xBAADC0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396320
 * Original: 0x00396320 - 0x0039634C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00396320: ;
    edx = 0x48ED48;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x77);
    /* nop */

loc_00396330: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00396330; /* jne: not equal / not zero */

loc_00396346: ;
    MEM32(0xBABA58) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00396350
 * Original: 0x00396350 - 0x0039636A (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00396350: ;
    PUSH32(esp, esi);
    esi = 0xBAA120;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039635Bu); RECOMP_ABI_CALL(0x001CA320u, sub_001CA320); /* call 0x001CA320 */

loc_0039635B: ;
    PUSH32(esp, 0x3ACC20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396365u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00396365: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00396370
 * Original: 0x00396370 - 0x0039638A (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00396370: ;
    PUSH32(esp, esi);
    esi = 0xBAADC8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039637Bu); RECOMP_ABI_CALL(0x001CA320u, sub_001CA320); /* call 0x001CA320 */

loc_0039637B: ;
    PUSH32(esp, 0x3ACC30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396385u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00396385: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00396390
 * Original: 0x00396390 - 0x003963A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396390(void)
{
    int _cf = 0; /* carry flag */

loc_00396390: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBABA5C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003963B0
 * Original: 0x003963B0 - 0x003963C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003963B0(void)
{
    int _cf = 0; /* carry flag */

loc_003963B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBABA64) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003963D0
 * Original: 0x003963D0 - 0x003963E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003963D0(void)
{
    int _cf = 0; /* carry flag */

loc_003963D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBABA60) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003963F0
 * Original: 0x003963F0 - 0x00396409 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003963F0(void)
{
    int _cf = 0; /* carry flag */

loc_003963F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABA5C); /* divss */
    MEMF(0xBABA68) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396410
 * Original: 0x00396410 - 0x00396429 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396410(void)
{
    int _cf = 0; /* carry flag */

loc_00396410: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABA64); /* divss */
    MEMF(0xBABA6C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396430
 * Original: 0x00396430 - 0x00396441 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396430(void)
{
    int _cf = 0; /* carry flag */

loc_00396430: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBABA7C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396450
 * Original: 0x00396450 - 0x00396461 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396450(void)
{
    int _cf = 0; /* carry flag */

loc_00396450: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBABA84) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396470
 * Original: 0x00396470 - 0x00396481 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396470(void)
{
    int _cf = 0; /* carry flag */

loc_00396470: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBABA80) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396490
 * Original: 0x00396490 - 0x003964A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396490(void)
{
    int _cf = 0; /* carry flag */

loc_00396490: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABA7C); /* divss */
    MEMF(0xBABA88) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003964B0
 * Original: 0x003964B0 - 0x003964C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003964B0(void)
{
    int _cf = 0; /* carry flag */

loc_003964B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABA84); /* divss */
    MEMF(0xBABA8C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003964D0
 * Original: 0x003964D0 - 0x003964E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003964D0(void)
{
    int _cf = 0; /* carry flag */

loc_003964D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBABA94) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003964F0
 * Original: 0x003964F0 - 0x00396501 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003964F0(void)
{
    int _cf = 0; /* carry flag */

loc_003964F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBABA74) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396510
 * Original: 0x00396510 - 0x00396529 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396510(void)
{
    int _cf = 0; /* carry flag */

loc_00396510: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABA74); /* divss */
    MEMF(0xBABA70) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396530
 * Original: 0x00396530 - 0x0039654D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396530(void)
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

loc_00396530: ;
    fp_push(MEMF(0xBABA74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396547u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396547: ;
    MEM32(0xBABA90) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00396550
 * Original: 0x00396550 - 0x0039656D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396550(void)
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

loc_00396550: ;
    fp_push(MEMF(0xBABA74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396567u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396567: ;
    MEM32(0xBABA78) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00396570
 * Original: 0x00396570 - 0x00396581 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396570(void)
{
    int _cf = 0; /* carry flag */

loc_00396570: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBABA98) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396590
 * Original: 0x00396590 - 0x003965A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396590(void)
{
    int _cf = 0; /* carry flag */

loc_00396590: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBABAA0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003965B0
 * Original: 0x003965B0 - 0x003965C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003965B0(void)
{
    int _cf = 0; /* carry flag */

loc_003965B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBABA9C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003965D0
 * Original: 0x003965D0 - 0x003965E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003965D0(void)
{
    int _cf = 0; /* carry flag */

loc_003965D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABA98); /* divss */
    MEMF(0xBABAA4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003965F0
 * Original: 0x003965F0 - 0x00396609 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003965F0(void)
{
    int _cf = 0; /* carry flag */

loc_003965F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABAA0); /* divss */
    MEMF(0xBABAA8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396610
 * Original: 0x00396610 - 0x00396621 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396610(void)
{
    int _cf = 0; /* carry flag */

loc_00396610: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBABAB8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396630
 * Original: 0x00396630 - 0x00396641 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396630(void)
{
    int _cf = 0; /* carry flag */

loc_00396630: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBABAC0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396650
 * Original: 0x00396650 - 0x00396661 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396650(void)
{
    int _cf = 0; /* carry flag */

loc_00396650: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBABABC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396670
 * Original: 0x00396670 - 0x00396689 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396670(void)
{
    int _cf = 0; /* carry flag */

loc_00396670: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABAB8); /* divss */
    MEMF(0xBABAC4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396690
 * Original: 0x00396690 - 0x003966A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396690(void)
{
    int _cf = 0; /* carry flag */

loc_00396690: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABAC0); /* divss */
    MEMF(0xBABAC8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003966B0
 * Original: 0x003966B0 - 0x003966C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003966B0(void)
{
    int _cf = 0; /* carry flag */

loc_003966B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBABAD0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003966D0
 * Original: 0x003966D0 - 0x003966E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003966D0(void)
{
    int _cf = 0; /* carry flag */

loc_003966D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBABAB0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003966F0
 * Original: 0x003966F0 - 0x00396709 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003966F0(void)
{
    int _cf = 0; /* carry flag */

loc_003966F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABAB0); /* divss */
    MEMF(0xBABAAC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396710
 * Original: 0x00396710 - 0x0039672D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396710(void)
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

loc_00396710: ;
    fp_push(MEMF(0xBABAB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396727u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396727: ;
    MEM32(0xBABACC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00396730
 * Original: 0x00396730 - 0x0039674D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396730(void)
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

loc_00396730: ;
    fp_push(MEMF(0xBABAB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396747u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396747: ;
    MEM32(0xBABAB4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00396750
 * Original: 0x00396750 - 0x00396763 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00396750: ;
    PUSH32(esp, 0x3ACC40);
    MEM8(0xB73E38) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396761u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396761: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00396770
 * Original: 0x00396770 - 0x00396781 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396770(void)
{
    int _cf = 0; /* carry flag */

loc_00396770: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBABAE4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396790
 * Original: 0x00396790 - 0x003967A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396790(void)
{
    int _cf = 0; /* carry flag */

loc_00396790: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBABAEC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003967B0
 * Original: 0x003967B0 - 0x003967C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003967B0(void)
{
    int _cf = 0; /* carry flag */

loc_003967B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBABAE8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003967D0
 * Original: 0x003967D0 - 0x003967E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003967D0(void)
{
    int _cf = 0; /* carry flag */

loc_003967D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABAE4); /* divss */
    MEMF(0xBABAF0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003967F0
 * Original: 0x003967F0 - 0x00396809 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003967F0(void)
{
    int _cf = 0; /* carry flag */

loc_003967F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABAEC); /* divss */
    MEMF(0xBABAF4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396810
 * Original: 0x00396810 - 0x00396821 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396810(void)
{
    int _cf = 0; /* carry flag */

loc_00396810: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBABAFC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396830
 * Original: 0x00396830 - 0x00396841 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396830(void)
{
    int _cf = 0; /* carry flag */

loc_00396830: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBABADC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396850
 * Original: 0x00396850 - 0x00396869 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396850(void)
{
    int _cf = 0; /* carry flag */

loc_00396850: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABADC); /* divss */
    MEMF(0xBABAD8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396870
 * Original: 0x00396870 - 0x0039688D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396870(void)
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

loc_00396870: ;
    fp_push(MEMF(0xBABADC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396887u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396887: ;
    MEM32(0xBABAF8) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00396890
 * Original: 0x00396890 - 0x003968AD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396890(void)
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

loc_00396890: ;
    fp_push(MEMF(0xBABADC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003968A7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003968A7: ;
    MEM32(0xBABAE0) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003968B0
 * Original: 0x003968B0 - 0x003968C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003968B0(void)
{
    int _cf = 0; /* carry flag */

loc_003968B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBABCA4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003968D0
 * Original: 0x003968D0 - 0x003968E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003968D0(void)
{
    int _cf = 0; /* carry flag */

loc_003968D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBABCAC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003968F0
 * Original: 0x003968F0 - 0x00396901 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003968F0(void)
{
    int _cf = 0; /* carry flag */

loc_003968F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBABCA8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396910
 * Original: 0x00396910 - 0x00396929 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396910(void)
{
    int _cf = 0; /* carry flag */

loc_00396910: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABCA4); /* divss */
    MEMF(0xBABCB0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396930
 * Original: 0x00396930 - 0x00396949 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396930(void)
{
    int _cf = 0; /* carry flag */

loc_00396930: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBABCAC); /* divss */
    MEMF(0xBABCB4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396950
 * Original: 0x00396950 - 0x003969BE (110 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00396950: ;
    eax = 0xBABCC0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039695Au); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_0039695A: ;
    SET_LO8(edx, MEM8(0xBABD58));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0xBABD30;
    MEM32(0xBABD30) = eax;
    MEM32(0xBABD38) = eax;
    MEM32(0xBABD34) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0xBABD3C) = eax;
    MEM32(0xBABD40) = eax;
    SET_LO8(eax, MEM8(0xBABD44));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & ((0xFE) & 0xFFu));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & ((0xFC) & 0xFFu));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x3ACCB0);
    MEM8(0xBABD44) = LO8(eax);
    MEM32(0xBABCC0) = 0x495B00;
    MEMF(0xBABD54) = xmm0.f[0]; /* movss */
    MEMF(0xBABD50) = xmm0.f[0]; /* movss */
    MEM8(0xBABD58) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003969BCu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003969BC: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003969C0
 * Original: 0x003969C0 - 0x003969D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003969C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003969C0: ;
    ecx = 0xBABB00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003969CAu); RECOMP_ABI_CALL(0x002E8900u, sub_002E8900); /* call 0x002E8900 */

loc_003969CA: ;
    PUSH32(esp, 0x3ACCD0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003969D4u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003969D4: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003969E0
 * Original: 0x003969E0 - 0x003969F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003969E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003969E0: ;
    ecx = 0xBABD60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003969EAu); RECOMP_ABI_CALL(0x002E8900u, sub_002E8900); /* call 0x002E8900 */

loc_003969EA: ;
    PUSH32(esp, 0x3ACCE0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003969F4u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003969F4: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00396A00
 * Original: 0x00396A00 - 0x00396A16 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00396A00: ;
    ecx = 0xBABBD0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396A0Au); RECOMP_ABI_CALL(0x002E8900u, sub_002E8900); /* call 0x002E8900 */

loc_00396A0A: ;
    PUSH32(esp, 0x3ACCF0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396A14u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396A14: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00396A20
 * Original: 0x00396A20 - 0x00396AFC (220 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00396A20: ;
    eax = 0xBABE30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396A2Au); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_00396A2A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x3ACD00);
    MEM32(0xBABE30) = 0x4961F8;
    MEM32(0xBABEA0) = eax;
    MEM32(0xBABEA4) = eax;
    MEM32(0xBABF18) = eax;
    MEMF(0xBABEA8) = xmm0.f[0]; /* movss */
    MEMF(0xBABEAC) = xmm0.f[0]; /* movss */
    MEMF(0xBABEB0) = xmm0.f[0]; /* movss */
    MEMF(0xBABEB4) = xmm0.f[0]; /* movss */
    MEMF(0xBABEB8) = xmm0.f[0]; /* movss */
    MEMF(0xBABEBC) = xmm0.f[0]; /* movss */
    MEMF(0xBABED0) = xmm0.f[0]; /* movss */
    MEMF(0xBABED4) = xmm0.f[0]; /* movss */
    MEMF(0xBABEE8) = xmm0.f[0]; /* movss */
    MEMF(0xBABEEC) = xmm0.f[0]; /* movss */
    MEMF(0xBABF00) = xmm0.f[0]; /* movss */
    MEMF(0xBABF04) = xmm0.f[0]; /* movss */
    MEMF(0xBABEC0) = xmm0.f[0]; /* movss */
    MEMF(0xBABEC4) = xmm0.f[0]; /* movss */
    MEMF(0xBABED8) = xmm0.f[0]; /* movss */
    MEMF(0xBABEDC) = xmm1.f[0]; /* movss */
    MEMF(0xBABEF0) = xmm1.f[0]; /* movss */
    MEMF(0xBABEF4) = xmm1.f[0]; /* movss */
    MEMF(0xBABF08) = xmm1.f[0]; /* movss */
    MEMF(0xBABF0C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396AFAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396AFA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00396B00
 * Original: 0x00396B00 - 0x00396B1F (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00396B00: ;
    eax = 0x48EEEC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396B0Au); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_00396B0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00396B1E; /* je: equal / zero */

loc_00396B0E: ;
    ecx = 0x1CD850;
    edx = 9;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = ecx;

loc_00396B1E: ;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00396B20
 * Original: 0x00396B20 - 0x00396B3F (31 bytes, 9 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00396B20: ;
    eax = 0x48EED0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396B2Au); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_00396B2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00396B3E; /* je: equal / zero */

loc_00396B2E: ;
    ecx = 0x1CD850;
    edx = 9;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = ecx;

loc_00396B3E: ;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00396B40
 * Original: 0x00396B40 - 0x00396B51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396B40(void)
{
    int _cf = 0; /* carry flag */

loc_00396B40: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAC024) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396B60
 * Original: 0x00396B60 - 0x00396B71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396B60(void)
{
    int _cf = 0; /* carry flag */

loc_00396B60: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAC02C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396B80
 * Original: 0x00396B80 - 0x00396B91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396B80(void)
{
    int _cf = 0; /* carry flag */

loc_00396B80: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAC028) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396BA0
 * Original: 0x00396BA0 - 0x00396BB9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396BA0(void)
{
    int _cf = 0; /* carry flag */

loc_00396BA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC024); /* divss */
    MEMF(0xBAC030) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396BC0
 * Original: 0x00396BC0 - 0x00396BD9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396BC0(void)
{
    int _cf = 0; /* carry flag */

loc_00396BC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC02C); /* divss */
    MEMF(0xBAC034) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396BE0
 * Original: 0x00396BE0 - 0x00396BF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396BE0(void)
{
    int _cf = 0; /* carry flag */

loc_00396BE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBAC040) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396C00
 * Original: 0x00396C00 - 0x00396C11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396C00(void)
{
    int _cf = 0; /* carry flag */

loc_00396C00: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBAC01C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396C20
 * Original: 0x00396C20 - 0x00396C39 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396C20(void)
{
    int _cf = 0; /* carry flag */

loc_00396C20: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC01C); /* divss */
    MEMF(0xBABF20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396C40
 * Original: 0x00396C40 - 0x00396C5D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396C40(void)
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

loc_00396C40: ;
    fp_push(MEMF(0xBAC01C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396C57u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396C57: ;
    MEM32(0xBAC038) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00396C60
 * Original: 0x00396C60 - 0x00396C7D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396C60(void)
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

loc_00396C60: ;
    fp_push(MEMF(0xBAC01C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396C77u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396C77: ;
    MEM32(0xBAC020) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00396C80
 * Original: 0x00396C80 - 0x00396CCE (78 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00396C80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBABF34;
    ebx = 4;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00396C90: ;
    PUSH32(esp, 0x208C60);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    eax = esi + 0x10;
    MEM32(esi + -8) = edi;
    MEM32(esi + -4) = edi;
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, eax);
    MEM32(esi + -12) = 0x48EF4C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396CB7u); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */

loc_00396CB7: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x3C)) >> 32) & 1);
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00396C90; /* jne: not equal / not zero */

loc_00396CBD: ;
    PUSH32(esp, 0x3ACD20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396CC7u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00396CC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00396CD0
 * Original: 0x00396CD0 - 0x00396CE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396CD0(void)
{
    int _cf = 0; /* carry flag */

loc_00396CD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D84)); /* movss */
    MEMF(0xBAC03C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396CF0
 * Original: 0x00396CF0 - 0x00396D01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396CF0(void)
{
    int _cf = 0; /* carry flag */

loc_00396CF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D84)); /* movss */
    MEMF(0xBAC018) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396D10
 * Original: 0x00396D10 - 0x00396D21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396D10(void)
{
    int _cf = 0; /* carry flag */

loc_00396D10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAC050) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396D30
 * Original: 0x00396D30 - 0x00396D41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396D30(void)
{
    int _cf = 0; /* carry flag */

loc_00396D30: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAC058) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396D50
 * Original: 0x00396D50 - 0x00396D61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396D50(void)
{
    int _cf = 0; /* carry flag */

loc_00396D50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAC054) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396D70
 * Original: 0x00396D70 - 0x00396D89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396D70(void)
{
    int _cf = 0; /* carry flag */

loc_00396D70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC050); /* divss */
    MEMF(0xBAC05C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396D90
 * Original: 0x00396D90 - 0x00396DA9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396D90(void)
{
    int _cf = 0; /* carry flag */

loc_00396D90: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC058); /* divss */
    MEMF(0xBAC060) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396DB0
 * Original: 0x00396DB0 - 0x00396DC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396DB0(void)
{
    int _cf = 0; /* carry flag */

loc_00396DB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBAC068) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396DD0
 * Original: 0x00396DD0 - 0x00396DE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396DD0(void)
{
    int _cf = 0; /* carry flag */

loc_00396DD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBAC048) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396DF0
 * Original: 0x00396DF0 - 0x00396E09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396DF0(void)
{
    int _cf = 0; /* carry flag */

loc_00396DF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC048); /* divss */
    MEMF(0xBAC044) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396E10
 * Original: 0x00396E10 - 0x00396E2D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396E10(void)
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

loc_00396E10: ;
    fp_push(MEMF(0xBAC048)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396E27u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396E27: ;
    MEM32(0xBAC064) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00396E30
 * Original: 0x00396E30 - 0x00396E4D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396E30(void)
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

loc_00396E30: ;
    fp_push(MEMF(0xBAC048)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396E47u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396E47: ;
    MEM32(0xBAC04C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00396E50
 * Original: 0x00396E50 - 0x00396E61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396E50(void)
{
    int _cf = 0; /* carry flag */

loc_00396E50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAC078) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396E70
 * Original: 0x00396E70 - 0x00396E81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396E70(void)
{
    int _cf = 0; /* carry flag */

loc_00396E70: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAC080) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396E90
 * Original: 0x00396E90 - 0x00396EA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396E90(void)
{
    int _cf = 0; /* carry flag */

loc_00396E90: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAC07C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396EB0
 * Original: 0x00396EB0 - 0x00396EC9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396EB0(void)
{
    int _cf = 0; /* carry flag */

loc_00396EB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC078); /* divss */
    MEMF(0xBAC084) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396ED0
 * Original: 0x00396ED0 - 0x00396EE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396ED0(void)
{
    int _cf = 0; /* carry flag */

loc_00396ED0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC080); /* divss */
    MEMF(0xBAC088) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396EF0
 * Original: 0x00396EF0 - 0x00396F01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396EF0(void)
{
    int _cf = 0; /* carry flag */

loc_00396EF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBAC090) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396F10
 * Original: 0x00396F10 - 0x00396F21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396F10(void)
{
    int _cf = 0; /* carry flag */

loc_00396F10: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBAC070) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396F30
 * Original: 0x00396F30 - 0x00396F49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396F30(void)
{
    int _cf = 0; /* carry flag */

loc_00396F30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC070); /* divss */
    MEMF(0xBAC06C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396F50
 * Original: 0x00396F50 - 0x00396F6D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396F50(void)
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

loc_00396F50: ;
    fp_push(MEMF(0xBAC070)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396F67u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396F67: ;
    MEM32(0xBAC08C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00396F70
 * Original: 0x00396F70 - 0x00396F8D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396F70(void)
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

loc_00396F70: ;
    fp_push(MEMF(0xBAC070)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00396F87u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00396F87: ;
    MEM32(0xBAC074) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00396F90
 * Original: 0x00396F90 - 0x00396FA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396F90(void)
{
    int _cf = 0; /* carry flag */

loc_00396F90: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAC094) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396FB0
 * Original: 0x00396FB0 - 0x00396FC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396FB0(void)
{
    int _cf = 0; /* carry flag */

loc_00396FB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAC09C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396FD0
 * Original: 0x00396FD0 - 0x00396FE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396FD0(void)
{
    int _cf = 0; /* carry flag */

loc_00396FD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAC098) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00396FF0
 * Original: 0x00396FF0 - 0x00397009 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396FF0(void)
{
    int _cf = 0; /* carry flag */

loc_00396FF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC094); /* divss */
    MEMF(0xBAC0A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397010
 * Original: 0x00397010 - 0x00397029 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397010(void)
{
    int _cf = 0; /* carry flag */

loc_00397010: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC09C); /* divss */
    MEMF(0xBAC0A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397030
 * Original: 0x00397030 - 0x00397041 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397030(void)
{
    int _cf = 0; /* carry flag */

loc_00397030: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAC0C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397050
 * Original: 0x00397050 - 0x00397061 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397050(void)
{
    int _cf = 0; /* carry flag */

loc_00397050: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAC0C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397070
 * Original: 0x00397070 - 0x00397081 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397070(void)
{
    int _cf = 0; /* carry flag */

loc_00397070: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAC0C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397090
 * Original: 0x00397090 - 0x003970A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397090(void)
{
    int _cf = 0; /* carry flag */

loc_00397090: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC0C0); /* divss */
    MEMF(0xBAC0CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003970B0
 * Original: 0x003970B0 - 0x003970C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003970B0(void)
{
    int _cf = 0; /* carry flag */

loc_003970B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC0C8); /* divss */
    MEMF(0xBAC0D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003970D0
 * Original: 0x003970D0 - 0x003970E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003970D0(void)
{
    int _cf = 0; /* carry flag */

loc_003970D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBAC0DC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003970F0
 * Original: 0x003970F0 - 0x00397101 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003970F0(void)
{
    int _cf = 0; /* carry flag */

loc_003970F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBAC0B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397110
 * Original: 0x00397110 - 0x00397129 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397110(void)
{
    int _cf = 0; /* carry flag */

loc_00397110: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC0B8); /* divss */
    MEMF(0xBAC0AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397130
 * Original: 0x00397130 - 0x0039714D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397130(void)
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

loc_00397130: ;
    fp_push(MEMF(0xBAC0B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397147u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00397147: ;
    MEM32(0xBAC0D8) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00397150
 * Original: 0x00397150 - 0x0039716D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397150(void)
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

loc_00397150: ;
    fp_push(MEMF(0xBAC0B8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397167u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00397167: ;
    MEM32(0xBAC0BC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00397170
 * Original: 0x00397170 - 0x00397181 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397170(void)
{
    int _cf = 0; /* carry flag */

loc_00397170: ;
    xmm0 = XMM_SCALAR(MEMF(0x498428)); /* movss */
    MEMF(0xBAC0A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397190
 * Original: 0x00397190 - 0x003971A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397190(void)
{
    int _cf = 0; /* carry flag */

loc_00397190: ;
    xmm0 = XMM_SCALAR(MEMF(0x498428)); /* movss */
    MEMF(0xBAC0B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003971B0
 * Original: 0x003971B0 - 0x0039727B (203 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003971B0(void)
{
    int _cf = 0; /* carry flag */

loc_003971B0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x497C48)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0xBAC0C8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm4 = xmm0; /* movaps */
    MEMF(0xBAC0E8) = xmm0.f[0]; /* movss */
    MEMF(0xBAC0EC) = xmm0.f[0]; /* movss */
    MEMF(0xBAC0FC) = xmm0.f[0]; /* movss */
    MEMF(0xBAC100) = xmm0.f[0]; /* movss */
    MEMF(0xBAC104) = xmm0.f[0]; /* movss */
    MEMF(0xBAC108) = xmm0.f[0]; /* movss */
    MEMF(0xBAC110) = xmm0.f[0]; /* movss */
    MEMF(0xBAC114) = xmm0.f[0]; /* movss */
    MEMF(0xBAC120) = xmm0.f[0]; /* movss */
    MEMF(0xBAC124) = xmm0.f[0]; /* movss */
    MEMF(0xBAC128) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x4720E4)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    MEMF(0xBAC0E0) = xmm2.f[0]; /* movss */
    MEMF(0xBAC0E4) = xmm1.f[0]; /* movss */
    MEMF(0xBAC0F0) = xmm4.f[0]; /* movss */
    MEMF(0xBAC0F4) = xmm1.f[0]; /* movss */
    MEMF(0xBAC0F8) = xmm2.f[0]; /* movss */
    MEMF(0xBAC10C) = xmm1.f[0]; /* movss */
    MEMF(0xBAC118) = xmm3.f[0]; /* movss */
    MEMF(0xBAC11C) = xmm1.f[0]; /* movss */
    MEMF(0xBAC12C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397280
 * Original: 0x00397280 - 0x00397291 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397280(void)
{
    int _cf = 0; /* carry flag */

loc_00397280: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    MEMF(0xBAC0B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003972A0
 * Original: 0x003972A0 - 0x003972B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003972A0(void)
{
    int _cf = 0; /* carry flag */

loc_003972A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    MEMF(0xBAC0D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003972C0
 * Original: 0x003972C0 - 0x0039733B (123 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003972C0(void)
{
    int _cf = 0; /* carry flag */

loc_003972C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4720E4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x497D0C)); /* movss */
    MEMF(0x4E06B8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(0x4E06C0) = xmm1.f[0]; /* movss */
    MEMF(0x4E06C8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(0xBAC0C8)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x4E06D0) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x497D10)); /* movss */
    MEMF(0x4E06BC) = xmm0.f[0]; /* movss */
    MEMF(0x4E06C4) = xmm0.f[0]; /* movss */
    MEMF(0x4E06CC) = xmm0.f[0]; /* movss */
    MEMF(0x4E06D4) = xmm2.f[0]; /* movss */
    MEMF(0x4E06D8) = xmm0.f[0]; /* movss */
    MEMF(0x4E06DC) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397340
 * Original: 0x00397340 - 0x00397351 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397340(void)
{
    int _cf = 0; /* carry flag */

loc_00397340: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBAC138) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397360
 * Original: 0x00397360 - 0x00397371 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397360(void)
{
    int _cf = 0; /* carry flag */

loc_00397360: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBAC13C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397380
 * Original: 0x00397380 - 0x00397399 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397380(void)
{
    int _cf = 0; /* carry flag */

loc_00397380: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC13C); /* divss */
    MEMF(0xBAC130) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003973A0
 * Original: 0x003973A0 - 0x003973BD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003973A0(void)
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

loc_003973A0: ;
    fp_push(MEMF(0xBAC13C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003973B7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003973B7: ;
    MEM32(0xBAC134) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003973C0
 * Original: 0x003973C0 - 0x003973DD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003973C0(void)
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

loc_003973C0: ;
    fp_push(MEMF(0xBAC13C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003973D7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003973D7: ;
    MEM32(0xBAC14C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003973E0
 * Original: 0x003973E0 - 0x003973F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003973E0(void)
{
    int _cf = 0; /* carry flag */

loc_003973E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAC140) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397400
 * Original: 0x00397400 - 0x00397411 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397400(void)
{
    int _cf = 0; /* carry flag */

loc_00397400: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAC158) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397420
 * Original: 0x00397420 - 0x00397431 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397420(void)
{
    int _cf = 0; /* carry flag */

loc_00397420: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAC144) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397440
 * Original: 0x00397440 - 0x00397459 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397440(void)
{
    int _cf = 0; /* carry flag */

loc_00397440: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC140); /* divss */
    MEMF(0xBAC148) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397460
 * Original: 0x00397460 - 0x00397479 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397460(void)
{
    int _cf = 0; /* carry flag */

loc_00397460: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC158); /* divss */
    MEMF(0xBAC150) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397480
 * Original: 0x00397480 - 0x003974D7 (87 bytes, 20 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00397480: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x48F134);
    PUSH32(esp, 0x4B41D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397491u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_00397491: ;
    MEM8(0x4B41EF) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039749Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039749D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4B41C0;
    MEM32(0x4B41C0) = eax;
    MEM32(0x4B41C4) = eax;
    MEM32(0x4B41CC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4B41C8) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4B41C8);
    PUSH32(esp, 0x3ACD90);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003974D3u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003974D3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003974E0
 * Original: 0x003974E0 - 0x0039750C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003974E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003974E0: ;
    edx = 0x48F12C;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x57);
    /* nop */

loc_003974F0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003974F0; /* jne: not equal / not zero */

loc_00397506: ;
    MEM32(0xBAC154) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00397510
 * Original: 0x00397510 - 0x00397521 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397510(void)
{
    int _cf = 0; /* carry flag */

loc_00397510: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAC168) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397530
 * Original: 0x00397530 - 0x00397541 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397530(void)
{
    int _cf = 0; /* carry flag */

loc_00397530: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAC170) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397550
 * Original: 0x00397550 - 0x00397561 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397550(void)
{
    int _cf = 0; /* carry flag */

loc_00397550: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAC16C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397570
 * Original: 0x00397570 - 0x00397589 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397570(void)
{
    int _cf = 0; /* carry flag */

loc_00397570: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC168); /* divss */
    MEMF(0xBAC174) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397590
 * Original: 0x00397590 - 0x003975A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397590(void)
{
    int _cf = 0; /* carry flag */

loc_00397590: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC170); /* divss */
    MEMF(0xBAC178) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003975B0
 * Original: 0x003975B0 - 0x003975C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003975B0(void)
{
    int _cf = 0; /* carry flag */

loc_003975B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBAC180) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003975D0
 * Original: 0x003975D0 - 0x003975E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003975D0(void)
{
    int _cf = 0; /* carry flag */

loc_003975D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBAC160) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003975F0
 * Original: 0x003975F0 - 0x00397609 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003975F0(void)
{
    int _cf = 0; /* carry flag */

loc_003975F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC160); /* divss */
    MEMF(0xBAC15C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397610
 * Original: 0x00397610 - 0x0039762D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397610(void)
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

loc_00397610: ;
    fp_push(MEMF(0xBAC160)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397627u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00397627: ;
    MEM32(0xBAC17C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00397630
 * Original: 0x00397630 - 0x0039764D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397630(void)
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

loc_00397630: ;
    fp_push(MEMF(0xBAC160)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397647u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00397647: ;
    MEM32(0xBAC164) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00397650
 * Original: 0x00397650 - 0x00397693 (67 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397650(void)
{
    int _cf = 0; /* carry flag */

loc_00397650: ;
    eax = MEM32(0x4B33D0);
    MEM8(0x4B4250) = LO8(eax);
    MEM8(0x4B4251) = HI8(eax);
    SET_LO16(eax, MEM16(0x4B33D2));
    MEM8(0x4B4252) = LO8(eax);
    MEM8(0x4B4253) = HI8(eax);
    eax = MEM32(0xBA4888);
    MEM8(0x4B4254) = LO8(eax);
    MEM8(0x4B4255) = HI8(eax);
    SET_LO16(eax, MEM16(0xBA488A));
    MEM8(0x4B4256) = LO8(eax);
    MEM8(0x4B4257) = HI8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003976A0
 * Original: 0x003976A0 - 0x003976B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003976A0(void)
{
    int _cf = 0; /* carry flag */

loc_003976A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAC190) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003976C0
 * Original: 0x003976C0 - 0x003976D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003976C0(void)
{
    int _cf = 0; /* carry flag */

loc_003976C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAC198) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003976E0
 * Original: 0x003976E0 - 0x003976F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003976E0(void)
{
    int _cf = 0; /* carry flag */

loc_003976E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAC194) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397700
 * Original: 0x00397700 - 0x00397719 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397700(void)
{
    int _cf = 0; /* carry flag */

loc_00397700: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC190); /* divss */
    MEMF(0xBAC19C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397720
 * Original: 0x00397720 - 0x00397739 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397720(void)
{
    int _cf = 0; /* carry flag */

loc_00397720: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC198); /* divss */
    MEMF(0xBAC1A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397740
 * Original: 0x00397740 - 0x00397751 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397740(void)
{
    int _cf = 0; /* carry flag */

loc_00397740: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBAC1A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397760
 * Original: 0x00397760 - 0x00397771 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397760(void)
{
    int _cf = 0; /* carry flag */

loc_00397760: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBAC188) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397780
 * Original: 0x00397780 - 0x00397799 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397780(void)
{
    int _cf = 0; /* carry flag */

loc_00397780: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC188); /* divss */
    MEMF(0xBAC184) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003977A0
 * Original: 0x003977A0 - 0x003977BD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003977A0(void)
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

loc_003977A0: ;
    fp_push(MEMF(0xBAC188)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003977B7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003977B7: ;
    MEM32(0xBAC1A4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003977C0
 * Original: 0x003977C0 - 0x003977DD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003977C0(void)
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

loc_003977C0: ;
    fp_push(MEMF(0xBAC188)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003977D7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003977D7: ;
    MEM32(0xBAC18C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003977E0
 * Original: 0x003977E0 - 0x003977F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003977E0(void)
{
    int _cf = 0; /* carry flag */

loc_003977E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAC1AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397800
 * Original: 0x00397800 - 0x00397811 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397800(void)
{
    int _cf = 0; /* carry flag */

loc_00397800: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAC1B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397820
 * Original: 0x00397820 - 0x00397831 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397820(void)
{
    int _cf = 0; /* carry flag */

loc_00397820: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAC1B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397840
 * Original: 0x00397840 - 0x00397859 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397840(void)
{
    int _cf = 0; /* carry flag */

loc_00397840: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC1AC); /* divss */
    MEMF(0xBAC1B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397860
 * Original: 0x00397860 - 0x00397879 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397860(void)
{
    int _cf = 0; /* carry flag */

loc_00397860: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAC1B4); /* divss */
    MEMF(0xBAC1BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397880
 * Original: 0x00397880 - 0x00397891 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397880(void)
{
    int _cf = 0; /* carry flag */

loc_00397880: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB2620) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003978A0
 * Original: 0x003978A0 - 0x003978B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003978A0(void)
{
    int _cf = 0; /* carry flag */

loc_003978A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB2628) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003978C0
 * Original: 0x003978C0 - 0x003978D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003978C0(void)
{
    int _cf = 0; /* carry flag */

loc_003978C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB2624) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003978E0
 * Original: 0x003978E0 - 0x003978F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003978E0(void)
{
    int _cf = 0; /* carry flag */

loc_003978E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB2620); /* divss */
    MEMF(0xBB262C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397900
 * Original: 0x00397900 - 0x00397919 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397900(void)
{
    int _cf = 0; /* carry flag */

loc_00397900: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB2628); /* divss */
    MEMF(0xBB2630) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397920
 * Original: 0x00397920 - 0x00397931 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397920(void)
{
    int _cf = 0; /* carry flag */

loc_00397920: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBB3D20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397940
 * Original: 0x00397940 - 0x00397951 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397940(void)
{
    int _cf = 0; /* carry flag */

loc_00397940: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBACF10) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397960
 * Original: 0x00397960 - 0x00397979 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397960(void)
{
    int _cf = 0; /* carry flag */

loc_00397960: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBACF10); /* divss */
    MEMF(0xBAC700) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00397980
 * Original: 0x00397980 - 0x0039799D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397980(void)
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

loc_00397980: ;
    fp_push(MEMF(0xBACF10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397997u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00397997: ;
    MEM32(0xBB2980) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003979A0
 * Original: 0x003979A0 - 0x003979BD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003979A0(void)
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

loc_003979A0: ;
    fp_push(MEMF(0xBACF10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003979B7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003979B7: ;
    MEM32(0xBACF14) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003979C0
 * Original: 0x003979C0 - 0x003979D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003979C0(void)
{
    int _cf = 0; /* carry flag */

loc_003979C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498560)); /* movss */
    MEMF(0xBB3510) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003979E0
 * Original: 0x003979E0 - 0x00397AAA (202 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003979E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003979E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0xBB2F10;
    MEM32(esp + 0x10) = 8;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003979F4: ;
    eax = edi + -128;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003979FCu); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_003979FC: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    MEM32(edi + -16) = ebp;
    MEM32(edi + -12) = ebp;
    MEM32(edi + -8) = ebp;
    MEM32(edi + -4) = ebp;
    MEM32(edi + 4) = ebp;
    MEM32(edi) = ebp;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + 0xC) = ebp;
    MEM32(edi + 0x14) = ebp;
    MEM32(edi + 0x1C) = ebp;
    MEM32(edi + 0x18) = ebp;
    MEM32(eax) = 0x49612C;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x3A));
    MEM16(edi + 0x20) = LO16(ebp);
    MEM16(edi + 0x22) = LO16(ebp);
    MEMF(edi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    MEM16(edi + 0x2C) = LO16(ebp);
    MEM16(edi + 0x2E) = LO16(ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFE10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(edi + 0x32) = LO16(ebp);
    MEM16(edi + 0x34) = 1;
    MEM16(edi + 0x36) = LO16(ebp);
    MEM16(edi + 0x38) = 0xFFFF;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(edi + 0x3A) = LO16(eax);
    ebx = edi + 0x40;
    esi = 0x20;
    MEM32(ebx) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x44) = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397A82u); RECOMP_ABI_CALL(0x0025BA00u, sub_0025BA00); /* call 0x0025BA00 */

loc_00397A82: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xD0)) >> 32) & 1);
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_003979F4; /* jne: not equal / not zero */

loc_00397A97: ;
    PUSH32(esp, 0x3ACDA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397AA1u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00397AA1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00397AB0
 * Original: 0x00397AB0 - 0x00397B7A (202 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00397AB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0xBB35A0;
    MEM32(esp + 0x10) = 4;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00397AC4: ;
    eax = edi + -128;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397ACCu); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_00397ACC: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    MEM32(edi + -16) = ebp;
    MEM32(edi + -12) = ebp;
    MEM32(edi + -8) = ebp;
    MEM32(edi + -4) = ebp;
    MEM32(edi + 4) = ebp;
    MEM32(edi) = ebp;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + 0xC) = ebp;
    MEM32(edi + 0x14) = ebp;
    MEM32(edi + 0x1C) = ebp;
    MEM32(edi + 0x18) = ebp;
    MEM32(eax) = 0x49612C;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x3A));
    MEM16(edi + 0x20) = LO16(ebp);
    MEM16(edi + 0x22) = LO16(ebp);
    MEMF(edi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    MEM16(edi + 0x2C) = LO16(ebp);
    MEM16(edi + 0x2E) = LO16(ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFE10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(edi + 0x32) = LO16(ebp);
    MEM16(edi + 0x34) = 1;
    MEM16(edi + 0x36) = LO16(ebp);
    MEM16(edi + 0x38) = 0xFFFF;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(edi + 0x3A) = LO16(eax);
    ebx = edi + 0x40;
    esi = 0x20;
    MEM32(ebx) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x44) = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397B52u); RECOMP_ABI_CALL(0x0025BA00u, sub_0025BA00); /* call 0x0025BA00 */

loc_00397B52: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xD0)) >> 32) & 1);
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00397AC4; /* jne: not equal / not zero */

loc_00397B67: ;
    PUSH32(esp, 0x3ACF30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397B71u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00397B71: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00397B80
 * Original: 0x00397B80 - 0x00397C4A (202 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00397B80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0xBAC790;
    MEM32(esp + 0x10) = 4;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00397B94: ;
    eax = edi + -128;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397B9Cu); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_00397B9C: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    MEM32(edi + -16) = ebp;
    MEM32(edi + -12) = ebp;
    MEM32(edi + -8) = ebp;
    MEM32(edi + -4) = ebp;
    MEM32(edi + 4) = ebp;
    MEM32(edi) = ebp;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + 0xC) = ebp;
    MEM32(edi + 0x14) = ebp;
    MEM32(edi + 0x1C) = ebp;
    MEM32(edi + 0x18) = ebp;
    MEM32(eax) = 0x49612C;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x3A));
    MEM16(edi + 0x20) = LO16(ebp);
    MEM16(edi + 0x22) = LO16(ebp);
    MEMF(edi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    MEM16(edi + 0x2C) = LO16(ebp);
    MEM16(edi + 0x2E) = LO16(ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFE10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(edi + 0x32) = LO16(ebp);
    MEM16(edi + 0x34) = 1;
    MEM16(edi + 0x36) = LO16(ebp);
    MEM16(edi + 0x38) = 0xFFFF;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(edi + 0x3A) = LO16(eax);
    ebx = edi + 0x40;
    esi = 0x20;
    MEM32(ebx) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x44) = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397C22u); RECOMP_ABI_CALL(0x0025BA00u, sub_0025BA00); /* call 0x0025BA00 */

loc_00397C22: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xD0)) >> 32) & 1);
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00397B94; /* jne: not equal / not zero */

loc_00397C37: ;
    PUSH32(esp, 0x3AD0C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397C41u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00397C41: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00397C50
 * Original: 0x00397C50 - 0x00397D1A (202 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00397C50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0xBB26C0;
    MEM32(esp + 0x10) = 4;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00397C64: ;
    eax = edi + -128;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397C6Cu); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_00397C6C: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    MEM32(edi + -16) = ebp;
    MEM32(edi + -12) = ebp;
    MEM32(edi + -8) = ebp;
    MEM32(edi + -4) = ebp;
    MEM32(edi + 4) = ebp;
    MEM32(edi) = ebp;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + 0xC) = ebp;
    MEM32(edi + 0x14) = ebp;
    MEM32(edi + 0x1C) = ebp;
    MEM32(edi + 0x18) = ebp;
    MEM32(eax) = 0x49612C;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x3A));
    MEM16(edi + 0x20) = LO16(ebp);
    MEM16(edi + 0x22) = LO16(ebp);
    MEMF(edi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x28) = xmm0.f[0]; /* movss */
    MEM16(edi + 0x2C) = LO16(ebp);
    MEM16(edi + 0x2E) = LO16(ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFE10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(edi + 0x32) = LO16(ebp);
    MEM16(edi + 0x34) = 1;
    MEM16(edi + 0x36) = LO16(ebp);
    MEM16(edi + 0x38) = 0xFFFF;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(edi + 0x3A) = LO16(eax);
    ebx = edi + 0x40;
    esi = 0x20;
    MEM32(ebx) = ebp;
    MEM32(edi + 0x48) = ebp;
    MEM32(edi + 0x44) = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397CF2u); RECOMP_ABI_CALL(0x0025BA00u, sub_0025BA00); /* call 0x0025BA00 */

loc_00397CF2: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xD0)) >> 32) & 1);
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00397C64; /* jne: not equal / not zero */

loc_00397D07: ;
    PUSH32(esp, 0x3AD250);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397D11u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00397D11: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00397D20
 * Original: 0x00397D20 - 0x00397D6A (74 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00397D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00397D20: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBACD40;
    edi = 4;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00397D30: ;
    eax = esi + -112;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397D38u); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_00397D38: ;
    MEM32(eax) = 0x4961B0;
    MEM32(esi) = esi;
    MEM32(esi + 8) = esi;
    MEM32(esi + 4) = esi;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = ebp;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x14) = MEM8(esi + 0x14) & ((0xFE) & 0xFFu);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x90)) >> 32) & 1);
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00397D30; /* jne: not equal / not zero */

loc_00397D59: ;
    PUSH32(esp, 0x3AD3E0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397D63u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00397D63: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00397D70
 * Original: 0x00397D70 - 0x00397DBA (74 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00397D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00397D70: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB38D0;
    edi = 4;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00397D80: ;
    eax = esi + -112;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397D88u); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_00397D88: ;
    MEM32(eax) = 0x4961B0;
    MEM32(esi) = esi;
    MEM32(esi + 8) = esi;
    MEM32(esi + 4) = esi;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = ebp;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x14) = MEM8(esi + 0x14) & ((0xFE) & 0xFFu);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x90)) >> 32) & 1);
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00397D80; /* jne: not equal / not zero */

loc_00397DA9: ;
    PUSH32(esp, 0x3AD410);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397DB3u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00397DB3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00397DC0
 * Original: 0x00397DC0 - 0x00397DFB (59 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00397DC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBACF30;
    edi = 8;
    /* nop */

loc_00397DD0: ;
    PUSH32(esp, 0x1D2780);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0xE0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397DE2u); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */

loc_00397DE2: ;
    _fb = (uint32_t)(0xA90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xA90)) >> 32) & 1);
    esi = esi + 0xA90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00397DD0; /* jne: not equal / not zero */

loc_00397DEB: ;
    PUSH32(esp, 0x3AD440);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397DF5u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00397DF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00397E00
 * Original: 0x00397E00 - 0x00397E64 (100 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00397E00: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB2C80;
    ebp = 4;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00397E12: ;
    eax = esi + -112;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397E1Au); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_00397E1A: ;
    MEM32(esi) = esi;
    MEM32(esi + 8) = esi;
    MEM32(esi + 4) = esi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    SET_LO8(ecx, MEM8(esi + 0x14));
    SET_LO8(edx, MEM8(esi + 0x28));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((0xFE) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & ((0xFC) & 0xFFu));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x14) = LO8(ecx);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x28) = LO8(edx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xA0)) >> 32) & 1);
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x495B00;
    if ((_fa != 0)) goto loc_00397E12; /* jne: not equal / not zero */

loc_00397E53: ;
    PUSH32(esp, 0x3AD470);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397E5Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00397E5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00397E70
 * Original: 0x00397E70 - 0x00397ED4 (100 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00397E70: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB3B10;
    ebp = 4;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00397E82: ;
    eax = esi + -112;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397E8Au); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_00397E8A: ;
    MEM32(esi) = esi;
    MEM32(esi + 8) = esi;
    MEM32(esi + 4) = esi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    SET_LO8(ecx, MEM8(esi + 0x14));
    SET_LO8(edx, MEM8(esi + 0x28));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((0xFE) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & ((0xFC) & 0xFFu));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x14) = LO8(ecx);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x28) = LO8(edx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xA0)) >> 32) & 1);
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x495B00;
    if ((_fa != 0)) goto loc_00397E82; /* jne: not equal / not zero */

loc_00397EC3: ;
    PUSH32(esp, 0x3AD4A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397ECDu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00397ECD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00397EE0
 * Original: 0x00397EE0 - 0x00397F44 (100 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00397EE0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBACAC0;
    ebp = 4;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00397EF2: ;
    eax = esi + -112;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397EFAu); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_00397EFA: ;
    MEM32(esi) = esi;
    MEM32(esi + 8) = esi;
    MEM32(esi + 4) = esi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    SET_LO8(ecx, MEM8(esi + 0x14));
    SET_LO8(edx, MEM8(esi + 0x28));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((0xFE) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & ((0xFC) & 0xFFu));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x14) = LO8(ecx);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x28) = LO8(edx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xA0)) >> 32) & 1);
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x495B00;
    if ((_fa != 0)) goto loc_00397EF2; /* jne: not equal / not zero */

loc_00397F33: ;
    PUSH32(esp, 0x3AD4D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397F3Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00397F3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00397F50
 * Original: 0x00397F50 - 0x00397FB4 (100 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00397F50: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB2A00;
    ebp = 4;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00397F62: ;
    eax = esi + -112;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397F6Au); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_00397F6A: ;
    MEM32(esi) = esi;
    MEM32(esi + 8) = esi;
    MEM32(esi + 4) = esi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    SET_LO8(ecx, MEM8(esi + 0x14));
    SET_LO8(edx, MEM8(esi + 0x28));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((0xFE) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & ((0xFC) & 0xFFu));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x14) = LO8(ecx);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x28) = LO8(edx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xA0)) >> 32) & 1);
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x495B00;
    if ((_fa != 0)) goto loc_00397F62; /* jne: not equal / not zero */

loc_00397FA3: ;
    PUSH32(esp, 0x3AD500);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397FADu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00397FAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00397FC0
 * Original: 0x00397FC0 - 0x0039800A (74 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00397FC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00397FC0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB3DA0;
    edi = 4;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00397FD0: ;
    eax = esi + -112;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397FD8u); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_00397FD8: ;
    MEM32(eax) = 0x4961B0;
    MEM32(esi) = esi;
    MEM32(esi + 8) = esi;
    MEM32(esi + 4) = esi;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = ebp;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0x14) = MEM8(esi + 0x14) & ((0xFE) & 0xFFu);
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x90)) >> 32) & 1);
    esi = esi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00397FD0; /* jne: not equal / not zero */

loc_00397FF9: ;
    PUSH32(esp, 0x3AD530);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398003u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00398003: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00398010
 * Original: 0x00398010 - 0x00398074 (100 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00398010: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB2410;
    ebp = 4;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00398022: ;
    eax = esi + -112;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039802Au); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_0039802A: ;
    MEM32(esi) = esi;
    MEM32(esi + 8) = esi;
    MEM32(esi + 4) = esi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    SET_LO8(ecx, MEM8(esi + 0x14));
    SET_LO8(edx, MEM8(esi + 0x28));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((0xFE) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & ((0xFC) & 0xFFu));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x14) = LO8(ecx);
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM8(esi + 0x28) = LO8(edx);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xA0)) >> 32) & 1);
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = 0x495B00;
    if ((_fa != 0)) goto loc_00398022; /* jne: not equal / not zero */

loc_00398063: ;
    PUSH32(esp, 0x3AD560);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039806Du); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_0039806D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00398080
 * Original: 0x00398080 - 0x003980B0 (48 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00398080: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBAC1C0;
    edi = 4;
    /* nop */

loc_00398090: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398097u); RECOMP_ABI_CALL(0x002EE660u, sub_002EE660); /* call 0x002EE660 */

loc_00398097: ;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x150)) >> 32) & 1);
    esi = esi + 0x150;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00398090; /* jne: not equal / not zero */

loc_003980A0: ;
    PUSH32(esp, 0x3AD590);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003980AAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003980AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003980B0
 * Original: 0x003980B0 - 0x003980D0 (32 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003980B0(void)
{
    int _cf = 0; /* carry flag */

loc_003980B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB3F70) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003980D0
 * Original: 0x003980D0 - 0x003980E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003980D0(void)
{
    int _cf = 0; /* carry flag */

loc_003980D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB3F78) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003980F0
 * Original: 0x003980F0 - 0x00398101 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003980F0(void)
{
    int _cf = 0; /* carry flag */

loc_003980F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB3F74) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398110
 * Original: 0x00398110 - 0x00398129 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398110(void)
{
    int _cf = 0; /* carry flag */

loc_00398110: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3F70); /* divss */
    MEMF(0xBB3F7C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398130
 * Original: 0x00398130 - 0x00398149 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398130(void)
{
    int _cf = 0; /* carry flag */

loc_00398130: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3F78); /* divss */
    MEMF(0xBB3F80) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398150
 * Original: 0x00398150 - 0x00398161 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398150(void)
{
    int _cf = 0; /* carry flag */

loc_00398150: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB3F84) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398170
 * Original: 0x00398170 - 0x00398181 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398170(void)
{
    int _cf = 0; /* carry flag */

loc_00398170: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB3F8C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398190
 * Original: 0x00398190 - 0x003981A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398190(void)
{
    int _cf = 0; /* carry flag */

loc_00398190: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB3F88) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003981B0
 * Original: 0x003981B0 - 0x003981C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003981B0(void)
{
    int _cf = 0; /* carry flag */

loc_003981B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3F84); /* divss */
    MEMF(0xBB3F90) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003981D0
 * Original: 0x003981D0 - 0x003981E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003981D0(void)
{
    int _cf = 0; /* carry flag */

loc_003981D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3F8C); /* divss */
    MEMF(0xBB3F94) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003981F0
 * Original: 0x003981F0 - 0x003981FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003981F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003981F0: ;
    PUSH32(esp, 0x3AD5D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003981FAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003981FA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00398200
 * Original: 0x00398200 - 0x00398211 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398200(void)
{
    int _cf = 0; /* carry flag */

loc_00398200: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB3F98) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398220
 * Original: 0x00398220 - 0x00398231 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398220(void)
{
    int _cf = 0; /* carry flag */

loc_00398220: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB3FA0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398240
 * Original: 0x00398240 - 0x00398251 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398240(void)
{
    int _cf = 0; /* carry flag */

loc_00398240: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB3F9C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398260
 * Original: 0x00398260 - 0x00398279 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398260(void)
{
    int _cf = 0; /* carry flag */

loc_00398260: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3F98); /* divss */
    MEMF(0xBB3FA4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398280
 * Original: 0x00398280 - 0x00398299 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398280(void)
{
    int _cf = 0; /* carry flag */

loc_00398280: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3FA0); /* divss */
    MEMF(0xBB3FA8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003982A0
 * Original: 0x003982A0 - 0x003982B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003982A0(void)
{
    int _cf = 0; /* carry flag */

loc_003982A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB3FAC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003982C0
 * Original: 0x003982C0 - 0x003982D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003982C0(void)
{
    int _cf = 0; /* carry flag */

loc_003982C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB3FB4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003982E0
 * Original: 0x003982E0 - 0x003982F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003982E0(void)
{
    int _cf = 0; /* carry flag */

loc_003982E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB3FB0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398300
 * Original: 0x00398300 - 0x00398319 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398300(void)
{
    int _cf = 0; /* carry flag */

loc_00398300: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3FAC); /* divss */
    MEMF(0xBB3FB8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398320
 * Original: 0x00398320 - 0x00398339 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398320(void)
{
    int _cf = 0; /* carry flag */

loc_00398320: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3FB4); /* divss */
    MEMF(0xBB3FBC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398340
 * Original: 0x00398340 - 0x00398351 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398340(void)
{
    int _cf = 0; /* carry flag */

loc_00398340: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB3FC0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398360
 * Original: 0x00398360 - 0x00398371 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398360(void)
{
    int _cf = 0; /* carry flag */

loc_00398360: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB3FC8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398380
 * Original: 0x00398380 - 0x00398391 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398380(void)
{
    int _cf = 0; /* carry flag */

loc_00398380: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB3FC4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003983A0
 * Original: 0x003983A0 - 0x003983B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003983A0(void)
{
    int _cf = 0; /* carry flag */

loc_003983A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3FC0); /* divss */
    MEMF(0xBB3FCC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003983C0
 * Original: 0x003983C0 - 0x003983D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003983C0(void)
{
    int _cf = 0; /* carry flag */

loc_003983C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3FC8); /* divss */
    MEMF(0xBB3FD0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003983E0
 * Original: 0x003983E0 - 0x003983F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003983E0(void)
{
    int _cf = 0; /* carry flag */

loc_003983E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB3FD4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398400
 * Original: 0x00398400 - 0x00398411 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398400(void)
{
    int _cf = 0; /* carry flag */

loc_00398400: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB3FDC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398420
 * Original: 0x00398420 - 0x00398431 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398420(void)
{
    int _cf = 0; /* carry flag */

loc_00398420: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB3FD8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}
