/**
 * Star Wars Battlefront 2 - Recompiled code chunk 63
 * Functions: 250 (0x00398440 - 0x0039A350)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00398440
 * Original: 0x00398440 - 0x00398459 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398440(void)
{
    int _cf = 0; /* carry flag */

loc_00398440: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3FD4); /* divss */
    MEMF(0xBB3FE0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398460
 * Original: 0x00398460 - 0x00398479 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398460(void)
{
    int _cf = 0; /* carry flag */

loc_00398460: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3FDC); /* divss */
    MEMF(0xBB3FE4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398480
 * Original: 0x00398480 - 0x00398491 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398480(void)
{
    int _cf = 0; /* carry flag */

loc_00398480: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB3FE8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003984A0
 * Original: 0x003984A0 - 0x003984B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003984A0(void)
{
    int _cf = 0; /* carry flag */

loc_003984A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB3FF0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003984C0
 * Original: 0x003984C0 - 0x003984D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003984C0(void)
{
    int _cf = 0; /* carry flag */

loc_003984C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB3FEC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003984E0
 * Original: 0x003984E0 - 0x003984F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003984E0(void)
{
    int _cf = 0; /* carry flag */

loc_003984E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3FE8); /* divss */
    MEMF(0xBB3FF4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398500
 * Original: 0x00398500 - 0x00398519 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398500(void)
{
    int _cf = 0; /* carry flag */

loc_00398500: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3FF0); /* divss */
    MEMF(0xBB3FF8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398520
 * Original: 0x00398520 - 0x00398531 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398520(void)
{
    int _cf = 0; /* carry flag */

loc_00398520: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB3FFC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398540
 * Original: 0x00398540 - 0x00398551 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398540(void)
{
    int _cf = 0; /* carry flag */

loc_00398540: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4004) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398560
 * Original: 0x00398560 - 0x00398571 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398560(void)
{
    int _cf = 0; /* carry flag */

loc_00398560: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4000) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398580
 * Original: 0x00398580 - 0x00398599 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398580(void)
{
    int _cf = 0; /* carry flag */

loc_00398580: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB3FFC); /* divss */
    MEMF(0xBB4008) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003985A0
 * Original: 0x003985A0 - 0x003985B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003985A0(void)
{
    int _cf = 0; /* carry flag */

loc_003985A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4004); /* divss */
    MEMF(0xBB400C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003985C0
 * Original: 0x003985C0 - 0x003985D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003985C0(void)
{
    int _cf = 0; /* carry flag */

loc_003985C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB401C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003985E0
 * Original: 0x003985E0 - 0x003985F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003985E0(void)
{
    int _cf = 0; /* carry flag */

loc_003985E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4024) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398600
 * Original: 0x00398600 - 0x00398611 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398600(void)
{
    int _cf = 0; /* carry flag */

loc_00398600: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4020) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398620
 * Original: 0x00398620 - 0x00398639 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398620(void)
{
    int _cf = 0; /* carry flag */

loc_00398620: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB401C); /* divss */
    MEMF(0xBB4028) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398640
 * Original: 0x00398640 - 0x00398659 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398640(void)
{
    int _cf = 0; /* carry flag */

loc_00398640: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4024); /* divss */
    MEMF(0xBB402C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398660
 * Original: 0x00398660 - 0x00398671 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398660(void)
{
    int _cf = 0; /* carry flag */

loc_00398660: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBB4034) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398680
 * Original: 0x00398680 - 0x00398691 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398680(void)
{
    int _cf = 0; /* carry flag */

loc_00398680: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBB4014) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003986A0
 * Original: 0x003986A0 - 0x003986B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003986A0(void)
{
    int _cf = 0; /* carry flag */

loc_003986A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4014); /* divss */
    MEMF(0xBB4010) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003986C0
 * Original: 0x003986C0 - 0x003986DD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003986C0(void)
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

loc_003986C0: ;
    fp_push(MEMF(0xBB4014)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003986D7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003986D7: ;
    MEM32(0xBB4030) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003986E0
 * Original: 0x003986E0 - 0x003986FD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003986E0(void)
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

loc_003986E0: ;
    fp_push(MEMF(0xBB4014)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003986F7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003986F7: ;
    MEM32(0xBB4018) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00398700
 * Original: 0x00398700 - 0x0039870C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00398700: ;
    PUSH32(esp, 0x3AD5E0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039870Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039870A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00398710
 * Original: 0x00398710 - 0x00398721 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398710(void)
{
    int _cf = 0; /* carry flag */

loc_00398710: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4038) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398730
 * Original: 0x00398730 - 0x00398741 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398730(void)
{
    int _cf = 0; /* carry flag */

loc_00398730: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4040) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398750
 * Original: 0x00398750 - 0x00398761 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398750(void)
{
    int _cf = 0; /* carry flag */

loc_00398750: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB403C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398770
 * Original: 0x00398770 - 0x00398789 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398770(void)
{
    int _cf = 0; /* carry flag */

loc_00398770: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4038); /* divss */
    MEMF(0xBB4044) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398790
 * Original: 0x00398790 - 0x003987A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398790(void)
{
    int _cf = 0; /* carry flag */

loc_00398790: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4040); /* divss */
    MEMF(0xBB4048) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003987B0
 * Original: 0x003987B0 - 0x003987BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003987B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003987B0: ;
    PUSH32(esp, 0x3AD5F0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003987BAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003987BA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003987C0
 * Original: 0x003987C0 - 0x003987D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003987C0(void)
{
    int _cf = 0; /* carry flag */

loc_003987C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB404C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003987E0
 * Original: 0x003987E0 - 0x003987F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003987E0(void)
{
    int _cf = 0; /* carry flag */

loc_003987E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4054) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398800
 * Original: 0x00398800 - 0x00398811 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398800(void)
{
    int _cf = 0; /* carry flag */

loc_00398800: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4050) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398820
 * Original: 0x00398820 - 0x00398839 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398820(void)
{
    int _cf = 0; /* carry flag */

loc_00398820: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB404C); /* divss */
    MEMF(0xBB4058) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398840
 * Original: 0x00398840 - 0x00398859 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398840(void)
{
    int _cf = 0; /* carry flag */

loc_00398840: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4054); /* divss */
    MEMF(0xBB405C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398860
 * Original: 0x00398860 - 0x00398871 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398860(void)
{
    int _cf = 0; /* carry flag */

loc_00398860: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB406C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398880
 * Original: 0x00398880 - 0x00398891 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398880(void)
{
    int _cf = 0; /* carry flag */

loc_00398880: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4074) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003988A0
 * Original: 0x003988A0 - 0x003988B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003988A0(void)
{
    int _cf = 0; /* carry flag */

loc_003988A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4070) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003988C0
 * Original: 0x003988C0 - 0x003988D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003988C0(void)
{
    int _cf = 0; /* carry flag */

loc_003988C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB406C); /* divss */
    MEMF(0xBB4078) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003988E0
 * Original: 0x003988E0 - 0x003988F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003988E0(void)
{
    int _cf = 0; /* carry flag */

loc_003988E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4074); /* divss */
    MEMF(0xBB407C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398900
 * Original: 0x00398900 - 0x00398911 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398900(void)
{
    int _cf = 0; /* carry flag */

loc_00398900: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBB4084) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398920
 * Original: 0x00398920 - 0x00398931 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398920(void)
{
    int _cf = 0; /* carry flag */

loc_00398920: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBB4064) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398940
 * Original: 0x00398940 - 0x00398959 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398940(void)
{
    int _cf = 0; /* carry flag */

loc_00398940: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4064); /* divss */
    MEMF(0xBB4060) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398960
 * Original: 0x00398960 - 0x0039897D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398960(void)
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

loc_00398960: ;
    fp_push(MEMF(0xBB4064)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398977u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00398977: ;
    MEM32(0xBB4080) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00398980
 * Original: 0x00398980 - 0x0039899D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398980(void)
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

loc_00398980: ;
    fp_push(MEMF(0xBB4064)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398997u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00398997: ;
    MEM32(0xBB4068) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003989A0
 * Original: 0x003989A0 - 0x003989D1 (49 bytes, 7 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003989A0(void)
{
    int _cf = 0; /* carry flag */

loc_003989A0: ;
    xmm0 = XMM_SCALAR(MEMF(0xBB4074)); /* movss */
    MEMF(0xBB408C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x4720E4)); /* movss */
    MEMF(0xBB4090) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x498284)); /* movss */
    MEMF(0xBB4094) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003989E0
 * Original: 0x003989E0 - 0x003989F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003989E0(void)
{
    int _cf = 0; /* carry flag */

loc_003989E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4098) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398A00
 * Original: 0x00398A00 - 0x00398A11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398A00(void)
{
    int _cf = 0; /* carry flag */

loc_00398A00: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB40A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398A20
 * Original: 0x00398A20 - 0x00398A31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398A20(void)
{
    int _cf = 0; /* carry flag */

loc_00398A20: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB409C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398A40
 * Original: 0x00398A40 - 0x00398A59 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398A40(void)
{
    int _cf = 0; /* carry flag */

loc_00398A40: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4098); /* divss */
    MEMF(0xBB40A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398A60
 * Original: 0x00398A60 - 0x00398A79 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398A60(void)
{
    int _cf = 0; /* carry flag */

loc_00398A60: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB40A0); /* divss */
    MEMF(0xBB40A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398A80
 * Original: 0x00398A80 - 0x00398A91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398A80(void)
{
    int _cf = 0; /* carry flag */

loc_00398A80: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB40B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398AA0
 * Original: 0x00398AA0 - 0x00398AB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398AA0(void)
{
    int _cf = 0; /* carry flag */

loc_00398AA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB40C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398AC0
 * Original: 0x00398AC0 - 0x00398AD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398AC0(void)
{
    int _cf = 0; /* carry flag */

loc_00398AC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB40BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398AE0
 * Original: 0x00398AE0 - 0x00398AF9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398AE0(void)
{
    int _cf = 0; /* carry flag */

loc_00398AE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB40B8); /* divss */
    MEMF(0xBB40C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398B00
 * Original: 0x00398B00 - 0x00398B19 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398B00(void)
{
    int _cf = 0; /* carry flag */

loc_00398B00: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB40C0); /* divss */
    MEMF(0xBB40C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398B20
 * Original: 0x00398B20 - 0x00398B31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398B20(void)
{
    int _cf = 0; /* carry flag */

loc_00398B20: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBB40D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398B40
 * Original: 0x00398B40 - 0x00398B51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398B40(void)
{
    int _cf = 0; /* carry flag */

loc_00398B40: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBB40B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398B60
 * Original: 0x00398B60 - 0x00398B79 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398B60(void)
{
    int _cf = 0; /* carry flag */

loc_00398B60: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB40B0); /* divss */
    MEMF(0xBB40AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398B80
 * Original: 0x00398B80 - 0x00398B9D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398B80(void)
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

loc_00398B80: ;
    fp_push(MEMF(0xBB40B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398B97u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00398B97: ;
    MEM32(0xBB40CC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00398BA0
 * Original: 0x00398BA0 - 0x00398BBD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398BA0(void)
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

loc_00398BA0: ;
    fp_push(MEMF(0xBB40B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398BB7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00398BB7: ;
    MEM32(0xBB40B4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00398BC0
 * Original: 0x00398BC0 - 0x00398BCC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00398BC0: ;
    PUSH32(esp, 0x3AD600);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398BCAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00398BCA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00398BD0
 * Original: 0x00398BD0 - 0x00398BE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398BD0(void)
{
    int _cf = 0; /* carry flag */

loc_00398BD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB40D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398BF0
 * Original: 0x00398BF0 - 0x00398C01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398BF0(void)
{
    int _cf = 0; /* carry flag */

loc_00398BF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB40DC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398C10
 * Original: 0x00398C10 - 0x00398C21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398C10(void)
{
    int _cf = 0; /* carry flag */

loc_00398C10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB40D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398C30
 * Original: 0x00398C30 - 0x00398C49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398C30(void)
{
    int _cf = 0; /* carry flag */

loc_00398C30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB40D4); /* divss */
    MEMF(0xBB40E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398C50
 * Original: 0x00398C50 - 0x00398C69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398C50(void)
{
    int _cf = 0; /* carry flag */

loc_00398C50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB40DC); /* divss */
    MEMF(0xBB40E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398C70
 * Original: 0x00398C70 - 0x00398C7C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00398C70: ;
    PUSH32(esp, 0x3AD610);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398C7Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00398C7A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00398C80
 * Original: 0x00398C80 - 0x00398C91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398C80(void)
{
    int _cf = 0; /* carry flag */

loc_00398C80: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB40E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398CA0
 * Original: 0x00398CA0 - 0x00398CB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398CA0(void)
{
    int _cf = 0; /* carry flag */

loc_00398CA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB40F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398CC0
 * Original: 0x00398CC0 - 0x00398CD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398CC0(void)
{
    int _cf = 0; /* carry flag */

loc_00398CC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB40EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398CE0
 * Original: 0x00398CE0 - 0x00398CF9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398CE0(void)
{
    int _cf = 0; /* carry flag */

loc_00398CE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB40E8); /* divss */
    MEMF(0xBB40F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398D00
 * Original: 0x00398D00 - 0x00398D19 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398D00(void)
{
    int _cf = 0; /* carry flag */

loc_00398D00: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB40F0); /* divss */
    MEMF(0xBB40F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398D20
 * Original: 0x00398D20 - 0x00398D48 (40 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00398D20: ;
    eax = 0xBB4100;
    ecx = 0x20;
    /* nop */

loc_00398D30: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00398D30; /* jne: not equal / not zero */

loc_00398D3C: ;
    PUSH32(esp, 0x3AD620);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398D46u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00398D46: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00398D50
 * Original: 0x00398D50 - 0x00398D7A (42 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00398D50: ;
    xmm0 = XMM_SCALAR(MEMF(0x497C7C)); /* movss */
    eax = 0xBB4108;
    /* nop */

loc_00398D60: ;
    MEMF(eax) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB4288) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB4288 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00398D60; /* jl: less (signed <) */

loc_00398D6E: ;
    PUSH32(esp, 0x3AD630);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398D78u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00398D78: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00398D80
 * Original: 0x00398D80 - 0x00398D91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398D80(void)
{
    int _cf = 0; /* carry flag */

loc_00398D80: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB45DC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398DA0
 * Original: 0x00398DA0 - 0x00398DB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398DA0(void)
{
    int _cf = 0; /* carry flag */

loc_00398DA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB45E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398DC0
 * Original: 0x00398DC0 - 0x00398DD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398DC0(void)
{
    int _cf = 0; /* carry flag */

loc_00398DC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB45E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398DE0
 * Original: 0x00398DE0 - 0x00398DF9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398DE0(void)
{
    int _cf = 0; /* carry flag */

loc_00398DE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB45DC); /* divss */
    MEMF(0xBB45E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398E00
 * Original: 0x00398E00 - 0x00398E19 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398E00(void)
{
    int _cf = 0; /* carry flag */

loc_00398E00: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB45E4); /* divss */
    MEMF(0xBB45EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398E20
 * Original: 0x00398E20 - 0x00398E31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398E20(void)
{
    int _cf = 0; /* carry flag */

loc_00398E20: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBB45F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398E40
 * Original: 0x00398E40 - 0x00398E51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398E40(void)
{
    int _cf = 0; /* carry flag */

loc_00398E40: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBB45D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398E60
 * Original: 0x00398E60 - 0x00398E79 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398E60(void)
{
    int _cf = 0; /* carry flag */

loc_00398E60: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB45D4); /* divss */
    MEMF(0xBB45D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398E80
 * Original: 0x00398E80 - 0x00398E9D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398E80(void)
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

loc_00398E80: ;
    fp_push(MEMF(0xBB45D4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398E97u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00398E97: ;
    MEM32(0xBB45F0) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00398EA0
 * Original: 0x00398EA0 - 0x00398EBD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398EA0(void)
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

loc_00398EA0: ;
    fp_push(MEMF(0xBB45D4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398EB7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00398EB7: ;
    MEM32(0xBB45D8) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00398EC0
 * Original: 0x00398EC0 - 0x00398EF8 (56 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00398EC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xBB4280;
    edi = 4;
    /* nop */

loc_00398ED0: ;
    PUSH32(esp, 0x1E9FE0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x28);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398EDFu); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */

loc_00398EDF: ;
    _fb = (uint32_t)(0xD4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xD4)) >> 32) & 1);
    esi = esi + 0xD4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00398ED0; /* jne: not equal / not zero */

loc_00398EE8: ;
    PUSH32(esp, 0x3AD670);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398EF2u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00398EF2: ;
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
 * sub_00398F00
 * Original: 0x00398F00 - 0x00398F11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398F00(void)
{
    int _cf = 0; /* carry flag */

loc_00398F00: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB45F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398F20
 * Original: 0x00398F20 - 0x00398F31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398F20(void)
{
    int _cf = 0; /* carry flag */

loc_00398F20: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4600) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398F40
 * Original: 0x00398F40 - 0x00398F51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398F40(void)
{
    int _cf = 0; /* carry flag */

loc_00398F40: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB45FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398F60
 * Original: 0x00398F60 - 0x00398F79 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398F60(void)
{
    int _cf = 0; /* carry flag */

loc_00398F60: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB45F8); /* divss */
    MEMF(0xBB4604) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398F80
 * Original: 0x00398F80 - 0x00398F99 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398F80(void)
{
    int _cf = 0; /* carry flag */

loc_00398F80: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4600); /* divss */
    MEMF(0xBB4608) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398FA0
 * Original: 0x00398FA0 - 0x00398FAC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00398FA0: ;
    PUSH32(esp, 0x3AD680);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398FAAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00398FAA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00398FB0
 * Original: 0x00398FB0 - 0x00398FC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398FB0(void)
{
    int _cf = 0; /* carry flag */

loc_00398FB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB460C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398FD0
 * Original: 0x00398FD0 - 0x00398FE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398FD0(void)
{
    int _cf = 0; /* carry flag */

loc_00398FD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4614) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00398FF0
 * Original: 0x00398FF0 - 0x00399001 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00398FF0(void)
{
    int _cf = 0; /* carry flag */

loc_00398FF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4610) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399010
 * Original: 0x00399010 - 0x00399029 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399010(void)
{
    int _cf = 0; /* carry flag */

loc_00399010: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB460C); /* divss */
    MEMF(0xBB4618) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399030
 * Original: 0x00399030 - 0x00399049 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399030(void)
{
    int _cf = 0; /* carry flag */

loc_00399030: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4614); /* divss */
    MEMF(0xBB461C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399050
 * Original: 0x00399050 - 0x00399061 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399050(void)
{
    int _cf = 0; /* carry flag */

loc_00399050: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4620) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399070
 * Original: 0x00399070 - 0x00399081 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399070(void)
{
    int _cf = 0; /* carry flag */

loc_00399070: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4628) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399090
 * Original: 0x00399090 - 0x003990A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399090(void)
{
    int _cf = 0; /* carry flag */

loc_00399090: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4624) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003990B0
 * Original: 0x003990B0 - 0x003990C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003990B0(void)
{
    int _cf = 0; /* carry flag */

loc_003990B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4620); /* divss */
    MEMF(0xBB462C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003990D0
 * Original: 0x003990D0 - 0x003990E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003990D0(void)
{
    int _cf = 0; /* carry flag */

loc_003990D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4628); /* divss */
    MEMF(0xBB4630) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003990F0
 * Original: 0x003990F0 - 0x00399101 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003990F0(void)
{
    int _cf = 0; /* carry flag */

loc_003990F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4634) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399110
 * Original: 0x00399110 - 0x00399121 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399110(void)
{
    int _cf = 0; /* carry flag */

loc_00399110: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB463C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399130
 * Original: 0x00399130 - 0x00399141 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399130(void)
{
    int _cf = 0; /* carry flag */

loc_00399130: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4638) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399150
 * Original: 0x00399150 - 0x00399169 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399150(void)
{
    int _cf = 0; /* carry flag */

loc_00399150: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4634); /* divss */
    MEMF(0xBB4640) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399170
 * Original: 0x00399170 - 0x00399189 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399170(void)
{
    int _cf = 0; /* carry flag */

loc_00399170: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB463C); /* divss */
    MEMF(0xBB4644) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399190
 * Original: 0x00399190 - 0x003991A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399190(void)
{
    int _cf = 0; /* carry flag */

loc_00399190: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4648) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003991B0
 * Original: 0x003991B0 - 0x003991C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003991B0(void)
{
    int _cf = 0; /* carry flag */

loc_003991B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4650) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003991D0
 * Original: 0x003991D0 - 0x003991E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003991D0(void)
{
    int _cf = 0; /* carry flag */

loc_003991D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB464C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003991F0
 * Original: 0x003991F0 - 0x00399209 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003991F0(void)
{
    int _cf = 0; /* carry flag */

loc_003991F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4648); /* divss */
    MEMF(0xBB4654) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399210
 * Original: 0x00399210 - 0x00399229 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399210(void)
{
    int _cf = 0; /* carry flag */

loc_00399210: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4650); /* divss */
    MEMF(0xBB4658) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399230
 * Original: 0x00399230 - 0x00399241 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399230(void)
{
    int _cf = 0; /* carry flag */

loc_00399230: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB465C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399250
 * Original: 0x00399250 - 0x00399261 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399250(void)
{
    int _cf = 0; /* carry flag */

loc_00399250: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4664) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399270
 * Original: 0x00399270 - 0x00399281 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399270(void)
{
    int _cf = 0; /* carry flag */

loc_00399270: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4660) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399290
 * Original: 0x00399290 - 0x003992A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399290(void)
{
    int _cf = 0; /* carry flag */

loc_00399290: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB465C); /* divss */
    MEMF(0xBB4668) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003992B0
 * Original: 0x003992B0 - 0x003992C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003992B0(void)
{
    int _cf = 0; /* carry flag */

loc_003992B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4664); /* divss */
    MEMF(0xBB466C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003992D0
 * Original: 0x003992D0 - 0x003992DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003992D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003992D0: ;
    PUSH32(esp, 0x3AD690);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003992DAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003992DA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003992E0
 * Original: 0x003992E0 - 0x003992F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003992E0(void)
{
    int _cf = 0; /* carry flag */

loc_003992E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4670) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399300
 * Original: 0x00399300 - 0x00399311 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399300(void)
{
    int _cf = 0; /* carry flag */

loc_00399300: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4678) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399320
 * Original: 0x00399320 - 0x00399331 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399320(void)
{
    int _cf = 0; /* carry flag */

loc_00399320: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4674) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399340
 * Original: 0x00399340 - 0x00399359 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399340(void)
{
    int _cf = 0; /* carry flag */

loc_00399340: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4670); /* divss */
    MEMF(0xBB467C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399360
 * Original: 0x00399360 - 0x00399379 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399360(void)
{
    int _cf = 0; /* carry flag */

loc_00399360: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4678); /* divss */
    MEMF(0xBB4680) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399380
 * Original: 0x00399380 - 0x0039938C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00399380: ;
    PUSH32(esp, 0x3AD6A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039938Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039938A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00399390
 * Original: 0x00399390 - 0x003993A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399390(void)
{
    int _cf = 0; /* carry flag */

loc_00399390: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4684) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003993B0
 * Original: 0x003993B0 - 0x003993C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003993B0(void)
{
    int _cf = 0; /* carry flag */

loc_003993B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB468C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003993D0
 * Original: 0x003993D0 - 0x003993E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003993D0(void)
{
    int _cf = 0; /* carry flag */

loc_003993D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4688) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003993F0
 * Original: 0x003993F0 - 0x00399409 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003993F0(void)
{
    int _cf = 0; /* carry flag */

loc_003993F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4684); /* divss */
    MEMF(0xBB4690) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399410
 * Original: 0x00399410 - 0x00399429 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399410(void)
{
    int _cf = 0; /* carry flag */

loc_00399410: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB468C); /* divss */
    MEMF(0xBB4694) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399430
 * Original: 0x00399430 - 0x0039943C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00399430: ;
    PUSH32(esp, 0x3AD6B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039943Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039943A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00399440
 * Original: 0x00399440 - 0x00399451 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399440(void)
{
    int _cf = 0; /* carry flag */

loc_00399440: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4698) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399460
 * Original: 0x00399460 - 0x00399471 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399460(void)
{
    int _cf = 0; /* carry flag */

loc_00399460: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB46A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399480
 * Original: 0x00399480 - 0x00399491 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399480(void)
{
    int _cf = 0; /* carry flag */

loc_00399480: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB469C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003994A0
 * Original: 0x003994A0 - 0x003994B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003994A0(void)
{
    int _cf = 0; /* carry flag */

loc_003994A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4698); /* divss */
    MEMF(0xBB46A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003994C0
 * Original: 0x003994C0 - 0x003994D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003994C0(void)
{
    int _cf = 0; /* carry flag */

loc_003994C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB46A0); /* divss */
    MEMF(0xBB46A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003994E0
 * Original: 0x003994E0 - 0x003994F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003994E0(void)
{
    int _cf = 0; /* carry flag */

loc_003994E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB46AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399500
 * Original: 0x00399500 - 0x00399511 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399500(void)
{
    int _cf = 0; /* carry flag */

loc_00399500: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB46B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399520
 * Original: 0x00399520 - 0x00399531 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399520(void)
{
    int _cf = 0; /* carry flag */

loc_00399520: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB46B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399540
 * Original: 0x00399540 - 0x00399559 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399540(void)
{
    int _cf = 0; /* carry flag */

loc_00399540: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB46AC); /* divss */
    MEMF(0xBB46B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399560
 * Original: 0x00399560 - 0x00399579 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399560(void)
{
    int _cf = 0; /* carry flag */

loc_00399560: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB46B4); /* divss */
    MEMF(0xBB46BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399580
 * Original: 0x00399580 - 0x00399591 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399580(void)
{
    int _cf = 0; /* carry flag */

loc_00399580: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB46C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003995A0
 * Original: 0x003995A0 - 0x003995B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003995A0(void)
{
    int _cf = 0; /* carry flag */

loc_003995A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB46C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003995C0
 * Original: 0x003995C0 - 0x003995D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003995C0(void)
{
    int _cf = 0; /* carry flag */

loc_003995C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB46C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003995E0
 * Original: 0x003995E0 - 0x003995F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003995E0(void)
{
    int _cf = 0; /* carry flag */

loc_003995E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB46C0); /* divss */
    MEMF(0xBB46CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399600
 * Original: 0x00399600 - 0x00399619 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399600(void)
{
    int _cf = 0; /* carry flag */

loc_00399600: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB46C8); /* divss */
    MEMF(0xBB46D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399620
 * Original: 0x00399620 - 0x00399631 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399620(void)
{
    int _cf = 0; /* carry flag */

loc_00399620: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB46D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399640
 * Original: 0x00399640 - 0x00399651 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399640(void)
{
    int _cf = 0; /* carry flag */

loc_00399640: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB46DC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399660
 * Original: 0x00399660 - 0x00399671 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399660(void)
{
    int _cf = 0; /* carry flag */

loc_00399660: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB46D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399680
 * Original: 0x00399680 - 0x00399699 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399680(void)
{
    int _cf = 0; /* carry flag */

loc_00399680: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB46D4); /* divss */
    MEMF(0xBB46E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003996A0
 * Original: 0x003996A0 - 0x003996B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003996A0(void)
{
    int _cf = 0; /* carry flag */

loc_003996A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB46DC); /* divss */
    MEMF(0xBB46E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003996C0
 * Original: 0x003996C0 - 0x003996D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003996C0(void)
{
    int _cf = 0; /* carry flag */

loc_003996C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB46E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003996E0
 * Original: 0x003996E0 - 0x003996F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003996E0(void)
{
    int _cf = 0; /* carry flag */

loc_003996E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB46F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399700
 * Original: 0x00399700 - 0x00399711 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399700(void)
{
    int _cf = 0; /* carry flag */

loc_00399700: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB46EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399720
 * Original: 0x00399720 - 0x00399739 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399720(void)
{
    int _cf = 0; /* carry flag */

loc_00399720: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB46E8); /* divss */
    MEMF(0xBB46F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399740
 * Original: 0x00399740 - 0x00399759 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399740(void)
{
    int _cf = 0; /* carry flag */

loc_00399740: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB46F0); /* divss */
    MEMF(0xBB46F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399760
 * Original: 0x00399760 - 0x00399771 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399760(void)
{
    int _cf = 0; /* carry flag */

loc_00399760: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB46FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399780
 * Original: 0x00399780 - 0x00399791 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399780(void)
{
    int _cf = 0; /* carry flag */

loc_00399780: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4704) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003997A0
 * Original: 0x003997A0 - 0x003997B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003997A0(void)
{
    int _cf = 0; /* carry flag */

loc_003997A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4700) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003997C0
 * Original: 0x003997C0 - 0x003997D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003997C0(void)
{
    int _cf = 0; /* carry flag */

loc_003997C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB46FC); /* divss */
    MEMF(0xBB4708) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003997E0
 * Original: 0x003997E0 - 0x003997F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003997E0(void)
{
    int _cf = 0; /* carry flag */

loc_003997E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4704); /* divss */
    MEMF(0xBB470C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399800
 * Original: 0x00399800 - 0x00399811 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399800(void)
{
    int _cf = 0; /* carry flag */

loc_00399800: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4710) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399820
 * Original: 0x00399820 - 0x00399831 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399820(void)
{
    int _cf = 0; /* carry flag */

loc_00399820: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4718) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399840
 * Original: 0x00399840 - 0x00399851 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399840(void)
{
    int _cf = 0; /* carry flag */

loc_00399840: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4714) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399860
 * Original: 0x00399860 - 0x00399879 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399860(void)
{
    int _cf = 0; /* carry flag */

loc_00399860: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4710); /* divss */
    MEMF(0xBB471C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399880
 * Original: 0x00399880 - 0x00399899 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399880(void)
{
    int _cf = 0; /* carry flag */

loc_00399880: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4718); /* divss */
    MEMF(0xBB4720) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003998A0
 * Original: 0x003998A0 - 0x003998B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003998A0(void)
{
    int _cf = 0; /* carry flag */

loc_003998A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4724) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003998C0
 * Original: 0x003998C0 - 0x003998D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003998C0(void)
{
    int _cf = 0; /* carry flag */

loc_003998C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB472C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003998E0
 * Original: 0x003998E0 - 0x003998F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003998E0(void)
{
    int _cf = 0; /* carry flag */

loc_003998E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4728) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399900
 * Original: 0x00399900 - 0x00399919 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399900(void)
{
    int _cf = 0; /* carry flag */

loc_00399900: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4724); /* divss */
    MEMF(0xBB4730) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399920
 * Original: 0x00399920 - 0x00399939 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399920(void)
{
    int _cf = 0; /* carry flag */

loc_00399920: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB472C); /* divss */
    MEMF(0xBB4734) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399940
 * Original: 0x00399940 - 0x00399951 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399940(void)
{
    int _cf = 0; /* carry flag */

loc_00399940: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4738) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399960
 * Original: 0x00399960 - 0x00399971 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399960(void)
{
    int _cf = 0; /* carry flag */

loc_00399960: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4740) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399980
 * Original: 0x00399980 - 0x00399991 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399980(void)
{
    int _cf = 0; /* carry flag */

loc_00399980: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB473C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003999A0
 * Original: 0x003999A0 - 0x003999B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003999A0(void)
{
    int _cf = 0; /* carry flag */

loc_003999A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4738); /* divss */
    MEMF(0xBB4744) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003999C0
 * Original: 0x003999C0 - 0x003999D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003999C0(void)
{
    int _cf = 0; /* carry flag */

loc_003999C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4740); /* divss */
    MEMF(0xBB4748) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003999E0
 * Original: 0x003999E0 - 0x003999F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003999E0(void)
{
    int _cf = 0; /* carry flag */

loc_003999E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB474C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399A00
 * Original: 0x00399A00 - 0x00399A11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399A00(void)
{
    int _cf = 0; /* carry flag */

loc_00399A00: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4754) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399A20
 * Original: 0x00399A20 - 0x00399A31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399A20(void)
{
    int _cf = 0; /* carry flag */

loc_00399A20: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4750) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399A40
 * Original: 0x00399A40 - 0x00399A59 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399A40(void)
{
    int _cf = 0; /* carry flag */

loc_00399A40: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB474C); /* divss */
    MEMF(0xBB4758) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399A60
 * Original: 0x00399A60 - 0x00399A79 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399A60(void)
{
    int _cf = 0; /* carry flag */

loc_00399A60: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4754); /* divss */
    MEMF(0xBB475C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399A80
 * Original: 0x00399A80 - 0x00399A91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399A80(void)
{
    int _cf = 0; /* carry flag */

loc_00399A80: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4764) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399AA0
 * Original: 0x00399AA0 - 0x00399AB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399AA0(void)
{
    int _cf = 0; /* carry flag */

loc_00399AA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB476C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399AC0
 * Original: 0x00399AC0 - 0x00399AD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399AC0(void)
{
    int _cf = 0; /* carry flag */

loc_00399AC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4768) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399AE0
 * Original: 0x00399AE0 - 0x00399AF9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399AE0(void)
{
    int _cf = 0; /* carry flag */

loc_00399AE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4764); /* divss */
    MEMF(0xBB4770) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399B00
 * Original: 0x00399B00 - 0x00399B19 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399B00(void)
{
    int _cf = 0; /* carry flag */

loc_00399B00: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB476C); /* divss */
    MEMF(0xBB4774) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399B20
 * Original: 0x00399B20 - 0x00399B31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399B20(void)
{
    int _cf = 0; /* carry flag */

loc_00399B20: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4778) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399B40
 * Original: 0x00399B40 - 0x00399B51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399B40(void)
{
    int _cf = 0; /* carry flag */

loc_00399B40: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4780) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399B60
 * Original: 0x00399B60 - 0x00399B71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399B60(void)
{
    int _cf = 0; /* carry flag */

loc_00399B60: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB477C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399B80
 * Original: 0x00399B80 - 0x00399B99 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399B80(void)
{
    int _cf = 0; /* carry flag */

loc_00399B80: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4778); /* divss */
    MEMF(0xBB4784) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399BA0
 * Original: 0x00399BA0 - 0x00399BB9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399BA0(void)
{
    int _cf = 0; /* carry flag */

loc_00399BA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4780); /* divss */
    MEMF(0xBB4788) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399BC0
 * Original: 0x00399BC0 - 0x00399BD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399BC0(void)
{
    int _cf = 0; /* carry flag */

loc_00399BC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB478C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399BE0
 * Original: 0x00399BE0 - 0x00399BF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399BE0(void)
{
    int _cf = 0; /* carry flag */

loc_00399BE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4794) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399C00
 * Original: 0x00399C00 - 0x00399C11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399C00(void)
{
    int _cf = 0; /* carry flag */

loc_00399C00: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4790) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399C20
 * Original: 0x00399C20 - 0x00399C39 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399C20(void)
{
    int _cf = 0; /* carry flag */

loc_00399C20: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB478C); /* divss */
    MEMF(0xBB4798) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399C40
 * Original: 0x00399C40 - 0x00399C59 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399C40(void)
{
    int _cf = 0; /* carry flag */

loc_00399C40: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4794); /* divss */
    MEMF(0xBB479C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399C60
 * Original: 0x00399C60 - 0x00399C71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399C60(void)
{
    int _cf = 0; /* carry flag */

loc_00399C60: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB47A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399C80
 * Original: 0x00399C80 - 0x00399C91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399C80(void)
{
    int _cf = 0; /* carry flag */

loc_00399C80: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB47A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399CA0
 * Original: 0x00399CA0 - 0x00399CB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399CA0(void)
{
    int _cf = 0; /* carry flag */

loc_00399CA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB47A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399CC0
 * Original: 0x00399CC0 - 0x00399CD9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399CC0(void)
{
    int _cf = 0; /* carry flag */

loc_00399CC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB47A0); /* divss */
    MEMF(0xBB47AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399CE0
 * Original: 0x00399CE0 - 0x00399CF9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399CE0(void)
{
    int _cf = 0; /* carry flag */

loc_00399CE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB47A8); /* divss */
    MEMF(0xBB47B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399D00
 * Original: 0x00399D00 - 0x00399D11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399D00(void)
{
    int _cf = 0; /* carry flag */

loc_00399D00: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB47B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399D20
 * Original: 0x00399D20 - 0x00399D31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399D20(void)
{
    int _cf = 0; /* carry flag */

loc_00399D20: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB47BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399D40
 * Original: 0x00399D40 - 0x00399D51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399D40(void)
{
    int _cf = 0; /* carry flag */

loc_00399D40: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB47B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399D60
 * Original: 0x00399D60 - 0x00399D79 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399D60(void)
{
    int _cf = 0; /* carry flag */

loc_00399D60: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB47B4); /* divss */
    MEMF(0xBB47C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399D80
 * Original: 0x00399D80 - 0x00399D99 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399D80(void)
{
    int _cf = 0; /* carry flag */

loc_00399D80: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB47BC); /* divss */
    MEMF(0xBB47C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399DA0
 * Original: 0x00399DA0 - 0x00399DB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399DA0(void)
{
    int _cf = 0; /* carry flag */

loc_00399DA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498044)); /* movss */
    MEMF(0xBB47E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399DC0
 * Original: 0x00399DC0 - 0x00399DD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399DC0(void)
{
    int _cf = 0; /* carry flag */

loc_00399DC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498564)); /* movss */
    MEMF(0xBB47C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399DE0
 * Original: 0x00399DE0 - 0x00399E20 (64 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399DE0(void)
{
    int _cf = 0; /* carry flag */

loc_00399DE0: ;
    xmm1 = XMM_SCALAR(MEMF(0xBB47E4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(0xBB47CC) = xmm0.f[0]; /* movss */
    MEMF(0xBB47D0) = xmm0.f[0]; /* movss */
    MEMF(0xBB47D4) = xmm0.f[0]; /* movss */
    MEMF(0xBB47D8) = xmm1.f[0]; /* movss */
    MEMF(0xBB47DC) = xmm1.f[0]; /* movss */
    MEMF(0xBB47E0) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399E20
 * Original: 0x00399E20 - 0x00399E40 (32 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399E20(void)
{
    int _cf = 0; /* carry flag */

loc_00399E20: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB47E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399E40
 * Original: 0x00399E40 - 0x00399E51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399E40(void)
{
    int _cf = 0; /* carry flag */

loc_00399E40: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB47F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399E60
 * Original: 0x00399E60 - 0x00399E71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399E60(void)
{
    int _cf = 0; /* carry flag */

loc_00399E60: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB47EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399E80
 * Original: 0x00399E80 - 0x00399E99 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399E80(void)
{
    int _cf = 0; /* carry flag */

loc_00399E80: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB47E8); /* divss */
    MEMF(0xBB47F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399EA0
 * Original: 0x00399EA0 - 0x00399EB9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399EA0(void)
{
    int _cf = 0; /* carry flag */

loc_00399EA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB47F0); /* divss */
    MEMF(0xBB47F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399EC0
 * Original: 0x00399EC0 - 0x00399ECC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00399EC0: ;
    PUSH32(esp, 0x3AD6C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399ECAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00399ECA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00399ED0
 * Original: 0x00399ED0 - 0x00399EE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399ED0(void)
{
    int _cf = 0; /* carry flag */

loc_00399ED0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB47FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399EF0
 * Original: 0x00399EF0 - 0x00399F01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399EF0(void)
{
    int _cf = 0; /* carry flag */

loc_00399EF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4804) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399F10
 * Original: 0x00399F10 - 0x00399F21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399F10(void)
{
    int _cf = 0; /* carry flag */

loc_00399F10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4800) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399F30
 * Original: 0x00399F30 - 0x00399F49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399F30(void)
{
    int _cf = 0; /* carry flag */

loc_00399F30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB47FC); /* divss */
    MEMF(0xBB4808) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399F50
 * Original: 0x00399F50 - 0x00399F69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399F50(void)
{
    int _cf = 0; /* carry flag */

loc_00399F50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4804); /* divss */
    MEMF(0xBB480C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399F70
 * Original: 0x00399F70 - 0x00399F81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399F70(void)
{
    int _cf = 0; /* carry flag */

loc_00399F70: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB481C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399F90
 * Original: 0x00399F90 - 0x00399FA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399F90(void)
{
    int _cf = 0; /* carry flag */

loc_00399F90: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4824) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399FB0
 * Original: 0x00399FB0 - 0x00399FC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399FB0(void)
{
    int _cf = 0; /* carry flag */

loc_00399FB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4820) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399FD0
 * Original: 0x00399FD0 - 0x00399FE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399FD0(void)
{
    int _cf = 0; /* carry flag */

loc_00399FD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB481C); /* divss */
    MEMF(0xBB4828) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00399FF0
 * Original: 0x00399FF0 - 0x0039A009 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399FF0(void)
{
    int _cf = 0; /* carry flag */

loc_00399FF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4824); /* divss */
    MEMF(0xBB482C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A010
 * Original: 0x0039A010 - 0x0039A021 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A010(void)
{
    int _cf = 0; /* carry flag */

loc_0039A010: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBB4834) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A030
 * Original: 0x0039A030 - 0x0039A041 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A030(void)
{
    int _cf = 0; /* carry flag */

loc_0039A030: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBB4814) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A050
 * Original: 0x0039A050 - 0x0039A069 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A050(void)
{
    int _cf = 0; /* carry flag */

loc_0039A050: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4814); /* divss */
    MEMF(0xBB4810) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A070
 * Original: 0x0039A070 - 0x0039A08D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A070(void)
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

loc_0039A070: ;
    fp_push(MEMF(0xBB4814)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A087u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039A087: ;
    MEM32(0xBB4830) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0039A090
 * Original: 0x0039A090 - 0x0039A0AD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A090(void)
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

loc_0039A090: ;
    fp_push(MEMF(0xBB4814)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039A0A7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039A0A7: ;
    MEM32(0xBB4818) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0039A0B0
 * Original: 0x0039A0B0 - 0x0039A0C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A0B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039A0B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4838) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A0D0
 * Original: 0x0039A0D0 - 0x0039A0E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A0D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039A0D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4840) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A0F0
 * Original: 0x0039A0F0 - 0x0039A101 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A0F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039A0F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB483C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A110
 * Original: 0x0039A110 - 0x0039A129 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A110(void)
{
    int _cf = 0; /* carry flag */

loc_0039A110: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4838); /* divss */
    MEMF(0xBB4844) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A130
 * Original: 0x0039A130 - 0x0039A149 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A130(void)
{
    int _cf = 0; /* carry flag */

loc_0039A130: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4840); /* divss */
    MEMF(0xBB4848) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A150
 * Original: 0x0039A150 - 0x0039A161 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A150(void)
{
    int _cf = 0; /* carry flag */

loc_0039A150: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB484C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A170
 * Original: 0x0039A170 - 0x0039A181 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A170(void)
{
    int _cf = 0; /* carry flag */

loc_0039A170: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4854) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A190
 * Original: 0x0039A190 - 0x0039A1A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A190(void)
{
    int _cf = 0; /* carry flag */

loc_0039A190: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4850) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A1B0
 * Original: 0x0039A1B0 - 0x0039A1C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A1B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039A1B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB484C); /* divss */
    MEMF(0xBB4858) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A1D0
 * Original: 0x0039A1D0 - 0x0039A1E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A1D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039A1D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4854); /* divss */
    MEMF(0xBB485C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A1F0
 * Original: 0x0039A1F0 - 0x0039A201 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A1F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039A1F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4860) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A210
 * Original: 0x0039A210 - 0x0039A221 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A210(void)
{
    int _cf = 0; /* carry flag */

loc_0039A210: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB4868) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A230
 * Original: 0x0039A230 - 0x0039A241 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A230(void)
{
    int _cf = 0; /* carry flag */

loc_0039A230: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4864) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A250
 * Original: 0x0039A250 - 0x0039A269 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A250(void)
{
    int _cf = 0; /* carry flag */

loc_0039A250: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4860); /* divss */
    MEMF(0xBB486C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A270
 * Original: 0x0039A270 - 0x0039A289 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A270(void)
{
    int _cf = 0; /* carry flag */

loc_0039A270: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4868); /* divss */
    MEMF(0xBB4870) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A290
 * Original: 0x0039A290 - 0x0039A2A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A290(void)
{
    int _cf = 0; /* carry flag */

loc_0039A290: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBB4874) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A2B0
 * Original: 0x0039A2B0 - 0x0039A2C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A2B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039A2B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBB487C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A2D0
 * Original: 0x0039A2D0 - 0x0039A2E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A2D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039A2D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBB4878) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A2F0
 * Original: 0x0039A2F0 - 0x0039A309 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A2F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039A2F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB4874); /* divss */
    MEMF(0xBB4880) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A310
 * Original: 0x0039A310 - 0x0039A329 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A310(void)
{
    int _cf = 0; /* carry flag */

loc_0039A310: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBB487C); /* divss */
    MEMF(0xBB4888) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A330
 * Original: 0x0039A330 - 0x0039A341 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A330(void)
{
    int _cf = 0; /* carry flag */

loc_0039A330: ;
    xmm0 = XMM_SCALAR(MEMF(0x497C5C)); /* movss */
    MEMF(0xBB48A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A350
 * Original: 0x0039A350 - 0x0039A361 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A350(void)
{
    int _cf = 0; /* carry flag */

loc_0039A350: ;
    xmm0 = XMM_SCALAR(MEMF(0x498568)); /* movss */
    MEMF(0xBB4884) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}
