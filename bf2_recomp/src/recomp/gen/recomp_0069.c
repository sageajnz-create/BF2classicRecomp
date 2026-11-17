/**
 * Star Wars Battlefront 2 - Recompiled code chunk 69
 * Functions: 250 (0x003A4A00 - 0x003A6920)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003A4A00
 * Original: 0x003A4A00 - 0x003A4A13 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4A00(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4A00: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03ADC)); /* fdiv dword ptr [0xc03adc] */
    MEMF(0xC03AE8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4A20
 * Original: 0x003A4A20 - 0x003A4A33 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4A20(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4A20: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03AE4)); /* fdiv dword ptr [0xc03ae4] */
    MEMF(0xC03AEC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4A40
 * Original: 0x003A4A40 - 0x003A4A4B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4A40(void)
{
    int _cf = 0; /* carry flag */

loc_003A4A40: ;
    MEM32(0xC03AF0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4A50
 * Original: 0x003A4A50 - 0x003A4A5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4A50(void)
{
    int _cf = 0; /* carry flag */

loc_003A4A50: ;
    MEM32(0xC03AF8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4A60
 * Original: 0x003A4A60 - 0x003A4A6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4A60(void)
{
    int _cf = 0; /* carry flag */

loc_003A4A60: ;
    MEM32(0xC03AF4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4A70
 * Original: 0x003A4A70 - 0x003A4A83 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4A70(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4A70: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03AF0)); /* fdiv dword ptr [0xc03af0] */
    MEMF(0xC03AFC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4A90
 * Original: 0x003A4A90 - 0x003A4AA3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4A90(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4A90: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03AF8)); /* fdiv dword ptr [0xc03af8] */
    MEMF(0xC03B00) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4AB0
 * Original: 0x003A4AB0 - 0x003A4AD2 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A4AB0: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AF1D0);
    MEM32(0x4DB1F4) = eax;
    MEM32(0x4DB1F8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4AD0u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A4AD0: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A4AE0
 * Original: 0x003A4AE0 - 0x003A4B02 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A4AE0: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AF1E0);
    MEM32(0x4DB210) = eax;
    MEM32(0x4DB214) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4B00u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A4B00: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A4B10
 * Original: 0x003A4B10 - 0x003A4B1C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A4B10: ;
    PUSH32(esp, 0x3AF1F0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4B1Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A4B1A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A4B20
 * Original: 0x003A4B20 - 0x003A4B2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4B20(void)
{
    int _cf = 0; /* carry flag */

loc_003A4B20: ;
    MEM32(0xC03B04) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4B30
 * Original: 0x003A4B30 - 0x003A4B3B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4B30(void)
{
    int _cf = 0; /* carry flag */

loc_003A4B30: ;
    MEM32(0xC03B0C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4B40
 * Original: 0x003A4B40 - 0x003A4B4B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4B40(void)
{
    int _cf = 0; /* carry flag */

loc_003A4B40: ;
    MEM32(0xC03B08) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4B50
 * Original: 0x003A4B50 - 0x003A4B63 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4B50(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4B50: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B04)); /* fdiv dword ptr [0xc03b04] */
    MEMF(0xC03B10) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4B70
 * Original: 0x003A4B70 - 0x003A4B83 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4B70(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4B70: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B0C)); /* fdiv dword ptr [0xc03b0c] */
    MEMF(0xC03B14) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4B90
 * Original: 0x003A4B90 - 0x003A4B9B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4B90(void)
{
    int _cf = 0; /* carry flag */

loc_003A4B90: ;
    MEM32(0xC03B18) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4BA0
 * Original: 0x003A4BA0 - 0x003A4BAB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4BA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A4BA0: ;
    MEM32(0xC03B20) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4BB0
 * Original: 0x003A4BB0 - 0x003A4BBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4BB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A4BB0: ;
    MEM32(0xC03B1C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4BC0
 * Original: 0x003A4BC0 - 0x003A4BD3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4BC0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4BC0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B18)); /* fdiv dword ptr [0xc03b18] */
    MEMF(0xC03B24) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4BE0
 * Original: 0x003A4BE0 - 0x003A4BF3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4BE0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4BE0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B20)); /* fdiv dword ptr [0xc03b20] */
    MEMF(0xC03B28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4C00
 * Original: 0x003A4C00 - 0x003A4C0B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4C00(void)
{
    int _cf = 0; /* carry flag */

loc_003A4C00: ;
    MEM32(0xC03B2C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4C10
 * Original: 0x003A4C10 - 0x003A4C1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4C10(void)
{
    int _cf = 0; /* carry flag */

loc_003A4C10: ;
    MEM32(0xC03B34) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4C20
 * Original: 0x003A4C20 - 0x003A4C2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4C20(void)
{
    int _cf = 0; /* carry flag */

loc_003A4C20: ;
    MEM32(0xC03B30) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4C30
 * Original: 0x003A4C30 - 0x003A4C43 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4C30(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4C30: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B2C)); /* fdiv dword ptr [0xc03b2c] */
    MEMF(0xC03B38) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4C50
 * Original: 0x003A4C50 - 0x003A4C63 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4C50(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4C50: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B34)); /* fdiv dword ptr [0xc03b34] */
    MEMF(0xC03B3C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4C70
 * Original: 0x003A4C70 - 0x003A4C7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4C70(void)
{
    int _cf = 0; /* carry flag */

loc_003A4C70: ;
    MEM32(0xC03B40) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4C80
 * Original: 0x003A4C80 - 0x003A4C8B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4C80(void)
{
    int _cf = 0; /* carry flag */

loc_003A4C80: ;
    MEM32(0xC03B48) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4C90
 * Original: 0x003A4C90 - 0x003A4C9B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4C90(void)
{
    int _cf = 0; /* carry flag */

loc_003A4C90: ;
    MEM32(0xC03B44) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4CA0
 * Original: 0x003A4CA0 - 0x003A4CB3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4CA0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4CA0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B40)); /* fdiv dword ptr [0xc03b40] */
    MEMF(0xC03B4C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4CC0
 * Original: 0x003A4CC0 - 0x003A4CD3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4CC0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4CC0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B48)); /* fdiv dword ptr [0xc03b48] */
    MEMF(0xC03B50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4CE0
 * Original: 0x003A4CE0 - 0x003A4D02 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A4CE0: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AF200);
    MEM32(0x4DB230) = eax;
    MEM32(0x4DB234) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4D00u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A4D00: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A4D10
 * Original: 0x003A4D10 - 0x003A4D1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4D10(void)
{
    int _cf = 0; /* carry flag */

loc_003A4D10: ;
    MEM32(0xC03B54) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4D20
 * Original: 0x003A4D20 - 0x003A4D2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4D20(void)
{
    int _cf = 0; /* carry flag */

loc_003A4D20: ;
    MEM32(0xC03B5C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4D30
 * Original: 0x003A4D30 - 0x003A4D3B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4D30(void)
{
    int _cf = 0; /* carry flag */

loc_003A4D30: ;
    MEM32(0xC03B58) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4D40
 * Original: 0x003A4D40 - 0x003A4D53 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4D40(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4D40: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B54)); /* fdiv dword ptr [0xc03b54] */
    MEMF(0xC03B60) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4D60
 * Original: 0x003A4D60 - 0x003A4D73 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4D60(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4D60: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B5C)); /* fdiv dword ptr [0xc03b5c] */
    MEMF(0xC03B64) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4D80
 * Original: 0x003A4D80 - 0x003A4D8B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4D80(void)
{
    int _cf = 0; /* carry flag */

loc_003A4D80: ;
    MEM32(0xC03B68) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4D90
 * Original: 0x003A4D90 - 0x003A4D9B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4D90(void)
{
    int _cf = 0; /* carry flag */

loc_003A4D90: ;
    MEM32(0xC03B70) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4DA0
 * Original: 0x003A4DA0 - 0x003A4DAB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4DA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A4DA0: ;
    MEM32(0xC03B6C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4DB0
 * Original: 0x003A4DB0 - 0x003A4DC3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4DB0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4DB0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B68)); /* fdiv dword ptr [0xc03b68] */
    MEMF(0xC03B74) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4DD0
 * Original: 0x003A4DD0 - 0x003A4DE3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4DD0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4DD0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B70)); /* fdiv dword ptr [0xc03b70] */
    MEMF(0xC03B78) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4DF0
 * Original: 0x003A4DF0 - 0x003A4DFB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4DF0(void)
{
    int _cf = 0; /* carry flag */

loc_003A4DF0: ;
    MEM32(0xC03B7C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4E00
 * Original: 0x003A4E00 - 0x003A4E0B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4E00(void)
{
    int _cf = 0; /* carry flag */

loc_003A4E00: ;
    MEM32(0xC03B84) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4E10
 * Original: 0x003A4E10 - 0x003A4E1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4E10(void)
{
    int _cf = 0; /* carry flag */

loc_003A4E10: ;
    MEM32(0xC03B80) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4E20
 * Original: 0x003A4E20 - 0x003A4E33 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4E20(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4E20: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B7C)); /* fdiv dword ptr [0xc03b7c] */
    MEMF(0xC03B88) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4E40
 * Original: 0x003A4E40 - 0x003A4E53 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4E40(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4E40: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B84)); /* fdiv dword ptr [0xc03b84] */
    MEMF(0xC03B8C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4E60
 * Original: 0x003A4E60 - 0x003A4E6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4E60(void)
{
    int _cf = 0; /* carry flag */

loc_003A4E60: ;
    MEM32(0xC03B90) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4E70
 * Original: 0x003A4E70 - 0x003A4E7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4E70(void)
{
    int _cf = 0; /* carry flag */

loc_003A4E70: ;
    MEM32(0xC03B98) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4E80
 * Original: 0x003A4E80 - 0x003A4E8B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4E80(void)
{
    int _cf = 0; /* carry flag */

loc_003A4E80: ;
    MEM32(0xC03B94) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4E90
 * Original: 0x003A4E90 - 0x003A4EA3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4E90(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4E90: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B90)); /* fdiv dword ptr [0xc03b90] */
    MEMF(0xC03B9C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4EB0
 * Original: 0x003A4EB0 - 0x003A4EC3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4EB0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4EB0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03B98)); /* fdiv dword ptr [0xc03b98] */
    MEMF(0xC03BA0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4ED0
 * Original: 0x003A4ED0 - 0x003A4EDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4ED0(void)
{
    int _cf = 0; /* carry flag */

loc_003A4ED0: ;
    MEM32(0xC03BA4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4EE0
 * Original: 0x003A4EE0 - 0x003A4EEB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4EE0(void)
{
    int _cf = 0; /* carry flag */

loc_003A4EE0: ;
    MEM32(0xC03BAC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4EF0
 * Original: 0x003A4EF0 - 0x003A4EFB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4EF0(void)
{
    int _cf = 0; /* carry flag */

loc_003A4EF0: ;
    MEM32(0xC03BA8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4F00
 * Original: 0x003A4F00 - 0x003A4F13 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4F00(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4F00: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03BA4)); /* fdiv dword ptr [0xc03ba4] */
    MEMF(0xC03BB0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4F20
 * Original: 0x003A4F20 - 0x003A4F33 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4F20(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4F20: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03BAC)); /* fdiv dword ptr [0xc03bac] */
    MEMF(0xC03BB4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4F40
 * Original: 0x003A4F40 - 0x003A4F4B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4F40(void)
{
    int _cf = 0; /* carry flag */

loc_003A4F40: ;
    MEM32(0xC03BB8) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4F50
 * Original: 0x003A4F50 - 0x003A4F5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4F50(void)
{
    int _cf = 0; /* carry flag */

loc_003A4F50: ;
    MEM32(0xC03BC0) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4F60
 * Original: 0x003A4F60 - 0x003A4F6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4F60(void)
{
    int _cf = 0; /* carry flag */

loc_003A4F60: ;
    MEM32(0xC03BBC) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4F70
 * Original: 0x003A4F70 - 0x003A4F83 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4F70(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4F70: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03BB8)); /* fdiv dword ptr [0xc03bb8] */
    MEMF(0xC03BC4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4F90
 * Original: 0x003A4F90 - 0x003A4FA3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4F90(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4F90: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03BC0)); /* fdiv dword ptr [0xc03bc0] */
    MEMF(0xC03BC8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4FB0
 * Original: 0x003A4FB0 - 0x003A4FBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4FB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A4FB0: ;
    MEM32(0xC03BCC) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4FC0
 * Original: 0x003A4FC0 - 0x003A4FCB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4FC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A4FC0: ;
    MEM32(0xC03BD4) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4FD0
 * Original: 0x003A4FD0 - 0x003A4FDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4FD0(void)
{
    int _cf = 0; /* carry flag */

loc_003A4FD0: ;
    MEM32(0xC03BD0) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4FE0
 * Original: 0x003A4FE0 - 0x003A4FF3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4FE0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4FE0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03BCC)); /* fdiv dword ptr [0xc03bcc] */
    MEMF(0xC03BD8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5000
 * Original: 0x003A5000 - 0x003A5013 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5000(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5000: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03BD4)); /* fdiv dword ptr [0xc03bd4] */
    MEMF(0xC03BDC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5020
 * Original: 0x003A5020 - 0x003A502B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5020(void)
{
    int _cf = 0; /* carry flag */

loc_003A5020: ;
    MEM32(0xC03BE0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5030
 * Original: 0x003A5030 - 0x003A503B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5030(void)
{
    int _cf = 0; /* carry flag */

loc_003A5030: ;
    MEM32(0xC03BE8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5040
 * Original: 0x003A5040 - 0x003A504B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5040(void)
{
    int _cf = 0; /* carry flag */

loc_003A5040: ;
    MEM32(0xC03BE4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5050
 * Original: 0x003A5050 - 0x003A5063 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5050(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5050: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03BE0)); /* fdiv dword ptr [0xc03be0] */
    MEMF(0xC03BEC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5070
 * Original: 0x003A5070 - 0x003A5083 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5070(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5070: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03BE8)); /* fdiv dword ptr [0xc03be8] */
    MEMF(0xC03BF0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5090
 * Original: 0x003A5090 - 0x003A509B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5090(void)
{
    int _cf = 0; /* carry flag */

loc_003A5090: ;
    MEM32(0xC03BF8) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A50A0
 * Original: 0x003A50A0 - 0x003A50AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A50A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A50A0: ;
    MEM32(0xC03C00) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A50B0
 * Original: 0x003A50B0 - 0x003A50BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A50B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A50B0: ;
    MEM32(0xC03BFC) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A50C0
 * Original: 0x003A50C0 - 0x003A50D3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A50C0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A50C0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03BF8)); /* fdiv dword ptr [0xc03bf8] */
    MEMF(0xC03C04) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A50E0
 * Original: 0x003A50E0 - 0x003A50F3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A50E0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A50E0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03C00)); /* fdiv dword ptr [0xc03c00] */
    MEMF(0xC03C08) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5100
 * Original: 0x003A5100 - 0x003A510B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5100(void)
{
    int _cf = 0; /* carry flag */

loc_003A5100: ;
    MEM32(0xC03C0C) = 0x40800000;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5110
 * Original: 0x003A5110 - 0x003A511B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5110(void)
{
    int _cf = 0; /* carry flag */

loc_003A5110: ;
    MEM32(0xC03BF4) = 0x42000000;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5120
 * Original: 0x003A5120 - 0x003A512B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5120(void)
{
    int _cf = 0; /* carry flag */

loc_003A5120: ;
    MEM32(0xC03C10) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5130
 * Original: 0x003A5130 - 0x003A513B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5130(void)
{
    int _cf = 0; /* carry flag */

loc_003A5130: ;
    MEM32(0xC03C18) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5140
 * Original: 0x003A5140 - 0x003A514B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5140(void)
{
    int _cf = 0; /* carry flag */

loc_003A5140: ;
    MEM32(0xC03C14) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5150
 * Original: 0x003A5150 - 0x003A5163 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5150(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5150: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03C10)); /* fdiv dword ptr [0xc03c10] */
    MEMF(0xC03C1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5170
 * Original: 0x003A5170 - 0x003A5183 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5170(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5170: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03C18)); /* fdiv dword ptr [0xc03c18] */
    MEMF(0xC03C20) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5190
 * Original: 0x003A5190 - 0x003A519B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5190(void)
{
    int _cf = 0; /* carry flag */

loc_003A5190: ;
    MEM32(0xC4A988) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A51A0
 * Original: 0x003A51A0 - 0x003A51AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A51A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A51A0: ;
    MEM32(0xC4A990) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A51B0
 * Original: 0x003A51B0 - 0x003A51BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A51B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A51B0: ;
    MEM32(0xC4A98C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A51C0
 * Original: 0x003A51C0 - 0x003A51D3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A51C0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A51C0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC4A988)); /* fdiv dword ptr [0xc4a988] */
    MEMF(0xC4A994) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A51E0
 * Original: 0x003A51E0 - 0x003A51F3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A51E0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A51E0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC4A990)); /* fdiv dword ptr [0xc4a990] */
    MEMF(0xC4A998) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5200
 * Original: 0x003A5200 - 0x003A5223 (35 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5200: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x495AE0;
    esi = 0x11;
    edi = 0xB7449C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5216u); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_003A5216: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5220; /* je: equal / zero */

loc_003A521A: ;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;

loc_003A5220: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A5230
 * Original: 0x003A5230 - 0x003A5253 (35 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5230: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x495AC4;
    esi = 0x11;
    edi = 0x4AC50D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5246u); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_003A5246: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5250; /* je: equal / zero */

loc_003A524A: ;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;

loc_003A5250: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A5260
 * Original: 0x003A5260 - 0x003A526C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5260: ;
    PUSH32(esp, 0x3AF210);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A526Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A526A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A5270
 * Original: 0x003A5270 - 0x003A5299 (41 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5270: ;
    PUSH32(esp, esi);
    eax = 0x320;
    esi = 0xCE0A00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5280u); RECOMP_ABI_CALL(0x002C7B00u, sub_002C7B00); /* call 0x002C7B00 */

loc_003A5280: ;
    PUSH32(esp, 0x3AF220);
    MEM32(0xCE0A00) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5294u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A5294: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A52A0
 * Original: 0x003A52A0 - 0x003A52C9 (41 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A52A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A52A0: ;
    PUSH32(esp, esi);
    eax = 0x64;
    esi = 0xC4A96C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A52B0u); RECOMP_ABI_CALL(0x002C7B00u, sub_002C7B00); /* call 0x002C7B00 */

loc_003A52B0: ;
    PUSH32(esp, 0x3AF240);
    MEM32(0xC4A96C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A52C4u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A52C4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A52D0
 * Original: 0x003A52D0 - 0x003A57E2 (1298 bytes, 332 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A52D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A52D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0xC8C7C0;
    edx = 0xC8C7E0;
    MEM32(esp + 0x10) = 0x125;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xFF;
    esi = 3;

loc_003A52F3: ;
    MEM8(eax + 4) = LO8(ecx);
    ebp = MEM32(eax + 4);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = ecx;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ebp;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax) = 0x495A5C;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x50) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x54) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x58) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x5C) = ebx;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x60) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x64) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x68) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x6C) = ebx;
    ebp = MEM32(0x4ACE44);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA8)) >> 32) & 1);
    eax = eax + 0xA8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(0x4ACE48);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(0x4ACE4C);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(0x4ACE50);
    MEM32(ebx + 0xC) = ebp;
    MEM8(eax + 4) = LO8(ecx);
    ebx = MEM32(eax + 4);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = ecx;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xA8)) >> 32) & 1);
    edx = edx + 0xA8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax) = 0x495A5C;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x50) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x54) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x58) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x5C) = ebx;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x60) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x64) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x68) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x6C) = ebx;
    ebp = MEM32(0x4ACE44);
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(0x4ACE48);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(0x4ACE4C);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(0x4ACE50);
    MEM32(ebx + 0xC) = ebp;
    MEM8(eax + 0xAC) = LO8(ecx);
    ebp = MEM32(eax + 0xAC);
    MEM32(eax + 0xB4) = ecx;
    MEM32(eax + 0xB8) = ecx;
    MEM32(eax + 0xBC) = esi;
    MEM32(eax + 0xC0) = ecx;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA8)) >> 32) & 1);
    eax = eax + 0xA8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ebp = ebp & edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ebp;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax) = 0x495A5C;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x50) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x54) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x58) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x5C) = ebx;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x60) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x64) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x68) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x6C) = ebx;
    ebp = MEM32(0x4ACE44);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA8)) >> 32) & 1);
    eax = eax + 0xA8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xA8)) >> 32) & 1);
    edx = edx + 0xA8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(0x4ACE48);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(0x4ACE4C);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(0x4ACE50);
    MEM32(ebx + 0xC) = ebp;
    MEM8(eax + 4) = LO8(ecx);
    ebx = MEM32(eax + 4);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = ecx;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xA8)) >> 32) & 1);
    edx = edx + 0xA8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax) = 0x495A5C;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x50) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x54) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x58) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x5C) = ebx;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x60) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x64) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x68) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x6C) = ebx;
    ebp = MEM32(0x4ACE44);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA8)) >> 32) & 1);
    eax = eax + 0xA8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(0x4ACE48);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(0x4ACE4C);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(0x4ACE50);
    MEM32(ebx + 0xC) = ebp;
    MEM8(eax + 4) = LO8(ecx);
    ebp = MEM32(eax + 4);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = ecx;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ebp;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax) = 0x495A5C;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x50) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x54) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x58) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x5C) = ebx;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x60) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x64) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x68) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x6C) = ebx;
    ebp = MEM32(0x4ACE44);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA8)) >> 32) & 1);
    eax = eax + 0xA8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xA8)) >> 32) & 1);
    edx = edx + 0xA8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(0x4ACE48);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(0x4ACE4C);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(0x4ACE50);
    MEM32(ebx + 0xC) = ebp;
    MEM8(eax + 4) = LO8(ecx);
    ebx = MEM32(eax + 4);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = ecx;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xA8)) >> 32) & 1);
    edx = edx + 0xA8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax) = 0x495A5C;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x50) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x54) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x58) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x5C) = ebx;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x60) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x64) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x68) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x6C) = ebx;
    ebp = MEM32(0x4ACE44);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA8)) >> 32) & 1);
    eax = eax + 0xA8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(0x4ACE48);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(0x4ACE4C);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(0x4ACE50);
    MEM32(ebx + 0xC) = ebp;
    MEM8(eax + 4) = LO8(ecx);
    ebp = MEM32(eax + 4);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = esi;
    MEM32(eax + 0x18) = ecx;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ebp;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax) = 0x495A5C;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x50) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x54) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x58) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x5C) = ebx;
    ebx = MEM32(0x4ACE44);
    MEM32(eax + 0x60) = ebx;
    ebx = MEM32(0x4ACE48);
    MEM32(eax + 0x64) = ebx;
    ebx = MEM32(0x4ACE4C);
    MEM32(eax + 0x68) = ebx;
    ebx = MEM32(0x4ACE50);
    MEM32(eax + 0x6C) = ebx;
    ebp = MEM32(0x4ACE44);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xA8)) >> 32) & 1);
    edx = edx + 0xA8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx;
    MEM32(ebx) = ebp;
    ebp = MEM32(0x4ACE48);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(0x4ACE4C);
    MEM32(ebx + 8) = ebp;
    ebp = MEM32(0x4ACE50);
    MEM32(ebx + 0xC) = ebp;
    ebx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA8)) >> 32) & 1);
    eax = eax + 0xA8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xA8)) >> 32) & 1);
    edx = edx + 0xA8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebx;
    if ((_fa != 0)) goto loc_003A52F3; /* jne: not equal / not zero */

