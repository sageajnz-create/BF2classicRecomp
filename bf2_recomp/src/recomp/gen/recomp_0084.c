/**
 * Star Wars Battlefront 2 - Recompiled code chunk 84
 * Functions: 6 (0x0044546A - 0x00445A4E)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0044546A
 * Original: 0x0044546A - 0x004454FE (148 bytes, 49 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0044546A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0044546A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x0044547Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00445474u); } /* indirect call */
    }

loc_0044547A: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(esi + 0xA3);
    eax = MEM32(eax + 0x1C);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00445490; /* je: equal / zero */

loc_0044548C: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00445490u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044548Eu); } /* indirect call */
    }

loc_00445490: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004454D7; /* je: equal / zero */

loc_00445494: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 0xA2) = MEM8(esi + 0xA2) | ((1) & 0xFFu);
    _fa = (uint32_t)(MEM8(esi + 0xA2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = ebp + -12;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -12) = eax;
    eax = ebp + -20;
    ecx = esi;
    MEM8(ebp + -20) = LO8(ebx);
    MEM8(ebp + -18) = 4;
    MEM32(ebp + -16) = ebx;
    MEM32(esi + 0x9E) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004454BEu); RECOMP_ABI_CALL(0x00445277u, sub_00445277); /* call 0x00445277 */

loc_004454BE: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x004454C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004454C1u); } /* indirect call */
    }

loc_004454C7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CFC); PUSH32(esp, 0x004454D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004454CFu); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_004454D5: ;
    goto loc_004454E0;

loc_004454D7: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x004454E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004454DAu); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_004454E0: ;
    eax = MEM32(esi + 0xA3);
    MEM8(eax + 1) = MEM8(eax + 1) + 1;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x4E48B0);
    MEM32(esi + 0xA7) = eax;
    MEM32(0x4E48B0) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_004454FE
 * Original: 0x004454FE - 0x0044562C (302 bytes, 100 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004454FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004454FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    esi = edx;
    MEM32(ebp + -8) = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x00445513u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044550Du); } /* indirect call */
    }

loc_00445513: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -2) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00445616; /* je: equal / zero */

loc_00445520: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00445616; /* jne: not equal / not zero */

loc_0044552A: ;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xD), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0044553A; /* jne: not equal / not zero */

loc_0044552F: ;
    MEM32(esi) = 0x32;
    goto loc_0044561C;

loc_0044553A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00445559; /* je: equal / zero */

loc_00445541: ;
    ecx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(0x445CC8));
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445C38); PUSH32(esp, 0x00445552u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044554Cu); } /* indirect call */
    }

loc_00445552: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0044555C; /* jge: greater or equal (signed >=) */

loc_00445556: ;
    MEM32(esi + 4) = ebx;

loc_00445559: ;
    MEM32(esi + 0xC) = ebx;

loc_0044555C: ;
    ecx = esi + 0x40;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00445573; /* jne: not equal / not zero */

loc_00445568: ;
    SET_LO8(eax, MEM8(edi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x41)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x41) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00445573; /* jae: above or equal (unsigned >=) */

loc_00445570: ;
    MEM8(esi + 0x41) = LO8(eax);

loc_00445573: ;
    eax = MEM32(edi + 0xE);
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x28), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0044557F; /* je: equal / zero */

loc_0044557C: ;
    ecx = esi + 0x42;

loc_0044557F: ;
    edx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = esi + 0x10;
    MEM32(esi + 0x1C) = esi;
    MEM32(esi + 0x18) = 0x445295;
    if (CMP_EQ(_fa, _fb)) goto loc_004455B7; /* je: equal / zero */

loc_00445594: ;
    MEM8(eax) = 0x28;
    MEM8(esi + 0x11) = 0x41;
    edx = MEM32(edx + 0x10);
    MEM32(esi + 0x28) = ecx;
    ecx = ZX8(MEM8(esi + 0x41));
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = ecx;
    MEM8(esi + 0x2C) = 1;
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM8(esi + 0x2E) = LO8(ebx);
    goto loc_004455FE;

