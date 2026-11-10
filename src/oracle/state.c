/* Canonical state dump: one fixed-size record per sampled frame.
 *
 * Everything here is little-endian and written field by field, so the file does not depend on the
 * host's struct padding and tools\state-diff.ps1 can read it with BitConverter.
 */
#include "state.h"
#include "m68k.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ST_MAX_RAM 64

static FILE *g_f;
static char  g_prefix[192];
static int   g_every = 1;
static u32   g_ram[ST_MAX_RAM];
static int   g_ramCount;
static u32   g_records;
static int   g_open;

static void put32(u8 *p, u32 v)
{
    p[0] = (u8)v; p[1] = (u8)(v >> 8); p[2] = (u8)(v >> 16); p[3] = (u8)(v >> 24);
}

static void put16(u8 *p, u32 v)
{
    p[0] = (u8)v; p[1] = (u8)(v >> 8);
}

/* FNV-1a, 64 bit: cheap, no table, and one changed byte anywhere changes it. */
static void ram_hash(const u8 *base, u32 size, u32 *lo, u32 *hi)
{
    unsigned long long h = 1469598103934665603ull;
    u32 i;

    for (i = 0; i < size; i++)
    {
        h ^= base[i];
        h *= 1099511628211ull;
    }
    *lo = (u32)h;
    *hi = (u32)(h >> 32);
}

static int ram_wanted(u32 frame)
{
    int i;
    for (i = 0; i < g_ramCount; i++)
        if (g_ram[i] == frame) return 1;
    return 0;
}

int state_open(const char *prefix, int every, const char *ramFrames)
{
    char path[256];
    u8 head[ST_HEADER];

    g_every = every < 1 ? 1 : every;
    strncpy(g_prefix, prefix, sizeof(g_prefix) - 1);
    g_ramCount = 0;
    if (ramFrames != 0)
    {
        const char *p = ramFrames;
        while (*p != 0 && g_ramCount < ST_MAX_RAM)
        {
            char *end = 0;
            u32 v = (u32)strtoul(p, &end, 0);       /* 0x.. or plain decimal */
            if (end == p) break;
            g_ram[g_ramCount++] = v;
            p = (*end == ',') ? end + 1 : end;
            if (*end == 0) break;
        }
    }
    sprintf(path, "%s.state", prefix);
    g_f = fopen(path, "wb");
    if (g_f == 0)
    {
        printf("emu: cannot write %s\n", path);
        return 0;
    }
    memset(head, 0, sizeof head);
    memcpy(head, ST_MAGIC, 4);
    put32(head + 4, ST_VERSION);
    put32(head + 8, ST_REC_SIZE);
    put32(head + 12, 0);
    fwrite(head, 1, sizeof head, g_f);
    g_records = 0;
    g_open = 1;
    printf("emu: state dump -> %s (every %d frame(s)", path, g_every);
    if (g_ramCount > 0)
    {
        int i;
        printf(", ram blob at");
        for (i = 0; i < g_ramCount; i++) printf(" %lu", (unsigned long)g_ram[i]);
    }
    printf(")\n");
    return 1;
}

void state_sample(rt_machine *m)
{
    u8 rec[ST_REC_SIZE];
    u32 hashLo, hashHi;
    int i;

    if (!g_open) return;
    if (g_every > 1 && (m->frame % (u32)g_every) != 0) return;

    ram_hash(m->mem.base, m->mem.size, &hashLo, &hashHi);
    memset(rec, 0, sizeof rec);
    put32(rec + 0, m->frame);
    put32(rec + 4, (u32)m->insns);
    for (i = 0; i < 8; i++) put32(rec + 8 + i * 4, m68k_get_reg(0, (int)M68K_REG_D0 + i));
    for (i = 0; i < 8; i++) put32(rec + 40 + i * 4, m68k_get_reg(0, (int)M68K_REG_D0 + 8 + i));
    put32(rec + 72, (u32)m68k_get_reg(0, M68K_REG_SR));
    put32(rec + 76, m68k_get_reg(0, M68K_REG_PC));
    put32(rec + 80, hashLo);
    put32(rec + 84, hashHi);
    for (i = 0; i < 128; i++) put16(rec + 88 + i * 2, m->custom[i]);
    fwrite(rec, 1, sizeof rec, g_f);
    g_records++;

    if (ram_wanted(m->frame))
    {
        char path[280];
        FILE *r;
        sprintf(path, "%s.%lu.ram", g_prefix, (unsigned long)m->frame);
        r = fopen(path, "wb");
        if (r != 0)
        {
            fwrite(m->mem.base, 1, m->mem.size, r);
            fclose(r);
            printf("emu: ram blob -> %s (frame %lu)\n", path, (unsigned long)m->frame);
        }
    }
}

void state_close(void)
{
    u8 v[4];

    if (!g_open) return;
    put32(v, g_records);
    if (fseek(g_f, 12, SEEK_SET) == 0) fwrite(v, 1, 4, g_f);
    fclose(g_f);
    g_f = 0;
    g_open = 0;
    printf("emu: state dump closed, %lu frame record(s)\n", (unsigned long)g_records);
}

int state_active(void)
{
    return g_open;
}
