/**
 * Star Wars Battlefront 2 - Recompiled code chunk 44
 * Functions: 250 (0x0032392C - 0x00329712)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0032392C
 * Original: 0x0032392C - 0x0032394D (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032392C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032392C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D58); PUSH32(esp, 0x00323938u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323932u); } /* indirect call */
    }

loc_00323938: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00323946; /* jge: greater or equal (signed >=) */

loc_0032393C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00323942u); RECOMP_ABI_CALL(0x00321E0Du, sub_00321E0D); /* call 0x00321E0D */

loc_00323942: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00323949;

loc_00323946: ;
    eax = MEM32(esi + 4);

loc_00323949: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_0032394D
 * Original: 0x0032394D - 0x0032396B (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032394D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032394D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D5C); PUSH32(esp, 0x00323957u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323951u); } /* indirect call */
    }

loc_00323957: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00323965; /* jge: greater or equal (signed >=) */

loc_0032395B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00323961u); RECOMP_ABI_CALL(0x00321E0Du, sub_00321E0D); /* call 0x00321E0D */

loc_00323961: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00323968;

loc_00323965: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00323968: ;
    g_eflags = (g_eflags & ~0x40u) | (((eax == 0)) ? 0x40u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_0032396B
 * Original: 0x0032396B - 0x00323975 (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032396B(void)
{
    int _cf = 0; /* carry flag */

loc_0032396B: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00323975
 * Original: 0x00323975 - 0x0032399A (37 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00323975(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00323975: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032398Du); RECOMP_ABI_CALL(0x0035F9C8u, sub_0035F9C8); /* call 0x0035F9C8 */

loc_0032398D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00323996; /* jl: less (signed <) */

loc_00323991: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_00323996: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0032399A
 * Original: 0x0032399A - 0x00323ABA (288 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032399A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032399A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ecx = eax + 0x4C;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00323AAD; /* jne: not equal / not zero */

loc_003239B6: ;
    ecx = MEM32(eax + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00323A06; /* je: equal / zero */

loc_003239C0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00323A06; /* je: equal / zero */

loc_003239C8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = 0x1000;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    edx = MEM32(ecx + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + -12;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(ebp + -12) = edx;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D64); PUSH32(esp, 0x003239EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003239E4u); } /* indirect call */
    }

loc_003239EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_003239F5; /* jge: greater or equal (signed >=) */

loc_003239EE: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00323AB3;

loc_003239F5: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax + 8)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax + 8) = MEM32(eax + 8) + ecx;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 8);
    goto loc_00323A8A;

loc_00323A06: ;
    edi = MEM32(0x445D64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2000);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = 0x10000;
    MEM32(ebp + 8) = ebx;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = edi; PUSH32(esp, 0x00323A28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323A26u); } /* indirect call */
    }

loc_00323A28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003239EE; /* jl: less (signed <) */

loc_00323A2C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = 0x1000;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = edi; PUSH32(esp, 0x00323A42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323A40u); } /* indirect call */
    }

loc_00323A42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00323A5B; /* jge: greater or equal (signed >=) */

loc_00323A46: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D60); PUSH32(esp, 0x00323A59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323A53u); } /* indirect call */
    }

loc_00323A59: ;
    goto loc_003239EE;

loc_00323A5B: ;
    eax = MEM32(esi + 0x18);
    eax = MEM32(eax + 0x48);
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x48) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM32(eax + 8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = eax + 0x10;
    MEM32(ebp + -12) = ecx;

loc_00323A8A: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebp + -12);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x4C)) >> 32) & 1);
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00323AA1;

loc_00323A9A: ;
    MEM32(eax) = edx;
    eax = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x10)) >> 32) & 1);
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00323AA1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00323A9A; /* jb: below (unsigned <) */

loc_00323AA5: ;
    MEM32(eax) = ebx;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x4C)) >> 32) & 1);
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00323AAD: ;
    eax = MEM32(ecx);
    edx = MEM32(eax);
    MEM32(ecx) = edx;

loc_00323AB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00323ABA
 * Original: 0x00323ABA - 0x00323ADB (33 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323ABA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00323ABA: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(eax + 0x4C);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(ecx + 0x4C) = eax;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00323ADB
 * Original: 0x00323ADB - 0x00323B6E (147 bytes, 63 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00323ADB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00323ADB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    ebx = esi + 0x38;
    goto loc_00323B22;

loc_00323AEC: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00323B53; /* ja: above (unsigned >) */

loc_00323AF6: ;
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00323B20; /* jne: not equal / not zero */

loc_00323B00: ;
    _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(eax + 8))) >> 32) & 1);
    edi = edi + MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    MEM32(ebp + 0xC) = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(ebx) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00323B13u); RECOMP_ABI_CALL(0x00323ABAu, sub_00323ABA); /* call 0x00323ABA */

loc_00323B13: ;
    MEM32(esi + 0x34) = MEM32(esi + 0x34) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00323B22; /* jbe: below or equal (unsigned <=) */

loc_00323B1B: ;
    MEM32(esi + 0x1C) = edi;
    goto loc_00323B22;

loc_00323B20: ;
    ebx = eax;

loc_00323B22: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00323AEC; /* jne: not equal / not zero */

loc_00323B28: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00323B2Eu); RECOMP_ABI_CALL(0x0032399Au, sub_0032399A); /* call 0x0032399A */

loc_00323B2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00323B4C; /* je: equal / zero */

loc_00323B32: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edi;
    ecx = MEM32(ebx);
    MEM32(eax) = ecx;
    MEM32(ebx) = eax;
    MEM32(esi + 0x34) = MEM32(esi + 0x34) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00323B4C; /* jb: below (unsigned <) */

loc_00323B49: ;
    MEM32(esi + 0x1C) = edi;

loc_00323B4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

loc_00323B53: ;
    edx = ecx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00323B28; /* jne: not equal / not zero */

loc_00323B5B: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax + 8)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(eax + 8) = MEM32(eax + 8) + edi;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00323B4C; /* jbe: below or equal (unsigned <=) */

loc_00323B69: ;
    MEM32(esi + 0x1C) = eax;
    goto loc_00323B4C;

}

/**
 * sub_00323B6E
 * Original: 0x00323B6E - 0x00323CF9 (395 bytes, 149 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00323B6E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00323B6E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = edi + 0x38;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00323BAB; /* je: equal / zero */

loc_00323B89: ;
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0x14);

loc_00323B91: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00323B9F; /* jb: below (unsigned <) */

loc_00323B96: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00323BB4; /* je: equal / zero */

loc_00323B9A: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00323BB4; /* je: equal / zero */

loc_00323B9F: ;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = esi;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00323B91; /* jne: not equal / not zero */

loc_00323BAB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00323BAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

loc_00323BB4: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + 8);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(ecx + 0x584);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00323BD1; /* je: equal / zero */

loc_00323BC7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    edx = ebp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = eax; PUSH32(esp, 0x00323BCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323BCDu); } /* indirect call */
    }

loc_00323BCF: ;
    goto loc_00323BE5;

loc_00323BD1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D64); PUSH32(esp, 0x00323BE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323BDFu); } /* indirect call */
    }

loc_00323BE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00323BAB; /* jl: less (signed <) */

loc_00323BE9: ;
    eax = MEM32(ebx);
    if (((0xC) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((0xC) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((0xC) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(edi + 0x30)) < (uint32_t)(eax));
    MEM32(edi + 0x30) = MEM32(edi + 0x30) - eax;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00323BFD; /* jne: not equal / not zero */

loc_00323BF9: ;
    _cf = 0; /* logical op clears CF */
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00323BFD: ;
    ebx = MEM32(edi + 0x40);
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00323C19; /* je: equal / zero */

loc_00323C0C: ;
    ecx = ZX16(MEM16(ebx));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((4) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00323C60; /* je: equal / zero */

loc_00323C19: ;
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00323C25; /* jne: not equal / not zero */

loc_00323C20: ;
    ebx = MEM32(edi + 0x28);
    goto loc_00323C2E;

loc_00323C25: ;
    ebx = MEM32(ecx + 8);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(MEM32(ecx + 4))) >> 32) & 1);
    ebx = ebx + MEM32(ecx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00323C2E: ;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00323C60; /* jne: not equal / not zero */

loc_00323C34: ;
    ecx = MEM32(edi + 0x2C);

loc_00323C37: ;
    edx = ZX16(MEM16(ebx));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(edx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    edx = (uint32_t)(edx) << ((4) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x14) = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edx)) >> 32) & 1);
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00323C54; /* jae: above or equal (unsigned >=) */

loc_00323C46: ;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00323C54; /* je: equal / zero */

loc_00323C4C: ;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00323C37; /* je: equal / zero */

loc_00323C52: ;
    goto loc_00323C60;

loc_00323C54: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00323BAB; /* jne: not equal / not zero */

loc_00323C5D: ;
    ebx = MEM32(ebp + 0x14);

loc_00323C60: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 5) = MEM8(ebx + 5) & ((0xEF) & 0xFFu);
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 4)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(esi + 4) = MEM32(esi + 4) + edx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(esi + 8)) < (uint32_t)(edx));
    MEM32(esi + 8) = MEM32(esi + 8) - edx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00323CA4; /* jne: not equal / not zero */

loc_00323C73: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x2C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00323C81; /* jne: not equal / not zero */

loc_00323C7B: ;
    MEM8(eax + 5) = 0x10;
    goto loc_00323C88;

loc_00323C81: ;
    MEM8(eax + 5) = 0;
    eax = MEM32(edi + 0x28);

loc_00323C88: ;
    ecx = MEM32(ebp + -8);
    MEM32(edi + 0x40) = eax;
    eax = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ecx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00323C99u); RECOMP_ABI_CALL(0x00323ABAu, sub_00323ABA); /* call 0x00323ABA */

loc_00323C99: ;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x10);
    goto loc_00323CAB;

loc_00323CA4: ;
    MEM8(eax + 5) = 0x10;
    MEM32(edi + 0x40) = eax;

loc_00323CAB: ;
    SET_LO8(edx, MEM8(ebx + 4));
    MEM8(eax + 4) = LO8(edx);
    ecx = MEM32(ecx);
    if (((4) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((4) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM16(eax) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebx));
    MEM16(eax + 2) = LO16(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00323CD4; /* jne: not equal / not zero */

loc_00323CC6: ;
    SET_LO16(ecx, MEM16(eax));
    edx = ZX16(LO16(ecx));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(edx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    edx = (uint32_t)(edx) << ((4) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(edx + eax + 2) = LO16(ecx);

loc_00323CD4: ;
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1C), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00323BAD; /* jne: not equal / not zero */

loc_00323CDE: ;
    ecx = MEM32(edi + 0x38);
    goto loc_00323CF0;

loc_00323CE3: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00323CEE; /* jb: below (unsigned <) */

loc_00323CEB: ;
    MEM32(edi + 0x1C) = edx;

loc_00323CEE: ;
    ecx = MEM32(ecx);

loc_00323CF0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00323CE3; /* jne: not equal / not zero */

loc_00323CF4: ;
    goto loc_00323BAD;

}

/**
 * sub_00323CF9
 * Original: 0x00323CF9 - 0x00323D2B (50 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00323CF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00323CF9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x14), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00323D25; /* jne: not equal / not zero */

loc_00323D06: ;
    eax = MEM32(eax + 0x20);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D60); PUSH32(esp, 0x00323D23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323D1Du); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00323D23: ;
    goto loc_00323D27;

loc_00323D25: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00323D27: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00323D2B
 * Original: 0x00323D2B - 0x00323FD0 (677 bytes, 230 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00323D2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00323D2B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(edi + 2));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00323E83; /* je: equal / zero */

loc_00323D4A: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00323E83; /* jne: not equal / not zero */

loc_00323D54: ;
    ecx = ZX16(MEM16(esi));
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(eax))) >> 32) & 1);
    ecx = ecx + MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00323E86; /* ja: above (unsigned >) */

loc_00323D68: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00323DDD; /* je: equal / zero */

loc_00323D6E: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00323DA2; /* jne: not equal / not zero */

loc_00323D7D: ;
    SET_LO16(ecx, MEM16(edi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00323DA2; /* jae: above or equal (unsigned >=) */

loc_00323D87: ;
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(LO8(edx)) >> ((8 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    SET_LO8(edx, (uint32_t)(LO8(edx)) << ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    eax = eax + ebx + 0x160;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = MEM32(ebp + 0x10);

loc_00323DA2: ;
    SET_LO8(ecx, MEM8(edi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00323DD3; /* je: equal / zero */

loc_00323DAA: ;
    eax = ZX16(MEM16(edi));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x18));
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00323DC0; /* je: equal / zero */

loc_00323DB8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00323DC0; /* jbe: below or equal (unsigned <=) */

loc_00323DBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00323DC0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D68); PUSH32(esp, 0x00323DD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323DCAu); } /* indirect call */
    }

loc_00323DD0: ;
    eax = MEM32(ebp + 0x10);

loc_00323DD3: ;
    ecx = ZX16(MEM16(edi));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx + 0x30)) < (uint32_t)(ecx));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(ebp + 0x14) = 0;

loc_00323DDD: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00323E11; /* jne: not equal / not zero */

loc_00323DEC: ;
    SET_LO16(ecx, MEM16(esi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00323E11; /* jae: above or equal (unsigned >=) */

loc_00323DF6: ;
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(LO8(edx)) >> ((8 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    SET_LO8(edx, (uint32_t)(LO8(edx)) << ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    eax = eax + ebx + 0x160;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = MEM32(ebp + 0x10);

loc_00323E11: ;
    SET_LO8(ecx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00323E42; /* je: equal / zero */

loc_00323E19: ;
    eax = ZX16(MEM16(esi));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x18));
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00323E2F; /* je: equal / zero */

loc_00323E27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00323E2F; /* jbe: below or equal (unsigned <=) */

loc_00323E2C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00323E2F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D68); PUSH32(esp, 0x00323E3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323E39u); } /* indirect call */
    }

loc_00323E3F: ;
    eax = MEM32(ebp + 0x10);

loc_00323E42: ;
    SET_LO8(ecx, MEM8(edi + 5));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((0x10) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esi + 5) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00323E5B; /* je: equal / zero */

loc_00323E50: ;
    ecx = ZX8(MEM8(esi + 4));
    ecx = MEM32(ebx + ecx * 4 + 0x60);
    MEM32(ecx + 0x40) = esi;

loc_00323E5B: ;
    ecx = ZX16(MEM16(esi));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(esi));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx + 0x30)) < (uint32_t)(ecx));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO16(ecx, MEM16(eax));
    edi = esi;
    MEM16(esi) = LO16(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00323E86; /* jne: not equal / not zero */

loc_00323E74: ;
    ecx = MEM32(eax);
    SET_LO16(edx, MEM16(eax));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((4) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + esi + 2) = LO16(edx);
    goto loc_00323E86;

loc_00323E83: ;
    eax = MEM32(ebp + 0x10);

loc_00323E86: ;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 5), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00323FC7; /* jne: not equal / not zero */

loc_00323E90: ;
    ecx = MEM32(eax);
    esi = ecx;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(esi) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    esi = (uint32_t)(esi) << ((4) & 31u);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edi)) >> 32) & 1);
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00323FC7; /* jne: not equal / not zero */

loc_00323EA3: ;
    edx = ZX16(MEM16(esi));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00323FC7; /* ja: above (unsigned >) */

loc_00323EB4: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00323F25; /* je: equal / zero */

loc_00323EBA: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00323EEE; /* jne: not equal / not zero */

loc_00323EC9: ;
    SET_LO16(ecx, MEM16(edi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00323EEE; /* jae: above or equal (unsigned >=) */

loc_00323ED3: ;
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(LO8(edx)) >> ((8 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    SET_LO8(edx, (uint32_t)(LO8(edx)) << ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    eax = eax + ebx + 0x160;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = MEM32(ebp + 0x10);

loc_00323EEE: ;
    SET_LO8(ecx, MEM8(edi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00323F1F; /* je: equal / zero */

loc_00323EF6: ;
    eax = ZX16(MEM16(edi));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x18));
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00323F0C; /* je: equal / zero */

loc_00323F04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00323F0C; /* jbe: below or equal (unsigned <=) */

loc_00323F09: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00323F0C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D68); PUSH32(esp, 0x00323F1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323F16u); } /* indirect call */
    }

loc_00323F1C: ;
    eax = MEM32(ebp + 0x10);

loc_00323F1F: ;
    ecx = ZX16(MEM16(edi));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx + 0x30)) < (uint32_t)(ecx));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00323F25: ;
    SET_LO8(ecx, MEM8(esi + 5));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((0x10) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(edi + 5) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00323F3E; /* je: equal / zero */

loc_00323F33: ;
    ecx = ZX8(MEM8(edi + 4));
    ecx = MEM32(ebx + ecx * 4 + 0x60);
    MEM32(ecx + 0x40) = edi;

loc_00323F3E: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00323F72; /* jne: not equal / not zero */

loc_00323F4D: ;
    SET_LO16(ecx, MEM16(esi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00323F72; /* jae: above or equal (unsigned >=) */

loc_00323F57: ;
    ecx = ZX16(LO16(ecx));
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(LO8(edx)) >> ((8 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    SET_LO8(edx, (uint32_t)(LO8(edx)) << ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    eax = eax + ebx + 0x160;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    eax = MEM32(ebp + 0x10);

loc_00323F72: ;
    SET_LO8(ecx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00323FA3; /* je: equal / zero */

loc_00323F7A: ;
    eax = ZX16(MEM16(esi));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x18));
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00323F90; /* je: equal / zero */

loc_00323F88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00323F90; /* jbe: below or equal (unsigned <=) */

loc_00323F8D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00323F90: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D68); PUSH32(esp, 0x00323FA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323F9Au); } /* indirect call */
    }

loc_00323FA0: ;
    eax = MEM32(ebp + 0x10);

loc_00323FA3: ;
    ecx = ZX16(MEM16(esi));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(MEM16(esi));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx + 0x30)) < (uint32_t)(ecx));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 5), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO16(ecx, MEM16(eax));
    MEM16(edi) = LO16(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00323FC7; /* jne: not equal / not zero */

loc_00323FBA: ;
    ecx = MEM32(eax);
    SET_LO16(eax, MEM16(eax));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((4) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + edi + 2) = LO16(eax);

loc_00323FC7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}

/**
 * sub_00323FD0
 * Original: 0x00323FD0 - 0x003240CA (250 bytes, 87 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00323FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00323FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    SET_LO8(edx, MEM8(eax + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 2));
    ecx = ZX8(LO8(edx));
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + ecx * 4 + 0x60);
    MEM32(ebp + -8) = ecx;
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + 0xF) = LO8(ecx);
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edi + 0x30)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(edi + 0x30) = MEM32(edi + 0x30) + ecx;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(ebp + -1) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_003240B9; /* je: equal / zero */

loc_00324006: ;
    goto loc_0032400E;

loc_00324008: ;
    SET_LO8(edx, MEM8(ebp + -1));
    ecx = MEM32(ebp + 0x10);

loc_0032400E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0032402C; /* jbe: below or equal (unsigned <=) */

loc_00324016: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF01) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF01 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = 0xFF00;
    if (CMP_NE(_fa, _fb)) goto loc_00324026; /* jne: not equal / not zero */

loc_00324023: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    ebx = ebx + 0xFFFFFFF0u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324026: ;
    MEM8(eax + 5) = 0;
    goto loc_00324034;

loc_0032402C: ;
    ebx = ecx;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    MEM8(eax + 5) = LO8(ecx);

loc_00324034: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 5) = MEM8(eax + 5) & ((0xF8) & 0xFFu);
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM16(eax + 2) = LO16(esi);
    MEM8(eax + 4) = LO8(edx);
    MEM16(eax) = LO16(ebx);
    if (CMP_AE(_fa, _fb)) goto loc_00324074; /* jae: above or equal (unsigned >=) */

loc_00324049: ;
    ecx = ZX16(LO16(ebx));
    esi = edi + ecx * 8 + 0x180;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032408A; /* jne: not equal / not zero */

loc_00324057: ;
    edx = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(edx) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    edx = (uint32_t)(edx) >> ((3) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + edi + 0x160;
    MEM32(ebp + 8) = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(LO8(edx)) >> ((8 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    SET_LO8(edx, (uint32_t)(LO8(edx)) << ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    ecx = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) | LO8(edx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0032408A;

loc_00324074: ;
    ecx = edi + 0x180;
    esi = MEM32(ecx);
    goto loc_00324086;

loc_0032407E: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), MEM16(esi + -8) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0032408A; /* jbe: below or equal (unsigned <=) */

loc_00324084: ;
    esi = MEM32(esi);

loc_00324086: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032407E; /* jne: not equal / not zero */

loc_0032408A: ;
    edx = MEM32(esi + 4);
    ecx = eax + 8;
    MEM32(ecx) = esi;
    MEM32(eax + 0xC) = edx;
    MEM32(edx) = ecx;
    MEM32(esi + 4) = ecx;
    ecx = ZX16(LO16(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + 0x10)) < (uint32_t)(ecx));
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - ecx;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((4) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x2C) (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_003240C3; /* jae: above or equal (unsigned >=) */

loc_003240AF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00324008; /* jne: not equal / not zero */

loc_003240B9: ;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xF), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_003240C3; /* jne: not equal / not zero */

loc_003240BF: ;
    MEM16(eax + 2) = LO16(esi);

loc_003240C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_003240CA
 * Original: 0x003240CA - 0x003240E6 (28 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003240CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003240CA: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003240D9; /* je: equal / zero */

loc_003240D4: ;
    _fb = (uint32_t)(0xFFFFFFE8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003240E3;

loc_003240D9: ;
    ecx = ZX16(MEM16(eax));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((4) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + -16;

loc_003240E3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003240E6
 * Original: 0x003240E6 - 0x00324175 (143 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003240E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003240E6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032416E; /* je: equal / zero */

loc_003240F2: ;
    PUSH32(esp, ebx);
    ebx = edi + 0x58;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    goto loc_00324117;

loc_003240FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    MEM32(ebp + -4) = esi;
    esi = MEM32(esi);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D60); PUSH32(esp, 0x00324117u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324111u); } /* indirect call */
    }

loc_00324117: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003240FB; /* jne: not equal / not zero */

loc_0032411B: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x14), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00324128; /* jne: not equal / not zero */

loc_00324121: ;
    _cf = 0; /* logical op clears CF */
    MEM32(edi + 0x580) = MEM32(edi + 0x580) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x580)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00324128: ;
    esi = MEM32(edi + 0x48);
    _cf = 0; /* logical op clears CF */
    MEM32(edi + 0x48) = MEM32(edi + 0x48) & 0;
    _fa = (uint32_t)(MEM32(edi + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0032414D;

loc_00324131: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    MEM32(ebp + -4) = esi;
    esi = MEM32(esi);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D60); PUSH32(esp, 0x0032414Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324147u); } /* indirect call */
    }

loc_0032414D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00324131; /* jne: not equal / not zero */

loc_00324151: ;
    PUSH32(esp, 0x40);
    _fb = (uint32_t)(0x160) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x160)) >> 32) & 1);
    edi = edi + 0x160;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_0032415A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(4));
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00324169; /* je: equal / zero */

loc_00324163: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324169u); RECOMP_ABI_CALL(0x00323CF9u, sub_00323CF9); /* call 0x00323CF9 */

loc_00324169: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0032415A; /* jne: not equal / not zero */

loc_0032416C: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0032416E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00324175
 * Original: 0x00324175 - 0x00324573 (1022 bytes, 354 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00324175(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00324175: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0032418E; /* jbe: below or equal (unsigned <=) */

loc_00324187: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0032456E;

loc_0032418E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(edi));
    SET_LO8(ecx, MEM8(edi + 5));
    esi = eax;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(esi) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    esi = (uint32_t)(esi) << ((4) & 31u);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edi)) >> 32) & 1);
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(ebp + -2) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0032420F; /* je: equal / zero */

loc_003241A8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    if (((4) & 31u)) _cf = (int)(((uint32_t)(edx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    edx = (uint32_t)(edx) << ((4) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(edi + 4));
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFF)) >> 32) & 1);
    edx = edx + 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFF000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = edx;
    PUSH32(esp, MEM32(ebx + eax * 4 + 0x60));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003241CFu); RECOMP_ABI_CALL(0x00323B6Eu, sub_00323B6E); /* call 0x00323B6E */

loc_003241CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00324226; /* je: equal / zero */

loc_003241D3: ;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(MEM32(ebp + -8)) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    MEM32(ebp + -8) = (uint32_t)(MEM32(ebp + -8)) >> ((4) & 31u);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003241E4u); RECOMP_ABI_CALL(0x00323D2Bu, sub_00323D2B); /* call 0x00323D2B */

loc_003241E4: ;
    edx = ZX16(MEM16(edi));
    esi = MEM32(ebp + -8);
    SET_LO8(ecx, MEM8(eax + 5));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00324204; /* jae: above or equal (unsigned >=) */

loc_003241F4: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003241FCu); RECOMP_ABI_CALL(0x00323FD0u, sub_00323FD0); /* call 0x00323FD0 */

loc_003241FC: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x30)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00324226;

loc_00324204: ;
    MEM32(ebp + -8) = edx;
    edx = MEM32(ebp + 0x18);
    goto loc_0032429F;

loc_0032420F: ;
    SET_LO8(ecx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(ebp + 0xB) = LO8(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00324226; /* jne: not equal / not zero */

loc_0032421A: ;
    ecx = ZX16(MEM16(esi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0032422D; /* jae: above or equal (unsigned >=) */

loc_00324226: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0032456C;

loc_0032422D: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00324265; /* jne: not equal / not zero */

loc_0032423C: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00324265; /* jae: above or equal (unsigned >=) */

loc_00324245: ;
    ecx = ZX16(LO16(eax));
    eax = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ebx + 0x160;
    MEM32(ebp + -12) = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, 1);
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(LO8(eax)) >> ((8 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    SET_LO8(eax, (uint32_t)(LO8(eax)) << ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -12);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00324265: ;
    SET_LO8(ecx, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00324296; /* je: equal / zero */

loc_0032426D: ;
    eax = ZX16(MEM16(esi));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x18));
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00324283; /* je: equal / zero */

loc_0032427B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00324283; /* jbe: below or equal (unsigned <=) */

loc_00324280: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00324283: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D68); PUSH32(esp, 0x00324293u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032428Du); } /* indirect call */
    }

loc_00324293: ;
    edx = MEM32(ebp + 0x18);

loc_00324296: ;
    eax = ZX16(MEM16(esi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx + 0x30)) < (uint32_t)(eax));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - eax;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(ebp + 0xB));

loc_0032429F: ;
    eax = ZX16(MEM16(edi));
    esi = ZX8(MEM8(edi + 6));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + -8)) < (uint32_t)(edx));
    MEM32(ebp + -8) = MEM32(ebp + -8) - edx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = eax;
    if (CMP_A(_fa, _fb)) goto loc_003242BE; /* ja: above (unsigned >) */

loc_003242B7: ;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(MEM32(ebp + -8))) >> 32) & 1);
    edx = edx + MEM32(ebp + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003242BE: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003242DE; /* je: equal / zero */

loc_003242C4: ;
    eax = ZX16(MEM16(edi));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + edi + -16;
    eax = edx;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax + edi + -16;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edi = MEM32(ebp + 0x10);

loc_003242DE: ;
    SET_LO8(eax, LO8(edx));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(LO8(eax)) >> ((8 - (((4) & 31u))) & 31u)) & 1u);
    SET_LO8(eax, (uint32_t)(LO8(eax)) << ((4) & 31u));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(MEM8(ebp + 0x14)));
    SET_LO8(eax, LO8(eax) - MEM8(ebp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM16(edi) = LO16(edx);
    MEM8(edi + 6) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0032431F; /* jne: not equal / not zero */

loc_003242F2: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((0x10) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 5) = MEM8(edi + 5) | LO8(ecx);
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(ebp + 0x1B) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0032430F; /* jne: not equal / not zero */

loc_003242FF: ;
    eax = ZX16(LO16(edx));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + edi + 2) = LO16(edx);
    goto loc_0032452D;

loc_0032430F: ;
    eax = ZX8(MEM8(edi + 4));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(eax + 0x40) = edi;
    goto loc_0032452D;

loc_0032431F: ;
    esi = edx;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(esi) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    esi = (uint32_t)(esi) << ((4) & 31u);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edi)) >> 32) & 1);
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM16(esi + 2) = LO16(edx);
    SET_LO8(eax, MEM8(edi + 4));
    MEM8(esi + 4) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003243BE; /* je: equal / zero */

loc_00324339: ;
    eax = ZX8(LO8(eax));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(eax + 0x40) = esi;
    MEM8(esi + 5) = LO8(ecx);
    SET_LO16(eax, MEM16(ebp + -8));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((0xF8) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(esi) = LO16(eax);
    MEM8(esi + 5) = LO8(ecx);
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0032438D; /* jae: above or equal (unsigned >=) */

loc_0032435D: ;
    eax = ZX16(LO16(ecx));
    edx = ebx + eax * 8 + 0x180;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003243A3; /* jne: not equal / not zero */

loc_0032436B: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ebx + 0x160;
    MEM32(ebp + 8) = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, 1);
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(LO8(eax)) >> ((8 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    SET_LO8(eax, (uint32_t)(LO8(eax)) << ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + 8);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_003243A3;

loc_0032438D: ;
    eax = ebx + 0x180;
    edx = MEM32(eax);
    goto loc_0032439F;

loc_00324397: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edx + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(edx + -8) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003243A3; /* jbe: below or equal (unsigned <=) */

loc_0032439D: ;
    edx = MEM32(edx);

loc_0032439F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324397; /* jne: not equal / not zero */

loc_003243A3: ;
    ecx = MEM32(edx + 4);
    eax = esi + 8;
    MEM32(eax) = edx;
    MEM32(esi + 0xC) = ecx;
    MEM32(ecx) = eax;
    MEM32(edx + 4) = eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x30)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0032452D;

loc_003243BE: ;
    edi = MEM32(ebp + -8);
    if (((4) & 31u)) _cf = (int)(((uint32_t)(edi) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    edi = (uint32_t)(edi) << ((4) & 31u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(esi)) >> 32) & 1);
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(edi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00324443; /* je: equal / zero */

loc_003243CD: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((0xEF) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 5) = LO8(ecx);
    SET_LO16(eax, MEM16(ebp + -8));
    MEM16(esi) = LO16(eax);
    eax = MEM32(ebp + -8);
    ecx = eax;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((4) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + esi + 2) = LO16(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 5) = MEM8(esi + 5) & ((0xF8) & 0xFFu);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00324424; /* jae: above or equal (unsigned >=) */

loc_003243F5: ;
    eax = ZX16(LO16(ecx));
    edi = ebx + eax * 8 + 0x180;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032450A; /* jne: not equal / not zero */

loc_00324407: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(LO8(edx)) >> ((8 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    SET_LO8(edx, (uint32_t)(LO8(edx)) << ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    eax = eax + ebx + 0x160;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_0032450A;

loc_00324424: ;
    eax = ebx + 0x180;
    edi = MEM32(eax);
    goto loc_0032443A;

loc_0032442E: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(edi + -8) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0032450A; /* jbe: below or equal (unsigned <=) */

loc_00324438: ;
    edi = MEM32(edi);

loc_0032443A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032442E; /* jne: not equal / not zero */

loc_0032443E: ;
    goto loc_0032450A;

loc_00324443: ;
    ecx = MEM32(edi + 0xC);
    MEM8(ebp + 0xB) = LO8(eax);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00324476; /* jne: not equal / not zero */

loc_00324455: ;
    SET_LO16(eax, MEM16(edi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00324476; /* jae: above or equal (unsigned >=) */

loc_0032445E: ;
    ecx = ZX16(LO16(eax));
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(LO8(edx)) >> ((8 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    SET_LO8(edx, (uint32_t)(LO8(edx)) << ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    eax = eax + ebx + 0x160;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00324476: ;
    SET_LO8(ecx, MEM8(edi + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003244A4; /* je: equal / zero */

loc_0032447E: ;
    eax = ZX16(MEM16(edi));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x18));
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00324494; /* je: equal / zero */

loc_0032448C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00324494; /* jbe: below or equal (unsigned <=) */

loc_00324491: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00324494: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = edi + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D68); PUSH32(esp, 0x003244A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032449Eu); } /* indirect call */
    }

loc_003244A4: ;
    eax = ZX16(MEM16(edi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx + 0x30)) < (uint32_t)(eax));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - eax;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX16(MEM16(edi));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(ebp + 0xB));
    MEM8(esi + 5) = LO8(ecx);
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00324522; /* ja: above (unsigned >) */

loc_003244C0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM16(esi) = LO16(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_003244D7; /* jne: not equal / not zero */

loc_003244C8: ;
    eax = MEM32(ebp + -8);
    ecx = eax;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((4) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(ecx + esi + 2) = LO16(eax);
    goto loc_003244E2;

loc_003244D7: ;
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(eax + 0x40) = esi;

loc_003244E2: ;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 5) = MEM8(esi + 5) & ((0xF8) & 0xFFu);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003243F5; /* jb: below (unsigned <) */

loc_003244F4: ;
    eax = ebx + 0x180;
    edi = MEM32(eax);
    goto loc_00324506;

loc_003244FE: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(edi + -8) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0032450A; /* jbe: below or equal (unsigned <=) */

loc_00324504: ;
    edi = MEM32(edi);

loc_00324506: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003244FE; /* jne: not equal / not zero */

loc_0032450A: ;
    ecx = MEM32(edi + 4);
    eax = esi + 8;
    MEM32(eax) = edi;
    MEM32(esi + 0xC) = ecx;
    MEM32(ecx) = eax;
    MEM32(edi + 4) = eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x30)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0032452A;

loc_00324522: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032452Au); RECOMP_ABI_CALL(0x00323FD0u, sub_00323FD0); /* call 0x00323FD0 */

loc_0032452A: ;
    edi = MEM32(ebp + 0x10);

loc_0032452D: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00324558; /* je: equal / zero */

loc_00324535: ;
    esi = MEM32(ebp + -12);
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00324558; /* jbe: below or equal (unsigned <=) */

loc_0032453F: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esi + edi + 0x10;
    esi = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(ebp + 0x10);

loc_00324558: ;
    eax = edx;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ MEM8(edi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)(edx) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    edx = (uint32_t)(edx) >> ((4) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & ((0x1F) & 0xFFu));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(edi + 5) = LO8(eax);
    SET_LO8(eax, 1);

loc_0032456C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0032456E: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}

/**
 * sub_00324573
 * Original: 0x00324573 - 0x003245A2 (47 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324573(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00324573: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ecx + -11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00324583; /* jne: not equal / not zero */

loc_0032457E: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0032459F;

loc_00324583: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00324592; /* je: equal / zero */

loc_00324587: ;
    edx = ZX16(MEM16(ecx + -16));
    eax = MEM32(ecx + -24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0032459F;

loc_00324592: ;
    eax = ZX16(MEM16(ecx + -16));
    ecx = ZX8(MEM8(ecx + -10));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0032459F: ;
    g_eflags = (g_eflags & ~0x40u) | (((eax == 0)) ? 0x40u : 0u); /* flags across call boundary */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003245A2
 * Original: 0x003245A2 - 0x003246C0 (286 bytes, 107 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003245A2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003245A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x20);
    _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + 0x18)));
    eax = eax - MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x1000;
    ecx = ebx;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = esi + 0x57;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFFFF0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003245D8; /* jne: not equal / not zero */

loc_003245CF: ;
    SET_LO16(eax, MEM16(eax));
    MEM16(ebp + -4) = LO16(eax);
    goto loc_003245DC;

loc_003245D8: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003245DC: ;
    ecx = MEM32(ebp + 0x1C);
    eax = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> (((((4) & 31u)) - 1) & 31u)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -12) = eax;
    eax = edi + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00324626; /* jb: below (unsigned <) */

loc_003245F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00324616; /* jae: above or equal (unsigned >=) */

loc_003245F5: ;
    eax = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, ebx);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D64); PUSH32(esp, 0x00324612u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032460Cu); } /* indirect call */
    }

loc_00324612: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0032461D; /* jge: greater or equal (signed >=) */

loc_00324616: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003246B9;

loc_0032461D: ;
    ecx = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 0xC))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x1C) = ecx;