loc_004455B7: ;
    MEM32(esi + 0x28) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x41));
    edx = ZX8(LO8(ecx));
    MEM32(esi + 0x24) = edx;
    SET_LO16(edx, ZX8(MEM8(ebp + -1)));
    _cf = 0; /* logical op clears CF */
    SET_LO16(edx, LO16(edx) | ((0x200) & 0xFFFFu));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM8(eax) = 0x30;
    MEM8(esi + 0x11) = 0x40;
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 0x2C) = 1;
    MEM8(esi + 0x2D) = LO8(ebx);
    MEM8(esi + 0x2E) = LO8(ebx);
    MEM8(esi + 0x38) = 0x21;
    MEM8(esi + 0x39) = 9;
    MEM16(esi + 0x3A) = LO16(edx);
    SET_LO16(edx, ZX8(MEM8(edi + 5)));
    SET_LO16(ecx, ZX8(LO8(ecx)));
    MEM16(esi + 0x3C) = LO16(edx);
    MEM16(esi + 0x3E) = LO16(ecx);

loc_004455FE: ;
    ecx = MEM32(ebp + -8);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0044560Cu); RECOMP_ABI_CALL(0x004403F0u, sub_004403F0); /* call 0x004403F0 */

loc_0044560C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445612u); RECOMP_ABI_CALL(0x0044005Au, sub_0044005A); /* call 0x0044005A */

loc_00445612: ;
    MEM32(esi) = eax;
    goto loc_0044561C;

loc_00445616: ;
    MEM32(esi) = 0x48F;

loc_0044561C: ;
    SET_LO8(ecx, MEM8(ebp + -2));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x00445625u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044561Fu); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00445625: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0044562C
 * Original: 0x0044562C - 0x0044570A (222 bytes, 55 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044562C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0044562C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445638u); RECOMP_ABI_CALL(0x00440134u, sub_00440134); /* call 0x00440134 */

loc_00445638: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004456DF; /* jne: not equal / not zero */

loc_00445644: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 7), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004456C3; /* jne: not equal / not zero */

loc_0044564A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x4E48C8) = 0x30;
    MEM8(0x4E48C9) = 0x40;
    MEM32(0x4E48D0) = 0x445319;
    MEM32(0x4E48D4) = esi;
    MEM32(0x4E48D8) = eax;
    MEM32(0x4E48E0) = eax;
    MEM32(0x4E48DC) = eax;
    MEM8(0x4E48E4) = LO8(eax);
    MEM8(0x4E48E5) = 1;
    MEM8(0x4E48E6) = LO8(eax);
    MEM8(0x4E48F0) = 0x21;
    MEM8(0x4E48F1) = 0xB;
    MEM16(0x4E48F2) = LO16(eax);
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(0x4E48F4) = LO16(ecx);
    MEM16(0x4E48F6) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004456B5u); RECOMP_ABI_CALL(0x00444C8Eu, sub_00444C8E); /* call 0x00444C8E */

loc_004456B5: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x4E48C8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004456C1u); RECOMP_ABI_CALL(0x004403F0u, sub_004403F0); /* call 0x004403F0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_004456C1: ;
    goto loc_00445706;

loc_004456C3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004456DF; /* jne: not equal / not zero */

loc_004456C8: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 7), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004456DF; /* jne: not equal / not zero */

loc_004456CE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004456D3u); RECOMP_ABI_CALL(0x00444C8Eu, sub_00444C8E); /* call 0x00444C8E */

loc_004456D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004456DDu); RECOMP_ABI_CALL(0x004453A4u, sub_004453A4); /* call 0x004453A4 */
    _cf = g_eflags & 1u; /* callee carry */

loc_004456DD: ;
    goto loc_00445706;

