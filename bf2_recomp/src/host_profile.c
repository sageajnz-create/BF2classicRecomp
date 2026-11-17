/* A sampling profiler for the process's threads.
 *
 * The pushbuffer executor reports draw, clear and present time, and the ack
 * thread reports how much of the wall clock it spends inside a pass. Neither
 * says *which function* the pass is in, and the guest thread is not where the
 * drawing happens: the toolkit's NV2A ack thread owns the walk. So this samples
 * every thread in the process round-robin and prints the top functions every
 * few seconds, attributing each sample to the function it landed in.
 *
 * Off unless RECOMP_HOST_PROFILE is set. RECOMP_HOST_PROFILE_MS changes the
 * reporting window (default 5000).
 *
 * A thread is only ever suspended for the instruction-pointer read and is
 * always resumed before anything is printed: a thread suspended inside fprintf
 * must not be made to wait on a stdio lock the reporter holds.
 */
#include "host_profile.h"

#include <windows.h>
#include <dbghelp.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tlhelp32.h>

#define PROFILE_SAMPLES 16384
#define PROFILE_SYMBOLS 4096
#define PROFILE_TOP 12
#define PROFILE_THREADS 32

static DWORD s_self_tid;
static DWORD s_thread_id[PROFILE_THREADS];
static int s_thread_count;
static HANDLE s_thread;
static volatile LONG s_enabled;
static volatile LONG s_count;
static uintptr_t s_rip[PROFILE_SAMPLES];

typedef struct {
    uintptr_t address;
    char name[96];
    char where[64];                     /* source file:line, when known */
} ProfileSymbol;

static ProfileSymbol s_symbols[PROFILE_SYMBOLS];
static int s_symbol_count;

static ProfileSymbol *symbol_for(uintptr_t address)
{
    DWORD64 displacement = 0;
    char buffer[sizeof(SYMBOL_INFO) + 96];
    SYMBOL_INFO *symbol = (SYMBOL_INFO *)buffer;
    ProfileSymbol *entry;
    int i;

    if (!SymGetModuleBase64(GetCurrentProcess(), (DWORD64)address))
        return NULL;
    for (i = 0; i < s_symbol_count; i++)
        if (s_symbols[i].address == address)
            return &s_symbols[i];
    if (s_symbol_count == PROFILE_SYMBOLS)
        return NULL;
    memset(buffer, 0, sizeof buffer);
    symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
    symbol->MaxNameLen = 95;
    if (!SymFromAddr(GetCurrentProcess(), (DWORD64)address, &displacement, symbol))
        return NULL;
    entry = &s_symbols[s_symbol_count++];
    entry->address = address;
    snprintf(entry->name, sizeof entry->name, "%s+0x%llX", symbol->Name,
             (unsigned long long)displacement);
    {
        IMAGEHLP_LINE64 line;
        DWORD column = 0;

        memset(&line, 0, sizeof line);
        line.SizeOfStruct = sizeof line;
        if (SymGetLineFromAddr64(GetCurrentProcess(), (DWORD64)address, &column, &line))
            snprintf(entry->where, sizeof entry->where, "%s:%lu",
                     line.FileName ? line.FileName : "?", line.LineNumber);
    }
    return entry;
}

static void refresh_threads(void)
{
    HANDLE snapshot;
    THREADENTRY32 entry;
    DWORD self = GetCurrentProcessId();

    s_thread_count = 0;
    snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
    if (snapshot == INVALID_HANDLE_VALUE)
        return;
    memset(&entry, 0, sizeof entry);
    entry.dwSize = sizeof entry;
    if (Thread32First(snapshot, &entry)) {
        do {
            if (entry.th32OwnerProcessID != self || entry.th32ThreadID == s_self_tid)
                continue;
            if (s_thread_count == PROFILE_THREADS)
                break;
            s_thread_id[s_thread_count++] = entry.th32ThreadID;
        } while (Thread32Next(snapshot, &entry));
    }
    CloseHandle(snapshot);
}

typedef struct {
    const char *name;
    const char *where;
    uint32_t count;
} ProfileItem;

/* Samples of threads parked in a wait say nothing about where the frame went;
 * they only outnumber the working ones. */
static int waiting_symbol(const char *name)
{
    static const char *prefixes[] = {
        "Zw", "Nt", "Rtlp", "Ldrp", "BaseThread", "RtlUserThreadStart",
        "NtGdi", "Win32u", "USER32", "Gdi", "DbgUi", "Tpp", "Concurrency"
    };

    for (size_t i = 0; i < sizeof prefixes / sizeof *prefixes; i++)
        if (!strncmp(name, prefixes[i], strlen(prefixes[i])))
            return 1;
    return 0;
}