loc_00324626: ;
    eax = MEM32(ebp + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x1000;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    SET_LO16(edx, MEM16(ebp + -4));
    SET_LO8(ebx, MEM8(ebp + 0x10));
    MEM16(esi + 2) = LO16(edx);
    SET_LO16(edx, MEM16(ebp + -12));
    MEM16(esi) = LO16(edx);
    edx = MEM32(ebp + 0x14);
    MEM32(esi + 0x14) = edx;
    edx = MEM32(ebp + 8);
    MEM32(esi + 0x18) = edx;
    edx = MEM32(ebp + 0x18);
    MEM32(esi + 0x20) = edx;
    edx = MEM32(ebp + -8);
    if (((0xC) & 31u)) _cf = (int)(((uint32_t)(edx) >> ((32 - (((0xC) & 31u))) & 31u)) & 1u);
    edx = (uint32_t)(edx) << ((0xC) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(MEM32(ebp + 0x18))) >> 32) & 1);
    edx = edx + MEM32(ebp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 5) = 1;
    MEM32(esi + 0x2C) = edx;
    edx = MEM32(ebp + -8);
    MEM8(esi + 4) = LO8(ebx);
    MEM32(esi + 0x10) = 0xFFEEFFEEu;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x24) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0032468F; /* je: equal / zero */

loc_00324681: ;
    if (((0xC) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((0xC) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((0xC) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032468Cu); RECOMP_ABI_CALL(0x00323ADBu, sub_00323ADB); /* call 0x00323ADB */

loc_0032468C: ;
    ecx = MEM32(ebp + 0x1C);

loc_0032468F: ;
    edx = MEM32(ebp + 8);
    eax = ZX8(LO8(ebx));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx + eax * 4 + 0x60) = esi;
    SET_LO16(eax, MEM16(esi));
    if (((4) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> (((((4) & 31u)) - 1) & 31u)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM8(edi + 5) = 0x10;
    MEM32(esi + 0x40) = edi;
    PUSH32(esp, edx);
    MEM16(edi + 2) = LO16(eax);
    MEM8(edi + 4) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003246B7u); RECOMP_ABI_CALL(0x00323FD0u, sub_00323FD0); /* call 0x00323FD0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003246B7: ;
    SET_LO8(eax, 1);

loc_003246B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 32; return; /* ret 28 */

}

/**
 * sub_003246C0
 * Original: 0x003246C0 - 0x00324847 (391 bytes, 150 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003246C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003246C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ebx + 0xFFF;
    if (((0xC) & 31u)) _cf = (int)(((uint32_t)(esi) >> (((((0xC) & 31u)) - 1) & 31u)) & 1u);
    esi = (uint32_t)(esi) >> ((0xC) & 31u);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = esi;
    if (((0xC) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((0xC) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((0xC) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    MEM8(ebp + -12) = 0x40;
    MEM8(ebp + 0xF) = 0;

loc_003246E8: ;
    ecx = ZX8(MEM8(ebp + 0xF));
    ecx = MEM32(edi + ecx * 4 + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0032471B; /* je: equal / zero */

loc_003246F7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x30) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00324727; /* ja: above (unsigned >) */

loc_003246FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00324727; /* ja: above (unsigned >) */

loc_00324701: ;
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032470Eu); RECOMP_ABI_CALL(0x00323B6Eu, sub_00323B6E); /* call 0x00323B6E */

loc_0032470E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0032480A; /* jne: not equal / not zero */

loc_00324716: ;
    eax = MEM32(ebp + -8);
    goto loc_00324727;

loc_0032471B: ;
    _fa = (uint32_t)(MEM8(ebp + -12)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -12), 0x40 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324727; /* jne: not equal / not zero */

loc_00324721: ;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    MEM8(ebp + -12) = LO8(ecx);

loc_00324727: ;
    MEM8(ebp + 0xF) = MEM8(ebp + 0xF) + 1;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xF), 0x40 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003246E8; /* jb: below (unsigned <) */

loc_00324730: ;
    _fa = (uint32_t)(MEM8(ebp + -12)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -12), 0x40 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032483E; /* je: equal / zero */

loc_0032473A: ;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x14), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0032483E; /* je: equal / zero */

loc_00324744: ;
    ecx = MEM32(edi + 0x20);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx + 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + 8) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0032475E; /* ja: above (unsigned >) */

loc_0032475B: ;
    MEM32(ebp + 8) = ecx;

loc_0032475E: ;
    esi = MEM32(0x445D64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    ebx = 0x2000;
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = esi; PUSH32(esp, 0x00324778u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324776u); } /* indirect call */
    }

loc_00324778: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_003247AA; /* jge: greater or equal (signed >=) */

loc_0032477C: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003247A2; /* je: equal / zero */

loc_00324784: ;
    if (((1) & 31u)) _cf = (int)(((uint32_t)(MEM32(ebp + 8)) >> (((((1) & 31u)) - 1) & 31u)) & 1u);
    MEM32(ebp + 8) = (uint32_t)(MEM32(ebp + 8)) >> ((1) & 31u);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0032478F; /* jae: above or equal (unsigned >=) */

loc_0032478C: ;
    MEM32(ebp + 8) = ecx;

loc_0032478F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = esi; PUSH32(esp, 0x0032479Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032479Cu); } /* indirect call */
    }

loc_0032479E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0032477C; /* jl: less (signed <) */

loc_003247A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0032483E; /* jl: less (signed <) */

loc_003247AA: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edi + 0x20)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(edi + 0x20) = MEM32(edi + 0x20) + eax;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -16) = ecx;
    if (CMP_A(_fa, _fb)) goto loc_003247C0; /* ja: above (unsigned >) */

loc_003247BD: ;
    MEM32(ebp + -16) = eax;

loc_003247C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = esi; PUSH32(esp, 0x003247D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003247D1u); } /* indirect call */
    }

loc_003247D3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0032482B; /* jl: less (signed <) */

loc_003247D9: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003247F5u); RECOMP_ABI_CALL(0x003245A2u, sub_003245A2); /* call 0x003245A2 */

loc_003247F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003247FE; /* jne: not equal / not zero */

loc_003247F9: ;
    esi = 0xC0000017u;

loc_003247FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0032482B; /* jl: less (signed <) */

loc_00324802: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + 0x28);
    goto loc_00324840;

loc_0032480A: ;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(MEM32(ebp + -8)) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    MEM32(ebp + -8) = (uint32_t)(MEM32(ebp + -8)) >> ((4) & 31u);
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032481Bu); RECOMP_ABI_CALL(0x00323D2Bu, sub_00323D2B); /* call 0x00323D2B */

loc_0032481B: ;
    PUSH32(esp, MEM32(ebp + -8));
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324827u); RECOMP_ABI_CALL(0x00323FD0u, sub_00323FD0); /* call 0x00323FD0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00324827: ;
    eax = esi;
    goto loc_00324840;

loc_0032482B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D60); PUSH32(esp, 0x0032483Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324838u); } /* indirect call */
    }

loc_0032483E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00324840: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_00324847
 * Original: 0x00324847 - 0x00324AF1 (682 bytes, 225 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00324847(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00324847: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebx + 0x584)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x584), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032486B; /* je: equal / zero */

loc_0032485A: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324866u); RECOMP_ABI_CALL(0x00323FD0u, sub_00323FD0); /* call 0x00323FD0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00324866: ;
    goto loc_00324AEC;

loc_0032486B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(ebp + 8) = eax;
    eax = esi + 0xFFF;
    edx = 0xFFFFF000u;
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> (((((4) & 31u)) - 1) & 31u)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003248B0; /* jne: not equal / not zero */

loc_0032489F: ;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1000)) >> 32) & 1);
    eax = eax + 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 0x101;
    goto loc_003248CC;

loc_003248B0: ;
    SET_LO16(ecx, MEM16(esi + 2));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003248CC; /* je: equal / zero */

loc_003248B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003248CC; /* jne: not equal / not zero */

loc_003248BD: ;
    ecx = ZX16(LO16(ecx));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((4) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx;
    ecx = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -16) = ecx;

loc_003248CC: ;
    edi = MEM32(ebp + 0x10);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)(edi) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    edi = (uint32_t)(edi) << ((4) & 31u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(esi)) >> 32) & 1);
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = ecx;
    ecx = edi;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(ebp + 0xC)));
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> (((((4) & 31u)) - 1) & 31u)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 1 (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -12) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00324903; /* jne: not equal / not zero */

loc_003248F0: ;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + 0xC)) < (uint32_t)(0x1000));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 0x1000;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -12) = 0x101;
    ecx = MEM32(ebp + -12);
    goto loc_00324911;

loc_00324903: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00324911; /* jne: not equal / not zero */

loc_00324908: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00324911; /* jne: not equal / not zero */

loc_0032490E: ;
    MEM32(ebp + -24) = edi;

loc_00324911: ;
    ecx = ZX16(LO16(ecx));
    MEM32(ebp + -20) = ecx;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((4) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(ecx));
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -36) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00324929; /* jbe: below or equal (unsigned <=) */

loc_00324924: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + 0xC)) < (uint32_t)(eax));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0032492D;

loc_00324929: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0032492D: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00324AE0; /* je: equal / zero */

loc_00324937: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032493Fu); RECOMP_ABI_CALL(0x0032399Au, sub_0032399A); /* call 0x0032399A */

loc_0032493F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00324AE0; /* je: equal / zero */

loc_0032494A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4000);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D60); PUSH32(esp, 0x0032495Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324957u); } /* indirect call */
    }

loc_0032495D: ;
    PUSH32(esp, MEM32(ebp + -28));
    MEM32(ebp + -32) = eax;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032496Bu); RECOMP_ABI_CALL(0x00323ABAu, sub_00323ABA); /* call 0x00323ABA */

loc_0032496B: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00324AE0; /* jl: less (signed <) */

loc_00324975: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324983u); RECOMP_ABI_CALL(0x00323ADBu, sub_00323ADB); /* call 0x00323ADB */

loc_00324983: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    if (((0xC) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((0xC) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((0xC) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edx + 0x30)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(edx + 0x30) = MEM32(edx + 0x30) + eax;
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00324A2A; /* je: equal / zero */

loc_0032499B: ;
    eax = ZX16(LO16(ecx));
    MEM8(esi + 5) = 0x10;
    MEM16(esi) = LO16(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x30)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x40) = esi;
    _cf = 0; /* logical op clears CF */
    MEM8(esi + 5) = MEM8(esi + 5) & ((0xF8) & 0xFFu);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003249E6; /* jae: above or equal (unsigned >=) */

loc_003249B6: ;
    eax = ebx + eax * 8 + 0x180;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00324A0C; /* jne: not equal / not zero */

loc_003249C4: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ebx + 0x160;
    MEM32(ebp + -32) = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, 1);
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(LO8(eax)) >> ((8 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    SET_LO8(eax, (uint32_t)(LO8(eax)) << ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(ebp + -32);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00324A09;

loc_003249E6: ;
    ecx = ebx + 0x180;
    eax = MEM32(ecx);
    goto loc_00324A02;

loc_003249F0: ;
    SET_LO16(ecx, MEM16(ebp + -8));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(eax + -8) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00324A06; /* jbe: below or equal (unsigned <=) */

loc_003249FA: ;
    eax = MEM32(eax);
    ecx = ebx + 0x180;

loc_00324A02: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003249F0; /* jne: not equal / not zero */

loc_00324A06: ;
    MEM32(ebp + 8) = eax;

loc_00324A09: ;
    eax = MEM32(ebp + 8);

loc_00324A0C: ;
    ecx = MEM32(eax + 4);
    MEM32(ebp + 0x10) = ecx;
    ecx = esi + 8;
    MEM32(ecx) = eax;
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0xC) = ecx;
    esi = MEM32(ebp + 8);
    MEM32(ecx) = esi;
    MEM32(eax + 4) = esi;
    goto loc_00324A50;

loc_00324A2A: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00324A37; /* je: equal / zero */

loc_00324A31: ;
    _cf = 0; /* logical op clears CF */
    MEM8(eax + 5) = MEM8(eax + 5) | ((0x10) & 0xFFu);
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00324A4D;

loc_00324A37: ;
    eax = MEM32(edx + 0x40);
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00324A50; /* jb: below (unsigned <) */

loc_00324A41: ;
    esi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00324A50; /* jae: above or equal (unsigned >=) */

loc_00324A4A: ;
    eax = MEM32(edx + 0x28);

loc_00324A4D: ;
    MEM32(edx + 0x40) = eax;

loc_00324A50: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00324AD2; /* je: equal / zero */

loc_00324A58: ;
    _cf = 0; /* logical op clears CF */
    MEM16(edi + 2) = MEM16(edi + 2) & ((0) & 0xFFFFu);
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(edx + 4));
    MEM8(edi + 4) = LO8(ecx);
    ecx = MEM32(ebp + -36);
    MEM8(edi + 5) = 0;
    MEM16(edi) = LO16(eax);
    MEM16(ecx + edi + 2) = LO16(eax);
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 5) = MEM8(edi + 5) & ((0xF8) & 0xFFu);
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00324AA4; /* jae: above or equal (unsigned >=) */

loc_00324A7C: ;
    eax = MEM32(ebp + -20);
    esi = ebx + eax * 8 + 0x180;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324ABA; /* jne: not equal / not zero */

loc_00324A8A: ;
    ecx = ZX16(MEM16(edi));
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(LO8(edx)) >> ((8 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    SET_LO8(edx, (uint32_t)(LO8(edx)) << ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    eax = eax + ebx + 0x160;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00324ABA;

loc_00324AA4: ;
    ecx = ebx + 0x180;
    esi = MEM32(ecx);
    goto loc_00324AB6;

loc_00324AAE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + -8) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00324ABA; /* jbe: below or equal (unsigned <=) */

loc_00324AB4: ;
    esi = MEM32(esi);

loc_00324AB6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324AAE; /* jne: not equal / not zero */

loc_00324ABA: ;
    ecx = MEM32(esi + 4);
    eax = edi + 8;
    MEM32(eax) = esi;
    MEM32(edi + 0xC) = ecx;
    MEM32(ecx) = eax;
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x30)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00324AEA;

loc_00324AD2: ;
    eax = MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00324AEA; /* je: equal / zero */

loc_00324AD9: ;
    _cf = 0; /* logical op clears CF */
    MEM16(eax + 2) = MEM16(eax + 2) & ((0) & 0xFFFFu);
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_00324AEA;

loc_00324AE0: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324AEAu); RECOMP_ABI_CALL(0x00323FD0u, sub_00323FD0); /* call 0x00323FD0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00324AEA: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00324AEC: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_00324AF1
 * Original: 0x00324AF1 - 0x00324F15 (1060 bytes, 320 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324AF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00324AF1: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x446580);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324AFDu); RECOMP_ABI_CALL(0x00374864u, sub_00374864); /* call 0x00374864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00324AFD: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -28) = esi;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -120;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324B54; /* je: equal / zero */

loc_00324B15: ;
    MEM32(ebp + -4) = esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x30 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324B2C; /* jne: not equal / not zero */

loc_00324B1D: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    eax = ebp + -120;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324B29u); RECOMP_ABI_CALL(0x003733D0u, sub_003733D0); /* call 0x003733D0 */

loc_00324B29: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324B2C: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00324B4C;

loc_00324B4C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00324E9C; /* jl: less (signed <) */

loc_00324B54: ;
    _fa = (uint32_t)(MEM8(0xD63C92)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0xD63C92), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00324B61; /* je: equal / zero */

loc_00324B5D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 8) = MEM8(ebp + 8) | ((0x80) & 0xFFu);
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00324B61: ;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324B6E; /* jne: not equal / not zero */

loc_00324B66: ;
    eax = MEM32(0x49E0E8);
    MEM32(ebp + -116) = eax;

loc_00324B6E: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324B7B; /* jne: not equal / not zero */

loc_00324B73: ;
    eax = MEM32(0x49E0EC);
    MEM32(ebp + -112) = eax;

loc_00324B7B: ;
    _fa = (uint32_t)(MEM32(ebp + -108)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -108), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324B88; /* jne: not equal / not zero */

loc_00324B80: ;
    eax = MEM32(0x49E0F4);
    MEM32(ebp + -108) = eax;

loc_00324B88: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324B95; /* jne: not equal / not zero */

loc_00324B8D: ;
    eax = MEM32(0x49E0F0);
    MEM32(ebp + -104) = eax;

loc_00324B95: ;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324BA1; /* jne: not equal / not zero */

loc_00324B9A: ;
    MEM32(ebp + -100) = 0x7FFDEFFF;

loc_00324BA1: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324BAF; /* je: equal / zero */

loc_00324BA6: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), 0xFF000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00324BB6; /* jbe: below or equal (unsigned <=) */

loc_00324BAF: ;
    MEM32(ebp + -96) = 0xFF000;

loc_00324BB6: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324BE3; /* jne: not equal / not zero */

loc_00324BBD: ;
    MEM32(ebp + 0x14) = 0x1000;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324BD4; /* jne: not equal / not zero */

loc_00324BCB: ;
    MEM32(ebp + 0x10) = 0x40000;
    goto loc_00324C10;

loc_00324BD4: ;
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFF)) >> 32) & 1);
    eax = eax + 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFF000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00324BDE: ;
    MEM32(ebp + 0x10) = eax;
    goto loc_00324C10;

loc_00324BE3: ;
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFF)) >> 32) & 1);
    eax = eax + 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xFFFFF000u;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x14) = eax;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324C05; /* jne: not equal / not zero */

loc_00324BF9: ;
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFF)) >> 32) & 1);
    eax = eax + 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00324BDE;

loc_00324C05: ;
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFF)) >> 32) & 1);
    edx = edx + 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x10) = edx;

loc_00324C10: ;
    MEM32(ebp + -36) = 0x590;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00324C35; /* jne: not equal / not zero */

loc_00324C1D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324C28; /* je: equal / zero */

loc_00324C22: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) | ((0x80) & 0xFFu);
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00324C3E;

loc_00324C28: ;
    MEM32(ebp + -36) = 0x5AC;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00324C3E;

loc_00324C35: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324C3E: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324D13; /* je: equal / zero */

loc_00324C49: ;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324C89; /* je: equal / zero */

loc_00324C4E: ;
    ebx = MEM32(ebp + -92);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324E9C; /* je: equal / zero */

loc_00324C59: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324E9C; /* je: equal / zero */

loc_00324C64: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00324E9C; /* ja: above (unsigned >) */

loc_00324C6C: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324C76: ;
    MEM32(ebp + -32) = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;
    ecx = 0x400;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_00324D04;

loc_00324C89: ;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(0x445D70);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = esi; PUSH32(esp, 0x00324C98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324C96u); } /* indirect call */
    }

loc_00324C98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00324E9C; /* jl: less (signed <) */

loc_00324CA0: ;
    edi = MEM32(ebp + -72);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324CAC: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x10000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324E9C; /* je: equal / zero */

loc_00324CB9: ;
    MEM32(ebp + -32) = edi;
    eax = 0x1000;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324CFF; /* jne: not equal / not zero */

loc_00324CC6: ;
    ecx = 0x400;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -60);
    MEM32(ebp + 0x14) = eax;
    ecx = MEM32(ebp + -32);
    ebx = eax + ecx;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = esi; PUSH32(esp, 0x00324CE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324CE0u); } /* indirect call */
    }

loc_00324CE2: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + 0x10) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00324D04; /* jl: less (signed <) */

loc_00324CEC: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x2000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324D04; /* jne: not equal / not zero */

loc_00324CF5: ;
    eax = MEM32(ebp + -60);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;
    goto loc_00324D04;

loc_00324CFF: ;
    MEM32(ebp + 0x14) = eax;
    ebx = edi;

loc_00324D04: ;
    MEM32(ebp + -40) = 1;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -28) = eax;
    goto loc_00324D4F;

loc_00324D13: ;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324D1C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D64); PUSH32(esp, 0x00324D32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324D2Cu); } /* indirect call */
    }

loc_00324D32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00324E9C; /* jl: less (signed <) */

loc_00324D3A: ;
    MEM32(ebp + -40) = esi;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324D49; /* jne: not equal / not zero */

loc_00324D42: ;
    MEM32(ebp + 0x14) = 0x1000;

loc_00324D49: ;
    ebx = MEM32(ebp + -28);
    MEM32(ebp + -32) = ebx;

loc_00324D4F: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324D94; /* jne: not equal / not zero */

loc_00324D54: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D64); PUSH32(esp, 0x00324D6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324D65u); } /* indirect call */
    }

loc_00324D6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00324D91; /* jge: greater or equal (signed >=) */

loc_00324D6F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324D79: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D60); PUSH32(esp, 0x00324D8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324D86u); } /* indirect call */
    }

loc_00324D8C: ;
    goto loc_00324E9C;

loc_00324D91: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(MEM32(ebp + 0x14))) >> 32) & 1);
    ebx = ebx + MEM32(ebp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324D94: ;
    edx = MEM32(ebp + -28);
    eax = edx + 0x597;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + -36);
    edi = 0x80;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edi)) >> 32) & 1);
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x4C)) >> 32) & 1);
    edx = edx + 0x4C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    POP32(esp, ecx);

loc_00324DB0: ;
    MEM32(edx) = eax;
    edx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00324DB0; /* jne: not equal / not zero */

loc_00324DBA: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    MEM32(edx) = MEM32(edx) & 0;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(0xD63C91)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0xD63C91), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00324DE9; /* je: equal / zero */

loc_00324DC8: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(7)) >> 32) & 1);
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x17C) = eax;
    eax = 0x60C;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -28);
    ecx = MEM32(ecx + 0x17C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324DE9: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xF)) >> 32) & 1);
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ebp + -28);
    MEM16(edx) = LO16(eax);
    eax = MEM32(ebp + -28);
    MEM8(eax + 5) = 1;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x10) = 0xEEFFEEFFu;
    edx = MEM32(ebp + -28);
    eax = MEM32(ebp + 8);
    MEM32(edx + 0x14) = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x6001007D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ebp + -28);
    MEM32(edx + 0x18) = eax;
    eax = MEM32(ebp + -28);
    _cf = 0; /* logical op clears CF */
    MEM16(eax + 0x170) = MEM16(eax + 0x170) | ((0xFFFF) & 0xFFFFu);
    _fa = (uint32_t)(MEM16(eax + 0x170)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    edx = ecx;
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(eax + 0x3A) = LO16(edx);
    eax = MEM32(ebp + -28);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x3C) = MEM32(eax + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x180)) >> 32) & 1);
    eax = eax + 0x180;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324E45: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00324E45; /* jne: not equal / not zero */

loc_00324E50: ;
    eax = MEM32(ebp + -28);
    edx = eax + 0x58;
    MEM32(eax + 0x5C) = edx;
    eax = MEM32(ebp + -28);
    edx = MEM32(eax + 0x5C);
    MEM32(eax + 0x58) = edx;
    edi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324E73; /* jne: not equal / not zero */

loc_00324E6A: ;
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D6C); PUSH32(esp, 0x00324E73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324E6Du); } /* indirect call */
    }

loc_00324E73: ;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x580) = edi;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 0);
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324E98u); RECOMP_ABI_CALL(0x003245A2u, sub_003245A2); /* call 0x003245A2 */

loc_00324E98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00324EA0; /* jne: not equal / not zero */

loc_00324E9C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00324F0D;

loc_00324EA0: ;
    eax = MEM32(ebp + -28);
    _cf = 0; /* logical op clears CF */
    MEM16(eax + 0x38) = MEM16(eax + 0x38) & ((0) & 0xFFFFu);
    _fa = (uint32_t)(MEM16(eax + 0x38)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -116);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -112);
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(ebp + -108);
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(ebp + -104);
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -100);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(ebp + -96);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xF)) >> 32) & 1);
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -84);
    MEM32(eax + 0x584) = ecx;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x50) = 0x1F;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x54) = 0xFFFFFFF0u;
    eax = MEM32(ebp + -28);

loc_00324F0D: ;
    g_eflags = (g_eflags & ~0x40u) | (((eax == 0)) ? 0x40u : 0u); /* flags across call boundary */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324F12u); RECOMP_ABI_CALL(0x0037489Fu, sub_0037489F); /* call 0x0037489F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */
    _cf = g_eflags & 1u; /* callee carry */

loc_00324F12: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 28; return; /* ret 24 */

}

/**
 * sub_00324B32
 * Original: 0x00324B32 - 0x00324F15 (995 bytes, 7 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324B32(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00324B32: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    MEM32(ebp + -44) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00324B40
 * Original: 0x00324B40 - 0x00324F15 (981 bytes, 299 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00324B40: ;
    esp = MEM32(ebp + -24);
    ebx = MEM32(ebp + -44);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00324E9C; /* jl: less (signed <) */

loc_00324B54: ;
    _fa = (uint32_t)(MEM8(0xD63C92)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0xD63C92), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00324B61; /* je: equal / zero */

loc_00324B5D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 8) = MEM8(ebp + 8) | ((0x80) & 0xFFu);
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00324B61: ;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324B6E; /* jne: not equal / not zero */

loc_00324B66: ;
    eax = MEM32(0x49E0E8);
    MEM32(ebp + -116) = eax;

loc_00324B6E: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324B7B; /* jne: not equal / not zero */

loc_00324B73: ;
    eax = MEM32(0x49E0EC);
    MEM32(ebp + -112) = eax;

loc_00324B7B: ;
    _fa = (uint32_t)(MEM32(ebp + -108)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -108), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324B88; /* jne: not equal / not zero */

loc_00324B80: ;
    eax = MEM32(0x49E0F4);
    MEM32(ebp + -108) = eax;

loc_00324B88: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324B95; /* jne: not equal / not zero */

loc_00324B8D: ;
    eax = MEM32(0x49E0F0);
    MEM32(ebp + -104) = eax;

loc_00324B95: ;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324BA1; /* jne: not equal / not zero */

loc_00324B9A: ;
    MEM32(ebp + -100) = 0x7FFDEFFF;

loc_00324BA1: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324BAF; /* je: equal / zero */

loc_00324BA6: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), 0xFF000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00324BB6; /* jbe: below or equal (unsigned <=) */

loc_00324BAF: ;
    MEM32(ebp + -96) = 0xFF000;

loc_00324BB6: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324BE3; /* jne: not equal / not zero */

loc_00324BBD: ;
    MEM32(ebp + 0x14) = 0x1000;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324BD4; /* jne: not equal / not zero */

loc_00324BCB: ;
    MEM32(ebp + 0x10) = 0x40000;
    goto loc_00324C10;

loc_00324BD4: ;
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFF)) >> 32) & 1);
    eax = eax + 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFF000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00324BDE: ;
    MEM32(ebp + 0x10) = eax;
    goto loc_00324C10;

loc_00324BE3: ;
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFF)) >> 32) & 1);
    eax = eax + 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xFFFFF000u;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x14) = eax;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324C05; /* jne: not equal / not zero */

loc_00324BF9: ;
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFF)) >> 32) & 1);
    eax = eax + 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00324BDE;

loc_00324C05: ;
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFF)) >> 32) & 1);
    edx = edx + 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x10) = edx;

loc_00324C10: ;
    MEM32(ebp + -36) = 0x590;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00324C35; /* jne: not equal / not zero */

loc_00324C1D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324C28; /* je: equal / zero */

loc_00324C22: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) | ((0x80) & 0xFFu);
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00324C3E;

loc_00324C28: ;
    MEM32(ebp + -36) = 0x5AC;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00324C3E;

loc_00324C35: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324C3E: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324D13; /* je: equal / zero */

loc_00324C49: ;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324C89; /* je: equal / zero */

loc_00324C4E: ;
    ebx = MEM32(ebp + -92);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324E9C; /* je: equal / zero */

loc_00324C59: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324E9C; /* je: equal / zero */

loc_00324C64: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00324E9C; /* ja: above (unsigned >) */

loc_00324C6C: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324C76: ;
    MEM32(ebp + -32) = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;
    ecx = 0x400;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_00324D04;

loc_00324C89: ;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(0x445D70);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = esi; PUSH32(esp, 0x00324C98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324C96u); } /* indirect call */
    }

loc_00324C98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00324E9C; /* jl: less (signed <) */

loc_00324CA0: ;
    edi = MEM32(ebp + -72);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324CAC: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x10000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324E9C; /* je: equal / zero */

loc_00324CB9: ;
    MEM32(ebp + -32) = edi;
    eax = 0x1000;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324CFF; /* jne: not equal / not zero */

loc_00324CC6: ;
    ecx = 0x400;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -60);
    MEM32(ebp + 0x14) = eax;
    ecx = MEM32(ebp + -32);
    ebx = eax + ecx;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = esi; PUSH32(esp, 0x00324CE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324CE0u); } /* indirect call */
    }

loc_00324CE2: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + 0x10) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00324D04; /* jl: less (signed <) */

loc_00324CEC: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x2000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324D04; /* jne: not equal / not zero */

loc_00324CF5: ;
    eax = MEM32(ebp + -60);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;
    goto loc_00324D04;

loc_00324CFF: ;
    MEM32(ebp + 0x14) = eax;
    ebx = edi;

loc_00324D04: ;
    MEM32(ebp + -40) = 1;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -28) = eax;
    goto loc_00324D4F;

loc_00324D13: ;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324D1C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D64); PUSH32(esp, 0x00324D32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324D2Cu); } /* indirect call */
    }

loc_00324D32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00324E9C; /* jl: less (signed <) */

loc_00324D3A: ;
    MEM32(ebp + -40) = esi;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324D49; /* jne: not equal / not zero */

loc_00324D42: ;
    MEM32(ebp + 0x14) = 0x1000;

loc_00324D49: ;
    ebx = MEM32(ebp + -28);
    MEM32(ebp + -32) = ebx;

loc_00324D4F: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324D94; /* jne: not equal / not zero */

loc_00324D54: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D64); PUSH32(esp, 0x00324D6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324D65u); } /* indirect call */
    }

loc_00324D6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00324D91; /* jge: greater or equal (signed >=) */

loc_00324D6F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324D79: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D60); PUSH32(esp, 0x00324D8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324D86u); } /* indirect call */
    }

loc_00324D8C: ;
    goto loc_00324E9C;

loc_00324D91: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(MEM32(ebp + 0x14))) >> 32) & 1);
    ebx = ebx + MEM32(ebp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324D94: ;
    edx = MEM32(ebp + -28);
    eax = edx + 0x597;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + -36);
    edi = 0x80;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edi)) >> 32) & 1);
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x4C)) >> 32) & 1);
    edx = edx + 0x4C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    POP32(esp, ecx);

loc_00324DB0: ;
    MEM32(edx) = eax;
    edx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00324DB0; /* jne: not equal / not zero */

loc_00324DBA: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    MEM32(edx) = MEM32(edx) & 0;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(0xD63C91)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0xD63C91), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00324DE9; /* je: equal / zero */

loc_00324DC8: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(7)) >> 32) & 1);
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x17C) = eax;
    eax = 0x60C;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -28);
    ecx = MEM32(ecx + 0x17C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324DE9: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xF)) >> 32) & 1);
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ebp + -28);
    MEM16(edx) = LO16(eax);
    eax = MEM32(ebp + -28);
    MEM8(eax + 5) = 1;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x10) = 0xEEFFEEFFu;
    edx = MEM32(ebp + -28);
    eax = MEM32(ebp + 8);
    MEM32(edx + 0x14) = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x6001007D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ebp + -28);
    MEM32(edx + 0x18) = eax;
    eax = MEM32(ebp + -28);
    _cf = 0; /* logical op clears CF */
    MEM16(eax + 0x170) = MEM16(eax + 0x170) | ((0xFFFF) & 0xFFFFu);
    _fa = (uint32_t)(MEM16(eax + 0x170)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    edx = ecx;
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(eax + 0x3A) = LO16(edx);
    eax = MEM32(ebp + -28);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x3C) = MEM32(eax + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x180)) >> 32) & 1);
    eax = eax + 0x180;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324E45: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00324E45; /* jne: not equal / not zero */

loc_00324E50: ;
    eax = MEM32(ebp + -28);
    edx = eax + 0x58;
    MEM32(eax + 0x5C) = edx;
    eax = MEM32(ebp + -28);
    edx = MEM32(eax + 0x5C);
    MEM32(eax + 0x58) = edx;
    edi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324E73; /* jne: not equal / not zero */

loc_00324E6A: ;
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D6C); PUSH32(esp, 0x00324E73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324E6Du); } /* indirect call */
    }

loc_00324E73: ;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x580) = edi;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 0);
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324E98u); RECOMP_ABI_CALL(0x003245A2u, sub_003245A2); /* call 0x003245A2 */

loc_00324E98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00324EA0; /* jne: not equal / not zero */

loc_00324E9C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00324F0D;

loc_00324EA0: ;
    eax = MEM32(ebp + -28);
    _cf = 0; /* logical op clears CF */
    MEM16(eax + 0x38) = MEM16(eax + 0x38) & ((0) & 0xFFFFu);
    _fa = (uint32_t)(MEM16(eax + 0x38)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -116);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -112);
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(ebp + -108);
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(ebp + -104);
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -100);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(ebp + -96);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xF)) >> 32) & 1);
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -84);
    MEM32(eax + 0x584) = ecx;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x50) = 0x1F;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x54) = 0xFFFFFFF0u;
    eax = MEM32(ebp + -28);

loc_00324F0D: ;
    g_eflags = (g_eflags & ~0x40u) | (((eax == 0)) ? 0x40u : 0u); /* flags across call boundary */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324F12u); RECOMP_ABI_CALL(0x0037489Fu, sub_0037489F); /* call 0x0037489F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */
    _cf = g_eflags & 1u; /* callee carry */

loc_00324F12: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 28; return; /* ret 24 */

}

/**
 * sub_00324B43
 * Original: 0x00324B43 - 0x00324F15 (978 bytes, 298 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324B43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00324B43: ;
    ebx = MEM32(ebp + -44);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00324E9C; /* jl: less (signed <) */

loc_00324B54: ;
    _fa = (uint32_t)(MEM8(0xD63C92)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0xD63C92), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00324B61; /* je: equal / zero */

loc_00324B5D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 8) = MEM8(ebp + 8) | ((0x80) & 0xFFu);
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00324B61: ;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324B6E; /* jne: not equal / not zero */

loc_00324B66: ;
    eax = MEM32(0x49E0E8);
    MEM32(ebp + -116) = eax;

loc_00324B6E: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324B7B; /* jne: not equal / not zero */

loc_00324B73: ;
    eax = MEM32(0x49E0EC);
    MEM32(ebp + -112) = eax;

loc_00324B7B: ;
    _fa = (uint32_t)(MEM32(ebp + -108)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -108), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324B88; /* jne: not equal / not zero */

loc_00324B80: ;
    eax = MEM32(0x49E0F4);
    MEM32(ebp + -108) = eax;

loc_00324B88: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324B95; /* jne: not equal / not zero */

loc_00324B8D: ;
    eax = MEM32(0x49E0F0);
    MEM32(ebp + -104) = eax;

loc_00324B95: ;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324BA1; /* jne: not equal / not zero */

loc_00324B9A: ;
    MEM32(ebp + -100) = 0x7FFDEFFF;

loc_00324BA1: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324BAF; /* je: equal / zero */

loc_00324BA6: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), 0xFF000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00324BB6; /* jbe: below or equal (unsigned <=) */

loc_00324BAF: ;
    MEM32(ebp + -96) = 0xFF000;

loc_00324BB6: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324BE3; /* jne: not equal / not zero */

loc_00324BBD: ;
    MEM32(ebp + 0x14) = 0x1000;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324BD4; /* jne: not equal / not zero */

loc_00324BCB: ;
    MEM32(ebp + 0x10) = 0x40000;
    goto loc_00324C10;

loc_00324BD4: ;
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFF)) >> 32) & 1);
    eax = eax + 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFF000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00324BDE: ;
    MEM32(ebp + 0x10) = eax;
    goto loc_00324C10;

loc_00324BE3: ;
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFF)) >> 32) & 1);
    eax = eax + 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xFFFFF000u;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x14) = eax;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324C05; /* jne: not equal / not zero */

loc_00324BF9: ;
    _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFF)) >> 32) & 1);
    eax = eax + 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00324BDE;

loc_00324C05: ;
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFF)) >> 32) & 1);
    edx = edx + 0xFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0x10) = edx;

loc_00324C10: ;
    MEM32(ebp + -36) = 0x590;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00324C35; /* jne: not equal / not zero */

loc_00324C1D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324C28; /* je: equal / zero */

loc_00324C22: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) | ((0x80) & 0xFFu);
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00324C3E;

loc_00324C28: ;
    MEM32(ebp + -36) = 0x5AC;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00324C3E;

loc_00324C35: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324C3E: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324D13; /* je: equal / zero */

loc_00324C49: ;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324C89; /* je: equal / zero */

loc_00324C4E: ;
    ebx = MEM32(ebp + -92);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324E9C; /* je: equal / zero */

loc_00324C59: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324E9C; /* je: equal / zero */

loc_00324C64: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00324E9C; /* ja: above (unsigned >) */

loc_00324C6C: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324C76: ;
    MEM32(ebp + -32) = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;
    ecx = 0x400;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_00324D04;

loc_00324C89: ;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = MEM32(0x445D70);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = esi; PUSH32(esp, 0x00324C98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324C96u); } /* indirect call */
    }