loc_004456DF: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 4) = MEM8(esi + 4) & ((0xFE) & 0xFFu);
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM16(0x4E48AA) = MEM16(0x4E48AA) - 1;
    _fa = (uint32_t)(MEM16(0x4E48AA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004456F9u); RECOMP_ABI_CALL(0x0044003Fu, sub_0044003F); /* call 0x0044003F */

loc_004456F9: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445705u); RECOMP_ABI_CALL(0x0043F8EEu, sub_0043F8EE); /* call 0x0043F8EE */
    _cf = g_eflags & 1u; /* callee carry */

loc_00445705: ;
    POP32(esp, edi);

loc_00445706: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_0044570A
 * Original: 0x0044570A - 0x004457FE (244 bytes, 72 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0044570A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0044570A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E4900);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D4C); PUSH32(esp, 0x00445718u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00445712u); } /* indirect call */
    }

loc_00445718: ;
    eax = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_004457EE; /* jl: less (signed <) */

loc_00445727: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004457EE; /* jb: below (unsigned <) */

loc_00445731: ;
    _fa = (uint32_t)(MEM8(0x4E48B4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x4E48B4), 8 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004457EE; /* jb: below (unsigned <) */

loc_0044573E: ;
    _fa = (uint32_t)(MEM8(0x4E48B5)) & 0xFFu; _fb = (uint32_t)(0x42) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x4E48B5), 0x42 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_004457EE; /* jne: not equal / not zero */

loc_0044574B: ;
    _fa = (uint32_t)(MEM16(0x4E48B6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x4E48B6), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004457EE; /* je: equal / zero */

loc_00445758: ;
    esi = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(0x4E48B8));
    edi = esi + 0xA;
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0044576Cu); RECOMP_ABI_CALL(0x0044494Cu, sub_0044494C); /* call 0x0044494C */

loc_0044576C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xE) = eax;
    SET_LO8(ecx, MEM8(0x4E48B9));
    MEM8(esi + 0xB) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x4E48BA));
    MEM8(esi + 0xC) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x4E48BB));
    MEM8(esi + 0xD) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_004457C9; /* je: equal / zero */

loc_0044578E: ;
    SET_LO8(eax, MEM8(0x4E48BA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004457C9; /* jb: below (unsigned <) */

loc_00445797: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_004457C9; /* ja: above (unsigned >) */

loc_0044579B: ;
    SET_LO8(eax, MEM8(esi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 6) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_004457C9; /* ja: above (unsigned >) */

loc_004457A3: ;
    _fa = (uint32_t)(MEM8(esi + 9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 9), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_004457AF; /* je: equal / zero */

loc_004457A8: ;
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 7)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 7) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_004457C9; /* ja: above (unsigned >) */

loc_004457AF: ;
    ecx = MEM32(esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004457BBu); RECOMP_ABI_CALL(0x00440050u, sub_00440050); /* call 0x00440050 */

loc_004457BB: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004457C3u); RECOMP_ABI_CALL(0x0043F8EEu, sub_0043F8EE); /* call 0x0043F8EE */

loc_004457C3: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 4) = MEM8(esi + 4) | ((8) & 0xFFu);
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_004457F8;

loc_004457C9: ;
    edi = MEM32(esi);
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 4) = MEM8(esi + 4) & ((0xFE) & 0xFFu);
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi) = ebx;
    MEM16(0x4E48AA) = MEM16(0x4E48AA) - 1;
    _fa = (uint32_t)(MEM16(0x4E48AA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004457E0u); RECOMP_ABI_CALL(0x0044003Fu, sub_0044003F); /* call 0x0044003F */

loc_004457E0: ;
    PUSH32(esp, 0x80000400u);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004457ECu); RECOMP_ABI_CALL(0x0043F8EEu, sub_0043F8EE); /* call 0x0043F8EE */
    _cf = g_eflags & 1u; /* callee carry */

loc_004457EC: ;
    goto loc_004457F8;