/* Runs on the sampler thread between samples: nothing is suspended here. */
static void report_window(LONG total)
{
    ProfileItem items[128];
    int used = 0, i, j;
    LONG active = 0;

    if (total <= 0)
        return;
    if (total > PROFILE_SAMPLES)
        total = PROFILE_SAMPLES;
    memset(items, 0, sizeof items);
    for (i = 0; i < total; i++) {
        ProfileSymbol *symbol = symbol_for(s_rip[i]);

        if (!symbol || waiting_symbol(symbol->name))
            continue;
        active++;
        for (j = 0; j < used; j++)
            if (items[j].name == symbol->name)
                break;
        if (j == used) {
            if (used == (int)(sizeof items / sizeof *items))
                continue;
            items[used].name = symbol->name;
            items[used].where = symbol->where;
            used++;
        }
        items[j].count++;
    }
    fprintf(stderr, "[PROFILE] %ld samples, %ld running, %d threads\n",
            (long)total, (long)active, s_thread_count);
    for (i = 0; i < PROFILE_TOP && active > 0; i++) {
        int best = -1;

        for (j = 0; j < used; j++)
            if (items[j].count && (best < 0 || items[j].count > items[best].count))
                best = j;
        if (best < 0)
            break;
        fprintf(stderr, "[PROFILE]   %5.1f%%  %s%s%s\n",
                100.0 * items[best].count / active, items[best].name,
                items[best].where && *items[best].where ? "  " : "",
                items[best].where && *items[best].where ? items[best].where : "");
        items[best].count = 0;
    }
}

static DWORD WINAPI sampler(LPVOID unused)
{
    const char *env = getenv("RECOMP_HOST_PROFILE_MS");
    ULONGLONG window = (ULONGLONG)(env && *env ? atoi(env) : 5000);
    ULONGLONG next = GetTickCount64() + window;
    int turn = 0;

    (void)unused;
    s_self_tid = GetCurrentThreadId();
    refresh_threads();
    while (s_enabled) {
        Sleep(1);
        if (!s_enabled)
            break;
        /* Several threads per tick: round-robin alone starves the busy ones,
         * and a pass of 40 ms only gets a handful of samples out of it. */
        for (int n = 0; n < 4; n++) {
            if (turn >= s_thread_count)
                turn = 0;
            if (!s_thread_count)
                break;
            DWORD tid = s_thread_id[turn++];
            HANDLE thread = OpenThread(THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT,
                                       FALSE, tid);

            if (!thread)
                continue;
            if (SuspendThread(thread) != (DWORD)-1) {
                CONTEXT context;

                memset(&context, 0, sizeof context);
                context.ContextFlags = CONTEXT_CONTROL;
                if (GetThreadContext(thread, &context)) {
                    LONG slot = InterlockedIncrement(&s_count) - 1;

                    if (slot < PROFILE_SAMPLES)
                        s_rip[slot] = (uintptr_t)context.Rip;
                }
                ResumeThread(thread);
            }
            CloseHandle(thread);
        }
        if (GetTickCount64() >= next) {
            LONG total = InterlockedExchange(&s_count, 0);

            report_window(total);
            refresh_threads();
            next = GetTickCount64() + window;
        }
    }
    return 0;
}

void host_profile_start(void)
{
    const char *env = getenv("RECOMP_HOST_PROFILE");

    if (!env || !*env || *env == '0')
        return;
    s_self_tid = GetCurrentThreadId();
    SymSetOptions(SYMOPT_DEFERRED_LOADS | SYMOPT_UNDNAME | SYMOPT_LOAD_LINES);
    SymInitialize(GetCurrentProcess(), NULL, TRUE);
    InterlockedExchange(&s_enabled, 1);
    s_thread = CreateThread(NULL, 0, sampler, NULL, 0, NULL);
    if (s_thread)
        fprintf(stderr, "[PROFILE] sampling every thread every millisecond\n");
    else
        InterlockedExchange(&s_enabled, 0);
}

void host_profile_report(void)
{
    if (!InterlockedCompareExchange(&s_enabled, 0, 1))
        return;
    if (s_thread) {
        WaitForSingleObject(s_thread, 2000);
        CloseHandle(s_thread);
        s_thread = NULL;
    }
    report_window(InterlockedExchange(&s_count, 0));
}
