/**
 * Star Wars Battlefront 2 - Recompiled code chunk 52
 * Functions: 250 (0x00380080 - 0x00382440)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00380080
 * Original: 0x00380080 - 0x00380096 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380080: ;
    PUSH32(esp, 0xB7D2C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038008Au); RECOMP_ABI_CALL(0x00059DC0u, sub_00059DC0); /* call 0x00059DC0 */

loc_0038008A: ;
    PUSH32(esp, 0x3AC3B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380094u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00380094: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003800A0
 * Original: 0x003800A0 - 0x003800B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003800A0(void)
{
    int _cf = 0; /* carry flag */

loc_003800A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB7F228) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003800C0
 * Original: 0x003800C0 - 0x003800D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003800C0(void)
{
    int _cf = 0; /* carry flag */

loc_003800C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB7F230) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003800E0
 * Original: 0x003800E0 - 0x003800F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003800E0(void)
{
    int _cf = 0; /* carry flag */

loc_003800E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB7F22C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380100
 * Original: 0x00380100 - 0x00380119 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380100(void)
{
    int _cf = 0; /* carry flag */

loc_00380100: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB7F228); /* divss */
    MEMF(0xB7F234) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380120
 * Original: 0x00380120 - 0x00380139 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380120(void)
{
    int _cf = 0; /* carry flag */

loc_00380120: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB7F230); /* divss */
    MEMF(0xB7F238) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380140
 * Original: 0x00380140 - 0x00380151 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380140(void)
{
    int _cf = 0; /* carry flag */

loc_00380140: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xB7F240) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380160
 * Original: 0x00380160 - 0x00380171 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380160(void)
{
    int _cf = 0; /* carry flag */

loc_00380160: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xB7F220) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380180
 * Original: 0x00380180 - 0x00380199 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380180(void)
{
    int _cf = 0; /* carry flag */

loc_00380180: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB7F220); /* divss */
    MEMF(0xB7F21C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003801A0
 * Original: 0x003801A0 - 0x003801BD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003801A0(void)
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

loc_003801A0: ;
    fp_push(MEMF(0xB7F220)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003801B7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003801B7: ;
    MEM32(0xB7F23C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003801C0
 * Original: 0x003801C0 - 0x003801DD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003801C0(void)
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

loc_003801C0: ;
    fp_push(MEMF(0xB7F220)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003801D7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003801D7: ;
    MEM32(0xB7F224) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003801E0
 * Original: 0x003801E0 - 0x003801F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003801E0(void)
{
    int _cf = 0; /* carry flag */

loc_003801E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB7F244) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380200
 * Original: 0x00380200 - 0x00380211 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380200(void)
{
    int _cf = 0; /* carry flag */

loc_00380200: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB7F24C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380220
 * Original: 0x00380220 - 0x00380231 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380220(void)
{
    int _cf = 0; /* carry flag */

loc_00380220: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB7F248) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380240
 * Original: 0x00380240 - 0x00380259 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380240(void)
{
    int _cf = 0; /* carry flag */

loc_00380240: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB7F244); /* divss */
    MEMF(0xB7F250) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380260
 * Original: 0x00380260 - 0x00380279 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380260(void)
{
    int _cf = 0; /* carry flag */

loc_00380260: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB7F24C); /* divss */
    MEMF(0xB7F254) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380280
 * Original: 0x00380280 - 0x00380291 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380280(void)
{
    int _cf = 0; /* carry flag */

loc_00380280: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB7F258) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003802A0
 * Original: 0x003802A0 - 0x003802B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003802A0(void)
{
    int _cf = 0; /* carry flag */

loc_003802A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB7F260) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003802C0
 * Original: 0x003802C0 - 0x003802D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003802C0(void)
{
    int _cf = 0; /* carry flag */

loc_003802C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB7F25C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003802E0
 * Original: 0x003802E0 - 0x003802F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003802E0(void)
{
    int _cf = 0; /* carry flag */

loc_003802E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB7F258); /* divss */
    MEMF(0xB7F264) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380300
 * Original: 0x00380300 - 0x00380319 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380300(void)
{
    int _cf = 0; /* carry flag */

loc_00380300: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB7F260); /* divss */
    MEMF(0xB7F268) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380320
 * Original: 0x00380320 - 0x00380331 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380320(void)
{
    int _cf = 0; /* carry flag */

loc_00380320: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB7F26C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380340
 * Original: 0x00380340 - 0x00380351 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380340(void)
{
    int _cf = 0; /* carry flag */

loc_00380340: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB7F274) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380360
 * Original: 0x00380360 - 0x00380371 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380360(void)
{
    int _cf = 0; /* carry flag */

loc_00380360: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB7F270) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380380
 * Original: 0x00380380 - 0x00380399 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380380(void)
{
    int _cf = 0; /* carry flag */

loc_00380380: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB7F26C); /* divss */
    MEMF(0xB7F278) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003803A0
 * Original: 0x003803A0 - 0x003803B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003803A0(void)
{
    int _cf = 0; /* carry flag */

loc_003803A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB7F274); /* divss */
    MEMF(0xB7F27C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003803C0
 * Original: 0x003803C0 - 0x003803D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003803C0(void)
{
    int _cf = 0; /* carry flag */

loc_003803C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB89890) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003803E0
 * Original: 0x003803E0 - 0x003803F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003803E0(void)
{
    int _cf = 0; /* carry flag */

loc_003803E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB89898) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380400
 * Original: 0x00380400 - 0x00380411 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380400(void)
{
    int _cf = 0; /* carry flag */

loc_00380400: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB89894) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380420
 * Original: 0x00380420 - 0x00380439 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380420(void)
{
    int _cf = 0; /* carry flag */

loc_00380420: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB89890); /* divss */
    MEMF(0xB8989C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380440
 * Original: 0x00380440 - 0x00380459 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380440(void)
{
    int _cf = 0; /* carry flag */

loc_00380440: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB89898); /* divss */
    MEMF(0xB898A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380460
 * Original: 0x00380460 - 0x00380471 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380460(void)
{
    int _cf = 0; /* carry flag */

loc_00380460: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xB89BB0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380480
 * Original: 0x00380480 - 0x00380491 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380480(void)
{
    int _cf = 0; /* carry flag */

loc_00380480: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xB89888) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003804A0
 * Original: 0x003804A0 - 0x003804B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003804A0(void)
{
    int _cf = 0; /* carry flag */

loc_003804A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB89888); /* divss */
    MEMF(0xB87284) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003804C0
 * Original: 0x003804C0 - 0x003804DD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003804C0(void)
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

loc_003804C0: ;
    fp_push(MEMF(0xB89888)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003804D7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003804D7: ;
    MEM32(0xB898A8) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003804E0
 * Original: 0x003804E0 - 0x003804FD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003804E0(void)
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

loc_003804E0: ;
    fp_push(MEMF(0xB89888)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003804F7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003804F7: ;
    MEM32(0xB8988C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00380500
 * Original: 0x00380500 - 0x00380608 (264 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380500: ;
    xmm2 = XMM_SCALAR(MEMF(0x497C74)); /* movss */
    xmm2.f[0] = xmm2.f[0] / MEMF(0x4ACBA8); /* divss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x497D78); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x497CF0)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x497C5C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x497EA8)); /* movss */
    PUSH32(esp, esi);
    eax = 0xB87C9C;
    esi = 0x80;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00380550;

loc_00380550: ;
    xmm0 = XMM_SCALAR(MEMF(0x497EA4)); /* movss */
    MEM32(eax + -20) = edx;
    MEM32(eax + -16) = edx;
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x497D84)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x497D80)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x497CE8)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x497D7C)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm2; /* movaps */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm6.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(eax + -8) = xmm1.f[0]; /* movss */
    MEMF(eax + -4) = xmm3.f[0]; /* movss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    MEM32(eax + 0xC) = edx;
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx * 8 + 0xBF9704); /* mulss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm7 = XMM_SCALAR(MEMF(ecx * 8 + 0xBF9704)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm6.f[0]; /* movss */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x38)) >> 32) & 1);
    eax = eax + 0x38;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00380550; /* jne: not equal / not zero */

loc_003805F9: ;
    PUSH32(esp, 0x3AC3C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380603u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00380603: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00380610
 * Original: 0x00380610 - 0x003806FA (234 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00380610: ;
    xmm2 = XMM_SCALAR(MEMF(0x497C74)); /* movss */
    xmm2.f[0] = xmm2.f[0] / MEMF(0x4ACBA8); /* divss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x497D78); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x497CF0)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(0x497C5C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x497EA8)); /* movss */
    eax = 0xB898BC;
    edx = 0x10;

loc_00380652: ;
    xmm0 = XMM_SCALAR(MEMF(0x497EA4)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x497D84)); /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x497D80)); /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x497CE8)); /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x497D7C)); /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = xmm2; /* movaps */
    ecx = (uint32_t)recomp_cvt_si32((double)xmm0.f[0], g_mxcsr, 1); /* cvttss2si */
    xmm6.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] - xmm6.f[0]; /* subss */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(eax + -8) = xmm1.f[0]; /* movss */
    MEMF(eax + -4) = xmm3.f[0]; /* movss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    MEM32(eax + 0xC) = 0;
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] * MEMF(ecx * 8 + 0xBF9704); /* mulss */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm7 = XMM_SCALAR(MEMF(ecx * 8 + 0xBF9704)); /* movss */
    xmm7.f[0] = xmm7.f[0] * xmm0.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] + xmm7.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm6.f[0]; /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00380652; /* jne: not equal / not zero */

loc_003806F9: ;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00380700
 * Original: 0x00380700 - 0x00380727 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380700: ;
    eax = 0xB87788;
    ecx = 0x20;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00380710: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x28)) >> 32) & 1);
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00380710; /* jne: not equal / not zero */

