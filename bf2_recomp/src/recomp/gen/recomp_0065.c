/**
 * Star Wars Battlefront 2 - Recompiled code chunk 65
 * Functions: 250 (0x0039D170 - 0x0039F420)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0039D170
 * Original: 0x0039D170 - 0x0039D189 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D170(void)
{
    int _cf = 0; /* carry flag */

loc_0039D170: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDD698); /* divss */
    MEMF(0xBDD6A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D190
 * Original: 0x0039D190 - 0x0039D1A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D190(void)
{
    int _cf = 0; /* carry flag */

loc_0039D190: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBDD6A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D1B0
 * Original: 0x0039D1B0 - 0x0039D1C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D1B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D1B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBDD6AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D1D0
 * Original: 0x0039D1D0 - 0x0039D1E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D1D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D1D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBDD6A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D1F0
 * Original: 0x0039D1F0 - 0x0039D209 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D1F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D1F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDD6A4); /* divss */
    MEMF(0xBDD6B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D210
 * Original: 0x0039D210 - 0x0039D229 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D210(void)
{
    int _cf = 0; /* carry flag */

loc_0039D210: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDD6AC); /* divss */
    MEMF(0xBDD6B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D230
 * Original: 0x0039D230 - 0x0039D241 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D230(void)
{
    int _cf = 0; /* carry flag */

loc_0039D230: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBDD6B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D250
 * Original: 0x0039D250 - 0x0039D261 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D250(void)
{
    int _cf = 0; /* carry flag */

loc_0039D250: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBDD6C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D270
 * Original: 0x0039D270 - 0x0039D281 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D270(void)
{
    int _cf = 0; /* carry flag */

loc_0039D270: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBDD6BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D290
 * Original: 0x0039D290 - 0x0039D2A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D290(void)
{
    int _cf = 0; /* carry flag */

loc_0039D290: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDD6B8); /* divss */
    MEMF(0xBDD6C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D2B0
 * Original: 0x0039D2B0 - 0x0039D2C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D2B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D2B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDD6C0); /* divss */
    MEMF(0xBDD6C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D2D0
 * Original: 0x0039D2D0 - 0x0039D2E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D2D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D2D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBDE000) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D2F0
 * Original: 0x0039D2F0 - 0x0039D301 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D2F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D2F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBDE008) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D310
 * Original: 0x0039D310 - 0x0039D321 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D310(void)
{
    int _cf = 0; /* carry flag */

loc_0039D310: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBDE004) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D330
 * Original: 0x0039D330 - 0x0039D349 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D330(void)
{
    int _cf = 0; /* carry flag */

loc_0039D330: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE000); /* divss */
    MEMF(0xBDE00C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D350
 * Original: 0x0039D350 - 0x0039D369 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D350(void)
{
    int _cf = 0; /* carry flag */

loc_0039D350: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE008); /* divss */
    MEMF(0xBDE010) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D370
 * Original: 0x0039D370 - 0x0039D3C7 (87 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039D370: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x492D2C);
    PUSH32(esp, 0x4BC790);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D381u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_0039D381: ;
    MEM8(0x4BC7AF) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D38Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039D38D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4BC780;
    MEM32(0x4BC780) = eax;
    MEM32(0x4BC784) = eax;
    MEM32(0x4BC78C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4BC788) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4BC788);
    PUSH32(esp, 0x3ADB30);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D3C3u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_0039D3C3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039D3D0
 * Original: 0x0039D3D0 - 0x0039D407 (55 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D3D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039D3D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0xBDD6D0;
    esi = 4;
    /* nop */

loc_0039D3E0: ;
    PUSH32(esp, 0x40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D3E7u); RECOMP_ABI_CALL(0x0024F820u, sub_0024F820); /* call 0x0024F820 */

loc_0039D3E7: ;
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D3EEu); RECOMP_ABI_CALL(0x0024DFF0u, sub_0024DFF0); /* call 0x0024DFF0 */

loc_0039D3EE: ;
    _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x24C)) >> 32) & 1);
    edi = edi + 0x24C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0039D3E0; /* jne: not equal / not zero */

loc_0039D3F7: ;
    PUSH32(esp, 0x3ADB40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D401u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_0039D401: ;
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
 * sub_0039D410
 * Original: 0x0039D410 - 0x0039D421 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D410(void)
{
    int _cf = 0; /* carry flag */

loc_0039D410: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBDE350) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D430
 * Original: 0x0039D430 - 0x0039D441 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D430(void)
{
    int _cf = 0; /* carry flag */

loc_0039D430: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBDE358) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D450
 * Original: 0x0039D450 - 0x0039D461 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D450(void)
{
    int _cf = 0; /* carry flag */

loc_0039D450: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBDE354) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D470
 * Original: 0x0039D470 - 0x0039D489 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D470(void)
{
    int _cf = 0; /* carry flag */

loc_0039D470: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE350); /* divss */
    MEMF(0xBDE35C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D490
 * Original: 0x0039D490 - 0x0039D4A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D490(void)
{
    int _cf = 0; /* carry flag */

loc_0039D490: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE358); /* divss */
    MEMF(0xBDE360) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D4B0
 * Original: 0x0039D4B0 - 0x0039D4C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D4B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D4B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBDE650) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D4D0
 * Original: 0x0039D4D0 - 0x0039D4E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D4D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D4D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBDE190) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D4F0
 * Original: 0x0039D4F0 - 0x0039D509 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D4F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D4F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE190); /* divss */
    MEMF(0xBDE014) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D510
 * Original: 0x0039D510 - 0x0039D52D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D510(void)
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

loc_0039D510: ;
    fp_push(MEMF(0xBDE190)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D527u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039D527: ;
    MEM32(0xBDE364) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0039D530
 * Original: 0x0039D530 - 0x0039D54D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D530(void)
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

loc_0039D530: ;
    fp_push(MEMF(0xBDE190)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D547u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039D547: ;
    MEM32(0xBDE194) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0039D550
 * Original: 0x0039D550 - 0x0039D5BE (110 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039D550: ;
    eax = 0xBDE370;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D55Au); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_0039D55A: ;
    SET_LO8(edx, MEM8(0xBDE408));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0xBDE3E0;
    MEM32(0xBDE3E0) = eax;
    MEM32(0xBDE3E8) = eax;
    MEM32(0xBDE3E4) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0xBDE3EC) = eax;
    MEM32(0xBDE3F0) = eax;
    SET_LO8(eax, MEM8(0xBDE3F4));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & ((0xFE) & 0xFFu));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & ((0xFC) & 0xFFu));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x3ADB70);
    MEM8(0xBDE3F4) = LO8(eax);
    MEM32(0xBDE370) = 0x495B00;
    MEMF(0xBDE404) = xmm0.f[0]; /* movss */
    MEMF(0xBDE400) = xmm0.f[0]; /* movss */
    MEM8(0xBDE408) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D5BCu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039D5BC: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039D5C0
 * Original: 0x0039D5C0 - 0x0039D5D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D5C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039D5C0: ;
    ecx = 0xBDE020;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D5CAu); RECOMP_ABI_CALL(0x002E8900u, sub_002E8900); /* call 0x002E8900 */

