/**
 * Star Wars Battlefront 2 - Recompiled code chunk 68
 * Functions: 250 (0x003A32B0 - 0x003A49F0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003A32B0
 * Original: 0x003A32B0 - 0x003A32C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A32B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A32B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD7A4)); /* fdiv dword ptr [0xbfd7a4] */
    MEMF(0xBFD7B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A32D0
 * Original: 0x003A32D0 - 0x003A32E3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A32D0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A32D0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD7AC)); /* fdiv dword ptr [0xbfd7ac] */
    MEMF(0xBFD7B4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A32F0
 * Original: 0x003A32F0 - 0x003A32FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A32F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A32F0: ;
    MEM32(0xBFD7B8) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3300
 * Original: 0x003A3300 - 0x003A330B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3300(void)
{
    int _cf = 0; /* carry flag */

loc_003A3300: ;
    MEM32(0xBFD7C0) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3310
 * Original: 0x003A3310 - 0x003A331B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3310(void)
{
    int _cf = 0; /* carry flag */

loc_003A3310: ;
    MEM32(0xBFD7BC) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3320
 * Original: 0x003A3320 - 0x003A3333 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3320(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3320: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD7B8)); /* fdiv dword ptr [0xbfd7b8] */
    MEMF(0xBFD7C4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3340
 * Original: 0x003A3340 - 0x003A3353 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3340(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3340: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD7C0)); /* fdiv dword ptr [0xbfd7c0] */
    MEMF(0xBFD7C8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3360
 * Original: 0x003A3360 - 0x003A3382 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3360: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AEE30);
    MEM32(0x4DABD0) = eax;
    MEM32(0x4DABD4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3380u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3380: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3390
 * Original: 0x003A3390 - 0x003A339C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3390: ;
    PUSH32(esp, 0x3AEE40);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A339Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A339A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A33A0
 * Original: 0x003A33A0 - 0x003A33AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A33A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A33A0: ;
    MEM32(0xBFD7CC) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A33B0
 * Original: 0x003A33B0 - 0x003A33BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A33B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A33B0: ;
    MEM32(0xBFD7D4) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A33C0
 * Original: 0x003A33C0 - 0x003A33CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A33C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A33C0: ;
    MEM32(0xBFD7D0) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A33D0
 * Original: 0x003A33D0 - 0x003A33E3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A33D0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A33D0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD7CC)); /* fdiv dword ptr [0xbfd7cc] */
    MEMF(0xBFD7D8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A33F0
 * Original: 0x003A33F0 - 0x003A3403 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A33F0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A33F0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD7D4)); /* fdiv dword ptr [0xbfd7d4] */
    MEMF(0xBFD7DC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3410
 * Original: 0x003A3410 - 0x003A341B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3410(void)
{
    int _cf = 0; /* carry flag */

loc_003A3410: ;
    MEM32(0xBFD7E0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3420
 * Original: 0x003A3420 - 0x003A342B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3420(void)
{
    int _cf = 0; /* carry flag */

loc_003A3420: ;
    MEM32(0xBFD7E8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3430
 * Original: 0x003A3430 - 0x003A343B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3430(void)
{
    int _cf = 0; /* carry flag */

loc_003A3430: ;
    MEM32(0xBFD7E4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3440
 * Original: 0x003A3440 - 0x003A3453 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3440(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3440: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD7E0)); /* fdiv dword ptr [0xbfd7e0] */
    MEMF(0xBFD7EC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3460
 * Original: 0x003A3460 - 0x003A3473 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3460(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3460: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD7E8)); /* fdiv dword ptr [0xbfd7e8] */
    MEMF(0xBFD7F0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3480
 * Original: 0x003A3480 - 0x003A348C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3480: ;
    PUSH32(esp, 0x3AEE50);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A348Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A348A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3490
 * Original: 0x003A3490 - 0x003A349C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3490: ;
    PUSH32(esp, 0x3AEEA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A349Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A349A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A34A0
 * Original: 0x003A34A0 - 0x003A34AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A34A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A34A0: ;
    MEM32(0xBFD8A0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A34B0
 * Original: 0x003A34B0 - 0x003A34BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A34B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A34B0: ;
    MEM32(0xBFD8A8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A34C0
 * Original: 0x003A34C0 - 0x003A34CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A34C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A34C0: ;
    MEM32(0xBFD8A4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A34D0
 * Original: 0x003A34D0 - 0x003A34E3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A34D0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A34D0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD8A0)); /* fdiv dword ptr [0xbfd8a0] */
    MEMF(0xBFD8AC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A34F0
 * Original: 0x003A34F0 - 0x003A3503 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A34F0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A34F0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFD8A8)); /* fdiv dword ptr [0xbfd8a8] */
    MEMF(0xBFD8B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3510
 * Original: 0x003A3510 - 0x003A351C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3510: ;
    PUSH32(esp, 0x3AEEC0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A351Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A351A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3520
 * Original: 0x003A3520 - 0x003A3542 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3520: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AEED0);
    MEM32(0x4DAD84) = eax;
    MEM32(0x4DAD88) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3540u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3540: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3550
 * Original: 0x003A3550 - 0x003A3572 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3550: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AEEE0);
    MEM32(0x4DADA0) = eax;
    MEM32(0x4DADA4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3570u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3570: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3580
 * Original: 0x003A3580 - 0x003A35AA (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3580: ;
    eax = 0xBFD858;
    ecx = 6;
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    /* nop */

loc_003A3590: ;
    MEM32(eax) = eax;
    MEM32(eax + 4) = eax;
    MEM8(eax + 8) = LO8(edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A3590; /* jne: not equal / not zero */

loc_003A359E: ;
    PUSH32(esp, 0x3AEEF0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A35A8u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A35A8: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A35B0
 * Original: 0x003A35B0 - 0x003A35BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A35B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A35B0: ;
    PUSH32(esp, 0x3AEF10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A35BAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A35BA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A35C0
 * Original: 0x003A35C0 - 0x003A35FA (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A35C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A35C0: ;
    eax = 0xBFD8E4;
    edx = 0x18;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003A35D0: ;
    MEM32(eax + -44) = ecx;
    MEM32(eax + -16) = 0x3F800000;
    MEM32(eax + -12) = ecx;
    MEM32(eax + -8) = ecx;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x34)) >> 32) & 1);
    eax = eax + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A35D0; /* jne: not equal / not zero */

loc_003A35EE: ;
    PUSH32(esp, 0x3AEF20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A35F8u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A35F8: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3600
 * Original: 0x003A3600 - 0x003A360C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3600: ;
    PUSH32(esp, 0x3AEF60);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A360Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A360A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3610
 * Original: 0x003A3610 - 0x003A361B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3610(void)
{
    int _cf = 0; /* carry flag */

loc_003A3610: ;
    MEM32(0xBFDDE0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3620
 * Original: 0x003A3620 - 0x003A362B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3620(void)
{
    int _cf = 0; /* carry flag */

loc_003A3620: ;
    MEM32(0xBFDDE8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3630
 * Original: 0x003A3630 - 0x003A363B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3630(void)
{
    int _cf = 0; /* carry flag */

loc_003A3630: ;
    MEM32(0xBFDDE4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3640
 * Original: 0x003A3640 - 0x003A3653 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3640(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3640: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFDDE0)); /* fdiv dword ptr [0xbfdde0] */
    MEMF(0xBFDDEC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3660
 * Original: 0x003A3660 - 0x003A3673 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3660(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3660: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFDDE8)); /* fdiv dword ptr [0xbfdde8] */
    MEMF(0xBFDDF0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3680
 * Original: 0x003A3680 - 0x003A368C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3680: ;
    PUSH32(esp, 0x3AEF70);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A368Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A368A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3690
 * Original: 0x003A3690 - 0x003A369B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3690(void)
{
    int _cf = 0; /* carry flag */

loc_003A3690: ;
    MEM32(0xBFDDF4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A36A0
 * Original: 0x003A36A0 - 0x003A36AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A36A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A36A0: ;
    MEM32(0xBFDDFC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A36B0
 * Original: 0x003A36B0 - 0x003A36BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A36B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A36B0: ;
    MEM32(0xBFDDF8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A36C0
 * Original: 0x003A36C0 - 0x003A36D3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A36C0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A36C0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFDDF4)); /* fdiv dword ptr [0xbfddf4] */
    MEMF(0xBFDE00) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A36E0
 * Original: 0x003A36E0 - 0x003A36F3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A36E0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A36E0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFDDFC)); /* fdiv dword ptr [0xbfddfc] */
    MEMF(0xBFDE04) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3700
 * Original: 0x003A3700 - 0x003A370C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3700: ;
    PUSH32(esp, 0x3AEF80);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A370Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A370A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3710
 * Original: 0x003A3710 - 0x003A371B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3710(void)
{
    int _cf = 0; /* carry flag */

loc_003A3710: ;
    MEM32(0xBFDE08) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3720
 * Original: 0x003A3720 - 0x003A372B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3720(void)
{
    int _cf = 0; /* carry flag */

loc_003A3720: ;
    MEM32(0xBFDE10) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3730
 * Original: 0x003A3730 - 0x003A373B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3730(void)
{
    int _cf = 0; /* carry flag */

loc_003A3730: ;
    MEM32(0xBFDE0C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3740
 * Original: 0x003A3740 - 0x003A3753 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3740(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3740: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFDE08)); /* fdiv dword ptr [0xbfde08] */
    MEMF(0xBFDE14) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3760
 * Original: 0x003A3760 - 0x003A3773 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3760(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3760: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFDE10)); /* fdiv dword ptr [0xbfde10] */
    MEMF(0xBFDE18) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3780
 * Original: 0x003A3780 - 0x003A378B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3780(void)
{
    int _cf = 0; /* carry flag */

loc_003A3780: ;
    MEM32(0xBFFFE0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3790
 * Original: 0x003A3790 - 0x003A379B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3790(void)
{
    int _cf = 0; /* carry flag */

loc_003A3790: ;
    MEM32(0xBFFFE8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A37A0
 * Original: 0x003A37A0 - 0x003A37AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A37A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A37A0: ;
    MEM32(0xBFFFE4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A37B0
 * Original: 0x003A37B0 - 0x003A37C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A37B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A37B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFFFE0)); /* fdiv dword ptr [0xbfffe0] */
    MEMF(0xBFFFEC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A37D0
 * Original: 0x003A37D0 - 0x003A37E3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A37D0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A37D0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xBFFFE8)); /* fdiv dword ptr [0xbfffe8] */
    MEMF(0xBFFFF0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A37F0
 * Original: 0x003A37F0 - 0x003A382C (60 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A37F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A37F0: ;
    eax = 0xC0000C;
    edx = 0x168;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003A3800: ;
    MEM32(eax + -20) = ecx;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = 0xB74958;
    MEM32(eax + 4) = 0xB74958;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0x10) = 4;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x28)) >> 32) & 1);
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003A3800; /* jne: not equal / not zero */

loc_003A3820: ;
    PUSH32(esp, 0x3AEFA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A382Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A382A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3830
 * Original: 0x003A3830 - 0x003A383C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3830: ;
    PUSH32(esp, 0x3AEFB0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A383Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A383A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3840
 * Original: 0x003A3840 - 0x003A384C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3840: ;
    PUSH32(esp, 0x3AEFC0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A384Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A384A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3850
 * Original: 0x003A3850 - 0x003A3872 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3850: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AEFD0);
    MEM32(0x4DAED4) = eax;
    MEM32(0x4DAED8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3870u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3870: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3880
 * Original: 0x003A3880 - 0x003A388B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3880(void)
{
    int _cf = 0; /* carry flag */

loc_003A3880: ;
    MEM32(0xC03838) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3890
 * Original: 0x003A3890 - 0x003A389B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3890(void)
{
    int _cf = 0; /* carry flag */

loc_003A3890: ;
    MEM32(0xC03840) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A38A0
 * Original: 0x003A38A0 - 0x003A38AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A38A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A38A0: ;
    MEM32(0xC0383C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A38B0
 * Original: 0x003A38B0 - 0x003A38C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A38B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A38B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03838)); /* fdiv dword ptr [0xc03838] */
    MEMF(0xC03844) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A38D0
 * Original: 0x003A38D0 - 0x003A38E3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A38D0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A38D0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03840)); /* fdiv dword ptr [0xc03840] */
    MEMF(0xC03848) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A38F0
 * Original: 0x003A38F0 - 0x003A38FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A38F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A38F0: ;
    MEM32(0xC0384C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3900
 * Original: 0x003A3900 - 0x003A390B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3900(void)
{
    int _cf = 0; /* carry flag */

loc_003A3900: ;
    MEM32(0xC03854) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3910
 * Original: 0x003A3910 - 0x003A391B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3910(void)
{
    int _cf = 0; /* carry flag */

loc_003A3910: ;
    MEM32(0xC03850) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3920
 * Original: 0x003A3920 - 0x003A3933 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3920(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3920: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC0384C)); /* fdiv dword ptr [0xc0384c] */
    MEMF(0xC03858) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3940
 * Original: 0x003A3940 - 0x003A3953 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3940(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3940: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03854)); /* fdiv dword ptr [0xc03854] */
    MEMF(0xC0385C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3960
 * Original: 0x003A3960 - 0x003A396B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3960(void)
{
    int _cf = 0; /* carry flag */

loc_003A3960: ;
    MEM32(0xC03860) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3970
 * Original: 0x003A3970 - 0x003A397B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3970(void)
{
    int _cf = 0; /* carry flag */

loc_003A3970: ;
    MEM32(0xC03868) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3980
 * Original: 0x003A3980 - 0x003A398B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3980(void)
{
    int _cf = 0; /* carry flag */

loc_003A3980: ;
    MEM32(0xC03864) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3990
 * Original: 0x003A3990 - 0x003A39A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3990(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3990: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03860)); /* fdiv dword ptr [0xc03860] */
    MEMF(0xC0386C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A39B0
 * Original: 0x003A39B0 - 0x003A39C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A39B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A39B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03868)); /* fdiv dword ptr [0xc03868] */
    MEMF(0xC03870) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A39D0
 * Original: 0x003A39D0 - 0x003A3A0C (60 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A39D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003A39D0: ;
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
    MEM32(0xC03874) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003A3A10
 * Original: 0x003A3A10 - 0x003A3A1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3A10(void)
{
    int _cf = 0; /* carry flag */

loc_003A3A10: ;
    MEM32(0xC03878) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3A20
 * Original: 0x003A3A20 - 0x003A3A2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3A20(void)
{
    int _cf = 0; /* carry flag */

loc_003A3A20: ;
    MEM32(0xC03880) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3A30
 * Original: 0x003A3A30 - 0x003A3A3B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3A30(void)
{
    int _cf = 0; /* carry flag */

loc_003A3A30: ;
    MEM32(0xC0387C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3A40
 * Original: 0x003A3A40 - 0x003A3A53 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3A40(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3A40: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03878)); /* fdiv dword ptr [0xc03878] */
    MEMF(0xC03884) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3A60
 * Original: 0x003A3A60 - 0x003A3A73 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3A60(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3A60: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03880)); /* fdiv dword ptr [0xc03880] */
    MEMF(0xC03888) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3A80
 * Original: 0x003A3A80 - 0x003A3AA2 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3A80: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AEFE0);
    MEM32(0x4DAFA0) = eax;
    MEM32(0x4DAFA4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3AA0u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3AA0: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3AB0
 * Original: 0x003A3AB0 - 0x003A3ABC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3AB0: ;
    PUSH32(esp, 0x3AEFF0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3ABAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3ABA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3AC0
 * Original: 0x003A3AC0 - 0x003A3ACC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3AC0: ;
    PUSH32(esp, 0x3AF000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3ACAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3ACA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3AD0
 * Original: 0x003A3AD0 - 0x003A3AF2 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3AD0: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AF010);
    MEM32(0x4DB008) = eax;
    MEM32(0x4DB00C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3AF0u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3AF0: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3B00
 * Original: 0x003A3B00 - 0x003A3B0B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3B00(void)
{
    int _cf = 0; /* carry flag */

loc_003A3B00: ;
    MEM32(0xC0388C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3B10
 * Original: 0x003A3B10 - 0x003A3B1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3B10(void)
{
    int _cf = 0; /* carry flag */

loc_003A3B10: ;
    MEM32(0xC03894) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3B20
 * Original: 0x003A3B20 - 0x003A3B2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3B20(void)
{
    int _cf = 0; /* carry flag */

loc_003A3B20: ;
    MEM32(0xC03890) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3B30
 * Original: 0x003A3B30 - 0x003A3B43 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3B30(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3B30: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC0388C)); /* fdiv dword ptr [0xc0388c] */
    MEMF(0xC03898) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3B50
 * Original: 0x003A3B50 - 0x003A3B63 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3B50(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3B50: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03894)); /* fdiv dword ptr [0xc03894] */
    MEMF(0xC0389C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3B70
 * Original: 0x003A3B70 - 0x003A3B92 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3B70: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AF020);
    MEM32(0x4DB024) = eax;
    MEM32(0x4DB028) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3B90u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3B90: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3BA0
 * Original: 0x003A3BA0 - 0x003A3BC2 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3BA0: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AF030);
    MEM32(0x4DB040) = eax;
    MEM32(0x4DB044) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3BC0u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3BC0: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3BD0
 * Original: 0x003A3BD0 - 0x003A3BF2 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3BD0: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AF040);
    MEM32(0x4DB05C) = eax;
    MEM32(0x4DB060) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3BF0u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3BF0: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3C00
 * Original: 0x003A3C00 - 0x003A3C22 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3C00: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AF050);
    MEM32(0x4DB078) = eax;
    MEM32(0x4DB07C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3C20u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3C20: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3C30
 * Original: 0x003A3C30 - 0x003A3C3C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3C30: ;
    PUSH32(esp, 0x3AF060);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3C3Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3C3A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3C40
 * Original: 0x003A3C40 - 0x003A3C4C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3C40: ;
    PUSH32(esp, 0x3AF070);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3C4Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3C4A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3C50
 * Original: 0x003A3C50 - 0x003A3C5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3C50(void)
{
    int _cf = 0; /* carry flag */

loc_003A3C50: ;
    MEM32(0xC038A0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3C60
 * Original: 0x003A3C60 - 0x003A3C6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3C60(void)
{
    int _cf = 0; /* carry flag */

loc_003A3C60: ;
    MEM32(0xC038A8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3C70
 * Original: 0x003A3C70 - 0x003A3C7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3C70(void)
{
    int _cf = 0; /* carry flag */

loc_003A3C70: ;
    MEM32(0xC038A4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3C80
 * Original: 0x003A3C80 - 0x003A3C93 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3C80(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3C80: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC038A0)); /* fdiv dword ptr [0xc038a0] */
    MEMF(0xC038AC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3CA0
 * Original: 0x003A3CA0 - 0x003A3CB3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3CA0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3CA0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC038A8)); /* fdiv dword ptr [0xc038a8] */
    MEMF(0xC038B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3CC0
 * Original: 0x003A3CC0 - 0x003A3CCB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3CC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A3CC0: ;
    MEM32(0xC038B4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3CD0
 * Original: 0x003A3CD0 - 0x003A3CDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3CD0(void)
{
    int _cf = 0; /* carry flag */

loc_003A3CD0: ;
    MEM32(0xC038BC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3CE0
 * Original: 0x003A3CE0 - 0x003A3CEB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3CE0(void)
{
    int _cf = 0; /* carry flag */

loc_003A3CE0: ;
    MEM32(0xC038B8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3CF0
 * Original: 0x003A3CF0 - 0x003A3D03 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3CF0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3CF0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC038B4)); /* fdiv dword ptr [0xc038b4] */
    MEMF(0xC038C0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3D10
 * Original: 0x003A3D10 - 0x003A3D23 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3D10(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3D10: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC038BC)); /* fdiv dword ptr [0xc038bc] */
    MEMF(0xC038C4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3D30
 * Original: 0x003A3D30 - 0x003A3D3B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3D30(void)
{
    int _cf = 0; /* carry flag */

loc_003A3D30: ;
    MEM32(0xC038C8) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3D40
 * Original: 0x003A3D40 - 0x003A3D4B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3D40(void)
{
    int _cf = 0; /* carry flag */

loc_003A3D40: ;
    MEM32(0xC038D0) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3D50
 * Original: 0x003A3D50 - 0x003A3D5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3D50(void)
{
    int _cf = 0; /* carry flag */

loc_003A3D50: ;
    MEM32(0xC038CC) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3D60
 * Original: 0x003A3D60 - 0x003A3D73 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3D60(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3D60: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC038C8)); /* fdiv dword ptr [0xc038c8] */
    MEMF(0xC038D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3D80
 * Original: 0x003A3D80 - 0x003A3D93 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3D80(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3D80: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC038D0)); /* fdiv dword ptr [0xc038d0] */
    MEMF(0xC038D8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3DA0
 * Original: 0x003A3DA0 - 0x003A3DAB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3DA0(void)
{
    int _cf = 0; /* carry flag */

loc_003A3DA0: ;
    MEM32(0xC038F4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3DB0
 * Original: 0x003A3DB0 - 0x003A3DBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3DB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A3DB0: ;
    MEM32(0xC038FC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3DC0
 * Original: 0x003A3DC0 - 0x003A3DCB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3DC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A3DC0: ;
    MEM32(0xC038F8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3DD0
 * Original: 0x003A3DD0 - 0x003A3DE3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3DD0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3DD0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC038F4)); /* fdiv dword ptr [0xc038f4] */
    MEMF(0xC03900) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3DF0
 * Original: 0x003A3DF0 - 0x003A3E03 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3DF0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3DF0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC038FC)); /* fdiv dword ptr [0xc038fc] */
    MEMF(0xC03904) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3E10
 * Original: 0x003A3E10 - 0x003A3E1C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3E10: ;
    PUSH32(esp, 0x3AF080);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3E1Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3E1A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3E20
 * Original: 0x003A3E20 - 0x003A3E2C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3E20: ;
    PUSH32(esp, 0x3AF0B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3E2Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3E2A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3E30
 * Original: 0x003A3E30 - 0x003A3E3C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3E30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3E30: ;
    PUSH32(esp, 0x3AF0E0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3E3Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3E3A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3E40
 * Original: 0x003A3E40 - 0x003A3E4C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3E40: ;
    PUSH32(esp, 0x3AF0F0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3E4Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3E4A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3E50
 * Original: 0x003A3E50 - 0x003A3E5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3E50(void)
{
    int _cf = 0; /* carry flag */

loc_003A3E50: ;
    MEM32(0xC03910) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3E60
 * Original: 0x003A3E60 - 0x003A3E6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3E60(void)
{
    int _cf = 0; /* carry flag */

loc_003A3E60: ;
    MEM32(0xC03918) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3E70
 * Original: 0x003A3E70 - 0x003A3E7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3E70(void)
{
    int _cf = 0; /* carry flag */

loc_003A3E70: ;
    MEM32(0xC03914) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3E80
 * Original: 0x003A3E80 - 0x003A3E93 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3E80(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3E80: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03910)); /* fdiv dword ptr [0xc03910] */
    MEMF(0xC0391C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3EA0
 * Original: 0x003A3EA0 - 0x003A3EB3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3EA0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3EA0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03918)); /* fdiv dword ptr [0xc03918] */
    MEMF(0xC03920) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3EC0
 * Original: 0x003A3EC0 - 0x003A3ECB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3EC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A3EC0: ;
    MEM32(0xC03924) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3ED0
 * Original: 0x003A3ED0 - 0x003A3EDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3ED0(void)
{
    int _cf = 0; /* carry flag */

loc_003A3ED0: ;
    MEM32(0xC0392C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3EE0
 * Original: 0x003A3EE0 - 0x003A3EEB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3EE0(void)
{
    int _cf = 0; /* carry flag */

loc_003A3EE0: ;
    MEM32(0xC03928) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3EF0
 * Original: 0x003A3EF0 - 0x003A3F03 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3EF0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3EF0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03924)); /* fdiv dword ptr [0xc03924] */
    MEMF(0xC03930) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3F10
 * Original: 0x003A3F10 - 0x003A3F23 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3F10(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3F10: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC0392C)); /* fdiv dword ptr [0xc0392c] */
    MEMF(0xC03934) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3F30
 * Original: 0x003A3F30 - 0x003A3F3B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3F30(void)
{
    int _cf = 0; /* carry flag */

loc_003A3F30: ;
    MEM32(0xC03938) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3F40
 * Original: 0x003A3F40 - 0x003A3F4B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3F40(void)
{
    int _cf = 0; /* carry flag */

loc_003A3F40: ;
    MEM32(0xC03940) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3F50
 * Original: 0x003A3F50 - 0x003A3F5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3F50(void)
{
    int _cf = 0; /* carry flag */

loc_003A3F50: ;
    MEM32(0xC0393C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3F60
 * Original: 0x003A3F60 - 0x003A3F73 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3F60(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3F60: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03938)); /* fdiv dword ptr [0xc03938] */
    MEMF(0xC03944) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3F80
 * Original: 0x003A3F80 - 0x003A3F93 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3F80(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3F80: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03940)); /* fdiv dword ptr [0xc03940] */
    MEMF(0xC03948) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A3FA0
 * Original: 0x003A3FA0 - 0x003A3FAC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A3FA0: ;
    PUSH32(esp, 0x3AF100);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A3FAAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A3FAA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A3FB0
 * Original: 0x003A3FB0 - 0x003A3FBB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3FB0(void)
{
    int _cf = 0; /* carry flag */

loc_003A3FB0: ;
    MEM32(0xC0394C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3FC0
 * Original: 0x003A3FC0 - 0x003A3FCB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3FC0(void)
{
    int _cf = 0; /* carry flag */

loc_003A3FC0: ;
    MEM32(0xC03954) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3FD0
 * Original: 0x003A3FD0 - 0x003A3FDB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A3FD0(void)
{
    int _cf = 0; /* carry flag */

loc_003A3FD0: ;
    MEM32(0xC03950) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A3FE0
 * Original: 0x003A3FE0 - 0x003A3FF3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A3FE0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A3FE0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC0394C)); /* fdiv dword ptr [0xc0394c] */
    MEMF(0xC03958) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4000
 * Original: 0x003A4000 - 0x003A4013 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4000(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4000: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03954)); /* fdiv dword ptr [0xc03954] */
    MEMF(0xC0395C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4020
 * Original: 0x003A4020 - 0x003A4042 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A4020: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AF110);
    MEM32(0x4DB0BC) = eax;
    MEM32(0x4DB0C0) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4040u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A4040: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A4050
 * Original: 0x003A4050 - 0x003A4072 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A4050: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AF120);
    MEM32(0x4DB0D8) = eax;
    MEM32(0x4DB0DC) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A4070u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A4070: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A4080
 * Original: 0x003A4080 - 0x003A40A2 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A4080: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AF130);
    MEM32(0x4DB0F4) = eax;
    MEM32(0x4DB0F8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A40A0u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A40A0: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A40B0
 * Original: 0x003A40B0 - 0x003A40BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A40B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A40B0: ;
    PUSH32(esp, 0x3AF140);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A40BAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A40BA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A40C0
 * Original: 0x003A40C0 - 0x003A40CC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A40C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A40C0: ;
    PUSH32(esp, 0x3AF150);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A40CAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A40CA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A40D0
 * Original: 0x003A40D0 - 0x003A40DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A40D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A40D0: ;
    PUSH32(esp, 0x3AF160);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A40DAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A40DA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A40E0
 * Original: 0x003A40E0 - 0x003A40EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A40E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A40E0: ;
    PUSH32(esp, 0x3AF170);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A40EAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A40EA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A40F0
 * Original: 0x003A40F0 - 0x003A40FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A40F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A40F0: ;
    MEM32(0xC03960) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4100
 * Original: 0x003A4100 - 0x003A410B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4100(void)
{
    int _cf = 0; /* carry flag */

loc_003A4100: ;
    MEM32(0xC03968) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4110
 * Original: 0x003A4110 - 0x003A411B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4110(void)
{
    int _cf = 0; /* carry flag */

loc_003A4110: ;
    MEM32(0xC03964) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4120
 * Original: 0x003A4120 - 0x003A4133 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4120(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4120: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03960)); /* fdiv dword ptr [0xc03960] */
    MEMF(0xC0396C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4140
 * Original: 0x003A4140 - 0x003A4153 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4140(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4140: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03968)); /* fdiv dword ptr [0xc03968] */
    MEMF(0xC03970) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4160
 * Original: 0x003A4160 - 0x003A416B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4160(void)
{
    int _cf = 0; /* carry flag */

loc_003A4160: ;
    MEM32(0xC03974) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4170
 * Original: 0x003A4170 - 0x003A417B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4170(void)
{
    int _cf = 0; /* carry flag */

loc_003A4170: ;
    MEM32(0xC0397C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4180
 * Original: 0x003A4180 - 0x003A418B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4180(void)
{
    int _cf = 0; /* carry flag */

loc_003A4180: ;
    MEM32(0xC03978) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4190
 * Original: 0x003A4190 - 0x003A41A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4190(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4190: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03974)); /* fdiv dword ptr [0xc03974] */
    MEMF(0xC03980) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A41B0
 * Original: 0x003A41B0 - 0x003A41C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A41B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A41B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC0397C)); /* fdiv dword ptr [0xc0397c] */
    MEMF(0xC03984) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A41D0
 * Original: 0x003A41D0 - 0x003A41DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A41D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A41D0: ;
    MEM32(0xC03988) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A41E0
 * Original: 0x003A41E0 - 0x003A41EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A41E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A41E0: ;
    MEM32(0xC03990) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A41F0
 * Original: 0x003A41F0 - 0x003A41FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A41F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A41F0: ;
    MEM32(0xC0398C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4200
 * Original: 0x003A4200 - 0x003A4213 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4200(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4200: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03988)); /* fdiv dword ptr [0xc03988] */
    MEMF(0xC03994) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4220
 * Original: 0x003A4220 - 0x003A4233 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4220(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4220: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03990)); /* fdiv dword ptr [0xc03990] */
    MEMF(0xC03998) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4240
 * Original: 0x003A4240 - 0x003A424B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4240(void)
{
    int _cf = 0; /* carry flag */

loc_003A4240: ;
    MEM32(0xC0399C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4250
 * Original: 0x003A4250 - 0x003A425B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4250(void)
{
    int _cf = 0; /* carry flag */

loc_003A4250: ;
    MEM32(0xC039A4) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4260
 * Original: 0x003A4260 - 0x003A426B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4260(void)
{
    int _cf = 0; /* carry flag */

loc_003A4260: ;
    MEM32(0xC039A0) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4270
 * Original: 0x003A4270 - 0x003A4283 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4270(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4270: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC0399C)); /* fdiv dword ptr [0xc0399c] */
    MEMF(0xC039A8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4290
 * Original: 0x003A4290 - 0x003A42A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4290(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4290: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC039A4)); /* fdiv dword ptr [0xc039a4] */
    MEMF(0xC039AC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A42B0
 * Original: 0x003A42B0 - 0x003A42D2 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A42B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A42B0: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AF180);
    MEM32(0x4DB170) = eax;
    MEM32(0x4DB174) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A42D0u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A42D0: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A42E0
 * Original: 0x003A42E0 - 0x003A42EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A42E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A42E0: ;
    PUSH32(esp, 0x3AF190);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A42EAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A42EA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A42F0
 * Original: 0x003A42F0 - 0x003A42FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A42F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A42F0: ;
    MEM32(0xC039B0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4300
 * Original: 0x003A4300 - 0x003A430B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4300(void)
{
    int _cf = 0; /* carry flag */

loc_003A4300: ;
    MEM32(0xC039B8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4310
 * Original: 0x003A4310 - 0x003A431B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4310(void)
{
    int _cf = 0; /* carry flag */

loc_003A4310: ;
    MEM32(0xC039B4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4320
 * Original: 0x003A4320 - 0x003A4333 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4320(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4320: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC039B0)); /* fdiv dword ptr [0xc039b0] */
    MEMF(0xC039BC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4340
 * Original: 0x003A4340 - 0x003A4353 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4340(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4340: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC039B8)); /* fdiv dword ptr [0xc039b8] */
    MEMF(0xC039C0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4360
 * Original: 0x003A4360 - 0x003A436B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4360(void)
{
    int _cf = 0; /* carry flag */

loc_003A4360: ;
    MEM32(0xC039C4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4370
 * Original: 0x003A4370 - 0x003A437B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4370(void)
{
    int _cf = 0; /* carry flag */

loc_003A4370: ;
    MEM32(0xC039CC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4380
 * Original: 0x003A4380 - 0x003A438B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4380(void)
{
    int _cf = 0; /* carry flag */

loc_003A4380: ;
    MEM32(0xC039C8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4390
 * Original: 0x003A4390 - 0x003A43A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4390(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4390: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC039C4)); /* fdiv dword ptr [0xc039c4] */
    MEMF(0xC039D0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A43B0
 * Original: 0x003A43B0 - 0x003A43C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A43B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A43B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC039CC)); /* fdiv dword ptr [0xc039cc] */
    MEMF(0xC039D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A43D0
 * Original: 0x003A43D0 - 0x003A43F2 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A43D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A43D0: ;
    eax = MEM32(0xB7440C);
    ecx = MEM32(0xB74410);
    PUSH32(esp, 0x3AF1A0);
    MEM32(0x4DB190) = eax;
    MEM32(0x4DB194) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A43F0u); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A43F0: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A4400
 * Original: 0x003A4400 - 0x003A440B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4400(void)
{
    int _cf = 0; /* carry flag */

loc_003A4400: ;
    MEM32(0xC039D8) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4410
 * Original: 0x003A4410 - 0x003A441B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4410(void)
{
    int _cf = 0; /* carry flag */

loc_003A4410: ;
    MEM32(0xC039E0) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4420
 * Original: 0x003A4420 - 0x003A442B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4420(void)
{
    int _cf = 0; /* carry flag */

loc_003A4420: ;
    MEM32(0xC039DC) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4430
 * Original: 0x003A4430 - 0x003A4443 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4430(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4430: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC039D8)); /* fdiv dword ptr [0xc039d8] */
    MEMF(0xC039E4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4450
 * Original: 0x003A4450 - 0x003A4463 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4450(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4450: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC039E0)); /* fdiv dword ptr [0xc039e0] */
    MEMF(0xC039E8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4470
 * Original: 0x003A4470 - 0x003A447B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4470(void)
{
    int _cf = 0; /* carry flag */

loc_003A4470: ;
    MEM32(0xC039EC) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4480
 * Original: 0x003A4480 - 0x003A448B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4480(void)
{
    int _cf = 0; /* carry flag */

loc_003A4480: ;
    MEM32(0xC039F4) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4490
 * Original: 0x003A4490 - 0x003A449B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4490(void)
{
    int _cf = 0; /* carry flag */

loc_003A4490: ;
    MEM32(0xC039F0) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A44A0
 * Original: 0x003A44A0 - 0x003A44B3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A44A0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A44A0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC039EC)); /* fdiv dword ptr [0xc039ec] */
    MEMF(0xC039F8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A44C0
 * Original: 0x003A44C0 - 0x003A44D3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A44C0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A44C0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC039F4)); /* fdiv dword ptr [0xc039f4] */
    MEMF(0xC039FC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A44E0
 * Original: 0x003A44E0 - 0x003A44EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A44E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A44E0: ;
    MEM32(0xC03A00) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A44F0
 * Original: 0x003A44F0 - 0x003A44FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A44F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A44F0: ;
    MEM32(0xC03A08) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4500
 * Original: 0x003A4500 - 0x003A450B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4500(void)
{
    int _cf = 0; /* carry flag */

loc_003A4500: ;
    MEM32(0xC03A04) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4510
 * Original: 0x003A4510 - 0x003A4523 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4510(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4510: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A00)); /* fdiv dword ptr [0xc03a00] */
    MEMF(0xC03A0C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4530
 * Original: 0x003A4530 - 0x003A4543 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4530(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4530: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A08)); /* fdiv dword ptr [0xc03a08] */
    MEMF(0xC03A10) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4550
 * Original: 0x003A4550 - 0x003A455C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A4550: ;
    PUSH32(esp, 0x3AF1B0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A455Au); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A455A: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A4560
 * Original: 0x003A4560 - 0x003A456B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4560(void)
{
    int _cf = 0; /* carry flag */

loc_003A4560: ;
    MEM32(0xC03A14) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4570
 * Original: 0x003A4570 - 0x003A457B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4570(void)
{
    int _cf = 0; /* carry flag */

loc_003A4570: ;
    MEM32(0xC03A1C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4580
 * Original: 0x003A4580 - 0x003A458B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4580(void)
{
    int _cf = 0; /* carry flag */

loc_003A4580: ;
    MEM32(0xC03A18) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4590
 * Original: 0x003A4590 - 0x003A45A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4590(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4590: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A14)); /* fdiv dword ptr [0xc03a14] */
    MEMF(0xC03A20) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A45B0
 * Original: 0x003A45B0 - 0x003A45C3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A45B0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A45B0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A1C)); /* fdiv dword ptr [0xc03a1c] */
    MEMF(0xC03A24) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A45D0
 * Original: 0x003A45D0 - 0x003A45DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A45D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A45D0: ;
    MEM32(0xC03A28) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A45E0
 * Original: 0x003A45E0 - 0x003A45EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A45E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A45E0: ;
    MEM32(0xC03A30) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A45F0
 * Original: 0x003A45F0 - 0x003A45FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A45F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A45F0: ;
    MEM32(0xC03A2C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4600
 * Original: 0x003A4600 - 0x003A4613 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4600(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4600: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A28)); /* fdiv dword ptr [0xc03a28] */
    MEMF(0xC03A34) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4620
 * Original: 0x003A4620 - 0x003A4633 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4620(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4620: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A30)); /* fdiv dword ptr [0xc03a30] */
    MEMF(0xC03A38) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4640
 * Original: 0x003A4640 - 0x003A464B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4640(void)
{
    int _cf = 0; /* carry flag */

loc_003A4640: ;
    MEM32(0xC03A3C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4650
 * Original: 0x003A4650 - 0x003A465B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4650(void)
{
    int _cf = 0; /* carry flag */

loc_003A4650: ;
    MEM32(0xC03A44) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4660
 * Original: 0x003A4660 - 0x003A466B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4660(void)
{
    int _cf = 0; /* carry flag */

loc_003A4660: ;
    MEM32(0xC03A40) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4670
 * Original: 0x003A4670 - 0x003A4683 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4670(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4670: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A3C)); /* fdiv dword ptr [0xc03a3c] */
    MEMF(0xC03A48) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4690
 * Original: 0x003A4690 - 0x003A46A3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4690(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4690: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A44)); /* fdiv dword ptr [0xc03a44] */
    MEMF(0xC03A4C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A46B0
 * Original: 0x003A46B0 - 0x003A46BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A46B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A46B0: ;
    MEM32(0xC03A50) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A46C0
 * Original: 0x003A46C0 - 0x003A46CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A46C0(void)
{
    int _cf = 0; /* carry flag */

loc_003A46C0: ;
    MEM32(0xC03A58) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A46D0
 * Original: 0x003A46D0 - 0x003A46DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A46D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A46D0: ;
    MEM32(0xC03A54) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A46E0
 * Original: 0x003A46E0 - 0x003A46F3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A46E0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A46E0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A50)); /* fdiv dword ptr [0xc03a50] */
    MEMF(0xC03A5C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4700
 * Original: 0x003A4700 - 0x003A4713 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4700(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4700: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A58)); /* fdiv dword ptr [0xc03a58] */
    MEMF(0xC03A60) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4720
 * Original: 0x003A4720 - 0x003A472B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4720(void)
{
    int _cf = 0; /* carry flag */

loc_003A4720: ;
    MEM32(0xC03A64) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4730
 * Original: 0x003A4730 - 0x003A473B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4730(void)
{
    int _cf = 0; /* carry flag */

loc_003A4730: ;
    MEM32(0xC03A6C) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4740
 * Original: 0x003A4740 - 0x003A474B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4740(void)
{
    int _cf = 0; /* carry flag */

loc_003A4740: ;
    MEM32(0xC03A68) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4750
 * Original: 0x003A4750 - 0x003A4763 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4750(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4750: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A64)); /* fdiv dword ptr [0xc03a64] */
    MEMF(0xC03A70) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4770
 * Original: 0x003A4770 - 0x003A4783 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4770(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4770: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A6C)); /* fdiv dword ptr [0xc03a6c] */
    MEMF(0xC03A74) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4790
 * Original: 0x003A4790 - 0x003A479B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4790(void)
{
    int _cf = 0; /* carry flag */

loc_003A4790: ;
    MEM32(0xC03A78) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A47A0
 * Original: 0x003A47A0 - 0x003A47AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A47A0(void)
{
    int _cf = 0; /* carry flag */

loc_003A47A0: ;
    MEM32(0xC03A80) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A47B0
 * Original: 0x003A47B0 - 0x003A47BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A47B0(void)
{
    int _cf = 0; /* carry flag */

loc_003A47B0: ;
    MEM32(0xC03A7C) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A47C0
 * Original: 0x003A47C0 - 0x003A47D3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A47C0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A47C0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A78)); /* fdiv dword ptr [0xc03a78] */
    MEMF(0xC03A84) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A47E0
 * Original: 0x003A47E0 - 0x003A47F3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A47E0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A47E0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A80)); /* fdiv dword ptr [0xc03a80] */
    MEMF(0xC03A88) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4800
 * Original: 0x003A4800 - 0x003A480B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4800(void)
{
    int _cf = 0; /* carry flag */

loc_003A4800: ;
    MEM32(0xC03A8C) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4810
 * Original: 0x003A4810 - 0x003A481B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4810(void)
{
    int _cf = 0; /* carry flag */

loc_003A4810: ;
    MEM32(0xC03A94) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4820
 * Original: 0x003A4820 - 0x003A482B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4820(void)
{
    int _cf = 0; /* carry flag */

loc_003A4820: ;
    MEM32(0xC03A90) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4830
 * Original: 0x003A4830 - 0x003A4843 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4830(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4830: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A8C)); /* fdiv dword ptr [0xc03a8c] */
    MEMF(0xC03A98) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4850
 * Original: 0x003A4850 - 0x003A4863 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4850(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4850: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03A94)); /* fdiv dword ptr [0xc03a94] */
    MEMF(0xC03A9C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4870
 * Original: 0x003A4870 - 0x003A487B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4870(void)
{
    int _cf = 0; /* carry flag */

loc_003A4870: ;
    MEM32(0xC03AA0) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4880
 * Original: 0x003A4880 - 0x003A488B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4880(void)
{
    int _cf = 0; /* carry flag */

loc_003A4880: ;
    MEM32(0xC03AA8) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4890
 * Original: 0x003A4890 - 0x003A489B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4890(void)
{
    int _cf = 0; /* carry flag */

loc_003A4890: ;
    MEM32(0xC03AA4) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A48A0
 * Original: 0x003A48A0 - 0x003A48B3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A48A0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A48A0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03AA0)); /* fdiv dword ptr [0xc03aa0] */
    MEMF(0xC03AAC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A48C0
 * Original: 0x003A48C0 - 0x003A48D3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A48C0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A48C0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03AA8)); /* fdiv dword ptr [0xc03aa8] */
    MEMF(0xC03AB0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A48E0
 * Original: 0x003A48E0 - 0x003A48EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A48E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A48E0: ;
    MEM32(0xC03AB4) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A48F0
 * Original: 0x003A48F0 - 0x003A48FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A48F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A48F0: ;
    MEM32(0xC03ABC) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4900
 * Original: 0x003A4900 - 0x003A490B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4900(void)
{
    int _cf = 0; /* carry flag */

loc_003A4900: ;
    MEM32(0xC03AB8) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4910
 * Original: 0x003A4910 - 0x003A4923 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4910(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4910: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03AB4)); /* fdiv dword ptr [0xc03ab4] */
    MEMF(0xC03AC0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4930
 * Original: 0x003A4930 - 0x003A4943 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4930(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4930: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03ABC)); /* fdiv dword ptr [0xc03abc] */
    MEMF(0xC03AC4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A4950
 * Original: 0x003A4950 - 0x003A495B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4950(void)
{
    int _cf = 0; /* carry flag */

loc_003A4950: ;
    MEM32(0xC03AC8) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4960
 * Original: 0x003A4960 - 0x003A496B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4960(void)
{
    int _cf = 0; /* carry flag */

loc_003A4960: ;
    MEM32(0xC03AD0) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4970
 * Original: 0x003A4970 - 0x003A497B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A4970(void)
{
    int _cf = 0; /* carry flag */

loc_003A4970: ;
    MEM32(0xC03ACC) = 0x3EA2F983;
    esp += 4; return; /* ret */

}

/**
 * sub_003A4980
 * Original: 0x003A4980 - 0x003A4993 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A4980(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A4980: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03AC8)); /* fdiv dword ptr [0xc03ac8] */
    MEMF(0xC03AD4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A49A0
 * Original: 0x003A49A0 - 0x003A49B3 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003A49A0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003A49A0: ;
    fp_push(MEMF(0x47B4B0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0xC03AD0)); /* fdiv dword ptr [0xc03ad0] */
    MEMF(0xC03AD8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003A49C0
 * Original: 0x003A49C0 - 0x003A49CC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A49C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003A49C0: ;
    PUSH32(esp, 0x3AF1C0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003A49CAu); RECOMP_ABI_CALL(0x00372D45u, sub_00372D45); /* call 0x00372D45 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003A49CA: ;
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003A49D0
 * Original: 0x003A49D0 - 0x003A49DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A49D0(void)
{
    int _cf = 0; /* carry flag */

loc_003A49D0: ;
    MEM32(0xC03ADC) = 0x40C90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A49E0
 * Original: 0x003A49E0 - 0x003A49EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A49E0(void)
{
    int _cf = 0; /* carry flag */

loc_003A49E0: ;
    MEM32(0xC03AE4) = 0x3FC90FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003A49F0
 * Original: 0x003A49F0 - 0x003A49FB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003A49F0(void)
{
    int _cf = 0; /* carry flag */

loc_003A49F0: ;
    MEM32(0xC03AE0) = 0x3EA2F983;
    esp += 4; return; /* ret */

}