loc_003A57CF: ;
    PUSH32(esp, 0x3AF260);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A57D9u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A57D9: ;
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
 * sub_003A57F0
 * Original: 0x003A57F0 - 0x003A57FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A57F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A57F0: ;
    PUSH32(esp, 0x3AF2E0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A57FAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A57FA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A5800
 * Original: 0x003A5800 - 0x003A5825 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5800: ;
    PUSH32(esp, esi);
    edx = 0x4ACE44;
    PUSH32(esp, edi);
    esi = edx;
    edi = edx;
    eax = 0xC13CA8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5815u); RECOMP_ABI_CALL(0x002C03E0u, sub_002C03E0); /* call 0x002C03E0 */

loc_003A5815: ;
    PUSH32(esp, 0x3AF300);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A581Fu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A581F: ;
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
 * sub_003A5830
 * Original: 0x003A5830 - 0x003A5855 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5830: ;
    PUSH32(esp, esi);
    edx = 0x4ACE44;
    PUSH32(esp, edi);
    esi = edx;
    edi = edx;
    eax = 0xC13D58;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5845u); RECOMP_ABI_CALL(0x002C03E0u, sub_002C03E0); /* call 0x002C03E0 */

loc_003A5845: ;
    PUSH32(esp, 0x3AF320);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A584Fu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A584F: ;
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
 * sub_003A5860
 * Original: 0x003A5860 - 0x003A586B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5860(void)
{
    int _cf = 0; /* carry flag */

loc_003A5860: ;
    MEM32(0xD00A24) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5870
 * Original: 0x003A5870 - 0x003A587B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5870(void)
{
    int _cf = 0; /* carry flag */

loc_003A5870: ;
    MEM32(0xD00A2C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5880
 * Original: 0x003A5880 - 0x003A588B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5880(void)
{
    int _cf = 0; /* carry flag */

loc_003A5880: ;
    MEM32(0xD00A28) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5890
 * Original: 0x003A5890 - 0x003A58A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5890(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5890: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD00A24)); /* fdiv dword ptr [0xd00a24] */
    MEMF(0xD00A30) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A58B0
 * Original: 0x003A58B0 - 0x003A58C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A58B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A58B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD00A2C)); /* fdiv dword ptr [0xd00a2c] */
    MEMF(0xD00A38) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A58D0
 * Original: 0x003A58D0 - 0x003A58E6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A58D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A58D0: ;
    edx = 0xD00A3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A58DAu); RECOMP_ABI_CALL(0x002C8A30u, sub_002C8A30); /* call 0x002C8A30 */

