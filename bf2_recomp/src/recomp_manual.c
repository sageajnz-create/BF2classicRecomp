/**
 * Manual function overrides and ICALL diagnostics
 *
 * This file provides:
 *   - recomp_lookup_manual()  : intercept specific Xbox VAs with hand-written code
 *   - recomp_icall_fail_log() : log when an indirect call target can't be resolved
 *   - ICALL trace ring buffer  : globals used by the RECOMP_ICALL macro
 *
 * The recomp pipeline generates an auto-dispatch table (recomp_lookup) that
 * resolves most function addresses. recomp_lookup_manual() is called FIRST,
 * giving you a chance to override any function with a custom implementation.
 *
 * Common reasons to add manual overrides:
 *   - Trace a function to understand call flow (wrap the generated version)
 *   - Fix a function the lifter translated incorrectly
 *   - Stub out a function that crashes (return early, set eax to a safe value)
 *   - Redirect a function to a native implementation (e.g., skip CRT init)
 *   - Intercept D3D/audio calls for custom rendering or sound
 */

#include <stdio.h>
#include "recomp_types.h"

/* ── ICALL trace ring buffer ───────────────────────────────── */

/*
 * These globals are written by the RECOMP_ICALL macro (defined in
 * recomp_types.h) every time an indirect call is dispatched. When a
 * crash occurs, the VEH handler or recomp_icall_fail_log() can dump
 * the last 16 call targets to help you trace what happened.
 *
 * The runtime owns them: xbox_kernel defines all three in
 * src/kernel/xbox_memory_layout.c, and recomp_types.h declares them extern.
 * Declare, do not define -- a definition here as well is a duplicate symbol,
 * and a project copied from this template failed to link on all three:
 *
 *   xbox_memory_layout.obj : error LNK2005: g_icall_count already defined
 *                            in recomp_manual.obj
 */
/* ── Register state (defined in xbox_memory_layout.c) ──────── */

extern void sub_00136E60(void);
extern void sub_0041EFE6(void);

/* DirectSound voice allocation guard. If the manager pointer in ecx is the
 * unallocated sentinel (0x80000000) or an invalid address (< 0x10000), return
 * DSERR_ALLOCATED (0x88780032) instead of dereferencing uninitialized contiguous memory. */
static void sub_0041EFE6_hook(void)
{
    if (g_ecx == 0x80000000u || g_ecx < 0x00010000u) {
        static RECOMP_TLS int logged;
        if (!logged) {
            logged = 1;
            fprintf(stderr, "[DSOUND] Handled unallocated voice manager (ecx=0x%08X)\n", g_ecx);
        }
        g_eax = 0x88780032u; /* DSERR_ALLOCATED */
        g_esp += 8;          /* pop return address (4) + 1 argument (4) */
        return;
    }
    sub_0041EFE6();
}

/* XPP memory-unit initialization. BF2 uses disk saves (UDATA), so memory unit
 * enumeration reports 0 units. */
static void sub_0043CF84(void)
{
    static RECOMP_TLS int logged;
    if (!logged) {
        logged = 1;
        fprintf(stderr, "[ICALL] Reached recovered XPP MU init 0x0043CF84\n");
    }
    MEM8(0x0043CD69) = 0;
    g_eax = 0;
    g_esp += 8; /* pop return address (4) + 1 argument (4) */
}

/* Vtable slot 0x00489BA4 in the original XBE. The original analysis included
 * this entry in the preceding function and omitted it from guest dispatch. */