loc_0038071B: ;
    PUSH32(esp, 0x3AC3D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380725u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00380725: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00380730
 * Original: 0x00380730 - 0x00380757 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380730: ;
    eax = 0xB87288;
    ecx = 0x20;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00380740: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x28)) >> 32) & 1);
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00380740; /* jne: not equal / not zero */

loc_0038074B: ;
    PUSH32(esp, 0x3AC3E0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380755u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00380755: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00380760
 * Original: 0x00380760 - 0x0038076B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380760(void)
{
    int _cf = 0; /* carry flag */

loc_00380760: ;
    eax = MEM32(0xB73258);
    MEM32(0xB898A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00380770
 * Original: 0x00380770 - 0x003808FC (396 bytes, 77 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380770: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(0x4ACE18);
    MEM8(0x4AE24C) = LO8(eax);
    MEM8(0x4AE24D) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE1A));
    MEM8(0x4AE24E) = LO8(eax);
    MEM8(0x4AE24F) = HI8(eax);
    eax = MEM32(0x4ACE1C);
    MEM8(0x4AE254) = LO8(eax);
    MEM8(0x4AE255) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE1E));
    MEM8(0x4AE256) = LO8(eax);
    MEM8(0x4AE257) = HI8(eax);
    eax = MEM32(0x4ACE20);
    MEM8(0x4AE25C) = LO8(eax);
    MEM8(0x4AE25D) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE22));
    MEM8(0x4AE25E) = LO8(eax);
    MEM8(0x4AE25F) = HI8(eax);
    eax = MEM32(0x4ACE24);
    MEM8(0x4AE264) = LO8(eax);
    MEM8(0x4AE265) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE26));
    MEM8(0x4AE266) = LO8(eax);
    MEM8(0x4AE267) = HI8(eax);
    eax = MEM32(0x4ACE28);
    MEM8(0x4AE26C) = LO8(eax);
    MEM8(0x4AE26D) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE2A));
    MEM8(0x4AE26E) = LO8(eax);
    MEM8(0x4AE26F) = HI8(eax);
    eax = MEM32(0x4ACE2C);
    MEM8(0x4AE274) = LO8(eax);
    MEM8(0x4AE275) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE2E));
    MEM8(0x4AE276) = LO8(eax);
    MEM8(0x4AE277) = HI8(eax);
    eax = MEM32(0x4ACE30);
    MEM8(0x4AE27C) = LO8(eax);
    MEM8(0x4AE27D) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE32));
    MEM8(0x4AE27E) = LO8(eax);
    MEM8(0x4AE27F) = HI8(eax);
    eax = MEM32(0x4ACE34);
    MEM8(0x4AE284) = LO8(eax);
    MEM8(0x4AE285) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE36));
    MEM8(0x4AE286) = LO8(eax);
    MEM8(0x4AE287) = HI8(eax);
    eax = MEM32(0x4ACE38);
    MEM8(0x4AE28C) = LO8(eax);
    MEM8(0x4AE28D) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE3A));
    MEM8(0x4AE28E) = LO8(eax);
    MEM8(0x4AE28F) = HI8(eax);
    eax = MEM32(0x4ACE3C);
    MEM8(0x4AE294) = LO8(eax);
    MEM8(0x4AE295) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE3E));
    MEM8(0x4AE296) = LO8(eax);
    MEM8(0x4AE297) = HI8(eax);
    eax = MEM32(0x4ACE40);
    MEM8(0x4AE29C) = LO8(eax);
    MEM8(0x4AE29D) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE42));
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x4ACE2C);
    edi = 0x4ACE40;
    esi = 0x4AE2A4;
    MEM8(0x4AE29E) = LO8(eax);
    MEM8(0x4AE29F) = HI8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003808F6u); RECOMP_ABI_CALL(0x0005D3A0u, sub_0005D3A0); /* call 0x0005D3A0 */