loc_004457EE: ;
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004457F8u); RECOMP_ABI_CALL(0x0044562Cu, sub_0044562C); /* call 0x0044562C */
    _cf = g_eflags & 1u; /* callee carry */

loc_004457F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_004457FE
 * Original: 0x004457FE - 0x00445A4E (592 bytes, 182 insns)
 * Category: game_input
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_004457FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_004457FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = edx;
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(eax) = ebx;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x00445821u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0044581Bu); } /* indirect call */
    }

loc_00445821: ;
    edx = edi;
    ecx = esi;
    MEM8(ebp + -1) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0044582Du); RECOMP_ABI_CALL(0x00444CDDu, sub_00444CDD); /* call 0x00444CDD */

loc_0044582D: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00445842; /* jne: not equal / not zero */

loc_00445836: ;
    MEM32(ebp + -8) = 0x48F;
    goto loc_00445A2D;

loc_00445842: ;
    _fa = (uint32_t)(MEM32(edx + 0x12)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x12), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00445853; /* je: equal / zero */

loc_00445847: ;
    MEM32(ebp + -8) = 0x20;
    goto loc_00445A2D;

loc_00445853: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00445866; /* jne: not equal / not zero */

loc_0044585A: ;
    MEM32(ebp + -8) = 0xE;
    goto loc_00445A2D;

loc_00445866: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 1) = LO8(eax);
    ebx = MEM32(0x4E48B0);
    eax = MEM32(ebx + 0xA7);
    MEM32(0x4E48B0) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x2A);
    POP32(esp, ecx);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = MEM32(ebp + 0xC);
    SET_LO8(ecx, MEM8(ebx + 0xA2));
    MEM32(ebx) = edx;
    MEM32(ebx + 0xA3) = esi;
    SET_LO8(eax, MEM8(edi));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & ((1) & 0xFFu));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((0xE7) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (((3) & 31u)) _cf = (int)(((uint32_t)(LO8(eax)) >> ((8 - (((3) & 31u))) & 31u)) & 1u);
    SET_LO8(eax, (uint32_t)(LO8(eax)) << ((3) & 31u));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebx + 0xA2) = LO8(eax);
    MEM32(edx + 0x12) = ebx;
    edx = edi;
    ecx = ebx;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -12) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004458C1u); RECOMP_ABI_CALL(0x00444D47u, sub_00444D47); /* call 0x00444D47 */

loc_004458C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00445A24; /* jl: less (signed <) */

loc_004458C9: ;
    edx = MEM32(esi + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004458E2; /* je: equal / zero */

loc_004458D0: ;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = edx; PUSH32(esp, 0x004458D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004458D2u); } /* indirect call */
    }

loc_004458D4: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */ _fb = 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x80000100u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x80000100u)) >> 32) & 1);
    eax = eax + 0x80000100u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004458E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00445A24; /* jl: less (signed <) */

loc_004458EA: ;
    esi = MEM32(esi + 8);
    ecx = ZX8(MEM8(esi));
    esi = MEM32(esi + 1);
    edx = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx + 0x34;
    edi = eax;
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    PUSH32(esp, 7);
    esi = eax;
    eax = MEM32(ebp + -16);
    edi = ebx + 0x14;
    POP32(esp, ecx);
    { uint64_t _n = (uint64_t)ecx * 4u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4u) = MEM32(esi + _i*4u); }
      esi += ecx * 4u; edi += ecx * 4u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4);
      for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = MEM32(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x28), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(ebp + -20);
    if (TEST_NZ(_fa, _fb)) goto loc_004459D1; /* jne: not equal / not zero */