loc_003A58DA: ;
    PUSH32(esp, 0x3AF340);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A58E4u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A58E4: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A58F0
 * Original: 0x003A58F0 - 0x003A5944 (84 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A58F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A58F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xD00B20;
    edi = 2;
    /* nop */

loc_003A5900: ;
    PUSH32(esp, 0x4ACE44);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0xBF800000u;
    MEM32(esp + 0x1C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5928u); RECOMP_ABI_CALL(0x002EDD30u, sub_002EDD30); /* call 0x002EDD30 */

loc_003A5928: ;
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xD0)) >> 32) & 1);
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A5900; /* jne: not equal / not zero */

loc_003A5931: ;
    PUSH32(esp, 0x3AF350);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A593Bu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A593B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A5950
 * Original: 0x003A5950 - 0x003A5975 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5950: ;
    PUSH32(esp, esi);
    edx = 0x4ACE44;
    PUSH32(esp, edi);
    esi = edx;
    edi = edx;
    eax = 0xD00A70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5965u); RECOMP_ABI_CALL(0x002C03E0u, sub_002C03E0); /* call 0x002C03E0 */

loc_003A5965: ;
    PUSH32(esp, 0x3AF3D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A596Fu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A596F: ;
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
 * sub_003A5980
 * Original: 0x003A5980 - 0x003A598F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5980(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5980: ;
    fp_push(MEMD(0x498578)); /* fld double */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(0xD00B18) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5990
 * Original: 0x003A5990 - 0x003A59A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5990(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5990: ;
    fp_push(MEMF(0xD00B18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x498580)); /* fmul dword ptr [0x498580] */
    MEMF(0xD00A34) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A59B0
 * Original: 0x003A59B0 - 0x003A59C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A59B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A59B0: ;
    fp_push(MEMF(0xD00B18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497C48)); /* fmul dword ptr [0x497c48] */
    MEMF(0xD00A68) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A59D0
 * Original: 0x003A59D0 - 0x003A59DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A59D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A59D0: ;
    MEM32(0xD00CC0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A59E0
 * Original: 0x003A59E0 - 0x003A59EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A59E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A59E0: ;
    MEM32(0xD00CC8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A59F0
 * Original: 0x003A59F0 - 0x003A59FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A59F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A59F0: ;
    MEM32(0xD00CC4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5A00
 * Original: 0x003A5A00 - 0x003A5A13 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5A00(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5A00: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD00CC0)); /* fdiv dword ptr [0xd00cc0] */
    MEMF(0xD00CCC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5A20
 * Original: 0x003A5A20 - 0x003A5A33 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5A20(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5A20: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD00CC8)); /* fdiv dword ptr [0xd00cc8] */
    MEMF(0xD00CD0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5A40
 * Original: 0x003A5A40 - 0x003A5A4B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5A40(void)
{
    int _cf = 0; /* carry flag */

loc_003A5A40: ;
    MEM32(0xD00CD8) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5A50
 * Original: 0x003A5A50 - 0x003A5A5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5A50(void)
{
    int _cf = 0; /* carry flag */

loc_003A5A50: ;
    MEM32(0xD00CE0) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5A60
 * Original: 0x003A5A60 - 0x003A5A6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5A60(void)
{
    int _cf = 0; /* carry flag */

loc_003A5A60: ;
    MEM32(0xD00CDC) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5A70
 * Original: 0x003A5A70 - 0x003A5A83 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5A70(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5A70: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD00CD8)); /* fdiv dword ptr [0xd00cd8] */
    MEMF(0xD00CE4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5A90
 * Original: 0x003A5A90 - 0x003A5AA3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5A90(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5A90: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD00CE0)); /* fdiv dword ptr [0xd00ce0] */
    MEMF(0xD00CE8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5AB0
 * Original: 0x003A5AB0 - 0x003A5AEC (60 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A5AB0: ;
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
    MEM32(0xD00CD4) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A5AF0
 * Original: 0x003A5AF0 - 0x003A5B13 (35 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5AF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x495BEC;
    esi = 0x11;
    edi = 0x4AC550;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5B06u); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_003A5B06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5B10; /* je: equal / zero */

loc_003A5B0A: ;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;

loc_003A5B10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A5B20
 * Original: 0x003A5B20 - 0x003A5B43 (35 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5B20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x495BD8;
    esi = 0x11;
    edi = 0xB744E0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5B36u); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_003A5B36: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5B40; /* je: equal / zero */

loc_003A5B3A: ;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;

loc_003A5B40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A5B50
 * Original: 0x003A5B50 - 0x003A5B73 (35 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5B50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x495BA4;
    esi = 0x46;
    edi = 0xB744E8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5B66u); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_003A5B66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5B70; /* je: equal / zero */

loc_003A5B6A: ;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;

loc_003A5B70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A5B80
 * Original: 0x003A5B80 - 0x003A5BA3 (35 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5B80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x495B90;
    esi = 0x46;
    edi = 0xB744EC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5B96u); RECOMP_ABI_CALL(0x002ED220u, sub_002ED220); /* call 0x002ED220 */

loc_003A5B96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003A5BA0; /* je: equal / zero */

loc_003A5B9A: ;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edi;

loc_003A5BA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A5BB0
 * Original: 0x003A5BB0 - 0x003A5BBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5BB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A5BB0: ;
    MEM32(0xD03CCC) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5BC0
 * Original: 0x003A5BC0 - 0x003A5BCB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5BC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A5BC0: ;
    MEM32(0xD03CD4) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5BD0
 * Original: 0x003A5BD0 - 0x003A5BDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5BD0(void)
{
    int _cf = 0; /* carry flag */

loc_003A5BD0: ;
    MEM32(0xD03CD0) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5BE0
 * Original: 0x003A5BE0 - 0x003A5BF3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5BE0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5BE0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD03CCC)); /* fdiv dword ptr [0xd03ccc] */
    MEMF(0xD03CD8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5C00
 * Original: 0x003A5C00 - 0x003A5C13 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5C00(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5C00: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD03CD4)); /* fdiv dword ptr [0xd03cd4] */
    MEMF(0xD03CDC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5C20
 * Original: 0x003A5C20 - 0x003A5C2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5C20(void)
{
    int _cf = 0; /* carry flag */

loc_003A5C20: ;
    MEM32(0xD03CE0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5C30
 * Original: 0x003A5C30 - 0x003A5C3B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5C30(void)
{
    int _cf = 0; /* carry flag */

loc_003A5C30: ;
    MEM32(0xD03CE8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5C40
 * Original: 0x003A5C40 - 0x003A5C4B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5C40(void)
{
    int _cf = 0; /* carry flag */

loc_003A5C40: ;
    MEM32(0xD03CE4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5C50
 * Original: 0x003A5C50 - 0x003A5C63 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5C50(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5C50: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD03CE0)); /* fdiv dword ptr [0xd03ce0] */
    MEMF(0xD03CEC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5C70
 * Original: 0x003A5C70 - 0x003A5C83 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5C70(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5C70: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD03CE8)); /* fdiv dword ptr [0xd03ce8] */
    MEMF(0xD03CF0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5C90
 * Original: 0x003A5C90 - 0x003A5C9B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5C90(void)
{
    int _cf = 0; /* carry flag */

loc_003A5C90: ;
    MEM32(0xD05CFC) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5CA0
 * Original: 0x003A5CA0 - 0x003A5CAB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5CA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A5CA0: ;
    MEM32(0xD05D04) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5CB0
 * Original: 0x003A5CB0 - 0x003A5CBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5CB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A5CB0: ;
    MEM32(0xD05D00) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5CC0
 * Original: 0x003A5CC0 - 0x003A5CD3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5CC0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5CC0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD05CFC)); /* fdiv dword ptr [0xd05cfc] */
    MEMF(0xD05D08) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5CE0
 * Original: 0x003A5CE0 - 0x003A5CF3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5CE0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5CE0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD05D04)); /* fdiv dword ptr [0xd05d04] */
    MEMF(0xD05D0C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5D00
 * Original: 0x003A5D00 - 0x003A5D0B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5D00(void)
{
    int _cf = 0; /* carry flag */

loc_003A5D00: ;
    MEM32(0xD08A80) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5D10
 * Original: 0x003A5D10 - 0x003A5D1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5D10(void)
{
    int _cf = 0; /* carry flag */

loc_003A5D10: ;
    MEM32(0xD08A88) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5D20
 * Original: 0x003A5D20 - 0x003A5D2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5D20(void)
{
    int _cf = 0; /* carry flag */

loc_003A5D20: ;
    MEM32(0xD08A84) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A5D30
 * Original: 0x003A5D30 - 0x003A5D43 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5D30(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5D30: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD08A80)); /* fdiv dword ptr [0xd08a80] */
    MEMF(0xD08A8C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5D50
 * Original: 0x003A5D50 - 0x003A5D63 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A5D50(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A5D50: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD08A88)); /* fdiv dword ptr [0xd08a88] */
    MEMF(0xD12F90) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A5D70
 * Original: 0x003A5D70 - 0x003A5D7C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5D70: ;
    PUSH32(esp, 0x3AF410);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5D7Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A5D7A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A5D80
 * Original: 0x003A5D80 - 0x003A5DB6 (54 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5D80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xD05D10;
    edi = 0x10;
    /* nop */

loc_003A5D90: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5D97u); RECOMP_ABI_CALL(0x002D0FB0u, sub_002D0FB0); /* call 0x002D0FB0 */

loc_003A5D97: ;
    MEM32(esi) = 0x495C0C;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x80)) >> 32) & 1);
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A5D90; /* jne: not equal / not zero */

loc_003A5DA6: ;
    PUSH32(esp, 0x3AF420);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5DB0u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A5DB0: ;
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
 * sub_003A5DC0
 * Original: 0x003A5DC0 - 0x003A5DF6 (54 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5DC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xD16B50;
    edi = 0x10;
    /* nop */

loc_003A5DD0: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5DD7u); RECOMP_ABI_CALL(0x002D0FB0u, sub_002D0FB0); /* call 0x002D0FB0 */

loc_003A5DD7: ;
    MEM32(esi) = 0x495C0C;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x80)) >> 32) & 1);
    esi = esi + 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A5DD0; /* jne: not equal / not zero */

loc_003A5DE6: ;
    PUSH32(esp, 0x3AF440);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5DF0u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A5DF0: ;
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
 * sub_003A5E00
 * Original: 0x003A5E00 - 0x003A5E74 (116 bytes, 23 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5E00: ;
    ecx = 0x495C6C;
    eax = 0xD167A0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5E0Fu); RECOMP_ABI_CALL(0x002DAF70u, sub_002DAF70); /* call 0x002DAF70 */

loc_003A5E0F: ;
    SET_LO8(edx, MEM8(0xD16838));
    eax = 0xD16810;
    MEM32(0xD16810) = eax;
    MEM32(0xD16818) = eax;
    MEM32(0xD16814) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0xD1681C) = eax;
    MEM32(0xD16820) = eax;
    SET_LO8(eax, MEM8(0xD16824));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & ((0xFE) & 0xFFu));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & ((0xFC) & 0xFFu));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, 0x3AF460);
    MEM8(0xD16824) = LO8(eax);
    MEM32(0xD167A0) = 0x495B00;
    MEM32(0xD16834) = 0;
    MEM32(0xD16830) = 0;
    MEM8(0xD16838) = LO8(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5E72u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A5E72: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A5E80
 * Original: 0x003A5E80 - 0x003A5F43 (195 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5E80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0xD117B0;
    MEM32(esp + 0x10) = 0x1E;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003A5E94: ;
    eax = edi + -128;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5E9Cu); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_003A5E9C: ;
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
    eax = 0x3F800000;
    MEM32(edi + 0x24) = eax;
    MEM32(edi + 0x28) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x3A));
    MEM16(edi + 0x20) = LO16(ebp);
    MEM16(edi + 0x22) = LO16(ebp);
    MEM16(edi + 0x2C) = LO16(ebp);
    MEM16(edi + 0x2E) = LO16(ebp);
    MEM16(edi + 0x32) = LO16(ebp);
    MEM16(edi + 0x34) = 1;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFE10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
    PUSH32(esp, 0x003A5F1Bu); RECOMP_ABI_CALL(0x0025BA00u, sub_0025BA00); /* call 0x0025BA00 */

loc_003A5F1B: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xD0)) >> 32) & 1);
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_003A5E94; /* jne: not equal / not zero */