loc_00324C98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00324E9C; /* jl: less (signed <) */

loc_00324CA0: ;
    edi = MEM32(ebp + -72);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324CAC: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x10000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00324E9C; /* je: equal / zero */

loc_00324CB9: ;
    MEM32(ebp + -32) = edi;
    eax = 0x1000;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324CFF; /* jne: not equal / not zero */

loc_00324CC6: ;
    ecx = 0x400;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -60);
    MEM32(ebp + 0x14) = eax;
    ecx = MEM32(ebp + -32);
    ebx = eax + ecx;
    eax = ebp + -72;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = esi; PUSH32(esp, 0x00324CE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324CE0u); } /* indirect call */
    }

loc_00324CE2: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + 0x10) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00324D04; /* jl: less (signed <) */

loc_00324CEC: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x2000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324D04; /* jne: not equal / not zero */

loc_00324CF5: ;
    eax = MEM32(ebp + -60);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;
    goto loc_00324D04;

loc_00324CFF: ;
    MEM32(ebp + 0x14) = eax;
    ebx = edi;

loc_00324D04: ;
    MEM32(ebp + -40) = 1;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -28) = eax;
    goto loc_00324D4F;

loc_00324D13: ;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324D1C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x2000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D64); PUSH32(esp, 0x00324D32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324D2Cu); } /* indirect call */
    }

loc_00324D32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00324E9C; /* jl: less (signed <) */

loc_00324D3A: ;
    MEM32(ebp + -40) = esi;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324D49; /* jne: not equal / not zero */

loc_00324D42: ;
    MEM32(ebp + 0x14) = 0x1000;

loc_00324D49: ;
    ebx = MEM32(ebp + -28);
    MEM32(ebp + -32) = ebx;

loc_00324D4F: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324D94; /* jne: not equal / not zero */

loc_00324D54: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D64); PUSH32(esp, 0x00324D6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324D65u); } /* indirect call */
    }

loc_00324D6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00324D91; /* jge: greater or equal (signed >=) */

loc_00324D6F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00324E9C; /* jne: not equal / not zero */

loc_00324D79: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D60); PUSH32(esp, 0x00324D8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324D86u); } /* indirect call */
    }

loc_00324D8C: ;
    goto loc_00324E9C;

loc_00324D91: ;
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(MEM32(ebp + 0x14))) >> 32) & 1);
    ebx = ebx + MEM32(ebp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324D94: ;
    edx = MEM32(ebp + -28);
    eax = edx + 0x597;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + -36);
    edi = 0x80;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edi)) >> 32) & 1);
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x4C)) >> 32) & 1);
    edx = edx + 0x4C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    POP32(esp, ecx);

loc_00324DB0: ;
    MEM32(edx) = eax;
    edx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00324DB0; /* jne: not equal / not zero */

loc_00324DBA: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    MEM32(edx) = MEM32(edx) & 0;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(0xD63C91)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0xD63C91), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00324DE9; /* je: equal / zero */

loc_00324DC8: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(7)) >> 32) & 1);
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x17C) = eax;
    eax = 0x60C;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -28);
    ecx = MEM32(ecx + 0x17C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324DE9: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xF)) >> 32) & 1);
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ebp + -28);
    MEM16(edx) = LO16(eax);
    eax = MEM32(ebp + -28);
    MEM8(eax + 5) = 1;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x10) = 0xEEFFEEFFu;
    edx = MEM32(ebp + -28);
    eax = MEM32(ebp + 8);
    MEM32(edx + 0x14) = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x6001007D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = MEM32(ebp + -28);
    MEM32(edx + 0x18) = eax;
    eax = MEM32(ebp + -28);
    _cf = 0; /* logical op clears CF */
    MEM16(eax + 0x170) = MEM16(eax + 0x170) | ((0xFFFF) & 0xFFFFu);
    _fa = (uint32_t)(MEM16(eax + 0x170)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    edx = ecx;
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(eax + 0x3A) = LO16(edx);
    eax = MEM32(ebp + -28);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x3C) = MEM32(eax + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x180)) >> 32) & 1);
    eax = eax + 0x180;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324E45: ;
    MEM32(eax + 4) = eax;
    MEM32(eax) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00324E45; /* jne: not equal / not zero */

loc_00324E50: ;
    eax = MEM32(ebp + -28);
    edx = eax + 0x58;
    MEM32(eax + 0x5C) = edx;
    eax = MEM32(ebp + -28);
    edx = MEM32(eax + 0x5C);
    MEM32(eax + 0x58) = edx;
    edi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324E73; /* jne: not equal / not zero */

loc_00324E6A: ;
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D6C); PUSH32(esp, 0x00324E73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324E6Du); } /* indirect call */
    }

loc_00324E73: ;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x580) = edi;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 0);
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324E98u); RECOMP_ABI_CALL(0x003245A2u, sub_003245A2); /* call 0x003245A2 */

loc_00324E98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00324EA0; /* jne: not equal / not zero */

loc_00324E9C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00324F0D;

loc_00324EA0: ;
    eax = MEM32(ebp + -28);
    _cf = 0; /* logical op clears CF */
    MEM16(eax + 0x38) = MEM16(eax + 0x38) & ((0) & 0xFFFFu);
    _fa = (uint32_t)(MEM16(eax + 0x38)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -116);
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -112);
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(ebp + -108);
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x28) = eax;
    eax = MEM32(ebp + -104);
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -100);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(ebp + -96);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xF)) >> 32) & 1);
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ebp + -28);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -84);
    MEM32(eax + 0x584) = ecx;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x50) = 0x1F;
    eax = MEM32(ebp + -28);
    MEM32(eax + 0x54) = 0xFFFFFFF0u;
    eax = MEM32(ebp + -28);

loc_00324F0D: ;
    g_eflags = (g_eflags & ~0x40u) | (((eax == 0)) ? 0x40u : 0u); /* flags across call boundary */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324F12u); RECOMP_ABI_CALL(0x0037489Fu, sub_0037489F); /* call 0x0037489F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */
    _cf = g_eflags & 1u; /* callee carry */

loc_00324F12: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 28; return; /* ret 24 */

}

/**
 * sub_00324F15
 * Original: 0x00324F15 - 0x00325674 (1887 bytes, 563 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324F15(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00324F15: ;
    PUSH32(esp, 0x180);
    PUSH32(esp, 0x446590);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324F24u); RECOMP_ABI_CALL(0x00374864u, sub_00374864); /* call 0x00374864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00324F24: ;
    esi = MEM32(ebp + 8);
    ebx = esi;
    MEM32(ebp + -136) = ebx;
    MEM8(ebp + -26) = 0;
    ecx = MEM32(ebp + 0xC);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0xC) = ecx;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00324F44; /* jne: not equal / not zero */

loc_00324F43: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00324F44: ;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1F)) >> 32) & 1);
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -32) = eax;
    edi = eax;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(edi) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    edi = (uint32_t)(edi) >> ((4) & 31u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -40) = edi;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00324F6E; /* jne: not equal / not zero */

loc_00324F5E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x580));
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CA8); PUSH32(esp, 0x00324F6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324F64u); } /* indirect call */
    }

loc_00324F6A: ;
    MEM8(ebp + -26) = 1;

loc_00324F6E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0032510B; /* jae: above or equal (unsigned >=) */

loc_00324F7A: ;
    eax = esi + edi * 8 + 0x180;
    MEM32(ebp + -44) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00325010; /* je: equal / zero */

loc_00324F8C: ;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(8));
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -52) = eax;
    SET_LO8(edx, MEM8(eax + 5));
    MEM8(ebp + -25) = LO8(edx);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -288) = ecx;
    edi = MEM32(eax + 0xC);
    MEM32(ebp + -316) = edi;
    MEM32(edi) = ecx;
    MEM32(ecx + 4) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00324FEC; /* jne: not equal / not zero */

loc_00324FB6: ;
    ecx = ZX16(MEM16(eax));
    edi = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(edi) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    edi = (uint32_t)(edi) >> ((3) & 31u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -144) = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(edi) >> ((32 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    edi = (uint32_t)(edi) << ((LO8(ecx)) & 31u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -240) = edi;
    ecx = MEM32(ebp + -144);
    ecx = ecx + esi + 0x160;
    MEM32(ebp + -76) = ecx;
    ecx = ZX8(MEM8(ecx));
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = MEM32(ebp + -76);
    MEM8(edi) = LO8(ecx);

loc_00324FEC: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(esi + 0x30)) < (uint32_t)(ecx));
    MEM32(esi + 0x30) = MEM32(esi + 0x30) - ecx;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -56) = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) | ((1) & 0xFFu));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 5) = LO8(edx);
    ecx = MEM32(ebp + -32);
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(ebp + 0x10)));
    ecx = ecx - MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = 0;
    goto loc_00325500;

loc_00325010: ;
    ecx = MEM32(ebp + -40);
    edx = ecx;
    if (((5) & 31u)) _cf = (int)(((uint32_t)(edx) >> (((((5) & 31u)) - 1) & 31u)) & 1u);
    edx = (uint32_t)(edx) >> ((5) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -160) = edx;
    edi = esi + edx * 4 + 0x160;
    MEM32(ebp + -48) = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((LO8(ecx)) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -64) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -48) = edi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0));
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00325051; /* je: equal / zero */

loc_00325043: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00325068; /* je: equal / zero */

loc_00325046: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0032507F; /* je: equal / zero */

loc_00325049: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00325096; /* je: equal / zero */

loc_0032504C: ;
    goto loc_00325114;

loc_00325051: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032505D; /* je: equal / zero */

loc_00325055: ;
    edi = esi + 0x180;
    goto loc_003250A0;

loc_0032505D: ;
    eax = MEM32(edi);
    MEM32(ebp + -64) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -48) = edi;

loc_00325068: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325074; /* je: equal / zero */

loc_0032506C: ;
    edi = esi + 0x280;
    goto loc_003250A0;

loc_00325074: ;
    eax = MEM32(edi);
    MEM32(ebp + -64) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -48) = edi;

loc_0032507F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032508B; /* je: equal / zero */

loc_00325083: ;
    edi = esi + 0x380;
    goto loc_003250A0;

loc_0032508B: ;
    eax = MEM32(edi);
    MEM32(ebp + -64) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -48) = edi;

loc_00325096: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325114; /* je: equal / zero */

loc_0032509A: ;
    edi = esi + 0x480;

loc_003250A0: ;
    MEM32(ebp + -44) = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003250AAu); RECOMP_ABI_CALL(0x003260D0u, sub_003260D0); /* call 0x003260D0 */

loc_003250AA: ;
    eax = SX8(LO8(eax));
    eax = edi + eax * 8;
    MEM32(ebp + -44) = eax;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(8));
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -52) = eax;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -304) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -168) = edx;
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032518F; /* jne: not equal / not zero */

loc_003250DB: ;
    ecx = ZX16(MEM16(eax));
    edx = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(edx) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    edx = (uint32_t)(edx) >> ((3) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -248) = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(edi) >> ((32 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    edi = (uint32_t)(edi) << ((LO8(ecx)) & 31u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -176) = edi;
    esi = edx + esi + 0x160;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi));
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi) = LO8(ecx);
    goto loc_0032518F;

loc_0032510B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0032554F; /* ja: above (unsigned >) */

loc_00325114: ;
    edx = esi + 0x180;
    MEM32(ebp + -44) = edx;
    eax = MEM32(edx + 4);
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00325164; /* je: equal / zero */

loc_00325127: ;
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -52) = eax;
    eax = ZX16(MEM16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -40) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00325164; /* jb: below (unsigned <) */

loc_00325135: ;
    ecx = MEM32(edx);

loc_00325137: ;
    MEM32(ebp + -68) = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00325164; /* je: equal / zero */

loc_0032513E: ;
    eax = ecx + -8;
    MEM32(ebp + -52) = eax;
    esi = ZX16(MEM16(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00325160; /* jb: below (unsigned <) */

loc_0032514C: ;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -148) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -184) = edx;
    goto loc_0032518A;

loc_00325160: ;
    ecx = MEM32(ecx);
    goto loc_00325137;

loc_00325164: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032516Du); RECOMP_ABI_CALL(0x003246C0u, sub_003246C0); /* call 0x003246C0 */

loc_0032516D: ;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325543; /* je: equal / zero */

loc_00325178: ;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -256) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -192) = edx;

loc_0032518A: ;
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;

loc_0032518F: ;
    SET_LO8(ecx, MEM8(eax + 5));
    MEM8(ebp + -25) = LO8(ecx);
    ecx = ZX16(MEM16(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx + 0x30)) < (uint32_t)(ecx));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -56) = eax;
    MEM8(eax + 5) = 1;
    edx = ZX16(MEM16(eax));
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -104) = edx;
    MEM16(eax) = LO16(ecx);
    ecx = MEM32(ebp + -32);
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(ebp + 0x10)));
    ecx = ecx - MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003254EE; /* je: equal / zero */

loc_003251C5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003251E3; /* jne: not equal / not zero */

loc_003251CA: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax) = LO16(ecx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 6));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 6) = LO8(ecx);
    goto loc_003254EE;

loc_003251E3: ;
    esi = MEM32(ebp + -40);
    if (((4) & 31u)) _cf = (int)(((uint32_t)(esi) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    esi = (uint32_t)(esi) << ((4) & 31u);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -320) = esi;
    SET_LO8(ecx, MEM8(ebp + -25));
    MEM8(esi + 5) = LO8(ecx);
    SET_LO16(edi, MEM16(ebp + -40));
    MEM16(esi + 2) = LO16(edi);
    SET_LO8(eax, MEM8(eax + 4));
    MEM8(esi + 4) = LO8(eax);
    MEM16(esi) = LO16(edx);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003252CC; /* je: equal / zero */

loc_00325211: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 5));
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 5) = LO8(eax);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00325281; /* jae: above or equal (unsigned >=) */

loc_00325223: ;
    eax = ZX16(LO16(edx));
    edi = ebx + eax * 8 + 0x180;
    MEM32(ebp + -200) = edi;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032526D; /* jne: not equal / not zero */

loc_00325237: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -132) = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((LO8(ecx)) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -264) = eax;
    ecx = MEM32(ebp + -132);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -100) = ecx;
    ecx = ZX8(MEM8(ecx));
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -100);
    MEM8(eax) = LO8(ecx);

loc_0032526D: ;
    MEM32(ebp + -208) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -296) = ecx;
    goto loc_0032547E;

loc_00325281: ;
    ecx = ebx + 0x180;
    MEM32(ebp + -216) = ecx;
    eax = MEM32(ecx);

loc_0032528F: ;
    MEM32(ebp + -124) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003252A8; /* je: equal / zero */

loc_00325296: ;
    edi = eax + -8;
    MEM32(ebp + -272) = edi;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(edi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003252A8; /* jbe: below or equal (unsigned <=) */

loc_003252A4: ;
    eax = MEM32(eax);
    goto loc_0032528F;

loc_003252A8: ;
    MEM32(ebp + -224) = eax;
    edi = MEM32(eax + 4);
    MEM32(ebp + -312) = edi;

loc_003252B7: ;
    ecx = esi + 8;
    MEM32(ecx) = eax;
    MEM32(esi + 0xC) = edi;
    MEM32(edi) = ecx;
    MEM32(eax + 4) = ecx;

loc_003252C4: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x30)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + edx;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003254D3;

loc_003252CC: ;
    eax = edx;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -232) = eax;
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325394; /* je: equal / zero */

loc_003252E5: ;
    MEM16(eax + 2) = LO16(edx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 5));
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 5) = LO8(eax);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00325359; /* jae: above or equal (unsigned >=) */

loc_003252FB: ;
    eax = ZX16(LO16(edx));
    edi = ebx + eax * 8 + 0x180;
    MEM32(ebp + -280) = edi;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00325345; /* jne: not equal / not zero */

loc_0032530F: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -108) = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((LO8(ecx)) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -152) = eax;
    ecx = MEM32(ebp + -108);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -140) = ecx;
    ecx = ZX8(MEM8(ecx));
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -140);
    MEM8(eax) = LO8(ecx);

loc_00325345: ;
    MEM32(ebp + -156) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -164) = ecx;
    goto loc_0032547E;

loc_00325359: ;
    ecx = ebx + 0x180;
    MEM32(ebp + -172) = ecx;
    eax = MEM32(ecx);

loc_00325367: ;
    MEM32(ebp + -116) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00325380; /* je: equal / zero */

loc_0032536E: ;
    edi = eax + -8;
    MEM32(ebp + -180) = edi;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(edi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00325380; /* jbe: below or equal (unsigned <=) */

loc_0032537C: ;
    eax = MEM32(eax);
    goto loc_00325367;

loc_00325380: ;
    MEM32(ebp + -188) = eax;
    edi = MEM32(eax + 4);
    MEM32(ebp + -196) = edi;
    goto loc_003252B7;

loc_00325394: ;
    MEM8(esi + 5) = LO8(ecx);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -204) = ecx;
    edi = MEM32(eax + 0xC);
    MEM32(ebp + -212) = edi;
    MEM32(edi) = ecx;
    MEM32(ecx + 4) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003253EC; /* jne: not equal / not zero */

loc_003253B2: ;
    SET_LO16(ecx, MEM16(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003253EC; /* jae: above or equal (unsigned >=) */

loc_003253BC: ;
    ecx = ZX16(LO16(ecx));
    edi = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(edi) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    edi = (uint32_t)(edi) >> ((3) & 31u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -80) = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(edi) >> ((32 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    edi = (uint32_t)(edi) << ((LO8(ecx)) & 31u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -220) = edi;
    ecx = MEM32(ebp + -80);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -96) = ecx;
    ecx = ZX8(MEM8(ecx));
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = MEM32(ebp + -96);
    MEM8(edi) = LO8(ecx);

loc_003253EC: ;
    ecx = ZX16(MEM16(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx + 0x30)) < (uint32_t)(ecx));
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) - ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX16(MEM16(eax));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -104) = edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFF00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003254CB; /* ja: above (unsigned >) */

loc_00325406: ;
    MEM16(esi) = LO16(edx);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00325419; /* jne: not equal / not zero */

loc_0032540F: ;
    eax = edx;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + esi + 2) = LO16(edx);

loc_00325419: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 5));
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 5) = LO8(eax);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00325490; /* jae: above or equal (unsigned >=) */

loc_0032542B: ;
    eax = ZX16(LO16(edx));
    edi = ebx + eax * 8 + 0x180;
    MEM32(ebp + -228) = edi;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032546F; /* jne: not equal / not zero */

loc_0032543F: ;
    ecx = ZX16(MEM16(esi));
    eax = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -112) = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((LO8(ecx)) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -236) = eax;
    ecx = MEM32(ebp + -112);
    ecx = ecx + ebx + 0x160;
    MEM32(ebp + -120) = ecx;
    ecx = ZX8(MEM8(ecx));
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -120);
    MEM8(eax) = LO8(ecx);

loc_0032546F: ;
    MEM32(ebp + -244) = edi;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -252) = ecx;

loc_0032547E: ;
    eax = esi + 8;
    MEM32(eax) = edi;
    MEM32(esi + 0xC) = ecx;
    MEM32(ecx) = eax;
    MEM32(edi + 4) = eax;
    goto loc_003252C4;

loc_00325490: ;
    ecx = ebx + 0x180;
    MEM32(ebp + -260) = ecx;
    eax = MEM32(ecx);

loc_0032549E: ;
    MEM32(ebp + -128) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003254B7; /* je: equal / zero */

loc_003254A5: ;
    edi = eax + -8;
    MEM32(ebp + -268) = edi;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(edi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003254B7; /* jbe: below or equal (unsigned <=) */

loc_003254B3: ;
    eax = MEM32(eax);
    goto loc_0032549E;

loc_003254B7: ;
    MEM32(ebp + -276) = eax;
    edi = MEM32(eax + 4);
    MEM32(ebp + -284) = edi;
    goto loc_003252B7;

loc_003254CB: ;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003254D3u); RECOMP_ABI_CALL(0x00323FD0u, sub_00323FD0); /* call 0x00323FD0 */

loc_003254D3: ;
    MEM8(ebp + -25) = 0;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003254EE; /* je: equal / zero */

loc_003254DD: ;
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(ebx + eax * 4 + 0x60);
    MEM32(ebp + -292) = eax;
    MEM32(eax + 0x40) = esi;

loc_003254EE: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -25), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325500; /* je: equal / zero */

loc_003254F4: ;
    eax = MEM32(ebp + -56);
    SET_LO8(ecx, MEM8(eax + 5));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | ((0x10) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 5) = LO8(ecx);

loc_00325500: ;
    esi = MEM32(ebp + -56);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -60) = esi;
    _fa = (uint32_t)(MEM8(ebp + -26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -26), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032551F; /* je: equal / zero */

loc_0032550F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + 0x580));
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CA4); PUSH32(esp, 0x0032551Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325515u); } /* indirect call */
    }

loc_0032551B: ;
    MEM8(ebp + -26) = 0;

loc_0032551F: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325637; /* je: equal / zero */

loc_00325529: ;
    ecx = MEM32(ebp + 0x10);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    edx = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    goto loc_00325637;

loc_00325543: ;
    MEM32(ebp + -72) = 0xC0000017u;
    goto loc_003255F4;

loc_0032554F: ;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003255ED; /* je: equal / zero */

loc_00325559: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -32)) + (uint64_t)(0x20)) >> 32) & 1);
    MEM32(ebp + -32) = MEM32(ebp + -32) + 0x20;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    eax = MEM32(ebp + 0xC);
    if (((0x14) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((0x14) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((0x14) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D64); PUSH32(esp, 0x00325586u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325580u); } /* indirect call */
    }

loc_00325586: ;
    MEM32(ebp + -72) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003255F4; /* jl: less (signed <) */

loc_0032558D: ;
    PUSH32(esp, 0xC);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = MEM32(ebp + -36);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + -32);
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + 0x10)));
    eax = eax - MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -36);
    MEM16(ecx + 0x20) = LO16(eax);
    eax = MEM32(ebp + -36);
    MEM8(eax + 0x25) = 0xB;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -36);
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(ebp + -36);
    ecx = MEM32(ebp + -32);
    MEM32(eax + 0x1C) = ecx;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x58)) >> 32) & 1);
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -300) = esi;
    eax = MEM32(esi + 4);
    MEM32(ebp + -308) = eax;
    ecx = MEM32(ebp + -36);
    MEM32(ecx) = esi;
    ecx = MEM32(ebp + -36);
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ebp + -36);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -36);
    MEM32(esi + 4) = eax;
    esi = MEM32(ebp + -36);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x30)) >> 32) & 1);
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00325634;

loc_003255ED: ;
    MEM32(ebp + -72) = 0xC0000023u;

loc_003255F4: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325632; /* je: equal / zero */

loc_003255FA: ;
    MEM32(ebp + -400) = 0xC0000017u;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -392) = MEM32(ebp + -392) & 0;
    _fa = (uint32_t)(MEM32(ebp + -392)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -384) = 1;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -396) = MEM32(ebp + -396) & 0;
    _fa = (uint32_t)(MEM32(ebp + -396)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -32);
    MEM32(ebp + -380) = eax;
    eax = ebp + -400;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CB8); PUSH32(esp, 0x00325632u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032562Cu); } /* indirect call */
    }

loc_00325632: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00325634: ;
    MEM32(ebp + -60) = esi;

loc_00325637: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325640u); RECOMP_ABI_CALL(0x0032567Du, sub_0032567D); /* call 0x0032567D */

loc_00325640: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032566A; /* je: equal / zero */

loc_00325644: ;
    MEM32(ebp + -92) = esi;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -88) = eax;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -84) = MEM32(ebp + -84) & 0;
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032566A; /* je: equal / zero */

loc_00325661: ;
    ecx = ebp + -92;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0032566Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325667u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_0032566A: ;
    eax = esi;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325671u); RECOMP_ABI_CALL(0x0037489Fu, sub_0037489F); /* call 0x0037489F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */
    _cf = g_eflags & 1u; /* callee carry */

loc_00325671: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_0032567D
 * Original: 0x0032567D - 0x00325690 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032567D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032567D: ;
    _fa = (uint32_t)(MEM8(ebp + -26)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -26), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032568F; /* je: equal / zero */

loc_00325683: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + 0x580));
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CA4); PUSH32(esp, 0x0032568Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325689u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_0032568F: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00325690
 * Original: 0x00325690 - 0x0032586E (478 bytes, 157 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325690: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x4465A0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032569Cu); RECOMP_ABI_CALL(0x00374864u, sub_00374864); /* call 0x00374864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0032569C: ;
    esi = MEM32(ebp + 8);
    ebx = esi;
    MEM32(ebp + -36) = ebx;
    MEM8(ebp + -25) = 0;
    MEM8(ebp + -26) = 1;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003256BA; /* jne: not equal / not zero */

loc_003256B3: ;
    SET_LO8(eax, 1);
    goto loc_00325866;

loc_003256BA: ;
    MEM32(ebp + -108) = edi;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -104) = MEM32(ebp + -104) & 0;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -100) = MEM32(ebp + -100) & 0;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003256DE; /* je: equal / zero */

loc_003256D5: ;
    ecx = ebp + -108;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003256DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003256DBu); } /* indirect call */
    }

loc_003256DE: ;
    eax = MEM32(ebp + 0xC);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    edi = edi + 0xFFFFFFF0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_003256FF; /* jne: not equal / not zero */

loc_003256EF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x580));
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CA8); PUSH32(esp, 0x003256FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003256F5u); } /* indirect call */
    }

loc_003256FB: ;
    MEM8(ebp + -25) = 1;

loc_003256FF: ;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 5), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0032580C; /* jne: not equal / not zero */

loc_00325709: ;
    eax = ZX16(MEM16(edi));
    MEM32(ebp + -32) = eax;
    PUSH32(esp, 0);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032571Cu); RECOMP_ABI_CALL(0x00323D2Bu, sub_00323D2B); /* call 0x00323D2B */

loc_0032571C: ;
    MEM32(ebp + -48) = eax;
    ecx = MEM32(ebp + -32);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00325790; /* jae: above or equal (unsigned >=) */

loc_0032572A: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 5));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(eax + 5) = LO8(ecx);
    ecx = ZX16(MEM16(ebp + -32));
    edx = esi + ecx * 8 + 0x180;
    MEM32(ebp + -52) = edx;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032576F; /* jne: not equal / not zero */

loc_00325747: ;
    ecx = ZX16(MEM16(eax));
    edi = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(edi) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    edi = (uint32_t)(edi) >> ((3) & 31u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -56) = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(ebx) >> ((32 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    ebx = (uint32_t)(ebx) << ((LO8(ecx)) & 31u);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -60) = ebx;
    edi = edi + esi + 0x160;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi));
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(edi) = LO8(ecx);
    ebx = MEM32(ebp + -36);

loc_0032576F: ;
    MEM32(ebp + -64) = edx;
    edi = MEM32(edx + 4);
    MEM32(ebp + -68) = edi;
    ecx = eax + 8;
    MEM32(ecx) = edx;
    MEM32(eax + 0xC) = edi;
    MEM32(edi) = ecx;
    MEM32(edx + 4) = ecx;
    eax = MEM32(ebp + -32);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x30)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0032585A;

loc_00325790: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003257AC; /* jb: below (unsigned <) */

loc_00325795: ;
    edx = MEM32(esi + 0x30);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x2C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003257AC; /* jb: below (unsigned <) */

loc_0032579F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003257A7u); RECOMP_ABI_CALL(0x00324847u, sub_00324847); /* call 0x00324847 */

loc_003257A7: ;
    goto loc_0032585A;

loc_003257AC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00325802; /* ja: above (unsigned >) */

loc_003257B4: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax + 5));
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(eax + 5) = LO8(ecx);
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x180)) >> 32) & 1);
    esi = esi + 0x180;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -72) = esi;
    ecx = MEM32(esi);

loc_003257CA: ;
    MEM32(ebp + -40) = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003257E4; /* je: equal / zero */

loc_003257D1: ;
    edx = ecx + -8;
    MEM32(ebp + -76) = edx;
    SET_LO16(edi, MEM16(ebp + -32));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(edx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003257E4; /* jbe: below or equal (unsigned <=) */

loc_003257E0: ;
    ecx = MEM32(ecx);
    goto loc_003257CA;

loc_003257E4: ;
    MEM32(ebp + -80) = ecx;
    esi = MEM32(ecx + 4);
    MEM32(ebp + -84) = esi;
    edx = eax + 8;
    MEM32(edx) = ecx;
    MEM32(eax + 0xC) = esi;
    MEM32(esi) = edx;
    MEM32(ecx + 4) = edx;
    eax = MEM32(ebp + -32);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x30)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0032585A;

loc_00325802: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032580Au); RECOMP_ABI_CALL(0x00323FD0u, sub_00323FD0); /* call 0x00323FD0 */

loc_0032580A: ;
    goto loc_0032585A;

loc_0032580C: ;
    eax = edi + -32;
    MEM32(ebp + -44) = eax;
    ecx = MEM32(eax);
    MEM32(ebp + -88) = ecx;
    eax = MEM32(eax + 4);
    MEM32(ebp + -92) = eax;
    MEM32(eax) = ecx;
    MEM32(ecx + 4) = eax;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325838; /* je: equal / zero */

loc_00325828: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x580));
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CA4); PUSH32(esp, 0x00325834u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032582Eu); } /* indirect call */
    }

loc_00325834: ;
    MEM8(ebp + -25) = 0;

loc_00325838: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D60); PUSH32(esp, 0x0032584Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325849u); } /* indirect call */
    }

loc_0032584F: ;
    MEM32(ebp + -96) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0032585A; /* jge: greater or equal (signed >=) */

loc_00325856: ;
    MEM8(ebp + -26) = 0;

loc_0032585A: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325863u); RECOMP_ABI_CALL(0x00325871u, sub_00325871); /* call 0x00325871 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00325863: ;
    SET_LO8(eax, MEM8(ebp + -26));

loc_00325866: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032586Bu); RECOMP_ABI_CALL(0x0037489Fu, sub_0037489F); /* call 0x0037489F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */
    _cf = g_eflags & 1u; /* callee carry */

loc_0032586B: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_00325871
 * Original: 0x00325871 - 0x00325884 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325871(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325871: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325883; /* je: equal / zero */

loc_00325877: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + 0x580));
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CA4); PUSH32(esp, 0x00325883u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032587Du); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00325883: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00325884
 * Original: 0x00325884 - 0x00325F9C (1816 bytes, 545 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325884(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325884: ;
    PUSH32(esp, 0x13C);
    PUSH32(esp, 0x4465B0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325893u); RECOMP_ABI_CALL(0x00374864u, sub_00374864); /* call 0x00374864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00325893: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -44) = eax;
    MEM8(ebp + -29) = 0;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003258B8; /* je: equal / zero */

loc_003258A4: ;
    MEM32(ebp + -116) = esi;
    ecx = MEM32(eax + 0x18);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | ecx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003258BF; /* jbe: below or equal (unsigned <=) */

loc_003258B8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00325F94;

loc_003258BF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003258C4; /* jne: not equal / not zero */

loc_003258C3: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003258C4: ;
    ecx = MEM32(eax + 0x50);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & MEM32(eax + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C000100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0xC), 0x3C000100 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_003258E7; /* jne: not equal / not zero */

loc_003258D8: ;
    _fa = (uint32_t)(MEM32(eax + 0x17C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x17C), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003258E7; /* jne: not equal / not zero */

loc_003258E1: ;
    _fa = (uint32_t)(MEM8(esi + -11)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + -11), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003258ED; /* je: equal / zero */

loc_003258E7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = ecx;

loc_003258ED: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0032590B; /* jne: not equal / not zero */

loc_003258F7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x580));
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CA8); PUSH32(esp, 0x00325903u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003258FDu); } /* indirect call */
    }

loc_00325903: ;
    MEM8(ebp + -29) = 1;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) ^ 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0032590B: ;
    MEM32(ebp + -4) = 1;
    ebx = esi + -16;
    MEM32(ebp + -100) = ebx;
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325F1B; /* je: equal / zero */

loc_00325923: ;
    SET_LO8(ecx, LO8(eax));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((8) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0032595F; /* je: equal / zero */

loc_0032592A: ;
    edx = ebx + -32;
    MEM32(ebp + -240) = edx;
    eax = ZX16(MEM16(ebx));
    esi = MEM32(edx + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -48) = esi;
    edx = eax + esi;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(edx) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    edx = (uint32_t)(edx) >> ((4) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -80) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -28)) + (uint64_t)(0x20)) >> 32) & 1);
    MEM32(ebp + -28) = MEM32(ebp + -28) + 0x20;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -28);
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xFFF)) >> 32) & 1);
    edi = edi + 0xFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFFFF000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = edi;
    goto loc_00325975;

loc_0032595F: ;
    eax = ZX16(MEM16(ebx));
    edx = eax;
    MEM32(ebp + -80) = edx;
    edi = ZX8(MEM8(ebx + 6));
    esi = edx;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(esi) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    esi = (uint32_t)(esi) << ((4) & 31u);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(edi));
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -48) = esi;

loc_00325975: ;
    edi = MEM32(ebp + -28);
    if (((4) & 31u)) _cf = (int)(((uint32_t)(edi) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    edi = (uint32_t)(edi) >> ((4) & 31u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -56) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00325D68; /* ja: above (unsigned >) */

loc_00325986: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00325992; /* jne: not equal / not zero */

loc_0032598B: ;
    MEM32(ebp + -56) = edi;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -28)) + (uint64_t)(0x10)) >> 32) & 1);
    MEM32(ebp + -28) = MEM32(ebp + -28) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00325992: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003259A1; /* je: equal / zero */

loc_00325996: ;
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + 0x14)));
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(ebx) = LO16(eax);
    goto loc_003259CD;

loc_003259A1: ;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003259C4; /* je: equal / zero */

loc_003259A7: ;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ebx + -16;
    MEM32(ebp + -76) = eax;
    ecx = MEM32(ebp + -56);
    if (((4) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((4) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = ecx + ebx + -16;
    MEM32(ebp + -108) = edi;
    esi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_003259C4: ;
    eax = MEM32(ebp + -28);
    _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + 0x14)));
    eax = eax - MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(ebx + 6) = LO8(eax);

loc_003259CD: ;
    esi = MEM32(ebp + -48);
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003259F4; /* jbe: below or equal (unsigned <=) */

loc_003259D7: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003259F4; /* je: equal / zero */

loc_003259DD: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(esi)) >> 32) & 1);
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_003259F4: ;
    ecx = MEM32(ebp + -56);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00325EBA; /* je: equal / zero */

loc_003259FF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 5));
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + -57) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325A54; /* je: equal / zero */

loc_00325A0E: ;
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xFFFFFFE0u)) >> 32) & 1);
    ebx = ebx + 0xFFFFFFE0u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -152) = ebx;
    eax = MEM32(ebp + -28);
    ecx = ebx + eax;
    MEM32(ebp + -40) = ecx;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(edx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    edx = (uint32_t)(edx) << ((4) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -36) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8000);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D60); PUSH32(esp, 0x00325A3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325A35u); } /* indirect call */
    }

loc_00325A3B: ;
    MEM32(ebp + -248) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00325EBA; /* jl: less (signed <) */

loc_00325A49: ;
    eax = MEM32(ebp + -36);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebx + 0x18)) < (uint32_t)(eax));
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) - eax;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00325EBA;

loc_00325A54: ;
    esi = ecx;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(esi) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    esi = (uint32_t)(esi) << ((4) & 31u);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ebx)) >> 32) & 1);
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -244) = esi;
    MEM8(esi + 5) = LO8(eax);
    MEM16(esi + 2) = LO16(ecx);
    SET_LO8(edx, MEM8(ebx + 4));
    MEM8(esi + 4) = LO8(edx);
    edi = ZX16(MEM16(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(ecx));
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -120) = edi;
    MEM16(ebx) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebx + 5));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((0xEF) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebx + 5) = LO8(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325B2D; /* je: equal / zero */

loc_00325A8A: ;
    ecx = ZX8(MEM8(esi + 4));
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + ecx * 4 + 0x60);
    MEM32(ebp + -164) = ecx;
    MEM32(ecx + 0x40) = esi;
    MEM16(esi) = LO16(edi);
    SET_LO8(ecx, MEM8(esi + 5));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & ((0xF8) & 0xFFu));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 5) = LO8(ecx);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00325AF2; /* jae: above or equal (unsigned >=) */

loc_00325AB1: ;
    ecx = ZX16(LO16(edi));
    eax = eax + ecx * 8 + 0x180;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00325B19; /* jne: not equal / not zero */