loc_00445922: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -32;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = eax;
    eax = ZX8(MEM8(esi + 0xC));
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x62) = MEM32(ebx + 0x62) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0x62)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -40;
    MEM32(ebx + 0x5E) = ecx;
    ecx = ebx + 0x32;
    edi = ebx + 0x52;
    MEM8(edi) = 0x30;
    MEM8(ebx + 0x53) = 0x40;
    MEM32(ebx + 0x5A) = 0x4450F2;
    MEM32(ebx + 0x6A) = ecx;
    MEM32(ebx + 0x66) = eax;
    MEM8(ebx + 0x6E) = 2;
    MEM8(ebx + 0x6F) = 1;
    MEM8(ebx + 0x70) = 0;
    MEM8(ebx + 0x7A) = 0xA1;
    MEM8(ebx + 0x7B) = 1;
    MEM16(ebx + 0x7C) = 0x100;
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    MEM16(ebx + 0x7E) = LO16(ecx);
    MEM16(ebx + 0x80) = LO16(eax);
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    MEM8(ebp + -40) = 1;
    MEM8(ebp + -38) = 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445991u); RECOMP_ABI_CALL(0x004403F0u, sub_004403F0); /* call 0x004403F0 */

loc_00445991: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x0044599Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00445994u); } /* indirect call */
    }

loc_0044599A: ;
    ecx = MEM32(esi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004459A7u); RECOMP_ABI_CALL(0x00445103u, sub_00445103); /* call 0x00445103 */

loc_004459A7: ;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x004459ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004459A7u); } /* indirect call */
    }

loc_004459AD: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00445836; /* je: equal / zero */

loc_004459B9: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00445836; /* jne: not equal / not zero */

loc_004459C3: ;
    _fa = (uint32_t)(MEM32(ebx + 0x56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x56), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_004459D1; /* jl: less (signed <) */

loc_004459C9: ;
    eax = MEM32(ebp + -16);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x004459D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004459CEu); } /* indirect call */
    }

loc_004459D1: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(ebx + 0x62) = ecx;
    ecx = ebx + 0x32;
    eax = ebx + 0x52;
    MEM8(eax) = 0x28;
    MEM8(ebx + 0x53) = 0x41;
    MEM32(ebx + 0x5A) = 0x444EA3;
    MEM32(ebx + 0x5E) = ebx;
    MEM32(ebx + 0x6A) = ecx;
    ecx = ZX8(MEM8(esi + 0xC));
    MEM32(ebx + 0x66) = ecx;
    MEM8(ebx + 0x6E) = 2;
    MEM8(ebx + 0x6F) = 1;
    MEM8(ebx + 0x70) = 0;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 4) = MEM8(esi + 4) & ((0xF) & 0xFFu);
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebx + 0xA2)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xA2), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00445A19; /* je: equal / zero */

loc_00445A11: ;
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445A19u); RECOMP_ABI_CALL(0x004403F0u, sub_004403F0); /* call 0x004403F0 */

loc_00445A19: ;
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ebx;
    goto loc_00445A2D;

loc_00445A24: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445A2Au); RECOMP_ABI_CALL(0x0044005Au, sub_0044005A); /* call 0x0044005A */

loc_00445A2A: ;
    MEM32(ebp + -8) = eax;

loc_00445A2D: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x00445A36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00445A30u); } /* indirect call */
    }

loc_00445A36: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00445A47; /* je: equal / zero */

loc_00445A3F: ;
    ecx = MEM32(ebp + -24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445A47u); RECOMP_ABI_CALL(0x0044546Au, sub_0044546A); /* call 0x0044546A */
    _cf = g_eflags & 1u; /* callee carry */

loc_00445A47: ;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_00445A4E
 * Original: 0x00445A4E - 0x00445BE4 (406 bytes, 91 insns)
 * Category: game_input
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00445A4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00445A4E: ;
    SET_LO16(eax, MEM16(0x4E48AA));
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x4E48A8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(0x4E48A8) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00445B90; /* jae: above or equal (unsigned >=) */

loc_00445A66: ;
    eax = MEM32(0x4E48AC);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00445A80; /* je: equal / zero */