loc_0039D5CA: ;
    PUSH32(esp, 0x3ADB90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D5D4u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039D5D4: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039D5E0
 * Original: 0x0039D5E0 - 0x0039D64E (110 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039D5E0: ;
    eax = 0xBDE0F0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D5EAu); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_0039D5EA: ;
    SET_LO8(edx, MEM8(0xBDE188));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0xBDE160;
    MEM32(0xBDE160) = eax;
    MEM32(0xBDE168) = eax;
    MEM32(0xBDE164) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0xBDE16C) = eax;
    MEM32(0xBDE170) = eax;
    SET_LO8(eax, MEM8(0xBDE174));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & ((0xFE) & 0xFFu));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & ((0xFC) & 0xFFu));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x3ADBA0);
    MEM8(0xBDE174) = LO8(eax);
    MEM32(0xBDE0F0) = 0x495B00;
    MEMF(0xBDE184) = xmm0.f[0]; /* movss */
    MEMF(0xBDE180) = xmm0.f[0]; /* movss */
    MEM8(0xBDE188) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D64Cu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039D64C: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039D650
 * Original: 0x0039D650 - 0x0039D666 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039D650: ;
    ecx = 0xBDE4E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D65Au); RECOMP_ABI_CALL(0x002E8900u, sub_002E8900); /* call 0x002E8900 */

loc_0039D65A: ;
    PUSH32(esp, 0x3ADBC0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D664u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039D664: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039D670
 * Original: 0x0039D670 - 0x0039D686 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039D670: ;
    ecx = 0xBDE1A0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D67Au); RECOMP_ABI_CALL(0x002E8900u, sub_002E8900); /* call 0x002E8900 */

loc_0039D67A: ;
    PUSH32(esp, 0x3ADBD0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D684u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039D684: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039D690
 * Original: 0x0039D690 - 0x0039D6A6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039D690: ;
    ecx = 0xBDE410;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D69Au); RECOMP_ABI_CALL(0x002E8900u, sub_002E8900); /* call 0x002E8900 */

loc_0039D69A: ;
    PUSH32(esp, 0x3ADBE0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D6A4u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039D6A4: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039D6B0
 * Original: 0x0039D6B0 - 0x0039D71E (110 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039D6B0: ;
    eax = 0xBDE5B0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D6BAu); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_0039D6BA: ;
    SET_LO8(edx, MEM8(0xBDE648));
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0xBDE620;
    MEM32(0xBDE620) = eax;
    MEM32(0xBDE628) = eax;
    MEM32(0xBDE624) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0xBDE62C) = eax;
    MEM32(0xBDE630) = eax;
    SET_LO8(eax, MEM8(0xBDE634));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & ((0xFE) & 0xFFu));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & ((0xFC) & 0xFFu));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x3ADBF0);
    MEM8(0xBDE634) = LO8(eax);
    MEM32(0xBDE5B0) = 0x495B00;
    MEMF(0xBDE644) = xmm0.f[0]; /* movss */
    MEMF(0xBDE640) = xmm0.f[0]; /* movss */
    MEM8(0xBDE648) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D71Cu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039D71C: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039D720
 * Original: 0x0039D720 - 0x0039D736 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039D720: ;
    ecx = 0xBDE660;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D72Au); RECOMP_ABI_CALL(0x002E8900u, sub_002E8900); /* call 0x002E8900 */

loc_0039D72A: ;
    PUSH32(esp, 0x3ADC10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D734u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039D734: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039D740
 * Original: 0x0039D740 - 0x0039D756 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039D740: ;
    ecx = 0xBDE270;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D74Au); RECOMP_ABI_CALL(0x002E8900u, sub_002E8900); /* call 0x002E8900 */