loc_00325AC2: ;
    ecx = ZX16(MEM16(esi));
    edx = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(edx) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    edx = (uint32_t)(edx) >> ((3) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -212) = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(ebx) >> ((32 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    ebx = (uint32_t)(ebx) << ((LO8(ecx)) & 31u);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -172) = ebx;
    ecx = MEM32(ebp + 8);
    ecx = edx + ecx + 0x160;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx));
    _cf = 0; /* logical op clears CF */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(ecx) = LO8(edx);
    goto loc_00325B19;

loc_00325AF2: ;
    edx = eax + 0x180;
    MEM32(ebp + -64) = edx;
    eax = MEM32(edx);

loc_00325AFD: ;
    MEM32(ebp + -88) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00325B16; /* je: equal / zero */

loc_00325B04: ;
    ecx = eax + -8;
    MEM32(ebp + -236) = ecx;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(ecx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00325B16; /* jbe: below or equal (unsigned <=) */

loc_00325B12: ;
    eax = MEM32(eax);
    goto loc_00325AFD;

loc_00325B16: ;
    MEM32(ebp + -64) = eax;

loc_00325B19: ;
    MEM32(ebp + -180) = eax;
    edx = MEM32(eax + 4);
    MEM32(ebp + -220) = edx;
    goto loc_00325D41;

loc_00325B2D: ;
    eax = edi;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = eax + esi;
    MEM32(ebp + -188) = ebx;
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325BDE; /* je: equal / zero */

loc_00325B46: ;
    MEM16(esi) = LO16(edi);
    MEM16(ebx + 2) = LO16(edi);
    SET_LO8(eax, MEM8(esi + 5));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & ((0xF8) & 0xFFu));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 5) = LO8(eax);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00325BA0; /* jae: above or equal (unsigned >=) */

loc_00325B5C: ;
    eax = ZX16(LO16(edi));
    ecx = MEM32(ebp + 8);
    eax = ecx + eax * 8 + 0x180;
    MEM32(ebp + -72) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00325BCA; /* jne: not equal / not zero */

loc_00325B70: ;
    ecx = ZX16(MEM16(esi));
    edx = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(edx) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    edx = (uint32_t)(edx) >> ((3) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -252) = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(ebx) >> ((32 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    ebx = (uint32_t)(ebx) << ((LO8(ecx)) & 31u);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -196) = ebx;
    ecx = MEM32(ebp + 8);
    ecx = edx + ecx + 0x160;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx));
    _cf = 0; /* logical op clears CF */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(ecx) = LO8(edx);
    goto loc_00325BCA;

loc_00325BA0: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x180)) >> 32) & 1);
    edx = edx + 0x180;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -72) = edx;
    eax = MEM32(edx);

loc_00325BAE: ;
    MEM32(ebp + -112) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00325BC7; /* je: equal / zero */

loc_00325BB5: ;
    ecx = eax + -8;
    MEM32(ebp + -228) = ecx;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(ecx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00325BC7; /* jbe: below or equal (unsigned <=) */

loc_00325BC3: ;
    eax = MEM32(eax);
    goto loc_00325BAE;

loc_00325BC7: ;
    MEM32(ebp + -72) = eax;

loc_00325BCA: ;
    MEM32(ebp + -204) = eax;
    edx = MEM32(eax + 4);
    MEM32(ebp + -156) = edx;
    goto loc_00325D41;

loc_00325BDE: ;
    MEM8(esi + 5) = LO8(eax);
    eax = MEM32(ebx + 8);
    MEM32(ebp + -160) = eax;
    ecx = MEM32(ebx + 0xC);
    MEM32(ebp + -168) = ecx;
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00325C3E; /* jne: not equal / not zero */

loc_00325BFC: ;
    SET_LO16(eax, MEM16(ebx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00325C3E; /* jae: above or equal (unsigned >=) */

loc_00325C05: ;
    ecx = ZX16(LO16(eax));
    eax = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -176) = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(edx) >> ((32 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    edx = (uint32_t)(edx) << ((LO8(ecx)) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -96) = edx;
    edx = MEM32(ebp + 8);
    eax = eax + edx + 0x160;
    MEM32(ebp + -136) = eax;
    eax = ZX8(MEM8(eax));
    _cf = 0; /* logical op clears CF */
    eax = eax ^ MEM32(ebp + -96);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(ebp + -136);
    MEM8(ecx) = LO8(eax);
    goto loc_00325C41;

loc_00325C3E: ;
    edx = MEM32(ebp + 8);

loc_00325C41: ;
    SET_LO8(ecx, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325C7E; /* je: equal / zero */

loc_00325C49: ;
    eax = ZX16(MEM16(ebx));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x18));
    eax = eax - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -104) = eax;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325C65; /* je: equal / zero */

loc_00325C5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00325C65; /* jbe: below or equal (unsigned <=) */

loc_00325C5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -104) = eax;

loc_00325C65: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFEEEFEEEu);
    PUSH32(esp, eax);
    eax = ebx + 0x18;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D68); PUSH32(esp, 0x00325C75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325C6Fu); } /* indirect call */
    }

loc_00325C75: ;
    MEM32(ebp + -184) = eax;
    edx = MEM32(ebp + 8);

loc_00325C7E: ;
    eax = ZX16(MEM16(ebx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(edx + 0x30)) < (uint32_t)(eax));
    MEM32(edx + 0x30) = MEM32(edx + 0x30) - eax;
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ZX16(MEM16(ebx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -120) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF00 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00325D59; /* ja: above (unsigned >) */

loc_00325C98: ;
    MEM16(esi) = LO16(edi);
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00325CAD; /* jne: not equal / not zero */

loc_00325CA1: ;
    eax = edi;
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(eax + esi + 2) = LO16(edi);
    goto loc_00325CBE;

loc_00325CAD: ;
    eax = ZX8(MEM8(esi + 4));
    eax = MEM32(edx + eax * 4 + 0x60);
    MEM32(ebp + -192) = eax;
    MEM32(eax + 0x40) = esi;

loc_00325CBE: ;
    SET_LO8(eax, MEM8(esi + 5));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & ((0xF8) & 0xFFu));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 5) = LO8(eax);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x80 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00325D0B; /* jae: above or equal (unsigned >=) */

loc_00325CCD: ;
    eax = ZX16(LO16(edi));
    eax = edx + eax * 8 + 0x180;
    MEM32(ebp + -68) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00325D32; /* jne: not equal / not zero */

loc_00325CDE: ;
    ecx = ZX16(MEM16(esi));
    ebx = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(ebx) >> (((((3) & 31u)) - 1) & 31u)) & 1u);
    ebx = (uint32_t)(ebx) >> ((3) & 31u);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -84) = ebx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(ebx) >> ((32 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    ebx = (uint32_t)(ebx) << ((LO8(ecx)) & 31u);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -200) = ebx;
    ecx = MEM32(ebp + -84);
    edx = ecx + edx + 0x160;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edx));
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(edx) = LO8(ecx);
    goto loc_00325D32;

loc_00325D0B: ;
    _fb = (uint32_t)(0x180) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x180)) >> 32) & 1);
    edx = edx + 0x180;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -68) = edx;
    eax = MEM32(edx);

loc_00325D16: ;
    MEM32(ebp + -92) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00325D2F; /* je: equal / zero */

loc_00325D1D: ;
    ecx = eax + -8;
    MEM32(ebp + -208) = ecx;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), MEM16(ecx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00325D2F; /* jbe: below or equal (unsigned <=) */

loc_00325D2B: ;
    eax = MEM32(eax);
    goto loc_00325D16;

loc_00325D2F: ;
    MEM32(ebp + -68) = eax;

loc_00325D32: ;
    MEM32(ebp + -216) = eax;
    edx = MEM32(eax + 4);
    MEM32(ebp + -224) = edx;

loc_00325D41: ;
    ecx = esi + 8;
    MEM32(ecx) = eax;
    MEM32(esi + 0xC) = edx;
    MEM32(edx) = ecx;
    MEM32(eax + 4) = ecx;
    eax = MEM32(ebp + -44);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax + 0x30)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) + edi;
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00325EBA;

loc_00325D59: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325D63u); RECOMP_ABI_CALL(0x00323FD0u, sub_00323FD0); /* call 0x00323FD0 */

loc_00325D63: ;
    goto loc_00325EBA;

loc_00325D68: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00325D87; /* jne: not equal / not zero */

loc_00325D6C: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325D7Cu); RECOMP_ABI_CALL(0x00324175u, sub_00324175); /* call 0x00324175 */

loc_00325D7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00325EBA; /* jne: not equal / not zero */

loc_00325D84: ;
    esi = MEM32(ebp + -48);

loc_00325D87: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325D96; /* je: equal / zero */

loc_00325D8D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00325EBA;

loc_00325D96: ;
    _cf = 0; /* logical op clears CF */
    MEM16(ebp + 0xE) = MEM16(ebp + 0xE) & ((0xC003) & 0xFFFFu);
    _fa = (uint32_t)(MEM16(ebp + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325E04; /* je: equal / zero */

loc_00325DA5: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + 0xD) = MEM8(ebp + 0xD) & ((0xF1) & 0xFFu);
    _fa = (uint32_t)(MEM8(ebp + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xE0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if (((4) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((4) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325DBDu); RECOMP_ABI_CALL(0x003240CAu, sub_003240CA); /* call 0x003240CA */

loc_00325DBD: ;
    MEM32(ebp + -76) = eax;
    MEM32(ebp + -4) = 2;
    SET_LO16(eax, MEM16(eax + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325DDD; /* je: equal / zero */

loc_00325DD0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00325DDD; /* js: sign (negative) */

loc_00325DD4: ;
    eax = ZX16(LO16(eax));
    if (((0x12) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((0x12) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((0x12) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00325DDD: ;
    MEM32(ebp + -4) = 1;
    goto loc_00325E14;

loc_00325E04: ;
    SET_LO8(eax, MEM8(ebx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325E14; /* je: equal / zero */

loc_00325E0B: ;
    eax = ZX8(LO8(eax));
    if (((0x12) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((0x12) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((0x12) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00325E14: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(ebp + 0xC);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325E26u); RECOMP_ABI_CALL(0x00324F15u, sub_00324F15); /* call 0x00324F15 */

loc_00325E26: ;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325EB7; /* je: equal / zero */

loc_00325E31: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -232) = eax;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325E68; /* je: equal / zero */

loc_00325E40: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325E46u); RECOMP_ABI_CALL(0x003240CAu, sub_003240CA); /* call 0x003240CA */

loc_00325E46: ;
    edi = eax;
    MEM32(ebp + -108) = edi;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325E62; /* je: equal / zero */

loc_00325E51: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325E57u); RECOMP_ABI_CALL(0x003240CAu, sub_003240CA); /* call 0x003240CA */

loc_00325E57: ;
    MEM32(ebp + -76) = eax;
    eax = MEM32(eax + 4);
    MEM32(edi + 4) = eax;
    goto loc_00325E68;

loc_00325E62: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_00325E68: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00325E71; /* jb: below (unsigned <) */

loc_00325E6F: ;
    eax = esi;

loc_00325E71: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -52));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325E7Du); RECOMP_ABI_CALL(0x003733D0u, sub_003733D0); /* call 0x003733D0 */

loc_00325E7D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00325EA6; /* jbe: below or equal (unsigned <=) */

loc_00325E85: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325EA6; /* je: equal / zero */

loc_00325E8B: ;
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ebp + -52);
    edi = edx + esi;
    edx = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_00325EA6: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325EB4u); RECOMP_ABI_CALL(0x00325690u, sub_00325690); /* call 0x00325690 */

loc_00325EB4: ;
    eax = MEM32(ebp + -52);

loc_00325EB7: ;
    MEM32(ebp + 0x10) = eax;

loc_00325EBA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00325F1B; /* jne: not equal / not zero */

loc_00325EC0: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325F1B; /* je: equal / zero */

loc_00325EC6: ;
    MEM32(ebp + -332) = 0xC0000017u;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -324) = MEM32(ebp + -324) & 0;
    _fa = (uint32_t)(MEM32(ebp + -324)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -316) = 1;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -328) = MEM32(ebp + -328) & 0;
    _fa = (uint32_t)(MEM32(ebp + -328)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -28);
    MEM32(ebp + -312) = eax;
    eax = ebp + -332;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CB8); PUSH32(esp, 0x00325EFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325EF8u); } /* indirect call */
    }

loc_00325EFE: ;
    goto loc_00325F1B;

loc_00325F1B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325F28u); RECOMP_ABI_CALL(0x00325F9Cu, sub_00325F9C); /* call 0x00325F9C */

loc_00325F28: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00325F92; /* jne: not equal / not zero */

loc_00325F30: ;
    MEM32(ebp + -148) = ecx;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    _fa = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    _fa = (uint32_t)(MEM32(ebp + -140)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325F63; /* je: equal / zero */

loc_00325F54: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00325F60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325F5Du); } /* indirect call */
    }

loc_00325F60: ;
    ecx = MEM32(ebp + 0x10);

loc_00325F63: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    _fa = (uint32_t)(MEM32(ebp + -124)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325F92; /* je: equal / zero */

loc_00325F83: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00325F8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325F8Cu); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00325F8F: ;
    ecx = MEM32(ebp + 0x10);

loc_00325F92: ;
    eax = ecx;

loc_00325F94: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325F99u); RECOMP_ABI_CALL(0x0037489Fu, sub_0037489F); /* call 0x0037489F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */
    _cf = g_eflags & 1u; /* callee carry */

loc_00325F99: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}

/**
 * sub_00325DE6
 * Original: 0x00325DE6 - 0x00325F9C (438 bytes, 3 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325DE6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00325DE6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00325DEA
 * Original: 0x00325DEA - 0x00325F9C (434 bytes, 116 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325DEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325DEA: ;
    esp = MEM32(ebp + -24);
    ebx = MEM32(ebp + -100);
    SET_LO8(eax, MEM8(ebx + 5));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & ((0xFD) & 0xFFu));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebx + 5) = LO8(eax);
    MEM32(ebp + -4) = 1;
    esi = MEM32(ebp + -48);
    goto loc_00325E14;

loc_00325E14: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(ebp + 0xC);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFF7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325E26u); RECOMP_ABI_CALL(0x00324F15u, sub_00324F15); /* call 0x00324F15 */

loc_00325E26: ;
    MEM32(ebp + -52) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325EB7; /* je: equal / zero */

loc_00325E31: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF0u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -232) = eax;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 5), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325E68; /* je: equal / zero */

loc_00325E40: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325E46u); RECOMP_ABI_CALL(0x003240CAu, sub_003240CA); /* call 0x003240CA */

loc_00325E46: ;
    edi = eax;
    MEM32(ebp + -108) = edi;
    _fa = (uint32_t)(MEM8(ebx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 5), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325E62; /* je: equal / zero */

loc_00325E51: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325E57u); RECOMP_ABI_CALL(0x003240CAu, sub_003240CA); /* call 0x003240CA */

loc_00325E57: ;
    MEM32(ebp + -76) = eax;
    eax = MEM32(eax + 4);
    MEM32(edi + 4) = eax;
    goto loc_00325E68;

loc_00325E62: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_00325E68: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00325E71; /* jb: below (unsigned <) */

loc_00325E6F: ;
    eax = esi;

loc_00325E71: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + -52));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325E7Du); RECOMP_ABI_CALL(0x003733D0u, sub_003733D0); /* call 0x003733D0 */

loc_00325E7D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00325EA6; /* jbe: below or equal (unsigned <=) */

loc_00325E85: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325EA6; /* je: equal / zero */

loc_00325E8B: ;
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ebp + -52);
    edi = edx + esi;
    edx = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_00325EA6: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325EB4u); RECOMP_ABI_CALL(0x00325690u, sub_00325690); /* call 0x00325690 */

loc_00325EB4: ;
    eax = MEM32(ebp + -52);

loc_00325EB7: ;
    MEM32(ebp + 0x10) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00325F1B; /* jne: not equal / not zero */

loc_00325EC0: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xC), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00325F1B; /* je: equal / zero */

loc_00325EC6: ;
    MEM32(ebp + -332) = 0xC0000017u;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -324) = MEM32(ebp + -324) & 0;
    _fa = (uint32_t)(MEM32(ebp + -324)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -316) = 1;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -328) = MEM32(ebp + -328) & 0;
    _fa = (uint32_t)(MEM32(ebp + -328)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + -28);
    MEM32(ebp + -312) = eax;
    eax = ebp + -332;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CB8); PUSH32(esp, 0x00325EFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325EF8u); } /* indirect call */
    }

loc_00325EFE: ;
    goto loc_00325F1B;

loc_00325F1B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325F28u); RECOMP_ABI_CALL(0x00325F9Cu, sub_00325F9C); /* call 0x00325F9C */

loc_00325F28: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00325F92; /* jne: not equal / not zero */

loc_00325F30: ;
    MEM32(ebp + -148) = ecx;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    _fa = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    _fa = (uint32_t)(MEM32(ebp + -140)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325F63; /* je: equal / zero */

loc_00325F54: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00325F60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325F5Du); } /* indirect call */
    }

loc_00325F60: ;
    ecx = MEM32(ebp + 0x10);

loc_00325F63: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    _fa = (uint32_t)(MEM32(ebp + -124)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325F92; /* je: equal / zero */

loc_00325F83: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00325F8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325F8Cu); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00325F8F: ;
    ecx = MEM32(ebp + 0x10);

loc_00325F92: ;
    eax = ecx;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325F99u); RECOMP_ABI_CALL(0x0037489Fu, sub_0037489F); /* call 0x0037489F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */
    _cf = g_eflags & 1u; /* callee carry */

loc_00325F99: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}

/**
 * sub_00325F00
 * Original: 0x00325F00 - 0x00325F9C (156 bytes, 8 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325F00: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000017u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000017u (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00325F14
 * Original: 0x00325F14 - 0x00325F9C (136 bytes, 36 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325F14(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325F14: ;
    esp = MEM32(ebp + -24);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325F28u); RECOMP_ABI_CALL(0x00325F9Cu, sub_00325F9C); /* call 0x00325F9C */

loc_00325F28: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -116), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00325F92; /* jne: not equal / not zero */

loc_00325F30: ;
    MEM32(ebp + -148) = ecx;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -144) = MEM32(ebp + -144) & 0;
    _fa = (uint32_t)(MEM32(ebp + -144)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -140) = MEM32(ebp + -140) & 0;
    _fa = (uint32_t)(MEM32(ebp + -140)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325F63; /* je: equal / zero */

loc_00325F54: ;
    ecx = ebp + -148;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00325F60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325F5Du); } /* indirect call */
    }

loc_00325F60: ;
    ecx = MEM32(ebp + 0x10);

loc_00325F63: ;
    MEM32(ebp + -132) = ecx;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -128) = eax;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -124) = MEM32(ebp + -124) & 0;
    _fa = (uint32_t)(MEM32(ebp + -124)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(XBOX_FS_BASE + 0x20);
    eax = MEM32(eax + 0x250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325F92; /* je: equal / zero */

loc_00325F83: ;
    ecx = ebp + -132;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00325F8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325F8Cu); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00325F8F: ;
    ecx = MEM32(ebp + 0x10);

loc_00325F92: ;
    eax = ecx;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00325F99u); RECOMP_ABI_CALL(0x0037489Fu, sub_0037489F); /* call 0x0037489F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */
    _cf = g_eflags & 1u; /* callee carry */

loc_00325F99: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}

/**
 * sub_00325F9C
 * Original: 0x00325F9C - 0x00325FB2 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325F9C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325F9C: ;
    _fa = (uint32_t)(MEM8(ebp + -29)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -29), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325FB1; /* je: equal / zero */

loc_00325FA2: ;
    eax = MEM32(ebp + -44);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x580));
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CA4); PUSH32(esp, 0x00325FB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325FABu); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00325FB1: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00325FB2
 * Original: 0x00325FB2 - 0x00325FCD (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325FB2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325FB2: ;
    PUSH32(esp, 0xFFFFFFCDu);
    POP32(esp, ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD63C40);
    PUSH32(esp, ecx);
    eax = 0xB5659000u;
    PUSH32(esp, eax);
    PUSH32(esp, 0xD63C60);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D48); PUSH32(esp, 0x00325FCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325FC6u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00325FCC: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00325FCD
 * Original: 0x00325FCD - 0x00325FDF (18 bytes, 4 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325FCD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325FCD: ;
    _fa = (uint32_t)(MEM32(0xD63C88)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xD63C88), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00325FDC; /* je: equal / zero */

loc_00325FD6: ;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D74); PUSH32(esp, 0x00325FDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325FD6u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00325FDC: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}

/**
 * sub_00325FDF
 * Original: 0x00325FDF - 0x00326053 (116 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00325FDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00325FDF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x325FCD);
    PUSH32(esp, 0xD63C40);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D04); PUSH32(esp, 0x00325FF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325FF1u); } /* indirect call */
    }

loc_00325FF7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD63C60);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D00); PUSH32(esp, 0x00326004u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325FFEu); } /* indirect call */
    }

loc_00326004: ;
    eax = MEM32(0x445D24);
    _cf = 0; /* logical op clears CF */
    MEM32(0xD63C88) = MEM32(0xD63C88) & 0;
    _fa = (uint32_t)(MEM32(0xD63C88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(0xD63C8C) = MEM32(0xD63C8C) & 0;
    _fa = (uint32_t)(MEM32(0xD63C8C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0032604C; /* jne: not equal / not zero */

loc_0032601C: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326031u); RECOMP_ABI_CALL(0x00321F9Bu, sub_00321F9B); /* call 0x00321F9B */

loc_00326031: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00326042; /* jne: not equal / not zero */

loc_00326035: ;
    eax = MEM32(ebp + -4);
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0xD63C88) = eax;
    goto loc_0032604C;

loc_00326042: ;
    MEM32(0xD63C8C) = 1;

loc_0032604C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326051u); RECOMP_ABI_CALL(0x00325FB2u, sub_00325FB2); /* call 0x00325FB2 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326051: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326053
 * Original: 0x00326053 - 0x0032606C (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326053(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326053: ;
    eax = MEM32(0x445D78);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x20) = MEM32(eax + 0x20) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x49E108);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF8); PUSH32(esp, 0x0032606Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326065u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_0032606B: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0032606C
 * Original: 0x0032606C - 0x0032606F (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032606C(void)
{
    int _cf = 0; /* carry flag */

loc_0032606C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032606F
 * Original: 0x0032606F - 0x003260D0 (97 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032606F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032606F: ;
    PUSH32(esp, esi);
    esi = MEM32(0x445D78);
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x0032607Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326076u); } /* indirect call */
    }

loc_0032607C: ;
    SET_LO8(ecx, LO8(eax));
    MEM32(esi + 0x10) = 0x32606C;
    MEM32(esi + 0x14) = 0x326053;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x00326092u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032608Cu); } /* indirect call */
    }

loc_00326092: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003260AA; /* je: equal / zero */

loc_0032609A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x49E108);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CFC); PUSH32(esp, 0x003260AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003260A4u); } /* indirect call */
    }

loc_003260AA: ;
    eax = MEM32(0xD63C98);
    ecx = MEM32(0xD63C9C);
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_003260C2; /* je: equal / zero */

loc_003260BB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003260C2u); RECOMP_ABI_CALL(0x003260D4u, sub_003260D4); /* call 0x003260D4 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003260C2: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_003260D0
 * Original: 0x003260D0 - 0x003260D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003260D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003260D0: ;
    { uint32_t _bs_v = (uint32_t)(ecx); int _bs_i;
      _fa = _bs_v; _fb = 0; _fas = (int32_t)_fa; _fbs = 0; /* bsf: ZF = src == 0 */
      if (_bs_v) {
        for (_bs_i = 0; _bs_i < 32; _bs_i++)
          if (_bs_v & (1u << _bs_i)) break;
        eax = (uint32_t)_bs_i;;
      } else { (void)(eax); } }
    g_eflags = (g_eflags & ~0x40u) | (((_fa == 0)) ? 0x40u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003260D4
 * Original: 0x003260D4 - 0x003260F9 (37 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003260D4(void)
{
    int _cf = 0; /* carry flag */

loc_003260D4: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    RECOMP_UNIMPL("sgdt [esp + 6]", 0x003260DCu); /* TODO: sgdt [esp + 6] */
    eax = MEM32(esp + 8);
    RECOMP_UNIMPL("cli", 0x003260E5u); /* TODO: cli */
    { uint32_t _tmp = MEM32(eax + 8);
    MEM32(eax + 8) = ecx;
    ecx = _tmp; }
    { uint32_t _tmp = MEM32(eax + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = _tmp; }
    RECOMP_UNIMPL("sti", 0x003260ECu); /* TODO: sti */
    RECOMP_UNIMPL("ljmp 8:0x3260f4", 0x003260EDu); /* TODO: ljmp 8:0x3260f4 */
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003260F9
 * Original: 0x003260F9 - 0x00326101 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003260F9(void)
{
    int _cf = 0; /* carry flag */

loc_003260F9: ;
    eax = 0x80004005u;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00326101
 * Original: 0x00326101 - 0x00326104 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326101(void)
{
    int _cf = 0; /* carry flag */

loc_00326101: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00326104
 * Original: 0x00326104 - 0x00326105 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326104(void)
{
    int _cf = 0; /* carry flag */

loc_00326104: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00326105
 * Original: 0x00326105 - 0x0032610A (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00326105(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00326105: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0032610A
 * Original: 0x0032610A - 0x00326112 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032610A(void)
{
    int _cf = 0; /* carry flag */

loc_0032610A: ;
    eax = 0x80004005u;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00326112
 * Original: 0x00326112 - 0x0032611A (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326112(void)
{
    int _cf = 0; /* carry flag */

loc_00326112: ;
    eax = 0x80004005u;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0032611A
 * Original: 0x0032611A - 0x00326122 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032611A(void)
{
    int _cf = 0; /* carry flag */

loc_0032611A: ;
    eax = 0x80004005u;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00326122
 * Original: 0x00326122 - 0x0032612B (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326122(void)
{
    int _cf = 0; /* carry flag */

loc_00326122: ;
    eax = MEM32(0x4E4084);
    eax = MEM32(eax + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_0032612B
 * Original: 0x0032612B - 0x00326163 (56 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032612B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032612B: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0032614D; /* jbe: below or equal (unsigned <=) */

loc_0032613B: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);

loc_0032613F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032614C; /* je: equal / zero */

loc_00326143: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0032613F; /* jb: below (unsigned <) */

loc_0032614C: ;
    POP32(esp, edi);

loc_0032614D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032615A; /* jne: not equal / not zero */

loc_00326151: ;
    esi = MEM32(eax + 8);
    MEM32(esi + edx * 4) = ecx;
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0032615A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032615Fu); RECOMP_ABI_CALL(0x003278C7u, sub_003278C7); /* call 0x003278C7 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0032615F: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00326163
 * Original: 0x00326163 - 0x003261BE (91 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326163(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326163: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_003261BA; /* jbe: below or equal (unsigned <=) */

loc_0032616D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_00326188; /* jbe: below or equal (unsigned <=) */

loc_00326174: ;
    ecx = MEM32(esi + 8);

loc_00326177: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00326188; /* je: equal / zero */

loc_0032617F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00326177; /* jb: below (unsigned <) */

loc_00326188: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003261B9; /* jae: above or equal (unsigned >=) */

loc_0032618C: ;
    ecx = MEM32(esi + 8);
    edi = eax;
    eax = MEM32(esi);
    if (((2) & 31u)) _cf = (int)(((uint32_t)(edi) >> ((32 - (((2) & 31u))) & 31u)) & 1u);
    edi = (uint32_t)(edi) << ((2) & 31u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ecx + edi));
    ecx = esi;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0032619Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032619Bu); } /* indirect call */
    }

loc_0032619E: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(eax + ecx * 4 + -4);
    MEM32(eax + edi) = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(ecx + eax * 4 + -4) = MEM32(ecx + eax * 4 + -4) & 0;
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003261B9: ;
    POP32(esp, edi);

loc_003261BA: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_003261BE
 * Original: 0x003261BE - 0x00326203 (69 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003261BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003261BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = edi;
    eax = MEM32(0x4E4084);
    eax = MEM32(eax + 8);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x22);
    if (((2) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((2) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((2) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003261DDu); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_003261DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003261EB; /* jne: not equal / not zero */

loc_003261E4: ;
    edi = 0x8007000Eu;
    goto loc_003261FE;

loc_003261EB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003261FE; /* jbe: below or equal (unsigned <=) */

loc_003261F2: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003261F2; /* jb: below (unsigned <) */

loc_003261FE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326203
 * Original: 0x00326203 - 0x00326216 (19 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326203(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326203: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x22);
    PUSH32(esp, MEM32(esi + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326210u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_00326210: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326216
 * Original: 0x00326216 - 0x00326222 (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326216(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326216: ;
    ecx = MEM32(esp + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032621Fu); RECOMP_ABI_CALL(0x00327AEFu, sub_00327AEF); /* call 0x00327AEF */
    _cf = g_eflags & 1u; /* callee carry */

loc_0032621F: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00326222
 * Original: 0x00326222 - 0x00326241 (31 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326222(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326222: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0032623E; /* jbe: below or equal (unsigned <=) */

loc_0032622D: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + edi * 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326238u); RECOMP_ABI_CALL(0x00327255u, sub_00327255); /* call 0x00327255 */

loc_00326238: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0032622D; /* jb: below (unsigned <) */

loc_0032623E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326241
 * Original: 0x00326241 - 0x0032624D (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326241(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326241: ;
    ecx = MEM32(esp + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032624Au); RECOMP_ABI_CALL(0x003279B0u, sub_003279B0); /* call 0x003279B0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0032624A: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_0032624D
 * Original: 0x0032624D - 0x0032626E (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032624D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032624D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4E4084);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032625Du); RECOMP_ABI_CALL(0x00326535u, sub_00326535); /* call 0x00326535 */

loc_0032625D: ;
    ecx = eax;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */ _fb = 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80004005u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0032626E
 * Original: 0x0032626E - 0x00326271 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0032626E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032626E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00326271
 * Original: 0x00326271 - 0x00326289 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326271(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00326271: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326286; /* je: equal / zero */

loc_00326278: ;
    ecx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(esp + 4))) >> 32) & 1);
    ecx = ecx + MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((5) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((5) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((5) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + eax + 8;

loc_00326286: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00326289
 * Original: 0x00326289 - 0x003262C9 (64 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326289(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00326289: ;
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx;
    MEM32(edx) = eax;
    MEM32(edx + 0x38) = eax;
    MEM32(edx + 0x3C) = eax;
    MEM32(edx + 0x54) = eax;
    MEM32(edx + 0x58) = eax;
    MEM32(edx + 0x5C) = eax;
    MEM32(edx + 0x60) = eax;
    MEM32(edx + 0x64) = eax;
    MEM32(edx + 0x78) = 1;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    edi = edx + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = edx + 0x40;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x28;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = edx;
    POP32(esp, edi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003262C9
 * Original: 0x003262C9 - 0x0032636C (163 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003262C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003262C9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003262D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003262D6u); } /* indirect call */
    }

loc_003262D8: ;
    edi = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi + eax * 4 + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4 + 0x40), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003262E7; /* je: equal / zero */

loc_003262E3: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00326346;

loc_003262E7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003262EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003262EBu); } /* indirect call */
    }

loc_003262EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0032633C; /* jl: less (signed <) */

loc_003262F5: ;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x3C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00326303; /* je: equal / zero */

loc_003262FA: ;
    MEM32(ebp + 0xC) = 0x80004005u;
    goto loc_0032633C;

loc_00326303: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0032632C; /* jbe: below or equal (unsigned <=) */

loc_00326309: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0032630D: ;
    ecx = MEM32(edi + 0x38);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0032631Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326318u); } /* indirect call */
    }

loc_0032631B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0032634D; /* jl: less (signed <) */

loc_00326322: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0x7C)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x7C;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0032630D; /* jb: below (unsigned <) */

loc_0032632C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00326332u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326330u); } /* indirect call */
    }

loc_00326332: ;
    MEM32(edi + eax * 4 + 0x40) = esi;

loc_00326336: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00326343; /* jge: greater or equal (signed >=) */

loc_0032633C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00326343u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326340u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00326343: ;
    eax = MEM32(ebp + 0xC);

loc_00326346: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

loc_0032634D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00326336; /* jbe: below or equal (unsigned <=) */

loc_00326351: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00326355: ;
    ecx = MEM32(edi + 0x38);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00326363u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326360u); } /* indirect call */
    }

loc_00326363: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0x7C)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x7C;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326355; /* jne: not equal / not zero */

loc_0032636A: ;
    goto loc_00326336;

}

/**
 * sub_0032636C
 * Original: 0x0032636C - 0x003263D9 (109 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032636C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032636C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00326383; /* jne: not equal / not zero */

loc_0032637C: ;
    eax = 0x80004005u;
    goto loc_003263D5;

loc_00326383: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3C), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00326393; /* jne: not equal / not zero */

loc_0032638C: ;
    eax = 0x80004005u;
    goto loc_003263D4;

loc_00326393: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx + edi * 4 + 0x28;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003263A7; /* je: equal / zero */

loc_003263A0: ;
    eax = 0x80004005u;
    goto loc_003263D2;

loc_003263A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003263BC; /* jbe: below or equal (unsigned <=) */

loc_003263AB: ;
    ebx = MEM32(ecx + 0x38);

loc_003263AE: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003263BC; /* je: equal / zero */

loc_003263B3: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x7C)) >> 32) & 1);
    ebx = ebx + 0x7C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003263AE; /* jb: below (unsigned <) */

loc_003263BC: ;
    eax = MEM32(ecx + 0x38);
    _fa = ((int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x7C) != (int64_t)(int32_t)((uint32_t)(edx) * (uint32_t)(0x7C)));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x7C);
    MEM32(edx + eax) = edi;
    eax = MEM32(ecx + 0x38);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    MEM32(ecx + 0x3C) = MEM32(ecx + 0x3C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);

loc_003263D2: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003263D4: ;
    POP32(esp, ebx);

loc_003263D5: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_003263D9
 * Original: 0x003263D9 - 0x003263FC (35 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003263D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003263D9: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003263F4; /* je: equal / zero */

loc_003263E9: ;
    PUSH32(esp, MEM32(esp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003263F2u); RECOMP_ABI_CALL(0x0032751Du, sub_0032751D); /* call 0x0032751D */
    _cf = g_eflags & 1u; /* callee carry */

loc_003263F2: ;
    goto loc_003263F9;

loc_003263F4: ;
    eax = 0x80004005u;

loc_003263F9: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_003263FC
 * Original: 0x003263FC - 0x0032641F (35 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003263FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003263FC: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326417; /* je: equal / zero */

loc_0032640C: ;
    PUSH32(esp, MEM32(esp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326415u); RECOMP_ABI_CALL(0x0032755Cu, sub_0032755C); /* call 0x0032755C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326415: ;
    goto loc_0032641C;

loc_00326417: ;
    eax = 0x80004005u;

loc_0032641C: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_0032641F
 * Original: 0x0032641F - 0x00326472 (83 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032641F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032641F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 4;
    edi = esi + 0x50;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00326433: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032645B; /* je: equal / zero */

loc_00326437: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00326454; /* jbe: below or equal (unsigned <=) */

loc_0032643E: ;
    edx = MEM32(esi + 0x38);
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebp)) >> 32) & 1);
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0032644Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326448u); } /* indirect call */
    }

loc_0032644B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x7C)) >> 32) & 1);
    ebp = ebp + 0x7C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0032643E; /* jb: below (unsigned <) */

loc_00326454: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0032645Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326458u); } /* indirect call */
    }

loc_0032645B: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032646C; /* je: equal / zero */

loc_00326463: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(4));
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00326433;

loc_0032646C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326472
 * Original: 0x00326472 - 0x003264C5 (83 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326472(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326472: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003264A7; /* je: equal / zero */

loc_0032647F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x326104);
    edi = esi + -4;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x7C);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326492u); RECOMP_ABI_CALL(0x000121D0u, sub_000121D0); /* call 0x000121D0 */

loc_00326492: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003264A2; /* je: equal / zero */

loc_00326497: ;
    PUSH32(esp, 0x8019);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003264A2u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003264A2: ;
    eax = edi;
    POP32(esp, edi);
    goto loc_003264C0;

loc_003264A7: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003264AEu); RECOMP_ABI_CALL(0x00326104u, sub_00326104); /* call 0x00326104 */

loc_003264AE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003264BE; /* je: equal / zero */

loc_003264B3: ;
    PUSH32(esp, 0x8019);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003264BEu); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003264BE: ;
    eax = esi;

loc_003264C0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_003264C5
 * Original: 0x003264C5 - 0x00326535 (112 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003264C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003264C5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x003264D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003264CBu); } /* indirect call */
    }

loc_003264D1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E4040);
    SET_LO8(ebx, LO8(eax));
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D4C); PUSH32(esp, 0x003264DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003264D8u); } /* indirect call */
    }