loc_003808F6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00380900
 * Original: 0x00380900 - 0x00380911 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380900(void)
{
    int _cf = 0; /* carry flag */

loc_00380900: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB89BC0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380920
 * Original: 0x00380920 - 0x00380931 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380920(void)
{
    int _cf = 0; /* carry flag */

loc_00380920: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB89BC8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380940
 * Original: 0x00380940 - 0x00380951 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380940(void)
{
    int _cf = 0; /* carry flag */

loc_00380940: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB89BC4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380960
 * Original: 0x00380960 - 0x00380979 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380960(void)
{
    int _cf = 0; /* carry flag */

loc_00380960: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB89BC0); /* divss */
    MEMF(0xB89BCC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380980
 * Original: 0x00380980 - 0x00380999 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380980(void)
{
    int _cf = 0; /* carry flag */

loc_00380980: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB89BC8); /* divss */
    MEMF(0xB8FBD0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003809A0
 * Original: 0x003809A0 - 0x003809B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003809A0(void)
{
    int _cf = 0; /* carry flag */

loc_003809A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xB8FBD8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003809C0
 * Original: 0x003809C0 - 0x003809D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003809C0(void)
{
    int _cf = 0; /* carry flag */

loc_003809C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xB89BB8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003809E0
 * Original: 0x003809E0 - 0x003809F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003809E0(void)
{
    int _cf = 0; /* carry flag */

loc_003809E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB89BB8); /* divss */
    MEMF(0xB89BB4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380A00
 * Original: 0x00380A00 - 0x00380A1D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380A00(void)
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

loc_00380A00: ;
    fp_push(MEMF(0xB89BB8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380A17u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00380A17: ;
    MEM32(0xB8FBD4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00380A20
 * Original: 0x00380A20 - 0x00380A3D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380A20(void)
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

loc_00380A20: ;
    fp_push(MEMF(0xB89BB8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380A37u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00380A37: ;
    MEM32(0xB89BBC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00380A40
 * Original: 0x00380A40 - 0x00380A67 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380A40: ;
    eax = 0xB89BD0;
    ecx = 0x400;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00380A50: ;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00380A50; /* jne: not equal / not zero */

loc_00380A5B: ;
    PUSH32(esp, 0x3AC3F0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380A65u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00380A65: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00380A70
 * Original: 0x00380A70 - 0x00380A81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380A70(void)
{
    int _cf = 0; /* carry flag */

loc_00380A70: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB8FBDC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380A90
 * Original: 0x00380A90 - 0x00380AA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380A90(void)
{
    int _cf = 0; /* carry flag */

loc_00380A90: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB8FBE4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380AB0
 * Original: 0x00380AB0 - 0x00380AC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380AB0(void)
{
    int _cf = 0; /* carry flag */

loc_00380AB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB8FBE0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380AD0
 * Original: 0x00380AD0 - 0x00380AE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380AD0(void)
{
    int _cf = 0; /* carry flag */

loc_00380AD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FBDC); /* divss */
    MEMF(0xB8FBE8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380AF0
 * Original: 0x00380AF0 - 0x00380B09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380AF0(void)
{
    int _cf = 0; /* carry flag */

loc_00380AF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FBE4); /* divss */
    MEMF(0xB8FBEC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380B10
 * Original: 0x00380B10 - 0x00380B1C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380B10: ;
    PUSH32(esp, 0x3AC400);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380B1Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00380B1A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00380B20
 * Original: 0x00380B20 - 0x00380B2C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380B20: ;
    PUSH32(esp, 0x3AC430);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380B2Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00380B2A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00380B30
 * Original: 0x00380B30 - 0x00380B3C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380B30: ;
    PUSH32(esp, 0x3AC460);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380B3Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00380B3A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00380B40
 * Original: 0x00380B40 - 0x00380B4C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380B40: ;
    PUSH32(esp, 0x3AC490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380B4Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00380B4A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00380B50
 * Original: 0x00380B50 - 0x00380B5C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380B50: ;
    PUSH32(esp, 0x3AC4C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380B5Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00380B5A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00380B60
 * Original: 0x00380B60 - 0x00380B6F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380B60(void)
{
    int _cf = 0; /* carry flag */

loc_00380B60: ;
    eax = MEM32(0x4A6834);
    ecx = MEM32(eax + 0x10);
    MEM32(0xB8FBF0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00380B70
 * Original: 0x00380B70 - 0x00380B81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380B70(void)
{
    int _cf = 0; /* carry flag */

loc_00380B70: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB8FBF4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380B90
 * Original: 0x00380B90 - 0x00380BA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380B90(void)
{
    int _cf = 0; /* carry flag */

loc_00380B90: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB8FBFC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380BB0
 * Original: 0x00380BB0 - 0x00380BC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380BB0(void)
{
    int _cf = 0; /* carry flag */

loc_00380BB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB8FBF8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380BD0
 * Original: 0x00380BD0 - 0x00380BE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380BD0(void)
{
    int _cf = 0; /* carry flag */

loc_00380BD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FBF4); /* divss */
    MEMF(0xB8FC00) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380BF0
 * Original: 0x00380BF0 - 0x00380C09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380BF0(void)
{
    int _cf = 0; /* carry flag */

loc_00380BF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FBFC); /* divss */
    MEMF(0xB8FC04) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380C00
 * Original: 0x00380C00 - 0x00380C09 (9 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380C00(void)
{
    int _cf = 0; /* carry flag */

loc_00380C00: ;
    MEMF(0xB8FC04) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380C10
 * Original: 0x00380C10 - 0x00380C21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380C10(void)
{
    int _cf = 0; /* carry flag */

loc_00380C10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB8FC08) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380C30
 * Original: 0x00380C30 - 0x00380C41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380C30(void)
{
    int _cf = 0; /* carry flag */

loc_00380C30: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB8FC10) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380C50
 * Original: 0x00380C50 - 0x00380C61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380C50(void)
{
    int _cf = 0; /* carry flag */

loc_00380C50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB8FC0C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380C70
 * Original: 0x00380C70 - 0x00380C89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380C70(void)
{
    int _cf = 0; /* carry flag */

loc_00380C70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FC08); /* divss */
    MEMF(0xB8FC14) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380C90
 * Original: 0x00380C90 - 0x00380CA9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380C90(void)
{
    int _cf = 0; /* carry flag */

loc_00380C90: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FC10); /* divss */
    MEMF(0xB8FC18) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380CB0
 * Original: 0x00380CB0 - 0x00380D07 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00380CB0: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x4828D4);
    PUSH32(esp, 0x4AE600);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380CC1u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_00380CC1: ;
    MEM8(0x4AE61F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380CCDu); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_00380CCD: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4AE5F0;
    MEM32(0x4AE5F0) = eax;
    MEM32(0x4AE5F4) = eax;
    MEM32(0x4AE5FC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4AE5F8) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4AE5F8);
    PUSH32(esp, 0x3AC4F0);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00380D03u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00380D03: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00380D10
 * Original: 0x00380D10 - 0x00380D21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380D10(void)
{
    int _cf = 0; /* carry flag */

loc_00380D10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB8FC1C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380D30
 * Original: 0x00380D30 - 0x00380D41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380D30(void)
{
    int _cf = 0; /* carry flag */

loc_00380D30: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB8FC24) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380D50
 * Original: 0x00380D50 - 0x00380D61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380D50(void)
{
    int _cf = 0; /* carry flag */

loc_00380D50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB8FC20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380D70
 * Original: 0x00380D70 - 0x00380D89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380D70(void)
{
    int _cf = 0; /* carry flag */

loc_00380D70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FC1C); /* divss */
    MEMF(0xB8FC28) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380D90
 * Original: 0x00380D90 - 0x00380DA9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380D90(void)
{
    int _cf = 0; /* carry flag */

loc_00380D90: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FC24); /* divss */
    MEMF(0xB8FC2C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380DB0
 * Original: 0x00380DB0 - 0x00380DC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380DB0(void)
{
    int _cf = 0; /* carry flag */

loc_00380DB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB8FC30) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380DD0
 * Original: 0x00380DD0 - 0x00380DE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380DD0(void)
{
    int _cf = 0; /* carry flag */

loc_00380DD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB8FC38) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380DF0
 * Original: 0x00380DF0 - 0x00380E01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380DF0(void)
{
    int _cf = 0; /* carry flag */

loc_00380DF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB8FC34) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380E00
 * Original: 0x00380E00 - 0x00380E01 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380E00(void)
{
    int _cf = 0; /* carry flag */

loc_00380E00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00380E10
 * Original: 0x00380E10 - 0x00380E29 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380E10(void)
{
    int _cf = 0; /* carry flag */

loc_00380E10: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FC30); /* divss */
    MEMF(0xB8FC3C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380E30
 * Original: 0x00380E30 - 0x00380E49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380E30(void)
{
    int _cf = 0; /* carry flag */

loc_00380E30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FC38); /* divss */
    MEMF(0xB8FC40) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380E50
 * Original: 0x00380E50 - 0x00380E61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380E50(void)
{
    int _cf = 0; /* carry flag */

loc_00380E50: ;
    xmm0 = XMM_SCALAR(MEMF(0x46DE54)); /* movss */
    MEMF(0xB8FC44) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380E70
 * Original: 0x00380E70 - 0x00380E81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380E70(void)
{
    int _cf = 0; /* carry flag */

loc_00380E70: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB8FC48) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380E90
 * Original: 0x00380E90 - 0x00380EA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380E90(void)
{
    int _cf = 0; /* carry flag */

loc_00380E90: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB8FC50) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380EB0
 * Original: 0x00380EB0 - 0x00380EC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380EB0(void)
{
    int _cf = 0; /* carry flag */

loc_00380EB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB8FC4C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380ED0
 * Original: 0x00380ED0 - 0x00380EE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380ED0(void)
{
    int _cf = 0; /* carry flag */

loc_00380ED0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FC48); /* divss */
    MEMF(0xB8FC54) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380EF0
 * Original: 0x00380EF0 - 0x00380F09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380EF0(void)
{
    int _cf = 0; /* carry flag */

loc_00380EF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FC50); /* divss */
    MEMF(0xB8FC58) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380F10
 * Original: 0x00380F10 - 0x00380F21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380F10(void)
{
    int _cf = 0; /* carry flag */

loc_00380F10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB8FC5C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380F30
 * Original: 0x00380F30 - 0x00380F41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380F30(void)
{
    int _cf = 0; /* carry flag */

loc_00380F30: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB8FC64) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380F50
 * Original: 0x00380F50 - 0x00380F61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380F50(void)
{
    int _cf = 0; /* carry flag */

loc_00380F50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB8FC60) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380F70
 * Original: 0x00380F70 - 0x00380F89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380F70(void)
{
    int _cf = 0; /* carry flag */

loc_00380F70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FC5C); /* divss */
    MEMF(0xB8FC68) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380F90
 * Original: 0x00380F90 - 0x00380FA9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380F90(void)
{
    int _cf = 0; /* carry flag */

loc_00380F90: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FC64); /* divss */
    MEMF(0xB8FC6C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380FB0
 * Original: 0x00380FB0 - 0x00380FC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380FB0(void)
{
    int _cf = 0; /* carry flag */

loc_00380FB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB8FF48) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380FD0
 * Original: 0x00380FD0 - 0x00380FE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380FD0(void)
{
    int _cf = 0; /* carry flag */

loc_00380FD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB8FF50) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00380FF0
 * Original: 0x00380FF0 - 0x00381001 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00380FF0(void)
{
    int _cf = 0; /* carry flag */

loc_00380FF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB8FF4C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381000
 * Original: 0x00381000 - 0x00381001 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381000(void)
{
    int _cf = 0; /* carry flag */

loc_00381000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00381010
 * Original: 0x00381010 - 0x00381029 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381010(void)
{
    int _cf = 0; /* carry flag */

loc_00381010: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FF48); /* divss */
    MEMF(0xB8FF54) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381030
 * Original: 0x00381030 - 0x00381049 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381030(void)
{
    int _cf = 0; /* carry flag */

loc_00381030: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FF50); /* divss */
    MEMF(0xB8FF58) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381050
 * Original: 0x00381050 - 0x00381061 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381050(void)
{
    int _cf = 0; /* carry flag */

loc_00381050: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xB8FF60) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381070
 * Original: 0x00381070 - 0x00381081 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381070(void)
{
    int _cf = 0; /* carry flag */

loc_00381070: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xB8FF40) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381090
 * Original: 0x00381090 - 0x003810A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381090(void)
{
    int _cf = 0; /* carry flag */

loc_00381090: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FF40); /* divss */
    MEMF(0xB8FC70) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003810B0
 * Original: 0x003810B0 - 0x003810CD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003810B0(void)
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

loc_003810B0: ;
    fp_push(MEMF(0xB8FF40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003810C7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003810C7: ;
    MEM32(0xB8FF5C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003810D0
 * Original: 0x003810D0 - 0x003810ED (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003810D0(void)
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

loc_003810D0: ;
    fp_push(MEMF(0xB8FF40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003810E7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003810E7: ;
    MEM32(0xB8FF44) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003810F0
 * Original: 0x003810F0 - 0x00381141 (81 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003810F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003810F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xB8FC8C;
    ebx = 4;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00381100: ;
    PUSH32(esp, 0x208C60);
    PUSH32(esp, 2);
    PUSH32(esp, 0x40);
    eax = esi + 0x14;
    MEM32(esi + -8) = edi;
    MEM32(esi + -4) = edi;
    MEM32(esi) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, eax);
    MEM32(esi + -12) = 0x482A8C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381127u); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */

loc_00381127: ;
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xB0)) >> 32) & 1);
    esi = esi + 0xB0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00381100; /* jne: not equal / not zero */

loc_00381130: ;
    PUSH32(esp, 0x3AC500);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038113Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_0038113A: ;
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
 * sub_00381150
 * Original: 0x00381150 - 0x00381161 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381150(void)
{
    int _cf = 0; /* carry flag */

loc_00381150: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB8FF70) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381170
 * Original: 0x00381170 - 0x00381181 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381170(void)
{
    int _cf = 0; /* carry flag */

loc_00381170: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB8FF78) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381190
 * Original: 0x00381190 - 0x003811A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381190(void)
{
    int _cf = 0; /* carry flag */

loc_00381190: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB8FF74) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003811B0
 * Original: 0x003811B0 - 0x003811C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003811B0(void)
{
    int _cf = 0; /* carry flag */

loc_003811B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FF70); /* divss */
    MEMF(0xB8FF7C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003811D0
 * Original: 0x003811D0 - 0x003811E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003811D0(void)
{
    int _cf = 0; /* carry flag */

loc_003811D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FF78); /* divss */
    MEMF(0xB8FF80) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003811F0
 * Original: 0x003811F0 - 0x00381201 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003811F0(void)
{
    int _cf = 0; /* carry flag */

loc_003811F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xB8FF88) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381210
 * Original: 0x00381210 - 0x00381221 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381210(void)
{
    int _cf = 0; /* carry flag */

loc_00381210: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xB8FF68) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381230
 * Original: 0x00381230 - 0x00381249 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381230(void)
{
    int _cf = 0; /* carry flag */

loc_00381230: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FF68); /* divss */
    MEMF(0xB8FF64) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381250
 * Original: 0x00381250 - 0x0038126D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381250(void)
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

loc_00381250: ;
    fp_push(MEMF(0xB8FF68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381267u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00381267: ;
    MEM32(0xB8FF84) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00381270
 * Original: 0x00381270 - 0x0038128D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381270(void)
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

loc_00381270: ;
    fp_push(MEMF(0xB8FF68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381287u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00381287: ;
    MEM32(0xB8FF6C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00381290
 * Original: 0x00381290 - 0x003812A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381290(void)
{
    int _cf = 0; /* carry flag */

loc_00381290: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB8FF98) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003812B0
 * Original: 0x003812B0 - 0x003812C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003812B0(void)
{
    int _cf = 0; /* carry flag */

loc_003812B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB8FFA0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003812D0
 * Original: 0x003812D0 - 0x003812E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003812D0(void)
{
    int _cf = 0; /* carry flag */

loc_003812D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB8FF9C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003812F0
 * Original: 0x003812F0 - 0x00381309 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003812F0(void)
{
    int _cf = 0; /* carry flag */

loc_003812F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FF98); /* divss */
    MEMF(0xB8FFA4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381310
 * Original: 0x00381310 - 0x00381329 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381310(void)
{
    int _cf = 0; /* carry flag */

loc_00381310: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FFA0); /* divss */
    MEMF(0xB8FFA8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381330
 * Original: 0x00381330 - 0x00381341 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381330(void)
{
    int _cf = 0; /* carry flag */

loc_00381330: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xB8FFB0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381350
 * Original: 0x00381350 - 0x00381361 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381350(void)
{
    int _cf = 0; /* carry flag */

loc_00381350: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xB8FF90) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381370
 * Original: 0x00381370 - 0x00381389 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381370(void)
{
    int _cf = 0; /* carry flag */

loc_00381370: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FF90); /* divss */
    MEMF(0xB8FF8C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381390
 * Original: 0x00381390 - 0x003813AD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381390(void)
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

loc_00381390: ;
    fp_push(MEMF(0xB8FF90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003813A7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003813A7: ;
    MEM32(0xB8FFAC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003813B0
 * Original: 0x003813B0 - 0x003813CD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003813B0(void)
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

loc_003813B0: ;
    fp_push(MEMF(0xB8FF90)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003813C7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003813C7: ;
    MEM32(0xB8FF94) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003813D0
 * Original: 0x003813D0 - 0x003813E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003813D0(void)
{
    int _cf = 0; /* carry flag */

loc_003813D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB8FFB4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003813F0
 * Original: 0x003813F0 - 0x00381401 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003813F0(void)
{
    int _cf = 0; /* carry flag */

loc_003813F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB8FFBC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381410
 * Original: 0x00381410 - 0x00381421 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381410(void)
{
    int _cf = 0; /* carry flag */

loc_00381410: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB8FFB8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381430
 * Original: 0x00381430 - 0x00381449 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381430(void)
{
    int _cf = 0; /* carry flag */

loc_00381430: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FFB4); /* divss */
    MEMF(0xB8FFC0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381450
 * Original: 0x00381450 - 0x00381469 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381450(void)
{
    int _cf = 0; /* carry flag */

loc_00381450: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FFBC); /* divss */
    MEMF(0xB8FFC4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381470
 * Original: 0x00381470 - 0x00381481 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381470(void)
{
    int _cf = 0; /* carry flag */

loc_00381470: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB91500) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381490
 * Original: 0x00381490 - 0x003814A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381490(void)
{
    int _cf = 0; /* carry flag */

loc_00381490: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB91508) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003814B0
 * Original: 0x003814B0 - 0x003814C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003814B0(void)
{
    int _cf = 0; /* carry flag */

loc_003814B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB91504) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003814D0
 * Original: 0x003814D0 - 0x003814E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003814D0(void)
{
    int _cf = 0; /* carry flag */

loc_003814D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB91500); /* divss */
    MEMF(0xB9150C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003814F0
 * Original: 0x003814F0 - 0x00381509 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003814F0(void)
{
    int _cf = 0; /* carry flag */

loc_003814F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB91508); /* divss */
    MEMF(0xB91510) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381510
 * Original: 0x00381510 - 0x00381521 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381510(void)
{
    int _cf = 0; /* carry flag */

loc_00381510: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xB91518) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381530
 * Original: 0x00381530 - 0x00381541 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381530(void)
{
    int _cf = 0; /* carry flag */

loc_00381530: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xB8FFCC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381550
 * Original: 0x00381550 - 0x00381569 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381550(void)
{
    int _cf = 0; /* carry flag */

loc_00381550: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB8FFCC); /* divss */
    MEMF(0xB8FFC8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381570
 * Original: 0x00381570 - 0x0038158D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381570(void)
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

loc_00381570: ;
    fp_push(MEMF(0xB8FFCC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381587u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00381587: ;
    MEM32(0xB91514) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00381590
 * Original: 0x00381590 - 0x003815AD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381590(void)
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

loc_00381590: ;
    fp_push(MEMF(0xB8FFCC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003815A7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003815A7: ;
    MEM32(0xB8FFD0) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003815B0
 * Original: 0x003815B0 - 0x003815FC (76 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003815B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003815B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xB90264;
    edi = 4;
    /* nop */

loc_003815C0: ;
    PUSH32(esp, 0x208C60);
    PUSH32(esp, 6);
    PUSH32(esp, 0x34);
    eax = esi + -652;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003815D5u); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */

loc_003815D5: ;
    PUSH32(esp, 0x208C60);
    PUSH32(esp, 6);
    PUSH32(esp, 0x34);
    ecx = esi + -340;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003815EAu); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */

loc_003815EA: ;
    MEM32(esi) = 0xFFFFFFFFu;
    _fb = (uint32_t)(0x2C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x2C0)) >> 32) & 1);
    esi = esi + 0x2C0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003815C0; /* jne: not equal / not zero */

loc_003815F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00381600
 * Original: 0x00381600 - 0x00381611 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381600(void)
{
    int _cf = 0; /* carry flag */

loc_00381600: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB9151C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381620
 * Original: 0x00381620 - 0x00381631 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381620(void)
{
    int _cf = 0; /* carry flag */

loc_00381620: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB91524) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381640
 * Original: 0x00381640 - 0x00381651 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381640(void)
{
    int _cf = 0; /* carry flag */

loc_00381640: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB91520) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381660
 * Original: 0x00381660 - 0x00381679 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381660(void)
{
    int _cf = 0; /* carry flag */

loc_00381660: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB9151C); /* divss */
    MEMF(0xB91528) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381680
 * Original: 0x00381680 - 0x00381699 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381680(void)
{
    int _cf = 0; /* carry flag */

loc_00381680: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB91524); /* divss */
    MEMF(0xB9152C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003816A0
 * Original: 0x003816A0 - 0x003816B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003816A0(void)
{
    int _cf = 0; /* carry flag */

loc_003816A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB9154C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003816C0
 * Original: 0x003816C0 - 0x003816D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003816C0(void)
{
    int _cf = 0; /* carry flag */

loc_003816C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB91554) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003816E0
 * Original: 0x003816E0 - 0x003816F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003816E0(void)
{
    int _cf = 0; /* carry flag */

loc_003816E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB91550) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381700
 * Original: 0x00381700 - 0x00381719 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381700(void)
{
    int _cf = 0; /* carry flag */

loc_00381700: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB9154C); /* divss */
    MEMF(0xB91558) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381720
 * Original: 0x00381720 - 0x00381739 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381720(void)
{
    int _cf = 0; /* carry flag */

loc_00381720: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB91554); /* divss */
    MEMF(0xB9155C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381740
 * Original: 0x00381740 - 0x00381751 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381740(void)
{
    int _cf = 0; /* carry flag */

loc_00381740: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xB91564) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381760
 * Original: 0x00381760 - 0x00381771 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381760(void)
{
    int _cf = 0; /* carry flag */

loc_00381760: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xB91534) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381780
 * Original: 0x00381780 - 0x00381799 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381780(void)
{
    int _cf = 0; /* carry flag */

loc_00381780: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB91534); /* divss */
    MEMF(0xB91530) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003817A0
 * Original: 0x003817A0 - 0x003817BD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003817A0(void)
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

loc_003817A0: ;
    fp_push(MEMF(0xB91534)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003817B7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003817B7: ;
    MEM32(0xB91560) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003817C0
 * Original: 0x003817C0 - 0x003817DD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003817C0(void)
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

loc_003817C0: ;
    fp_push(MEMF(0xB91534)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003817D7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003817D7: ;
    MEM32(0xB91538) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003817E0
 * Original: 0x003817E0 - 0x00381841 (97 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003817E0(void)
{
    int _cf = 0; /* carry flag */

loc_003817E0: ;
    SET_LO16(eax, MEM16(0x4ACE3E));
    xmm0 = XMM_SCALAR(MEMF(0x497C28)); /* movss */
    ecx = ZX8(LO8(eax));
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x4ACE3C);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0xB9153C) = xmm1.f[0]; /* movss */
    edx = ZX8(HI8(ecx));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0xB91540) = xmm1.f[0]; /* movss */
    ecx = ZX8(LO8(ecx));
    edx = ZX8(HI8(eax));
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0xB91544) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0xB91548) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381850
 * Original: 0x00381850 - 0x00381861 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381850(void)
{
    int _cf = 0; /* carry flag */

loc_00381850: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB91568) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381870
 * Original: 0x00381870 - 0x00381881 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381870(void)
{
    int _cf = 0; /* carry flag */

loc_00381870: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB91570) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381890
 * Original: 0x00381890 - 0x003818A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381890(void)
{
    int _cf = 0; /* carry flag */

loc_00381890: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB9156C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003818B0
 * Original: 0x003818B0 - 0x003818C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003818B0(void)
{
    int _cf = 0; /* carry flag */

loc_003818B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB91568); /* divss */
    MEMF(0xB91574) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003818D0
 * Original: 0x003818D0 - 0x003818E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003818D0(void)
{
    int _cf = 0; /* carry flag */

loc_003818D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB91570); /* divss */
    MEMF(0xB91578) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003818F0
 * Original: 0x003818F0 - 0x00381901 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003818F0(void)
{
    int _cf = 0; /* carry flag */

loc_003818F0: ;
    xmm0 = XMM_SCALAR(MEMF(0xB6BEB8)); /* movss */
    MEMF(0xB9157C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381910
 * Original: 0x00381910 - 0x00381921 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381910(void)
{
    int _cf = 0; /* carry flag */

loc_00381910: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB91580) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381930
 * Original: 0x00381930 - 0x00381941 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381930(void)
{
    int _cf = 0; /* carry flag */

loc_00381930: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB91588) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381950
 * Original: 0x00381950 - 0x00381961 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381950(void)
{
    int _cf = 0; /* carry flag */

loc_00381950: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB91584) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381970
 * Original: 0x00381970 - 0x00381989 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381970(void)
{
    int _cf = 0; /* carry flag */

loc_00381970: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB91580); /* divss */
    MEMF(0xB9158C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381990
 * Original: 0x00381990 - 0x003819A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381990(void)
{
    int _cf = 0; /* carry flag */

loc_00381990: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB91588); /* divss */
    MEMF(0xB91590) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003819B0
 * Original: 0x003819B0 - 0x003819C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003819B0(void)
{
    int _cf = 0; /* carry flag */

loc_003819B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB9359C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003819D0
 * Original: 0x003819D0 - 0x003819E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003819D0(void)
{
    int _cf = 0; /* carry flag */

loc_003819D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB935A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003819F0
 * Original: 0x003819F0 - 0x00381A01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003819F0(void)
{
    int _cf = 0; /* carry flag */

loc_003819F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB935A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381A10
 * Original: 0x00381A10 - 0x00381A29 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381A10(void)
{
    int _cf = 0; /* carry flag */

loc_00381A10: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB9359C); /* divss */
    MEMF(0xB935A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381A30
 * Original: 0x00381A30 - 0x00381A49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381A30(void)
{
    int _cf = 0; /* carry flag */

loc_00381A30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB935A4); /* divss */
    MEMF(0xB935AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381A50
 * Original: 0x00381A50 - 0x00381A61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381A50(void)
{
    int _cf = 0; /* carry flag */

loc_00381A50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB935B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381A70
 * Original: 0x00381A70 - 0x00381A81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381A70(void)
{
    int _cf = 0; /* carry flag */

loc_00381A70: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB935B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381A90
 * Original: 0x00381A90 - 0x00381AA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381A90(void)
{
    int _cf = 0; /* carry flag */

loc_00381A90: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB935B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381AB0
 * Original: 0x00381AB0 - 0x00381AC9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381AB0(void)
{
    int _cf = 0; /* carry flag */

loc_00381AB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB935B0); /* divss */
    MEMF(0xB935BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381AD0
 * Original: 0x00381AD0 - 0x00381AE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381AD0(void)
{
    int _cf = 0; /* carry flag */

loc_00381AD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB935B8); /* divss */
    MEMF(0xB935C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381AF0
 * Original: 0x00381AF0 - 0x00381B01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381AF0(void)
{
    int _cf = 0; /* carry flag */

loc_00381AF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB935C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381B10
 * Original: 0x00381B10 - 0x00381B21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381B10(void)
{
    int _cf = 0; /* carry flag */

loc_00381B10: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB935CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381B30
 * Original: 0x00381B30 - 0x00381B41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381B30(void)
{
    int _cf = 0; /* carry flag */

loc_00381B30: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB935C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381B50
 * Original: 0x00381B50 - 0x00381B69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381B50(void)
{
    int _cf = 0; /* carry flag */

loc_00381B50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB935C4); /* divss */
    MEMF(0xB935D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381B70
 * Original: 0x00381B70 - 0x00381B89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381B70(void)
{
    int _cf = 0; /* carry flag */

loc_00381B70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB935CC); /* divss */
    MEMF(0xB935D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381B90
 * Original: 0x00381B90 - 0x00381BA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381B90(void)
{
    int _cf = 0; /* carry flag */

loc_00381B90: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB935D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381BB0
 * Original: 0x00381BB0 - 0x00381BC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381BB0(void)
{
    int _cf = 0; /* carry flag */

loc_00381BB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB935E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381BD0
 * Original: 0x00381BD0 - 0x00381BE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381BD0(void)
{
    int _cf = 0; /* carry flag */

loc_00381BD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB935DC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381BF0
 * Original: 0x00381BF0 - 0x00381C09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381BF0(void)
{
    int _cf = 0; /* carry flag */

loc_00381BF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB935D8); /* divss */
    MEMF(0xB935E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381C10
 * Original: 0x00381C10 - 0x00381C29 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381C10(void)
{
    int _cf = 0; /* carry flag */

loc_00381C10: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB935E0); /* divss */
    MEMF(0xB935E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381C30
 * Original: 0x00381C30 - 0x00381C41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381C30(void)
{
    int _cf = 0; /* carry flag */

loc_00381C30: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB935F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381C50
 * Original: 0x00381C50 - 0x00381C61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381C50(void)
{
    int _cf = 0; /* carry flag */

loc_00381C50: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB93600) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381C70
 * Original: 0x00381C70 - 0x00381C81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381C70(void)
{
    int _cf = 0; /* carry flag */

loc_00381C70: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB935FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381C90
 * Original: 0x00381C90 - 0x00381CA9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381C90(void)
{
    int _cf = 0; /* carry flag */

loc_00381C90: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB935F8); /* divss */
    MEMF(0xB93604) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381CB0
 * Original: 0x00381CB0 - 0x00381CC9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381CB0(void)
{
    int _cf = 0; /* carry flag */

loc_00381CB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93600); /* divss */
    MEMF(0xB93608) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381CD0
 * Original: 0x00381CD0 - 0x00381CE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381CD0(void)
{
    int _cf = 0; /* carry flag */

loc_00381CD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xB93610) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381CF0
 * Original: 0x00381CF0 - 0x00381D01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381CF0(void)
{
    int _cf = 0; /* carry flag */

loc_00381CF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xB935F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381D10
 * Original: 0x00381D10 - 0x00381D29 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381D10(void)
{
    int _cf = 0; /* carry flag */

loc_00381D10: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB935F0); /* divss */
    MEMF(0xB935EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381D30
 * Original: 0x00381D30 - 0x00381D4D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381D30(void)
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

loc_00381D30: ;
    fp_push(MEMF(0xB935F0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381D47u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00381D47: ;
    MEM32(0xB9360C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00381D50
 * Original: 0x00381D50 - 0x00381D6D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381D50(void)
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

loc_00381D50: ;
    fp_push(MEMF(0xB935F0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381D67u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00381D67: ;
    MEM32(0xB935F4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00381D70
 * Original: 0x00381D70 - 0x00381D81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381D70(void)
{
    int _cf = 0; /* carry flag */

loc_00381D70: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB93620) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381D90
 * Original: 0x00381D90 - 0x00381DA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381D90(void)
{
    int _cf = 0; /* carry flag */

loc_00381D90: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB93628) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381DB0
 * Original: 0x00381DB0 - 0x00381DC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381DB0(void)
{
    int _cf = 0; /* carry flag */

loc_00381DB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB93624) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381DD0
 * Original: 0x00381DD0 - 0x00381DE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381DD0(void)
{
    int _cf = 0; /* carry flag */

loc_00381DD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93620); /* divss */
    MEMF(0xB9362C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381DF0
 * Original: 0x00381DF0 - 0x00381E09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381DF0(void)
{
    int _cf = 0; /* carry flag */

loc_00381DF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93628); /* divss */
    MEMF(0xB93630) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381E10
 * Original: 0x00381E10 - 0x00381E21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381E10(void)
{
    int _cf = 0; /* carry flag */

loc_00381E10: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xB93638) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381E30
 * Original: 0x00381E30 - 0x00381E41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381E30(void)
{
    int _cf = 0; /* carry flag */

loc_00381E30: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xB93618) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381E50
 * Original: 0x00381E50 - 0x00381E69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381E50(void)
{
    int _cf = 0; /* carry flag */

loc_00381E50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93618); /* divss */
    MEMF(0xB93614) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381E70
 * Original: 0x00381E70 - 0x00381E8D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381E70(void)
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

loc_00381E70: ;
    fp_push(MEMF(0xB93618)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381E87u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00381E87: ;
    MEM32(0xB93634) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00381E90
 * Original: 0x00381E90 - 0x00381EAD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381E90(void)
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

loc_00381E90: ;
    fp_push(MEMF(0xB93618)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381EA7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00381EA7: ;
    MEM32(0xB9361C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00381EB0
 * Original: 0x00381EB0 - 0x00381EC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381EB0(void)
{
    int _cf = 0; /* carry flag */

loc_00381EB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB93948) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381ED0
 * Original: 0x00381ED0 - 0x00381EE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381ED0(void)
{
    int _cf = 0; /* carry flag */

loc_00381ED0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB93950) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381EF0
 * Original: 0x00381EF0 - 0x00381F01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381EF0(void)
{
    int _cf = 0; /* carry flag */

loc_00381EF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB9394C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381F10
 * Original: 0x00381F10 - 0x00381F29 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381F10(void)
{
    int _cf = 0; /* carry flag */

loc_00381F10: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93948); /* divss */
    MEMF(0xB93954) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381F30
 * Original: 0x00381F30 - 0x00381F49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381F30(void)
{
    int _cf = 0; /* carry flag */

loc_00381F30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93950); /* divss */
    MEMF(0xB93958) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381F50
 * Original: 0x00381F50 - 0x00381F61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381F50(void)
{
    int _cf = 0; /* carry flag */

loc_00381F50: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xB93C60) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381F70
 * Original: 0x00381F70 - 0x00381F81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381F70(void)
{
    int _cf = 0; /* carry flag */

loc_00381F70: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xB93940) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381F90
 * Original: 0x00381F90 - 0x00381FA9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381F90(void)
{
    int _cf = 0; /* carry flag */

loc_00381F90: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93940); /* divss */
    MEMF(0xB9363C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00381FB0
 * Original: 0x00381FB0 - 0x00381FCD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381FB0(void)
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

loc_00381FB0: ;
    fp_push(MEMF(0xB93940)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381FC7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00381FC7: ;
    MEM32(0xB9395C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00381FD0
 * Original: 0x00381FD0 - 0x00381FED (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381FD0(void)
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

loc_00381FD0: ;
    fp_push(MEMF(0xB93940)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00381FE7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00381FE7: ;
    MEM32(0xB93944) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00381FF0
 * Original: 0x00381FF0 - 0x00382057 (103 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00381FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00381FF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0xB93974;
    esi = 0x20;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00382000: ;
    ecx = eax + -20;
    MEM32(eax + -12) = edx;
    MEM32(eax + -16) = edx;
    MEM32(eax + -8) = edx;
    MEM32(ecx) = edx;
    MEM32(eax + -4) = edx;
    MEM8(eax) = LO8(edx);
    MEM8(eax + 1) = LO8(edx);
    MEM32(0x4AED00) = MEM32(0x4AED00) + 1;
    _fa = (uint32_t)(MEM32(0x4AED00)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + -8) = ecx;
    MEM32(eax + -16) = 0x4AECF0;
    MEM32(ecx) = 0x4AECF0;
    ebx = MEM32(0x4AECF8);
    MEM32(eax + -12) = ebx;
    MEM32(0x4AECF8) = ecx;
    ebx = MEM32(eax + -12);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = ecx;
    if ((_fa != 0)) goto loc_00382000; /* jne: not equal / not zero */

loc_00382047: ;
    PUSH32(esp, 0x3AC5A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382051u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_00382051: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00382060
 * Original: 0x00382060 - 0x003820C7 (103 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00382060: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0xB93654;
    esi = 0x20;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_00382070: ;
    ecx = eax + -20;
    MEM32(eax + -12) = edx;
    MEM32(eax + -16) = edx;
    MEM32(eax + -8) = edx;
    MEM32(ecx) = edx;
    MEM32(eax + -4) = edx;
    MEM8(eax) = LO8(edx);
    MEM8(eax + 1) = LO8(edx);
    MEM32(0x4AED00) = MEM32(0x4AED00) + 1;
    _fa = (uint32_t)(MEM32(0x4AED00)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + -8) = ecx;
    MEM32(eax + -16) = 0x4AECF0;
    MEM32(ecx) = 0x4AECF0;
    ebx = MEM32(0x4AECF8);
    MEM32(eax + -12) = ebx;
    MEM32(0x4AECF8) = ecx;
    ebx = MEM32(eax + -12);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = ecx;
    if ((_fa != 0)) goto loc_00382070; /* jne: not equal / not zero */

loc_003820B7: ;
    PUSH32(esp, 0x3AC5E0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003820C1u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003820C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003820D0
 * Original: 0x003820D0 - 0x003820E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003820D0(void)
{
    int _cf = 0; /* carry flag */

loc_003820D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB93C68) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003820F0
 * Original: 0x003820F0 - 0x00382101 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003820F0(void)
{
    int _cf = 0; /* carry flag */

loc_003820F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB93C70) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00382110
 * Original: 0x00382110 - 0x00382121 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382110(void)
{
    int _cf = 0; /* carry flag */

loc_00382110: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB93C6C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00382130
 * Original: 0x00382130 - 0x00382149 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382130(void)
{
    int _cf = 0; /* carry flag */

loc_00382130: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93C68); /* divss */
    MEMF(0xB93C74) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00382150
 * Original: 0x00382150 - 0x00382169 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382150(void)
{
    int _cf = 0; /* carry flag */

loc_00382150: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93C70); /* divss */
    MEMF(0xB93C78) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00382170
 * Original: 0x00382170 - 0x003821C7 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00382170: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x4835EC);
    PUSH32(esp, 0x4AED60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00382181u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_00382181: ;
    MEM8(0x4AED7F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038218Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0038218D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4AED50;
    MEM32(0x4AED50) = eax;
    MEM32(0x4AED54) = eax;
    MEM32(0x4AED5C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4AED58) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4AED58);
    PUSH32(esp, 0x3AC620);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003821C3u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003821C3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003821D0
 * Original: 0x003821D0 - 0x003821FC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003821D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003821D0: ;
    edx = 0x4835EC;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x41);
    /* nop */

loc_003821E0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003821E0; /* jne: not equal / not zero */

loc_003821F6: ;
    MEM32(0xB93C64) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00382200
 * Original: 0x00382200 - 0x0038222C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00382200: ;
    edx = 0x4835DC;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x41);
    /* nop */

loc_00382210: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00382210; /* jne: not equal / not zero */

loc_00382226: ;
    MEM32(0xB93C7C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00382230
 * Original: 0x00382230 - 0x00382241 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382230(void)
{
    int _cf = 0; /* carry flag */

loc_00382230: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB93C80) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00382250
 * Original: 0x00382250 - 0x00382261 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382250(void)
{
    int _cf = 0; /* carry flag */

loc_00382250: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB93C88) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00382270
 * Original: 0x00382270 - 0x00382281 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382270(void)
{
    int _cf = 0; /* carry flag */

loc_00382270: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB93C84) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00382290
 * Original: 0x00382290 - 0x003822A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382290(void)
{
    int _cf = 0; /* carry flag */

loc_00382290: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93C80); /* divss */
    MEMF(0xB93C8C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003822B0
 * Original: 0x003822B0 - 0x003822C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003822B0(void)
{
    int _cf = 0; /* carry flag */

loc_003822B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93C88); /* divss */
    MEMF(0xB93C90) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003822D0
 * Original: 0x003822D0 - 0x003822E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003822D0(void)
{
    int _cf = 0; /* carry flag */

loc_003822D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB93C94) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003822F0
 * Original: 0x003822F0 - 0x00382301 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003822F0(void)
{
    int _cf = 0; /* carry flag */

loc_003822F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB93C9C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00382310
 * Original: 0x00382310 - 0x00382321 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382310(void)
{
    int _cf = 0; /* carry flag */

loc_00382310: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB93C98) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00382330
 * Original: 0x00382330 - 0x00382349 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382330(void)
{
    int _cf = 0; /* carry flag */

loc_00382330: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93C94); /* divss */
    MEMF(0xB93CA0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00382350
 * Original: 0x00382350 - 0x00382369 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382350(void)
{
    int _cf = 0; /* carry flag */

loc_00382350: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93C9C); /* divss */
    MEMF(0xB93CA4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00382370
 * Original: 0x00382370 - 0x00382381 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382370(void)
{
    int _cf = 0; /* carry flag */

loc_00382370: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xB93ED8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00382390
 * Original: 0x00382390 - 0x003823A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382390(void)
{
    int _cf = 0; /* carry flag */

loc_00382390: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xB93EE0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003823B0
 * Original: 0x003823B0 - 0x003823C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003823B0(void)
{
    int _cf = 0; /* carry flag */

loc_003823B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xB93EDC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003823D0
 * Original: 0x003823D0 - 0x003823E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003823D0(void)
{
    int _cf = 0; /* carry flag */

loc_003823D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93ED8); /* divss */
    MEMF(0xB93EE4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003823F0
 * Original: 0x003823F0 - 0x00382409 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003823F0(void)
{
    int _cf = 0; /* carry flag */

loc_003823F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xB93EE0); /* divss */
    MEMF(0xB93EE8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00382410
 * Original: 0x00382410 - 0x0038243C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00382410: ;
    edx = 0x483770;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x45);
    /* nop */

loc_00382420: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00382420; /* jne: not equal / not zero */

loc_00382436: ;
    MEM32(0xB93EF0) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00382440
 * Original: 0x00382440 - 0x0038246C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00382440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00382440: ;
    edx = 0x48375C;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x45);
    /* nop */

loc_00382450: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00382450; /* jne: not equal / not zero */

loc_00382466: ;
    MEM32(0xB93EEC) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}
