/* recomp-check: replay one ICFX fixture through a translated function and print the canonical
 * dump that `rcmp --dump` prints, so the two can be diffed byte for byte.
 *
 * A development tool (it links src\runtime + src\recomp, never Musashi). Everything the fixture
 * declares - registers, memory blocks, the stub models for the vector slots it uses - is applied on
 * top of the same load image `rcmp` loads, because the comparison is only meaningful if both sides
 * start from the same machine.
 *
 *   recomp-check <fixture.fx> [--dump <out.txt>] [--image <dshell.img>]
 *   recomp-check --collide [<cases>]
 *
 * --collide is the same comparison for the hand-written patches in src\recomp\patches: the native
 * routine and the generated translation of the very same 68000 routine are run from identical
 * machine state, and must agree on D0, the CCR, A7, every byte of RAM they write and the cycles
 * they charge to the frame budget. The fixtures cannot cover those (there is no 68000 code left to
 * interpret them against), so the generated body - which the fixtures *do* cover - is the reference.
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

/* --- --collide: the native patches against the generated translation -------------------------
 * Same idea as a fixture replay, one level up: run both implementations of a patched routine from
 * the same machine state and compare what the routine's caller can see. RAM is compared byte for
 * byte except the scratch a real caller cannot see - the words below SP, which hold the argument
 * block and whatever the routine pushed over it. */

#define COLL_RAM     0x0100000u       /* the patch check needs no more: image + five planes */
#define COLL_A4      0x29A56u         /* the 0x4000 build's data base (0x2DA56) minus its load address */
#define COLL_PLANES  0x40000u
#define COLL_STRIDE  0x4000u
#define COLL_GUARD   0x40u

static u8 *coll_image;
static u32 coll_imageLen;
static u8 *coll_pristine;
static u8 *coll_case;
static u8 *coll_before;
static u8 *coll_after;
static unsigned long coll_rng = 12345;
static cpu_t coll_start;

static u32 coll_rnd(void)
{
    coll_rng = coll_rng * 1103515245ul + 12345ul;
    return (u32)(coll_rng >> 16) & 0x7FFFu;
}

static void coll_quiet(cpu_t *c, rt_machine *m) { (void)c; (void)m; }

static u32 coll_entry(int which)
{
    if (which == 0) return 0x0001a6fau;
    if (which == 1) return 0x0001a7beu;
    return 0x0001aa04u;
}

static const char *coll_name(int which)
{
    return (which == 0) ? "fn_0001a6fa" : (which == 1) ? "fn_0001a7be" : "fn_0001aa04";
}

/* One machine state: the image, five planes of random bytes, the words the routine reads around
 * them, and the argument block its caller leaves on the stack. */
static void coll_setup(int which, s32 x, s32 y, s32 radius, u32 mask, int randomPlanes)
{
    u32 i, a4 = COLL_A4;

    memcpy(g_m.mem.base, coll_pristine, COLL_RAM);
    rt_mem_load(&g_m.mem, 0, coll_image, coll_imageLen);

    rt_write16(&g_m.mem, a4 - 0xD32u, 40u);
    for (i = 0; i < 5; i++)
        rt_write32(&g_m.mem, a4 - 0xCDAu + i * 4u, COLL_PLANES + i * COLL_STRIDE);
    for (i = 0; i < 5u * 8000u; i++)
        g_m.mem.base[COLL_PLANES + i] = randomPlanes ? (u8)coll_rnd() : (u8)(i * 37u + i / 40u);

    rt_write16(&g_m.mem, a4 + 0x470u, (u16)coll_rnd());     /* the screen origin */
    rt_write16(&g_m.mem, a4 + 0x472u, (u16)coll_rnd());
    rt_write16(&g_m.mem, a4 + 0x70Cu, (u16)coll_rnd());     /* leftovers of the previous call */
    rt_write16(&g_m.mem, a4 + 0x70Eu, (u16)coll_rnd());

    memset(&coll_start, 0, sizeof coll_start);
    coll_start.a[7] = 0x0080000u;
    coll_start.sr = 0x2700u;
    coll_start.pc = coll_entry(which);
    rt_write32(&g_m.mem, coll_start.a[7], 0x0003FFFEu);     /* where the rts returns to */
    rt_write16(&g_m.mem, coll_start.a[7] + 4u, (u16)x);
    rt_write16(&g_m.mem, coll_start.a[7] + 6u, (u16)y);
    if (which == 2) rt_write32(&g_m.mem, coll_start.a[7] + 8u, mask);
    else            rt_write16(&g_m.mem, coll_start.a[7] + 8u, (u16)radius);
    rt_write16(&g_m.mem, coll_start.a[7] + 10u, 0x0004u);
    for (i = 0; i < 8; i++) coll_start.d[i] = 0x11110000u + i;
    for (i = 0; i < 7; i++) coll_start.a[i] = 0x22220000u + i * 0x100u;
    coll_start.a[4] = a4;

    memcpy(coll_case, g_m.mem.base, COLL_RAM);
}

/* Enter the routine (native or generated) and follow the call stream until its own rts unwinds the
 * outermost frame, which is what the dispatcher in src\recomp\cpu.c does. */
static u32 coll_run(int which, int native, long budget, cpu_t *out, u8 *memOut)
{
    cpu_t c = coll_start;

    memcpy(g_m.mem.base, coll_case, COLL_RAM);
    g_m.cyclesToTick = budget;
    g_m.insns = 0;
    g_m.stop = 0;
    rc_depth = 1;
    rc_stopOnReturn = 0;
    while (rc_depth > 0 && !g_m.stop)
    {
        rc_fn fn = native ? rc_native_lookup(c.pc) : rc_lookup(c.pc);

        if (fn == 0)
        {
            const rc_entry *owner = rc_containing(c.pc);
            if (owner != 0) fn = owner->fn;
        }
        if (fn == 0) { printf("recomp-check: no code at %06lX\n", (unsigned long)c.pc); exit(1); }
        fn(&c, &g_m);
    }
    *out = c;
    if (memOut != g_m.mem.base) memcpy(memOut, g_m.mem.base, COLL_RAM);
    return (u32)(budget - g_m.cyclesToTick);
}