loc_003264DE: ;
    PUSH32(esp, 4);
    edi = esi + 0x28;
    POP32(esp, ebp);

loc_003264E4: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003264F8; /* je: equal / zero */

loc_003264EA: ;
    PUSH32(esp, MEM32(0x4465D4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003264F5u); RECOMP_ABI_CALL(0x0032729Eu, sub_0032729E); /* call 0x0032729E */

loc_003264F5: ;
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003264F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003264E4; /* jne: not equal / not zero */

loc_003264FE: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x00326506u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326500u); } /* indirect call */
    }

loc_00326506: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032650Du); RECOMP_ABI_CALL(0x0032641Fu, sub_0032641F); /* call 0x0032641F */

loc_0032650D: ;
    ecx = MEM32(esi + 0x38);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00326520; /* je: equal / zero */

loc_00326516: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032651Du); RECOMP_ABI_CALL(0x00326472u, sub_00326472); /* call 0x00326472 */

loc_0032651D: ;
    MEM32(esi + 0x38) = edi;

loc_00326520: ;
    MEM32(0x4E409C) = edi;
    MEM32(0x4E4084) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00328020(); return; /* tail jmp 0x00328020 */

}

/**
 * sub_00326535
 * Original: 0x00326535 - 0x00326540 (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326535(void)
{
    int _cf = 0; /* carry flag */

loc_00326535: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x40);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00326540
 * Original: 0x00326540 - 0x0032656A (42 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326540: ;
    eax = MEM32(esp + 4);
    _fa = ((int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2710) != (int64_t)(int32_t)((uint32_t)(eax) * (uint32_t)(0x2710)));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2710);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx + 0x68)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx + 0x68) = MEM32(ecx + 0x68) + eax;
    _fa = (uint32_t)(MEM32(ecx + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E4068);
    { uint64_t _t = (uint64_t)(MEM32(ecx + 0x6C)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(MEM32(ecx + 0x6C)) ^ (uint32_t)_t) & ((uint32_t)(0) ^ (uint32_t)_t)) >> 31 & 1u; MEM32(ecx + 0x6C) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ecx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, MEM32(ecx + 0x6C));
    PUSH32(esp, MEM32(ecx + 0x68));
    PUSH32(esp, 0x4E4040);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D48); PUSH32(esp, 0x00326567u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326561u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00326567: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_0032656A
 * Original: 0x0032656A - 0x0032660F (165 bytes, 67 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032656A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032656A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x54);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x43CE28);
    MEM32(esi + 0x60) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032658Fu); RECOMP_ABI_CALL(0x0043DE66u, sub_0043DE66); /* call 0x0043DE66 */

loc_0032658F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x43CE34);
    MEM32(esi + 0x54) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032659Eu); RECOMP_ABI_CALL(0x0043DE66u, sub_0043DE66); /* call 0x0043DE66 */

loc_0032659E: ;
    edi = MEM32(esi + 0x54);
    MEM32(esi + 0x58) = eax;
    edi = ~edi;
    _cf = 0; /* logical op clears CF */
    edi = edi & MEM32(esi + 0x5C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -8) = eax;
    ebx = esi + 0x28;

loc_003265B7: ;
    ecx = MEM32(ebp + -4);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (((LO8(ecx)) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((LO8(ecx)) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((LO8(ecx)) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -12) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003265CD; /* jne: not equal / not zero */

loc_003265C6: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003265E1; /* je: equal / zero */

loc_003265CD: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003265E1; /* je: equal / zero */

loc_003265D3: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003265E1; /* jne: not equal / not zero */

loc_003265D9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003265DEu); RECOMP_ABI_CALL(0x00327313u, sub_00327313); /* call 0x00327313 */

loc_003265DE: ;
    eax = MEM32(ebp + -12);

loc_003265E1: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x54), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003265FC; /* je: equal / zero */

loc_003265E6: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x58), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003265FC; /* je: equal / zero */

loc_003265EB: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003265FC; /* je: equal / zero */

loc_003265F1: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003265FC; /* je: equal / zero */

loc_003265F7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003265FCu); RECOMP_ABI_CALL(0x00327338u, sub_00327338); /* call 0x00327338 */

loc_003265FC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003265B7; /* jb: below (unsigned <) */

loc_00326608: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0032660F
 * Original: 0x0032660F - 0x0032663F (48 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032660F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032660F: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0032661E; /* jne: not equal / not zero */

loc_00326617: ;
    eax = 0x80004005u;
    POP32(esp, edi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_0032661E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    esi = edi + 0x28;
    POP32(esp, ebx);

loc_00326626: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326633; /* je: equal / zero */

loc_0032662C: ;
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326633u); RECOMP_ABI_CALL(0x00327A80u, sub_00327A80); /* call 0x00327A80 */

loc_00326633: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326626; /* jne: not equal / not zero */

loc_00326639: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0032663F
 * Original: 0x0032663F - 0x0032666F (48 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032663F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032663F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(0x4465D4));
    edi = ecx;
    esi = edi + eax * 4 + 0x28;
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326658u); RECOMP_ABI_CALL(0x0032729Eu, sub_0032729E); /* call 0x0032729E */

loc_00326658: ;
    ecx = MEM32(esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032665Fu); RECOMP_ABI_CALL(0x00327864u, sub_00327864); /* call 0x00327864 */

loc_0032665F: ;
    eax = MEM32(esi);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi + 0x3C) = MEM32(edi + 0x3C) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_0032666F
 * Original: 0x0032666F - 0x003266B4 (69 bytes, 26 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0032666F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032666F: ;
    PUSH32(esp, MEM32(esp + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326678u); RECOMP_ABI_CALL(0x00326271u, sub_00326271); /* call 0x00326271 */

loc_00326678: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00326683; /* jne: not equal / not zero */

loc_0032667C: ;
    eax = 0x80004005u;
    goto loc_003266B1;

loc_00326683: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = MEM32(eax + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_00326695; /* je: equal / zero */

loc_0032668E: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    MEM32(edx) = esi;
    POP32(esp, esi);

loc_00326695: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003266A2; /* je: equal / zero */

loc_0032669D: ;
    eax = MEM32(eax + 0x18);
    MEM32(edx) = eax;

loc_003266A2: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003266AF; /* je: equal / zero */

loc_003266AA: ;
    ecx = MEM32(ecx + 0x34);
    MEM32(eax) = ecx;

loc_003266AF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003266B1: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}

/**
 * sub_003266B4
 * Original: 0x003266B4 - 0x003266F1 (61 bytes, 24 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003266B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003266B4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003266E8; /* je: equal / zero */

loc_003266C5: ;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003266E8; /* je: equal / zero */

loc_003266CB: ;
    edx = eax + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003266E8; /* je: equal / zero */

loc_003266D2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(eax + 0x50);
    PUSH32(esp, MEM32(ebp + 0x14));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x003266E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003266E3u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_003266E6: ;
    goto loc_003266ED;

loc_003266E8: ;
    eax = 0x80004005u;

loc_003266ED: ;
    POP32(esp, ebp);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}

/**
 * sub_003266F1
 * Original: 0x003266F1 - 0x0032672E (61 bytes, 24 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003266F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003266F1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326725; /* je: equal / zero */

loc_00326702: ;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326725; /* je: equal / zero */

loc_00326708: ;
    edx = eax + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326725; /* je: equal / zero */

loc_0032670F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(eax + 0x50);
    PUSH32(esp, MEM32(ebp + 0x14));
    edx = MEM32(eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00326723u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326720u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00326723: ;
    goto loc_0032672A;

loc_00326725: ;
    eax = 0x80004005u;

loc_0032672A: ;
    POP32(esp, ebp);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 24; return; /* ret 20 */

}

/**
 * sub_0032672E
 * Original: 0x0032672E - 0x00326762 (52 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032672E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032672E: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    ecx = MEM32(eax + ecx * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032675A; /* je: equal / zero */

loc_0032673E: ;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032675A; /* je: equal / zero */

loc_00326744: ;
    edx = eax + 0x28;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032675A; /* je: equal / zero */

loc_0032674B: ;
    eax = MEM32(eax + 0x50);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00326758u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326755u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00326758: ;
    goto loc_0032675F;

loc_0032675A: ;
    eax = 0x80004005u;

loc_0032675F: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_00326762
 * Original: 0x00326762 - 0x00326767 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326762(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326762: ;
    g_seh_ebp = ebp; sub_003262C9(); return; /* tail jmp 0x003262C9 */

}

/**
 * sub_00326767
 * Original: 0x00326767 - 0x00326776 (15 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00326767(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00326767: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00326776
 * Original: 0x00326776 - 0x0032677B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326776(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326776: ;
    g_seh_ebp = ebp; sub_0032636C(); return; /* tail jmp 0x0032636C */

}

/**
 * sub_0032677B
 * Original: 0x0032677B - 0x00326780 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032677B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032677B: ;
    g_seh_ebp = ebp; sub_003263D9(); return; /* tail jmp 0x003263D9 */

}

/**
 * sub_00326780
 * Original: 0x00326780 - 0x00326785 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326780: ;
    g_seh_ebp = ebp; sub_003263FC(); return; /* tail jmp 0x003263FC */

}

/**
 * sub_00326785
 * Original: 0x00326785 - 0x0032678E (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00326785(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00326785: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_003266B4(); return; /* tail jmp 0x003266B4 */

}

/**
 * sub_0032678E
 * Original: 0x0032678E - 0x00326797 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032678E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0032678E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_003266F1(); return; /* tail jmp 0x003266F1 */

}

/**
 * sub_00326797
 * Original: 0x00326797 - 0x0032679C (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326797(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326797: ;
    g_seh_ebp = ebp; sub_0032672E(); return; /* tail jmp 0x0032672E */

}

/**
 * sub_0032679C
 * Original: 0x0032679C - 0x003267C8 (44 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032679C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032679C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003267A9u); RECOMP_ABI_CALL(0x0032660Fu, sub_0032660F); /* call 0x0032660F */

loc_003267A9: ;
    PUSH32(esp, 5);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x40)) >> 32) & 1);
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_003267AF: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003267BB; /* je: equal / zero */

loc_003267B4: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x003267BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003267B8u); } /* indirect call */
    }

loc_003267BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003267AF; /* jne: not equal / not zero */

loc_003267C1: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_003267C8
 * Original: 0x003267C8 - 0x003267EC (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003267C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003267C8: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x28), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003267E1; /* je: equal / zero */

loc_003267D9: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003267DFu); RECOMP_ABI_CALL(0x0032663Fu, sub_0032663F); /* call 0x0032663F */
    _cf = g_eflags & 1u; /* callee carry */

loc_003267DF: ;
    goto loc_003267E6;

loc_003267E1: ;
    esi = 0x80004005u;

loc_003267E6: ;
    eax = esi;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_003267EC
 * Original: 0x003267EC - 0x00326826 (58 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003267EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003267EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x003267F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003267F1u); } /* indirect call */
    }

loc_003267F7: ;
    ecx = esi;
    SET_LO8(ebx, LO8(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326800u); RECOMP_ABI_CALL(0x0032656Au, sub_0032656A); /* call 0x0032656A */

loc_00326800: ;
    PUSH32(esp, 5);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x40)) >> 32) & 1);
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_00326806: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326812; /* je: equal / zero */

loc_0032680B: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00326812u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032680Fu); } /* indirect call */
    }

loc_00326812: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326806; /* jne: not equal / not zero */

loc_00326818: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x00326820u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032681Au); } /* indirect call */
    }

loc_00326820: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326826
 * Original: 0x00326826 - 0x0032682B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326826(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326826: ;
    g_seh_ebp = ebp; sub_0032679C(); return; /* tail jmp 0x0032679C */

}

/**
 * sub_0032682B
 * Original: 0x0032682B - 0x00326830 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032682B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032682B: ;
    g_seh_ebp = ebp; sub_003267C8(); return; /* tail jmp 0x003267C8 */

}

/**
 * sub_00326830
 * Original: 0x00326830 - 0x00326850 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326830: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326838u); RECOMP_ABI_CALL(0x003264C5u, sub_003264C5); /* call 0x003264C5 */

loc_00326838: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0032684A; /* je: equal / zero */

loc_0032683F: ;
    PUSH32(esp, 0x801A);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032684Au); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0032684A: ;
    eax = esi;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00326850
 * Original: 0x00326850 - 0x0032686B (27 bytes, 6 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326850: ;
    ecx = MEM32(0x4E4084);
    PUSH32(esp, 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032685Du); RECOMP_ABI_CALL(0x00326540u, sub_00326540); /* call 0x00326540 */

loc_0032685D: ;
    ecx = MEM32(0x4E4084);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326868u); RECOMP_ABI_CALL(0x003267ECu, sub_003267EC); /* call 0x003267EC */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326868: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}

/**
 * sub_0032686B
 * Original: 0x0032686B - 0x00326959 (238 bytes, 74 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032686B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032686B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 9);
    edi = ebx + 4;
    POP32(esp, ecx);
    esi = ebp;
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
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x24), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032688E; /* je: equal / zero */

loc_00326889: ;
    MEM32(0x4E409C) = eax;

loc_0032688E: ;
    MEM16(0x4E4098) = LO16(edi);
    MEM16(0x4E408A) = LO16(eax);
    MEM32(0x4E408C) = 0x3E80;
    MEM16(0x4E4096) = 0x10;
    MEM16(0x4E4094) = 2;
    MEM32(0x4E4090) = 0x7D00;
    MEM16(0x4E4088) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003268CCu); RECOMP_ABI_CALL(0x0032804Du, sub_0032804D); /* call 0x0032804D */

loc_003268CC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00326950; /* jl: less (signed <) */

loc_003268D2: ;
    esi = MEM32(ebp + 4);
    eax = esi;
    _fa = ((int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7C) != (int64_t)(int32_t)((uint32_t)(eax) * (uint32_t)(0x7C)));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    PUSH32(esp, 0x8019);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003268E8u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_003268E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003268FF; /* je: equal / zero */

loc_003268EC: ;
    PUSH32(esp, 0x3271FB);
    PUSH32(esp, esi);
    edi = eax + 4;
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003268FFu); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */

loc_003268FF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebx + 0x38) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0032690D; /* jne: not equal / not zero */

loc_00326906: ;
    esi = 0x8007000Eu;
    goto loc_00326950;

loc_0032690D: ;
    PUSH32(esp, MEM32(0x4465D4));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326919u); RECOMP_ABI_CALL(0x003262C9u, sub_003262C9); /* call 0x003262C9 */

loc_00326919: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00326950; /* jl: less (signed <) */

loc_0032691F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x4E4040);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D00); PUSH32(esp, 0x0032692Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326926u); } /* indirect call */
    }

loc_0032692C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x326850);
    PUSH32(esp, 0x4E4068);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445D04); PUSH32(esp, 0x0032693Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326937u); } /* indirect call */
    }

loc_0032693D: ;
    eax = ebx + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445C80); PUSH32(esp, 0x00326947u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326941u); } /* indirect call */
    }

loc_00326947: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326950u); RECOMP_ABI_CALL(0x00326540u, sub_00326540); /* call 0x00326540 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326950: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00326959
 * Original: 0x00326959 - 0x003269C9 (112 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326959(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326959: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _cf = 0; /* logical op clears CF */
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x801A);
    PUSH32(esp, 0x80);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326971u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00326971: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032697E; /* je: equal / zero */

loc_00326975: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032697Cu); RECOMP_ABI_CALL(0x00326289u, sub_00326289); /* call 0x00326289 */

loc_0032697C: ;
    goto loc_00326980;

loc_0032697E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00326980: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x4E4084) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00326990; /* jne: not equal / not zero */

loc_00326989: ;
    esi = 0x8007000Eu;
    goto loc_003269C2;

loc_00326990: ;
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032699Bu); RECOMP_ABI_CALL(0x0032686Bu, sub_0032686B); /* call 0x0032686B */

loc_0032699B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003269AA; /* jl: less (signed <) */

loc_003269A1: ;
    eax = MEM32(0x4E4084);
    MEM32(edi) = eax;
    goto loc_003269C2;

loc_003269AA: ;
    ecx = MEM32(0x4E4084);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003269BB; /* je: equal / zero */

loc_003269B4: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003269BBu); RECOMP_ABI_CALL(0x00326830u, sub_00326830); /* call 0x00326830 */

loc_003269BB: ;
    _cf = 0; /* logical op clears CF */
    MEM32(0x4E4084) = MEM32(0x4E4084) & 0;
    _fa = (uint32_t)(MEM32(0x4E4084)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003269C2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_003269C9
 * Original: 0x003269C9 - 0x003269FC (51 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003269C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003269C9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    eax = edx + 0x78;
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    eax = 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    { uint32_t _add = eax;
      uint32_t _old = RECOMP_ATOMIC_ADD32(XBOX_PTR(ecx), _add);
      _fa = _old + _add; _fas = (int32_t)_fa; /* xadd result */
      eax = _old; }  /* xadd */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003269F5; /* jne: not equal / not zero */

loc_003269E8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003269F5; /* je: equal / zero */

loc_003269EC: ;
    PUSH32(esp, 1);
    ecx = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003269F5u); RECOMP_ABI_CALL(0x00326830u, sub_00326830); /* call 0x00326830 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003269F5: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_003269FC
 * Original: 0x003269FC - 0x00326A01 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003269FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003269FC: ;
    g_seh_ebp = ebp; sub_003269C9(); return; /* tail jmp 0x003269C9 */

}

/**
 * sub_00326A01
 * Original: 0x00326A01 - 0x00326A43 (66 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326A01(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00326A01: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ecx + 0x50) = MEM32(ecx + 0x50) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = 4;
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 0x40;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = ecx;
    POP32(esp, edi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00326A43
 * Original: 0x00326A43 - 0x00326A4F (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326A43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326A43: ;
    ecx = MEM32(esp + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326A4Cu); RECOMP_ABI_CALL(0x003277C8u, sub_003277C8); /* call 0x003277C8 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326A4C: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00326A4F
 * Original: 0x00326A4F - 0x00326A5B (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326A4F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326A4F: ;
    ecx = MEM32(esp + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326A58u); RECOMP_ABI_CALL(0x00327284u, sub_00327284); /* call 0x00327284 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326A58: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00326A5B
 * Original: 0x00326A5B - 0x00326A94 (57 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326A5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326A5B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00326A91; /* jbe: below or equal (unsigned <=) */

loc_00326A66: ;
    PUSH32(esp, edi);

loc_00326A67: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + ebx * 4);
    eax = MEM32(ecx);
    edi = eax + eax * 2;
    eax = MEM32(esi + 0x14);
    if (((5) & 31u)) _cf = (int)(((uint32_t)(edi) >> ((32 - (((5) & 31u))) & 31u)) & 1u);
    edi = (uint32_t)(edi) << ((5) & 31u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326A80u); RECOMP_ABI_CALL(0x0032725Du, sub_0032725D); /* call 0x0032725D */

loc_00326A80: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326A8Au); RECOMP_ABI_CALL(0x00328366u, sub_00328366); /* call 0x00328366 */

loc_00326A8A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00326A67; /* jb: below (unsigned <) */

loc_00326A90: ;
    POP32(esp, edi);

loc_00326A91: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326A94
 * Original: 0x00326A94 - 0x00326AB5 (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326A94(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326A94: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4E4084);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326AA4u); RECOMP_ABI_CALL(0x00326535u, sub_00326535); /* call 0x00326535 */

loc_00326AA4: ;
    ecx = eax;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */ _fb = 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80004005u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326AB5
 * Original: 0x00326AB5 - 0x00326B8F (218 bytes, 80 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00326AB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00326AB5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    esi = ebx + 0x10;
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -12) = ecx;
    edi = ebp + -8;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326AD9u); RECOMP_ABI_CALL(0x0041E048u, sub_0041E048); /* call 0x0041E048 */

loc_00326AD9: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00326AEA; /* jne: not equal / not zero */

loc_00326ADE: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_00326B87;

loc_00326AEA: ;
    PUSH32(esp, 4);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_00326AEF: ;
    ecx = MEM32(0x4E4084);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326AFBu); RECOMP_ABI_CALL(0x00326271u, sub_00326271); /* call 0x00326271 */

loc_00326AFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326B4A; /* je: equal / zero */

loc_00326AFF: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + esi * 8 + -40) = MEM32(ebp + esi * 8 + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + esi * 8 + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x1400));
    eax = eax - 0x1400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((5) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((5) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((5) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + esi * 8 + -44) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00326AEF; /* jb: below (unsigned <) */

loc_00326B1B: ;
    PUSH32(esp, 0x801C);
    PUSH32(esp, 0x184);
    MEM32(ebp + -12) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326B31u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00326B31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326B51; /* je: equal / zero */

loc_00326B35: ;
    PUSH32(esp, 0x326A01);
    PUSH32(esp, edi);
    esi = eax + 4;
    PUSH32(esp, 0x60);
    PUSH32(esp, esi);
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326B48u); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */

loc_00326B48: ;
    goto loc_00326B53;

loc_00326B4A: ;
    eax = 0x80004005u;
    goto loc_00326B8A;

loc_00326B51: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00326B53: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebx + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00326ADE; /* je: equal / zero */

loc_00326B5A: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + -44;

loc_00326B5F: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00326B87; /* jl: less (signed <) */

loc_00326B65: ;
    ecx = MEM32(ebx + 0x14);
    eax = ebp + -12;
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326B76u); RECOMP_ABI_CALL(0x00328734u, sub_00328734); /* call 0x00328734 */

loc_00326B76: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x60)) >> 32) & 1);
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x180 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00326B5F; /* jb: below (unsigned <) */

loc_00326B87: ;
    eax = MEM32(ebp + -4);

loc_00326B8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326B8F
 * Original: 0x00326B8F - 0x00326BDB (76 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326B8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326B8F: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00326BC4; /* je: equal / zero */

loc_00326B9C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x326104);
    esi = edi + -4;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x60);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326BAFu); RECOMP_ABI_CALL(0x000121D0u, sub_000121D0); /* call 0x000121D0 */

loc_00326BAF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00326BBF; /* je: equal / zero */

loc_00326BB4: ;
    PUSH32(esp, 0x801C);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326BBFu); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326BBF: ;
    eax = esi;
    POP32(esp, esi);
    goto loc_00326BD6;

loc_00326BC4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00326BD4; /* je: equal / zero */

loc_00326BC9: ;
    PUSH32(esp, 0x801C);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326BD4u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326BD4: ;
    eax = edi;

loc_00326BD6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00326BDB
 * Original: 0x00326BDB - 0x00326C27 (76 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326BDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326BDB: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326BE3u); RECOMP_ABI_CALL(0x00326203u, sub_00326203); /* call 0x00326203 */

loc_00326BE3: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326BF4; /* je: equal / zero */

loc_00326BEA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326BF0u); RECOMP_ABI_CALL(0x0041B121u, sub_0041B121); /* call 0x0041B121 */

loc_00326BF0: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00326BF4: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326C25; /* je: equal / zero */

loc_00326BFA: ;
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00326BFD: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326C07u); RECOMP_ABI_CALL(0x003286B2u, sub_003286B2); /* call 0x003286B2 */

loc_00326C07: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x60)) >> 32) & 1);
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x180 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00326BFD; /* jb: below (unsigned <) */

loc_00326C12: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00326C21; /* je: equal / zero */

loc_00326C1A: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326C21u); RECOMP_ABI_CALL(0x00326B8Fu, sub_00326B8F); /* call 0x00326B8F */

loc_00326C21: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00326C25: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326C27
 * Original: 0x00326C27 - 0x00326C2B (4 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326C27(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00326C27: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00326C2B
 * Original: 0x00326C2B - 0x00326C3B (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326C2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326C2B: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326C38u); RECOMP_ABI_CALL(0x00327554u, sub_00327554); /* call 0x00327554 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326C38: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_00326C3B
 * Original: 0x00326C3B - 0x00326C6D (50 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326C3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326C3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326C44u); RECOMP_ABI_CALL(0x003261BEu, sub_003261BE); /* call 0x003261BE */

loc_00326C44: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00326C61; /* jl: less (signed <) */

loc_00326C4A: ;
    ecx = edi;
    MEM32(0x4E409C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326C5Bu); RECOMP_ABI_CALL(0x00326AB5u, sub_00326AB5); /* call 0x00326AB5 */

loc_00326C5B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00326C68; /* jge: greater or equal (signed >=) */

loc_00326C61: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00326C68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326C65u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00326C68: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326C6D
 * Original: 0x00326C6D - 0x00326C88 (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326C6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326C6D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326C78u); RECOMP_ABI_CALL(0x00327D3Cu, sub_00327D3C); /* call 0x00327D3C */

loc_00326C78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326C84; /* je: equal / zero */

loc_00326C7C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00326C86; /* je: equal / zero */

loc_00326C84: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00326C86: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326C88
 * Original: 0x00326C88 - 0x00326CA4 (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00326C88(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00326C88: ;
    edx = MEM32(ecx + 0x78);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x74);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(0x14));
    esi = esi - 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_00326CA1; /* ja: above (unsigned >) */

loc_00326C9A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x14)) >> 32) & 1);
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x78) = edx;
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

loc_00326CA1: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00326CA4
 * Original: 0x00326CA4 - 0x00326CB0 (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326CA4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326CA4: ;
    ecx = MEM32(esp + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326CADu); RECOMP_ABI_CALL(0x00327806u, sub_00327806); /* call 0x00327806 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326CAD: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00326CB0
 * Original: 0x00326CB0 - 0x00326CBC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326CB0: ;
    ecx = MEM32(esp + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326CB9u); RECOMP_ABI_CALL(0x00327291u, sub_00327291); /* call 0x00327291 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326CB9: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00326CBC
 * Original: 0x00326CBC - 0x00326CF0 (52 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326CBC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00326CBC: ;
    edx = MEM32(ecx + 0x98);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00326CE5; /* jbe: below or equal (unsigned <=) */

loc_00326CC9: ;
    eax = ecx + 0x1C;

loc_00326CCC: ;
    ecx = MEM32(eax + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00326CDD; /* jne: not equal / not zero */

loc_00326CD5: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00326CE5; /* je: equal / zero */

loc_00326CDD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00326CCC; /* jb: below (unsigned <) */

loc_00326CE5: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00326CF0
 * Original: 0x00326CF0 - 0x00326D11 (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x4E4084);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326D00u); RECOMP_ABI_CALL(0x00326535u, sub_00326535); /* call 0x00326535 */

loc_00326D00: ;
    ecx = eax;
    eax = esi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */ _fb = 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80004005u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326D11
 * Original: 0x00326D11 - 0x00326DEB (218 bytes, 80 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00326D11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00326D11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    esi = ebx + 0x10;
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -12) = ecx;
    edi = ebp + -8;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326D35u); RECOMP_ABI_CALL(0x0041E048u, sub_0041E048); /* call 0x0041E048 */

loc_00326D35: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00326D46; /* jne: not equal / not zero */

loc_00326D3A: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_00326DE3;

loc_00326D46: ;
    PUSH32(esp, 4);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_00326D4B: ;
    ecx = MEM32(0x4E4084);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326D57u); RECOMP_ABI_CALL(0x00326271u, sub_00326271); /* call 0x00326271 */

loc_00326D57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326DA6; /* je: equal / zero */

loc_00326D5B: ;
    eax = MEM32(eax + 8);
    eax = MEM32(eax + 0x14);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + esi * 8 + -40) = MEM32(ebp + esi * 8 + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + esi * 8 + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x1400));
    eax = eax - 0x1400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((5) & 31u)) _cf = (int)(((uint32_t)(eax) >> (((((5) & 31u)) - 1) & 31u)) & 1u);
    eax = (uint32_t)(eax) >> ((5) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + esi * 8 + -44) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00326D4B; /* jb: below (unsigned <) */

loc_00326D77: ;
    PUSH32(esp, 0x801C);
    PUSH32(esp, 0x184);
    MEM32(ebp + -12) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326D8Du); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00326D8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326DAD; /* je: equal / zero */

loc_00326D91: ;
    PUSH32(esp, 0x326A01);
    PUSH32(esp, edi);
    esi = eax + 4;
    PUSH32(esp, 0x60);
    PUSH32(esp, esi);
    MEM32(eax) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326DA4u); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */

loc_00326DA4: ;
    goto loc_00326DAF;

loc_00326DA6: ;
    eax = 0x80004005u;
    goto loc_00326DE6;

loc_00326DAD: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00326DAF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebx + 0x14) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00326D3A; /* je: equal / zero */

loc_00326DB6: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ebp + -44;

loc_00326DBB: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00326DE3; /* jl: less (signed <) */

loc_00326DC1: ;
    ecx = MEM32(ebx + 0x14);
    eax = ebp + -12;
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326DD2u); RECOMP_ABI_CALL(0x0032884Au, sub_0032884A); /* call 0x0032884A */

loc_00326DD2: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x60)) >> 32) & 1);
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(8)) >> 32) & 1);
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x180 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00326DBB; /* jb: below (unsigned <) */

loc_00326DE3: ;
    eax = MEM32(ebp + -4);

loc_00326DE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326DEB
 * Original: 0x00326DEB - 0x00326E37 (76 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326DEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326DEB: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326DF3u); RECOMP_ABI_CALL(0x00326203u, sub_00326203); /* call 0x00326203 */

loc_00326DF3: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326E04; /* je: equal / zero */

loc_00326DFA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326E00u); RECOMP_ABI_CALL(0x0041B121u, sub_0041B121); /* call 0x0041B121 */

loc_00326E00: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00326E04: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326E35; /* je: equal / zero */

loc_00326E0A: ;
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00326E0D: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326E17u); RECOMP_ABI_CALL(0x003286FCu, sub_003286FC); /* call 0x003286FC */

loc_00326E17: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x60)) >> 32) & 1);
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x180 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00326E0D; /* jb: below (unsigned <) */

loc_00326E22: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00326E31; /* je: equal / zero */

loc_00326E2A: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326E31u); RECOMP_ABI_CALL(0x00326B8Fu, sub_00326B8F); /* call 0x00326B8F */

loc_00326E31: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00326E35: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326E37
 * Original: 0x00326E37 - 0x00326ECD (150 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326E37(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326E37: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x00326E44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326E3Eu); } /* indirect call */
    }

loc_00326E44: ;
    ebp = MEM32(ebx + 0x98);
    edx = ebx + 0x18;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    esi = edx;
    MEM8(esp + 0x13) = LO8(eax);
    edi = ebx + 0x58;
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
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    ecx = ebp + ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(ecx, MEM8(esp + 0x13));
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x98) = MEM32(ebx + 0x98) & eax;
    _fa = (uint32_t)(MEM32(ebx + 0x98)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x00326E75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326E6Fu); } /* indirect call */
    }

loc_00326E75: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_00326EC7; /* jbe: below or equal (unsigned <=) */

loc_00326E79: ;
    edi = ebx + 0x5C;

loc_00326E7C: ;
    eax = MEM32(edi + -4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = MEM32(edi);
    if ((_fa == 0)) goto loc_00326EBA; /* je: equal / zero */

loc_00326E84: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00326EB6; /* je: equal / zero */

loc_00326E89: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00326E98; /* je: equal / zero */

loc_00326E8C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326EC1; /* jne: not equal / not zero */

loc_00326E8F: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326E96u); RECOMP_ABI_CALL(0x003275B6u, sub_003275B6); /* call 0x003275B6 */

loc_00326E96: ;
    goto loc_00326EC1;

loc_00326E98: ;
    ecx = esi + esi * 2;
    if (((5) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((5) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((5) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebx + 0x14))) >> 32) & 1);
    ecx = ecx + MEM32(ebx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326EA6u); RECOMP_ABI_CALL(0x003284E4u, sub_003284E4); /* call 0x003284E4 */

loc_00326EA6: ;
    PUSH32(esp, esi);

loc_00326EA7: ;
    eax = MEM32(0x4E4084);
    eax = MEM32(eax);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x00326EB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326EB1u); } /* indirect call */
    }

loc_00326EB4: ;
    goto loc_00326EC1;

loc_00326EB6: ;
    PUSH32(esp, MEM32(esi));
    goto loc_00326EA7;

loc_00326EBA: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326EC1u); RECOMP_ABI_CALL(0x0032793Du, sub_0032793D); /* call 0x0032793D */

loc_00326EC1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(8)) >> 32) & 1);
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326E7C; /* jne: not equal / not zero */

loc_00326EC7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00326ECD
 * Original: 0x00326ECD - 0x00326ED1 (4 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326ECD(void)
{
    int _cf = 0; /* carry flag */

loc_00326ECD: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00326ED1
 * Original: 0x00326ED1 - 0x00326EEA (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326ED1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326ED1: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    edx = ecx;
    ecx = eax + eax * 2;
    if (((5) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((5) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((5) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(edx + 0x14))) >> 32) & 1);
    ecx = ecx + MEM32(edx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326EE7u); RECOMP_ABI_CALL(0x003280FAu, sub_003280FA); /* call 0x003280FA */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326EE7: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00326EEA
 * Original: 0x00326EEA - 0x00326F00 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326EEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326EEA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326EF5u); RECOMP_ABI_CALL(0x0032612Bu, sub_0032612B); /* call 0x0032612B */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326EF5: ;
    MEM32(esi + 0x64) = 4;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00326F00
 * Original: 0x00326F00 - 0x00326F41 (65 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326F00: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x64);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00326F12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326F0Fu); } /* indirect call */
    }

loc_00326F12: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00326F20; /* jne: not equal / not zero */

loc_00326F19: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326F20u); RECOMP_ABI_CALL(0x003275B6u, sub_003275B6); /* call 0x003275B6 */

loc_00326F20: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00326F39; /* jl: less (signed <) */

loc_00326F24: ;
    PUSH32(esp, MEM32(esp + 0x1C));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, MEM32(esp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326F37u); RECOMP_ABI_CALL(0x00327608u, sub_00327608); /* call 0x00327608 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326F37: ;
    ebx = eax;

loc_00326F39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}

/**
 * sub_00326F41
 * Original: 0x00326F41 - 0x00326F8C (75 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00326F41(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00326F41: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00326F5D; /* jne: not equal / not zero */

loc_00326F51: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00326F59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00326F56u); } /* indirect call */
    }

loc_00326F59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00326F86; /* jl: less (signed <) */

loc_00326F5D: ;
    eax = MEM32(edi);
    ecx = eax + eax * 2;
    if (((5) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((5) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((5) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(esi + 0x14))) >> 32) & 1);
    ecx = ecx + MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326F6Du); RECOMP_ABI_CALL(0x003284E4u, sub_003284E4); /* call 0x003284E4 */

loc_00326F6D: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax + eax * 2;
    PUSH32(esp, MEM32(ebp + 0xC));
    if (((5) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((5) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((5) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(esi + 0x14))) >> 32) & 1);
    ecx = ecx + MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326F86u); RECOMP_ABI_CALL(0x00328425u, sub_00328425); /* call 0x00328425 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00326F86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}

/**
 * sub_00326F8C
 * Original: 0x00326F8C - 0x00326FCA (62 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326F8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326F8C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x98);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00326FC5; /* jae: above or equal (unsigned >=) */

loc_00326F9B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326FA8u); RECOMP_ABI_CALL(0x00326CBCu, sub_00326CBC); /* call 0x00326CBC */

loc_00326FA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00326FC4; /* jne: not equal / not zero */

loc_00326FAC: ;
    MEM32(esi + edi * 8 + 0x18) = 5;
    eax = MEM32(esi + 0x98);
    MEM32(esi + eax * 8 + 0x1C) = ebx;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00326FC4: ;
    POP32(esp, ebx);

loc_00326FC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00326FCA
 * Original: 0x00326FCA - 0x00327008 (62 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326FCA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326FCA: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x98);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00327003; /* jae: above or equal (unsigned >=) */

loc_00326FD9: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00326FE6u); RECOMP_ABI_CALL(0x00326CBCu, sub_00326CBC); /* call 0x00326CBC */

loc_00326FE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00327002; /* jne: not equal / not zero */

loc_00326FEA: ;
    MEM32(esi + edi * 8 + 0x18) = 6;
    eax = MEM32(esi + 0x98);
    MEM32(esi + eax * 8 + 0x1C) = ebx;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00327002: ;
    POP32(esp, ebx);

loc_00327003: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00327008
 * Original: 0x00327008 - 0x00327054 (76 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327008(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327008: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327011u); RECOMP_ABI_CALL(0x003261BEu, sub_003261BE); /* call 0x003261BE */

loc_00327011: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00327048; /* jl: less (signed <) */

loc_00327017: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(0x4E409C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327029u); RECOMP_ABI_CALL(0x00326D11u, sub_00326D11); /* call 0x00326D11 */

loc_00327029: ;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    ebx = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x18;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    edi = esi + 0x58;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x98) = MEM32(esi + 0x98) & eax;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0032704F; /* jge: greater or equal (signed >=) */