loc_003A5F30: ;
    PUSH32(esp, 0x3AF480);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5F3Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A5F3A: ;
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
 * sub_003A5F50
 * Original: 0x003A5F50 - 0x003A6013 (195 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A5F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A5F50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0xD13020;
    MEM32(esp + 0x10) = 0x40;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003A5F64: ;
    eax = edi + -128;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A5F6Cu); RECOMP_ABI_CALL(0x002DAEC0u, sub_002DAEC0); /* call 0x002DAEC0 */

loc_003A5F6C: ;
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
    eax = 0x3F800000;
    MEM32(edi + 0x24) = eax;
    MEM32(edi + 0x28) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0x3A));
    MEM16(edi + 0x20) = LO16(ebp);
    MEM16(edi + 0x22) = LO16(ebp);
    MEM16(edi + 0x2C) = LO16(ebp);
    MEM16(edi + 0x2E) = LO16(ebp);
    MEM16(edi + 0x32) = LO16(ebp);
    MEM16(edi + 0x34) = 1;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFE10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
    PUSH32(esp, 0x003A5FEBu); RECOMP_ABI_CALL(0x0025BA00u, sub_0025BA00); /* call 0x0025BA00 */

loc_003A5FEB: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xE0)) >> 32) & 1);
    edi = edi + 0xE0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_003A5F64; /* jne: not equal / not zero */