loc_00445A71: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(LO8(ecx));
    _fa = ((int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x16) != (int64_t)(int32_t)((uint32_t)(edx) * (uint32_t)(0x16)));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16);
    _fa = (uint32_t)(MEM8(edx + eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + eax + 4), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00445A71; /* jne: not equal / not zero */

loc_00445A80: ;
    MEM16(0x4E48AA) = MEM16(0x4E48AA) + 1;
    _fa = (uint32_t)(MEM16(0x4E48AA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ZX8(LO8(ecx));
    _fa = ((int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x16) != (int64_t)(int32_t)((uint32_t)(esi) * (uint32_t)(0x16)));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x4E48F8) = LO8(ecx);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445AA3u); RECOMP_ABI_CALL(0x0044003Fu, sub_0044003F); /* call 0x0044003F */

loc_00445AA3: ;
    SET_LO8(eax, MEM8(esi + 4));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & ((0xF1) & 0xFFu));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | ((1) & 0xFFu));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = edi;
    MEM32(esi) = edi;
    MEM8(esi + 4) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445AB6u); RECOMP_ABI_CALL(0x0044004Cu, sub_0044004C); /* call 0x0044004C */

loc_00445AB6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    ecx = edi;
    MEM8(esi + 5) = LO8(eax);
    MEM32(esi + 0x12) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445AC8u); RECOMP_ABI_CALL(0x0044013Au, sub_0044013A); /* call 0x0044013A */

loc_00445AC8: ;
    SET_LO8(ecx, MEM8(eax + 2));
    PUSH32(esp, ebx);
    MEM8(esi + 8) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    ecx = edi;
    MEM8(esi + 6) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445ADFu); RECOMP_ABI_CALL(0x0044013Au, sub_0044013A); /* call 0x0044013A */

loc_00445ADF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00445AF1; /* je: equal / zero */

loc_00445AE3: ;
    SET_LO8(ecx, MEM8(eax + 2));
    MEM8(esi + 9) = LO8(ecx);
    SET_LO8(eax, MEM8(eax + 4));
    MEM8(esi + 7) = LO8(eax);
    goto loc_00445AF7;

loc_00445AF1: ;
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 7) = LO8(ebx);

loc_00445AF7: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM8(0x4E48C8) = 0x30;
    MEM8(0x4E48C9) = 0x40;
    MEM32(0x4E48D0) = 0x44570A;
    MEM32(0x4E48D4) = esi;
    MEM32(0x4E48D8) = ebx;
    MEM32(0x4E48E0) = 0x4E48B4;
    MEM32(0x4E48DC) = eax;
    MEM8(0x4E48E4) = 2;
    MEM8(0x4E48E5) = 1;
    MEM8(0x4E48E6) = LO8(ebx);
    MEM8(0x4E48F0) = 0xC1;
    MEM8(0x4E48F1) = 6;
    MEM16(0x4E48F2) = 0x4200;
    SET_LO16(ecx, ZX8(MEM8(esi + 5)));
    PUSH32(esp, 0x444CA9);
    PUSH32(esp, 0x4E4928);
    MEM16(0x4E48F4) = LO16(ecx);
    MEM16(0x4E48F6) = LO16(eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D04); PUSH32(esp, 0x00445B7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00445B75u); } /* indirect call */
    }

loc_00445B7B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445B80u); RECOMP_ABI_CALL(0x00444C8Eu, sub_00444C8E); /* call 0x00444C8E */

loc_00445B80: ;
    PUSH32(esp, 0x4E48C8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445B8Cu); RECOMP_ABI_CALL(0x004403F0u, sub_004403F0); /* call 0x004403F0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00445B8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    goto loc_00445B9E;

loc_00445B90: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x80000100u);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00445B9Eu); RECOMP_ABI_CALL(0x0043F8EEu, sub_0043F8EE); /* call 0x0043F8EE */
    _cf = g_eflags & 1u; /* callee carry */

loc_00445B9E: ;
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}
