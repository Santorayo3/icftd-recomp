/* Fixture loader, memory model and canonical dump for the port-vs-original diff.
 * See ctest.h for the contract; the cases themselves live in cases.c. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ctest.h"

#define MEM_SIZE (16ul * 1024ul * 1024ul)

static u8 *g_mem;
static u8 *g_before;
static u32 g_regs[16];
static u32 g_entry;
static u32 g_lo = 0xFFFFFFFFul;
static u32 g_hi;
static int g_show_regs = 0x00FF;   /* d0..d7 by default; a case may widen it */

void fx_expect(const char *what)
{
    const char *p = what;
    g_show_regs = 0;
    if (what == NULL) return;
    while (*p != '\0')
    {
        const char *start = p;
        int n = -1;
        while (*p != '\0' && *p != ',') p++;
        if (p - start == 2 && (start[0] == 'd' || start[0] == 'a') && start[1] >= '0' && start[1] <= '7')
        {
            n = start[1] - '0';
            if (start[0] == 'a') n += 8;
            g_show_regs |= 1 << n;
        }
        if (*p == ',') p++;
    }
}

static u32 mask24(u32 addr) { return addr & 0x00FFFFFFul; }

u8 *fx_base(void) { return g_mem; }

u32 fx_reg(int index) { return g_regs[index & 15]; }

void fx_set_reg(int index, u32 value) { g_regs[index & 15] = value; }

void fx_set_d0_word(u16 value)
{
    g_regs[0] = (g_regs[0] & 0xFFFF0000ul) | (u32)value;
}

void fx_set_d0_long(u32 value) { g_regs[0] = value; }

void fx_mark_written(u32 addr, u32 len)
{
    u32 a = mask24(addr);
    if (len == 0) return;
    if (a < g_lo) g_lo = a;
    if (a + len - 1 > g_hi) g_hi = a + len - 1;
    if (g_hi >= MEM_SIZE) g_hi = MEM_SIZE - 1;
}

u8 fx_read8(u32 addr)
{
    u32 a = mask24(addr);
    return a < MEM_SIZE ? g_mem[a] : 0;
}

u16 fx_read16(u32 addr)
{
    return (u16)(((u32)fx_read8(addr) << 8) | fx_read8(addr + 1));
}

u32 fx_read32(u32 addr)
{
    return ((u32)fx_read8(addr) << 24) | ((u32)fx_read8(addr + 1) << 16) |
           ((u32)fx_read8(addr + 2) << 8) | (u32)fx_read8(addr + 3);
}

void fx_write8(u32 addr, u8 value)
{
    u32 a = mask24(addr);
    if (a >= MEM_SIZE) return;
    fx_mark_written(a, 1);
    g_mem[a] = value;
}

void fx_write16(u32 addr, u16 value)
{
    fx_write8(addr, (u8)(value >> 8));
    fx_write8(addr + 1, (u8)value);
}

void fx_write32(u32 addr, u32 value)
{
    fx_write8(addr, (u8)(value >> 24));
    fx_write8(addr + 1, (u8)(value >> 16));
    fx_write8(addr + 2, (u8)(value >> 8));
    fx_write8(addr + 3, (u8)value);
}

static u32 read_le32(const u8 *p)
{
    return (u32)p[0] | ((u32)p[1] << 8) | ((u32)p[2] << 16) | ((u32)p[3] << 24);
}

static int load_fixture(const char *path)
{
    FILE *f = fopen(path, "rb");
    u8 hdr[16];
    u8 buf[4];
    u32 count, i, j;

    if (f == NULL) { fprintf(stderr, "ctest: cannot open %s\n", path); return 0; }
    if (fread(hdr, 1, 16, f) != 16 || memcmp(hdr, "ICFX", 4) != 0 || read_le32(hdr + 4) != 1)
    {
        fprintf(stderr, "ctest: %s is not an ICFX v1 fixture\n", path);
        fclose(f);
        return 0;
    }
    g_entry = read_le32(hdr + 8);

    for (i = 0; i < 16; i++)
    {
        if (fread(buf, 1, 4, f) != 4) { fclose(f); return 0; }
        g_regs[i] = read_le32(buf);
    }
    if (fread(buf, 1, 4, f) != 4) { fclose(f); return 0; }
    count = read_le32(buf);

    for (i = 0; i < count; i++)
    {
        u8 bh[8];
        u32 addr, len;
        if (fread(bh, 1, 8, f) != 8) { fclose(f); return 0; }
        addr = read_le32(bh);
        len = read_le32(bh + 4);
        for (j = 0; j < len; j++)
        {
            int c = fgetc(f);
            if (c == EOF) { fclose(f); return 0; }
            fx_write8(addr + j, (u8)c);
        }
    }
    fclose(f);
    /* The fixture bytes are the starting state, not a change. */
    memcpy(g_before, g_mem, MEM_SIZE);
    g_lo = 0xFFFFFFFFul;
    g_hi = 0;
    return 1;
}

static void dump(void)
{
    int i;
    u32 a, start = 0;

    printf("rcmp 1\n");
    printf("entry %08lx\n", g_entry);
    printf("stop rts\n");
    for (i = 0; i < 8; i++) if (g_show_regs & (1 << i)) printf("d%d %08lx\n", i, g_regs[i]);
    for (i = 0; i < 8; i++) if (g_show_regs & (1 << (8 + i))) printf("a%d %08lx\n", i, g_regs[8 + i]);
    printf("sr 0000\n");

    if (g_lo == 0xFFFFFFFFul) return;

    a = g_lo;
    while (a <= g_hi)
    {
        int inRun = 0;
        start = a;
        while (a <= g_hi && g_mem[a] != g_before[a]) { a++; inRun = 1; }
        if (inRun)
        {
            u32 b;
            printf("mem %08lx ", start);
            for (b = start; b < a; b++) printf("%02x", g_mem[b]);
            printf("\n");
        }
        while (a <= g_hi && g_mem[a] == g_before[a]) a++;
    }
}

int main(int argc, char **argv)
{
    const char *caseName = NULL, *fixturePath = NULL;
    fx_case fn;
    int i;

    for (i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--list") == 0) { fx_list_cases(); return 0; }
        else if (strcmp(argv[i], "--fixture") == 0 && i + 1 < argc) fixturePath = argv[++i];
        else if (argv[i][0] != '-' && caseName == NULL) caseName = argv[i];
    }
    if (caseName == NULL || fixturePath == NULL)
    {
        fprintf(stderr, "usage: ctest <addr> --fixture <file.fx> [--list]\n");
        return 2;
    }
    fn = fx_find_case(caseName);
    if (fn == NULL) { fprintf(stderr, "ctest: no case for %s\n", caseName); return 2; }

    g_mem = (u8 *)malloc(MEM_SIZE + 1);
    g_before = (u8 *)malloc(MEM_SIZE + 1);
    if (g_mem == NULL || g_before == NULL) { fprintf(stderr, "ctest: out of memory\n"); return 2; }
    memset(g_mem, 0, MEM_SIZE + 1);
    memset(g_before, 0, MEM_SIZE + 1);

    if (!load_fixture(fixturePath)) return 2;

    if (fn() != 0) return 3;
    dump();
    free(g_mem);
    free(g_before);
    return 0;
}
