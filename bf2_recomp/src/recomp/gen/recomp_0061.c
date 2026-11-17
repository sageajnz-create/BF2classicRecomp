/**
 * Star Wars Battlefront 2 - Recompiled code chunk 61
 * Functions: 250 (0x00393970 - 0x00395CE0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00393970
 * Original: 0x00393970 - 0x00393992 (34 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393970(void)
{
    int _cf = 0; /* carry flag */

loc_00393970: ;
    eax = MEM32(0x4ACE38);
    MEM8(0xBA4704) = LO8(eax);
    MEM8(0xBA4705) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE3A));
    MEM8(0xBA4706) = LO8(eax);
    MEM8(0xBA4707) = HI8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003939A0
 * Original: 0x003939A0 - 0x003939C2 (34 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003939A0(void)
{
    int _cf = 0; /* carry flag */

loc_003939A0: ;
    eax = MEM32(0x4ACE40);
    MEM8(0xBA4700) = LO8(eax);
    MEM8(0xBA4701) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE42));
    MEM8(0xBA4702) = LO8(eax);
    MEM8(0xBA4703) = HI8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003939D0
 * Original: 0x003939D0 - 0x003939E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003939D0(void)
{
    int _cf = 0; /* carry flag */

loc_003939D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA4708) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003939F0
 * Original: 0x003939F0 - 0x00393A01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003939F0(void)
{
    int _cf = 0; /* carry flag */

loc_003939F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA4710) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393A10
 * Original: 0x00393A10 - 0x00393A21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393A10(void)
{
    int _cf = 0; /* carry flag */

loc_00393A10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA470C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393A30
 * Original: 0x00393A30 - 0x00393A49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393A30(void)
{
    int _cf = 0; /* carry flag */

loc_00393A30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4708); /* divss */
    MEMF(0xBA4714) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393A50
 * Original: 0x00393A50 - 0x00393A69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393A50(void)
{
    int _cf = 0; /* carry flag */

loc_00393A50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4710); /* divss */
    MEMF(0xBA4718) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393A70
 * Original: 0x00393A70 - 0x00393A81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393A70(void)
{
    int _cf = 0; /* carry flag */

loc_00393A70: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA471C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393A90
 * Original: 0x00393A90 - 0x00393AA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393A90(void)
{
    int _cf = 0; /* carry flag */

loc_00393A90: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA4724) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393AB0
 * Original: 0x00393AB0 - 0x00393AC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393AB0(void)
{
    int _cf = 0; /* carry flag */

loc_00393AB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA4720) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393AD0
 * Original: 0x00393AD0 - 0x00393AE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393AD0(void)
{
    int _cf = 0; /* carry flag */

loc_00393AD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA471C); /* divss */
    MEMF(0xBA4728) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393AF0
 * Original: 0x00393AF0 - 0x00393B09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393AF0(void)
{
    int _cf = 0; /* carry flag */

loc_00393AF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4724); /* divss */
    MEMF(0xBA472C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393B10
 * Original: 0x00393B10 - 0x00393B21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B10(void)
{
    int _cf = 0; /* carry flag */

loc_00393B10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA473C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393B30
 * Original: 0x00393B30 - 0x00393B41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B30(void)
{
    int _cf = 0; /* carry flag */

loc_00393B30: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA4744) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393B50
 * Original: 0x00393B50 - 0x00393B61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B50(void)
{
    int _cf = 0; /* carry flag */

loc_00393B50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA4740) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393B70
 * Original: 0x00393B70 - 0x00393B89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B70(void)
{
    int _cf = 0; /* carry flag */

loc_00393B70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA473C); /* divss */
    MEMF(0xBA4748) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393B90
 * Original: 0x00393B90 - 0x00393BA9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B90(void)
{
    int _cf = 0; /* carry flag */

loc_00393B90: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4744); /* divss */
    MEMF(0xBA474C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393BB0
 * Original: 0x00393BB0 - 0x00393BC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393BB0(void)
{
    int _cf = 0; /* carry flag */

loc_00393BB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA4754) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393BD0
 * Original: 0x00393BD0 - 0x00393BE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393BD0(void)
{
    int _cf = 0; /* carry flag */

loc_00393BD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA4734) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393BF0
 * Original: 0x00393BF0 - 0x00393C09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393BF0(void)
{
    int _cf = 0; /* carry flag */

loc_00393BF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4734); /* divss */
    MEMF(0xBA4730) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393C10
 * Original: 0x00393C10 - 0x00393C2D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393C10(void)
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

loc_00393C10: ;
    fp_push(MEMF(0xBA4734)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393C27u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00393C27: ;
    MEM32(0xBA4750) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00393C30
 * Original: 0x00393C30 - 0x00393C4D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393C30(void)
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

loc_00393C30: ;
    fp_push(MEMF(0xBA4734)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393C47u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00393C47: ;
    MEM32(0xBA4738) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00393C50
 * Original: 0x00393C50 - 0x00393C88 (56 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393C50(void)
{
    int _cf = 0; /* carry flag */

loc_00393C50: ;
    eax = MEM32(0x4A9510);
    ecx = MEM32(0x4A9514);
    MEM32(0x4B30CC) = eax;
    MEM32(0x4B30D0) = ecx;
    MEM32(0x4B30F8) = eax;
    MEM32(0x4B30FC) = ecx;
    MEM32(0x4B3124) = eax;
    MEM32(0x4B3128) = ecx;
    MEM32(0x4B3150) = eax;
    MEM32(0x4B3154) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00393C90
 * Original: 0x00393C90 - 0x00393CA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393C90(void)
{
    int _cf = 0; /* carry flag */

loc_00393C90: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA4764) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393CB0
 * Original: 0x00393CB0 - 0x00393CC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393CB0(void)
{
    int _cf = 0; /* carry flag */

loc_00393CB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA476C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393CD0
 * Original: 0x00393CD0 - 0x00393CE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393CD0(void)
{
    int _cf = 0; /* carry flag */

loc_00393CD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA4768) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393CF0
 * Original: 0x00393CF0 - 0x00393D09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393CF0(void)
{
    int _cf = 0; /* carry flag */

loc_00393CF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4764); /* divss */
    MEMF(0xBA4770) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393D10
 * Original: 0x00393D10 - 0x00393D29 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393D10(void)
{
    int _cf = 0; /* carry flag */

loc_00393D10: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA476C); /* divss */
    MEMF(0xBA4774) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393D30
 * Original: 0x00393D30 - 0x00393D41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393D30(void)
{
    int _cf = 0; /* carry flag */

loc_00393D30: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA477C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393D50
 * Original: 0x00393D50 - 0x00393D61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393D50(void)
{
    int _cf = 0; /* carry flag */

loc_00393D50: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA475C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393D70
 * Original: 0x00393D70 - 0x00393D89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393D70(void)
{
    int _cf = 0; /* carry flag */

loc_00393D70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA475C); /* divss */
    MEMF(0xBA4758) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393D90
 * Original: 0x00393D90 - 0x00393DAD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393D90(void)
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

loc_00393D90: ;
    fp_push(MEMF(0xBA475C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393DA7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00393DA7: ;
    MEM32(0xBA4778) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00393DB0
 * Original: 0x00393DB0 - 0x00393DCD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393DB0(void)
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

loc_00393DB0: ;
    fp_push(MEMF(0xBA475C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393DC7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00393DC7: ;
    MEM32(0xBA4760) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00393DD0
 * Original: 0x00393DD0 - 0x00393DE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393DD0(void)
{
    int _cf = 0; /* carry flag */

loc_00393DD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA4790) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393DF0
 * Original: 0x00393DF0 - 0x00393E01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393DF0(void)
{
    int _cf = 0; /* carry flag */

loc_00393DF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA4798) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393E10
 * Original: 0x00393E10 - 0x00393E21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393E10(void)
{
    int _cf = 0; /* carry flag */

loc_00393E10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA4794) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393E30
 * Original: 0x00393E30 - 0x00393E49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393E30(void)
{
    int _cf = 0; /* carry flag */

loc_00393E30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4790); /* divss */
    MEMF(0xBA479C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393E50
 * Original: 0x00393E50 - 0x00393E69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393E50(void)
{
    int _cf = 0; /* carry flag */

loc_00393E50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4798); /* divss */
    MEMF(0xBA47A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393E70
 * Original: 0x00393E70 - 0x00393E81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393E70(void)
{
    int _cf = 0; /* carry flag */

loc_00393E70: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA47AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393E90
 * Original: 0x00393E90 - 0x00393EA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393E90(void)
{
    int _cf = 0; /* carry flag */

loc_00393E90: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA4788) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393EB0
 * Original: 0x00393EB0 - 0x00393EC9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393EB0(void)
{
    int _cf = 0; /* carry flag */

loc_00393EB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4788); /* divss */
    MEMF(0xBA4780) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393ED0
 * Original: 0x00393ED0 - 0x00393EED (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393ED0(void)
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

loc_00393ED0: ;
    fp_push(MEMF(0xBA4788)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393EE7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00393EE7: ;
    MEM32(0xBA47A4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00393EF0
 * Original: 0x00393EF0 - 0x00393F0D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393EF0(void)
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

loc_00393EF0: ;
    fp_push(MEMF(0xBA4788)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393F07u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00393F07: ;
    MEM32(0xBA478C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00393F10
 * Original: 0x00393F10 - 0x00393F67 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00393F10: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x48E3E4);
    PUSH32(esp, 0x4B3200);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393F21u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_00393F21: ;
    MEM8(0x4B321F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393F2Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_00393F2D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4B31F0;
    MEM32(0x4B31F0) = eax;
    MEM32(0x4B31F4) = eax;
    MEM32(0x4B31FC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4B31F8) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4B31F8);
    PUSH32(esp, 0x3ACB40);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00393F63u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00393F63: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00393F70
 * Original: 0x00393F70 - 0x00393F9C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00393F70: ;
    edx = 0x48E3E4;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x50);
    /* nop */

loc_00393F80: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00393F80; /* jne: not equal / not zero */

loc_00393F96: ;
    MEM32(0xBA47A8) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00393FA0
 * Original: 0x00393FA0 - 0x00393FCC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00393FA0: ;
    edx = 0x48E3D0;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x50);
    /* nop */

loc_00393FB0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00393FB0; /* jne: not equal / not zero */

loc_00393FC6: ;
    MEM32(0xBA4784) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00393FD0
 * Original: 0x00393FD0 - 0x00393FE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393FD0(void)
{
    int _cf = 0; /* carry flag */

loc_00393FD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA47BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00393FF0
 * Original: 0x00393FF0 - 0x00394001 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393FF0(void)
{
    int _cf = 0; /* carry flag */

loc_00393FF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA47C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394000
 * Original: 0x00394000 - 0x00394001 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394000(void)
{
    int _cf = 0; /* carry flag */

loc_00394000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00394010
 * Original: 0x00394010 - 0x00394021 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394010(void)
{
    int _cf = 0; /* carry flag */

loc_00394010: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA47C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394030
 * Original: 0x00394030 - 0x00394049 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394030(void)
{
    int _cf = 0; /* carry flag */

loc_00394030: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA47BC); /* divss */
    MEMF(0xBA47C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394050
 * Original: 0x00394050 - 0x00394069 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394050(void)
{
    int _cf = 0; /* carry flag */

loc_00394050: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA47C4); /* divss */
    MEMF(0xBA47CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394070
 * Original: 0x00394070 - 0x00394081 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394070(void)
{
    int _cf = 0; /* carry flag */

loc_00394070: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA47DC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394090
 * Original: 0x00394090 - 0x003940A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394090(void)
{
    int _cf = 0; /* carry flag */

loc_00394090: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA47B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003940B0
 * Original: 0x003940B0 - 0x003940C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003940B0(void)
{
    int _cf = 0; /* carry flag */

loc_003940B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA47B4); /* divss */
    MEMF(0xBA47B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003940D0
 * Original: 0x003940D0 - 0x003940ED (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003940D0(void)
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

loc_003940D0: ;
    fp_push(MEMF(0xBA47B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003940E7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003940E7: ;
    MEM32(0xBA47D4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003940F0
 * Original: 0x003940F0 - 0x0039410D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003940F0(void)
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

loc_003940F0: ;
    fp_push(MEMF(0xBA47B4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394107u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00394107: ;
    MEM32(0xBA47B8) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00394110
 * Original: 0x00394110 - 0x0039413C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00394110: ;
    edx = 0x48E66C;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x50);
    /* nop */

loc_00394120: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00394120; /* jne: not equal / not zero */

loc_00394136: ;
    MEM32(0xBA47D8) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00394140
 * Original: 0x00394140 - 0x0039416C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00394140: ;
    edx = 0x48E658;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x50);
    /* nop */

loc_00394150: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00394150; /* jne: not equal / not zero */

loc_00394166: ;
    MEM32(0xBA47D0) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00394170
 * Original: 0x00394170 - 0x00394181 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394170(void)
{
    int _cf = 0; /* carry flag */

loc_00394170: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA47EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394190
 * Original: 0x00394190 - 0x003941A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394190(void)
{
    int _cf = 0; /* carry flag */

loc_00394190: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA47F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003941B0
 * Original: 0x003941B0 - 0x003941C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003941B0(void)
{
    int _cf = 0; /* carry flag */

loc_003941B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA47F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003941D0
 * Original: 0x003941D0 - 0x003941E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003941D0(void)
{
    int _cf = 0; /* carry flag */

loc_003941D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA47EC); /* divss */
    MEMF(0xBA47F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003941F0
 * Original: 0x003941F0 - 0x00394209 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003941F0(void)
{
    int _cf = 0; /* carry flag */

loc_003941F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA47F4); /* divss */
    MEMF(0xBA47FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394210
 * Original: 0x00394210 - 0x00394221 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394210(void)
{
    int _cf = 0; /* carry flag */

loc_00394210: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA4804) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394230
 * Original: 0x00394230 - 0x00394241 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394230(void)
{
    int _cf = 0; /* carry flag */

loc_00394230: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA47E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394250
 * Original: 0x00394250 - 0x00394269 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394250(void)
{
    int _cf = 0; /* carry flag */

loc_00394250: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA47E4); /* divss */
    MEMF(0xBA47E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394270
 * Original: 0x00394270 - 0x0039428D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394270(void)
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

loc_00394270: ;
    fp_push(MEMF(0xBA47E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394287u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00394287: ;
    MEM32(0xBA4800) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00394290
 * Original: 0x00394290 - 0x003942AD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394290(void)
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

loc_00394290: ;
    fp_push(MEMF(0xBA47E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003942A7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003942A7: ;
    MEM32(0xBA47E8) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003942B0
 * Original: 0x003942B0 - 0x003942C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003942B0(void)
{
    int _cf = 0; /* carry flag */

loc_003942B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA4814) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003942D0
 * Original: 0x003942D0 - 0x003942E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003942D0(void)
{
    int _cf = 0; /* carry flag */

loc_003942D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA481C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003942F0
 * Original: 0x003942F0 - 0x00394301 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003942F0(void)
{
    int _cf = 0; /* carry flag */

loc_003942F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA4818) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394310
 * Original: 0x00394310 - 0x00394329 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394310(void)
{
    int _cf = 0; /* carry flag */

loc_00394310: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4814); /* divss */
    MEMF(0xBA4820) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394330
 * Original: 0x00394330 - 0x00394349 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394330(void)
{
    int _cf = 0; /* carry flag */

loc_00394330: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA481C); /* divss */
    MEMF(0xBA4824) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394350
 * Original: 0x00394350 - 0x00394361 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394350(void)
{
    int _cf = 0; /* carry flag */

loc_00394350: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA482C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394370
 * Original: 0x00394370 - 0x00394381 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394370(void)
{
    int _cf = 0; /* carry flag */

loc_00394370: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA480C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394390
 * Original: 0x00394390 - 0x003943A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394390(void)
{
    int _cf = 0; /* carry flag */

loc_00394390: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA480C); /* divss */
    MEMF(0xBA4808) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003943B0
 * Original: 0x003943B0 - 0x003943CD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003943B0(void)
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

loc_003943B0: ;
    fp_push(MEMF(0xBA480C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003943C7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003943C7: ;
    MEM32(0xBA4828) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003943D0
 * Original: 0x003943D0 - 0x003943ED (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003943D0(void)
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

loc_003943D0: ;
    fp_push(MEMF(0xBA480C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003943E7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003943E7: ;
    MEM32(0xBA4810) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003943F0
 * Original: 0x003943F0 - 0x00394447 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003943F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003943F0: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x48E6AC);
    PUSH32(esp, 0x4B3310);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394401u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_00394401: ;
    MEM8(0x4B332F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039440Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039440D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4B3300;
    MEM32(0x4B3300) = eax;
    MEM32(0x4B3304) = eax;
    MEM32(0x4B330C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4B3308) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4B3308);
    PUSH32(esp, 0x3ACB50);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394443u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00394443: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00394450
 * Original: 0x00394450 - 0x00394461 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394450(void)
{
    int _cf = 0; /* carry flag */

loc_00394450: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA483C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394470
 * Original: 0x00394470 - 0x00394481 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394470(void)
{
    int _cf = 0; /* carry flag */

loc_00394470: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA4844) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394490
 * Original: 0x00394490 - 0x003944A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394490(void)
{
    int _cf = 0; /* carry flag */

loc_00394490: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA4840) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003944B0
 * Original: 0x003944B0 - 0x003944C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003944B0(void)
{
    int _cf = 0; /* carry flag */

loc_003944B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA483C); /* divss */
    MEMF(0xBA4848) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003944D0
 * Original: 0x003944D0 - 0x003944E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003944D0(void)
{
    int _cf = 0; /* carry flag */

loc_003944D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4844); /* divss */
    MEMF(0xBA484C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003944F0
 * Original: 0x003944F0 - 0x00394501 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003944F0(void)
{
    int _cf = 0; /* carry flag */

loc_003944F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA4854) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394510
 * Original: 0x00394510 - 0x00394521 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394510(void)
{
    int _cf = 0; /* carry flag */

loc_00394510: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA4834) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394530
 * Original: 0x00394530 - 0x00394549 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394530(void)
{
    int _cf = 0; /* carry flag */

loc_00394530: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4834); /* divss */
    MEMF(0xBA4830) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394550
 * Original: 0x00394550 - 0x0039456D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394550(void)
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

loc_00394550: ;
    fp_push(MEMF(0xBA4834)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394567u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00394567: ;
    MEM32(0xBA4850) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00394570
 * Original: 0x00394570 - 0x0039458D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394570(void)
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

loc_00394570: ;
    fp_push(MEMF(0xBA4834)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394587u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00394587: ;
    MEM32(0xBA4838) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00394590
 * Original: 0x00394590 - 0x003945A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394590(void)
{
    int _cf = 0; /* carry flag */

loc_00394590: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA486C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003945B0
 * Original: 0x003945B0 - 0x003945C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003945B0(void)
{
    int _cf = 0; /* carry flag */

loc_003945B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA4874) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003945D0
 * Original: 0x003945D0 - 0x003945E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003945D0(void)
{
    int _cf = 0; /* carry flag */

loc_003945D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA4870) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003945F0
 * Original: 0x003945F0 - 0x00394609 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003945F0(void)
{
    int _cf = 0; /* carry flag */

loc_003945F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA486C); /* divss */
    MEMF(0xBA4878) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394610
 * Original: 0x00394610 - 0x00394629 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394610(void)
{
    int _cf = 0; /* carry flag */

loc_00394610: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4874); /* divss */
    MEMF(0xBA487C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394630
 * Original: 0x00394630 - 0x00394641 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394630(void)
{
    int _cf = 0; /* carry flag */

loc_00394630: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA4884) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394650
 * Original: 0x00394650 - 0x00394661 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394650(void)
{
    int _cf = 0; /* carry flag */

loc_00394650: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA4860) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394670
 * Original: 0x00394670 - 0x00394689 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394670(void)
{
    int _cf = 0; /* carry flag */

loc_00394670: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4860); /* divss */
    MEMF(0xBA4858) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394690
 * Original: 0x00394690 - 0x003946AD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394690(void)
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

loc_00394690: ;
    fp_push(MEMF(0xBA4860)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003946A7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003946A7: ;
    MEM32(0xBA4880) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003946B0
 * Original: 0x003946B0 - 0x003946CD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003946B0(void)
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

loc_003946B0: ;
    fp_push(MEMF(0xBA4860)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003946C7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003946C7: ;
    MEM32(0xBA4868) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003946D0
 * Original: 0x003946D0 - 0x003946F2 (34 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003946D0(void)
{
    int _cf = 0; /* carry flag */

loc_003946D0: ;
    eax = MEM32(0x4ACE2C);
    MEM8(0xBA4888) = LO8(eax);
    MEM8(0xBA4889) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE2E));
    MEM8(0xBA488A) = LO8(eax);
    MEM8(0xBA488B) = HI8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00394700
 * Original: 0x00394700 - 0x00394722 (34 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394700(void)
{
    int _cf = 0; /* carry flag */

loc_00394700: ;
    eax = MEM32(0x4ACE18);
    MEM8(0xBA485C) = LO8(eax);
    MEM8(0xBA485D) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE1A));
    MEM8(0xBA485E) = LO8(eax);
    MEM8(0xBA485F) = HI8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00394730
 * Original: 0x00394730 - 0x00394752 (34 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394730(void)
{
    int _cf = 0; /* carry flag */

loc_00394730: ;
    eax = MEM32(0x4ACE40);
    MEM8(0xBA4864) = LO8(eax);
    MEM8(0xBA4865) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE42));
    MEM8(0xBA4866) = LO8(eax);
    MEM8(0xBA4867) = HI8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00394760
 * Original: 0x00394760 - 0x00394771 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394760(void)
{
    int _cf = 0; /* carry flag */

loc_00394760: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA488C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394780
 * Original: 0x00394780 - 0x00394791 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394780(void)
{
    int _cf = 0; /* carry flag */

loc_00394780: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA4894) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003947A0
 * Original: 0x003947A0 - 0x003947B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003947A0(void)
{
    int _cf = 0; /* carry flag */

loc_003947A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA4890) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003947C0
 * Original: 0x003947C0 - 0x003947D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003947C0(void)
{
    int _cf = 0; /* carry flag */

loc_003947C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA488C); /* divss */
    MEMF(0xBA4898) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003947E0
 * Original: 0x003947E0 - 0x003947F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003947E0(void)
{
    int _cf = 0; /* carry flag */

loc_003947E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4894); /* divss */
    MEMF(0xBA489C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394800
 * Original: 0x00394800 - 0x00394857 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00394800: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x48E7B8);
    PUSH32(esp, 0x4B3430);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394811u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_00394811: ;
    MEM8(0x4B344F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039481Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039481D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4B3420;
    MEM32(0x4B3420) = eax;
    MEM32(0x4B3424) = eax;
    MEM32(0x4B342C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4B3428) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4B3428);
    PUSH32(esp, 0x3ACB60);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394853u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00394853: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00394860
 * Original: 0x00394860 - 0x00394871 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394860(void)
{
    int _cf = 0; /* carry flag */

loc_00394860: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA4AB0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394880
 * Original: 0x00394880 - 0x00394891 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394880(void)
{
    int _cf = 0; /* carry flag */

loc_00394880: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA4AB8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003948A0
 * Original: 0x003948A0 - 0x003948B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003948A0(void)
{
    int _cf = 0; /* carry flag */

loc_003948A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA4AB4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003948C0
 * Original: 0x003948C0 - 0x003948D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003948C0(void)
{
    int _cf = 0; /* carry flag */

loc_003948C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4AB0); /* divss */
    MEMF(0xBA4ABC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003948E0
 * Original: 0x003948E0 - 0x003948F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003948E0(void)
{
    int _cf = 0; /* carry flag */

loc_003948E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4AB8); /* divss */
    MEMF(0xBA4AC0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394900
 * Original: 0x00394900 - 0x00394911 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394900(void)
{
    int _cf = 0; /* carry flag */

loc_00394900: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA4AC8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394920
 * Original: 0x00394920 - 0x00394931 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394920(void)
{
    int _cf = 0; /* carry flag */

loc_00394920: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA4AA8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394940
 * Original: 0x00394940 - 0x00394959 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394940(void)
{
    int _cf = 0; /* carry flag */

loc_00394940: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4AA8); /* divss */
    MEMF(0xBA4AA4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394960
 * Original: 0x00394960 - 0x0039497D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394960(void)
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

loc_00394960: ;
    fp_push(MEMF(0xBA4AA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394977u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00394977: ;
    MEM32(0xBA4AC4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00394980
 * Original: 0x00394980 - 0x0039499D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394980(void)
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

loc_00394980: ;
    fp_push(MEMF(0xBA4AA8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394997u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00394997: ;
    MEM32(0xBA4AAC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003949A0
 * Original: 0x003949A0 - 0x003949B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003949A0(void)
{
    int _cf = 0; /* carry flag */

loc_003949A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA4AD8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003949C0
 * Original: 0x003949C0 - 0x003949D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003949C0(void)
{
    int _cf = 0; /* carry flag */

loc_003949C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA4AE0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003949E0
 * Original: 0x003949E0 - 0x003949F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003949E0(void)
{
    int _cf = 0; /* carry flag */

loc_003949E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA4ADC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394A00
 * Original: 0x00394A00 - 0x00394A19 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394A00(void)
{
    int _cf = 0; /* carry flag */

loc_00394A00: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4AD8); /* divss */
    MEMF(0xBA4AE4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394A20
 * Original: 0x00394A20 - 0x00394A39 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394A20(void)
{
    int _cf = 0; /* carry flag */

loc_00394A20: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4AE0); /* divss */
    MEMF(0xBA4AE8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394A40
 * Original: 0x00394A40 - 0x00394A51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394A40(void)
{
    int _cf = 0; /* carry flag */

loc_00394A40: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA4AF0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394A60
 * Original: 0x00394A60 - 0x00394A71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394A60(void)
{
    int _cf = 0; /* carry flag */

loc_00394A60: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA4AD0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394A80
 * Original: 0x00394A80 - 0x00394A99 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394A80(void)
{
    int _cf = 0; /* carry flag */

loc_00394A80: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4AD0); /* divss */
    MEMF(0xBA4ACC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394AA0
 * Original: 0x00394AA0 - 0x00394ABD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394AA0(void)
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

loc_00394AA0: ;
    fp_push(MEMF(0xBA4AD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394AB7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00394AB7: ;
    MEM32(0xBA4AEC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00394AC0
 * Original: 0x00394AC0 - 0x00394ADD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394AC0(void)
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

loc_00394AC0: ;
    fp_push(MEMF(0xBA4AD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394AD7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00394AD7: ;
    MEM32(0xBA4AD4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00394AE0
 * Original: 0x00394AE0 - 0x00394B37 (87 bytes, 20 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00394AE0: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x48E83C);
    PUSH32(esp, 0x4B3500);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394AF1u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_00394AF1: ;
    MEM8(0x4B351F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394AFDu); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_00394AFD: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4B34F0;
    MEM32(0x4B34F0) = eax;
    MEM32(0x4B34F4) = eax;
    MEM32(0x4B34FC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4B34F8) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4B34F8);
    PUSH32(esp, 0x3ACB70);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394B33u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00394B33: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00394B40
 * Original: 0x00394B40 - 0x00394B51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394B40(void)
{
    int _cf = 0; /* carry flag */

loc_00394B40: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA4AF4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394B60
 * Original: 0x00394B60 - 0x00394B71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394B60(void)
{
    int _cf = 0; /* carry flag */

loc_00394B60: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA4AFC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394B80
 * Original: 0x00394B80 - 0x00394B91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394B80(void)
{
    int _cf = 0; /* carry flag */

loc_00394B80: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA4AF8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394BA0
 * Original: 0x00394BA0 - 0x00394BB9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394BA0(void)
{
    int _cf = 0; /* carry flag */

loc_00394BA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4AF4); /* divss */
    MEMF(0xBA4B00) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394BC0
 * Original: 0x00394BC0 - 0x00394BD9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394BC0(void)
{
    int _cf = 0; /* carry flag */

loc_00394BC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA4AFC); /* divss */
    MEMF(0xBA4B04) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394BE0
 * Original: 0x00394BE0 - 0x00394BF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394BE0(void)
{
    int _cf = 0; /* carry flag */

loc_00394BE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA5308) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394C00
 * Original: 0x00394C00 - 0x00394C11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394C00(void)
{
    int _cf = 0; /* carry flag */

loc_00394C00: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA5310) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394C20
 * Original: 0x00394C20 - 0x00394C31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394C20(void)
{
    int _cf = 0; /* carry flag */

loc_00394C20: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA530C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394C40
 * Original: 0x00394C40 - 0x00394C59 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394C40(void)
{
    int _cf = 0; /* carry flag */

loc_00394C40: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA5308); /* divss */
    MEMF(0xBA5314) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394C60
 * Original: 0x00394C60 - 0x00394C79 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394C60(void)
{
    int _cf = 0; /* carry flag */

loc_00394C60: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA5310); /* divss */
    MEMF(0xBA5318) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394C80
 * Original: 0x00394C80 - 0x00394CAE (46 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00394C80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBA548B;
    edi = 0x80;
    /* nop */

loc_00394C90: ;
    PUSH32(esp, 0x208C60);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    eax = esi + -23;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394CA2u); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */

loc_00394CA2: ;
    MEM8(esi) = 0xFF;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x40)) >> 32) & 1);
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00394C90; /* jne: not equal / not zero */

loc_00394CAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00394CB0
 * Original: 0x00394CB0 - 0x00394CDE (46 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00394CB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBA4B43;
    edi = 0x20;
    /* nop */

loc_00394CC0: ;
    PUSH32(esp, 0x208C60);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    eax = esi + -23;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394CD2u); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */

loc_00394CD2: ;
    MEM8(esi) = 0xFF;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x40)) >> 32) & 1);
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00394CC0; /* jne: not equal / not zero */

loc_00394CDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00394CE0
 * Original: 0x00394CE0 - 0x00394D37 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00394CE0: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x48E910);
    PUSH32(esp, 0x4B35F0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394CF1u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_00394CF1: ;
    MEM8(0x4B360F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394CFDu); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_00394CFD: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4B35E0;
    MEM32(0x4B35E0) = eax;
    MEM32(0x4B35E4) = eax;
    MEM32(0x4B35EC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4B35E8) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4B35E8);
    PUSH32(esp, 0x3ACB80);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394D33u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00394D33: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00394D40
 * Original: 0x00394D40 - 0x00394E4C (268 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00394D40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0xBA5320;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394D4Du); RECOMP_ABI_CALL(0x000B37C0u, sub_000B37C0); /* call 0x000B37C0 */

loc_00394D4D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(0xBA53BC) = edx;
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp);
    edx = 0xFAFAFAFAu;
    MEM32(0xBA53F0) = edx;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(0xBA53B4) = xmm0.f[0]; /* movss */
    MEMF(0xBA53D0) = xmm0.f[0]; /* movss */
    MEMF(0xBA53D4) = xmm0.f[0]; /* movss */
    MEMF(0xBA53D8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x497C7C)); /* movss */
    MEM32(0xBA53F4) = edx;
    MEM32(0xBA53A4) = eax;
    MEM32(0xBA53A8) = eax;
    MEM32(0xBA53AC) = eax;
    MEM32(0xBA53B0) = eax;
    MEM32(0xBA53B8) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0xBA53C4) = eax;
    MEM32(0xBA53C8) = eax;
    MEM32(0xBA53CC) = eax;
    MEM32(0xBA53E4) = eax;
    MEM8(0xBA53E8) = LO8(eax);
    SET_LO8(eax, 1);
    MEMF(0xBA53DC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    MEM32(0xBA53F8) = edx;
    PUSH32(esp, 0x3ACB90);
    MEM32(0xBA53C0) = ecx;
    MEM32(0xBA53E0) = 0x4AE7A0;
    MEMF(0xBA53EC) = xmm0.f[0]; /* movss */
    MEM32(0xBA53FC) = edx;
    MEM32(0xBA5320) = 0x48E8E0;
    MEM32(0xBA5338) = 0x48E8DC;
    MEM32(0xBA53A0) = 0x48E878;
    MEM8(0xBA543E) = LO8(eax);
    MEM8(0xBA5440) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394E48u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00394E48: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00394E50
 * Original: 0x00394E50 - 0x00394E61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394E50(void)
{
    int _cf = 0; /* carry flag */

loc_00394E50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA7450) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394E70
 * Original: 0x00394E70 - 0x00394E81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394E70(void)
{
    int _cf = 0; /* carry flag */

loc_00394E70: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA7458) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394E90
 * Original: 0x00394E90 - 0x00394EA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394E90(void)
{
    int _cf = 0; /* carry flag */

loc_00394E90: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA7454) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394EB0
 * Original: 0x00394EB0 - 0x00394EC9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394EB0(void)
{
    int _cf = 0; /* carry flag */

loc_00394EB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA7450); /* divss */
    MEMF(0xBA745C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394ED0
 * Original: 0x00394ED0 - 0x00394EE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394ED0(void)
{
    int _cf = 0; /* carry flag */

loc_00394ED0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA7458); /* divss */
    MEMF(0xBA7460) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394EF0
 * Original: 0x00394EF0 - 0x00394F47 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00394EF0: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x48E920);
    PUSH32(esp, 0x4B3680);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394F01u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_00394F01: ;
    MEM8(0x4B369F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394F0Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_00394F0D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4B3670;
    MEM32(0x4B3670) = eax;
    MEM32(0x4B3674) = eax;
    MEM32(0x4B367C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4B3678) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4B3678);
    PUSH32(esp, 0x3ACBA0);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00394F43u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00394F43: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00394F50
 * Original: 0x00394F50 - 0x00394F61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394F50(void)
{
    int _cf = 0; /* carry flag */

loc_00394F50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA7464) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394F70
 * Original: 0x00394F70 - 0x00394F81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394F70(void)
{
    int _cf = 0; /* carry flag */

loc_00394F70: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA746C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394F90
 * Original: 0x00394F90 - 0x00394FA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394F90(void)
{
    int _cf = 0; /* carry flag */

loc_00394F90: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA7468) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394FB0
 * Original: 0x00394FB0 - 0x00394FC9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394FB0(void)
{
    int _cf = 0; /* carry flag */

loc_00394FB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA7464); /* divss */
    MEMF(0xBA7470) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394FD0
 * Original: 0x00394FD0 - 0x00394FE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394FD0(void)
{
    int _cf = 0; /* carry flag */

loc_00394FD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA746C); /* divss */
    MEMF(0xBA7474) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00394FF0
 * Original: 0x00394FF0 - 0x00395047 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00394FF0: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x48E940);
    PUSH32(esp, 0x4B3710);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395001u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_00395001: ;
    MEM8(0x4B372F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039500Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039500D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4B3700;
    MEM32(0x4B3700) = eax;
    MEM32(0x4B3704) = eax;
    MEM32(0x4B370C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4B3708) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4B3708);
    PUSH32(esp, 0x3ACBB0);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395043u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00395043: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00395050
 * Original: 0x00395050 - 0x00395061 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395050(void)
{
    int _cf = 0; /* carry flag */

loc_00395050: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA7478) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395070
 * Original: 0x00395070 - 0x00395081 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395070(void)
{
    int _cf = 0; /* carry flag */

loc_00395070: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA7480) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395090
 * Original: 0x00395090 - 0x003950A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395090(void)
{
    int _cf = 0; /* carry flag */

loc_00395090: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA747C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003950B0
 * Original: 0x003950B0 - 0x003950C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003950B0(void)
{
    int _cf = 0; /* carry flag */

loc_003950B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA7478); /* divss */
    MEMF(0xBA7484) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003950D0
 * Original: 0x003950D0 - 0x003950E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003950D0(void)
{
    int _cf = 0; /* carry flag */

loc_003950D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA7480); /* divss */
    MEMF(0xBA7488) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003950F0
 * Original: 0x003950F0 - 0x00395101 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003950F0(void)
{
    int _cf = 0; /* carry flag */

loc_003950F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA748C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395110
 * Original: 0x00395110 - 0x00395121 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395110(void)
{
    int _cf = 0; /* carry flag */

loc_00395110: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA7494) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395130
 * Original: 0x00395130 - 0x00395141 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395130(void)
{
    int _cf = 0; /* carry flag */

loc_00395130: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA7490) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395150
 * Original: 0x00395150 - 0x00395169 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395150(void)
{
    int _cf = 0; /* carry flag */

loc_00395150: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA748C); /* divss */
    MEMF(0xBA7498) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395170
 * Original: 0x00395170 - 0x00395189 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395170(void)
{
    int _cf = 0; /* carry flag */

loc_00395170: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA7494); /* divss */
    MEMF(0xBA749C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395190
 * Original: 0x00395190 - 0x003951AE (30 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00395190: ;
    PUSH32(esp, 0x208C60);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0xBA74A4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003951A3u); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003951A3: ;
    MEM32(0xBA74A0) = 0;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003951B0
 * Original: 0x003951B0 - 0x003951C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003951B0(void)
{
    int _cf = 0; /* carry flag */

loc_003951B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA74E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003951D0
 * Original: 0x003951D0 - 0x003951E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003951D0(void)
{
    int _cf = 0; /* carry flag */

loc_003951D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA74E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003951F0
 * Original: 0x003951F0 - 0x00395201 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003951F0(void)
{
    int _cf = 0; /* carry flag */

loc_003951F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA74E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395210
 * Original: 0x00395210 - 0x00395229 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395210(void)
{
    int _cf = 0; /* carry flag */

loc_00395210: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA74E0); /* divss */
    MEMF(0xBA74EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395230
 * Original: 0x00395230 - 0x00395249 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395230(void)
{
    int _cf = 0; /* carry flag */

loc_00395230: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA74E8); /* divss */
    MEMF(0xBA74F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395250
 * Original: 0x00395250 - 0x00395261 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395250(void)
{
    int _cf = 0; /* carry flag */

loc_00395250: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA9F40) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395270
 * Original: 0x00395270 - 0x00395281 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395270(void)
{
    int _cf = 0; /* carry flag */

loc_00395270: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA9F48) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395290
 * Original: 0x00395290 - 0x003952A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395290(void)
{
    int _cf = 0; /* carry flag */

loc_00395290: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA9F44) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003952B0
 * Original: 0x003952B0 - 0x003952C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003952B0(void)
{
    int _cf = 0; /* carry flag */

loc_003952B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9F40); /* divss */
    MEMF(0xBA9F4C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003952D0
 * Original: 0x003952D0 - 0x003952E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003952D0(void)
{
    int _cf = 0; /* carry flag */

loc_003952D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9F48); /* divss */
    MEMF(0xBA9F50) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003952F0
 * Original: 0x003952F0 - 0x00395347 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003952F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003952F0: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x48E9E8);
    PUSH32(esp, 0x4B3860);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395301u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_00395301: ;
    MEM8(0x4B387F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039530Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039530D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4B3850;
    MEM32(0x4B3850) = eax;
    MEM32(0x4B3854) = eax;
    MEM32(0x4B385C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4B3858) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4B3858);
    PUSH32(esp, 0x3ACBC0);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395343u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00395343: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00395350
 * Original: 0x00395350 - 0x003953A7 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00395350: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x48E9C0);
    PUSH32(esp, 0x4B38B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395361u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_00395361: ;
    MEM8(0x4B38CF) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039536Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039536D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4B38A0;
    MEM32(0x4B38A0) = eax;
    MEM32(0x4B38A4) = eax;
    MEM32(0x4B38AC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4B38A8) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4B38A8);
    PUSH32(esp, 0x3ACBD0);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003953A3u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003953A3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003953B0
 * Original: 0x003953B0 - 0x00395407 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003953B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003953B0: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x48E994);
    PUSH32(esp, 0x4B3900);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003953C1u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_003953C1: ;
    MEM8(0x4B391F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003953CDu); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_003953CD: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4B38F0;
    MEM32(0x4B38F0) = eax;
    MEM32(0x4B38F4) = eax;
    MEM32(0x4B38FC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4B38F8) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4B38F8);
    PUSH32(esp, 0x3ACBE0);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395403u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00395403: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00395410
 * Original: 0x00395410 - 0x00395467 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00395410: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x48E96C);
    PUSH32(esp, 0x4B3950);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395421u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_00395421: ;
    MEM8(0x4B396F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039542Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039542D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4B3940;
    MEM32(0x4B3940) = eax;
    MEM32(0x4B3944) = eax;
    MEM32(0x4B394C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4B3948) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4B3948);
    PUSH32(esp, 0x3ACBF0);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395463u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00395463: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00395470
 * Original: 0x00395470 - 0x00395481 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395470(void)
{
    int _cf = 0; /* carry flag */

loc_00395470: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA9F54) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395490
 * Original: 0x00395490 - 0x003954A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395490(void)
{
    int _cf = 0; /* carry flag */

loc_00395490: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA9F5C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003954B0
 * Original: 0x003954B0 - 0x003954C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003954B0(void)
{
    int _cf = 0; /* carry flag */

loc_003954B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA9F58) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003954D0
 * Original: 0x003954D0 - 0x003954E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003954D0(void)
{
    int _cf = 0; /* carry flag */

loc_003954D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9F54); /* divss */
    MEMF(0xBA9F60) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003954F0
 * Original: 0x003954F0 - 0x00395509 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003954F0(void)
{
    int _cf = 0; /* carry flag */

loc_003954F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9F5C); /* divss */
    MEMF(0xBA9F64) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395510
 * Original: 0x00395510 - 0x00395521 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395510(void)
{
    int _cf = 0; /* carry flag */

loc_00395510: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA9F68) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395530
 * Original: 0x00395530 - 0x00395541 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395530(void)
{
    int _cf = 0; /* carry flag */

loc_00395530: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA9F70) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395550
 * Original: 0x00395550 - 0x00395561 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395550(void)
{
    int _cf = 0; /* carry flag */

loc_00395550: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA9F6C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395570
 * Original: 0x00395570 - 0x00395589 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395570(void)
{
    int _cf = 0; /* carry flag */

loc_00395570: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9F68); /* divss */
    MEMF(0xBA9F74) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395590
 * Original: 0x00395590 - 0x003955A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395590(void)
{
    int _cf = 0; /* carry flag */

loc_00395590: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9F70); /* divss */
    MEMF(0xBA9F78) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003955B0
 * Original: 0x003955B0 - 0x003955C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003955B0(void)
{
    int _cf = 0; /* carry flag */

loc_003955B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA9F7C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003955D0
 * Original: 0x003955D0 - 0x003955E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003955D0(void)
{
    int _cf = 0; /* carry flag */

loc_003955D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA9F84) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003955F0
 * Original: 0x003955F0 - 0x00395601 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003955F0(void)
{
    int _cf = 0; /* carry flag */

loc_003955F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA9F80) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395610
 * Original: 0x00395610 - 0x00395629 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395610(void)
{
    int _cf = 0; /* carry flag */

loc_00395610: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9F7C); /* divss */
    MEMF(0xBA9F88) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395630
 * Original: 0x00395630 - 0x00395649 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395630(void)
{
    int _cf = 0; /* carry flag */

loc_00395630: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9F84); /* divss */
    MEMF(0xBA9F8C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395650
 * Original: 0x00395650 - 0x00395661 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395650(void)
{
    int _cf = 0; /* carry flag */

loc_00395650: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA9F9C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395670
 * Original: 0x00395670 - 0x00395681 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395670(void)
{
    int _cf = 0; /* carry flag */

loc_00395670: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA9FA4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395690
 * Original: 0x00395690 - 0x003956A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395690(void)
{
    int _cf = 0; /* carry flag */

loc_00395690: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA9FA0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003956B0
 * Original: 0x003956B0 - 0x003956C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003956B0(void)
{
    int _cf = 0; /* carry flag */

loc_003956B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9F9C); /* divss */
    MEMF(0xBA9FA8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003956D0
 * Original: 0x003956D0 - 0x003956E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003956D0(void)
{
    int _cf = 0; /* carry flag */

loc_003956D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9FA4); /* divss */
    MEMF(0xBA9FAC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003956F0
 * Original: 0x003956F0 - 0x00395701 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003956F0(void)
{
    int _cf = 0; /* carry flag */

loc_003956F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA9FB4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395710
 * Original: 0x00395710 - 0x00395721 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395710(void)
{
    int _cf = 0; /* carry flag */

loc_00395710: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA9F94) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395730
 * Original: 0x00395730 - 0x00395749 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395730(void)
{
    int _cf = 0; /* carry flag */

loc_00395730: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9F94); /* divss */
    MEMF(0xBA9F90) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395750
 * Original: 0x00395750 - 0x0039576D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395750(void)
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

loc_00395750: ;
    fp_push(MEMF(0xBA9F94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395767u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00395767: ;
    MEM32(0xBA9FB0) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00395770
 * Original: 0x00395770 - 0x0039578D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395770(void)
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

loc_00395770: ;
    fp_push(MEMF(0xBA9F94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395787u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00395787: ;
    MEM32(0xBA9F98) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00395790
 * Original: 0x00395790 - 0x003957A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395790(void)
{
    int _cf = 0; /* carry flag */

loc_00395790: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA9FB8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003957B0
 * Original: 0x003957B0 - 0x003957C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003957B0(void)
{
    int _cf = 0; /* carry flag */

loc_003957B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA9FC0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003957D0
 * Original: 0x003957D0 - 0x003957E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003957D0(void)
{
    int _cf = 0; /* carry flag */

loc_003957D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA9FBC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003957F0
 * Original: 0x003957F0 - 0x00395809 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003957F0(void)
{
    int _cf = 0; /* carry flag */

loc_003957F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9FB8); /* divss */
    MEMF(0xBA9FC4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395810
 * Original: 0x00395810 - 0x00395829 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395810(void)
{
    int _cf = 0; /* carry flag */

loc_00395810: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9FC0); /* divss */
    MEMF(0xBA9FC8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395830
 * Original: 0x00395830 - 0x00395841 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395830(void)
{
    int _cf = 0; /* carry flag */

loc_00395830: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA9FD8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395850
 * Original: 0x00395850 - 0x00395861 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395850(void)
{
    int _cf = 0; /* carry flag */

loc_00395850: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA9FE0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395870
 * Original: 0x00395870 - 0x00395881 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395870(void)
{
    int _cf = 0; /* carry flag */

loc_00395870: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA9FDC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395890
 * Original: 0x00395890 - 0x003958A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395890(void)
{
    int _cf = 0; /* carry flag */

loc_00395890: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9FD8); /* divss */
    MEMF(0xBA9FE4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003958B0
 * Original: 0x003958B0 - 0x003958C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003958B0(void)
{
    int _cf = 0; /* carry flag */

loc_003958B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9FE0); /* divss */
    MEMF(0xBA9FE8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003958D0
 * Original: 0x003958D0 - 0x003958E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003958D0(void)
{
    int _cf = 0; /* carry flag */

loc_003958D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA9FF0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003958F0
 * Original: 0x003958F0 - 0x00395901 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003958F0(void)
{
    int _cf = 0; /* carry flag */

loc_003958F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA9FD0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395910
 * Original: 0x00395910 - 0x00395929 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395910(void)
{
    int _cf = 0; /* carry flag */

loc_00395910: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9FD0); /* divss */
    MEMF(0xBA9FCC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395930
 * Original: 0x00395930 - 0x0039594D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395930(void)
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

loc_00395930: ;
    fp_push(MEMF(0xBA9FD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395947u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00395947: ;
    MEM32(0xBA9FEC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00395950
 * Original: 0x00395950 - 0x0039596D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395950(void)
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

loc_00395950: ;
    fp_push(MEMF(0xBA9FD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395967u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00395967: ;
    MEM32(0xBA9FD4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00395970
 * Original: 0x00395970 - 0x00395981 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395970(void)
{
    int _cf = 0; /* carry flag */

loc_00395970: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA9FF4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395990
 * Original: 0x00395990 - 0x003959A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395990(void)
{
    int _cf = 0; /* carry flag */

loc_00395990: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA9FFC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003959B0
 * Original: 0x003959B0 - 0x003959C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003959B0(void)
{
    int _cf = 0; /* carry flag */

loc_003959B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA9FF8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003959D0
 * Original: 0x003959D0 - 0x003959E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003959D0(void)
{
    int _cf = 0; /* carry flag */

loc_003959D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9FF4); /* divss */
    MEMF(0xBAA000) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003959F0
 * Original: 0x003959F0 - 0x00395A09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003959F0(void)
{
    int _cf = 0; /* carry flag */

loc_003959F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA9FFC); /* divss */
    MEMF(0xBAA004) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395A10
 * Original: 0x00395A10 - 0x00395A21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395A10(void)
{
    int _cf = 0; /* carry flag */

loc_00395A10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAA014) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395A30
 * Original: 0x00395A30 - 0x00395A41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395A30(void)
{
    int _cf = 0; /* carry flag */

loc_00395A30: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAA01C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395A50
 * Original: 0x00395A50 - 0x00395A61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395A50(void)
{
    int _cf = 0; /* carry flag */

loc_00395A50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAA018) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395A70
 * Original: 0x00395A70 - 0x00395A89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395A70(void)
{
    int _cf = 0; /* carry flag */

loc_00395A70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA014); /* divss */
    MEMF(0xBAA020) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395A90
 * Original: 0x00395A90 - 0x00395AA9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395A90(void)
{
    int _cf = 0; /* carry flag */

loc_00395A90: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA01C); /* divss */
    MEMF(0xBAA024) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395AB0
 * Original: 0x00395AB0 - 0x00395AC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395AB0(void)
{
    int _cf = 0; /* carry flag */

loc_00395AB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBAA02C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395AD0
 * Original: 0x00395AD0 - 0x00395AE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395AD0(void)
{
    int _cf = 0; /* carry flag */

loc_00395AD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBAA00C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395AF0
 * Original: 0x00395AF0 - 0x00395B09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395AF0(void)
{
    int _cf = 0; /* carry flag */

loc_00395AF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA00C); /* divss */
    MEMF(0xBAA008) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395B10
 * Original: 0x00395B10 - 0x00395B2D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395B10(void)
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

loc_00395B10: ;
    fp_push(MEMF(0xBAA00C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395B27u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00395B27: ;
    MEM32(0xBAA028) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00395B30
 * Original: 0x00395B30 - 0x00395B4D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395B30(void)
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

loc_00395B30: ;
    fp_push(MEMF(0xBAA00C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395B47u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00395B47: ;
    MEM32(0xBAA010) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00395B50
 * Original: 0x00395B50 - 0x00395B61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395B50(void)
{
    int _cf = 0; /* carry flag */

loc_00395B50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAA030) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395B70
 * Original: 0x00395B70 - 0x00395B81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395B70(void)
{
    int _cf = 0; /* carry flag */

loc_00395B70: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAA038) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395B90
 * Original: 0x00395B90 - 0x00395BA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395B90(void)
{
    int _cf = 0; /* carry flag */

loc_00395B90: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAA034) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395BB0
 * Original: 0x00395BB0 - 0x00395BC9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395BB0(void)
{
    int _cf = 0; /* carry flag */

loc_00395BB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA030); /* divss */
    MEMF(0xBAA03C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395BD0
 * Original: 0x00395BD0 - 0x00395BE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395BD0(void)
{
    int _cf = 0; /* carry flag */

loc_00395BD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA038); /* divss */
    MEMF(0xBAA040) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395BF0
 * Original: 0x00395BF0 - 0x00395C01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395BF0(void)
{
    int _cf = 0; /* carry flag */

loc_00395BF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAA044) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395C10
 * Original: 0x00395C10 - 0x00395C21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395C10(void)
{
    int _cf = 0; /* carry flag */

loc_00395C10: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAA04C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395C30
 * Original: 0x00395C30 - 0x00395C41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395C30(void)
{
    int _cf = 0; /* carry flag */

loc_00395C30: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAA048) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395C50
 * Original: 0x00395C50 - 0x00395C69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395C50(void)
{
    int _cf = 0; /* carry flag */

loc_00395C50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA044); /* divss */
    MEMF(0xBAA050) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395C70
 * Original: 0x00395C70 - 0x00395C89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395C70(void)
{
    int _cf = 0; /* carry flag */

loc_00395C70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBAA04C); /* divss */
    MEMF(0xBAA054) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395C90
 * Original: 0x00395C90 - 0x00395C9C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00395C90: ;
    PUSH32(esp, 0x3ACC00);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00395C9Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00395C9A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00395CA0
 * Original: 0x00395CA0 - 0x00395CB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395CA0(void)
{
    int _cf = 0; /* carry flag */

loc_00395CA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBAA064) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395CC0
 * Original: 0x00395CC0 - 0x00395CD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395CC0(void)
{
    int _cf = 0; /* carry flag */

loc_00395CC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBAA06C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00395CE0
 * Original: 0x00395CE0 - 0x00395CF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395CE0(void)
{
    int _cf = 0; /* carry flag */

loc_00395CE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBAA068) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}