static void sub_0013FAD0(void)
{
    static RECOMP_TLS int logged;
    uint32_t frame = g_seh_ebp;
    uint32_t kind;

    g_eax = MEM32(g_ecx + 0xC);
    g_edx = MEM32(g_eax + 0xC);
    MEM32(g_edx + 0x330) = 0;
    kind = MEM32(g_ecx + 4);
    if (!logged) {
        logged = 1;
        fprintf(stderr, "[ICALL] Reached recovered entry 0x0013FAD0 (kind %u)\n", kind);
    }
    g_eax = kind - 7u;
    if (g_eax <= 10) {
        PUSH32(g_esp, g_esi);
        switch (kind) {
        case 8: case 15: case 16: case 17:
            g_esi = MEM32(g_ecx + 0xC) + 0x10;
            g_ebp = g_seh_ebp = frame;
            PUSH32(g_esp, 0x0013FAFEu);
            RECOMP_ABI_CALL(0x00136E60u, sub_00136E60);
            break;
        case 10:
            g_eax = MEM32(g_ecx + 0x10);
            g_ecx += 0x10;
            POP32(g_esp, g_esi);
            RECOMP_ITAIL(MEM32(g_eax + 4));
            return;
        case 11:
            g_edx = MEM32(g_ecx + 0x48);
            g_ecx += 0x48;
            POP32(g_esp, g_esi);
            RECOMP_ITAIL(MEM32(g_edx + 4));
            return;
        case 13:
            g_eax = MEM32(g_ecx + 0x78);
            g_ecx += 0x78;
            POP32(g_esp, g_esi);
            RECOMP_ITAIL(MEM32(g_eax + 4));
            return;
        case 14:
            g_ecx = MEM32(g_ecx + 0xC);
            g_eax = MEM32(g_ecx + 0xC) + 0x2C4;
            g_ecx = (g_ecx & 0xFFFFFF00u) | (MEM8(g_eax + 0xC) | 0x40u);
            MEM8(g_eax + 0xC) = (uint8_t)g_ecx;
            break;
        }
        POP32(g_esp, g_esi);
    }
    g_ebp = g_seh_ebp = frame;
    g_esp += 4;
}

/* The original x87 helper pops two values and pushes positive zero. Its
 * entry lies immediately before the second pop at generated 0x0037A34E. */
static void sub_0037A34C(void)
{
    static RECOMP_TLS int logged;
    if (!logged) {
        logged = 1;
        fprintf(stderr, "[ICALL] Reached recovered x87 entry 0x0037A34C\n");
    }
    g_fp_top = (g_fp_top + 1) & 7;
    g_fp_stack[g_fp_top] = 0.0;
    g_esp += 4;
}

/* ── Manual function overrides ─────────────────────────────── */

/*
 * Return a function pointer to override the given Xbox VA, or NULL
 * to fall through to the auto-generated dispatch table.
 *
 * This is called on every indirect call (RECOMP_ICALL) and every
 * direct call through the dispatch table, so keep it fast. A chain
 * of if-statements on uint32_t compiles to a simple comparison
 * sequence; for large override tables, consider a sorted array
 * with binary search.
 *
 * Examples of common override patterns:
 *
 *   // Trace wrapper: log entry/exit around the generated function
 *   extern void sub_00012345(void);
 *   static void traced_sub_00012345(void) {
 *       fprintf(stderr, "[TRACE] sub_00012345 entered, eax=0x%08X\n", g_eax);
 *       sub_00012345();
 *       fprintf(stderr, "[TRACE] sub_00012345 returned, eax=0x%08X\n", g_eax);
 *   }
 *
 *   // Stub: skip a function entirely (return 0 in eax)
 *   static void stub_00067890(void) {
 *       g_eax = 0;
 *   }
 *
 *   // Fix: replace a broken lifted function with correct C
 *   static void fixed_sub_000ABCDE(void) {
 *       // Read arguments from stack/registers per calling convention
 *       uint32_t arg1 = g_ecx;
 *       uint32_t arg2 = MEM32(g_esp + 4);
 *       // ... correct implementation ...
 *       g_eax = result;
 *   }
 */