loc_00327048: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0032704Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032704Cu); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_0032704F: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327054
 * Original: 0x00327054 - 0x0032709A (70 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327054(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327054: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327063u); RECOMP_ABI_CALL(0x00326C88u, sub_00326C88); /* call 0x00326C88 */

loc_00327063: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327086; /* je: equal / zero */

loc_00327067: ;
    eax = esi + 0x98;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00327095; /* jae: above or equal (unsigned >=) */

loc_00327074: ;
    MEM32(esi + ecx * 8 + 0x18) = 1;
    ecx = MEM32(eax);
    MEM32(esi + ecx * 8 + 0x1C) = edi;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00327095;

loc_00327086: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032708Du); RECOMP_ABI_CALL(0x00327699u, sub_00327699); /* call 0x00327699 */

loc_0032708D: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327095u); RECOMP_ABI_CALL(0x00326FCAu, sub_00326FCA); /* call 0x00326FCA */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327095: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_0032709A
 * Original: 0x0032709A - 0x0032710F (117 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032709A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032709A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0032710A; /* jae: above or equal (unsigned >=) */

loc_003270A9: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(edi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x64), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003270E2; /* jne: not equal / not zero */

loc_003270B4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003270BCu); RECOMP_ABI_CALL(0x00326CBCu, sub_00326CBC); /* call 0x00326CBC */

loc_003270BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003270D8; /* jne: not equal / not zero */

loc_003270C0: ;
    MEM32(esi + ebx * 8 + 0x18) = 4;
    eax = MEM32(esi + 0x98);
    MEM32(esi + eax * 8 + 0x1C) = edi;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003270D8: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003270E0u); RECOMP_ABI_CALL(0x00326FCAu, sub_00326FCA); /* call 0x00326FCA */
    _cf = g_eflags & 1u; /* callee carry */

loc_003270E0: ;
    goto loc_00327109;

loc_003270E2: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 5);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003270EBu); RECOMP_ABI_CALL(0x00326CBCu, sub_00326CBC); /* call 0x00326CBC */

loc_003270EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00327109; /* jne: not equal / not zero */

loc_003270EF: ;
    MEM32(esi + ebx * 8 + 0x18) = 5;
    eax = MEM32(esi + 0x98);
    ecx = MEM32(edi);
    MEM32(esi + eax * 8 + 0x1C) = ecx;
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00327109: ;
    POP32(esp, edi);

loc_0032710A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_0032710F
 * Original: 0x0032710F - 0x00327141 (50 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032710F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032710F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x64);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327122u); RECOMP_ABI_CALL(0x00327699u, sub_00327699); /* call 0x00327699 */

loc_00327122: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x64) = MEM32(esi + 0x64) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00327133; /* jne: not equal / not zero */

loc_0032712B: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327133u); RECOMP_ABI_CALL(0x0032709Au, sub_0032709A); /* call 0x0032709A */

loc_00327133: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032713Bu); RECOMP_ABI_CALL(0x00326163u, sub_00326163); /* call 0x00326163 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0032713B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00327141
 * Original: 0x00327141 - 0x00327193 (82 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00327141(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00327141: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x00327150u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032714Au); } /* indirect call */
    }

loc_00327150: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    esi = MEM32(ebp + 8);
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00327164; /* je: equal / zero */

loc_0032715C: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327164u); RECOMP_ABI_CALL(0x0032709Au, sub_0032709A); /* call 0x0032709A */

loc_00327164: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032716Bu); RECOMP_ABI_CALL(0x00327699u, sub_00327699); /* call 0x00327699 */

loc_0032716B: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00327181; /* jl: less (signed <) */

loc_00327171: ;
    eax = MEM32(esi);
    ecx = eax + eax * 2;
    if (((5) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((5) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((5) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(edi + 0x14))) >> 32) & 1);
    ecx = ecx + MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327181u); RECOMP_ABI_CALL(0x003284B3u, sub_003284B3); /* call 0x003284B3 */

loc_00327181: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x0032718Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327184u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_0032718A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_00327193
 * Original: 0x00327193 - 0x003271E4 (81 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327193(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327193: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003271BE; /* jbe: below or equal (unsigned <=) */

loc_0032719F: ;
    eax = MEM32(esi + 8);
    ebx = MEM32(eax + edi * 4);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003271ACu); RECOMP_ABI_CALL(0x00326C6Du, sub_00326C6D); /* call 0x00326C6D */

loc_003271AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003271B8; /* je: equal / zero */

loc_003271B0: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003271B8u); RECOMP_ABI_CALL(0x00327054u, sub_00327054); /* call 0x00327054 */

loc_003271B8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0032719F; /* jb: below (unsigned <) */

loc_003271BE: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003271C2: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM32(edi + eax + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax + 0x5C), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003271D4; /* jne: not equal / not zero */

loc_003271CC: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003271D4u); RECOMP_ABI_CALL(0x00326F8Cu, sub_00326F8C); /* call 0x00326F8C */

loc_003271D4: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x60)) >> 32) & 1);
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x180 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003271C2; /* jb: below (unsigned <) */

loc_003271E0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003271E4
 * Original: 0x003271E4 - 0x003271F1 (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003271E4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003271E4: ;
    eax = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003271F1
 * Original: 0x003271F1 - 0x003271FB (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003271F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003271F1: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(ecx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003271FAu); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003271FA: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003271FB
 * Original: 0x003271FB - 0x00327255 (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003271FB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003271FB: ;
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x24) = 1;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x78) = ecx;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00327255
 * Original: 0x00327255 - 0x0032725D (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327255(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327255: ;
    ecx = MEM32(ecx + 0x18);
    g_seh_ebp = ebp; sub_00327D89(); return; /* tail jmp 0x00327D89 */

}

/**
 * sub_0032725D
 * Original: 0x0032725D - 0x00327284 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032725D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032725D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327268u); RECOMP_ABI_CALL(0x00327E67u, sub_00327E67); /* call 0x00327E67 */

loc_00327268: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327280; /* je: equal / zero */

loc_0032726C: ;
    ecx = MEM32(esi + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327274u); RECOMP_ABI_CALL(0x00327C9Au, sub_00327C9A); /* call 0x00327C9A */

loc_00327274: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327280u); RECOMP_ABI_CALL(0x00328200u, sub_00328200); /* call 0x00328200 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327280: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00327284
 * Original: 0x00327284 - 0x00327291 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327284(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327284: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327290; /* je: equal / zero */

loc_0032728B: ;
    g_seh_ebp = ebp; sub_00327F1A(); return; /* tail jmp 0x00327F1A */

loc_00327290: ;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327291
 * Original: 0x00327291 - 0x0032729E (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327291(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327291: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032729D; /* je: equal / zero */

loc_00327298: ;
    g_seh_ebp = ebp; sub_00327F31(); return; /* tail jmp 0x00327F31 */

loc_0032729D: ;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0032729E
 * Original: 0x0032729E - 0x003272D9 (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032729E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032729E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003272D4; /* je: equal / zero */

loc_003272AB: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x003272B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003272ACu); } /* indirect call */
    }

loc_003272B2: ;
    ecx = MEM32(esi + 0x1C);
    SET_LO8(ebx, LO8(eax));
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x003272C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003272BDu); } /* indirect call */
    }

loc_003272C0: ;
    MEM32(esi + 0x1C) = edi;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x003272CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003272C8u); } /* indirect call */
    }

loc_003272CB: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x003272D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003272CDu); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_003272D3: ;
    POP32(esp, ebx);

loc_003272D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_003272D9
 * Original: 0x003272D9 - 0x00327313 (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003272D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003272D9: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003272ED; /* je: equal / zero */

loc_003272E3: ;
    MEM32(eax + 0x90) = 1;

loc_003272ED: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003272FE; /* je: equal / zero */

loc_003272F4: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x003272FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003272F7u); } /* indirect call */
    }

loc_003272FA: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003272FE: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032730F; /* je: equal / zero */

loc_00327305: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x0032730Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327308u); } /* indirect call */
    }

loc_0032730B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0032730F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327313
 * Original: 0x00327313 - 0x00327338 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327313(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327313: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x24) = 1;
    PUSH32(esp, MEM32(0x4465D4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327328u); RECOMP_ABI_CALL(0x0032729Eu, sub_0032729E); /* call 0x0032729E */

loc_00327328: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x28) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327338
 * Original: 0x00327338 - 0x00327356 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00327338(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00327338: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0032734C; /* jne: not equal / not zero */

loc_0032733E: ;
    eax = MEM32(ecx + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */ _fb = 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(3)) >> 32) & 1);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x28) = eax;

loc_0032734C: ;
    MEM32(ecx + 0x24) = 0;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00327356
 * Original: 0x00327356 - 0x00327387 (49 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327356(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00327356: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    ecx = eax + eax * 4;
    if (((7) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((7) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((7) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(esi + 0x10))) >> 32) & 1);
    ecx = ecx + MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(edx + 0x10) = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = 0x280;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00327387
 * Original: 0x00327387 - 0x003273B8 (49 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327387(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00327387: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    ecx = eax + eax * 4;
    if (((7) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((7) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((7) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(esi + 0x14))) >> 32) & 1);
    ecx = ecx + MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(edx + 0x10) = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = 0x280;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003273B8
 * Original: 0x003273B8 - 0x00327432 (122 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003273B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003273B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x3C));
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x4E4084);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = ebp + -60;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445DC4); PUSH32(esp, 0x003273D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003273CDu); } /* indirect call */
    }

loc_003273D3: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -28;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003273E1u); RECOMP_ABI_CALL(0x00327356u, sub_00327356); /* call 0x00327356 */

loc_003273E1: ;
    eax = MEM32(esi);
    ecx = MEM32(0x4E4084);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x28), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327405; /* je: equal / zero */

loc_003273F4: ;
    ecx = MEM32(edi);
    edx = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x00327405u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327402u); } /* indirect call */
    }

loc_00327405: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327413u); RECOMP_ABI_CALL(0x00327C29u, sub_00327C29); /* call 0x00327C29 */

loc_00327413: ;
    esi = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = ebp + -28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00327422u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032741Fu); } /* indirect call */
    }

loc_00327422: ;
    eax = ebp + -60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445DC0); PUSH32(esp, 0x0032742Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327426u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_0032742C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00327432
 * Original: 0x00327432 - 0x0032751D (235 bytes, 93 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00327432(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00327432: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    eax = ebp + -40;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327452u); RECOMP_ABI_CALL(0x00327387u, sub_00327387); /* call 0x00327387 */

loc_00327452: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0032745Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327457u); } /* indirect call */
    }

loc_0032745A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327518; /* je: equal / zero */

loc_00327462: ;
    ecx = MEM32(0x4E4084);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032747Fu); RECOMP_ABI_CALL(0x0032666Fu, sub_0032666F); /* call 0x0032666F */

loc_0032747F: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -4))) >> 32) & 1);
    eax = eax + MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    eax = MEM32(ebp + -8);
    edi = MEM32(ebp + -40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0x140;
    MEM32(ebp + -16) = edx;
    edx = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0x500;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003274D1; /* jae: above or equal (unsigned >=) */

loc_003274AD: ;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(edx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    edx = (uint32_t)(edx) >> ((2) & 31u);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = edx;
    MEM32(ebp + 8) = ebx;
    if ((_fa == 0)) goto loc_003274C6; /* je: equal / zero */

loc_003274B7: ;
    SET_LO16(edx, MEM16(eax + 2));
    MEM16(edi) = LO16(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003274B7; /* jne: not equal / not zero */

loc_003274C6: ;
    eax = MEM32(ebp + -8);
    ebx = 0x140;
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(MEM32(ebp + 8)));
    ebx = ebx - MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003274D1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_003274E4; /* jbe: below or equal (unsigned <=) */

loc_003274D5: ;
    SET_LO16(edx, MEM16(eax + 2));
    MEM16(edi) = LO16(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003274D5; /* jne: not equal / not zero */

loc_003274E4: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) goto loc_003274F7; /* jb: below (unsigned <) */

loc_003274ED: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    goto loc_00327506;

loc_003274F7: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + -12);
    eax = eax + ecx + -640;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }

loc_00327506: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x2C) = edx;
    esi = MEM32(esi + 8);
    eax = MEM32(esi);
    ecx = ebp + -40;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00327518u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327515u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00327518: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_0032751D
 * Original: 0x0032751D - 0x00327554 (55 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032751D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032751D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0032752Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032752Au); } /* indirect call */
    }

loc_0032752D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0032754C; /* jl: less (signed <) */

loc_00327533: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00327549; /* jne: not equal / not zero */

loc_00327539: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00327549; /* jne: not equal / not zero */

loc_0032753F: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327547u); RECOMP_ABI_CALL(0x0032729Eu, sub_0032729E); /* call 0x0032729E */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327547: ;
    goto loc_0032754C;

loc_00327549: ;
    MEM32(esi + 0x20) = edi;

loc_0032754C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00327554
 * Original: 0x00327554 - 0x0032755C (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327554(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327554: ;
    ecx = MEM32(ecx + 0x18);
    g_seh_ebp = ebp; sub_00327E22(); return; /* tail jmp 0x00327E22 */

}

/**
 * sub_0032755C
 * Original: 0x0032755C - 0x00327583 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032755C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032755C: ;
    eax = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi) = eax;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00327579; /* jne: not equal / not zero */

loc_0032756C: ;
    ecx = MEM32(ecx + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327574u); RECOMP_ABI_CALL(0x00327E36u, sub_00327E36); /* call 0x00327E36 */

loc_00327574: ;
    MEM32(esi + 4) = eax;
    goto loc_0032757D;

loc_00327579: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0032757D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00327583
 * Original: 0x00327583 - 0x003275B6 (51 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00327583(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00327583: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003275AD; /* jbe: below or equal (unsigned <=) */

loc_00327598: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebp + -4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x68);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003275ADu); RECOMP_ABI_CALL(0x00327D18u, sub_00327D18); /* call 0x00327D18 */

loc_003275AD: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x6C)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003275B6
 * Original: 0x003275B6 - 0x00327608 (82 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003275B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003275B6: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00327606; /* jne: not equal / not zero */

loc_003275BF: ;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x68), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327606; /* je: equal / zero */

loc_003275C5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003275CAu); RECOMP_ABI_CALL(0x00327583u, sub_00327583); /* call 0x00327583 */

loc_003275CA: ;
    PUSH32(esp, MEM32(esi + 0x6C));
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(esi + 0x68));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003275D8u); RECOMP_ABI_CALL(0x00327E1Au, sub_00327E1A); /* call 0x00327E1A */

loc_003275D8: ;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x003275DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003275D8u); } /* indirect call */
    }

loc_003275DE: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x68) = MEM32(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(eax));
    MEM32(esi + 0x64) = 4;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x003275F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003275EBu); } /* indirect call */
    }

loc_003275F1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x6C));
    eax = MEM32(0x4E4084);
    PUSH32(esp, MEM32(esi + 0x78));
    eax = MEM32(eax);
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x00327606u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327603u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00327606: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327608
 * Original: 0x00327608 - 0x00327699 (145 bytes, 56 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00327608(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00327608: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -8) = 0x80004005u;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x0032761Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327619u); } /* indirect call */
    }

loc_0032761F: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -1) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0032764C; /* je: equal / zero */

loc_00327629: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0x68) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x70) = eax;
    PUSH32(esp, 0x14);
    eax = ecx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x78) = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x74) = ecx;

loc_0032764C: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x00327655u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032764Fu); } /* indirect call */
    }

loc_00327655: ;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032768F; /* je: equal / zero */

loc_0032765A: ;
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x10);
    edx = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    PUSH32(esp, MEM32(esi + 0x70));
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, MEM32(esi + 0x68));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032767Eu); RECOMP_ABI_CALL(0x00327D99u, sub_00327D99); /* call 0x00327D99 */

loc_0032767E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x6C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0032768F; /* je: equal / zero */

loc_00327685: ;
    MEM32(esi + 0x64) = 1;
    MEM32(ebp + -8) = ebx;

loc_0032768F: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_00327699
 * Original: 0x00327699 - 0x003276D9 (64 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327699(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327699: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0x80004005u;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x003276A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003276A2u); } /* indirect call */
    }

loc_003276A8: ;
    edx = MEM32(esi + 0x64);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003276CA; /* je: equal / zero */

loc_003276B0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003276CA; /* je: equal / zero */

loc_003276B5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003276CA; /* je: equal / zero */

loc_003276B9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003276C3; /* je: equal / zero */

loc_003276BE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003276CC; /* jne: not equal / not zero */

loc_003276C3: ;
    MEM32(esi + 0x64) = 3;

loc_003276CA: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003276CC: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x003276D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003276CEu); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_003276D4: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003276D9
 * Original: 0x003276D9 - 0x00327752 (121 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003276D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003276D9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x3271E4;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    esi = ecx;
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003276EEu); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */

loc_003276EE: ;
    eax = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, ebx);
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    PUSH32(esp, 4);
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0xC);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x48) = edi;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327729u); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327729: ;
    eax = esi + 0x7C;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(esi + 0x88) = edi;
    MEM32(esi + 0x8C) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x90) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00327752
 * Original: 0x00327752 - 0x0032779A (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327752(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327752: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032775Bu); RECOMP_ABI_CALL(0x00326104u, sub_00326104); /* call 0x00326104 */

loc_0032775B: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x7C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327765u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_00327765: ;
    edi = 0x3271F1;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327778u); RECOMP_ABI_CALL(0x000121D0u, sub_000121D0); /* call 0x000121D0 */

loc_00327778: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x30));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327782u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_00327782: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032778Cu); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_0032778C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327797u); RECOMP_ABI_CALL(0x000121D0u, sub_000121D0); /* call 0x000121D0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327797: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0032779A
 * Original: 0x0032779A - 0x003277B1 (23 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032779A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032779A: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003277AE; /* jne: not equal / not zero */

loc_003277A1: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003277AEu); RECOMP_ABI_CALL(0x003273B8u, sub_003273B8); /* call 0x003273B8 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003277AE: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_003277B1
 * Original: 0x003277B1 - 0x003277C8 (23 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003277B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003277B1: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003277C5; /* jne: not equal / not zero */

loc_003277B8: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003277C5u); RECOMP_ABI_CALL(0x00327432u, sub_00327432); /* call 0x00327432 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003277C5: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_003277C8
 * Original: 0x003277C8 - 0x00327806 (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003277C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003277C8: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003277EC; /* jne: not equal / not zero */

loc_003277D2: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x500);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003277DEu); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_003277DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003277EC; /* jne: not equal / not zero */

loc_003277E5: ;
    edi = 0x8007000Eu;
    goto loc_003277FA;

loc_003277EC: ;
    ecx = MEM32(esi + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003277F4u); RECOMP_ABI_CALL(0x00327F48u, sub_00327F48); /* call 0x00327F48 */

loc_003277F4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00327801; /* jge: greater or equal (signed >=) */

loc_003277FA: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327801u); RECOMP_ABI_CALL(0x00327284u, sub_00327284); /* call 0x00327284 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327801: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327806
 * Original: 0x00327806 - 0x00327844 (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327806(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327806: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0032782A; /* jne: not equal / not zero */

loc_00327810: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0x500);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032781Cu); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_0032781C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0032782A; /* jne: not equal / not zero */

loc_00327823: ;
    edi = 0x8007000Eu;
    goto loc_00327838;

loc_0032782A: ;
    ecx = MEM32(esi + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327832u); RECOMP_ABI_CALL(0x00327FA5u, sub_00327FA5); /* call 0x00327FA5 */

loc_00327832: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0032783F; /* jge: greater or equal (signed >=) */

loc_00327838: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032783Fu); RECOMP_ABI_CALL(0x00327291u, sub_00327291); /* call 0x00327291 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0032783F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327844
 * Original: 0x00327844 - 0x00327864 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327844(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327844: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032784Cu); RECOMP_ABI_CALL(0x00327752u, sub_00327752); /* call 0x00327752 */

loc_0032784C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0032785E; /* je: equal / zero */

loc_00327853: ;
    PUSH32(esp, 0x801B);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032785Eu); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0032785E: ;
    eax = esi;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00327864
 * Original: 0x00327864 - 0x0032787E (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327864(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327864: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327873u); RECOMP_ABI_CALL(0x003272D9u, sub_003272D9); /* call 0x003272D9 */

loc_00327873: ;
    MEM32(esi + 0x24) = 1;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0032787E
 * Original: 0x0032787E - 0x003278C7 (73 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032787E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032787E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00327895: ;
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003278A1u); RECOMP_ABI_CALL(0x00327356u, sub_00327356); /* call 0x00327356 */

loc_003278A1: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    edx = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x003278B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003278ADu); } /* indirect call */
    }

loc_003278B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003278C0; /* jl: less (signed <) */

loc_003278B4: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00327895; /* jb: below (unsigned <) */

loc_003278BA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003278BC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_003278C0: ;
    eax = 0x80004005u;
    goto loc_003278BC;

}

/**
 * sub_003278C7
 * Original: 0x003278C7 - 0x0032793D (118 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003278C7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003278C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003278DC; /* jne: not equal / not zero */

loc_003278D8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00327932;

loc_003278DC: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x003278E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003278E1u); } /* indirect call */
    }

loc_003278E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003278FD; /* je: equal / zero */

loc_003278E8: ;
    ecx = MEM32(0x4E4084);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi));
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003278FDu); RECOMP_ABI_CALL(0x0032666Fu, sub_0032666F); /* call 0x0032666F */

loc_003278FD: ;
    PUSH32(esp, edi);

loc_003278FE: ;
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032790Au); RECOMP_ABI_CALL(0x00327387u, sub_00327387); /* call 0x00327387 */

loc_0032790A: ;
    edi = MEM32(ebp + -24);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = 0xA0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    edx = ebp + -24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x00327925u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327922u); } /* indirect call */
    }

loc_00327925: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00327936; /* jl: less (signed <) */

loc_00327929: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003278FE; /* jb: below (unsigned <) */

loc_0032792F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00327931: ;
    POP32(esp, edi);

loc_00327932: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_00327936: ;
    eax = 0x80004005u;
    goto loc_00327931;

}

/**
 * sub_0032793D
 * Original: 0x0032793D - 0x003279B0 (115 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032793D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032793D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003279AD; /* jne: not equal / not zero */

loc_0032794A: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0x6C);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00327971; /* jbe: below or equal (unsigned <=) */

loc_00327958: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebp + -4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x68);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032796Du); RECOMP_ABI_CALL(0x00327CB3u, sub_00327CB3); /* call 0x00327CB3 */

loc_0032796D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00327990; /* jl: less (signed <) */

loc_00327971: ;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x6C)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x70), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00327987; /* jbe: below or equal (unsigned <=) */

loc_0032797F: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x78) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003279AD; /* ja: above (unsigned >) */

loc_00327987: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032798Eu); RECOMP_ABI_CALL(0x00327699u, sub_00327699); /* call 0x00327699 */

loc_0032798E: ;
    goto loc_003279A6;

loc_00327990: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327997u); RECOMP_ABI_CALL(0x00327699u, sub_00327699); /* call 0x00327699 */

loc_00327997: ;
    eax = MEM32(0x4E4084);
    eax = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x003279A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003279A3u); } /* indirect call */
    }

loc_003279A6: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003279ADu); RECOMP_ABI_CALL(0x003275B6u, sub_003275B6); /* call 0x003275B6 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003279AD: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003279B0
 * Original: 0x003279B0 - 0x003279E8 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003279B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003279B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003279B8u); RECOMP_ABI_CALL(0x003272D9u, sub_003272D9); /* call 0x003272D9 */

loc_003279B8: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003279CA; /* je: equal / zero */

loc_003279BF: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003279C6u); RECOMP_ABI_CALL(0x00327844u, sub_00327844); /* call 0x00327844 */

loc_003279C6: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003279CA: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003279D4u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_003279D4: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003279E2u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_003279E2: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003279E8
 * Original: 0x003279E8 - 0x00327A80 (152 bytes, 62 insns)
 * Category: game_input
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003279E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003279E8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003279FC; /* je: equal / zero */

loc_003279F7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003279FCu); RECOMP_ABI_CALL(0x00327864u, sub_00327864); /* call 0x00327864 */

loc_003279FC: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x32779A);
    ebx = 0x4E4088;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x43CE28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327A17u); RECOMP_ABI_CALL(0x00444720u, sub_00444720); /* call 0x00444720 */

loc_00327A17: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00327A72; /* jl: less (signed <) */

loc_00327A1D: ;
    _fa = (uint32_t)(MEM32(0x4E409C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E409C), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00327A56; /* je: equal / zero */

loc_00327A25: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3277B1);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x43CE34);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327A3Eu); RECOMP_ABI_CALL(0x00444720u, sub_00444720); /* call 0x00444720 */

loc_00327A3E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00327A72; /* jl: less (signed <) */

loc_00327A44: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00327A56; /* je: equal / zero */

loc_00327A49: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327A50u); RECOMP_ABI_CALL(0x003278C7u, sub_003278C7); /* call 0x003278C7 */

loc_00327A50: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00327A72; /* jl: less (signed <) */

loc_00327A56: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00327A68; /* je: equal / zero */

loc_00327A5B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327A62u); RECOMP_ABI_CALL(0x0032787Eu, sub_0032787E); /* call 0x0032787E */

loc_00327A62: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00327A72; /* jl: less (signed <) */

loc_00327A68: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x28) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_00327A79; /* jge: greater or equal (signed >=) */

loc_00327A72: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327A79u); RECOMP_ABI_CALL(0x00327864u, sub_00327864); /* call 0x00327864 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327A79: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327A80
 * Original: 0x00327A80 - 0x00327AEF (111 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00327AD6; /* je: equal / zero */

loc_00327A89: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00327AC1; /* je: equal / zero */

loc_00327A8C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00327AEB; /* jne: not equal / not zero */

loc_00327A8F: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327A95u); RECOMP_ABI_CALL(0x00327864u, sub_00327864); /* call 0x00327864 */

loc_00327A95: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, edi);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00327AA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327AA0u); } /* indirect call */
    }

loc_00327AA3: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327AAAu); RECOMP_ABI_CALL(0x003279E8u, sub_003279E8); /* call 0x003279E8 */

loc_00327AAA: ;
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327AB4u); RECOMP_ABI_CALL(0x0032729Eu, sub_0032729E); /* call 0x0032729E */

loc_00327AB4: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, edi);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00327ABEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327ABBu); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00327ABE: ;
    POP32(esp, edi);
    goto loc_00327AEB;

loc_00327AC1: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327AC8u); RECOMP_ABI_CALL(0x003279E8u, sub_003279E8); /* call 0x003279E8 */

loc_00327AC8: ;
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327AD2u); RECOMP_ABI_CALL(0x0032729Eu, sub_0032729E); /* call 0x0032729E */

loc_00327AD2: ;
    PUSH32(esp, 0);
    goto loc_00327ADF;

loc_00327AD6: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327ADDu); RECOMP_ABI_CALL(0x00327864u, sub_00327864); /* call 0x00327864 */

loc_00327ADD: ;
    PUSH32(esp, 1);

loc_00327ADF: ;
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x00327AEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327AE8u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00327AEB: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00327AEF
 * Original: 0x00327AEF - 0x00327B90 (161 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327AEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327AEF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = 0x500;
    if (CMP_NE(_fa, _fb)) goto loc_00327B1E; /* jne: not equal / not zero */

loc_00327AFF: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327B07u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00327B07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00327B4C; /* je: equal / zero */

loc_00327B0E: ;
    eax = MEM32(0x4465D4);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(0x4465D4);
    MEM32(esi + 0x20) = eax;

loc_00327B1E: ;
    PUSH32(esp, 0x801B);
    PUSH32(esp, 0x94);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327B2Du); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00327B2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327B43; /* je: equal / zero */

loc_00327B31: ;
    ecx = MEM32(0x4E4084);
    PUSH32(esp, MEM32(ecx + 0x20));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327B41u); RECOMP_ABI_CALL(0x003276D9u, sub_003276D9); /* call 0x003276D9 */

loc_00327B41: ;
    goto loc_00327B45;

loc_00327B43: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00327B45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00327B53; /* jne: not equal / not zero */

loc_00327B4C: ;
    ebx = 0x8007000Eu;
    goto loc_00327B83;

loc_00327B53: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327B5Au); RECOMP_ABI_CALL(0x00327EE8u, sub_00327EE8); /* call 0x00327EE8 */

loc_00327B5A: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00327B83; /* jl: less (signed <) */

loc_00327B60: ;
    eax = MEM32(0x4E4084);
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327B7F; /* je: equal / zero */

loc_00327B6B: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327B73u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00327B73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00327B7F; /* jne: not equal / not zero */

loc_00327B7A: ;
    ebx = 0x8007000Eu;

loc_00327B7F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00327B8A; /* jge: greater or equal (signed >=) */

loc_00327B83: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327B8Au); RECOMP_ABI_CALL(0x003279B0u, sub_003279B0); /* call 0x003279B0 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327B8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327B90
 * Original: 0x00327B90 - 0x00327BB3 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00327B90: ;
    edx = ecx;
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x15);
    POP32(esp, ecx);
    MEM8(edx) = LO8(eax);
    MEM16(edx + 2) = LO16(eax);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    edi = edx + 0x14;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00327BB3
 * Original: 0x00327BB3 - 0x00327BC9 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327BB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327BB3: ;
    PUSH32(esp, esi);
    esi = ecx;
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327BC1u); RECOMP_ABI_CALL(0x00327B90u, sub_00327B90); /* call 0x00327B90 */

loc_00327BC1: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esi;
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327BC9
 * Original: 0x00327BC9 - 0x00327C01 (56 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327BC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327BC9: ;
    eax = MEM32(esp + 8);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x218A0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327BDCu); RECOMP_ABI_CALL(0x00321FBDu, sub_00321FBD); /* call 0x00321FBD */

loc_00327BDC: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327BFC; /* je: equal / zero */

loc_00327BE2: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);

loc_00327BFC: ;
    eax = edx;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_00327C01
 * Original: 0x00327C01 - 0x00327C29 (40 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327C01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327C01: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327C26; /* je: equal / zero */

loc_00327C08: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327C17; /* je: equal / zero */

loc_00327C10: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x218A0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00327C1C;

loc_00327C17: ;
    eax = 0x218A2000;

loc_00327C1C: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327C26u); RECOMP_ABI_CALL(0x0032205Du, sub_0032205D); /* call 0x0032205D */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327C26: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_00327C29
 * Original: 0x00327C29 - 0x00327C59 (48 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327C29(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00327C29: ;
    eax = ecx;
    ecx = MEM32(eax + 0x18);
    edx = ecx + ecx * 2;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + edx * 4);
    ecx = 0xA0;
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
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(eax + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(eax + 0x18) = ecx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00327C59
 * Original: 0x00327C59 - 0x00327C9A (65 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327C59(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00327C59: ;
    eax = ecx;
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, esi);
    edx = edx + edx * 2;
    esi = MEM32(eax + edx * 4);
    edx = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
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
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 0x3C);
    MEM32(eax + 0x28) = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x3C) = ecx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00327C9A
 * Original: 0x00327C9A - 0x00327CB3 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327C9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327C9A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x30));
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, MEM32(esi + 0x28));
    PUSH32(esp, MEM32(esi + 0x24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327CAEu); RECOMP_ABI_CALL(0x0032890Cu, sub_0032890C); /* call 0x0032890C */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327CAE: ;
    eax = MEM32(esi + 0x30);
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327CB3
 * Original: 0x00327CB3 - 0x00327D18 (101 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327CB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327CB3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x00327CBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327CB8u); } /* indirect call */
    }

loc_00327CBE: ;
    edx = MEM32(ebx + 0x8C);
    edi = MEM32(ebx + 0x7C);
    ecx = edx + edx * 2 + 0x15;
    ecx = MEM32(ebx + ecx * 4);
    edx = edx + edx * 2;
    esi = MEM32(ebx + edx * 4 + 0x4C);
    edx = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = MEM32(ebx + 0x8C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x8C) = ecx;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x00327CFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327CF5u); } /* indirect call */
    }

loc_00327CFB: ;
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = MEM32(ebx + 0x48);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(ebx + 0x7C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327D12u); RECOMP_ABI_CALL(0x00328A9Au, sub_00328A9A); /* call 0x00328A9A */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327D12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_00327D18
 * Original: 0x00327D18 - 0x00327D20 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327D18(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327D18: ;
    ecx = MEM32(ecx + 0x48);
    g_seh_ebp = ebp; sub_00328B07(); return; /* tail jmp 0x00328B07 */

}

/**
 * sub_00327D20
 * Original: 0x00327D20 - 0x00327D3C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327D20: ;
    _fa = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x44), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327D30; /* je: equal / zero */

loc_00327D26: ;
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(ecx + 0x40);
    MEM32(eax + 0xC) = ecx;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_00327D30: ;
    PUSH32(esp, MEM32(ecx + 0x24));
    ecx = MEM32(ecx + 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327D3Bu); RECOMP_ABI_CALL(0x00328A1Au, sub_00328A1A); /* call 0x00328A1A */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327D3B: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327D3C
 * Original: 0x00327D3C - 0x00327D89 (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327D3C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327D3C: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327D44u); RECOMP_ABI_CALL(0x00327C59u, sub_00327C59); /* call 0x00327C59 */

loc_00327D44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327D85; /* je: equal / zero */

loc_00327D48: ;
    eax = MEM32(ebx + 0x88);
    ecx = MEM32(ebx + 0x2C);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x24);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    edi = MEM32(ebx + eax * 4 + 0x4C);
    eax = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = eax;
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
    eax = MEM32(ebx + 0x88);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(ebx + 0x88) = eax;
    eax = MEM32(ebx + 0x90);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_00327D85: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327D89
 * Original: 0x00327D89 - 0x00327D99 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327D89(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00327D89: ;
    eax = MEM32(ecx + 0x3C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x3C) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00327D99
 * Original: 0x00327D99 - 0x00327E1A (129 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00327D99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00327D99: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x90));
    ecx = MEM32(esi + 0x48);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327DADu); RECOMP_ABI_CALL(0x00328C3Eu, sub_00328C3E); /* call 0x00328C3E */

loc_00327DAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00327E10; /* jl: less (signed <) */

loc_00327DB1: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327DBFu); RECOMP_ABI_CALL(0x00328B78u, sub_00328B78); /* call 0x00328B78 */

loc_00327DBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00327E0B; /* jl: less (signed <) */

loc_00327DC6: ;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x00327DCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327DC6u); } /* indirect call */
    }

loc_00327DCC: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x88) = MEM32(esi + 0x88) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x88)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x8C) = MEM32(esi + 0x8C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x8C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 4);
    edx = esi + 0x4C;
    POP32(esp, esi);
    PUSH32(esp, ebx);
    MEM8(ebp + 0xF) = LO8(eax);
    PUSH32(esp, edi);

loc_00327DE5: ;
    ecx = MEM32(edx + 8);
    edi = MEM32(edx);
    ebx = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xC)) >> 32) & 1);
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    if ((_fa != 0)) goto loc_00327DE5; /* jne: not equal / not zero */

loc_00327E00: ;
    SET_LO8(ecx, MEM8(ebp + 0xF));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x00327E09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00327E03u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00327E09: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00327E0B: ;
    eax = MEM32(ebp + 8);
    goto loc_00327E15;

loc_00327E10: ;
    eax = 0x80004005u;

loc_00327E15: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_00327E1A
 * Original: 0x00327E1A - 0x00327E22 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327E1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327E1A: ;
    ecx = MEM32(ecx + 0x48);
    g_seh_ebp = ebp; sub_00328C2A(); return; /* tail jmp 0x00328C2A */

}

/**
 * sub_00327E22
 * Original: 0x00327E22 - 0x00327E36 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327E22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327E22: ;
    ecx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00327E31; /* jne: not equal / not zero */

loc_00327E29: ;
    eax = 0x80004005u;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

loc_00327E31: ;
    g_seh_ebp = ebp; sub_003289A5(); return; /* tail jmp 0x003289A5 */

}

/**
 * sub_00327E36
 * Original: 0x00327E36 - 0x00327E42 (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327E36(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00327E36: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00327E3E; /* jne: not equal / not zero */

loc_00327E3D: ;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

loc_00327E3E: ;
    eax = MEM32(eax + 0xC);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00327E42
 * Original: 0x00327E42 - 0x00327E67 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00327E42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327E42: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x21);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esi + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327E54u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00327E54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi) = eax;
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00327E62; /* jne: not equal / not zero */

loc_00327E5B: ;
    eax = 0x8007000Eu;
    goto loc_00327E64;

loc_00327E62: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00327E64: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00327E67
 * Original: 0x00327E67 - 0x00327EA8 (65 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327E67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327E67: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327E6Fu); RECOMP_ABI_CALL(0x00327C59u, sub_00327C59); /* call 0x00327C59 */

loc_00327E6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327EA4; /* je: equal / zero */

