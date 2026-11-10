/* recomp-check: replay one ICFX fixture through a translated function and print the canonical
 * dump that `rcmp --dump` prints, so the two can be diffed byte for byte.
 *
 * A development tool (it links src\runtime + src\recomp, never Musashi). Everything the fixture
 * declares - registers, memory blocks, the stub models for the vector slots it uses - is applied on
 * top of the same load image `rcmp` loads, because the comparison is only meaningful if both sides
 * start from the same machine.
 *
 *   recomp-check <fixture.fx> [--dump <out.txt>] [--image <dshell.img>]
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "types.h"
#include "platform.h"
#include "machine.h"
#include "cpu.h"
#include "fn_table.h"

#define CHECK_RAM_SIZE 0x01000000u     /* the interpreter's 24-bit space, mask included */
#define CHECK_MAX_STUBS 32
#define CHECK_MAX_RANGES 4096
#define CHECK_IMAGE "export\\code\\dshell\\dshell.img"

/* ICFX v2 (src\assetExport\Cpu68k\Harness.cs, WriteRawFixture) */
#define ICFX_MAGIC "ICFX"
#define ICFX_VERSION 2u
#define ICFX_FLAG_ALLOW_OS 1u          /* fixture "allowOsStubs": an unmodelled call answers 0 */

typedef struct fx_stub
{
    s32 lib;        /* library index, -1 when the writer could not resolve it */
    s32 lvo;        /* the LVO the thunk tails into */
    int slot;       /* the vector slot the fixture named */
    u32 model;      /* 0 zero, 1 allocmem, 2 freemem */
    u32 base;
    u32 next;       /* bump pointer */
} fx_stub;

static rt_machine g_m;
static cpu_t g_c;
static u8 *g_before;
static fx_stub g_stubs[CHECK_MAX_STUBS];
static int g_stubCount;
static int g_osUnmodelled;
static int g_allowOs;
static int g_budget;
static jmp_buf g_abort;

/* --- little-endian reader ------------------------------------------------------------------ */

static u32 rd32(const u8 *p) { return (u32)p[0] | ((u32)p[1] << 8) | ((u32)p[2] << 16) | ((u32)p[3] << 24); }

/* --- the fixture's stub models -------------------------------------------------------------
 * A fixture stub is a *model*, not the runtime shim: rcmp allocates at the declared base with an
 * 8-byte granularity, so the translated function must be handed the same addresses. */
static int stub_host(cpu_t *c, rt_machine *m, int lib, s32 lvo)
{
    int i;

    for (i = 0; i < g_stubCount; i++)
    {
        fx_stub *s = &g_stubs[i];
        u32 bytes, flags, block, next;
        u32 sp = c->a[7];

        /* The interpreter keys a library call on its LVO alone (the displacement IS the LVO), so a
         * fixture stub matches by LVO and only checks the library when both sides resolved one. */
        if (s->lvo != lvo) continue;
        if (s->lib >= 0 && lib >= 0 && s->lib != lib) continue;
        switch (s->model)
        {
        case 1:                                        /* allocmem(size, flags) */
            bytes = rt_read32(&m->mem, sp + 4);
            flags = rt_read32(&m->mem, sp + 8);
            if (s->next == 0) s->next = s->base;
            block = s->next;
            next = (block + bytes + 7u) & ~7u;
            s->next = next;
            if (flags != 0) memset(m->mem.base + block, 0, bytes);
            c->d[0] = block;
            return 1;
        case 2:                                        /* freemem(block, bytes) */
            c->d[0] = 0;
            return 1;
        default:                                       /* zero */
            c->d[0] = 0;
            return 1;
        }
    }
    /* Whatever the fixture did not model: `rcmp` answers 0 when allowOsStubs is set and fails
     * otherwise. Doing the same here keeps the two dumps comparable. */
    if (g_allowOs) { c->d[0] = 0; return 1; }
    printf("recomp-check: os call lvo %ld is not modelled by the fixture\n", (long)lvo);
    g_osUnmodelled = 1;
    g_m.stop = 1;
    return 1;                                          /* handled: the run stops */
}

/* --- canonical dump ------------------------------------------------------------------------- */

static void put_hex(FILE *f, const u8 *p, u32 len)
{
    u32 i;
    for (i = 0; i < len; i++) fprintf(f, "%02x", p[i]);
}

static void dump(FILE *f, u32 entry, int stopError)
{
    const u8 *now = g_m.mem.base;
    u32 a;
    int i;

    fprintf(f, "recomp 1\n");
    fprintf(f, "entry %08lx\n", (unsigned long)entry);
    fprintf(f, "stop %s\n", stopError ? "error" : g_budget ? "budget" : "rts");
    fprintf(f, "insns -\n");                           /* not comparable: no instruction loop */
    fprintf(f, "pc %08lx\n", (unsigned long)g_c.pc);
    for (i = 0; i < 8; i++) fprintf(f, "d%d %08lx\n", i, (unsigned long)g_c.d[i]);
    for (i = 0; i < 8; i++) fprintf(f, "a%d %08lx\n", i, (unsigned long)g_c.a[i]);
    fprintf(f, "sr %04lx\n", (unsigned long)(g_c.sr & 0xFFFFu));

    a = 0;
    while (a < CHECK_RAM_SIZE)
    {
        u32 start;
        while (a < CHECK_RAM_SIZE && now[a] == g_before[a]) a++;
        if (a >= CHECK_RAM_SIZE) break;
        start = a;
        while (a < CHECK_RAM_SIZE && now[a] != g_before[a]) a++;
        fprintf(f, "mem %08lx ", (unsigned long)start);
        put_hex(f, now + start, a - start);
        fprintf(f, "\n");
    }
}