static int collide_check(long cases, const char *imagePath)
{
    long n, failed = 0, regFail = 0, memFail = 0, cycFail = 0, shown = 0;
    cpu_t afterA, afterB;
    u32 cycA, cycB, i;

    if (rc_native_lookup(coll_entry(0)) == 0)
    {
        printf("recomp: no native patch at %06lX - nothing to check\n", (unsigned long)coll_entry(0));
        return 0;
    }
    memset(&g_m, 0, sizeof g_m);
    if (!rt_mem_init(&g_m.mem, COLL_RAM)) { printf("recomp-check: out of memory\n"); return 1; }
    rt_current = &g_m;
    rc_frame_hook = coll_quiet;

    {
        FILE *f = fopen(imagePath, "rb");
        if (f == 0) { printf("recomp-check: cannot read the image %s\n", imagePath); return 1; }
        fseek(f, 0, SEEK_END); coll_imageLen = (u32)ftell(f); fseek(f, 0, SEEK_SET);
        coll_image = (u8 *)malloc(coll_imageLen);
        if (coll_image == 0 || fread(coll_image, 1, coll_imageLen, f) != coll_imageLen) { fclose(f); return 1; }
        fclose(f);
    }
    coll_pristine = (u8 *)calloc(COLL_RAM, 1);
    coll_case     = (u8 *)malloc(COLL_RAM);
    coll_before   = (u8 *)malloc(COLL_RAM);
    coll_after    = (u8 *)malloc(COLL_RAM);
    if (!coll_pristine || !coll_case || !coll_before || !coll_after) { printf("recomp-check: out of memory\n"); return 1; }

    for (n = 0; n < cases; n++)
    {
        int which = (int)(n % 3);
        s32 x, y, radius;
        u32 mask, memDiff = 0;
        long budget = (n % 5 == 4) ? 700L : (long)EMU_CYCLES_PER_FRAME;  /* tight: the fallback path */
        int bad = 0;

        if (n < 3 * 240)
        {
            x = (s32)(n / 3) - 60;                          /* the screen and its margin */
            y = (s32)((n * 7) % 240) - 24;
            radius = (s32)((n * 13) % 64);
            mask = 0xFFFF83FFu;
            coll_setup(which, x, y, radius, mask, (int)(n & 1));
        }
        else
        {
            x = (s32)(coll_rnd() % 420) - 40;
            y = (s32)(coll_rnd() % 260) - 30;
            radius = (s32)(coll_rnd() % 200) - 20;
            mask = (coll_rnd() & 1) ? 0xFFFF83FFu : ((coll_rnd() & 1) ? 0xF8F81FCu : coll_rnd());
            coll_setup(which, x, y, radius, mask, (int)(n & 1));
        }

        cycA = coll_run(which, 0, budget, &afterA, coll_before);
        cycB = coll_run(which, 1, budget, &afterB, coll_after);
        for (i = 0; i < COLL_RAM && !memDiff; i++)
        {
            if (coll_before[i] == coll_after[i]) continue;
            if (i + 1u > coll_start.a[7] - COLL_GUARD && i < coll_start.a[7] + 16u) continue;
            memDiff = i + 1u;
        }

        if (cycA != cycB) { cycFail++; bad = 1; }
        if (afterA.d[0] != afterB.d[0] || (afterA.sr & 0x1Fu) != (afterB.sr & 0x1Fu) ||
            afterA.a[7] != afterB.a[7]) { regFail++; bad = 1; }
        if (memDiff) { memFail++; bad = 1; }
        if (bad)
        {
            failed++;
            if (shown < 8)
            {
                shown++;
                printf("FAIL %s x=%ld y=%ld r=%ld mask=%08lx budget=%ld: "
                       "d0 %08lx/%08lx sr %04lx/%04lx cycles %lu/%lu%s",
                       coll_name(which), (long)x, (long)y, (long)radius, (unsigned long)mask, budget,
                       (unsigned long)afterA.d[0], (unsigned long)afterB.d[0],
                       (unsigned long)afterA.sr, (unsigned long)afterB.sr,
                       (unsigned long)cycA, (unsigned long)cycB,
                       memDiff ? " memory differs" : "");
                if (memDiff) printf(" at %06lx: %02x vs %02x", (unsigned long)(memDiff - 1),
                                    coll_before[memDiff - 1], coll_after[memDiff - 1]);
                printf("\n");
            }
        }
    }

    printf("recomp: native patches: %ld case(s), D0/CCR/A7 %ld, RAM %ld, cycles %ld differ%s\n",
           cases, regFail, memFail, cycFail, failed ? "" : " - all agree");
    free(coll_pristine);
    free(coll_case);
    free(coll_before);
    free(coll_after);
    free(coll_image);
    return failed != 0;
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
        if (strcmp(argv[k], "--collide") == 0)
        {
            long cases = 3000;
            if (k + 1 < argc && argv[k + 1][0] >= '0' && argv[k + 1][0] <= '9') cases = strtol(argv[++k], 0, 0);
            return collide_check(cases, imagePath);
        }
        if (path == 0) { path = argv[k]; continue; }
    }
    if (path == 0)
    {
        printf("usage: recomp-check <fixture.fx> [--dump <out.txt>] [--image <dshell.img>]\n"
               "       recomp-check --collide [<cases>] [--image <dshell.img>]\n");
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