loc_00327E73: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327E7Au); RECOMP_ABI_CALL(0x00327D20u, sub_00327D20); /* call 0x00327D20 */

loc_00327E7A: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327E87; /* je: equal / zero */

loc_00327E81: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00327E9F; /* jne: not equal / not zero */

loc_00327E87: ;
    ecx = MEM32(esi + 0x2C);
    edx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_00327E9F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((_fb != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_00327EA4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327EA8
 * Original: 0x00327EA8 - 0x00327EC8 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327EA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327EA8: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327EB0u); RECOMP_ABI_CALL(0x003288C5u, sub_003288C5); /* call 0x003288C5 */

loc_00327EB0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00327EC2; /* je: equal / zero */

loc_00327EB7: ;
    PUSH32(esp, 0x8016);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327EC2u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327EC2: ;
    eax = esi;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00327EC8
 * Original: 0x00327EC8 - 0x00327EE8 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327EC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327EC8: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327ED0u); RECOMP_ABI_CALL(0x00328A86u, sub_00328A86); /* call 0x00328A86 */

loc_00327ED0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00327EE2; /* je: equal / zero */

loc_00327ED7: ;
    PUSH32(esp, 0x8028);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327EE2u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327EE2: ;
    eax = esi;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00327EE8
 * Original: 0x00327EE8 - 0x00327F1A (50 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327EE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327EE8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edi;
    esi = 0x280;

loc_00327EF7: ;
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327EFFu); RECOMP_ABI_CALL(0x00327E42u, sub_00327E42); /* call 0x00327E42 */

loc_00327EFF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00327F15; /* jl: less (signed <) */

loc_00327F03: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00327EF7; /* jb: below (unsigned <) */

loc_00327F0C: ;
    PUSH32(esp, esi);
    ecx = edi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327F15u); RECOMP_ABI_CALL(0x00327E42u, sub_00327E42); /* call 0x00327E42 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327F15: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327F1A
 * Original: 0x00327F1A - 0x00327F31 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327F1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327F1A: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327F2F; /* je: equal / zero */

loc_00327F24: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327F2Bu); RECOMP_ABI_CALL(0x00327EA8u, sub_00327EA8); /* call 0x00327EA8 */

loc_00327F2B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00327F2F: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327F31
 * Original: 0x00327F31 - 0x00327F48 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327F31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327F31: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327F46; /* je: equal / zero */

loc_00327F3B: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327F42u); RECOMP_ABI_CALL(0x00327EC8u, sub_00327EC8); /* call 0x00327EC8 */

loc_00327F42: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x48) = MEM32(esi + 0x48) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00327F46: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327F48
 * Original: 0x00327F48 - 0x00327FA5 (93 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327F48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327F48: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00327FA0; /* jne: not equal / not zero */

loc_00327F53: ;
    PUSH32(esp, 0x8016);
    PUSH32(esp, 0x70);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327F5Fu); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00327F5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00327F6C; /* je: equal / zero */

loc_00327F63: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327F6Au); RECOMP_ABI_CALL(0x00327BB3u, sub_00327BB3); /* call 0x00327BB3 */

loc_00327F6A: ;
    goto loc_00327F6E;

loc_00327F6C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00327F6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00327F7C; /* jne: not equal / not zero */

loc_00327F75: ;
    edi = 0x8007000Eu;
    goto loc_00327F99;

loc_00327F7C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327F83u); RECOMP_ABI_CALL(0x003289F0u, sub_003289F0); /* call 0x003289F0 */

loc_00327F83: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00327F99; /* jl: less (signed <) */

loc_00327F89: ;
    PUSH32(esp, 0xA);
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327F93u); RECOMP_ABI_CALL(0x00327E42u, sub_00327E42); /* call 0x00327E42 */

loc_00327F93: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00327FA0; /* jge: greater or equal (signed >=) */

loc_00327F99: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327FA0u); RECOMP_ABI_CALL(0x00327F1Au, sub_00327F1A); /* call 0x00327F1A */
    _cf = g_eflags & 1u; /* callee carry */

loc_00327FA0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00327FA5
 * Original: 0x00327FA5 - 0x00328020 (123 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327FA5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327FA5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032801A; /* jne: not equal / not zero */

loc_00327FB1: ;
    PUSH32(esp, 0x8028);
    PUSH32(esp, 0x184);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327FC0u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00327FC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00327FC8; /* je: equal / zero */

loc_00327FC4: ;
    MEM32(eax) = edi;
    goto loc_00327FCA;

loc_00327FC8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00327FCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esi + 0x48) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00327FDA; /* jne: not equal / not zero */

loc_00327FD3: ;
    edi = 0x8007000Eu;
    goto loc_00328011;

loc_00327FDA: ;
    MEM32(esp + 0x10) = edi;
    ebp = esi + 0x4C;
    ebx = 0x280;

loc_00327FE6: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00327FEEu); RECOMP_ABI_CALL(0x00327E42u, sub_00327E42); /* call 0x00327E42 */

loc_00327FEE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00328011; /* jl: less (signed <) */

loc_00327FF4: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0xC)) >> 32) & 1);
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00327FE6; /* jb: below (unsigned <) */

loc_00328002: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x7C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032800Bu); RECOMP_ABI_CALL(0x00327E42u, sub_00327E42); /* call 0x00327E42 */

loc_0032800B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00328018; /* jge: greater or equal (signed >=) */

loc_00328011: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328018u); RECOMP_ABI_CALL(0x00327F31u, sub_00327F31); /* call 0x00327F31 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00328018: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0032801A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00328020
 * Original: 0x00328020 - 0x0032804D (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328020: ;
    _fa = (uint32_t)(MEM32(0x4E40A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E40A0), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032804C; /* je: equal / zero */

loc_00328029: ;
    edx = 0;
    ecx = 0x4E40A0;
    eax = MEM32(ecx);

loc_00328035: ;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    if ((_fa != _fb)) goto loc_00328035; /* jne: not equal / not zero */

loc_0032803A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032804C; /* je: equal / zero */

loc_0032803E: ;
    ecx = eax + -24576;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445DC8); PUSH32(esp, 0x0032804Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00328046u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_0032804C: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0032804D
 * Original: 0x0032804D - 0x0032809E (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032804D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032804D: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(0x4E40A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E40A0), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00328099; /* jne: not equal / not zero */

loc_00328058: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x6000);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445DCC); PUSH32(esp, 0x00328065u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032805Fu); } /* indirect call */
    }

loc_00328065: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00328076; /* jne: not equal / not zero */

loc_0032806F: ;
    eax = 0x8007000Eu;
    goto loc_0032809B;

loc_00328076: ;
    eax = 0;
    ecx = 0x4E40A0;
    edx = MEM32(esp + 4);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00328099; /* je: equal / zero */

loc_0032808B: ;
    eax = esi + -24576;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445DC8); PUSH32(esp, 0x00328099u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00328093u); } /* indirect call */
    }

loc_00328099: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0032809B: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0032809E
 * Original: 0x0032809E - 0x003280FA (92 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032809E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032809E: ;
    eax = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax + 0x9C;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = 0xFFFF;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x98) = 1;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(eax + 0xA4) = ecx;
    MEM32(eax + 0xA8) = ecx;
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x94) = ecx;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_003280FA
 * Original: 0x003280FA - 0x00328140 (70 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003280FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003280FA: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032810C; /* je: equal / zero */

loc_00328107: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032810Cu); RECOMP_ABI_CALL(0x00329524u, sub_00329524); /* call 0x00329524 */

loc_0032810C: ;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x14) = edi;
    edi = MEM32(esi + 0x20);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    edi = MEM32(esi + 0x24);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = esi;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x50) = eax;
    edi = esi + 0x28;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00328140
 * Original: 0x00328140 - 0x003281A0 (96 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00328140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328140: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00328182; /* je: equal / zero */

loc_00328151: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032815Bu); RECOMP_ABI_CALL(0x0041C49Du, sub_0041C49D); /* call 0x0041C49D */

loc_0032815B: ;
    MEM32(ebp + -4) = edi;

loc_0032815E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328163u); RECOMP_ABI_CALL(0x0041C4B5u, sub_0041C4B5); /* call 0x0041C4B5 */

loc_00328163: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    edx = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x00328170u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032816Du); } /* indirect call */
    }

loc_00328170: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -2), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0032815E; /* jne: not equal / not zero */

loc_00328176: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 4); PUSH32(esp, 0x0032817Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032817Cu); } /* indirect call */
    }

loc_0032817F: ;
    MEM32(esi + 0x18) = edi;

loc_00328182: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032818Cu); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_0032818C: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x3C));
    MEM32(esi + 0x1C) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328199u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00328199: ;
    MEM32(esi + 0x3C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003281A0
 * Original: 0x003281A0 - 0x003281C0 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003281A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003281A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003281A8u); RECOMP_ABI_CALL(0x0032988Au, sub_0032988A); /* call 0x0032988A */

loc_003281A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003281BA; /* je: equal / zero */

loc_003281AF: ;
    PUSH32(esp, 0x8017);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003281BAu); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003281BA: ;
    eax = esi;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_003281C0
 * Original: 0x003281C0 - 0x003281E0 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003281C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003281C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003281C8u); RECOMP_ABI_CALL(0x003292BBu, sub_003292BB); /* call 0x003292BB */

loc_003281C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003281DA; /* je: equal / zero */

loc_003281CF: ;
    PUSH32(esp, 0x8024);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003281DAu); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003281DA: ;
    eax = esi;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_003281E0
 * Original: 0x003281E0 - 0x00328200 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003281E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003281E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003281E8u); RECOMP_ABI_CALL(0x00329995u, sub_00329995); /* call 0x00329995 */

loc_003281E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003281FA; /* je: equal / zero */

loc_003281EF: ;
    PUSH32(esp, 0x8029);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003281FAu); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003281FA: ;
    eax = esi;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00328200
 * Original: 0x00328200 - 0x00328235 (53 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328200: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xA);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    edi = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0032822E; /* jbe: below or equal (unsigned <=) */

loc_00328215: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = eax;

loc_0032821C: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328225u); RECOMP_ABI_CALL(0x00329726u, sub_00329726); /* call 0x00329726 */

loc_00328225: ;
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xA)) >> 32) & 1);
    esi = esi + 0xA;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    if ((_fa != 0)) goto loc_0032821C; /* jne: not equal / not zero */

loc_0032822D: ;
    POP32(esp, ebx);

loc_0032822E: ;
    POP32(esp, edi);
    eax = ecx;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_00328235
 * Original: 0x00328235 - 0x0032826D (56 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328235(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328235: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 6);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x10);
    ecx = eax + eax * 4;
    if (((6) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((6) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((6) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(esi + 0x1C))) >> 32) & 1);
    ecx = ecx + MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x50);
    MEM32(edx) = ecx;
    edi = MEM32(edx);
    MEM32(edx + 0x10) = eax;
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 4) = 0x140;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032826D
 * Original: 0x0032826D - 0x00328293 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032826D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032826D: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328280u); RECOMP_ABI_CALL(0x0032961Eu, sub_0032961E); /* call 0x0032961E */

loc_00328280: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0032828D; /* jl: less (signed <) */

loc_00328284: ;
    MEM32(esi + 0x48) = 1;
    goto loc_00328290;

loc_0032828D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(edi) = MEM32(edi) & 0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00328290: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00328293
 * Original: 0x00328293 - 0x003282AD (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328293(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328293: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x24));
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003282A4u); RECOMP_ABI_CALL(0x0032989Du, sub_0032989D); /* call 0x0032989D */
    _cf = g_eflags & 1u; /* callee carry */

loc_003282A4: ;
    MEM32(esi + 0x4C) = 1;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003282AD
 * Original: 0x003282AD - 0x00328366 (185 bytes, 72 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003282AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003282AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x5C), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00328361; /* jne: not equal / not zero */

loc_003282C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003282CEu); RECOMP_ABI_CALL(0x00328235u, sub_00328235); /* call 0x00328235 */

loc_003282CE: ;
    eax = MEM32(ebx + 0x58);
    ecx = MEM32(ebp + -20);
    edi = MEM32(ebp + -24);
    esi = eax + eax * 4;
    eax = ecx;
    if (((6) & 31u)) _cf = (int)(((uint32_t)(esi) >> ((32 - (((6) & 31u))) & 31u)) & 1u);
    esi = (uint32_t)(esi) << ((6) & 31u);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(MEM32(ebx + 0x24))) >> 32) & 1);
    esi = esi + MEM32(ebx + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    ecx = eax;
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
    eax = MEM32(ebx + 0x58);
    PUSH32(esp, 3);
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(ebx + 0x18);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(ebx + 0x58) = edx;
    ecx = MEM32(eax);
    edx = ebp + -24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x0032830Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00328309u); } /* indirect call */
    }

loc_0032830C: ;
    _fa = (uint32_t)(MEM32(ebx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x58), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032835F; /* jne: not equal / not zero */

loc_00328311: ;
    edi = MEM32(ebx + 0x24);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445DC4); PUSH32(esp, 0x00328327u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00328321u); } /* indirect call */
    }

loc_00328327: ;
    ecx = MEM32(ebx + 0x54);
    PUSH32(esp, 0x3C0);
    PUSH32(esp, MEM32(ebx + 0x24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328337u); RECOMP_ABI_CALL(0x003299A9u, sub_003299A9); /* call 0x003299A9 */

loc_00328337: ;
    edi = eax;
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445DC0); PUSH32(esp, 0x00328343u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032833Du); } /* indirect call */
    }

loc_00328343: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032835C; /* jne: not equal / not zero */

loc_00328348: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 0x18));
    MEM32(ebx + 0x5C) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032835Au); RECOMP_ABI_CALL(0x0041C49Du, sub_0041C49D); /* call 0x0041C49D */
    _cf = g_eflags & 1u; /* callee carry */

loc_0032835A: ;
    goto loc_0032835F;

loc_0032835C: ;
    MEM32(ebx + 0x58) = esi;

loc_0032835F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00328361: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00328366
 * Original: 0x00328366 - 0x00328398 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328366(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328366: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328371u); RECOMP_ABI_CALL(0x0032905Eu, sub_0032905E); /* call 0x0032905E */

loc_00328371: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00328396; /* je: equal / zero */

loc_00328375: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    POP32(esp, ecx);
    edi = esi + 0x140;
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
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032838Cu); RECOMP_ABI_CALL(0x0032826Du, sub_0032826D); /* call 0x0032826D */

loc_0032838C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00328293(); return; /* tail jmp 0x00328293 */

loc_00328396: ;
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00328398
 * Original: 0x00328398 - 0x00328425 (141 bytes, 56 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00328398(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328398: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;

loc_003283A6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003283ABu); RECOMP_ABI_CALL(0x0041C4B5u, sub_0041C4B5); /* call 0x0041C4B5 */

loc_003283AB: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    edx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x003283B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003283B5u); } /* indirect call */
    }

loc_003283B8: ;
    _fa = (uint32_t)(MEM8(ebp + -6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -6), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_003283A6; /* jne: not equal / not zero */

loc_003283BE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003283C3u); RECOMP_ABI_CALL(0x0041C4B5u, sub_0041C4B5); /* call 0x0041C4B5 */

loc_003283C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003283CDu); RECOMP_ABI_CALL(0x0041C48Eu, sub_0041C48E); /* call 0x0041C48E */

loc_003283CD: ;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x003283D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003283CDu); } /* indirect call */
    }

loc_003283D3: ;
    edi = MEM32(esi + 0x1C);
    MEM8(ebp + -1) = LO8(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003283E4: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    edx = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x003283F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003283EEu); } /* indirect call */
    }

loc_003283F1: ;
    _fa = (uint32_t)(MEM8(ebp + -8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00328412; /* je: equal / zero */

loc_003283F7: ;
    PUSH32(esp, edi);
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328403u); RECOMP_ABI_CALL(0x00328235u, sub_00328235); /* call 0x00328235 */

loc_00328403: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = ebp + -32;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x00328412u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032840Fu); } /* indirect call */
    }

loc_00328412: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003283E4; /* jb: below (unsigned <) */

loc_00328418: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x00328421u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032841Bu); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00328421: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00328425
 * Original: 0x00328425 - 0x003284B3 (142 bytes, 53 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00328425(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328425: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(esi + 0x54);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032843Du); RECOMP_ABI_CALL(0x00329C12u, sub_00329C12); /* call 0x00329C12 */

loc_0032843D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003284AB; /* jl: less (signed <) */

loc_00328443: ;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x0032844Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00328444u); } /* indirect call */
    }

loc_0032844A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 2);
    MEM8(ebp + 0xB) = LO8(eax);
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00328474; /* je: equal / zero */

loc_00328456: ;
    eax = MEM32(esi + 0x44);
    MEM32(ebp + -8) = edi;
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    eax = ebp + -8;
    MEM32(ebp + -16) = 1;
    MEM32(ebp + -12) = eax;
    ecx = ebp + -16;
    goto loc_00328477;

loc_00328474: ;
    ecx = esi + 0x40;

loc_00328477: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328481u); RECOMP_ABI_CALL(0x0041CFD9u, sub_0041CFD9); /* call 0x0041CFD9 */

loc_00328481: ;
    SET_LO8(ecx, MEM8(ebp + 0xB));
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x58) = MEM32(esi + 0x58) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x00328490u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032848Au); } /* indirect call */
    }

loc_00328490: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003284AA; /* jl: less (signed <) */

loc_00328494: ;
    MEM32(esi + 0x5C) = edi;
    edi = MEM32(esi + 0x24);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003284AAu); RECOMP_ABI_CALL(0x00328398u, sub_00328398); /* call 0x00328398 */
    _cf = g_eflags & 1u; /* callee carry */

loc_003284AA: ;
    POP32(esp, edi);

loc_003284AB: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_003284B3
 * Original: 0x003284B3 - 0x003284E4 (49 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003284B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003284B3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x003284BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003284B7u); } /* indirect call */
    }

loc_003284BD: ;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5C), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ebx, LO8(eax));
    if (CMP_NE(_fa, _fb)) goto loc_003284DA; /* jne: not equal / not zero */

loc_003284C5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x18));
    MEM32(esi + 0x5C) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003284DAu); RECOMP_ABI_CALL(0x0041C49Du, sub_0041C49D); /* call 0x0041C49D */

loc_003284DA: ;
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ebx));
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x445CEC)); return; /* indirect tail jmp */

}

/**
 * sub_003284E4
 * Original: 0x003284E4 - 0x003284FA (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003284E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003284E4: ;
    _fa = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x5C), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003284F9; /* jne: not equal / not zero */

loc_003284EA: ;
    MEM32(ecx + 0x5C) = 4;
    ecx = MEM32(ecx + 0x54);
    g_seh_ebp = ebp; sub_00329995(); return; /* tail jmp 0x00329995 */

loc_003284F9: ;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003284FA
 * Original: 0x003284FA - 0x00328544 (74 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003284FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003284FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -24;
    PUSH32(esp, eax);
    ebx = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328511u); RECOMP_ABI_CALL(0x00328235u, sub_00328235); /* call 0x00328235 */

loc_00328511: ;
    ecx = MEM32(ebp + -20);
    esi = MEM32(ebx + 0x24);
    edi = MEM32(ebp + -24);
    eax = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x140)) >> 32) & 1);
    esi = esi + 0x140;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = eax;
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
    ebx = MEM32(ebx + 0x18);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0032853Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032853Au); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_0032853D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00328544
 * Original: 0x00328544 - 0x0032855B (23 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328544(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328544: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00328558; /* jne: not equal / not zero */

loc_0032854B: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328558u); RECOMP_ABI_CALL(0x003284FAu, sub_003284FA); /* call 0x003284FA */
    _cf = g_eflags & 1u; /* callee carry */

loc_00328558: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_0032855B
 * Original: 0x0032855B - 0x00328572 (23 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032855B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032855B: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0032856F; /* jne: not equal / not zero */

loc_00328562: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032856Fu); RECOMP_ABI_CALL(0x003282ADu, sub_003282AD); /* call 0x003282AD */
    _cf = g_eflags & 1u; /* callee carry */

loc_0032856F: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_00328572
 * Original: 0x00328572 - 0x003286B2 (320 bytes, 115 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00328572(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328572: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM16(ebp + -20) = MEM16(ebp + -20) & ((0) & 0xFFFFu);
    _fa = (uint32_t)(MEM16(ebp + -20)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -44) = MEM32(ebp + -44) & 0;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + -18;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -40;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x21);
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((3) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003285A6u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_003285A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x3C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003285B7; /* jne: not equal / not zero */

loc_003285AD: ;
    edi = 0x8007000Eu;
    goto loc_003286AA;

loc_003285B7: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx);
    MEM32(esi + 0x40) = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x44) = eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003285ED; /* jbe: below or equal (unsigned <=) */

loc_003285C9: ;
    edx = MEM32(ebx + 4);
    edi = MEM32(esi + 0x3C);
    eax = ecx;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((3) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + edx);
    MEM32(eax + edi) = edx;
    edx = MEM32(ebx + 4);
    edi = MEM32(esi + 0x3C);
    edx = MEM32(edx + eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + eax + 4) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003285C9; /* jb: below (unsigned <) */

loc_003285ED: ;
    eax = MEM32(ebp + 0x10);
    edi = eax + eax * 4;
    PUSH32(esp, 0x21);
    if (((6) & 31u)) _cf = (int)(((uint32_t)(edi) >> ((32 - (((6) & 31u))) & 31u)) & 1u);
    edi = (uint32_t)(edi) << ((6) & 31u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003285FEu); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_003285FE: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x24) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00328611; /* jne: not equal / not zero */

loc_00328607: ;
    edi = 0x8007000Eu;
    goto loc_003286A9;

loc_00328611: ;
    ecx = edi;
    edi = edx;
    edx = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    PUSH32(esp, 0x21);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x280);
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328631u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00328631: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00328607; /* je: equal / zero */

loc_00328638: ;
    _cf = 0; /* logical op clears CF */
    MEM16(ebp + -4) = MEM16(ebp + -4) & ((0) & 0xFFFFu);
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, 2);
    POP32(esp, eax);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = ebp + -20;
    MEM16(ebp + -18) = 1;
    MEM32(ebp + -16) = 0x1F40;
    MEM16(ebp + -6) = 0x10;
    MEM16(ebp + -8) = LO16(eax);
    MEM32(ebp + -12) = 0x3E80;
    MEM16(ebp + -20) = 1;
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -36) = ecx;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -44) = 0x40000000;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -32) = 0x32855B;
    if (CMP_A(_fa, _fb)) goto loc_0032868D; /* ja: above (unsigned >) */

loc_00328686: ;
    MEM32(ebp + -32) = 0x328544;

loc_0032868D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x18)) >> 32) & 1);
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = ebp + -44;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032869Au); RECOMP_ABI_CALL(0x0041E08Fu, sub_0041E08F); /* call 0x0041E08F */

loc_0032869A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_003286A9; /* jl: less (signed <) */

loc_003286A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003286A9u); RECOMP_ABI_CALL(0x0041C48Eu, sub_0041C48E); /* call 0x0041C48E */
    _cf = g_eflags & 1u; /* callee carry */

loc_003286A9: ;
    POP32(esp, ebx);

loc_003286AA: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_003286B2
 * Original: 0x003286B2 - 0x003286FC (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003286B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003286B2: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003286BAu); RECOMP_ABI_CALL(0x00328140u, sub_00328140); /* call 0x00328140 */

loc_003286BA: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003286CC; /* je: equal / zero */

loc_003286C1: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003286C8u); RECOMP_ABI_CALL(0x003281A0u, sub_003281A0); /* call 0x003281A0 */

loc_003286C8: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003286CC: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003286DE; /* je: equal / zero */

loc_003286D3: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003286DAu); RECOMP_ABI_CALL(0x003281C0u, sub_003281C0); /* call 0x003281C0 */

loc_003286DA: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003286DE: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003286E8u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_003286E8: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003286F6u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_003286F6: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003286FC
 * Original: 0x003286FC - 0x00328734 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003286FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003286FC: ;
    PUSH32(esp, esi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328704u); RECOMP_ABI_CALL(0x00328140u, sub_00328140); /* call 0x00328140 */

loc_00328704: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00328716; /* je: equal / zero */

loc_0032870B: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328712u); RECOMP_ABI_CALL(0x003281E0u, sub_003281E0); /* call 0x003281E0 */

loc_00328712: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x54) = MEM32(esi + 0x54) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00328716: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328720u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_00328720: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032872Eu); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_0032872E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00328734
 * Original: 0x00328734 - 0x0032884A (278 bytes, 103 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00328734(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328734: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x40));
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032874Au); RECOMP_ABI_CALL(0x00328572u, sub_00328572); /* call 0x00328572 */

loc_0032874A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00328803; /* jl: less (signed <) */

loc_00328755: ;
    PUSH32(esp, 0x8017);
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328761u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00328761: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032876C; /* je: equal / zero */

loc_00328765: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    goto loc_0032876E;

loc_0032876C: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0032876E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003287FC; /* je: equal / zero */

loc_00328779: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032877Eu); RECOMP_ABI_CALL(0x0032992Bu, sub_0032992B); /* call 0x0032992B */

loc_0032877E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00328803; /* jl: less (signed <) */

loc_00328785: ;
    PUSH32(esp, 0x8024);
    PUSH32(esp, 0xB0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328794u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00328794: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003287A3; /* je: equal / zero */

loc_00328798: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032879Fu); RECOMP_ABI_CALL(0x0032809Eu, sub_0032809E); /* call 0x0032809E */

loc_0032879F: ;
    edx = eax;
    goto loc_003287A5;

loc_003287A3: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003287A5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003287FC; /* je: equal / zero */

loc_003287AC: ;
    PUSH32(esp, 0xA);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebp + -64;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x4E4084);
    MEM32(ebp + -60) = 0xA;
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, 0x28);
    MEM32(ebp + -32) = eax;
    POP32(esp, eax);
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -52) = eax;
    eax = ebp + -64;
    PUSH32(esp, eax);
    ecx = edx;
    MEM32(ebp + -56) = 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003287E3u); RECOMP_ABI_CALL(0x003292F6u, sub_003292F6); /* call 0x003292F6 */

loc_003287E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00328803; /* jl: less (signed <) */

loc_003287EA: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003287F3u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_003287F3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x20) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00328813; /* jne: not equal / not zero */

loc_003287FC: ;
    MEM32(ebp + 8) = 0x8007000Eu;

loc_00328803: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032880Au); RECOMP_ABI_CALL(0x003286B2u, sub_003286B2); /* call 0x003286B2 */
    _cf = g_eflags & 1u; /* callee carry */

loc_0032880A: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

loc_00328813: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    edi = MEM32(esi + 0x1C);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00328827: ;
    PUSH32(esp, edi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328833u); RECOMP_ABI_CALL(0x00328235u, sub_00328235); /* call 0x00328235 */

loc_00328833: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = ebp + -24;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x00328842u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032883Fu); } /* indirect call */
    }

loc_00328842: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00328827; /* jb: below (unsigned <) */

loc_00328848: ;
    goto loc_0032880A;

}

/**
 * sub_0032884A
 * Original: 0x0032884A - 0x003288C5 (123 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032884A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032884A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x1C));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032885Fu); RECOMP_ABI_CALL(0x00328572u, sub_00328572); /* call 0x00328572 */

loc_0032885F: ;
    ebp = eax;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003288AD; /* jl: less (signed <) */

loc_00328867: ;
    PUSH32(esp, 0x8029);
    PUSH32(esp, 0x58);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328873u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00328873: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0032888A; /* je: equal / zero */

loc_00328877: ;
    MEM32(eax) = ebx;
    MEM32(eax + 0x44) = edi;
    MEM32(eax + 0x48) = ebx;
    MEM32(eax + 0x4C) = ebx;
    MEM32(eax + 0x50) = ebx;
    MEM32(eax + 0x54) = ebx;
    goto loc_0032888C;

loc_0032888A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0032888C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x54) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003288A8; /* je: equal / zero */

loc_00328893: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, 0xBB);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032889Fu); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_0032889F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x20) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003288BD; /* jne: not equal / not zero */

loc_003288A8: ;
    ebp = 0x8007000Eu;

loc_003288AD: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003288B4u); RECOMP_ABI_CALL(0x003286FCu, sub_003286FC); /* call 0x003286FC */
    _cf = g_eflags & 1u; /* callee carry */

loc_003288B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

loc_003288BD: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    goto loc_003288B4;

}

/**
 * sub_003288C5
 * Original: 0x003288C5 - 0x003288D8 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003288C5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003288C5: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003288D6; /* je: equal / zero */

loc_003288CD: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003288D3u); RECOMP_ABI_CALL(0x00329D00u, sub_00329D00); /* call 0x00329D00 */

loc_003288D3: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003288D6: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003288D8
 * Original: 0x003288D8 - 0x0032890C (52 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003288D8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003288D8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003288E0: ;
    eax = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003288F3; /* jbe: below or equal (unsigned <=) */

loc_003288F1: ;
    esi = eax;

loc_003288F3: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x140) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x140 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003288E0; /* jb: below (unsigned <) */

loc_003288FC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00328905; /* jbe: below or equal (unsigned <=) */

loc_00328902: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00328905: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032890C
 * Original: 0x0032890C - 0x003289A5 (153 bytes, 56 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032890C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032890C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 4));
    ecx = MEM32(ebp + 0xC);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & ((0xF) & 0xFFu));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(eax, ZX8(LO8(eax)));
    if (((4) & 31u)) _cf = (int)(((uint32_t)(ecx) >> ((32 - (((4) & 31u))) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) << ((4) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    edi = ebp + -24;
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(edx) = LO16(eax);
    if (((4) & 31u)) _cf = (int)(((uint32_t)(LO16(eax)) >> (((((4) & 31u)) - 1) & 31u)) & 1u);
    SET_LO16(eax, (uint32_t)(LO16(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    MEM16(esi + 6) = LO16(eax);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(2)) >> 32) & 1);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -16) = edx;
    MEM16(ebp + -12) = 8;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0032898B; /* je: equal / zero */

loc_0032895B: ;
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445DC4); PUSH32(esp, 0x00328965u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032895Fu); } /* indirect call */
    }

loc_00328965: ;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x329FA0);
    PUSH32(esp, MEM32(0x4E40A0));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032897Fu); RECOMP_ABI_CALL(0x00329872u, sub_00329872); /* call 0x00329872 */

loc_0032897F: ;
    eax = ebp + -56;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445DC0); PUSH32(esp, 0x00328989u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00328983u); } /* indirect call */
    }

loc_00328989: ;
    goto loc_0032899D;

loc_0032898B: ;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032899Au); RECOMP_ABI_CALL(0x00329FA0u, sub_00329FA0); /* call 0x00329FA0 */

loc_0032899A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032899D: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

}

/**
 * sub_003289A5
 * Original: 0x003289A5 - 0x003289F0 (75 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003289A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003289A5: ;
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
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    ebx = ecx + 0x18;
    PUSH32(esp, 0x15);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003289D2u); RECOMP_ABI_CALL(0x00329C80u, sub_00329C80); /* call 0x00329C80 */

loc_003289D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003289E6; /* je: equal / zero */

loc_003289D6: ;
    PUSH32(esp, 0x15);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    MEM32(ebp + -4) = 0x80004005u;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_003289E6: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_003289F0
 * Original: 0x003289F0 - 0x00328A1A (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003289F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003289F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003289FEu); RECOMP_ABI_CALL(0x00329CC0u, sub_00329CC0); /* call 0x00329CC0 */

loc_003289FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A0E; /* je: equal / zero */

loc_00328A02: ;
    ecx = esi;
    edi = 0x8007000Eu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328A0Eu); RECOMP_ABI_CALL(0x003288C5u, sub_003288C5); /* call 0x003288C5 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00328A0E: ;
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 0x6C) = 0x258;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00328A1A
 * Original: 0x00328A1A - 0x00328A86 (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328A1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328A1A: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x6C));
    eax = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esp + 0xC));
    MEM32(esi + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328A2Fu); RECOMP_ABI_CALL(0x003288D8u, sub_003288D8); /* call 0x003288D8 */

loc_00328A2F: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00328A44; /* je: equal / zero */

loc_00328A38: ;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x6C) = 0x320;
    goto loc_00328A5F;

loc_00328A44: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x14)) + (uint64_t)(0x14)) >> 32) & 1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 0x14;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x14);
    edx = 0xC8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */ _fb = 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x6C) = 0x258;
    MEM32(esi + 0xC) = eax;

loc_00328A5F: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00328A6B; /* jne: not equal / not zero */

loc_00328A66: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00328A74; /* jne: not equal / not zero */

loc_00328A6B: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7530) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0x7530 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00328A7A; /* jbe: below or equal (unsigned <=) */

loc_00328A74: ;
    MEM8(esi + 4) = MEM8(esi + 4) + 1;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = ecx;

loc_00328A7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00328A82; /* je: equal / zero */

loc_00328A7E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 8)) + (uint64_t)(0x14)) >> 32) & 1);
    MEM32(esi + 8) = MEM32(esi + 8) + 0x14;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00328A82: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00328A86
 * Original: 0x00328A86 - 0x00328A9A (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328A86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328A86: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00328A98; /* je: equal / zero */

loc_00328A8F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328A95u); RECOMP_ABI_CALL(0x0032B5D5u, sub_0032B5D5); /* call 0x0032B5D5 */

loc_00328A95: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00328A98: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00328A9A
 * Original: 0x00328A9A - 0x00328B07 (109 bytes, 50 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00328A9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328A9A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    edx = ecx + 0x44;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);

loc_00328AAF: ;
    edi = MEM32(ebp + 8);
    ebx = (uint32_t)(int32_t)SMEM16(edi + eax * 4 + 2);
    edi = (uint32_t)(int32_t)SMEM16(edi + eax * 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ebx)) >> (((((1) & 31u)) - 1) & 31u)) & 1);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(edx + eax * 2) = LO16(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00328AAF; /* jb: below (unsigned <) */

loc_00328ACB: ;
    eax = ZX16(MEM16(ecx + 0xE));
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -8;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x140);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ecx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328AF0u); RECOMP_ABI_CALL(0x0032C222u, sub_0032C222); /* call 0x0032C222 */

loc_00328AF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_00328AFE; /* jge: greater or equal (signed >=) */

loc_00328AF5: ;
    MEM32(edi) = esi;
    MEM32(ebp + -4) = 0x80004005u;

loc_00328AFE: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 20; return; /* ret 16 */

}

/**
 * sub_00328B07
 * Original: 0x00328B07 - 0x00328B78 (113 bytes, 51 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00328B07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328B07: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -4) = esi;

loc_00328B20: ;
    eax = ZX16(MEM16(edi + 0xE));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00328B2A; /* jb: below (unsigned <) */

loc_00328B28: ;
    eax = ebx;

loc_00328B2A: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328B3Fu); RECOMP_ABI_CALL(0x0032C602u, sub_0032C602); /* call 0x0032C602 */

loc_00328B3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00328B6F; /* jne: not equal / not zero */

loc_00328B43: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00328B56; /* jbe: below or equal (unsigned <=) */

loc_00328B52: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00328B20; /* ja: above (unsigned >) */

loc_00328B56: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = ecx;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328B65u); RECOMP_ABI_CALL(0x00328A86u, sub_00328A86); /* call 0x00328A86 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00328B65: ;
    eax = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 16; return; /* ret 12 */

loc_00328B6F: ;
    MEM32(ebp + -12) = 0x80004005u;
    goto loc_00328B65;

}

/**
 * sub_00328B78
 * Original: 0x00328B78 - 0x00328C2A (178 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328B78(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328B78: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx) = 0x46464952;
    PUSH32(esp, 4);
    POP32(esp, ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0x45564157;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = 0x20746D66;
    PUSH32(esp, 0x40);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(edx) = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edx) = 0xA;
    MEM16(edx + 0xE) = 0x10;
    ebx = MEM32(esi + 8);
    MEM32(edx + 8) = ebx;
    SET_LO16(ebx, MEM16(esi + 0xE));
    MEM16(edx + 0xC) = LO16(ebx);
    SET_LO16(ebx, MEM16(esi + 0xC));
    MEM16(edx + 2) = LO16(ebx);
    ebx = MEM32(esi + 4);
    MEM32(edx + 4) = ebx;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    MEM16(edx + 0x10) = 0x2E;
    MEM16(edx + 0x12) = 0x10;
    MEM32(edx + 0x14) = ecx;
    SET_LO16(ecx, MEM16(esi + 0x34));
    MEM16(edx + 0x22) = LO16(eax);
    MEM16(edx + 0x20) = LO16(ecx);
    ecx = MEM32(esi + 0x38);
    MEM32(edx + 0x24) = ecx;
    ecx = MEM32(esi + 0x3C);
    MEM32(edx + 0x28) = ecx;
    ecx = MEM32(esi + 0x40);
    MEM32(edx + 0x30) = eax;
    MEM32(edx + 0x34) = eax;
    MEM32(edx + 0x38) = eax;
    MEM32(edx + 0x3C) = eax;
    MEM32(edx + 0x2C) = ecx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x5C);
    MEM32(edx) = 0x61746164;
    MEM32(edx + 4) = eax;
    POP32(esp, eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_eflags = (g_eflags & ~0x8C5u) | ((_cf) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)~((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fb))) & ((uint32_t)((_fa - _fb)) ^ (uint32_t)(_fa)))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00328C2A
 * Original: 0x00328C2A - 0x00328C3E (20 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328C2A(void)
{
    int _cf = 0; /* carry flag */