int main(int argc, char **argv)
{
    const char *path = 0, *dumpPath = 0, *imagePath = CHECK_IMAGE;
    FILE *f;
    u8 *file;
    long size;
    u32 entry, i, count, offset, flags;
    int rc = 0, stopError = 0;
    rc_fn fn;
    int k;

    for (k = 1; k < argc; k++)
    {
        if (strcmp(argv[k], "--dump") == 0 && k + 1 < argc) { dumpPath = argv[++k]; continue; }
        if (strcmp(argv[k], "--image") == 0 && k + 1 < argc) { imagePath = argv[++k]; continue; }
        if (path == 0) { path = argv[k]; continue; }
    }
    if (path == 0)
    {
        printf("usage: recomp-check <fixture.fx> [--dump <out.txt>] [--image <dshell.img>]\n");
        return 1;
    }
    f = fopen(path, "rb");
    if (f == 0) { printf("recomp-check: cannot read %s\n", path); return 1; }
    fseek(f, 0, SEEK_END);
    size = ftell(f);
    fseek(f, 0, SEEK_SET);
    file = (u8 *)malloc((size_t)size);
    if (file == 0 || fread(file, 1, (size_t)size, f) != (size_t)size) { fclose(f); return 1; }
    fclose(f);

    if (size < 16 || memcmp(file, ICFX_MAGIC, 4) != 0 || rd32(file + 4) != ICFX_VERSION)
    {
        printf("recomp-check: %s is not an ICFX v%u fixture (re-run rcmp --emit-raw)\n", path, ICFX_VERSION);
        free(file);
        return 1;
    }

    memset(&g_m, 0, sizeof g_m);
    if (!rt_mem_init(&g_m.mem, CHECK_RAM_SIZE)) { printf("recomp-check: out of memory\n"); return 1; }
    rt_current = &g_m;                       /* rc_os_call -> rt_os_call needs it */
    g_m.stop = 0;

    /* The load image first, exactly like rcmp: code bytes, the vector table and the engine's own
     * pointer tables are all read by translated code. */
    {
        FILE *im = fopen(imagePath, "rb");
        long imSize;
        u8 *imBuf;
        if (im == 0) { printf("recomp-check: cannot read the image %s\n", imagePath); return 1; }
        fseek(im, 0, SEEK_END); imSize = ftell(im); fseek(im, 0, SEEK_SET);
        imBuf = (u8 *)malloc((size_t)imSize);
        if (imBuf == 0 || fread(imBuf, 1, (size_t)imSize, im) != (size_t)imSize) { fclose(im); return 1; }
        fclose(im);
        rt_mem_load(&g_m.mem, 0, imBuf, (u32)imSize);
        free(imBuf);
    }

    entry = rd32(file + 8);
    flags = rd32(file + 12);
    g_allowOs = (flags & ICFX_FLAG_ALLOW_OS) != 0;
    rc_allow_unmodelled = g_allowOs;
    for (i = 0; i < 8; i++) g_c.d[i] = rd32(file + 16 + i * 4);
    for (i = 0; i < 8; i++) g_c.a[i] = rd32(file + 48 + i * 4);
    g_c.sr = (u16)rd32(file + 80);
    g_c.pc = entry;

    count = rd32(file + 84);
    offset = 88;
    for (i = 0; i < count; i++)
    {
        u32 addr = rd32(file + offset), len = rd32(file + offset + 4);
        memcpy(g_m.mem.base + (addr & 0xFFFFFFu), file + offset + 8, len);
        offset += 8 + len;
    }

    count = rd32(file + offset);
    offset += 4;
    g_stubCount = 0;
    for (i = 0; i < count && g_stubCount < CHECK_MAX_STUBS; i++)
    {
        fx_stub *s = &g_stubs[g_stubCount++];
        s->lib = (s32)rd32(file + offset);
        s->lvo = (s32)rd32(file + offset + 4);
        s->slot = (int)rd32(file + offset + 8);
        s->model = rd32(file + offset + 12);
        s->base = rd32(file + offset + 16);
        s->next = 0;
        offset += 20;
    }
    free(file);

    g_before = (u8 *)malloc(CHECK_RAM_SIZE);
    if (g_before == 0) { printf("recomp-check: out of memory\n"); return 1; }
    memcpy(g_before, g_m.mem.base, CHECK_RAM_SIZE);

    fn = rc_lookup(entry);
    if (fn == 0)
    {
        printf("recomp-check: %08lx is not translated\n", (unsigned long)entry);
        return 1;
    }
    rc_stub_host = stub_host;
    /* A fixture may describe a fragment that never returns, or a busy-wait nothing releases:
     * bound the replay instead of letting it hang the differential. */
    rc_ops = 0;
    rc_opsLimit = 20000000ul;
    rc_abort = &g_abort;
    rc_depth = 0;
    rc_stopOnReturn = 1;                     /* one function: stop at its own rts */
    if (setjmp(g_abort) == 0) rc_call(&g_c, &g_m, entry);
    else g_budget = 1;
    rc_abort = 0;
    rc_stopOnReturn = 0;

    stopError = g_osUnmodelled || g_m.stop;
    if (dumpPath != 0)
    {
        FILE *o = fopen(dumpPath, "wb");
        if (o == 0) { printf("recomp-check: cannot write %s\n", dumpPath); rc = 1; }
        else { dump(o, entry, stopError); fclose(o); }
    }
    dump(stdout, entry, stopError);
    if (stopError) return 3;
    return g_budget ? 2 : rc;
}