loc_0039D74A: ;
    PUSH32(esp, 0x3ADC20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D754u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039D754: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039D760
 * Original: 0x0039D760 - 0x0039D76C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039D760: ;
    PUSH32(esp, 0x3ADC30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D76Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039D76A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039D770
 * Original: 0x0039D770 - 0x0039D781 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D770(void)
{
    int _cf = 0; /* carry flag */

loc_0039D770: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBDE730) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D790
 * Original: 0x0039D790 - 0x0039D7A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D790(void)
{
    int _cf = 0; /* carry flag */

loc_0039D790: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBDE738) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D7B0
 * Original: 0x0039D7B0 - 0x0039D7C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D7B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D7B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBDE734) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D7D0
 * Original: 0x0039D7D0 - 0x0039D7E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D7D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D7D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE730); /* divss */
    MEMF(0xBDE73C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D7F0
 * Original: 0x0039D7F0 - 0x0039D809 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D7F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D7F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE738); /* divss */
    MEMF(0xBDE740) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D810
 * Original: 0x0039D810 - 0x0039D821 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D810(void)
{
    int _cf = 0; /* carry flag */

loc_0039D810: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBDE758) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D830
 * Original: 0x0039D830 - 0x0039D841 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D830(void)
{
    int _cf = 0; /* carry flag */

loc_0039D830: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBDE760) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D850
 * Original: 0x0039D850 - 0x0039D861 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D850(void)
{
    int _cf = 0; /* carry flag */

loc_0039D850: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBDE75C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D870
 * Original: 0x0039D870 - 0x0039D889 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D870(void)
{
    int _cf = 0; /* carry flag */

loc_0039D870: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE758); /* divss */
    MEMF(0xBDE764) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D890
 * Original: 0x0039D890 - 0x0039D8A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D890(void)
{
    int _cf = 0; /* carry flag */

loc_0039D890: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE760); /* divss */
    MEMF(0xBDE768) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D8B0
 * Original: 0x0039D8B0 - 0x0039D8C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D8B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D8B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBDE76C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D8D0
 * Original: 0x0039D8D0 - 0x0039D8E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D8D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D8D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBDE774) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D8F0
 * Original: 0x0039D8F0 - 0x0039D901 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D8F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D8F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBDE770) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D910
 * Original: 0x0039D910 - 0x0039D929 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D910(void)
{
    int _cf = 0; /* carry flag */

loc_0039D910: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE76C); /* divss */
    MEMF(0xBDE778) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D930
 * Original: 0x0039D930 - 0x0039D949 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D930(void)
{
    int _cf = 0; /* carry flag */

loc_0039D930: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE774); /* divss */
    MEMF(0xBDE77C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D950
 * Original: 0x0039D950 - 0x0039D961 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D950(void)
{
    int _cf = 0; /* carry flag */

loc_0039D950: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBDE880) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D970
 * Original: 0x0039D970 - 0x0039D981 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D970(void)
{
    int _cf = 0; /* carry flag */

loc_0039D970: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBDE888) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D990
 * Original: 0x0039D990 - 0x0039D9A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D990(void)
{
    int _cf = 0; /* carry flag */

loc_0039D990: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBDE884) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D9B0
 * Original: 0x0039D9B0 - 0x0039D9C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D9B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D9B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE880); /* divss */
    MEMF(0xBDE88C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D9D0
 * Original: 0x0039D9D0 - 0x0039D9E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D9D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039D9D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE888); /* divss */
    MEMF(0xBDE890) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039D9F0
 * Original: 0x0039D9F0 - 0x0039D9FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039D9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039D9F0: ;
    PUSH32(esp, 0x3ADC40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039D9FAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039D9FA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039DA00
 * Original: 0x0039DA00 - 0x0039DA0C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039DA00: ;
    PUSH32(esp, 0x3ADC60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DA0Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039DA0A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039DA10
 * Original: 0x0039DA10 - 0x0039DA1C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039DA10: ;
    PUSH32(esp, 0x3ADC80);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DA1Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039DA1A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039DA20
 * Original: 0x0039DA20 - 0x0039DA31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DA20(void)
{
    int _cf = 0; /* carry flag */

loc_0039DA20: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBDE8A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DA40
 * Original: 0x0039DA40 - 0x0039DA51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DA40(void)
{
    int _cf = 0; /* carry flag */

loc_0039DA40: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBDE8A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DA60
 * Original: 0x0039DA60 - 0x0039DA71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DA60(void)
{
    int _cf = 0; /* carry flag */

loc_0039DA60: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBDE8A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DA80
 * Original: 0x0039DA80 - 0x0039DA99 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DA80(void)
{
    int _cf = 0; /* carry flag */

loc_0039DA80: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE8A0); /* divss */
    MEMF(0xBDE8AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DAA0
 * Original: 0x0039DAA0 - 0x0039DAB9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DAA0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DAA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE8A8); /* divss */
    MEMF(0xBDE8B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DAC0
 * Original: 0x0039DAC0 - 0x0039DAD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DAC0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DAC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBDE8B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DAE0
 * Original: 0x0039DAE0 - 0x0039DAF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DAE0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DAE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBDE8BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DB00
 * Original: 0x0039DB00 - 0x0039DB11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DB00(void)
{
    int _cf = 0; /* carry flag */

loc_0039DB00: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBDE8B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DB20
 * Original: 0x0039DB20 - 0x0039DB39 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DB20(void)
{
    int _cf = 0; /* carry flag */

loc_0039DB20: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE8B4); /* divss */
    MEMF(0xBDE8C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DB40
 * Original: 0x0039DB40 - 0x0039DB59 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DB40(void)
{
    int _cf = 0; /* carry flag */

loc_0039DB40: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE8BC); /* divss */
    MEMF(0xBDE8C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DB60
 * Original: 0x0039DB60 - 0x0039DB71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DB60(void)
{
    int _cf = 0; /* carry flag */

loc_0039DB60: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBDE8C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DB80
 * Original: 0x0039DB80 - 0x0039DB91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DB80(void)
{
    int _cf = 0; /* carry flag */

loc_0039DB80: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBDE8D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DBA0
 * Original: 0x0039DBA0 - 0x0039DBB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DBA0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DBA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBDE8CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DBC0
 * Original: 0x0039DBC0 - 0x0039DBD9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DBC0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DBC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE8C8); /* divss */
    MEMF(0xBDE8D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DBE0
 * Original: 0x0039DBE0 - 0x0039DBF9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DBE0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DBE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBDE8D0); /* divss */
    MEMF(0xBDE8D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DC00
 * Original: 0x0039DC00 - 0x0039DC3B (59 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039DC00: ;
    eax = 0xBDE8EC;
    edx = 0x380;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0039DC10: ;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + -12) = 0x492F1C;
    MEM16(eax + 0x58) = LO16(ecx);
    MEM8(eax + 0x5A) = LO8(ecx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x70)) >> 32) & 1);
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0039DC10; /* jne: not equal / not zero */

loc_0039DC2F: ;
    PUSH32(esp, 0x3ADCB0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DC39u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039DC39: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039DC40
 * Original: 0x0039DC40 - 0x0039DC51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DC40(void)
{
    int _cf = 0; /* carry flag */

loc_0039DC40: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF70E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DC60
 * Original: 0x0039DC60 - 0x0039DC71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DC60(void)
{
    int _cf = 0; /* carry flag */

loc_0039DC60: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF70E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DC80
 * Original: 0x0039DC80 - 0x0039DC91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DC80(void)
{
    int _cf = 0; /* carry flag */

loc_0039DC80: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF70E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DCA0
 * Original: 0x0039DCA0 - 0x0039DCB9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DCA0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DCA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF70E0); /* divss */
    MEMF(0xBF70EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DCC0
 * Original: 0x0039DCC0 - 0x0039DCD9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DCC0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DCC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF70E8); /* divss */
    MEMF(0xBF70F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DCE0
 * Original: 0x0039DCE0 - 0x0039DCF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DCE0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DCE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF70F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DD00
 * Original: 0x0039DD00 - 0x0039DD11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DD00(void)
{
    int _cf = 0; /* carry flag */

loc_0039DD00: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF70FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DD20
 * Original: 0x0039DD20 - 0x0039DD31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DD20(void)
{
    int _cf = 0; /* carry flag */

loc_0039DD20: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF70F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DD40
 * Original: 0x0039DD40 - 0x0039DD59 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DD40(void)
{
    int _cf = 0; /* carry flag */

loc_0039DD40: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF70F4); /* divss */
    MEMF(0xBF7100) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DD60
 * Original: 0x0039DD60 - 0x0039DD79 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DD60(void)
{
    int _cf = 0; /* carry flag */

loc_0039DD60: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF70FC); /* divss */
    MEMF(0xBF7104) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DD80
 * Original: 0x0039DD80 - 0x0039DD9A (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DD80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039DD80: ;
    PUSH32(esp, esi);
    esi = 0xBF7108;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DD8Bu); RECOMP_ABI_CALL(0x0025A2E0u, sub_0025A2E0); /* call 0x0025A2E0 */

loc_0039DD8B: ;
    PUSH32(esp, 0x3ADD10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DD95u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_0039DD95: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039DDA0
 * Original: 0x0039DDA0 - 0x0039DDB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DDA0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DDA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF82BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DDC0
 * Original: 0x0039DDC0 - 0x0039DDD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DDC0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DDC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF82C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DDE0
 * Original: 0x0039DDE0 - 0x0039DDF1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DDE0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DDE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF82C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DE00
 * Original: 0x0039DE00 - 0x0039DE19 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DE00(void)
{
    int _cf = 0; /* carry flag */

loc_0039DE00: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF82BC); /* divss */
    MEMF(0xBF82C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DE20
 * Original: 0x0039DE20 - 0x0039DE39 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DE20(void)
{
    int _cf = 0; /* carry flag */

loc_0039DE20: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF82C4); /* divss */
    MEMF(0xBF82CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DE40
 * Original: 0x0039DE40 - 0x0039DE51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DE40(void)
{
    int _cf = 0; /* carry flag */

loc_0039DE40: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF82D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DE60
 * Original: 0x0039DE60 - 0x0039DE71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DE60(void)
{
    int _cf = 0; /* carry flag */

loc_0039DE60: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF82D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DE80
 * Original: 0x0039DE80 - 0x0039DE91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DE80(void)
{
    int _cf = 0; /* carry flag */

loc_0039DE80: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF82D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DEA0
 * Original: 0x0039DEA0 - 0x0039DEB9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DEA0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DEA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF82D0); /* divss */
    MEMF(0xBF82DC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DEC0
 * Original: 0x0039DEC0 - 0x0039DED9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DEC0(void)
{
    int _cf = 0; /* carry flag */

loc_0039DEC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF82D8); /* divss */
    MEMF(0xBF82E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039DEE0
 * Original: 0x0039DEE0 - 0x0039DF28 (72 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039DEE0: ;
    eax = MEM32(0xB74438);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DEEFu); RECOMP_ABI_CALL(0x002BADB0u, sub_002BADB0); /* call 0x002BADB0 */

loc_0039DEEF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0039DF03; /* jne: not equal / not zero */

loc_0039DEF6: ;
    eax = MEM32(0xB74430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0039DF01; /* je: equal / zero */

loc_0039DEFF: ;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039DF01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0039DEFFu); } /* indirect call */
    }

loc_0039DF01: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0039DF03: ;
    PUSH32(esp, 0x3ADD20);
    MEM32(0x4BCD60) = eax;
    MEM32(0x4BCD64) = 0;
    MEM32(0x4BCD68) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DF26u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039DF26: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039DF30
 * Original: 0x0039DF30 - 0x0039DF78 (72 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039DF30: ;
    eax = MEM32(0xB74438);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DF3Fu); RECOMP_ABI_CALL(0x002BADB0u, sub_002BADB0); /* call 0x002BADB0 */

loc_0039DF3F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0039DF53; /* jne: not equal / not zero */

loc_0039DF46: ;
    eax = MEM32(0xB74430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0039DF51; /* je: equal / zero */

loc_0039DF4F: ;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039DF51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0039DF4Fu); } /* indirect call */
    }

loc_0039DF51: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0039DF53: ;
    PUSH32(esp, 0x3ADD40);
    MEM32(0x4BCD70) = eax;
    MEM32(0x4BCD74) = 0;
    MEM32(0x4BCD78) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DF76u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039DF76: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039DF80
 * Original: 0x0039DF80 - 0x0039DFCB (75 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039DF80: ;
    eax = MEM32(0xB74438);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DF92u); RECOMP_ABI_CALL(0x002BADB0u, sub_002BADB0); /* call 0x002BADB0 */

loc_0039DF92: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0039DFA6; /* jne: not equal / not zero */

loc_0039DF99: ;
    eax = MEM32(0xB74430);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0039DFA4; /* je: equal / zero */

loc_0039DFA2: ;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x0039DFA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0039DFA2u); } /* indirect call */
    }

loc_0039DFA4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0039DFA6: ;
    PUSH32(esp, 0x3ADD60);
    MEM32(0x4BCD80) = eax;
    MEM32(0x4BCD84) = 0;
    MEM32(0x4BCD88) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039DFC9u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039DFC9: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039DFD0
 * Original: 0x0039DFD0 - 0x0039E00C (60 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039DFD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039DFD0: ;
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
    MEM32(0xBF82E4) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E010
 * Original: 0x0039E010 - 0x0039E021 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E010(void)
{
    int _cf = 0; /* carry flag */

loc_0039E010: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF82E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E030
 * Original: 0x0039E030 - 0x0039E041 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E030(void)
{
    int _cf = 0; /* carry flag */

loc_0039E030: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF82F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E050
 * Original: 0x0039E050 - 0x0039E061 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E050(void)
{
    int _cf = 0; /* carry flag */

loc_0039E050: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF82EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E070
 * Original: 0x0039E070 - 0x0039E089 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E070(void)
{
    int _cf = 0; /* carry flag */

loc_0039E070: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF82E8); /* divss */
    MEMF(0xBF82F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E090
 * Original: 0x0039E090 - 0x0039E0A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E090(void)
{
    int _cf = 0; /* carry flag */

loc_0039E090: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF82F0); /* divss */
    MEMF(0xBF82F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E0B0
 * Original: 0x0039E0B0 - 0x0039E0C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E0B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E0B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8308) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E0D0
 * Original: 0x0039E0D0 - 0x0039E0E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E0D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E0D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8310) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E0F0
 * Original: 0x0039E0F0 - 0x0039E101 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E0F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E0F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF830C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E110
 * Original: 0x0039E110 - 0x0039E129 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E110(void)
{
    int _cf = 0; /* carry flag */

loc_0039E110: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8308); /* divss */
    MEMF(0xBF8314) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E130
 * Original: 0x0039E130 - 0x0039E149 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E130(void)
{
    int _cf = 0; /* carry flag */

loc_0039E130: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8310); /* divss */
    MEMF(0xBF8318) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E150
 * Original: 0x0039E150 - 0x0039E161 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E150(void)
{
    int _cf = 0; /* carry flag */

loc_0039E150: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBF8320) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E170
 * Original: 0x0039E170 - 0x0039E181 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E170(void)
{
    int _cf = 0; /* carry flag */

loc_0039E170: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBF8300) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E190
 * Original: 0x0039E190 - 0x0039E1A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E190(void)
{
    int _cf = 0; /* carry flag */

loc_0039E190: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8300); /* divss */
    MEMF(0xBF82FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E1B0
 * Original: 0x0039E1B0 - 0x0039E1CD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E1B0(void)
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

loc_0039E1B0: ;
    fp_push(MEMF(0xBF8300)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E1C7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039E1C7: ;
    MEM32(0xBF831C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0039E1D0
 * Original: 0x0039E1D0 - 0x0039E1ED (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E1D0(void)
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

loc_0039E1D0: ;
    fp_push(MEMF(0xBF8300)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E1E7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039E1E7: ;
    MEM32(0xBF8304) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0039E1F0
 * Original: 0x0039E1F0 - 0x0039E201 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E1F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E1F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8324) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E210
 * Original: 0x0039E210 - 0x0039E221 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E210(void)
{
    int _cf = 0; /* carry flag */

loc_0039E210: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF832C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E230
 * Original: 0x0039E230 - 0x0039E241 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E230(void)
{
    int _cf = 0; /* carry flag */

loc_0039E230: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8328) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E250
 * Original: 0x0039E250 - 0x0039E269 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E250(void)
{
    int _cf = 0; /* carry flag */

loc_0039E250: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8324); /* divss */
    MEMF(0xBF8330) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E270
 * Original: 0x0039E270 - 0x0039E289 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E270(void)
{
    int _cf = 0; /* carry flag */

loc_0039E270: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF832C); /* divss */
    MEMF(0xBF8334) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E290
 * Original: 0x0039E290 - 0x0039E2A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E290(void)
{
    int _cf = 0; /* carry flag */

loc_0039E290: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8338) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E2B0
 * Original: 0x0039E2B0 - 0x0039E2C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E2B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E2B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8340) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E2D0
 * Original: 0x0039E2D0 - 0x0039E2E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E2D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E2D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF833C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E2F0
 * Original: 0x0039E2F0 - 0x0039E309 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E2F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E2F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8338); /* divss */
    MEMF(0xBF8344) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E310
 * Original: 0x0039E310 - 0x0039E329 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E310(void)
{
    int _cf = 0; /* carry flag */

loc_0039E310: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8340); /* divss */
    MEMF(0xBF8348) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E330
 * Original: 0x0039E330 - 0x0039E373 (67 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039E330: ;
    PUSH32(esp, 0x4BEA1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E33Au); RECOMP_ABI_CALL(0x002604D0u, sub_002604D0); /* call 0x002604D0 */

loc_0039E33A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x4D86BC) = eax;
    MEM32(0x4D86C0) = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3ADD80);
    MEM32(0x4BEA14) = 1;
    MEM32(0x4BEA18) = 2;
    MEM32(0x4D8F28) = eax;
    MEM32(0x4D8F2C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E371u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039E371: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039E380
 * Original: 0x0039E380 - 0x0039E391 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E380(void)
{
    int _cf = 0; /* carry flag */

loc_0039E380: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF834C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E3A0
 * Original: 0x0039E3A0 - 0x0039E3B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E3A0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E3A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8354) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E3C0
 * Original: 0x0039E3C0 - 0x0039E3D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E3C0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E3C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8350) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E3E0
 * Original: 0x0039E3E0 - 0x0039E3F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E3E0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E3E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF834C); /* divss */
    MEMF(0xBF8358) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E400
 * Original: 0x0039E400 - 0x0039E419 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E400(void)
{
    int _cf = 0; /* carry flag */

loc_0039E400: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8354); /* divss */
    MEMF(0xBF835C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E420
 * Original: 0x0039E420 - 0x0039E431 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E420(void)
{
    int _cf = 0; /* carry flag */

loc_0039E420: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8360) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E440
 * Original: 0x0039E440 - 0x0039E451 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E440(void)
{
    int _cf = 0; /* carry flag */

loc_0039E440: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8368) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E460
 * Original: 0x0039E460 - 0x0039E471 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E460(void)
{
    int _cf = 0; /* carry flag */

loc_0039E460: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8364) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E480
 * Original: 0x0039E480 - 0x0039E499 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E480(void)
{
    int _cf = 0; /* carry flag */

loc_0039E480: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8360); /* divss */
    MEMF(0xBF836C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E4A0
 * Original: 0x0039E4A0 - 0x0039E4B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E4A0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E4A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8368); /* divss */
    MEMF(0xBF8370) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E4C0
 * Original: 0x0039E4C0 - 0x0039E4CB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E4C0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E4C0: ;
    eax = MEM32(0x4E57E0);
    MEM32(0xBF8374) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0039E4D0
 * Original: 0x0039E4D0 - 0x0039E4E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E4D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E4D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8378) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E4F0
 * Original: 0x0039E4F0 - 0x0039E501 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E4F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E4F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8380) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E510
 * Original: 0x0039E510 - 0x0039E521 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E510(void)
{
    int _cf = 0; /* carry flag */

loc_0039E510: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF837C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E530
 * Original: 0x0039E530 - 0x0039E549 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E530(void)
{
    int _cf = 0; /* carry flag */

loc_0039E530: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8378); /* divss */
    MEMF(0xBF8384) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E550
 * Original: 0x0039E550 - 0x0039E569 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E550(void)
{
    int _cf = 0; /* carry flag */

loc_0039E550: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8380); /* divss */
    MEMF(0xBF8388) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E570
 * Original: 0x0039E570 - 0x0039E581 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E570(void)
{
    int _cf = 0; /* carry flag */

loc_0039E570: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF838C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E590
 * Original: 0x0039E590 - 0x0039E5A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E590(void)
{
    int _cf = 0; /* carry flag */

loc_0039E590: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8394) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E5B0
 * Original: 0x0039E5B0 - 0x0039E5C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E5B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E5B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8390) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E5D0
 * Original: 0x0039E5D0 - 0x0039E5E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E5D0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E5D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF838C); /* divss */
    MEMF(0xBF8398) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E5F0
 * Original: 0x0039E5F0 - 0x0039E609 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E5F0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E5F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8394); /* divss */
    MEMF(0xBF839C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E610
 * Original: 0x0039E610 - 0x0039E621 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E610(void)
{
    int _cf = 0; /* carry flag */

loc_0039E610: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF83A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E630
 * Original: 0x0039E630 - 0x0039E641 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E630(void)
{
    int _cf = 0; /* carry flag */

loc_0039E630: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF83A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E650
 * Original: 0x0039E650 - 0x0039E661 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E650(void)
{
    int _cf = 0; /* carry flag */

loc_0039E650: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF83A4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E670
 * Original: 0x0039E670 - 0x0039E689 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E670(void)
{
    int _cf = 0; /* carry flag */

loc_0039E670: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF83A0); /* divss */
    MEMF(0xBF83AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E690
 * Original: 0x0039E690 - 0x0039E6A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E690(void)
{
    int _cf = 0; /* carry flag */

loc_0039E690: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF83A8); /* divss */
    MEMF(0xBF83B0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E6B0
 * Original: 0x0039E6B0 - 0x0039E707 (87 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039E6B0: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x493414);
    PUSH32(esp, 0x4D90E0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E6C1u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_0039E6C1: ;
    MEM8(0x4D90FF) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E6CDu); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039E6CD: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4D90D0;
    MEM32(0x4D90D0) = eax;
    MEM32(0x4D90D4) = eax;
    MEM32(0x4D90DC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4D90D8) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4D90D8);
    PUSH32(esp, 0x3ADD90);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E703u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_0039E703: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039E710
 * Original: 0x0039E710 - 0x0039E71C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039E710: ;
    PUSH32(esp, 0x3ADDA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E71Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039E71A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039E720
 * Original: 0x0039E720 - 0x0039E777 (87 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039E720: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x4933F4);
    PUSH32(esp, 0x4D9138);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E731u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_0039E731: ;
    MEM8(0x4D9157) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E73Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039E73D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4D9128;
    MEM32(0x4D9128) = eax;
    MEM32(0x4D912C) = eax;
    MEM32(0x4D9134) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4D9130) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4D9130);
    PUSH32(esp, 0x3ADDB0);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E773u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_0039E773: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039E780
 * Original: 0x0039E780 - 0x0039E78C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039E780: ;
    PUSH32(esp, 0x3ADDC0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E78Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039E78A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039E790
 * Original: 0x0039E790 - 0x0039E7E7 (87 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039E790: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x4933E0);
    PUSH32(esp, 0x4D9190);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E7A1u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_0039E7A1: ;
    MEM8(0x4D91AF) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E7ADu); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039E7AD: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4D9180;
    MEM32(0x4D9180) = eax;
    MEM32(0x4D9184) = eax;
    MEM32(0x4D918C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4D9188) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4D9188);
    PUSH32(esp, 0x3ADDD0);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E7E3u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_0039E7E3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039E7F0
 * Original: 0x0039E7F0 - 0x0039E7FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039E7F0: ;
    PUSH32(esp, 0x3ADDE0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E7FAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039E7FA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039E800
 * Original: 0x0039E800 - 0x0039E811 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E800(void)
{
    int _cf = 0; /* carry flag */

loc_0039E800: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF83B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E820
 * Original: 0x0039E820 - 0x0039E831 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E820(void)
{
    int _cf = 0; /* carry flag */

loc_0039E820: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF83BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E840
 * Original: 0x0039E840 - 0x0039E851 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E840(void)
{
    int _cf = 0; /* carry flag */

loc_0039E840: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF83B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E860
 * Original: 0x0039E860 - 0x0039E879 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E860(void)
{
    int _cf = 0; /* carry flag */

loc_0039E860: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF83B4); /* divss */
    MEMF(0xBF83C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E880
 * Original: 0x0039E880 - 0x0039E899 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E880(void)
{
    int _cf = 0; /* carry flag */

loc_0039E880: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF83BC); /* divss */
    MEMF(0xBF83C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E8A0
 * Original: 0x0039E8A0 - 0x0039E8B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E8A0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E8A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF83C8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E8C0
 * Original: 0x0039E8C0 - 0x0039E8D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E8C0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E8C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF83D0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E8E0
 * Original: 0x0039E8E0 - 0x0039E8F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E8E0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E8E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF83CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E900
 * Original: 0x0039E900 - 0x0039E919 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E900(void)
{
    int _cf = 0; /* carry flag */

loc_0039E900: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF83C8); /* divss */
    MEMF(0xBF83D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E920
 * Original: 0x0039E920 - 0x0039E939 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E920(void)
{
    int _cf = 0; /* carry flag */

loc_0039E920: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF83D0); /* divss */
    MEMF(0xBF83D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E940
 * Original: 0x0039E940 - 0x0039E997 (87 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039E940: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x493430);
    PUSH32(esp, 0x4D9230);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E951u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_0039E951: ;
    MEM8(0x4D924F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E95Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039E95D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4D9220;
    MEM32(0x4D9220) = eax;
    MEM32(0x4D9224) = eax;
    MEM32(0x4D922C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4D9228) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4D9228);
    PUSH32(esp, 0x3ADDF0);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E993u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_0039E993: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039E9A0
 * Original: 0x0039E9A0 - 0x0039E9AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E9A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039E9A0: ;
    PUSH32(esp, 0x3ADE00);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E9AAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039E9AA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039E9B0
 * Original: 0x0039E9B0 - 0x0039E9BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039E9B0: ;
    PUSH32(esp, 0x3ADE10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039E9BAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039E9BA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039E9C0
 * Original: 0x0039E9C0 - 0x0039E9D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E9C0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E9C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF83DC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039E9E0
 * Original: 0x0039E9E0 - 0x0039E9F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039E9E0(void)
{
    int _cf = 0; /* carry flag */

loc_0039E9E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF83E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EA00
 * Original: 0x0039EA00 - 0x0039EA11 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EA00(void)
{
    int _cf = 0; /* carry flag */

loc_0039EA00: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF83E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EA20
 * Original: 0x0039EA20 - 0x0039EA39 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EA20(void)
{
    int _cf = 0; /* carry flag */

loc_0039EA20: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF83DC); /* divss */
    MEMF(0xBF83E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EA40
 * Original: 0x0039EA40 - 0x0039EA59 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EA40(void)
{
    int _cf = 0; /* carry flag */

loc_0039EA40: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF83E4); /* divss */
    MEMF(0xBF83EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EA60
 * Original: 0x0039EA60 - 0x0039EA71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EA60(void)
{
    int _cf = 0; /* carry flag */

loc_0039EA60: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF83F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EA80
 * Original: 0x0039EA80 - 0x0039EA91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EA80(void)
{
    int _cf = 0; /* carry flag */

loc_0039EA80: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF83F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EAA0
 * Original: 0x0039EAA0 - 0x0039EAB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EAA0(void)
{
    int _cf = 0; /* carry flag */

loc_0039EAA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF83F4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EAC0
 * Original: 0x0039EAC0 - 0x0039EAD9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EAC0(void)
{
    int _cf = 0; /* carry flag */

loc_0039EAC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF83F0); /* divss */
    MEMF(0xBF83FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EAE0
 * Original: 0x0039EAE0 - 0x0039EAF9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EAE0(void)
{
    int _cf = 0; /* carry flag */

loc_0039EAE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF83F8); /* divss */
    MEMF(0xBF8400) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EB00
 * Original: 0x0039EB00 - 0x0039EB2C (44 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039EB00: ;
    edx = 0x4934BC;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x45);
    /* nop */

loc_0039EB10: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0039EB10; /* jne: not equal / not zero */

loc_0039EB26: ;
    MEM32(0xBF8408) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EB30
 * Original: 0x0039EB30 - 0x0039EB3C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039EB30: ;
    PUSH32(esp, 0x3ADE20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039EB3Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039EB3A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039EB40
 * Original: 0x0039EB40 - 0x0039EB6C (44 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039EB40: ;
    edx = 0x4934A8;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x45);
    /* nop */

loc_0039EB50: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0039EB50; /* jne: not equal / not zero */

loc_0039EB66: ;
    MEM32(0xBF8404) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EB70
 * Original: 0x0039EB70 - 0x0039EBC7 (87 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039EB70: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x49348C);
    PUSH32(esp, 0x4D92E8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039EB81u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_0039EB81: ;
    MEM8(0x4D9307) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039EB8Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039EB8D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4D92D8;
    MEM32(0x4D92D8) = eax;
    MEM32(0x4D92DC) = eax;
    MEM32(0x4D92E4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4D92E0) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4D92E0);
    PUSH32(esp, 0x3ADE30);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039EBC3u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_0039EBC3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039EBD0
 * Original: 0x0039EBD0 - 0x0039EBE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EBD0(void)
{
    int _cf = 0; /* carry flag */

loc_0039EBD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8410) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EBF0
 * Original: 0x0039EBF0 - 0x0039EC01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EBF0(void)
{
    int _cf = 0; /* carry flag */

loc_0039EBF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8418) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EC10
 * Original: 0x0039EC10 - 0x0039EC21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EC10(void)
{
    int _cf = 0; /* carry flag */

loc_0039EC10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8414) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EC30
 * Original: 0x0039EC30 - 0x0039EC49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EC30(void)
{
    int _cf = 0; /* carry flag */

loc_0039EC30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8410); /* divss */
    MEMF(0xBF841C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EC50
 * Original: 0x0039EC50 - 0x0039EC69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EC50(void)
{
    int _cf = 0; /* carry flag */

loc_0039EC50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8418); /* divss */
    MEMF(0xBF8420) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EC70
 * Original: 0x0039EC70 - 0x0039ECC7 (87 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039EC70: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x493548);
    PUSH32(esp, 0x4D9380);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039EC81u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_0039EC81: ;
    MEM8(0x4D939F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039EC8Du); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039EC8D: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4D9370;
    MEM32(0x4D9370) = eax;
    MEM32(0x4D9374) = eax;
    MEM32(0x4D937C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4D9378) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4D9378);
    PUSH32(esp, 0x3ADE40);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039ECC3u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_0039ECC3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039ECD0
 * Original: 0x0039ECD0 - 0x0039ECFC (44 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039ECD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039ECD0: ;
    edx = 0x493548;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x45);
    /* nop */

loc_0039ECE0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0039ECE0; /* jne: not equal / not zero */

loc_0039ECF6: ;
    MEM32(0xBF8424) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039ED00
 * Original: 0x0039ED00 - 0x0039ED2C (44 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039ED00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039ED00: ;
    edx = 0x493530;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x45);
    /* nop */

loc_0039ED10: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0039ED10; /* jne: not equal / not zero */

loc_0039ED26: ;
    MEM32(0xBF840C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039ED30
 * Original: 0x0039ED30 - 0x0039ED41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039ED30(void)
{
    int _cf = 0; /* carry flag */

loc_0039ED30: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8428) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039ED50
 * Original: 0x0039ED50 - 0x0039ED61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039ED50(void)
{
    int _cf = 0; /* carry flag */

loc_0039ED50: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8430) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039ED70
 * Original: 0x0039ED70 - 0x0039ED81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039ED70(void)
{
    int _cf = 0; /* carry flag */

loc_0039ED70: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF842C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039ED90
 * Original: 0x0039ED90 - 0x0039EDA9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039ED90(void)
{
    int _cf = 0; /* carry flag */

loc_0039ED90: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8428); /* divss */
    MEMF(0xBF8434) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EDB0
 * Original: 0x0039EDB0 - 0x0039EDC9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EDB0(void)
{
    int _cf = 0; /* carry flag */

loc_0039EDB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8430); /* divss */
    MEMF(0xBF8438) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EDD0
 * Original: 0x0039EDD0 - 0x0039EE27 (87 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EDD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039EDD0: ;
    PUSH32(esp, 0x1F);
    PUSH32(esp, 0x4935DC);
    PUSH32(esp, 0x4D9410);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039EDE1u); RECOMP_ABI_CALL(0x00372E60u, sub_00372E60); /* call 0x00372E60 */

loc_0039EDE1: ;
    MEM8(0x4D942F) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039EDEDu); RECOMP_ABI_CALL(0x002D5900u, sub_002D5900); /* call 0x002D5900 */

loc_0039EDED: ;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x4D9400;
    MEM32(0x4D9400) = eax;
    MEM32(0x4D9404) = eax;
    MEM32(0x4D940C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(0x4D9408) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x4D9408);
    PUSH32(esp, 0x3ADE50);
    MEM32(eax + 4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039EE23u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_0039EE23: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039EE30
 * Original: 0x0039EE30 - 0x0039EE5C (44 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039EE30: ;
    edx = 0x4935DC;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x45);
    /* nop */

loc_0039EE40: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0039EE40; /* jne: not equal / not zero */

loc_0039EE56: ;
    MEM32(0xBF8440) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EE60
 * Original: 0x0039EE60 - 0x0039EE8C (44 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039EE60: ;
    edx = 0x4935C4;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x45);
    /* nop */

loc_0039EE70: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0039EE70; /* jne: not equal / not zero */

loc_0039EE86: ;
    MEM32(0xBF843C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EE90
 * Original: 0x0039EE90 - 0x0039EEA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EE90(void)
{
    int _cf = 0; /* carry flag */

loc_0039EE90: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8450) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EEB0
 * Original: 0x0039EEB0 - 0x0039EEC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EEB0(void)
{
    int _cf = 0; /* carry flag */

loc_0039EEB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8458) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EED0
 * Original: 0x0039EED0 - 0x0039EEE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EED0(void)
{
    int _cf = 0; /* carry flag */

loc_0039EED0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8454) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EEF0
 * Original: 0x0039EEF0 - 0x0039EF09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EEF0(void)
{
    int _cf = 0; /* carry flag */

loc_0039EEF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8450); /* divss */
    MEMF(0xBF845C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EF10
 * Original: 0x0039EF10 - 0x0039EF29 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EF10(void)
{
    int _cf = 0; /* carry flag */

loc_0039EF10: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8458); /* divss */
    MEMF(0xBF8460) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EF30
 * Original: 0x0039EF30 - 0x0039EF41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EF30(void)
{
    int _cf = 0; /* carry flag */

loc_0039EF30: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBF8468) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EF50
 * Original: 0x0039EF50 - 0x0039EF61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EF50(void)
{
    int _cf = 0; /* carry flag */

loc_0039EF50: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBF8448) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EF70
 * Original: 0x0039EF70 - 0x0039EF89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EF70(void)
{
    int _cf = 0; /* carry flag */

loc_0039EF70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8448); /* divss */
    MEMF(0xBF8444) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EF90
 * Original: 0x0039EF90 - 0x0039EFAD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EF90(void)
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

loc_0039EF90: ;
    fp_push(MEMF(0xBF8448)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039EFA7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039EFA7: ;
    MEM32(0xBF8464) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0039EFB0
 * Original: 0x0039EFB0 - 0x0039EFCD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EFB0(void)
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

loc_0039EFB0: ;
    fp_push(MEMF(0xBF8448)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039EFC7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039EFC7: ;
    MEM32(0xBF844C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0039EFD0
 * Original: 0x0039EFD0 - 0x0039EFE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EFD0(void)
{
    int _cf = 0; /* carry flag */

loc_0039EFD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF84E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039EFF0
 * Original: 0x0039EFF0 - 0x0039F001 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039EFF0(void)
{
    int _cf = 0; /* carry flag */

loc_0039EFF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF84E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F010
 * Original: 0x0039F010 - 0x0039F021 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F010(void)
{
    int _cf = 0; /* carry flag */

loc_0039F010: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF84E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F030
 * Original: 0x0039F030 - 0x0039F049 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F030(void)
{
    int _cf = 0; /* carry flag */

loc_0039F030: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF84E0); /* divss */
    MEMF(0xBF84EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F050
 * Original: 0x0039F050 - 0x0039F069 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F050(void)
{
    int _cf = 0; /* carry flag */

loc_0039F050: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF84E8); /* divss */
    MEMF(0xBF84F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F070
 * Original: 0x0039F070 - 0x0039F081 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F070(void)
{
    int _cf = 0; /* carry flag */

loc_0039F070: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBF84F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F090
 * Original: 0x0039F090 - 0x0039F0A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F090(void)
{
    int _cf = 0; /* carry flag */

loc_0039F090: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBF84D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F0B0
 * Original: 0x0039F0B0 - 0x0039F0C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F0B0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F0B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF84D8); /* divss */
    MEMF(0xBF84CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F0D0
 * Original: 0x0039F0D0 - 0x0039F0ED (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F0D0(void)
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

loc_0039F0D0: ;
    fp_push(MEMF(0xBF84D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F0E7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039F0E7: ;
    MEM32(0xBF84F4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0039F0F0
 * Original: 0x0039F0F0 - 0x0039F10D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F0F0(void)
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

loc_0039F0F0: ;
    fp_push(MEMF(0xBF84D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F107u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039F107: ;
    MEM32(0xBF84DC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0039F110
 * Original: 0x0039F110 - 0x0039F12B (27 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039F110: ;
    SET_LO8(edx, MEM8(0xBF84C4));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & ((0xFE) & 0xFFu));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x3ADE60);
    MEM8(0xBF84C4) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039F129u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0039F129: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0039F130
 * Original: 0x0039F130 - 0x0039F13E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039F130: ;
    eax = 0x5321FB;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0xBF84D0) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F140
 * Original: 0x0039F140 - 0x0039F14E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039F140: ;
    eax = 0x531453;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0xBF84D4) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F150
 * Original: 0x0039F150 - 0x0039F15E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0039F150: ;
    eax = 0x53130B;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0xBF84C8) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F160
 * Original: 0x0039F160 - 0x0039F171 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F160(void)
{
    int _cf = 0; /* carry flag */

loc_0039F160: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF84FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F180
 * Original: 0x0039F180 - 0x0039F191 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F180(void)
{
    int _cf = 0; /* carry flag */

loc_0039F180: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8504) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F1A0
 * Original: 0x0039F1A0 - 0x0039F1B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F1A0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F1A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8500) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F1C0
 * Original: 0x0039F1C0 - 0x0039F1D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F1C0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F1C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF84FC); /* divss */
    MEMF(0xBF8508) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F1E0
 * Original: 0x0039F1E0 - 0x0039F1F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F1E0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F1E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8504); /* divss */
    MEMF(0xBF850C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F200
 * Original: 0x0039F200 - 0x0039F211 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F200(void)
{
    int _cf = 0; /* carry flag */

loc_0039F200: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8510) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F220
 * Original: 0x0039F220 - 0x0039F231 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F220(void)
{
    int _cf = 0; /* carry flag */

loc_0039F220: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8518) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F240
 * Original: 0x0039F240 - 0x0039F251 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F240(void)
{
    int _cf = 0; /* carry flag */

loc_0039F240: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8514) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F260
 * Original: 0x0039F260 - 0x0039F279 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F260(void)
{
    int _cf = 0; /* carry flag */

loc_0039F260: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8510); /* divss */
    MEMF(0xBF851C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F280
 * Original: 0x0039F280 - 0x0039F299 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F280(void)
{
    int _cf = 0; /* carry flag */

loc_0039F280: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8518); /* divss */
    MEMF(0xBF8520) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F2A0
 * Original: 0x0039F2A0 - 0x0039F2B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F2A0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F2A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8524) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F2C0
 * Original: 0x0039F2C0 - 0x0039F2D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F2C0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F2C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF852C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F2E0
 * Original: 0x0039F2E0 - 0x0039F2F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F2E0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F2E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8528) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F300
 * Original: 0x0039F300 - 0x0039F319 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F300(void)
{
    int _cf = 0; /* carry flag */

loc_0039F300: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8524); /* divss */
    MEMF(0xBF8530) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F320
 * Original: 0x0039F320 - 0x0039F339 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F320(void)
{
    int _cf = 0; /* carry flag */

loc_0039F320: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF852C); /* divss */
    MEMF(0xBF8534) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F340
 * Original: 0x0039F340 - 0x0039F351 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F340(void)
{
    int _cf = 0; /* carry flag */

loc_0039F340: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF8538) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F360
 * Original: 0x0039F360 - 0x0039F371 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F360(void)
{
    int _cf = 0; /* carry flag */

loc_0039F360: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8540) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F380
 * Original: 0x0039F380 - 0x0039F391 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F380(void)
{
    int _cf = 0; /* carry flag */

loc_0039F380: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF853C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F3A0
 * Original: 0x0039F3A0 - 0x0039F3B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F3A0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F3A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8538); /* divss */
    MEMF(0xBF8544) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F3C0
 * Original: 0x0039F3C0 - 0x0039F3D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F3C0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F3C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBF8540); /* divss */
    MEMF(0xBF8548) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F3E0
 * Original: 0x0039F3E0 - 0x0039F3F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F3E0(void)
{
    int _cf = 0; /* carry flag */

loc_0039F3E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBF854C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F400
 * Original: 0x0039F400 - 0x0039F411 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F400(void)
{
    int _cf = 0; /* carry flag */

loc_0039F400: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBF8554) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0039F420
 * Original: 0x0039F420 - 0x0039F431 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039F420(void)
{
    int _cf = 0; /* carry flag */

loc_0039F420: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBF8550) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}
