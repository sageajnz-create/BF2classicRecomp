/**
 * Star Wars Battlefront 2 - Recompiled code chunk 56
 * Functions: 250 (0x00388FD0 - 0x0038AF70)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00388FD0
 * Original: 0x00388FD0 - 0x00388FE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388FD0(void)
{
    int _cf = 0; /* carry flag */

loc_00388FD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA298C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00388FF0
 * Original: 0x00388FF0 - 0x00389009 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00388FF0(void)
{
    int _cf = 0; /* carry flag */

loc_00388FF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2988); /* divss */
    MEMF(0xBA2994) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389010
 * Original: 0x00389010 - 0x00389029 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389010(void)
{
    int _cf = 0; /* carry flag */

loc_00389010: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2990); /* divss */
    MEMF(0xBA2998) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389030
 * Original: 0x00389030 - 0x00389041 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389030(void)
{
    int _cf = 0; /* carry flag */

loc_00389030: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA29A0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389050
 * Original: 0x00389050 - 0x00389061 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389050(void)
{
    int _cf = 0; /* carry flag */

loc_00389050: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2980) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389070
 * Original: 0x00389070 - 0x00389089 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389070(void)
{
    int _cf = 0; /* carry flag */

loc_00389070: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2980); /* divss */
    MEMF(0xBA2978) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389090
 * Original: 0x00389090 - 0x003890AD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389090(void)
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

loc_00389090: ;
    fp_push(MEMF(0xBA2980)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003890A7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003890A7: ;
    MEM32(0xBA299C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003890B0
 * Original: 0x003890B0 - 0x003890CD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003890B0(void)
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

loc_003890B0: ;
    fp_push(MEMF(0xBA2980)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003890C7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003890C7: ;
    MEM32(0xBA2984) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003890D0
 * Original: 0x003890D0 - 0x003890FC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003890D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003890D0: ;
    edx = 0x4895EC;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x55);
    /* nop */

loc_003890E0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003890E0; /* jne: not equal / not zero */

loc_003890F6: ;
    MEM32(0xBA297C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00389100
 * Original: 0x00389100 - 0x00389111 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389100(void)
{
    int _cf = 0; /* carry flag */

loc_00389100: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA29B4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389120
 * Original: 0x00389120 - 0x00389131 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389120(void)
{
    int _cf = 0; /* carry flag */

loc_00389120: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA29BC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389140
 * Original: 0x00389140 - 0x00389151 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389140(void)
{
    int _cf = 0; /* carry flag */

loc_00389140: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA29B8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389160
 * Original: 0x00389160 - 0x00389179 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389160(void)
{
    int _cf = 0; /* carry flag */

loc_00389160: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA29B4); /* divss */
    MEMF(0xBA29C0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389180
 * Original: 0x00389180 - 0x00389199 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389180(void)
{
    int _cf = 0; /* carry flag */

loc_00389180: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA29BC); /* divss */
    MEMF(0xBA29C4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003891A0
 * Original: 0x003891A0 - 0x003891B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003891A0(void)
{
    int _cf = 0; /* carry flag */

loc_003891A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA29CC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003891C0
 * Original: 0x003891C0 - 0x003891D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003891C0(void)
{
    int _cf = 0; /* carry flag */

loc_003891C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA29AC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003891E0
 * Original: 0x003891E0 - 0x003891F9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003891E0(void)
{
    int _cf = 0; /* carry flag */

loc_003891E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA29AC); /* divss */
    MEMF(0xBA29A8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389200
 * Original: 0x00389200 - 0x0038921D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389200(void)
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

loc_00389200: ;
    fp_push(MEMF(0xBA29AC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389217u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389217: ;
    MEM32(0xBA29C8) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389220
 * Original: 0x00389220 - 0x0038923D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389220(void)
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

loc_00389220: ;
    fp_push(MEMF(0xBA29AC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389237u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389237: ;
    MEM32(0xBA29B0) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389240
 * Original: 0x00389240 - 0x0038926C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00389240: ;
    edx = 0x489654;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x55);
    /* nop */

loc_00389250: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00389250; /* jne: not equal / not zero */

loc_00389266: ;
    MEM32(0xBA29A4) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00389270
 * Original: 0x00389270 - 0x00389281 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389270(void)
{
    int _cf = 0; /* carry flag */

loc_00389270: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA29E0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389290
 * Original: 0x00389290 - 0x003892A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389290(void)
{
    int _cf = 0; /* carry flag */

loc_00389290: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA29E8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003892B0
 * Original: 0x003892B0 - 0x003892C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003892B0(void)
{
    int _cf = 0; /* carry flag */

loc_003892B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA29E4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003892D0
 * Original: 0x003892D0 - 0x003892E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003892D0(void)
{
    int _cf = 0; /* carry flag */

loc_003892D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA29E0); /* divss */
    MEMF(0xBA29EC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003892F0
 * Original: 0x003892F0 - 0x00389309 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003892F0(void)
{
    int _cf = 0; /* carry flag */

loc_003892F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA29E8); /* divss */
    MEMF(0xBA29F0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389310
 * Original: 0x00389310 - 0x00389321 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389310(void)
{
    int _cf = 0; /* carry flag */

loc_00389310: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA29F8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389330
 * Original: 0x00389330 - 0x00389341 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389330(void)
{
    int _cf = 0; /* carry flag */

loc_00389330: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA29D8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389350
 * Original: 0x00389350 - 0x00389369 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389350(void)
{
    int _cf = 0; /* carry flag */

loc_00389350: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA29D8); /* divss */
    MEMF(0xBA29D4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389370
 * Original: 0x00389370 - 0x0038938D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389370(void)
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

loc_00389370: ;
    fp_push(MEMF(0xBA29D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389387u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389387: ;
    MEM32(0xBA29F4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389390
 * Original: 0x00389390 - 0x003893AD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389390(void)
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

loc_00389390: ;
    fp_push(MEMF(0xBA29D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003893A7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003893A7: ;
    MEM32(0xBA29DC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003893B0
 * Original: 0x003893B0 - 0x003893DC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003893B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003893B0: ;
    edx = 0x4896BC;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x55);
    /* nop */

loc_003893C0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003893C0; /* jne: not equal / not zero */

loc_003893D6: ;
    MEM32(0xBA29D0) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003893E0
 * Original: 0x003893E0 - 0x003893F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003893E0(void)
{
    int _cf = 0; /* carry flag */

loc_003893E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2A0C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389400
 * Original: 0x00389400 - 0x00389411 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389400(void)
{
    int _cf = 0; /* carry flag */

loc_00389400: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2A14) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389420
 * Original: 0x00389420 - 0x00389431 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389420(void)
{
    int _cf = 0; /* carry flag */

loc_00389420: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2A10) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389440
 * Original: 0x00389440 - 0x00389459 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389440(void)
{
    int _cf = 0; /* carry flag */

loc_00389440: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2A0C); /* divss */
    MEMF(0xBA2A18) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389460
 * Original: 0x00389460 - 0x00389479 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389460(void)
{
    int _cf = 0; /* carry flag */

loc_00389460: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2A14); /* divss */
    MEMF(0xBA2A1C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389480
 * Original: 0x00389480 - 0x00389491 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389480(void)
{
    int _cf = 0; /* carry flag */

loc_00389480: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2A24) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003894A0
 * Original: 0x003894A0 - 0x003894B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003894A0(void)
{
    int _cf = 0; /* carry flag */

loc_003894A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2A04) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003894C0
 * Original: 0x003894C0 - 0x003894D9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003894C0(void)
{
    int _cf = 0; /* carry flag */

loc_003894C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2A04); /* divss */
    MEMF(0xBA29FC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003894E0
 * Original: 0x003894E0 - 0x003894FD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003894E0(void)
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

loc_003894E0: ;
    fp_push(MEMF(0xBA2A04)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003894F7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003894F7: ;
    MEM32(0xBA2A20) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389500
 * Original: 0x00389500 - 0x0038951D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389500(void)
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

loc_00389500: ;
    fp_push(MEMF(0xBA2A04)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389517u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389517: ;
    MEM32(0xBA2A08) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389520
 * Original: 0x00389520 - 0x0038954C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00389520: ;
    edx = 0x489724;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x55);
    /* nop */

loc_00389530: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00389530; /* jne: not equal / not zero */

loc_00389546: ;
    MEM32(0xBA2A00) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00389550
 * Original: 0x00389550 - 0x00389561 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389550(void)
{
    int _cf = 0; /* carry flag */

loc_00389550: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2A34) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389570
 * Original: 0x00389570 - 0x00389581 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389570(void)
{
    int _cf = 0; /* carry flag */

loc_00389570: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2A3C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389590
 * Original: 0x00389590 - 0x003895A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389590(void)
{
    int _cf = 0; /* carry flag */

loc_00389590: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2A38) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003895B0
 * Original: 0x003895B0 - 0x003895C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003895B0(void)
{
    int _cf = 0; /* carry flag */

loc_003895B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2A34); /* divss */
    MEMF(0xBA2A40) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003895D0
 * Original: 0x003895D0 - 0x003895E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003895D0(void)
{
    int _cf = 0; /* carry flag */

loc_003895D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2A3C); /* divss */
    MEMF(0xBA2A44) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003895F0
 * Original: 0x003895F0 - 0x00389601 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003895F0(void)
{
    int _cf = 0; /* carry flag */

loc_003895F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2A50) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389610
 * Original: 0x00389610 - 0x00389621 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389610(void)
{
    int _cf = 0; /* carry flag */

loc_00389610: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2A2C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389630
 * Original: 0x00389630 - 0x00389649 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389630(void)
{
    int _cf = 0; /* carry flag */

loc_00389630: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2A2C); /* divss */
    MEMF(0xBA2A28) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389650
 * Original: 0x00389650 - 0x0038966D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389650(void)
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

loc_00389650: ;
    fp_push(MEMF(0xBA2A2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389667u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389667: ;
    MEM32(0xBA2A48) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389670
 * Original: 0x00389670 - 0x0038968D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389670(void)
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

loc_00389670: ;
    fp_push(MEMF(0xBA2A2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389687u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389687: ;
    MEM32(0xBA2A30) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389690
 * Original: 0x00389690 - 0x003896BC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00389690: ;
    edx = 0x48978C;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x55);
    /* nop */

loc_003896A0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003896A0; /* jne: not equal / not zero */

loc_003896B6: ;
    MEM32(0xBA2A4C) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003896C0
 * Original: 0x003896C0 - 0x003896D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003896C0(void)
{
    int _cf = 0; /* carry flag */

loc_003896C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2A60) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003896E0
 * Original: 0x003896E0 - 0x003896F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003896E0(void)
{
    int _cf = 0; /* carry flag */

loc_003896E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2A68) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389700
 * Original: 0x00389700 - 0x00389711 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389700(void)
{
    int _cf = 0; /* carry flag */

loc_00389700: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2A64) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389720
 * Original: 0x00389720 - 0x00389739 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389720(void)
{
    int _cf = 0; /* carry flag */

loc_00389720: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2A60); /* divss */
    MEMF(0xBA2A6C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389740
 * Original: 0x00389740 - 0x00389759 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389740(void)
{
    int _cf = 0; /* carry flag */

loc_00389740: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2A68); /* divss */
    MEMF(0xBA2A70) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389760
 * Original: 0x00389760 - 0x00389771 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389760(void)
{
    int _cf = 0; /* carry flag */

loc_00389760: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2A7C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389780
 * Original: 0x00389780 - 0x00389791 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389780(void)
{
    int _cf = 0; /* carry flag */

loc_00389780: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2A58) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003897A0
 * Original: 0x003897A0 - 0x003897B9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003897A0(void)
{
    int _cf = 0; /* carry flag */

loc_003897A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2A58); /* divss */
    MEMF(0xBA2A54) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003897C0
 * Original: 0x003897C0 - 0x003897DD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003897C0(void)
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

loc_003897C0: ;
    fp_push(MEMF(0xBA2A58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003897D7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003897D7: ;
    MEM32(0xBA2A74) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003897E0
 * Original: 0x003897E0 - 0x003897FD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003897E0(void)
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

loc_003897E0: ;
    fp_push(MEMF(0xBA2A58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003897F7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_003897F7: ;
    MEM32(0xBA2A5C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389800
 * Original: 0x00389800 - 0x0038982C (44 bytes, 14 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00389800: ;
    edx = 0x4897F4;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x55);
    /* nop */

loc_00389810: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00389810; /* jne: not equal / not zero */

loc_00389826: ;
    MEM32(0xBA2A78) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00389830
 * Original: 0x00389830 - 0x00389841 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389830(void)
{
    int _cf = 0; /* carry flag */

loc_00389830: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2A8C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389850
 * Original: 0x00389850 - 0x00389861 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389850(void)
{
    int _cf = 0; /* carry flag */

loc_00389850: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2A94) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389870
 * Original: 0x00389870 - 0x00389881 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389870(void)
{
    int _cf = 0; /* carry flag */

loc_00389870: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2A90) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389890
 * Original: 0x00389890 - 0x003898A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389890(void)
{
    int _cf = 0; /* carry flag */

loc_00389890: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2A8C); /* divss */
    MEMF(0xBA2A98) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003898B0
 * Original: 0x003898B0 - 0x003898C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003898B0(void)
{
    int _cf = 0; /* carry flag */

loc_003898B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2A94); /* divss */
    MEMF(0xBA2A9C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003898D0
 * Original: 0x003898D0 - 0x003898E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003898D0(void)
{
    int _cf = 0; /* carry flag */

loc_003898D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2AA8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003898F0
 * Original: 0x003898F0 - 0x00389901 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003898F0(void)
{
    int _cf = 0; /* carry flag */

loc_003898F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2A84) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389910
 * Original: 0x00389910 - 0x00389929 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389910(void)
{
    int _cf = 0; /* carry flag */

loc_00389910: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2A84); /* divss */
    MEMF(0xBA2A80) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389930
 * Original: 0x00389930 - 0x0038994D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389930(void)
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

loc_00389930: ;
    fp_push(MEMF(0xBA2A84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389947u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389947: ;
    MEM32(0xBA2AA0) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389950
 * Original: 0x00389950 - 0x0038996D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389950(void)
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

loc_00389950: ;
    fp_push(MEMF(0xBA2A84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389967u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389967: ;
    MEM32(0xBA2A88) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389970
 * Original: 0x00389970 - 0x0038999C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00389970: ;
    edx = 0x48985C;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x55);
    /* nop */

loc_00389980: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00389980; /* jne: not equal / not zero */

loc_00389996: ;
    MEM32(0xBA2AA4) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003899A0
 * Original: 0x003899A0 - 0x003899B1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003899A0(void)
{
    int _cf = 0; /* carry flag */

loc_003899A0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2ABC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003899C0
 * Original: 0x003899C0 - 0x003899D1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003899C0(void)
{
    int _cf = 0; /* carry flag */

loc_003899C0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2AC4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003899E0
 * Original: 0x003899E0 - 0x003899F1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003899E0(void)
{
    int _cf = 0; /* carry flag */

loc_003899E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2AC0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389A00
 * Original: 0x00389A00 - 0x00389A19 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389A00(void)
{
    int _cf = 0; /* carry flag */

loc_00389A00: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2ABC); /* divss */
    MEMF(0xBA2AC8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389A20
 * Original: 0x00389A20 - 0x00389A39 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389A20(void)
{
    int _cf = 0; /* carry flag */

loc_00389A20: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2AC4); /* divss */
    MEMF(0xBA2ACC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389A40
 * Original: 0x00389A40 - 0x00389A51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389A40(void)
{
    int _cf = 0; /* carry flag */

loc_00389A40: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2AD4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389A60
 * Original: 0x00389A60 - 0x00389A71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389A60(void)
{
    int _cf = 0; /* carry flag */

loc_00389A60: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2AB4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389A80
 * Original: 0x00389A80 - 0x00389A99 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389A80(void)
{
    int _cf = 0; /* carry flag */

loc_00389A80: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2AB4); /* divss */
    MEMF(0xBA2AAC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389AA0
 * Original: 0x00389AA0 - 0x00389ABD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389AA0(void)
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

loc_00389AA0: ;
    fp_push(MEMF(0xBA2AB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389AB7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389AB7: ;
    MEM32(0xBA2AD0) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389AC0
 * Original: 0x00389AC0 - 0x00389ADD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389AC0(void)
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

loc_00389AC0: ;
    fp_push(MEMF(0xBA2AB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389AD7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389AD7: ;
    MEM32(0xBA2AB8) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389AE0
 * Original: 0x00389AE0 - 0x00389B0C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00389AE0: ;
    edx = 0x4898C4;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x55);
    /* nop */

loc_00389AF0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00389AF0; /* jne: not equal / not zero */

loc_00389B06: ;
    MEM32(0xBA2AB0) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00389B10
 * Original: 0x00389B10 - 0x00389B21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389B10(void)
{
    int _cf = 0; /* carry flag */

loc_00389B10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2AE8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389B30
 * Original: 0x00389B30 - 0x00389B41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389B30(void)
{
    int _cf = 0; /* carry flag */

loc_00389B30: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2AF0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389B50
 * Original: 0x00389B50 - 0x00389B61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389B50(void)
{
    int _cf = 0; /* carry flag */

loc_00389B50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2AEC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389B70
 * Original: 0x00389B70 - 0x00389B89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389B70(void)
{
    int _cf = 0; /* carry flag */

loc_00389B70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2AE8); /* divss */
    MEMF(0xBA2AF4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389B90
 * Original: 0x00389B90 - 0x00389BA9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389B90(void)
{
    int _cf = 0; /* carry flag */

loc_00389B90: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2AF0); /* divss */
    MEMF(0xBA2AF8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389BB0
 * Original: 0x00389BB0 - 0x00389BC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389BB0(void)
{
    int _cf = 0; /* carry flag */

loc_00389BB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2B00) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389BD0
 * Original: 0x00389BD0 - 0x00389BE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389BD0(void)
{
    int _cf = 0; /* carry flag */

loc_00389BD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2AE0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389BF0
 * Original: 0x00389BF0 - 0x00389C09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389BF0(void)
{
    int _cf = 0; /* carry flag */

loc_00389BF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2AE0); /* divss */
    MEMF(0xBA2AD8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389C10
 * Original: 0x00389C10 - 0x00389C2D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389C10(void)
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

loc_00389C10: ;
    fp_push(MEMF(0xBA2AE0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389C27u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389C27: ;
    MEM32(0xBA2AFC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389C30
 * Original: 0x00389C30 - 0x00389C4D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389C30(void)
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

loc_00389C30: ;
    fp_push(MEMF(0xBA2AE0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389C47u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389C47: ;
    MEM32(0xBA2AE4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389C50
 * Original: 0x00389C50 - 0x00389C7C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00389C50: ;
    edx = 0x48992C;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x55);
    /* nop */

loc_00389C60: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00389C60; /* jne: not equal / not zero */

loc_00389C76: ;
    MEM32(0xBA2ADC) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00389C80
 * Original: 0x00389C80 - 0x00389C91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389C80(void)
{
    int _cf = 0; /* carry flag */

loc_00389C80: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2B14) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389CA0
 * Original: 0x00389CA0 - 0x00389CB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389CA0(void)
{
    int _cf = 0; /* carry flag */

loc_00389CA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2B1C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389CC0
 * Original: 0x00389CC0 - 0x00389CD1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389CC0(void)
{
    int _cf = 0; /* carry flag */

loc_00389CC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2B18) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389CE0
 * Original: 0x00389CE0 - 0x00389CF9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389CE0(void)
{
    int _cf = 0; /* carry flag */

loc_00389CE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2B14); /* divss */
    MEMF(0xBA2B20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389D00
 * Original: 0x00389D00 - 0x00389D19 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389D00(void)
{
    int _cf = 0; /* carry flag */

loc_00389D00: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2B1C); /* divss */
    MEMF(0xBA2B24) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389D20
 * Original: 0x00389D20 - 0x00389D31 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389D20(void)
{
    int _cf = 0; /* carry flag */

loc_00389D20: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2B2C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389D40
 * Original: 0x00389D40 - 0x00389D51 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389D40(void)
{
    int _cf = 0; /* carry flag */

loc_00389D40: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2B0C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389D60
 * Original: 0x00389D60 - 0x00389D79 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389D60(void)
{
    int _cf = 0; /* carry flag */

loc_00389D60: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2B0C); /* divss */
    MEMF(0xBA2B08) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389D80
 * Original: 0x00389D80 - 0x00389D9D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389D80(void)
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

loc_00389D80: ;
    fp_push(MEMF(0xBA2B0C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389D97u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389D97: ;
    MEM32(0xBA2B28) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389DA0
 * Original: 0x00389DA0 - 0x00389DBD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389DA0(void)
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

loc_00389DA0: ;
    fp_push(MEMF(0xBA2B0C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389DB7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389DB7: ;
    MEM32(0xBA2B10) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389DC0
 * Original: 0x00389DC0 - 0x00389DEC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00389DC0: ;
    edx = 0x489994;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x55);
    /* nop */

loc_00389DD0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00389DD0; /* jne: not equal / not zero */

loc_00389DE6: ;
    MEM32(0xBA2B04) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00389DF0
 * Original: 0x00389DF0 - 0x00389E01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389DF0(void)
{
    int _cf = 0; /* carry flag */

loc_00389DF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2B3C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389E10
 * Original: 0x00389E10 - 0x00389E21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389E10(void)
{
    int _cf = 0; /* carry flag */

loc_00389E10: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2B44) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389E30
 * Original: 0x00389E30 - 0x00389E41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389E30(void)
{
    int _cf = 0; /* carry flag */

loc_00389E30: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2B40) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389E50
 * Original: 0x00389E50 - 0x00389E69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389E50(void)
{
    int _cf = 0; /* carry flag */

loc_00389E50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2B3C); /* divss */
    MEMF(0xBA2B48) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389E70
 * Original: 0x00389E70 - 0x00389E89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389E70(void)
{
    int _cf = 0; /* carry flag */

loc_00389E70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2B44); /* divss */
    MEMF(0xBA2B4C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389E90
 * Original: 0x00389E90 - 0x00389EA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389E90(void)
{
    int _cf = 0; /* carry flag */

loc_00389E90: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2B58) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389EB0
 * Original: 0x00389EB0 - 0x00389EC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389EB0(void)
{
    int _cf = 0; /* carry flag */

loc_00389EB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2B34) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389ED0
 * Original: 0x00389ED0 - 0x00389EE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389ED0(void)
{
    int _cf = 0; /* carry flag */

loc_00389ED0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2B34); /* divss */
    MEMF(0xBA2B30) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389EF0
 * Original: 0x00389EF0 - 0x00389F0D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389EF0(void)
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

loc_00389EF0: ;
    fp_push(MEMF(0xBA2B34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389F07u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389F07: ;
    MEM32(0xBA2B50) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389F10
 * Original: 0x00389F10 - 0x00389F2D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389F10(void)
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

loc_00389F10: ;
    fp_push(MEMF(0xBA2B34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00389F27u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00389F27: ;
    MEM32(0xBA2B38) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00389F30
 * Original: 0x00389F30 - 0x00389F5C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00389F30: ;
    edx = 0x4899FC;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x55);
    /* nop */

loc_00389F40: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00389F40; /* jne: not equal / not zero */

loc_00389F56: ;
    MEM32(0xBA2B54) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00389F60
 * Original: 0x00389F60 - 0x00389F71 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389F60(void)
{
    int _cf = 0; /* carry flag */

loc_00389F60: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2B6C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389F80
 * Original: 0x00389F80 - 0x00389F91 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389F80(void)
{
    int _cf = 0; /* carry flag */

loc_00389F80: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2B74) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389FA0
 * Original: 0x00389FA0 - 0x00389FB1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389FA0(void)
{
    int _cf = 0; /* carry flag */

loc_00389FA0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2B70) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389FC0
 * Original: 0x00389FC0 - 0x00389FD9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389FC0(void)
{
    int _cf = 0; /* carry flag */

loc_00389FC0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2B6C); /* divss */
    MEMF(0xBA2B78) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00389FE0
 * Original: 0x00389FE0 - 0x00389FF9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00389FE0(void)
{
    int _cf = 0; /* carry flag */

loc_00389FE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2B74); /* divss */
    MEMF(0xBA2B7C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A000
 * Original: 0x0038A000 - 0x0038A011 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A000(void)
{
    int _cf = 0; /* carry flag */

loc_0038A000: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2B84) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A020
 * Original: 0x0038A020 - 0x0038A031 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A020(void)
{
    int _cf = 0; /* carry flag */

loc_0038A020: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2B64) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A040
 * Original: 0x0038A040 - 0x0038A059 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A040(void)
{
    int _cf = 0; /* carry flag */

loc_0038A040: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2B64); /* divss */
    MEMF(0xBA2B5C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A060
 * Original: 0x0038A060 - 0x0038A07D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A060(void)
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

loc_0038A060: ;
    fp_push(MEMF(0xBA2B64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A077u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A077: ;
    MEM32(0xBA2B80) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A080
 * Original: 0x0038A080 - 0x0038A09D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A080(void)
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

loc_0038A080: ;
    fp_push(MEMF(0xBA2B64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A097u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A097: ;
    MEM32(0xBA2B68) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A0A0
 * Original: 0x0038A0A0 - 0x0038A0CC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0038A0A0: ;
    edx = 0x489A64;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x55);
    /* nop */

loc_0038A0B0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0038A0B0; /* jne: not equal / not zero */

loc_0038A0C6: ;
    MEM32(0xBA2B60) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A0D0
 * Original: 0x0038A0D0 - 0x0038A0E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A0D0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A0D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2B9C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A0F0
 * Original: 0x0038A0F0 - 0x0038A101 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A0F0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A0F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2BA4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A110
 * Original: 0x0038A110 - 0x0038A121 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A110(void)
{
    int _cf = 0; /* carry flag */

loc_0038A110: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2BA0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A130
 * Original: 0x0038A130 - 0x0038A149 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A130(void)
{
    int _cf = 0; /* carry flag */

loc_0038A130: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2B9C); /* divss */
    MEMF(0xBA2BA8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A150
 * Original: 0x0038A150 - 0x0038A169 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A150(void)
{
    int _cf = 0; /* carry flag */

loc_0038A150: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2BA4); /* divss */
    MEMF(0xBA2BAC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A170
 * Original: 0x0038A170 - 0x0038A181 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A170(void)
{
    int _cf = 0; /* carry flag */

loc_0038A170: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2BB8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A190
 * Original: 0x0038A190 - 0x0038A1A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A190(void)
{
    int _cf = 0; /* carry flag */

loc_0038A190: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2B94) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A1B0
 * Original: 0x0038A1B0 - 0x0038A1C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A1B0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A1B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2B94); /* divss */
    MEMF(0xBA2B88) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A1D0
 * Original: 0x0038A1D0 - 0x0038A1ED (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A1D0(void)
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

loc_0038A1D0: ;
    fp_push(MEMF(0xBA2B94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A1E7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A1E7: ;
    MEM32(0xBA2BB0) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A1F0
 * Original: 0x0038A1F0 - 0x0038A20D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A1F0(void)
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

loc_0038A1F0: ;
    fp_push(MEMF(0xBA2B94)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A207u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A207: ;
    MEM32(0xBA2B98) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A210
 * Original: 0x0038A210 - 0x0038A21B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A210(void)
{
    int _cf = 0; /* carry flag */

loc_0038A210: ;
    MEM32(0xBA2BB4) = 0xEA60;
    esp += 4; return; /* ret */

}

/**
 * sub_0038A220
 * Original: 0x0038A220 - 0x0038A22F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A220(void)
{
    int _cf = 0; /* carry flag */

loc_0038A220: ;
    eax = MEM32(0xBA2BB4);
    ecx = eax + eax;
    MEM32(0xBA2B8C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0038A230
 * Original: 0x0038A230 - 0x0038A241 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A230(void)
{
    int _cf = 0; /* carry flag */

loc_0038A230: ;
    xmm0 = XMM_SCALAR(MEMF(0x498554)); /* movss */
    MEMF(0xBA2B90) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A250
 * Original: 0x0038A250 - 0x0038A261 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A250(void)
{
    int _cf = 0; /* carry flag */

loc_0038A250: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2BC8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A270
 * Original: 0x0038A270 - 0x0038A281 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A270(void)
{
    int _cf = 0; /* carry flag */

loc_0038A270: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2BD0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A290
 * Original: 0x0038A290 - 0x0038A2A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A290(void)
{
    int _cf = 0; /* carry flag */

loc_0038A290: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2BCC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A2B0
 * Original: 0x0038A2B0 - 0x0038A2C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A2B0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A2B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2BC8); /* divss */
    MEMF(0xBA2BD4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A2D0
 * Original: 0x0038A2D0 - 0x0038A2E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A2D0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A2D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2BD0); /* divss */
    MEMF(0xBA2BD8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A2F0
 * Original: 0x0038A2F0 - 0x0038A301 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A2F0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A2F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2BBC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A310
 * Original: 0x0038A310 - 0x0038A321 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A310(void)
{
    int _cf = 0; /* carry flag */

loc_0038A310: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2BE0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A330
 * Original: 0x0038A330 - 0x0038A349 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A330(void)
{
    int _cf = 0; /* carry flag */

loc_0038A330: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2BE0); /* divss */
    MEMF(0xBA2BC0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A350
 * Original: 0x0038A350 - 0x0038A36D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A350(void)
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

loc_0038A350: ;
    fp_push(MEMF(0xBA2BE0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A367u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A367: ;
    MEM32(0xBA2BC4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A370
 * Original: 0x0038A370 - 0x0038A38D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A370(void)
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

loc_0038A370: ;
    fp_push(MEMF(0xBA2BE0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A387u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A387: ;
    MEM32(0xBA2BDC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A390
 * Original: 0x0038A390 - 0x0038A3A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A390(void)
{
    int _cf = 0; /* carry flag */

loc_0038A390: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2BEC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A3B0
 * Original: 0x0038A3B0 - 0x0038A3C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A3B0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A3B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2BF0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A3D0
 * Original: 0x0038A3D0 - 0x0038A3E9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A3D0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A3D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2BF0); /* divss */
    MEMF(0xBA2BE4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A3F0
 * Original: 0x0038A3F0 - 0x0038A40D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A3F0(void)
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

loc_0038A3F0: ;
    fp_push(MEMF(0xBA2BF0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A407u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A407: ;
    MEM32(0xBA2BE8) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A410
 * Original: 0x0038A410 - 0x0038A42D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A410(void)
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

loc_0038A410: ;
    fp_push(MEMF(0xBA2BF0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A427u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A427: ;
    MEM32(0xBA2C00) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A430
 * Original: 0x0038A430 - 0x0038A441 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A430(void)
{
    int _cf = 0; /* carry flag */

loc_0038A430: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2BF4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A450
 * Original: 0x0038A450 - 0x0038A461 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A450(void)
{
    int _cf = 0; /* carry flag */

loc_0038A450: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2C08) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A470
 * Original: 0x0038A470 - 0x0038A481 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A470(void)
{
    int _cf = 0; /* carry flag */

loc_0038A470: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2BF8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A490
 * Original: 0x0038A490 - 0x0038A4A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A490(void)
{
    int _cf = 0; /* carry flag */

loc_0038A490: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2BF4); /* divss */
    MEMF(0xBA2BFC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A4B0
 * Original: 0x0038A4B0 - 0x0038A4C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A4B0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A4B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2C08); /* divss */
    MEMF(0xBA2C04) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A4D0
 * Original: 0x0038A4D0 - 0x0038A4E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A4D0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A4D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2C18) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A4F0
 * Original: 0x0038A4F0 - 0x0038A501 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A4F0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A4F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2C20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A510
 * Original: 0x0038A510 - 0x0038A521 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A510(void)
{
    int _cf = 0; /* carry flag */

loc_0038A510: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2C1C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A530
 * Original: 0x0038A530 - 0x0038A549 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A530(void)
{
    int _cf = 0; /* carry flag */

loc_0038A530: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2C18); /* divss */
    MEMF(0xBA2C24) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A550
 * Original: 0x0038A550 - 0x0038A569 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A550(void)
{
    int _cf = 0; /* carry flag */

loc_0038A550: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2C20); /* divss */
    MEMF(0xBA2C28) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A570
 * Original: 0x0038A570 - 0x0038A581 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A570(void)
{
    int _cf = 0; /* carry flag */

loc_0038A570: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2C30) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A590
 * Original: 0x0038A590 - 0x0038A5A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A590(void)
{
    int _cf = 0; /* carry flag */

loc_0038A590: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2C10) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A5B0
 * Original: 0x0038A5B0 - 0x0038A5C9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A5B0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A5B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2C10); /* divss */
    MEMF(0xBA2C0C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A5D0
 * Original: 0x0038A5D0 - 0x0038A5ED (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A5D0(void)
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

loc_0038A5D0: ;
    fp_push(MEMF(0xBA2C10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A5E7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A5E7: ;
    MEM32(0xBA2C2C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A5F0
 * Original: 0x0038A5F0 - 0x0038A60D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A5F0(void)
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

loc_0038A5F0: ;
    fp_push(MEMF(0xBA2C10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A607u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A607: ;
    MEM32(0xBA2C14) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A610
 * Original: 0x0038A610 - 0x0038A621 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A610(void)
{
    int _cf = 0; /* carry flag */

loc_0038A610: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2C40) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A630
 * Original: 0x0038A630 - 0x0038A641 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A630(void)
{
    int _cf = 0; /* carry flag */

loc_0038A630: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2C48) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A650
 * Original: 0x0038A650 - 0x0038A661 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A650(void)
{
    int _cf = 0; /* carry flag */

loc_0038A650: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2C44) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A670
 * Original: 0x0038A670 - 0x0038A689 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A670(void)
{
    int _cf = 0; /* carry flag */

loc_0038A670: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2C40); /* divss */
    MEMF(0xBA2C4C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A690
 * Original: 0x0038A690 - 0x0038A6A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A690(void)
{
    int _cf = 0; /* carry flag */

loc_0038A690: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2C48); /* divss */
    MEMF(0xBA2C50) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A6B0
 * Original: 0x0038A6B0 - 0x0038A6C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A6B0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A6B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2C58) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A6D0
 * Original: 0x0038A6D0 - 0x0038A6E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A6D0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A6D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2C38) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A6F0
 * Original: 0x0038A6F0 - 0x0038A709 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A6F0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A6F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2C38); /* divss */
    MEMF(0xBA2C34) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A710
 * Original: 0x0038A710 - 0x0038A72D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A710(void)
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

loc_0038A710: ;
    fp_push(MEMF(0xBA2C38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A727u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A727: ;
    MEM32(0xBA2C54) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A730
 * Original: 0x0038A730 - 0x0038A74D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A730(void)
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

loc_0038A730: ;
    fp_push(MEMF(0xBA2C38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A747u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A747: ;
    MEM32(0xBA2C3C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A750
 * Original: 0x0038A750 - 0x0038A761 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A750(void)
{
    int _cf = 0; /* carry flag */

loc_0038A750: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2C64) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A770
 * Original: 0x0038A770 - 0x0038A781 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A770(void)
{
    int _cf = 0; /* carry flag */

loc_0038A770: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2C68) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A790
 * Original: 0x0038A790 - 0x0038A7A9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A790(void)
{
    int _cf = 0; /* carry flag */

loc_0038A790: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2C68); /* divss */
    MEMF(0xBA2C5C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A7B0
 * Original: 0x0038A7B0 - 0x0038A7CD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A7B0(void)
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

loc_0038A7B0: ;
    fp_push(MEMF(0xBA2C68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A7C7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A7C7: ;
    MEM32(0xBA2C60) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A7D0
 * Original: 0x0038A7D0 - 0x0038A7ED (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A7D0(void)
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

loc_0038A7D0: ;
    fp_push(MEMF(0xBA2C68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A7E7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A7E7: ;
    MEM32(0xBA2C78) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A7F0
 * Original: 0x0038A7F0 - 0x0038A801 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A7F0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A7F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2C6C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A810
 * Original: 0x0038A810 - 0x0038A821 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A810(void)
{
    int _cf = 0; /* carry flag */

loc_0038A810: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2C80) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A830
 * Original: 0x0038A830 - 0x0038A841 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A830(void)
{
    int _cf = 0; /* carry flag */

loc_0038A830: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2C70) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A850
 * Original: 0x0038A850 - 0x0038A869 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A850(void)
{
    int _cf = 0; /* carry flag */

loc_0038A850: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2C6C); /* divss */
    MEMF(0xBA2C74) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A870
 * Original: 0x0038A870 - 0x0038A889 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A870(void)
{
    int _cf = 0; /* carry flag */

loc_0038A870: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2C80); /* divss */
    MEMF(0xBA2C7C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A890
 * Original: 0x0038A890 - 0x0038A8A1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A890(void)
{
    int _cf = 0; /* carry flag */

loc_0038A890: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2C90) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A8B0
 * Original: 0x0038A8B0 - 0x0038A8C1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A8B0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A8B0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2C98) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A8D0
 * Original: 0x0038A8D0 - 0x0038A8E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A8D0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A8D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2C94) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A8F0
 * Original: 0x0038A8F0 - 0x0038A909 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A8F0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A8F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2C90); /* divss */
    MEMF(0xBA2C9C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A910
 * Original: 0x0038A910 - 0x0038A929 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A910(void)
{
    int _cf = 0; /* carry flag */

loc_0038A910: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2C98); /* divss */
    MEMF(0xBA2CA0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A930
 * Original: 0x0038A930 - 0x0038A941 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A930(void)
{
    int _cf = 0; /* carry flag */

loc_0038A930: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2CA8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A950
 * Original: 0x0038A950 - 0x0038A961 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A950(void)
{
    int _cf = 0; /* carry flag */

loc_0038A950: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2C88) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A970
 * Original: 0x0038A970 - 0x0038A989 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A970(void)
{
    int _cf = 0; /* carry flag */

loc_0038A970: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2C88); /* divss */
    MEMF(0xBA2C84) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A990
 * Original: 0x0038A990 - 0x0038A9AD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A990(void)
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

loc_0038A990: ;
    fp_push(MEMF(0xBA2C88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A9A7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A9A7: ;
    MEM32(0xBA2CA4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A9B0
 * Original: 0x0038A9B0 - 0x0038A9CD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A9B0(void)
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

loc_0038A9B0: ;
    fp_push(MEMF(0xBA2C88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038A9C7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038A9C7: ;
    MEM32(0xBA2C8C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038A9D0
 * Original: 0x0038A9D0 - 0x0038A9E1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A9D0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A9D0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2CB8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038A9F0
 * Original: 0x0038A9F0 - 0x0038AA01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038A9F0(void)
{
    int _cf = 0; /* carry flag */

loc_0038A9F0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2CC0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AA10
 * Original: 0x0038AA10 - 0x0038AA21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AA10(void)
{
    int _cf = 0; /* carry flag */

loc_0038AA10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2CBC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AA30
 * Original: 0x0038AA30 - 0x0038AA49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AA30(void)
{
    int _cf = 0; /* carry flag */

loc_0038AA30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2CB8); /* divss */
    MEMF(0xBA2CC4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AA50
 * Original: 0x0038AA50 - 0x0038AA69 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AA50(void)
{
    int _cf = 0; /* carry flag */

loc_0038AA50: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2CC0); /* divss */
    MEMF(0xBA2CC8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AA70
 * Original: 0x0038AA70 - 0x0038AA81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AA70(void)
{
    int _cf = 0; /* carry flag */

loc_0038AA70: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2CD0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AA90
 * Original: 0x0038AA90 - 0x0038AAA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AA90(void)
{
    int _cf = 0; /* carry flag */

loc_0038AA90: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2CB0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AAB0
 * Original: 0x0038AAB0 - 0x0038AAC9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AAB0(void)
{
    int _cf = 0; /* carry flag */

loc_0038AAB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2CB0); /* divss */
    MEMF(0xBA2CAC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AAD0
 * Original: 0x0038AAD0 - 0x0038AAED (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AAD0(void)
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

loc_0038AAD0: ;
    fp_push(MEMF(0xBA2CB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038AAE7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038AAE7: ;
    MEM32(0xBA2CCC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038AAF0
 * Original: 0x0038AAF0 - 0x0038AB0D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AAF0(void)
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

loc_0038AAF0: ;
    fp_push(MEMF(0xBA2CB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038AB07u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038AB07: ;
    MEM32(0xBA2CB4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038AB10
 * Original: 0x0038AB10 - 0x0038AB21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AB10(void)
{
    int _cf = 0; /* carry flag */

loc_0038AB10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2CE0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AB30
 * Original: 0x0038AB30 - 0x0038AB41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AB30(void)
{
    int _cf = 0; /* carry flag */

loc_0038AB30: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2CE8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AB50
 * Original: 0x0038AB50 - 0x0038AB61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AB50(void)
{
    int _cf = 0; /* carry flag */

loc_0038AB50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2CE4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AB70
 * Original: 0x0038AB70 - 0x0038AB89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AB70(void)
{
    int _cf = 0; /* carry flag */

loc_0038AB70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2CE0); /* divss */
    MEMF(0xBA2CEC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AB90
 * Original: 0x0038AB90 - 0x0038ABA9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AB90(void)
{
    int _cf = 0; /* carry flag */

loc_0038AB90: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2CE8); /* divss */
    MEMF(0xBA2CF0) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038ABB0
 * Original: 0x0038ABB0 - 0x0038ABC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038ABB0(void)
{
    int _cf = 0; /* carry flag */

loc_0038ABB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2CF8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038ABD0
 * Original: 0x0038ABD0 - 0x0038ABE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038ABD0(void)
{
    int _cf = 0; /* carry flag */

loc_0038ABD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2CD8) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038ABF0
 * Original: 0x0038ABF0 - 0x0038AC09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038ABF0(void)
{
    int _cf = 0; /* carry flag */

loc_0038ABF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2CD8); /* divss */
    MEMF(0xBA2CD4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AC10
 * Original: 0x0038AC10 - 0x0038AC2D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AC10(void)
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

loc_0038AC10: ;
    fp_push(MEMF(0xBA2CD8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038AC27u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038AC27: ;
    MEM32(0xBA2CF4) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038AC30
 * Original: 0x0038AC30 - 0x0038AC4D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AC30(void)
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

loc_0038AC30: ;
    fp_push(MEMF(0xBA2CD8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038AC47u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038AC47: ;
    MEM32(0xBA2CDC) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038AC50
 * Original: 0x0038AC50 - 0x0038AC61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AC50(void)
{
    int _cf = 0; /* carry flag */

loc_0038AC50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2D08) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AC70
 * Original: 0x0038AC70 - 0x0038AC81 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AC70(void)
{
    int _cf = 0; /* carry flag */

loc_0038AC70: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2D10) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AC90
 * Original: 0x0038AC90 - 0x0038ACA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AC90(void)
{
    int _cf = 0; /* carry flag */

loc_0038AC90: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2D0C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038ACB0
 * Original: 0x0038ACB0 - 0x0038ACC9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038ACB0(void)
{
    int _cf = 0; /* carry flag */

loc_0038ACB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2D08); /* divss */
    MEMF(0xBA2D14) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038ACD0
 * Original: 0x0038ACD0 - 0x0038ACE9 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038ACD0(void)
{
    int _cf = 0; /* carry flag */

loc_0038ACD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2D10); /* divss */
    MEMF(0xBA2D18) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038ACF0
 * Original: 0x0038ACF0 - 0x0038AD01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038ACF0(void)
{
    int _cf = 0; /* carry flag */

loc_0038ACF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2D20) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AD10
 * Original: 0x0038AD10 - 0x0038AD21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AD10(void)
{
    int _cf = 0; /* carry flag */

loc_0038AD10: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2D00) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AD30
 * Original: 0x0038AD30 - 0x0038AD49 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AD30(void)
{
    int _cf = 0; /* carry flag */

loc_0038AD30: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2D00); /* divss */
    MEMF(0xBA2CFC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AD50
 * Original: 0x0038AD50 - 0x0038AD6D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AD50(void)
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

loc_0038AD50: ;
    fp_push(MEMF(0xBA2D00)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038AD67u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038AD67: ;
    MEM32(0xBA2D1C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038AD70
 * Original: 0x0038AD70 - 0x0038AD8D (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AD70(void)
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

loc_0038AD70: ;
    fp_push(MEMF(0xBA2D00)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038AD87u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038AD87: ;
    MEM32(0xBA2D04) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038AD90
 * Original: 0x0038AD90 - 0x0038ADA1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AD90(void)
{
    int _cf = 0; /* carry flag */

loc_0038AD90: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2D38) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038ADB0
 * Original: 0x0038ADB0 - 0x0038ADC1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038ADB0(void)
{
    int _cf = 0; /* carry flag */

loc_0038ADB0: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2D40) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038ADD0
 * Original: 0x0038ADD0 - 0x0038ADE1 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038ADD0(void)
{
    int _cf = 0; /* carry flag */

loc_0038ADD0: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2D3C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038ADF0
 * Original: 0x0038ADF0 - 0x0038AE09 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038ADF0(void)
{
    int _cf = 0; /* carry flag */

loc_0038ADF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2D38); /* divss */
    MEMF(0xBA2D44) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AE10
 * Original: 0x0038AE10 - 0x0038AE29 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AE10(void)
{
    int _cf = 0; /* carry flag */

loc_0038AE10: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2D40); /* divss */
    MEMF(0xBA2D48) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AE30
 * Original: 0x0038AE30 - 0x0038AE41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AE30(void)
{
    int _cf = 0; /* carry flag */

loc_0038AE30: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D6C)); /* movss */
    MEMF(0xBA2D24) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AE50
 * Original: 0x0038AE50 - 0x0038AE61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AE50(void)
{
    int _cf = 0; /* carry flag */

loc_0038AE50: ;
    xmm0 = XMM_SCALAR(MEMF(0x498550)); /* movss */
    MEMF(0xBA2D54) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AE70
 * Original: 0x0038AE70 - 0x0038AE89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AE70(void)
{
    int _cf = 0; /* carry flag */

loc_0038AE70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2D54); /* divss */
    MEMF(0xBA2D28) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AE90
 * Original: 0x0038AE90 - 0x0038AEAD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AE90(void)
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

loc_0038AE90: ;
    fp_push(MEMF(0xBA2D54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C4C)); /* fmul dword ptr [0x497c4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x497C48)); /* fadd dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038AEA7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038AEA7: ;
    MEM32(0xBA2D30) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038AEB0
 * Original: 0x0038AEB0 - 0x0038AECD (29 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AEB0(void)
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

loc_0038AEB0: ;
    fp_push(MEMF(0xBA2D54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x47B4B0)); /* fadd dword ptr [0x47b4b0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0038AEC7u); RECOMP_ABI_CALL(0x00374F2Cu, sub_00374F2C); /* call 0x00374F2C */
    _cf = g_eflags & 1u; /* callee carry */

loc_0038AEC7: ;
    MEM32(0xBA2D4C) = eax;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0038AED0
 * Original: 0x0038AED0 - 0x0038AEDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AED0(void)
{
    int _cf = 0; /* carry flag */

loc_0038AED0: ;
    MEM32(0xBA2D50) = 0xEA60;
    esp += 4; return; /* ret */

}

/**
 * sub_0038AEE0
 * Original: 0x0038AEE0 - 0x0038AEEF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AEE0(void)
{
    int _cf = 0; /* carry flag */

loc_0038AEE0: ;
    eax = MEM32(0xBA2D50);
    ecx = eax + eax;
    MEM32(0xBA2D2C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0038AEF0
 * Original: 0x0038AEF0 - 0x0038AF01 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AEF0(void)
{
    int _cf = 0; /* carry flag */

loc_0038AEF0: ;
    xmm0 = XMM_SCALAR(MEMF(0x498554)); /* movss */
    MEMF(0xBA2D34) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AF10
 * Original: 0x0038AF10 - 0x0038AF21 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AF10(void)
{
    int _cf = 0; /* carry flag */

loc_0038AF10: ;
    xmm0 = XMM_SCALAR(MEMF(0x4ACBA8)); /* movss */
    MEMF(0xBA2D6C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AF30
 * Original: 0x0038AF30 - 0x0038AF41 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AF30(void)
{
    int _cf = 0; /* carry flag */

loc_0038AF30: ;
    xmm0 = XMM_SCALAR(MEMF(0x497D28)); /* movss */
    MEMF(0xBA2D74) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AF50
 * Original: 0x0038AF50 - 0x0038AF61 (17 bytes, 3 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AF50(void)
{
    int _cf = 0; /* carry flag */

loc_0038AF50: ;
    xmm0 = XMM_SCALAR(MEMF(0x4983C8)); /* movss */
    MEMF(0xBA2D70) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0038AF70
 * Original: 0x0038AF70 - 0x0038AF89 (25 bytes, 4 insns)
 * Category: data_init
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0038AF70(void)
{
    int _cf = 0; /* carry flag */

loc_0038AF70: ;
    xmm0 = XMM_SCALAR(MEMF(0x47B4B0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(0xBA2D6C); /* divss */
    MEMF(0xBA2D78) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}