loc_00328C2A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = eax + 0x54;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 0x58) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00328C3E
 * Original: 0x00328C3E - 0x00328CCB (141 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00328C3E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328C3E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00328C5C; /* je: equal / zero */

loc_00328C48: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00328C55; /* jne: not equal / not zero */

loc_00328C4E: ;
    eax = 0x80004005u;
    goto loc_00328CC6;

loc_00328C55: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328C5Cu); RECOMP_ABI_CALL(0x00328A86u, sub_00328A86); /* call 0x00328A86 */

loc_00328C5C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328C63u); RECOMP_ABI_CALL(0x0032A6D5u, sub_0032A6D5); /* call 0x0032A6D5 */

loc_00328C63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00328C6E; /* jge: greater or equal (signed >=) */

loc_00328C67: ;
    ebp = 0x8007000Eu;
    goto loc_00328CBC;

loc_00328C6E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    ebx = esi + 4;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 5);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0x271;
    PUSH32(esp, eax);
    ecx = 0x1F40;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    MEM32(ebx) = ecx;
    MEM16(esi + 0xC) = LO16(edx);
    MEM32(esi + 8) = eax;
    MEM16(esi + 0x1C) = 5;
    MEM32(esi + 0x2C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328CA6u); RECOMP_ABI_CALL(0x0032A68Eu, sub_0032A68E); /* call 0x0032A68E */

loc_00328CA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_00328CB7; /* jl: less (signed <) */

loc_00328CAB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328CB3u); RECOMP_ABI_CALL(0x0032A727u, sub_0032A727); /* call 0x0032A727 */

loc_00328CB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00328CC3; /* jge: greater or equal (signed >=) */

loc_00328CB7: ;
    ebp = 0x80004005u;

loc_00328CBC: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328CC3u); RECOMP_ABI_CALL(0x00328A86u, sub_00328A86); /* call 0x00328A86 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00328CC3: ;
    eax = ebp;
    POP32(esp, ebx);

loc_00328CC6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00328CCB
 * Original: 0x00328CCB - 0x00328CDE (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328CCB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328CCB: ;
    eax = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 4; return; /* ret */

}

/**
 * sub_00328CDE
 * Original: 0x00328CDE - 0x00328CF4 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328CDE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328CDE: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00328CF2; /* je: equal / zero */

loc_00328CE7: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328CEFu); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_00328CEF: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00328CF2: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00328CF4
 * Original: 0x00328CF4 - 0x00328D12 (30 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328CF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328CF4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328D02u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00328D02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00328D0E; /* je: equal / zero */

loc_00328D08: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;

loc_00328D0E: ;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00328D12
 * Original: 0x00328D12 - 0x00328D4B (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00328D12(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _cf = 0; /* carry flag */

loc_00328D12: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328D23u); RECOMP_ABI_CALL(0x00320963u, sub_00320963); /* call 0x00320963 */

loc_00328D23: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328D35u); RECOMP_ABI_CALL(0x00374730u, sub_00374730); /* call 0x00374730 */

loc_00328D35: ;
    PUSH32(esp, MEM32(esi + 0x94));
    PUSH32(esp, MEM32(esi + 0x90));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328D48u); RECOMP_ABI_CALL(0x00374B80u, sub_00374B80); /* call 0x00374B80 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00328D48: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00328D4B
 * Original: 0x00328D4B - 0x00328D6F (36 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328D4B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328D4B: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x3C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328D68u); RECOMP_ABI_CALL(0x00374C30u, sub_00374C30); /* call 0x00374C30 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00328D68: ;
    MEM32(esi + 0x48) = eax;
    POP32(esp, esi);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_00328D6F
 * Original: 0x00328D6F - 0x00328DA7 (56 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328D6F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328D6F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x4E4198)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E4198), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00328DA4; /* jne: not equal / not zero */

loc_00328D79: ;
    _fa = (uint32_t)(MEM32(0x4E419C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4E419C), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00328DA4; /* jne: not equal / not zero */

loc_00328D81: ;
    ecx = MEM32(esp + 4);
    MEM32(0x4E4198) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0x4E419C) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(0x4E41A0) = ecx;
    MEM32(0x4E41A4) = eax;

loc_00328DA4: ;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00328DA7
 * Original: 0x00328DA7 - 0x00328E13 (108 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00328DA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328DA7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(0x4E4198)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(0x4E4198)));
    eax = eax - MEM32(0x4E4198);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(0x4E41A4);
    PUSH32(esp, edi);
    edi = MEM32(0x4E41A0);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(MEM32(0x4E419C)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(ecx) ^ (uint32_t)(MEM32(0x4E419C))) & ((uint32_t)(ecx) ^ (uint32_t)_t)) >> 31 & 1u; ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328DD8u); RECOMP_ABI_CALL(0x003746B0u, sub_003746B0); /* call 0x003746B0 */

loc_00328DD8: ;
    MEM32(ebp + -4) = edx;
    ecx = esi;
    edx = edi;
    { uint32_t _c = (uint32_t)(1) & 31u; if (_c && _c < 32u) { edx = (edx >> _c) | (ecx << (32 - _c)); _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shrd result */ } }  /* shrd */
    if (((1) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((1) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((1) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00328DFE; /* ja: above (unsigned >) */

loc_00328DE9: ;
    if (CMP_B(_fa, _fb)) goto loc_00328DF0; /* jb: below (unsigned <) */

loc_00328DEB: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00328DFE; /* jae: above or equal (unsigned >=) */

loc_00328DF0: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(MEM32(ebp + -4)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(ebx) ^ (uint32_t)(MEM32(ebp + -4))) & ((uint32_t)(ebx) ^ (uint32_t)_t)) >> 31 & 1u; ebx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edi = ecx;
    esi = ebx;
    goto loc_00328E08;

loc_00328DFE: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(esi) - (uint64_t)(MEM32(ebp + -4)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(esi) ^ (uint32_t)(MEM32(ebp + -4))) & ((uint32_t)(esi) ^ (uint32_t)_t)) >> 31 & 1u; esi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(ebp + 8))) >> 32) & 1);
    edi = edi + MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(esi) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(esi) ^ (uint32_t)_t) & ((uint32_t)(ebx) ^ (uint32_t)_t)) >> 31 & 1u; esi = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

loc_00328E08: ;
    eax = edi;
    POP32(esp, edi);
    edx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_00328E13
 * Original: 0x00328E13 - 0x00328E5F (76 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328E13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328E13: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00328E48; /* je: equal / zero */

loc_00328E20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x326104);
    esi = edi + -4;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328E33u); RECOMP_ABI_CALL(0x000121D0u, sub_000121D0); /* call 0x000121D0 */

loc_00328E33: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00328E43; /* je: equal / zero */

loc_00328E38: ;
    PUSH32(esp, 0x8025);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328E43u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00328E43: ;
    eax = esi;
    POP32(esp, esi);
    goto loc_00328E5A;

loc_00328E48: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00328E58; /* je: equal / zero */

loc_00328E4D: ;
    PUSH32(esp, 0x8025);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328E58u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */
    _cf = g_eflags & 1u; /* callee carry */

loc_00328E58: ;
    eax = edi;

loc_00328E5A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_00328E5F
 * Original: 0x00328E5F - 0x00328EBD (94 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328E5F(void)
{
    int _flags = 0; /* fallback flag var */
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

loc_00328E5F: ;
    ecx = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00328E6F; /* jne: not equal / not zero */

loc_00328E69: ;
    MEM32(ecx) = 0x14;

loc_00328E6F: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00328E7B; /* jne: not equal / not zero */

loc_00328E74: ;
    MEM32(ecx + 0xC) = 0x50;

loc_00328E7B: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00328E87; /* jne: not equal / not zero */

loc_00328E80: ;
    MEM32(ecx + 8) = 0x1F4;

loc_00328E87: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00328E93; /* jne: not equal / not zero */

loc_00328E8C: ;
    MEM32(ecx + 0x10) = 0xF0;

loc_00328E93: ;
    fp_push(MEMD(ecx + 0x18)); /* fld double */
    fp_push(MEMD(0x497F80)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00328EAE; /* jp: parity */

loc_00328EA5: ;
    fp_push(MEMD(0x446748)); /* fld double */
    MEMD(ecx + 0x18) = fp_top(); fp_pop(); /* fstp */

loc_00328EAE: ;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x20), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00328EBA; /* jne: not equal / not zero */

loc_00328EB3: ;
    MEM32(ecx + 0x20) = 0xA;

loc_00328EBA: ;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00328EBD
 * Original: 0x00328EBD - 0x00328F6A (173 bytes, 74 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328EBD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00328EBD: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00328EDFu); RECOMP_ABI_CALL(0x00374C30u, sub_00374C30); /* call 0x00374C30 */

loc_00328EDF: ;
    _fb = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 0x30))) >> 32) & 1);
    eax = eax + MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x4C);
    ecx = 0xFFF;
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax + 0x1000;
    edi = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ebx)) >> 32) & 1);
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + 0x10);
    _cf = 0; /* logical op clears CF */
    edi = edi & ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00328F14; /* jae: above or equal (unsigned >=) */

loc_00328F04: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00328F1C; /* jb: below (unsigned <) */

loc_00328F08: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00328F1C; /* ja: above (unsigned >) */

loc_00328F0C: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00328F35; /* jae: above or equal (unsigned >=) */

loc_00328F12: ;
    goto loc_00328F67;

loc_00328F14: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00328F27; /* jae: above or equal (unsigned >=) */

loc_00328F18: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00328F27; /* jbe: below or equal (unsigned <=) */

loc_00328F1C: ;
    MEM32(esi + 0xA4) = MEM32(esi + 0xA4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 2);
    POP32(esp, edx);
    goto loc_00328F55;

loc_00328F27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00328F5D; /* jae: above or equal (unsigned >=) */

loc_00328F2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00328F65; /* ja: above (unsigned >) */

loc_00328F2F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00328F65; /* ja: above (unsigned >) */

loc_00328F33: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00328F35: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = ((int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(MEM32(esi + 0xC)) != (int64_t)(int32_t)((uint32_t)(ebx) * (uint32_t)(MEM32(esi + 0xC))));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(esi + 0xC));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(MEM32(esi + 0x20))) >> 32) & 1);
    ebx = ebx + MEM32(esi + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(MEM32(esi + 0x24)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(ecx) ^ (uint32_t)_t) & ((uint32_t)(MEM32(esi + 0x24)) ^ (uint32_t)_t)) >> 31 & 1u; ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;

loc_00328F4E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0xA4) = MEM32(esi + 0xA4) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xA4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00328F55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

loc_00328F5D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00328F33; /* ja: above (unsigned >) */

loc_00328F61: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00328F33; /* jae: above or equal (unsigned >=) */

loc_00328F65: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00328F67: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00328F4E;

}

/**
 * sub_00328F6A
 * Original: 0x00328F6A - 0x00328F94 (42 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328F6A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328F6A: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(edx) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00328F7D; /* je: equal / zero */

loc_00328F79: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00328F7D: ;
    ecx = MEM32(esp + 8);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00328F91; /* je: equal / zero */

loc_00328F89: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00328F91; /* jne: not equal / not zero */

loc_00328F8E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00328F91: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00328F94
 * Original: 0x00328F94 - 0x00328FCD (57 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00328F94(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328F94: ;
    ecx = MEM32(ecx + 0x18);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00328FCA; /* je: equal / zero */

loc_00328F9D: ;
    PUSH32(esp, esi);

loc_00328F9E: ;
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(ecx);
    if (CMP_B(_fa, _fb)) goto loc_00328FC9; /* jb: below (unsigned <) */

loc_00328FA9: ;
    if (CMP_A(_fa, _fb)) goto loc_00328FB1; /* ja: above (unsigned >) */

loc_00328FAB: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00328FC9; /* jb: below (unsigned <) */

loc_00328FB1: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00328FBD; /* jne: not equal / not zero */

loc_00328FB7: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00328FC6; /* je: equal / zero */

loc_00328FBD: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00328F9E; /* jne: not equal / not zero */

loc_00328FC4: ;
    goto loc_00328FC9;

loc_00328FC6: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00328FC9: ;
    POP32(esp, esi);

loc_00328FCA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00328FCD
 * Original: 0x00328FCD - 0x0032905E (145 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00328FCD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00328FCD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x54) = MEM32(ecx + 0x54) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00328FEB; /* jne: not equal / not zero */

loc_00328FE0: ;
    eax = MEM32(ebp + 8);
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x18) = eax;
    goto loc_00329056;

loc_00328FEB: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00329012; /* je: equal / zero */

loc_00328FF7: ;
    edi = MEM32(edx);
    eax = MEM32(edx + 4);

loc_00328FFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0032900E; /* ja: above (unsigned >) */

loc_00329001: ;
    if (CMP_B(_fa, _fb)) goto loc_00329007; /* jb: below (unsigned <) */

loc_00329003: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0032900E; /* jae: above or equal (unsigned >=) */

loc_00329007: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00328FFC; /* jne: not equal / not zero */

loc_0032900E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00329020; /* jne: not equal / not zero */

loc_00329012: ;
    MEM32(ebx + 0xC) = edx;
    eax = MEM32(ecx + 0x18);
    MEM32(edx + 0x10) = eax;
    MEM32(ecx + 0x18) = edx;
    goto loc_00329054;

loc_00329020: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00329029; /* jne: not equal / not zero */

loc_00329024: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00329046; /* je: equal / zero */

loc_00329029: ;
    eax = MEM32(esi + 0x10);
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0xC) = esi;
    MEM32(esi + 0x10) = edx;
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00329041; /* jne: not equal / not zero */

loc_0032903C: ;
    MEM32(ecx + 0x1C) = edx;
    goto loc_00329054;

loc_00329041: ;
    MEM32(esi + 0xC) = edx;
    goto loc_00329054;

loc_00329046: ;
    eax = MEM32(ecx + 0x54);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x54) = eax;
    MEM32(ebp + -4) = 0x80004005u;

loc_00329054: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00329056: ;
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_0032905E
 * Original: 0x0032905E - 0x0032908A (44 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032905E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032905E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00329083; /* je: equal / zero */

loc_0032906B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329070u); RECOMP_ABI_CALL(0x00328D12u, sub_00328D12); /* call 0x00328D12 */

loc_00329070: ;
    _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x28)));
    eax = eax - MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esi + 0x2C)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(edx) ^ (uint32_t)(MEM32(esi + 0x2C))) & ((uint32_t)(edx) ^ (uint32_t)_t)) >> 31 & 1u; edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x20)));
    eax = eax - MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x38) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00329083; /* jl: less (signed <) */

loc_00329082: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00329083: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0032908A
 * Original: 0x0032908A - 0x003290DA (80 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032908A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032908A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx;
    MEM32(edi) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032909Cu); RECOMP_ABI_CALL(0x0032905Eu, sub_0032905E); /* call 0x0032905E */

loc_0032909C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003290D2; /* je: equal / zero */

loc_003290A0: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003290CC; /* jbe: below or equal (unsigned <=) */

loc_003290A5: ;
    edx = MEM32(esi + 0x20);
    ecx = esi + 0x18;
    eax = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003290CC; /* jne: not equal / not zero */

loc_003290B1: ;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003290CC; /* jne: not equal / not zero */

loc_003290B9: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003290C5u); RECOMP_ABI_CALL(0x00328F6Au, sub_00328F6A); /* call 0x00328F6A */
    _cf = g_eflags & 1u; /* callee carry */

loc_003290C5: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = eax;
    goto loc_003290D2;

loc_003290CC: ;
    MEM32(edi) = 1;

loc_003290D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_003290DA
 * Original: 0x003290DA - 0x003290F4 (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003290DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003290DA: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_003290EE; /* je: equal / zero */

loc_003290E5: ;
    MEM32(edx + 0xC) = eax;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x10) = edx;

loc_003290EE: ;
    MEM32(ecx + 0x14) = eax;
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003290F4
 * Original: 0x003290F4 - 0x003292BB (455 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003290F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_003290F4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00329115; /* je: equal / zero */

loc_0032910B: ;
    eax = ebp + -44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445DC4); PUSH32(esp, 0x00329115u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032910Fu); } /* indirect call */
    }

loc_00329115: ;
    edx = MEM32(esi + 0x48);
    fp_push((double)SMEM32(esi + 0x80)); /* fild */
    eax = MEM32(esi + 0x80);
    _fb = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(MEM32(esi + 0x50)));
    edx = edx - MEM32(esi + 0x50);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00329131; /* jge: greater or equal (signed >=) */

loc_0032912B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x497E08)); /* fadd qword ptr [0x497e08] */

loc_00329131: ;
    eax = MEM32(esi + 0x88);
    MEMD(ebp + -12) = fp_top(); /* fst */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    fp_push((double)SMEM32(esi + 0x88)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0032914A; /* jge: greater or equal (signed >=) */

loc_00329144: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x497E08)); /* fadd qword ptr [0x497e08] */

loc_0032914A: ;
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x497FF8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x497ff8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0032915D; /* jnp: not parity */

loc_00329159: ;
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */

loc_0032915D: ;
    fp_push(MEMD(ebp + -12)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(esi + 0x70)); /* fmul qword ptr [esi + 0x70] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x497FF8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x497ff8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00329174; /* jnp: not parity */

loc_00329170: ;
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */

loc_00329174: ;
    eax = MEM32(esi + 0x5C);
    MEMD(esi + 0x78) = fp_top(); /* fst */
    fp_push(1.0); /* fld1 */
    eax = eax + edx * 8;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(eax)); /* fmul qword ptr [eax] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMD(eax) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x5C);
    ecx = eax + edx * 8;
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x80) = edi;
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x88) = edi;
    fp_push(MEMD(ecx)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(esi + 0x68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [esi + 0x68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0032925B; /* jp: parity */

loc_003291B1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003292A2; /* jbe: below or equal (unsigned <=) */

loc_003291B9: ;
    fp_push(MEMD(ecx + -8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMD(esi + 0x68)); /* fsub qword ptr [esi + 0x68] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(ecx)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMD(esi + 0x68)); /* fsub qword ptr [esi + 0x68] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_003292A2; /* jne: not equal / not zero */

loc_003291D5: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x38);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x3C);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(eax) ^ (uint32_t)(ecx)) & ((uint32_t)(eax) ^ (uint32_t)_t)) >> 31 & 1u; eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003291EDu); RECOMP_ABI_CALL(0x00328D4Bu, sub_00328D4B); /* call 0x00328D4B */

loc_003291ED: ;
    ebx = MEM32(esi + 0xC);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x20)) + (uint64_t)(ebx)) >> 32) & 1);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + ebx;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(esi + 0x24)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(MEM32(esi + 0x24)) ^ (uint32_t)_t) & ((uint32_t)(eax) ^ (uint32_t)_t)) >> 31 & 1u; MEM32(esi + 0x24) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003292A2; /* jbe: below or equal (unsigned <=) */

loc_00329201: ;
    edi = MEM32(esi + 0x18);
    eax = MEM32(edi + 4);
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(edi);
    if (CMP_B(_fa, _fb)) goto loc_003292A2; /* jb: below (unsigned <) */

loc_00329214: ;
    if (CMP_A(_fa, _fb)) goto loc_00329221; /* ja: above (unsigned >) */

loc_00329216: ;
    edx = MEM32(esi + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003292A2; /* jbe: below or equal (unsigned <=) */

loc_00329221: ;
    PUSH32(esp, 0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edx);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(eax) ^ (uint32_t)_t) & ((uint32_t)(edx) ^ (uint32_t)_t)) >> 31 & 1u; eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329231u); RECOMP_ABI_CALL(0x00328F94u, sub_00328F94); /* call 0x00328F94 */

loc_00329231: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00329251; /* je: equal / zero */

loc_00329235: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329244u); RECOMP_ABI_CALL(0x00328F6Au, sub_00328F6A); /* call 0x00328F6A */

loc_00329244: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032924Fu); RECOMP_ABI_CALL(0x003290DAu, sub_003290DA); /* call 0x003290DA */

loc_0032924F: ;
    goto loc_003292A2;

loc_00329251: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edi)) + (uint64_t)(ebx)) >> 32) & 1);
    MEM32(edi) = MEM32(edi) + ebx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    POP32(esp, eax);
    { uint64_t _t = (uint64_t)(MEM32(edi + 4)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(MEM32(edi + 4)) ^ (uint32_t)_t) & ((uint32_t)(eax) ^ (uint32_t)_t)) >> 31 & 1u; MEM32(edi + 4) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_003292A2;

loc_0032925B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x60) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003292A2; /* jae: above or equal (unsigned >=) */

loc_00329261: ;
    fp_push(MEMD(ecx + 8)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMD(esi + 0x68)); /* fsub qword ptr [esi + 0x68] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMD(ecx)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMD(esi + 0x68)); /* fsub qword ptr [esi + 0x68] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_003292A2; /* jne: not equal / not zero */

loc_00329279: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00329283; /* jne: not equal / not zero */

loc_0032927E: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003292A2; /* je: equal / zero */

loc_00329283: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x3C);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 0x38))) >> 32) & 1);
    eax = eax + MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(edx) ^ (uint32_t)_t) & ((uint32_t)(ecx) ^ (uint32_t)_t)) >> 31 & 1u; edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329299u); RECOMP_ABI_CALL(0x00328D4Bu, sub_00328D4B); /* call 0x00328D4B */

loc_00329299: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(esi + 0x20)) < (uint32_t)(eax));
    MEM32(esi + 0x20) = MEM32(esi + 0x20) - eax;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(MEM32(esi + 0x24)) - (uint64_t)(edi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(MEM32(esi + 0x24)) ^ (uint32_t)(edi)) & ((uint32_t)(MEM32(esi + 0x24)) ^ (uint32_t)_t)) >> 31 & 1u; MEM32(esi + 0x24) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_003292A2: ;
    eax = MEM32(XBOX_FS_BASE + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003292B9; /* je: equal / zero */

loc_003292AF: ;
    eax = ebp + -44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445DC0); PUSH32(esp, 0x003292B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003292B3u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_003292B9: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003292BB
 * Original: 0x003292BB - 0x003292F6 (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003292BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003292BB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 0x5C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003292C8u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_003292C8: ;
    ecx = MEM32(esi);
    MEM32(esi + 0x5C) = MEM32(esi + 0x5C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x5C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003292DC; /* je: equal / zero */

loc_003292D2: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003292D9u); RECOMP_ABI_CALL(0x00328E13u, sub_00328E13); /* call 0x00328E13 */

loc_003292D9: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003292DC: ;
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(esi + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003292E6u); RECOMP_ABI_CALL(0x00327C01u, sub_00327C01); /* call 0x00327C01 */

loc_003292E6: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi + 0x9C;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00328CDE(); return; /* tail jmp 0x00328CDE */

}

/**
 * sub_003292F6
 * Original: 0x003292F6 - 0x00329524 (558 bytes, 197 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003292F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
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

loc_003292F6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x90;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329312u); RECOMP_ABI_CALL(0x00320974u, sub_00320974); /* call 0x00320974 */

loc_00329312: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0032933D; /* jne: not equal / not zero */

loc_00329316: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032931Bu); RECOMP_ABI_CALL(0x00321DB7u, sub_00321DB7); /* call 0x00321DB7 */

loc_0032931B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0032932C; /* jg: greater (signed >) */

loc_0032931F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329324u); RECOMP_ABI_CALL(0x00321DB7u, sub_00321DB7); /* call 0x00321DB7 */

loc_00329324: ;
    MEM32(ebp + -4) = eax;
    goto loc_0032950E;

loc_0032932C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329331u); RECOMP_ABI_CALL(0x00321DB7u, sub_00321DB7); /* call 0x00321DB7 */

loc_00329331: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80070000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00329324;

loc_0032933D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    fp_push(MEMD(eax + 0x18)); /* fld double */
    MEM32(ebp + -44) = ecx;
    MEMD(ebp + -20) = fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0xC);
    MEM32(ebp + -32) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(ebp + -36) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 0x20);
    MEM32(ebp + -12) = eax;
    eax = ebp + -44;
    MEM32(ebp + -40) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329374u); RECOMP_ABI_CALL(0x00328E5Fu, sub_00328E5F); /* call 0x00328E5F */

loc_00329374: ;
    edi = MEM32(ebp + -44);
    eax = MEM32(ebp + -36);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -28);
    PUSH32(esp, eax);
    MEM32(esi + 0x40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329396u); RECOMP_ABI_CALL(0x00328D4Bu, sub_00328D4B); /* call 0x00328D4B */

loc_00329396: ;
    fp_push(MEMD(ebp + -20)); /* fld double */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMD(esi + 0x68) = fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + 8) = edi;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003293AC; /* jge: greater or equal (signed >=) */

loc_003293A6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x497E08)); /* fadd qword ptr [0x497e08] */

loc_003293AC: ;
    eax = MEM32(ebp + -12);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x446750)); /* fmul qword ptr [0x446750] */
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0xA8) = eax;
    eax = MEM32(ebp + -32);
    MEMD(esi + 0x70) = fp_top(); fp_pop(); /* fstp */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(0.0); /* fldz */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEMD(esi + 0x78) = fp_top(); fp_pop(); /* fstp */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x21);
    MEM32(esi + 0x80) = ebx;
    MEM8(esi + 0x84) = LO8(ebx);
    MEM32(esi + 0x88) = ebx;
    edi = eax;
    eax = MEM32(ebp + -36);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(ebp + -40);
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x4C) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x60) = eax;
    if (((3) & 31u)) _cf = (int)(((uint32_t)(eax) >> ((32 - (((3) & 31u))) & 31u)) & 1u);
    eax = (uint32_t)(eax) << ((3) & 31u);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329405u); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_00329405: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x5C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00329473; /* je: equal / zero */

loc_0032940C: ;
    eax = MEM32(esi + 0x10);
    _fa = ((int64_t)(int32_t)(eax) * (int64_t)(int32_t)(MEM32(esi + 8)) != (int64_t)(int32_t)((uint32_t)(eax) * (uint32_t)(MEM32(esi + 8))));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 8));
    PUSH32(esp, 0x21);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032941Bu); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_0032941B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00329473; /* je: equal / zero */

loc_00329422: ;
    edi = MEM32(esi + 8);
    eax = edi + edi * 2;
    PUSH32(esp, 0x8025);
    eax = eax * 8 + 4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032943Au); RECOMP_ABI_CALL(0x00327BC9u, sub_00327BC9); /* call 0x00327BC9 */

loc_0032943A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00329459; /* je: equal / zero */

loc_0032943E: ;
    PUSH32(esp, 0x328CCB);
    PUSH32(esp, edi);
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329454u); RECOMP_ABI_CALL(0x000110C0u, sub_000110C0); /* call 0x000110C0 */

loc_00329454: ;
    eax = MEM32(ebp + 8);
    goto loc_0032945B;

loc_00329459: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0032945B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00329473; /* je: equal / zero */

loc_00329461: ;
    PUSH32(esp, MEM32(esi + 0x10));
    ecx = esi + 0x9C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032946Fu); RECOMP_ABI_CALL(0x00328CF4u, sub_00328CF4); /* call 0x00328CF4 */

loc_0032946F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0032947F; /* jne: not equal / not zero */

loc_00329473: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_00329513;

loc_0032947F: ;
    eax = MEM32(esi + 8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003294BC; /* jbe: below or equal (unsigned <=) */

loc_0032948A: ;
    PUSH32(esp, 0x18);
    POP32(esp, eax);

loc_0032948D: ;
    ecx = MEM32(esi + 0x10);
    edi = MEM32(esi);
    _fa = ((int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx) != (int64_t)(int32_t)((uint32_t)(ecx) * (uint32_t)(edx)));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(esi + 4))) >> 32) & 1);
    ecx = ecx + MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edi + 8) = ecx;
    ecx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + -24;
    MEM32(ecx + 0xC) = edi;
    ecx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + 0x18;
    MEM32(ecx + 0x10) = edi;
    ecx = MEM32(esi + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x18)) >> 32) & 1);
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0032948D; /* jb: below (unsigned <) */

loc_003294BC: ;
    eax = MEM32(esi);
    MEM32(esi + 0x14) = eax;
    ecx = eax + 0x18;
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(eax + 8) = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi);
    edx = eax + eax * 2 + -6;
    edx = ecx + edx * 8;
    eax = eax + eax * 2;
    MEM32(ecx + eax * 8 + -12) = edx;
    eax = MEM32(esi + 8);
    edx = MEM32(esi);
    ecx = eax + -1;
    _fa = ((int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(MEM32(esi + 0x10)) != (int64_t)(int32_t)((uint32_t)(ecx) * (uint32_t)(MEM32(esi + 0x10))));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x10));
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(esi + 4))) >> 32) & 1);
    ecx = ecx + MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    MEM32(edx + eax * 8 + -16) = ecx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x60), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0032951A; /* jbe: below or equal (unsigned <=) */

loc_003294FF: ;
    ecx = MEM32(esi + 0x5C);
    fp_push(MEMD(esi + 0x68)); /* fld double */
    MEMD(ecx + eax * 8) = fp_top(); fp_pop(); /* fstp */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x60) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_003294FF; /* jb: below (unsigned <) */

loc_0032950E: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0032951A; /* jge: greater or equal (signed >=) */

loc_00329513: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032951Au); RECOMP_ABI_CALL(0x003292BBu, sub_003292BB); /* call 0x003292BB */
    _cf = g_eflags & 1u; /* callee carry */

loc_0032951A: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00329524
 * Original: 0x00329524 - 0x003295BE (154 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329524(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00329524: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x0032952Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00329529u); } /* indirect call */
    }

loc_0032952F: ;
    PUSH32(esp, MEM32(esi + 0x44));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0x40));
    MEM8(esp + 0x13) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329540u); RECOMP_ABI_CALL(0x00328D4Bu, sub_00328D4B); /* call 0x00328D4B */

loc_00329540: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x80) = ebx;
    MEM8(esi + 0x84) = LO8(ebx);
    MEM32(esi + 0x88) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00329591; /* je: equal / zero */

loc_0032956E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    ebp = esi + 0x18;

loc_00329576: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032957Fu); RECOMP_ABI_CALL(0x00328F6Au, sub_00328F6A); /* call 0x00328F6A */

loc_0032957F: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032958Au); RECOMP_ABI_CALL(0x003290DAu, sub_003290DA); /* call 0x003290DA */

loc_0032958A: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00329576; /* jne: not equal / not zero */

loc_0032958F: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00329591: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x60), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003295AE; /* jbe: below or equal (unsigned <=) */

loc_00329598: ;
    edx = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x5C);
    MEM32(ecx + eax * 8) = edx;
    edx = MEM32(esi + 0x6C);
    MEM32(ecx + eax * 8 + 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x60) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00329598; /* jb: below (unsigned <) */

loc_003295AE: ;
    SET_LO8(ecx, MEM8(esp + 0xB));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x003295B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003295B2u); } /* indirect call */
    }

loc_003295B8: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003295BE
 * Original: 0x003295BE - 0x0032961E (96 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003295BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003295BE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + 0x28)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x24);
    { uint64_t _t = (uint64_t)(MEM32(esi + 0x2C)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(MEM32(esi + 0x2C)) ^ (uint32_t)_t) & ((uint32_t)(eax) ^ (uint32_t)_t)) >> 31 & 1u; MEM32(esi + 0x2C) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x48)));
    eax = eax - MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x20) = ebp;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x88) = ebp;
    MEM32(esi + 0x80) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00329619; /* je: equal / zero */

loc_003295F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x1C;
    ebx = esi + 0x18;

loc_003295FE: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329607u); RECOMP_ABI_CALL(0x00328F6Au, sub_00328F6A); /* call 0x00328F6A */

loc_00329607: ;
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329612u); RECOMP_ABI_CALL(0x003290DAu, sub_003290DA); /* call 0x003290DA */

loc_00329612: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003295FE; /* jne: not equal / not zero */

loc_00329617: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00329619: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_eflags = (g_eflags & ~0x8C5u) | ((CMP_B(_fa, _fb)) ? 0x1u : 0u) | ((RECOMP_PARITY8((_fa) - (_fb))) ? 0x4u : 0u) | ((CMP_EQ(_fa, _fb)) ? 0x40u : 0u) | (((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) ? 0x80u : 0u) | ((((((uint32_t)(((uint32_t)(_fa) ^ (uint32_t)(_fb)) & ((uint32_t)(_fa) ^ (uint32_t)((_fa) - (_fb))))) >> 31) != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 8; return; /* ret 4 */

}

/**
 * sub_0032961E
 * Original: 0x0032961E - 0x00329712 (244 bytes, 84 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0032961E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0032961E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(ebp + -8) = esi;
    MEM32(eax) = esi;
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CF0); PUSH32(esp, 0x00329639u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00329633u); } /* indirect call */
    }

loc_00329639: ;
    MEM8(ebp + -1) = LO8(eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329647u); RECOMP_ABI_CALL(0x0032908Au, sub_0032908A); /* call 0x0032908A */

loc_00329647: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003296AD; /* jne: not equal / not zero */

loc_0032964B: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0032965C; /* jne: not equal / not zero */

loc_00329650: ;
    MEM32(ebp + -8) = 0x80004005u;
    goto loc_003296FF;

loc_0032965C: ;
    _fa = (uint32_t)(MEM32(ebx + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xA0), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003296F5; /* jne: not equal / not zero */

loc_00329668: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebp + 8);
    esi = MEM32(ebx + 0x9C);
    eax = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
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
    ecx = eax;
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
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0xA0) = 1;
    SET_LO16(eax, MEM16(edx));
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x10)) >> 32) & 1);
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx) = LO16(ecx);
    goto loc_003296F5;

loc_003296AD: ;
    ecx = MEM32(ebx + 0x10);
    esi = MEM32(eax + 8);
    edi = MEM32(ebp + 8);
    edx = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    edx = MEM32(ebp + 0xC);
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
    ecx = MEM32(ebx + 0x10);
    MEM32(edx) = ecx;
    ecx = MEM32(ebx + 0x10);
    esi = MEM32(eax + 8);
    edi = MEM32(ebx + 0x9C);
    edx = ecx;
    if (((2) & 31u)) _cf = (int)(((uint32_t)(ecx) >> (((((2) & 31u)) - 1) & 31u)) & 1u);
    ecx = (uint32_t)(ecx) >> ((2) & 31u);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0xA0) = MEM32(ebx + 0xA0) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xA0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003296F5u); RECOMP_ABI_CALL(0x003290DAu, sub_003290DA); /* call 0x003290DA */

loc_003296F5: ;
    eax = MEM32(ebx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + 0x20)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) + eax;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ebx + 0x24)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); _fb = (((uint32_t)(MEM32(ebx + 0x24)) ^ (uint32_t)_t) & ((uint32_t)(0) ^ (uint32_t)_t)) >> 31 & 1u; MEM32(ebx + 0x24) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

loc_003296FF: ;
    SET_LO8(ecx, MEM8(ebp + -1));
    { uint32_t _icall_esp = g_esp;
    g_ebp = ebp; g_seh_ebp = ebp; { uint32_t _icall_target = MEM32(0x445CEC); PUSH32(esp, 0x00329708u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00329702u); } /* indirect call */
    }
    _cf = g_eflags & 1u; /* callee carry */

loc_00329708: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 12; return; /* ret 8 */

}

/**
 * sub_00329712
 * Original: 0x00329712 - 0x00329726 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00329712(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00329712: ;
    eax = ecx + 0x14;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0032971D; /* jne: not equal / not zero */

loc_0032971A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_eflags = (g_eflags & ~0x8C5u) | ((0) ? 0x1u : 0u) | ((RECOMP_PARITY8(_fa)) ? 0x4u : 0u) | (((_fa == 0)) ? 0x40u : 0u) | (((_fas < 0)) ? 0x80u : 0u) | (((0 != 0)) ? 0x800u : 0u); /* flags across call boundary */
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

loc_0032971D: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00329725u); RECOMP_ABI_CALL(0x00328F6Au, sub_00328F6A); /* call 0x00328F6A */
    _cf = g_eflags & 1u; /* callee carry */

loc_00329725: ;
    g_ebp = ebp; g_seh_ebp = ebp; esp += 4; return; /* ret */

}