loc_003A6000: ;
    PUSH32(esp, 0x3AF610);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A600Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */

loc_003A600A: ;
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
 * sub_003A6020
 * Original: 0x003A6020 - 0x003A6042 (34 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6020(void)
{
    int _cf = 0; /* carry flag */

loc_003A6020: ;
    eax = MEM32(0x4ACE18);
    MEM8(0xD16840) = LO8(eax);
    MEM8(0xD16841) = HI8(eax);
    SET_LO16(eax, MEM16(0x4ACE1A));
    MEM8(0xD16842) = LO8(eax);
    MEM8(0xD16843) = HI8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003A6050
 * Original: 0x003A6050 - 0x003A605B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6050(void)
{
    int _cf = 0; /* carry flag */

loc_003A6050: ;
    MEM32(0xD17350) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6060
 * Original: 0x003A6060 - 0x003A606B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6060(void)
{
    int _cf = 0; /* carry flag */

loc_003A6060: ;
    MEM32(0xD17358) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6070
 * Original: 0x003A6070 - 0x003A607B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6070(void)
{
    int _cf = 0; /* carry flag */

loc_003A6070: ;
    MEM32(0xD17354) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6080
 * Original: 0x003A6080 - 0x003A6093 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6080(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6080: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD17350)); /* fdiv dword ptr [0xd17350] */
    MEMF(0xD1735C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A60A0
 * Original: 0x003A60A0 - 0x003A60B3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A60A0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A60A0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD17358)); /* fdiv dword ptr [0xd17358] */
    MEMF(0xD17360) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A60C0
 * Original: 0x003A60C0 - 0x003A60CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A60C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A60C0: ;
    MEM32(0xD17364) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A60D0
 * Original: 0x003A60D0 - 0x003A60DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A60D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A60D0: ;
    MEM32(0xD1736C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A60E0
 * Original: 0x003A60E0 - 0x003A60EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A60E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A60E0: ;
    MEM32(0xD17368) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A60F0
 * Original: 0x003A60F0 - 0x003A6103 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A60F0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A60F0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD17364)); /* fdiv dword ptr [0xd17364] */
    MEMF(0xD17370) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6110
 * Original: 0x003A6110 - 0x003A6123 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6110(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6110: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD1736C)); /* fdiv dword ptr [0xd1736c] */
    MEMF(0xD17374) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6130
 * Original: 0x003A6130 - 0x003A615C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A6130: ;
    edx = 0x495C98;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x44);
    /* nop */