recomp_func_t recomp_lookup_manual(uint32_t xbox_va)
{
    if (xbox_va == 0x0013FAD0u)
        return sub_0013FAD0;
    if (xbox_va == 0x0037A34Cu)
        return sub_0037A34C;
    if (xbox_va == 0x0041EFE6u)
        return sub_0041EFE6_hook;
    if (xbox_va == 0x0043CF84u)
        return sub_0043CF84;
    return NULL;
}

/* ── ICALL failure logging ─────────────────────────────────── */

/*
 * Called when RECOMP_ICALL cannot resolve a target address.
 * This usually means one of:
 *   - A vtable dispatch to an address not in the dispatch table
 *   - A function pointer loaded from uninitialized or corrupt memory
 *   - A kernel thunk address that the bridge doesn't handle
 *
 * During early bring-up you will see many of these. Most are harmless
 * (the ICALL macro pops the dummy return address and continues).
 * Focus on the ones that cause crashes or incorrect behavior.
 */
void recomp_icall_fail_log(uint32_t va)
{
    fprintf(stderr, "[ICALL] Failed to resolve VA 0x%08X (total calls: %llu)\n",
            va, (unsigned long long)g_icall_count);

    /* Dump last 16 call targets from the ring buffer */
    fprintf(stderr, "  Recent ICALL targets:\n");
    for (int i = 0; i < 16; i++) {
        int idx = (g_icall_trace_idx - 16 + i) & 15;
        if (g_icall_trace[idx])
            fprintf(stderr, "    [%2d] 0x%08X\n", i, g_icall_trace[idx]);
    }
    fflush(stderr);
}

/* An indirect call whose target is not code: a null or wild function pointer.
 *
 * Skipping these is right -- calling a data address is worse -- but skipping
 * them *silently* is not. They almost always arrive inside a loop, so the
 * symptom is a hang with no output rather than a diagnosable null vtable call.
 *
 * Rate-limited per address: a spin can produce millions of these, and the
 * useful information is which addresses occur, not how often.
 */
void recomp_icall_not_code_log(uint32_t va)
{
    enum { SLOTS = 16 };
    static uint32_t seen[SLOTS];
    static uint64_t hits[SLOTS];
    static int count;
    int i;

    for (i = 0; i < count; i++)
        if (seen[i] == va)
            break;
    if (i == count) {
        if (count == SLOTS)
            return;
        seen[count] = va;
        hits[count] = 0;
        count++;
    }
    hits[i]++;
    /* Report at 1, 10, 100, 1000 ... rather than once. A single line says a
     * wild pointer was skipped; the progression says it is being skipped in a
     * loop, which is the difference between a curiosity and the reason the
     * title is hung. */
    {
        uint64_t n = hits[i];
        while (n >= 10 && n % 10 == 0)
            n /= 10;
        if (n != 1)
            return;
    }
    fprintf(stderr, "[ICALL] target 0x%08X is not code -- skipped %llu time(s) "
                    "(null or wild function pointer, at call #%llu)\n",
            va, (unsigned long long)hits[i],
            (unsigned long long)g_icall_count);
    fflush(stderr);
}

/* ── Untranslated instructions ───────────────────────────────────────────
 *
 * The lifter emits RECOMP_UNIMPL(text, va) at every instruction it has no
 * translation for, in place of the bare comment it used to leave. The
 * instruction is still a no-op; this only stops the omission being silent.
 * RECOMP_UNIMPL_TRAP=1 aborts at the first hit, at the guest address of the
 * cause rather than wherever the damage surfaces. */
#include <stdlib.h>

void recomp_unimpl(const char *text, uint32_t va)
{
    static int printed;
    const char *trap = getenv("RECOMP_UNIMPL_TRAP");
    int stop = trap && *trap && *trap != '0';

    if (printed < 50 || stop) {
        printed++;
        fprintf(stderr,
                "[UNIMPL] untranslated instruction REACHED: `%s` at 0x%08X"
                " (a no-op; set RECOMP_UNIMPL_TRAP=1 to stop here)\n",
                text, va);
        fflush(stderr);
    }
    if (stop) abort();
}