loc_003A6140: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003A6140; /* jne: not equal / not zero */

loc_003A6156: ;
    MEM32(0xD17378) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A6160
 * Original: 0x003A6160 - 0x003A616B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6160(void)
{
    int _cf = 0; /* carry flag */

loc_003A6160: ;
    MEM32(0xD1737C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6170
 * Original: 0x003A6170 - 0x003A617B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6170(void)
{
    int _cf = 0; /* carry flag */

loc_003A6170: ;
    MEM32(0xD17384) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6180
 * Original: 0x003A6180 - 0x003A618B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6180(void)
{
    int _cf = 0; /* carry flag */

loc_003A6180: ;
    MEM32(0xD17380) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6190
 * Original: 0x003A6190 - 0x003A61A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6190(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6190: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD1737C)); /* fdiv dword ptr [0xd1737c] */
    MEMF(0xD17388) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A61B0
 * Original: 0x003A61B0 - 0x003A61C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A61B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A61B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD17384)); /* fdiv dword ptr [0xd17384] */
    MEMF(0xD1738C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A61D0
 * Original: 0x003A61D0 - 0x003A61DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A61D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A61D0: ;
    MEM32(0xD17390) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A61E0
 * Original: 0x003A61E0 - 0x003A61EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A61E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A61E0: ;
    MEM32(0xD17398) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A61F0
 * Original: 0x003A61F0 - 0x003A61FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A61F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A61F0: ;
    MEM32(0xD17394) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6200
 * Original: 0x003A6200 - 0x003A6213 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6200(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6200: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD17390)); /* fdiv dword ptr [0xd17390] */
    MEMF(0xD1739C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6220
 * Original: 0x003A6220 - 0x003A6233 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6220(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6220: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD17398)); /* fdiv dword ptr [0xd17398] */
    MEMF(0xD173A0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6240
 * Original: 0x003A6240 - 0x003A624C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6240: ;
    PUSH32(esp, 0x3AF7A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A624Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A624A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6250
 * Original: 0x003A6250 - 0x003A625C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6250: ;
    PUSH32(esp, 0x3AF7B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A625Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A625A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6260
 * Original: 0x003A6260 - 0x003A626B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6260(void)
{
    int _cf = 0; /* carry flag */

loc_003A6260: ;
    MEM32(0xD49394) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6270
 * Original: 0x003A6270 - 0x003A627B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6270(void)
{
    int _cf = 0; /* carry flag */

loc_003A6270: ;
    MEM32(0xD4939C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6280
 * Original: 0x003A6280 - 0x003A628B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6280(void)
{
    int _cf = 0; /* carry flag */

loc_003A6280: ;
    MEM32(0xD49398) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6290
 * Original: 0x003A6290 - 0x003A62A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6290(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6290: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD49394)); /* fdiv dword ptr [0xd49394] */
    MEMF(0xD493A0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A62B0
 * Original: 0x003A62B0 - 0x003A62C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A62B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A62B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD4939C)); /* fdiv dword ptr [0xd4939c] */
    MEMF(0xD493A4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A62D0
 * Original: 0x003A62D0 - 0x003A62FC (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A62D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A62D0: ;
    edx = 0x495CD4;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x70);
    /* nop */

loc_003A62E0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003A62E0; /* jne: not equal / not zero */

loc_003A62F6: ;
    MEM32(0xD493A8) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A6300
 * Original: 0x003A6300 - 0x003A630C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6300: ;
    PUSH32(esp, 0x3AF7C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A630Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A630A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6310
 * Original: 0x003A6310 - 0x003A631C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A6310: ;
    PUSH32(esp, 0x3AF7D0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A631Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A631A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6320
 * Original: 0x003A6320 - 0x003A632B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6320(void)
{
    int _cf = 0; /* carry flag */

loc_003A6320: ;
    MEM32(0xD494B4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6330
 * Original: 0x003A6330 - 0x003A633B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6330(void)
{
    int _cf = 0; /* carry flag */

loc_003A6330: ;
    MEM32(0xD494BC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6340
 * Original: 0x003A6340 - 0x003A634B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6340(void)
{
    int _cf = 0; /* carry flag */

loc_003A6340: ;
    MEM32(0xD494B8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6350
 * Original: 0x003A6350 - 0x003A6363 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6350(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6350: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD494B4)); /* fdiv dword ptr [0xd494b4] */
    MEMF(0xD494C0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6370
 * Original: 0x003A6370 - 0x003A6383 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6370(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6370: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD494BC)); /* fdiv dword ptr [0xd494bc] */
    MEMF(0xD494C4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6390
 * Original: 0x003A6390 - 0x003A639B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6390(void)
{
    int _cf = 0; /* carry flag */

loc_003A6390: ;
    MEM32(0xD494C8) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A63A0
 * Original: 0x003A63A0 - 0x003A63AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A63A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A63A0: ;
    MEM32(0xD494D0) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A63B0
 * Original: 0x003A63B0 - 0x003A63BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A63B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A63B0: ;
    MEM32(0xD494CC) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A63C0
 * Original: 0x003A63C0 - 0x003A63D3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A63C0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A63C0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD494C8)); /* fdiv dword ptr [0xd494c8] */
    MEMF(0xD494D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A63E0
 * Original: 0x003A63E0 - 0x003A63F3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A63E0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A63E0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD494D0)); /* fdiv dword ptr [0xd494d0] */
    MEMF(0xD494D8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6400
 * Original: 0x003A6400 - 0x003A640B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6400(void)
{
    int _cf = 0; /* carry flag */

loc_003A6400: ;
    MEM32(0xD494DC) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6410
 * Original: 0x003A6410 - 0x003A641B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6410(void)
{
    int _cf = 0; /* carry flag */

loc_003A6410: ;
    MEM32(0xD494E4) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6420
 * Original: 0x003A6420 - 0x003A642B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6420(void)
{
    int _cf = 0; /* carry flag */

loc_003A6420: ;
    MEM32(0xD494E0) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6430
 * Original: 0x003A6430 - 0x003A6443 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6430(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6430: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD494DC)); /* fdiv dword ptr [0xd494dc] */
    MEMF(0xD494E8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6450
 * Original: 0x003A6450 - 0x003A6463 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6450(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6450: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD494E4)); /* fdiv dword ptr [0xd494e4] */
    MEMF(0xD494EC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6470
 * Original: 0x003A6470 - 0x003A647B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6470(void)
{
    int _cf = 0; /* carry flag */

loc_003A6470: ;
    MEM32(0xD4D4F4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6480
 * Original: 0x003A6480 - 0x003A648B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6480(void)
{
    int _cf = 0; /* carry flag */

loc_003A6480: ;
    MEM32(0xD4D4FC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6490
 * Original: 0x003A6490 - 0x003A649B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6490(void)
{
    int _cf = 0; /* carry flag */

loc_003A6490: ;
    MEM32(0xD4D4F8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A64A0
 * Original: 0x003A64A0 - 0x003A64B3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A64A0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A64A0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD4D4F4)); /* fdiv dword ptr [0xd4d4f4] */
    MEMF(0xD4D500) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A64C0
 * Original: 0x003A64C0 - 0x003A64D3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A64C0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A64C0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD4D4FC)); /* fdiv dword ptr [0xd4d4fc] */
    MEMF(0xD4D504) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A64E0
 * Original: 0x003A64E0 - 0x003A64EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A64E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A64E0: ;
    MEM32(0xD5550C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A64F0
 * Original: 0x003A64F0 - 0x003A64FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A64F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A64F0: ;
    MEM32(0xD55514) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6500
 * Original: 0x003A6500 - 0x003A650B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6500(void)
{
    int _cf = 0; /* carry flag */

loc_003A6500: ;
    MEM32(0xD55510) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6510
 * Original: 0x003A6510 - 0x003A6523 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6510(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6510: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5550C)); /* fdiv dword ptr [0xd5550c] */
    MEMF(0xD55518) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6530
 * Original: 0x003A6530 - 0x003A6543 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6530(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6530: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD55514)); /* fdiv dword ptr [0xd55514] */
    MEMF(0xD5551C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6550
 * Original: 0x003A6550 - 0x003A655B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6550(void)
{
    int _cf = 0; /* carry flag */

loc_003A6550: ;
    MEM32(0xD555A4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6560
 * Original: 0x003A6560 - 0x003A656B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6560(void)
{
    int _cf = 0; /* carry flag */

loc_003A6560: ;
    MEM32(0xD555AC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6570
 * Original: 0x003A6570 - 0x003A657B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6570(void)
{
    int _cf = 0; /* carry flag */

loc_003A6570: ;
    MEM32(0xD555A8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6580
 * Original: 0x003A6580 - 0x003A6593 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6580(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6580: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD555A4)); /* fdiv dword ptr [0xd555a4] */
    MEMF(0xD555B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A65A0
 * Original: 0x003A65A0 - 0x003A65B3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A65A0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A65A0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD555AC)); /* fdiv dword ptr [0xd555ac] */
    MEMF(0xD555B4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A65C0
 * Original: 0x003A65C0 - 0x003A65CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A65C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A65C0: ;
    MEM32(0xD575BC) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A65D0
 * Original: 0x003A65D0 - 0x003A65DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A65D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A65D0: ;
    MEM32(0xD575C4) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A65E0
 * Original: 0x003A65E0 - 0x003A65EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A65E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A65E0: ;
    MEM32(0xD575C0) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A65F0
 * Original: 0x003A65F0 - 0x003A6603 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A65F0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A65F0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD575BC)); /* fdiv dword ptr [0xd575bc] */
    MEMF(0xD575C8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6610
 * Original: 0x003A6610 - 0x003A6623 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6610(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6610: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD575C4)); /* fdiv dword ptr [0xd575c4] */
    MEMF(0xD575CC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6630
 * Original: 0x003A6630 - 0x003A665C (44 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A6630: ;
    edx = 0x495E40;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x69);
    /* nop */

loc_003A6640: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003A6640; /* jne: not equal / not zero */

loc_003A6656: ;
    MEM32(0xD575D0) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A6660
 * Original: 0x003A6660 - 0x003A666B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6660(void)
{
    int _cf = 0; /* carry flag */

loc_003A6660: ;
    MEM32(0xD575D4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6670
 * Original: 0x003A6670 - 0x003A667B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6670(void)
{
    int _cf = 0; /* carry flag */

loc_003A6670: ;
    MEM32(0xD575DC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6680
 * Original: 0x003A6680 - 0x003A668B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6680(void)
{
    int _cf = 0; /* carry flag */

loc_003A6680: ;
    MEM32(0xD575D8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6690
 * Original: 0x003A6690 - 0x003A66A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6690(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6690: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD575D4)); /* fdiv dword ptr [0xd575d4] */
    MEMF(0xD575E0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A66B0
 * Original: 0x003A66B0 - 0x003A66C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A66B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A66B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD575DC)); /* fdiv dword ptr [0xd575dc] */
    MEMF(0xD575E4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A66D0
 * Original: 0x003A66D0 - 0x003A66DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A66D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A66D0: ;
    PUSH32(esp, 0x3AF7E0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A66DAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A66DA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A66E0
 * Original: 0x003A66E0 - 0x003A66EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A66E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A66E0: ;
    PUSH32(esp, 0x3AF800);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A66EAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A66EA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A66F0
 * Original: 0x003A66F0 - 0x003A66FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A66F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A66F0: ;
    PUSH32(esp, 0x3AF820);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A66FAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A66FA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A6700
 * Original: 0x003A6700 - 0x003A670B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6700(void)
{
    int _cf = 0; /* carry flag */

loc_003A6700: ;
    MEM32(0xD575E8) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6710
 * Original: 0x003A6710 - 0x003A671B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6710(void)
{
    int _cf = 0; /* carry flag */

loc_003A6710: ;
    MEM32(0xD575F0) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6720
 * Original: 0x003A6720 - 0x003A672B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6720(void)
{
    int _cf = 0; /* carry flag */

loc_003A6720: ;
    MEM32(0xD575EC) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6730
 * Original: 0x003A6730 - 0x003A6743 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6730(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6730: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD575E8)); /* fdiv dword ptr [0xd575e8] */
    MEMF(0xD575F4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6750
 * Original: 0x003A6750 - 0x003A6763 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6750(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6750: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD575F0)); /* fdiv dword ptr [0xd575f0] */
    MEMF(0xD575F8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6770
 * Original: 0x003A6770 - 0x003A677B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6770(void)
{
    int _cf = 0; /* carry flag */

loc_003A6770: ;
    MEM32(0xD575FC) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6780
 * Original: 0x003A6780 - 0x003A678B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6780(void)
{
    int _cf = 0; /* carry flag */

loc_003A6780: ;
    MEM32(0xD57604) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6790
 * Original: 0x003A6790 - 0x003A679B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6790(void)
{
    int _cf = 0; /* carry flag */

loc_003A6790: ;
    MEM32(0xD57600) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A67A0
 * Original: 0x003A67A0 - 0x003A67B3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A67A0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A67A0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD575FC)); /* fdiv dword ptr [0xd575fc] */
    MEMF(0xD57608) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A67C0
 * Original: 0x003A67C0 - 0x003A67D3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A67C0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A67C0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD57604)); /* fdiv dword ptr [0xd57604] */
    MEMF(0xD5760C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A67E0
 * Original: 0x003A67E0 - 0x003A680C (44 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A67E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A67E0: ;
    edx = 0x495E74;
    eax = 0x811C9DC5u;
    SET_LO8(ecx, 0x52);
    /* nop */

loc_003A67F0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003A67F0; /* jne: not equal / not zero */

loc_003A6806: ;
    MEM32(0xD57610) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) ? 0x80u : 0u) | ((((((uint8_t)(((uint8_t)(_fa) ^ (uint8_t)(_fb)) & ((uint8_t)(_fa) ^ (uint8_t)((_fa) - (_fb))))) >> 7) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A6810
 * Original: 0x003A6810 - 0x003A681B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6810(void)
{
    int _cf = 0; /* carry flag */

loc_003A6810: ;
    MEM32(0xD57614) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6820
 * Original: 0x003A6820 - 0x003A682B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6820(void)
{
    int _cf = 0; /* carry flag */

loc_003A6820: ;
    MEM32(0xD5761C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6830
 * Original: 0x003A6830 - 0x003A683B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6830(void)
{
    int _cf = 0; /* carry flag */

loc_003A6830: ;
    MEM32(0xD57618) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6840
 * Original: 0x003A6840 - 0x003A6853 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6840(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6840: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD57614)); /* fdiv dword ptr [0xd57614] */
    MEMF(0xD57620) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6860
 * Original: 0x003A6860 - 0x003A6873 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6860(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6860: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5761C)); /* fdiv dword ptr [0xd5761c] */
    MEMF(0xD57624) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A6880
 * Original: 0x003A6880 - 0x003A688B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6880(void)
{
    int _cf = 0; /* carry flag */

loc_003A6880: ;
    MEM32(0xD57628) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6890
 * Original: 0x003A6890 - 0x003A689B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6890(void)
{
    int _cf = 0; /* carry flag */

loc_003A6890: ;
    MEM32(0xD57630) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A68A0
 * Original: 0x003A68A0 - 0x003A68AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A68A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A68A0: ;
    MEM32(0xD5762C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A68B0
 * Original: 0x003A68B0 - 0x003A68C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A68B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A68B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD57628)); /* fdiv dword ptr [0xd57628] */
    MEMF(0xD57634) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A68D0
 * Original: 0x003A68D0 - 0x003A68E3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A68D0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A68D0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD57630)); /* fdiv dword ptr [0xd57630] */
    MEMF(0xD57638) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A68F0
 * Original: 0x003A68F0 - 0x003A68FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A68F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A68F0: ;
    MEM32(0xD5763C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6900
 * Original: 0x003A6900 - 0x003A690B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6900(void)
{
    int _cf = 0; /* carry flag */

loc_003A6900: ;
    MEM32(0xD57644) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6910
 * Original: 0x003A6910 - 0x003A691B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A6910(void)
{
    int _cf = 0; /* carry flag */

loc_003A6910: ;
    MEM32(0xD57640) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A6920
 * Original: 0x003A6920 - 0x003A6933 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A6920(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A6920: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xD5763C)); /* fdiv dword ptr [0xd5763c] */
    MEMF(0xD57648) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
