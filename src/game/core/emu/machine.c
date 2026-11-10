/* Musashi hooks + run loop. The 68000 core itself is third_party\musashi (MIT). */
#include "machine.h"
#include "blit.h"
#include "gfx.h"
#include "platform.h"
#include "m68k.h"

#include <stdio.h>
#include <string.h>

emu_machine *emu_current = 0;

/* The first few out-of-range CPU accesses, with the PC that made them: a garbage pointer shows up
 * as millions of them, and only the address alone does not say who read it. */
static int cpuBadLogged;
static void note_bad(u32 a, u32 pc)
{
    if (cpuBadLogged >= 8) return;
    cpuBadLogged++;
    printf("emu: cpu access %08lX at pc %06lX (A2=%06lX A3=%06lX A4=%06lX)\n",
           (unsigned long)a, (unsigned long)pc,
           (unsigned long)m68k_get_reg(0, M68K_REG_A2),
           (unsigned long)m68k_get_reg(0, M68K_REG_A3),
           (unsigned long)m68k_get_reg(0, M68K_REG_A4));
}

static int ram_has(u32 a) { return emu_current != 0 && a < emu_current->mem.size; }

/* --- Musashi memory interface ------------------------------------------------------------- */

unsigned int m68k_read_memory_8(unsigned int a)
{
    a &= 0xFFFFFFu;
    /* CIA-A port A: bit 7 is /FIRE, active low, and the rest are unused inputs that float high.
     * FUN_00011BF0 polls this bit and the intro tick treats "pressed" as "skip the intro", so
     * reading 0 here made every run jump to the end of the cinematic on frame 0. */
    if (a == 0xBFE001u)
    {
        /* Counted for --progress only. It used to print every 50,000 reads, which was harmless
         * while the game was drawing but turned into a flood once the intro ended and the menu
         * sat in a tight poll loop: the console writes, not the emulation, became the bottleneck. */
        if (emu_current) emu_current->firePolls++;
        return 0x7Fu | (emu_current->fireDown != 0 ? 0u : 0x80u);
    }
    if (a >= 0xDFF000u && a < 0xDFF100u) return emu_current->custom[(a - 0xDFF000u) >> 1] & 0xFFu;
    return emu_read8(&emu_current->mem, a);
}

unsigned int m68k_read_memory_16(unsigned int a)
{
    a &= 0xFFFFFFu;
    /* The chipset area is modelled as a register file: reads give back the last write. Without
     * this every JOY0DAT/AUDxPT poll counted as a memory fault, which is where the "accesses
     * outside the RAM block" noise came from. */
    /* The joystick and pot inputs are active low and read all-ones when nothing is plugged in.
     * Returning the last write (zero) told the intro that up, down, left, right and both buttons
     * were held for the whole run, and its input/menu loop never settled. */
    if (a == 0xDFF00Cu || a == 0xDFF00Eu) return 0xFFFFu;    /* JOY0DAT / JOY1DAT */
    if (a == 0xDFF016u) return 0xFFFFu;                      /* POTINP */
    if (a >= 0xDFF000u && a < 0xDFF100u) return emu_current->custom[(a - 0xDFF000u) >> 1];
    if (!ram_has(a + 1u)) note_bad(a, (u32)m68k_get_reg(0, M68K_REG_PC));
    return emu_read16(&emu_current->mem, a);
}

unsigned int m68k_read_memory_32(unsigned int a)
{
    a &= 0xFFFFFFu;
    if (a >= 0xDFF000u && a < 0xDFF0FCu)
        return ((u32)emu_current->custom[(a - 0xDFF000u) >> 1] << 16) |
               (u32)emu_current->custom[(a + 2 - 0xDFF000u) >> 1];
    if (!ram_has(a + 3u)) note_bad(a, (u32)m68k_get_reg(0, M68K_REG_PC));
    return emu_read32(&emu_current->mem, a);
}

void m68k_write_memory_8(unsigned int a, unsigned int v)
{
    a &= 0xFFFFFFu;
    if (a >= 0xDFF000u && a < 0xDFF100u)
    {
        emu_current->custom[(a - 0xDFF000u) >> 1] = (u16)v;
        return;
    }
    emu_write8(&emu_current->mem, a, v);
}

void m68k_write_memory_16(unsigned int a, unsigned int v)
{
    a &= 0xFFFFFFu;
    if (a >= 0xDFF000u && a < 0xDFF100u)
    {
        if (emu_current->dffLog && emu_current->dffSeen < 64)
        {
            emu_current->dffSeen++;
            printf("     dff+%03lX = %04lX at pc %06lx\n", (unsigned long)(a - 0xDFF000u),
                   (unsigned long)(v & 0xFFFFu), (unsigned long)m68k_get_reg(0, M68K_REG_PC));
        }
        emu_custom_write16(emu_current, (u16)(a - 0xDFF000u), (u16)v);
        return;
    }
    emu_write16(&emu_current->mem, a, v);
}

void m68k_write_memory_32(unsigned int a, unsigned int v)
{
    a &= 0xFFFFFFu;
    if (a >= 0xDFF000u && a < 0xDFF100u)
    {
        emu_custom_write16(emu_current, (u16)(a - 0xDFF000u), (u16)(v >> 16));
        emu_custom_write16(emu_current, (u16)(a + 2u - 0xDFF000u), (u16)v);
        return;
    }
    emu_write32(&emu_current->mem, a, v);
}

/* Temporary probe: 0xBED00000 appears nowhere in the image and nowhere in our shims, so catching
 * the store that puts it in memory names the routine that corrupts the move node list. Defined
 * after the ring dumper so it can print the call chain. */

/* --- machine ------------------------------------------------------------------------------ */

/* m68kdasm.c reads through these; they must not touch the chipset. */
unsigned int m68k_read_disassembler_8(unsigned int a)  { return emu_read8(&emu_current->mem, a); }
unsigned int m68k_read_disassembler_16(unsigned int a) { return emu_read16(&emu_current->mem, a); }
unsigned int m68k_read_disassembler_32(unsigned int a) { return emu_read32(&emu_current->mem, a); }

/* --- host filesystem behind dos.library ---------------------------------------------------- */
/* The game asks for AmigaDOS names like "Desert1:OPEN". The extracted disk folders on the host
 * hold exactly those files, so a volume becomes a directory: Desert1 -> <dataDir>\disk1. A real
 * OFS/FFS reader over the ADFs replaces this later; the shim interface will not change. */

static int emu_volume_index(const char *name)
{
    /* "Desert1:" .. "Desert3:" case-insensitively. Desert4/DES4 and anything else return -1 and
     * are searched across the disks below: the disk's own HDesert script installs the game to a
     * single directory and then assigns Desert2:, Desert3: and DES4: to it, so the volume name
     * says nothing about which extracted disk a file came from. */
    if ((name[0] == 'D' || name[0] == 'd') &&
        (name[1] == 'E' || name[1] == 'e') &&
        (name[2] == 'S' || name[2] == 's') &&
        (name[3] == 'E' || name[3] == 'e') &&
        (name[4] == 'R' || name[4] == 'r') &&
        (name[5] == 'T' || name[5] == 't') &&
        name[6] >= '1' && name[6] <= '3' && (name[7] == ':' || name[7] == '/'))
        return name[6] - '1';
    return -1;
}

static void emu_path_after_volume(const char *name, char *out, int max)
{
    const char *p = name;
    int i = 0;

    while (*p != 0 && *p != ':' && *p != '/') p++;
    if (*p != 0) p++;
    while (*p == '/' || *p == '\\') p++;
    while (*p != 0 && i < max - 1)
    {
        char c = *p++;
        if (c == '/') c = '\\';                 /* AmigaDOS dir separator -> host */
        out[i++] = c;
    }
    out[i] = 0;
}

static u32 emu_alloc(u32 bytes);
static void emu_dump_call_site(emu_machine *m, u32 target);
static void emu_add_server(emu_machine *m, u32 code, u32 data);
static void emu_remove_server(emu_machine *m, u32 code);
static void emu_tick(emu_machine *m);
static void emu_request_vblank(emu_machine *m);

static u32 emu_file_open(emu_machine *m, const char *name)
{
    char path[256], rel[192];
    int vol, slot;

    for (slot = 0; slot < EMU_MAX_FILES; slot++)
        if (m->files[slot].f == 0) break;
    if (slot >= EMU_MAX_FILES) return 0;

    emu_path_after_volume(name, rel, (int)sizeof(rel));
    if (rel[0] == 0) return 0;

    vol = emu_volume_index(name);
    if (vol >= 0)
        sprintf(path, "%s\\disk%d\\%s", m->dataDir, vol + 1, rel);
    else
        sprintf(path, "%s\\%s", m->dataDir, rel);

    m->files[slot].f = plat_open(path);
    if (m->files[slot].f == 0)
    {                                           /* the file may sit on another disk */
        int d;
        for (d = 1; d <= 3 && m->files[slot].f == 0; d++)
        {
            sprintf(path, "%s\\disk%d\\%s", m->dataDir, d, rel);
            m->files[slot].f = plat_open(path);
        }
    }
    if (m->files[slot].f == 0) return 0;

    m->files[slot].size = plat_size(m->files[slot].f);
    m->files[slot].pos = 0;
    /* AmigaDOS hands out BPTRs (address >> 2) and callers may dereference the handle, so give it
     * a real 44-byte FileHandle block in the heap. */
    m->files[slot].addr = emu_alloc(44);
    if (m->files[slot].addr == 0)
    {
        plat_close((plat_file *)m->files[slot].f);
        m->files[slot].f = 0;
        return 0;
    }
    emu_write32(&m->mem, m->files[slot].addr + 0, 0);
    emu_write32(&m->mem, m->files[slot].addr + 36, 0);   /* fh_Args */
    emu_write32(&m->mem, m->files[slot].addr + 40, 0);   /* fh_Arg1 */
    /* Few files are opened, and "which file did the game try to read" is the first question for
     * every new scene, so this reports unconditionally. */
    printf("emu: open \"%s\" -> %s (%lu bytes)\n", name, path, (unsigned long)m->files[slot].size);
    return m->files[slot].addr >> 2;
}

static emu_file *emu_file_of(emu_machine *m, u32 bptr)
{
    u32 addr = bptr << 2;
    int i;

    if (bptr == 0) return 0;
    for (i = 0; i < EMU_MAX_FILES; i++)
        if (m->files[i].f != 0 && m->files[i].addr == addr) return &m->files[i];
    return 0;
}

static void emu_file_close(emu_machine *m, u32 fh)
{
    emu_file *f = emu_file_of(m, fh);
    if (f == 0) return;
    plat_close((plat_file *)f->f);
    f->f = 0;
}

static u32 emu_file_read(emu_machine *m, u32 fh, u32 buf, u32 len)
{
    emu_file *f = emu_file_of(m, fh);
    u32 got;

    if (f == 0 || buf == 0 || len == 0) return 0;
    if (len > f->size - f->pos) len = f->size - f->pos;
    if (len > 0x8000u) len = 0x8000u;
    if (len == 0) return 0;

    got = plat_read((plat_file *)f->f, f->pos, m->mem.base + buf, len);
    f->pos += got;
    return got;
}

/* --- OS call census -----------------------------------------------------------------------
 * Which library calls the original actually makes, and which of them this runtime merely answers
 * with 0. That number is the difference between "the emulator is subtly wrong somewhere" and a
 * finite checklist: an unimplemented shim does not fail loudly, it returns 0, and the engine then
 * takes a path that has nothing to do with the Amiga. Counting the calls ranks the gaps by how
 * often the game depends on them, which is the only ordering worth working in. */
#define EMU_LVO_STATS 96

typedef struct
{
    s32 lvo;
    int lib;
    u32 calls;                  /* dispatched, handled or not */
    u32 unhandled;              /* answered with 0 */
} lvo_stat;

static lvo_stat lvoStats[EMU_LVO_STATS];
static int lvoStatCount;

static lvo_stat *lvo_stat_get(int lib, s32 lvo)
{
    int i;
    for (i = 0; i < lvoStatCount; i++)
        if (lvoStats[i].lib == lib && lvoStats[i].lvo == lvo) return &lvoStats[i];
    if (lvoStatCount >= EMU_LVO_STATS) return 0;
    lvoStats[lvoStatCount].lib = lib;
    lvoStats[lvoStatCount].lvo = lvo;
    lvoStatCount++;
    return &lvoStats[lvoStatCount - 1];
}

void emu_lvo_report(void);

/* --- library shims ------------------------------------------------------------------------ */

/* LVOs the game uses, from docs\os-calls.csv. Names only, for the trace. */
static const struct { s32 lvo; const char *name; } lvoNames[] = {
    { -6,   "?open" },          { -12,  "?close" },       { -18,  "?expunge" },
    { -30,  "dos.Open" },       { -36,  "dos.Close" },    { -42,  "dos.Read" },
    { -48,  "dos.Write" },      { -54,  "dos.Input|TextLength" }, { -60, "dos.Output|Text" },
    { -66,  "dos.Seek|SetFont" }, { -84, "dos.Lock" },    { -90,  "dos.UnLock" },
    { -96,  "?DupLock" },       { -108, "exec.Alert" },   { -114, "dos.Info" },
    { -126, "dos.CurrentDir" }, { -132, "exec.Forbid" },  { -168, "exec.AddIntServer" },
    { -174, "exec.RemIntServer" }, { -192, "dos.DateStamp" }, { -198, "exec.AllocMem" },
    { -204, "graphics.InitVPort" }, { -210, "exec.FreeMem" }, { -216, "graphics.MakeVPort" },
    { -222, "graphics.LoadView" }, { -228, "graphics.WaitBlit" }, { -240, "graphics.Move" },
    { -246, "graphics.Draw" },  { -252, "graphics.AreaMove" }, { -258, "graphics.AreaDraw" },
    { -264, "graphics.AreaEnd" }, { -270, "graphics.WaitTOF" }, { -282, "graphics.InitArea" },
    { -294, "exec.FindTask" },  { -300, "graphics.BltClear" }, { -306, "graphics.RectFill" },
    { -330, "exec.AllocSignal" }, { -336, "exec.FreeSignal" }, { -342, "graphics.SetAPen" },
    { -354, "exec.AddPort" },   { -360, "exec.InitView" }, { -366, "graphics.CBump" },
    { -372, "exec.GetMsg" },    { -378, "graphics.CWait" }, { -384, "exec.WaitPort" },
    { -390, "graphics.InitBitMap" }, { -402, "graphics.WaitBOVP" }, { -414, "exec.CloseLibrary" },
    { -444, "exec.OpenDevice" }, { -450, "exec.CloseDevice" }, { -456, "exec.DoIO" },
    { -462, "graphics.DisownBlitter" }, { -468, "graphics.InitTmpRas" },
    { -498, "exec.OpenResource" }, { -540, "graphics.FreeVPortCopLists" },
    { -552, "exec.OpenLibrary" }, { -564, "graphics.FreeCprList" },
    { -570, "graphics.GetColorMap" }, { -576, "graphics.FreeColorMap" }
};

static const char *lvo_name(s32 lvo)
{
    int i;
    for (i = 0; i < (int)(sizeof(lvoNames) / sizeof(lvoNames[0])); i++)
        if (lvoNames[i].lvo == lvo) return lvoNames[i].name;
    return "?";
}

/* Bump allocator for AllocMem, above the image and below the stack. */
/* --- the heap ----------------------------------------------------------------------------
 * AllocMem/FreeMem over the block below EMU_SYS_BASE. A bump pointer was enough while the
 * emulator only ran the intro, but the game frees its scene bitmaps and allocates the next
 * screen's: with nothing ever returned, the intro's own allocations (the mask bitmaps, the two
 * animation rasters) left the heap exhausted the moment the first menu tried to build a picture,
 * and every later AllocMem returned NULL.
 *
 * So: a first-fit heap with headers. Free blocks sit on one address-ordered list, which is walked
 * to coalesce, so a freed neighbour is reusable. The models are as slow as they look, but a game
 * of this size makes a few hundred allocations in 10 seconds, not thousands per frame.
 *
 * Every header carries a magic word and the next-block walk stops at the first one that does not
 * match. That is not paranoia: the game does clear memory it owns, a wrong byte count reached
 * BltClear() once and swept 1 MB through this heap, and a header turned into garbage then made
 * the free-list walk spin forever inside the emulator (the frame budget never runs inside a native
 * loop, so the run looked hung). A corrupt chain now just ends the list. */
typedef struct emu_block
{
    u32 magic;                       /* EMU_BLOCK_MAGIC while the header is intact */
    u32 size;                        /* including this header, 8-byte aligned */
    u32 used;                        /* 1 = handed out */
    u32 pad;
} emu_block;

#define EMU_BLOCK_MAGIC 0x424C4B31u  /* 'BLK1' */
#define EMU_BLOCK_HDR  ((u32)sizeof(emu_block))
#define EMU_HEAP_BASE 0x00040000u
#define EMU_HEAP_TOP  0x0017C000u     /* EMU_SYS_BASE: the exec structures live above */
static emu_block *heapFirst;
static int heapCorrupt;

static void emu_heap_reset(void)
{
    heapCorrupt = 0;
    heapFirst = (emu_block *)(emu_current->mem.base + EMU_HEAP_BASE);
    heapFirst->magic = EMU_BLOCK_MAGIC;
    heapFirst->size = EMU_HEAP_TOP - EMU_HEAP_BASE;
    heapFirst->used = 0;
}

/* Next block in address order, or 0 when the list ends or a header has been overwritten. */
static emu_block *heap_next(emu_block *b)
{
    u32 off;
    emu_block *n;

    if (b->magic != EMU_BLOCK_MAGIC || b->size < EMU_BLOCK_HDR)
    {
        if (!heapCorrupt++)
            printf("emu: heap header at %06lX was overwritten (frame %lu) - list ends here\n",
                   (unsigned long)((u8 *)b - emu_current->mem.base),
                   (unsigned long)emu_current->frame);
        return 0;
    }
    off = (u32)((u8 *)b - emu_current->mem.base) + b->size;
    if (off + EMU_BLOCK_HDR > EMU_HEAP_TOP) return 0;
    n = (emu_block *)(emu_current->mem.base + off);
    return n->magic == EMU_BLOCK_MAGIC ? n : 0;
}

/* First fit. Splits when the tail is still big enough to be worth a header. */
static u32 emu_alloc(u32 bytes)
{
    emu_block *b;

    bytes = (bytes + 7u) & ~7u;                       /* AllocMem rounds to 8 */
    if (bytes == 0) bytes = 8;
    for (b = heapFirst; b != 0; b = heap_next(b))
    {
        if (b->used || b->size < bytes + EMU_BLOCK_HDR) continue;
        if (b->size >= bytes + EMU_BLOCK_HDR + 16u)
        {
            emu_block *rest = (emu_block *)((u8 *)b + EMU_BLOCK_HDR + bytes);
            rest->magic = EMU_BLOCK_MAGIC;
            rest->size = b->size - EMU_BLOCK_HDR - bytes;
            rest->used = 0;
            b->size = EMU_BLOCK_HDR + bytes;
        }
        b->used = 1;
        memset((u8 *)b + EMU_BLOCK_HDR, 0, b->size - EMU_BLOCK_HDR);
        return (u32)((u8 *)b - emu_current->mem.base) + EMU_BLOCK_HDR;
    }
    printf("emu: out of memory asking for %lu bytes (frame %lu)\n",
           (unsigned long)bytes, (unsigned long)emu_current->frame);
    return 0;
}

void emu_free(u32 addr)
{
    emu_block *b, *n;

    if (addr < EMU_HEAP_BASE + EMU_BLOCK_HDR || addr >= EMU_HEAP_TOP) return;   /* not ours */
    b = (emu_block *)(emu_current->mem.base + addr - EMU_BLOCK_HDR);
    if (b->magic != EMU_BLOCK_MAGIC || !b->used) return;  /* corrupt or double free: ignore */
    b->used = 0;
    /* Coalesce forwards as far as the neighbours are free, then backwards once. */
    while ((n = heap_next(b)) != 0 && !n->used)
        b->size += n->size;
    {
        emu_block *p = heapFirst;
        while (p != 0 && heap_next(p) != b) p = heap_next(p);
        if (p != 0 && !p->used)
        {
            while ((n = heap_next(p)) != 0 && !n->used) p->size += n->size;
        }
    }
}

/* Public form for the graphics shim (MrgCop's copper list). */
u32 emu_alloc_bytes(u32 bytes)
{
    return emu_alloc(bytes);
}

/* The launched Process. dshell is started from a shell - the disk's HDesert script is just
 * `assign` lines and then `dshell` with no arguments - so what FindTask(0) returns must be a
 * DOS-launched Process with pr_CLI set. With pr_CLI zero the cstart (FUN_00020992) takes the
 * Workbench branch: WaitPort on pr_MsgPort for a WBStartup, then FUN_00020d02
 * OpenLibrary("icon.library")/GetDiskObjectNew to open the tool window. The shipped game never
 * takes that path, and the structures it would need do not exist in the image.
 *
 * Layout as this cstart reads it (FUN_00020aca): the CLI BPTR is the long at Process+0xAC, and
 * the whole command line is cli_CommandName (CLI+0x10), a BSTR: length byte, then the text.
 * argv is built from the text after the command name. */
#define EMU_CLI_ADDR     (EMU_SYS_BASE + 0x100u)      /* struct CommandLineInterface */
#define EMU_CMDLINE_ADDR (EMU_SYS_BASE + 0x140u)      /* BSTR "dshell" */
#define EMU_ARGS_ADDR    (EMU_SYS_BASE + 0x180u)      /* the argument tail: empty */
#define EMU_LIB_CIAARES  14               /* libraryName[] slot */

/* Counts per-lvo so the trace only prints a name once. */
static long lvoSeen[64];

/* The bases we hand out, in registration order. Kept stable because the shims compare indexes. */
static const char *libraryName[EMU_LIB_SLOTS] = {
    "exec.library", "graphics.library", "dos.library", "intuition.library",
    "audio.device", "timer.device", "mathffp.library", "icon.library",
    "layers.library", "translator.library", "gadtools.library", "mathieeesingbas.library",
    "console.device", "input.device", "ciaa.resource", "resource",
    "diskfont.library", "utility.library", "version.library", "keymap.library"
};
#define EMU_LIB_RESOURCE 15                  /* the catch-all base OpenResource returns */

void emu_lvo_report(void)
{
    int i, j;
    u32 calls = 0, missing = 0;
    int missingKinds = 0;

    for (i = 0; i < lvoStatCount; i++)
    {
        calls += lvoStats[i].calls;
        missing += lvoStats[i].unhandled;
        if (lvoStats[i].unhandled != 0) missingKinds++;
    }
    printf("emu: %d library call(s) used, %lu call(s) total, %d kind(s) answered with 0 (%lu call(s))\n",
           lvoStatCount, (unsigned long)calls, missingKinds, (unsigned long)missing);
    if (!lvoStatCount) return;
    /* Selection sort by call count: 96 entries at most, and the report is read, not timed. */
    for (i = 0; i < lvoStatCount; i++)
    {
        int best = i;
        lvo_stat t;
        for (j = i + 1; j < lvoStatCount; j++)
            if (lvoStats[j].calls > lvoStats[best].calls) best = j;
        t = lvoStats[i]; lvoStats[i] = lvoStats[best]; lvoStats[best] = t;
    }
    for (i = 0; i < lvoStatCount; i++)
        printf("emu:   %-12s %5ld %8lu call(s)  %s\n", libraryName[lvoStats[i].lib],
               (long)lvoStats[i].lvo, (unsigned long)lvoStats[i].calls,
               lvoStats[i].unhandled ? "IMPLEMENT" : "ok");
}

/* Reads a C string out of emulated memory. */
static void read_cstr(u32 addr, char *out, int max)
{
    int i = 0;
    if (max < 1) return;
    while (i < max - 1)
    {
        u8 ch = (u8)emu_read8(&emu_current->mem, addr + (u32)i);
        out[i++] = (char)ch;
        if (ch == 0) return;
    }
    out[max - 1] = 0;
}

/* Matches the library part of "name.library" / "name.device". */
static int library_index_of(const char *name)
{
    int i;
    for (i = 0; i < EMU_LIB_SLOTS; i++)
    {
        const char *a = name;
        const char *b = libraryName[i];
        while (*a != 0 && *b != 0 && (*a == *b || (*a >= 'A' && *a <= 'Z' ? *a + 32 : *a) ==
                                     (*b >= 'A' && *b <= 'Z' ? *b + 32 : *b)))
        { a++; b++; }
        if (b - libraryName[i] > 0 && *b == 0) return i;      /* full base name matched */
    }
    return -1;
}

static u32 arg32(u32 sp, int n)
{
    return emu_read32(&emu_current->mem, sp + 4 + (u32)n * 4);
}

static void write_cstr(u32 addr, const char *s)
{
    while (*s != 0) emu_write8(&emu_current->mem, addr++, (u8)*s++);
    emu_write8(&emu_current->mem, addr, 0);
}

/* Builds the Process that FindTask(0) returns, plus the CLI record the cstart reads. See the
 * comment at EMU_CLI_ADDR for why this is the CLI and not the Workbench form. */
static void emu_build_process(emu_machine *m)
{    u32 proc = EMU_TASK_ADDR;
    u32 port = proc + 0x5Cu;                 /* struct Process: Task, then pr_MsgPort */
    u32 msgList = port + 0x14u;
    const char *name = "dshell";

    emu_write8(&m->mem, proc + 8, 13);                 /* ln_Type = NT_PROCESS */
    emu_write8(&m->mem, proc + 0x0F, 2);               /* tc_State = TS_RUN */
    emu_write8(&m->mem, port + 8, 4);                  /* pr_MsgPort.ln_Type = NT_MSGPORT */
    emu_write8(&m->mem, port + 0x0E, 2);               /* mp_Flags = PA_SIGNAL */
    emu_write8(&m->mem, port + 0x0F, (u8)(m->signals++));  /* mp_SigBit */
    emu_write32(&m->mem, port + 0x10, proc);           /* mp_SigTask */
    emu_write32(&m->mem, msgList, msgList);            /* empty List */
    emu_write32(&m->mem, msgList + 8, msgList);        /* lh_TailPred */

    emu_write8(&m->mem, EMU_CMDLINE_ADDR, 6);          /* BSTR: length byte, then "dshell" */
    write_cstr(EMU_CMDLINE_ADDR + 1u, name);

    emu_write32(&m->mem, EMU_CLI_ADDR + 0x10,
                (EMU_CMDLINE_ADDR + 4u) >> 2);         /* cli_CommandName (BPTR) */
    emu_write8(&m->mem, EMU_CLI_ADDR + 0x14, 20);      /* cli_FailLevel */
    emu_write32(&m->mem, proc + 0xAC, (EMU_CLI_ADDR + 4u) >> 2);   /* pr_CLI */
    emu_write8(&m->mem, EMU_ARGS_ADDR, 0);             /* no arguments */
}

/* --- exec structures ---------------------------------------------------------------------- */
/* List is 14 bytes (head, tail, tailpred, type, pad); Node is 14 bytes; MsgPort is a Node plus
 * mp_Flags, mp_SigBit, mp_SigTask and the 14-byte message List - 34 bytes in all. */
#define LIST_HEAD(a)     ((a) + 0u)
#define LIST_TAILPRED(a) ((a) + 8u)

static void emu_new_list(emu_machine *m, u32 a)
{
    emu_write32(&m->mem, a + 0, a + 4);          /* lh_Head   = &lh_Tail */
    emu_write32(&m->mem, a + 4, 0);              /* lh_Tail   = 0 */
    emu_write32(&m->mem, a + 8, a + 0);          /* lh_TailPred = &lh_Head */
    emu_write8(&m->mem, a + 12, 0);              /* lh_Type */
    emu_write8(&m->mem, a + 13, 0);
}

static u32 emu_new_port(emu_machine *m)
{
    u32 p = emu_alloc(34);
    if (p == 0) return 0;
    emu_write32(&m->mem, p + 0, 0);              /* ln_Succ */
    emu_write32(&m->mem, p + 4, 0);              /* ln_Pred */
    emu_write8(&m->mem, p + 8, 4);               /* ln_Type = NT_MSGPORT */
    emu_write8(&m->mem, p + 9, 0);               /* ln_Pri */
    emu_write32(&m->mem, p + 10, 0);             /* ln_Name */
    emu_write8(&m->mem, p + 14, 2);              /* mp_Flags = PA_IGNORE */
    emu_write8(&m->mem, p + 15, 0);              /* mp_SigBit */
    emu_write32(&m->mem, p + 16, EMU_TASK_ADDR); /* mp_SigTask */
    emu_new_list(m, p + 20);
    return p;
}

/* Kept for CreatePort-style shims landing next; AddPort takes a caller-made port. */
static u32 (*const emu_new_port_ref)(emu_machine *) = emu_new_port;

static void emu_put_msg(emu_machine *m, u32 port, u32 msg)
{
    u32 head = emu_read32(&m->mem, port + 20);
    emu_write32(&m->mem, msg + 0, head);         /* ln_Succ */
    emu_write32(&m->mem, msg + 4, port + 20);    /* ln_Pred = &lh_Head */
    emu_write32(&m->mem, head + 4, msg);         /* head->ln_Pred = msg */
    emu_write32(&m->mem, port + 20, msg);        /* lh_Head = msg */
}

static u32 emu_get_msg(emu_machine *m, u32 port)
{
    u32 list = port + 20;
    u32 head = emu_read32(&m->mem, list);
    u32 next;

    if (head == list + 4) return 0;              /* empty: head points at lh_Tail */
    next = emu_read32(&m->mem, head + 0);
    emu_write32(&m->mem, list, next);
    emu_write32(&m->mem, next + 4, list);
    return head;
}

/* Called with the CPU parked on a library slot. `lib` is the base index from
 * emu_library_of(), so the same LVO can mean different functions per library.
 * The 68k ABI is `jsr (lvo,A6)`: return address at A7, arguments above it, result in D0. */
static int emu_dispatch(emu_machine *m, int lib, s32 lvo)
{
    u32 sp = m68k_get_reg(0, M68K_REG_A7);
    u32 ret = emu_read32(&m->mem, sp);
    u32 result = 0;
    int waitFrame = 0;             /* set by WaitTOF/WaitBOVP, acted on after the call returns */
    int i;

    i = (int)(-lvo / 6) % 64;
    {
        lvo_stat *st = lvo_stat_get(lib, lvo);
        if (st != 0) st->calls++;
    }

    if (lib == 0)                                 /* exec.library */
    {
        switch (lvo)
        {
        case -294:                               /* FindTask */
            result = EMU_TASK_ADDR;
            break;
        case -198:                               /* AllocMem(bytes, flags) */
            result = emu_alloc(arg32(sp, 0));
            break;
        case -210:                               /* FreeMem(block, bytes) */
            /* Must actually free: the game releases a scene's bitmaps and allocates the next
             * screen's, so a heap that only ever grows runs dry inside the first menu. */
            emu_free(arg32(sp, 0));
            result = 0;
            break;
        case -552:                               /* OpenLibrary(name, version) */
        case -408:                               /* OldOpenLibrary(name) */
            {
                char name[64];
                u32 nameAddr = arg32(sp, 0);
                int idx;

                /* dshell's cstart loads the name into A1 and passes nothing on the stack
                 * (0x4960: `lea (0x20,PC),a1; jsr (-$198,a6)`). */
                if (nameAddr == 0) nameAddr = m68k_get_reg(0, M68K_REG_A1);
                read_cstr(nameAddr, name, (int)sizeof(name));
                idx = library_index_of(name);
                if (idx < 0)
                {
                    /* Never return NULL: on real hardware every one of these opens, and a null
                     * base turns into a jump through -30 into zeroed memory. A generic base keeps
                     * the boot moving so the next real gap shows up. */
                    printf("emu: OpenLibrary(\"%s\") - not modelled, generic base\n", name);
                    idx = EMU_LIB_RESOURCE;
                }
                result = m->libraryBase[idx];
            }
            break;
        case -414:                               /* CloseLibrary */
            result = 0;
            break;
        case -354:                               /* AddPort(port) */
            result = 0;
            break;
        case -360:                               /* RemPort(port) */
            result = 0;
            break;
        case -372:                               /* GetMsg(port) */
            result = emu_get_msg(m, arg32(sp, 0));
            break;
        case -384:                               /* WaitPort(port) */
            result = emu_read32(&m->mem, arg32(sp, 0) + 20);
            if (result == arg32(sp, 0) + 24) result = 0;    /* empty -> .l nothing pending */
            break;
        case -378:                               /* ReplyMsg(message) */
            {
                u32 msg = arg32(sp, 0);
                u32 port = msg != 0 ? emu_read32(&m->mem, msg + 14) : 0;
                if (port != 0) emu_put_msg(m, port, msg);
                result = 0;
            }
            break;
        case -330:                               /* AllocSignal(sigNum) */
            result = m->signals++;
            break;
        case -336:                               /* FreeSignal */
            result = 0;
            break;
        case -498:                               /* OpenResource(name, version) */
            {
                char name[64];
                int idx;
                read_cstr(arg32(sp, 0), name, (int)sizeof(name));
                idx = library_index_of(name);
                if (idx < 0) idx = EMU_LIB_RESOURCE;
                if (m->trace) printf("     resource \"%s\" -> %s\n", name, libraryName[idx]);
                result = m->libraryBase[idx];
            }
            break;
        case -168:                               /* AddIntServer(number, interrupt) */
            {
                u32 intr = arg32(sp, 1);
                if (intr != 0)
                    emu_add_server(m, emu_read32(&m->mem, intr + 0x12),
                                   emu_read32(&m->mem, intr + 0x0E));
                if (m->trace)
                    printf("     AddIntServer %ld interrupt %06lX\n",
                           (long)arg32(sp, 0), (unsigned long)intr);
            }
            result = 0;
            break;
        case -174:                               /* RemIntServer(number, interrupt) */
            {
                u32 intr = arg32(sp, 1);
                if (intr != 0) emu_remove_server(m, emu_read32(&m->mem, intr + 0x12));
                if (m->trace)
                    printf("     RemIntServer %ld interrupt %06lX\n",
                           (long)arg32(sp, 0), (unsigned long)intr);
            }
            result = 0;
            break;
        case -132:                               /* Forbid */
        case -138:                               /* Permit */
            result = 0;
            break;
        case -444:                               /* OpenDevice(name, unit, iob, flags) */
            {
                /* Returns 0 on success and fills io_Device (IORequest+0x14); a non-zero result
                 * is an error. FUN_0001E292 tests it and aborts the whole game when it is set,
                 * which is how the original was exiting with 20. */
                char name[64];
                u32 iob = arg32(sp, 2);
                int idx;
                read_cstr(arg32(sp, 0), name, (int)sizeof(name));
                idx = library_index_of(name);
                if (idx < 0) idx = EMU_LIB_RESOURCE;
                if (iob != 0) emu_write32(&m->mem, iob + 0x14, m->libraryBase[idx]);
                if (m->trace)
                    printf("     device \"%s\" unit %ld iob %06lX -> %s\n", name,
                           (long)arg32(sp, 1), (unsigned long)iob, libraryName[idx]);
            }
            result = 0;
            break;
        case -450:                               /* CloseDevice(iob) */
            {
                u32 iob = arg32(sp, 0);
                if (iob != 0) emu_write32(&m->mem, iob + 0x14, 0);
            }
            result = 0;
            break;
        case -456:                               /* DoIO(iob) - no device timing yet */
            result = 0;
            break;
        case -108:                               /* Alert(code) - never returns */
            printf("emu: ALERT 0x%lX - the original halted here\n",
                   (unsigned long)arg32(sp, 0));
            return 0;
        default:
            goto unhandled;
        }
    }
    else if (lib == 2)                           /* dos.library */
    {
        switch (lvo)
        {
        case -54:                                /* Input() */
        case -60:                                /* Output() */
            result = 0;                          /* file handle 0 = the console */
            break;
        case -30:                                /* Open(name, mode) */
            {
                char name[192];
                read_cstr(arg32(sp, 0), name, (int)sizeof(name));
                result = emu_file_open(m, name);
                if (m->dosLog)
                    printf("     dos.Open(\"%s\",%ld) = %06lX from %06lX\n", name, (long)arg32(sp, 1),
                           (unsigned long)result, (unsigned long)ret);
            }
            break;
        case -36:                                /* Close(fh) */
            emu_file_close(m, arg32(sp, 0));
            result = 0;
            break;
        case -42:                                /* Read(fh, buf, len) */
            result = emu_file_read(m, arg32(sp, 0), arg32(sp, 1), arg32(sp, 2));
            if (m->dosLog)
                printf("     dos.Read(%06lX,%06lX,%lu) = %lu (pos %lu)\n",
                       (unsigned long)arg32(sp, 0), (unsigned long)arg32(sp, 1),
                       (unsigned long)arg32(sp, 2), (unsigned long)result,
                       (unsigned long)(emu_file_of(m, arg32(sp, 0)) != 0
                                          ? emu_file_of(m, arg32(sp, 0))->pos : 0));
            break;
        case -48:                                /* Write(fh, buf, len) */
            {
                /* The game prints its own diagnostics here ("Can't allocate animation bitmaps"
                 * and friends), so passing them through is the cheapest way to hear what the
                 * original is complaining about. */
                u32 buf = arg32(sp, 1);
                u32 len = arg32(sp, 2);
                u32 k;
                for (k = 0; k < len; k++)
                {
                    u8 ch = (u8)emu_read8(&m->mem, buf + k);
                    if (ch == 0) break;
                    putchar((int)ch);
                }
                result = len;
            }
            break;
        case -66:                                /* Seek(fh, offset, offsetMode) */
            {
                emu_file *f = emu_file_of(m, arg32(sp, 0));
                s32 off = (s32)arg32(sp, 1);
                s32 mode = (s32)arg32(sp, 2);
                if (f != 0)
                {
                    /* AmigaDOS offset modes: -1 = from the start (SEEK_SET), 0 = from the current
                     * position (SEEK_CUR), 1 = from the end (SEEK_END). Getting 0 and -1 the wrong
                     * way round silently sends every bank record read past EOF, which is how the
                     * MovE script lookup failed with no error path to show for it. */
                    s32 base = (mode < 0) ? 0 : (mode == 0 ? (s32)f->pos : (s32)f->size);
                    s32 np = base + off;
                    if (np < 0) np = 0;
                    f->pos = (u32)np;
                    result = (u32)np;
                    if (m->dosLog)
                        printf("     dos.Seek(%06lX,%ld,%ld) = %ld\n", (unsigned long)arg32(sp, 0),
                               (long)off, (long)mode, (long)result);
                }
            }
            break;
        case -126:                               /* CurrentDir(lock) */
            result = 0xFFFFFFFFu;                /* DOSTRUE */
            break;
        case -84:                                /* Lock(name, mode) - no directory support yet */
            result = 1;                          /* a token the game can hand back */
            break;
        case -90:                                /* UnLock */
            result = 0;
            break;
        case -192:                               /* DateStamp(ds) */
            {
                u32 ds = arg32(sp, 0);
                if (ds != 0)
                {
                    emu_write32(&m->mem, ds + 0, 0);
                    emu_write32(&m->mem, ds + 4, 0);
                    emu_write32(&m->mem, ds + 8, 0);
                }
                result = ds;
            }
            break;
        default:
            goto unhandled;
        }
    }
    else if (lib == 1)                           /* graphics.library */
    {
        switch (lvo)
        {
        case -390:                               /* InitBitMap(bm, depth, w, h) */
            emu_gfx_init_bitmap(m, arg32(sp, 0), (int)arg32(sp, 1), (int)arg32(sp, 2),
                                (int)arg32(sp, 3));
            result = 0;
            break;
        case -30:                                /* BltBitMap */
            if (m->progress)
                printf("     BltBitMap src %06lX (%ld,%ld) dst %06lX (%ld,%ld) %ldx%ld minterm %02lX\n",
                       (unsigned long)arg32(sp, 0), (long)arg32(sp, 1), (long)arg32(sp, 2),
                       (unsigned long)arg32(sp, 3), (long)arg32(sp, 4), (long)arg32(sp, 5),
                       (long)arg32(sp, 6), (long)arg32(sp, 7), (unsigned long)arg32(sp, 8));
            emu_gfx_blt_bitmap(m, arg32(sp, 0), (s32)arg32(sp, 1), (s32)arg32(sp, 2),
                               arg32(sp, 3), (s32)arg32(sp, 4), (s32)arg32(sp, 5),
                               (s32)arg32(sp, 6), (s32)arg32(sp, 7), arg32(sp, 8),
                               arg32(sp, 9));
            result = 0;
            break;
        case -300:                               /* BltClear(block, bytes, flags) */
            if (m->progress)
                printf("     BltClear(%06lX,%lu,%lu) from %06lX\n", (unsigned long)arg32(sp, 0),
                       (unsigned long)arg32(sp, 1), (unsigned long)arg32(sp, 2),
                       (unsigned long)ret);
            emu_gfx_blt_clear(m, arg32(sp, 0), arg32(sp, 1), arg32(sp, 2));
            result = 0;
            break;
        case -306:                               /* RectFill(rp, x1, y1, x2, y2) */
            if (m->progress)
                printf("     RectFill rp %06lX (%ld,%ld)-(%ld,%ld)\n",
                       (unsigned long)arg32(sp, 0), (long)arg32(sp, 1), (long)arg32(sp, 2),
                       (long)arg32(sp, 3), (long)arg32(sp, 4));
            emu_gfx_rect_fill(m, arg32(sp, 0), (s32)arg32(sp, 1), (s32)arg32(sp, 2),
                              (s32)arg32(sp, 3), (s32)arg32(sp, 4));
            result = 0;
            break;
        case -252:                               /* AreaMove(rp, x, y) */
            emu_gfx_area_move(m, arg32(sp, 0), (s32)arg32(sp, 1), (s32)arg32(sp, 2));
            result = 0;
            break;
        case -258:                               /* AreaDraw(rp, x, y) */
            emu_gfx_area_draw(m, arg32(sp, 0), (s32)arg32(sp, 1), (s32)arg32(sp, 2));
            result = 0;
            break;
        case -264:                               /* AreaEnd(rp) */
            if (m->progress) printf("     AreaEnd %d point(s)\n", m->gfx.areaCount);
            emu_gfx_area_end(m, arg32(sp, 0));
            result = 0;
            break;
        case -342:                               /* SetAPen(rp, pen) */
            emu_gfx_set_apen(m, arg32(sp, 0), arg32(sp, 1));
            result = 0;
            break;
        case -348:                               /* SetBPen(rp, pen) */
            emu_gfx_set_bpen(m, arg32(sp, 0), arg32(sp, 1));
            result = 0;
            break;
        case -354:                               /* SetDrMd(rp, mode) */
            emu_gfx_set_drmd(m, arg32(sp, 0), arg32(sp, 1));
            result = 0;
            break;
        case -192:                               /* LoadRGB4(vp, table, count) */
            emu_gfx_load_rgb4(m, arg32(sp, 0), arg32(sp, 1), arg32(sp, 2));
            result = 0;
            break;
        case -288:                               /* SetRGB4(vp, index, r, g, b) */
            emu_gfx_set_rgb4(m, arg32(sp, 0), arg32(sp, 1), arg32(sp, 2), arg32(sp, 3),
                             arg32(sp, 4));
            result = 0;
            break;
        case -372:                               /* CMove(cp, reg, value) - one copper long */
        case -378:                               /* CWait(cp, vpos, hpos) */
            /* The copper list is never executed (this port is a chunky renderer), but the game
             * chains the returned pointer, so it has to advance by one instruction. */
            result = arg32(sp, 0) + 4;
            break;
        case -360:                               /* InitView(view) */
        case -204:                               /* InitVPort(vp) */
        case -198:                               /* InitRastPort(rp) */
        case -282:                               /* InitArea */
        case -468:                               /* InitTmpRas */
        case -366:                               /* CBump */
        case -240:                               /* Move */
        case -246:                               /* Draw */
        case -54:                                /* TextLength - no font, so no width */
        case -60:                                /* Text */
        case -216:                               /* MakeVPort */
            result = 0;
            break;
        case -210:                               /* MrgCop(view) - the game patches this list */
            emu_gfx_mrg_cop(m, arg32(sp, 0));
            result = 0;
            break;
        case -564:                               /* FreeCprList */
        case -540:                               /* FreeVPortCopLists */
            result = 0;
            break;
        case -270:                               /* WaitTOF - wait for the next vertical blank */
            waitFrame = 1;
            result = 0;
            break;
        case -402:                               /* WaitBOVP(vp) - the flip's frame pacing */
            waitFrame = 1;
            result = 0;
            break;
        case -228:                               /* WaitBlit */
        case -456:                               /* OwnBlitter */
        case -462:                               /* DisownBlitter */
        case -576:                               /* FreeColorMap */
            result = 0;
            break;
        case -570:                               /* GetColorMap(entries) */
            {
                int n = (int)arg32(sp, 0);
                u32 cm, table;
                if (n <= 0 || n > 256) n = 32;
                cm = emu_alloc(20);              /* Node(14) + Flags + Count + Table */
                table = emu_alloc((u32)n * 4u);
                emu_write8(&m->mem, cm + 14, 0);
                emu_write8(&m->mem, cm + 15, (u8)n);
                emu_write32(&m->mem, cm + 16, table);
                result = cm;
                if (m->trace)
                    printf("     colormap %d entries at %06lX table %06lX\n", n,
                           (unsigned long)cm, (unsigned long)table);
            }
            break;
        case -222:                               /* LoadView(view) - present it */
            {
                u32 v = arg32(sp, 0);
                m->view = v;
                emu_gfx_present(m, v);
                if (m->trace)
                {
                    u32 vp = v != 0 ? emu_read32(&m->mem, v) : 0;
                    printf("emu: LoadView view=%06lX vp=%06lX\n",
                           (unsigned long)v, (unsigned long)vp);
                }
                result = 0;
            }
            break;
        default:
            goto unhandled;
        }
    }
    else if (lib == EMU_LIB_CIAARES)             /* ciaa.resource */
    {
        /* The audio driver (FUN_0000ed90) arms a 50 Hz interrupt source here. A resource base
         * has no open/close/expunge: its vectors start at -6 with the resource's own functions,
         * and the three calls this game makes line up with them by argument shape:
         *   -6  AddICRVector(res, icrBit, interrupt)   FUN_0000ed90, result must be 0
         *   -12 RemICRVector(res, icrBit, interrupt)   FUN_0000ed2a, mirrors -6
         *   -18 AbleICR(res, flags)                    FUN_0000ed90, flags 0x81 = enable porta
         * The tick itself comes from the interrupt model; here we only remember is_Code. */
        switch (lvo)
        {
        case -6:                                 /* AddICRVector */
            {
                u32 intr = arg32(sp, 2);
                if (intr != 0)
                    emu_add_server(m, emu_read32(&m->mem, intr + 0x12),
                                   emu_read32(&m->mem, intr + 0x0E));
                if (m->trace)
                    printf("     AddICRVector bit %ld interrupt %06lX\n",
                           (long)arg32(sp, 1), (unsigned long)intr);
            }
            result = 0;
            break;
        case -12:                                /* RemICRVector */
            {
                u32 intr = arg32(sp, 2);
                if (intr != 0) emu_remove_server(m, emu_read32(&m->mem, intr + 0x12));
            }
            result = 0;
            break;
        case -18:                                /* AbleICR */
            if (m->trace)
                printf("     AbleICR %02lX\n", (unsigned long)(arg32(sp, 1) & 0xFF));
            result = 0;
            break;
        default:
            goto unhandled;
        }
    }
    else
    {
        switch (lvo)
        {
        case -270:                               /* graphics.WaitTOF */
        case -228:                               /* graphics.WaitBlit */
            result = 0;
            break;
        default:
            goto unhandled;
        }
    }

    goto done;

unhandled:
    {
        lvo_stat *st = lvo_stat_get(lib, lvo);
        if (st != 0) st->unhandled++;
    }
    if (lvoSeen[i]++ == 0)
    {
        printf("emu: unhandled LVO %ld (%s) on %s (base %06lX) from %06lX"
               " args %08lX %08lX %08lX - returns 0\n",
               (long)lvo, lvo_name(lvo), libraryName[lib], (unsigned long)m->libraryBase[lib],
               (unsigned long)ret, (unsigned long)arg32(sp, 0),
               (unsigned long)arg32(sp, 1), (unsigned long)arg32(sp, 2));
        emu_dump_call_site(m, ret);
    }
    result = 0;

done:
    if (m->trace)
        printf("     -> %-28s (%ld) lib %d args %08lX %08lX %08lX = %08lX\n",
               lvo_name(lvo), (long)lvo, lib,
               (unsigned long)arg32(sp, 0), (unsigned long)arg32(sp, 1),
               (unsigned long)arg32(sp, 2), (unsigned long)result);

    m68k_set_reg(M68K_REG_D0, result);
    m68k_set_reg(M68K_REG_A7, sp + 4);
    m68k_set_reg(M68K_REG_PC, ret);
    /* Only now, with the stack popped and the PC back in the caller, may the wait be posted:
     * stepping while the shim still owns the frame let the nested dispatch complete the call, and
     * the stale `sp + 4` / return address written here then rewound the program onto a stack frame
     * it had already left. */
    if (waitFrame) emu_request_vblank(m);
    return 1;
}

int emu_init(emu_machine *m)
{
    memset(m, 0, sizeof(*m));
    if (!emu_mem_init(&m->mem, EMU_RAM_SIZE)) return 0;
    emu_current = m;
    /* exec, graphics and dos bases up front, so the run stops at the first LVO instead of
     * following a null library pointer into nothing. */
    emu_library_new(m);
    emu_library_new(m);
    emu_library_new(m);
    emu_library_new(m);
    emu_library_new(m);
    emu_library_new(m);
    while (m->libraries < EMU_LIB_SLOTS) emu_library_new(m);
    emu_heap_reset();
    m->insnToTick = EMU_INSN_PER_FRAME;
    /* AbsExecBase: the cstart does `movea.l 4.w,a6` and stores it where it needs it, exactly
     * like on the real machine. */
    emu_write32(&m->mem, 4, m->libraryBase[0]);
    emu_gfx_reset(m);
    return 1;
}

void emu_shutdown(emu_machine *m)
{
    emu_mem_free(&m->mem);
    if (emu_current == m) emu_current = 0;
}

int emu_load_image(emu_machine *m, u32 addr, const char *path)
{
    plat_file *f;
    u32 size, got;
    u8 *buf;
    int ok;

    f = plat_open(path);
    if (f == 0) return 0;
    size = plat_size(f);
    buf = (u8 *)plat_alloc(size);
    if (buf == 0) { plat_close(f); return 0; }
    got = plat_read(f, 0, buf, size);
    plat_close(f);
    ok = (got == size) && emu_mem_load(&m->mem, addr, buf, size);
    if (ok) m->imageTop = addr + size;
    plat_free(buf);
    return ok;
}

u32 emu_library_new(emu_machine *m)
{
    u32 base = EMU_LIB_BASE + (u32)m->libraries * EMU_LIB_STRIDE;
    m->libraryBase[m->libraries++] = base;
    return base;
}

int emu_library_of(emu_machine *m, u32 pc, s32 *lvo)
{
    int i;

    for (i = 0; i < m->libraries; i++)
    {
        u32 base = m->libraryBase[i];
        if (pc < base && pc + EMU_LIB_SPAN > base)
        {
            if (lvo != 0) *lvo = (s32)pc - (s32)base;
            return i;
        }
    }
    return -1;
}

/* Prints the code around a library call. `ret` is the return address the call pushed, so
 * execution resumes there; the call itself is further back in the ring behind the engine's own
 * thunk/trampoline chain. An unhandled LVO is only actionable with that code, so the ring plus the
 * resume instruction is the diagnostic. */
static void emu_dump_call_site(emu_machine *m, u32 ret)
{
    char text[128];
    int k, n = 0;

    printf("       resumes at %06lx: ", (unsigned long)ret);
    m68k_disassemble(text, ret, M68K_CPU_TYPE_68000);
    printf("%s\n", text);
    /* Chronological: the ring is empty before boot-up, so start after the last zero unless it has
     * wrapped all the way round. */
    for (k = 0, n = -1; k < EMU_RING_SIZE; k++)
        if (m->ring[(m->ringPos + k) & (EMU_RING_SIZE - 1)] == 0) n = k;
    for (k = n + 1; k < n + 1 + EMU_RING_SIZE; k++)
    {
        u32 pc = m->ring[(m->ringPos + k) & (EMU_RING_SIZE - 1)];
        m68k_disassemble(text, pc, M68K_CPU_TYPE_68000);
        printf("       %06lx  %s\n", (unsigned long)pc, text);
    }
    printf("       A6=%06lx A5=%06lx A4=%06lx A3=%06lx A2=%06lx A1=%06lx A0=%06lx\n",
           (unsigned long)m68k_get_reg(0, M68K_REG_A6),
           (unsigned long)m68k_get_reg(0, M68K_REG_A5),
           (unsigned long)m68k_get_reg(0, M68K_REG_A4),
           (unsigned long)m68k_get_reg(0, M68K_REG_A3),
           (unsigned long)m68k_get_reg(0, M68K_REG_A2),
           (unsigned long)m68k_get_reg(0, M68K_REG_A1),
           (unsigned long)m68k_get_reg(0, M68K_REG_A0));
}

/* Dumps the PC ring with disassembly, for the fail-fast checks below. */
static void emu_dump_ring(emu_machine *m)
{
    char text[128];
    int k;

    for (k = 0; k < EMU_RING_SIZE; k++)
    {
        u32 pc = m->ring[(m->ringPos + k) & (EMU_RING_SIZE - 1)];
        if (pc == 0) continue;
        m68k_disassemble(text, pc, M68K_CPU_TYPE_68000);
        printf("      %06lx  %s\n", (unsigned long)pc, text);
    }
    printf("      A6=%06lx A5=%06lx D0=%08lx D1=%08lx\n",
           (unsigned long)m68k_get_reg(0, M68K_REG_A6),
           (unsigned long)m68k_get_reg(0, M68K_REG_A5),
           (unsigned long)m68k_get_reg(0, M68K_REG_D0),
           (unsigned long)m68k_get_reg(0, M68K_REG_D1));
}

/* --- interrupt model ---------------------------------------------------------------------- */
/* Everything the game does per frame hangs off the vertical blank: FUN_0001E3F6 registers the
 * MovE frame interrupt with AddIntServer(INTB_VERTB = 5, &DAT_26850 "MovE_VB") and the audio
 * driver arms ciaa.resource with AddICRVector (CIA-A port A bit 0 is /VERTB). Servers run in
 * registration order, which is also the order the game registered them in. */

static void emu_add_server(emu_machine *m, u32 code, u32 data)
{
    int i;
    if (code == 0) return;
    for (i = 0; i < m->intCount; i++)
    {
        if (m->intCode[i] == code) { m->intData[i] = data; return; }
    }
    if (m->intCount >= EMU_MAX_INT) return;
    m->intCode[m->intCount] = code;
    m->intData[m->intCount] = data;
    m->intCount++;
    printf("emu: interrupt server %06lX data %06lX (slot %d)\n", (unsigned long)code,
           (unsigned long)data, m->intCount - 1);
}

static void emu_remove_server(emu_machine *m, u32 code)
{
    int i;
    for (i = 0; i < m->intCount; i++)
    {
        if (m->intCode[i] != code) continue;
        for (; i + 1 < m->intCount; i++)
        {
            m->intCode[i] = m->intCode[i + 1];
            m->intData[i] = m->intData[i + 1];
        }
        m->intCount--;
        return;
    }
}

/* Saved register file: an interrupt handler runs between two instructions of the main program
 * and must leave it exactly as it found it. */
static void emu_save_regs(u32 *r)
{
    int i;
    for (i = 0; i < 16; i++) r[i] = m68k_get_reg(0, (int)M68K_REG_D0 + i);
    r[16] = m68k_get_reg(0, M68K_REG_SR);
    r[17] = m68k_get_reg(0, M68K_REG_PC);     /* the instruction the handler interrupted */
}

static void emu_restore_regs(const u32 *r)
{
    int i;
    for (i = 0; i < 16; i++) m68k_set_reg((int)M68K_REG_D0 + i, r[i]);
    m68k_set_reg(M68K_REG_SR, r[16]);
    m68k_set_reg(M68K_REG_PC, r[17]);
}

/* The interrupt returns through this address (pushed as the return address of the handler). */
#define EMU_INT_RET 0x00000204u

static int emu_step(emu_machine *m);

/* Runs one handler to its rts. Returns 0 when the handler never returned. */
static int emu_run_handler(emu_machine *m, u32 code, u32 data)
{
    long guard = 400000;               /* an A500 vblank handler must fit in a few thousand */
    u32 sp = m68k_get_reg(0, M68K_REG_A7) - 4;

    m->handlerRuns++;
    emu_write32(&m->mem, sp, EMU_INT_RET);
    m68k_set_reg(M68K_REG_A7, sp);
    m68k_set_reg(M68K_REG_A1, data);    /* Amiga passes is_Data in A1 */
    m68k_set_reg(M68K_REG_SR, 0x2700);  /* supervisor, interrupts disabled while in the handler */
    m68k_set_reg(M68K_REG_PC, code);
    while (m68k_get_reg(0, M68K_REG_PC) != EMU_INT_RET)
    {
        if (guard-- <= 0)
        {
            printf("emu: interrupt handler %06lx did not return (frame %lu)\n",
                   (unsigned long)code, (unsigned long)m->frame);
            return 0;
        }
        if (!emu_step(m)) return 0;
    }
    return 1;
}

/* WaitTOF / WaitBOVP: the program blocks until the next vertical blank. The CPU is idle in the OS
 * for the rest of the frame, so the wait must cost *no* game instructions - it only ends the current
 * frame early and is satisfied by the next tick. Running instructions here instead (the first
 * version of this shim did) let the game's own frame loop iterate many times inside one vblank:
 * WaitTOF was already "in progress" and got swallowed, so one frame's budget produced ~21 intro
 * ticks and the 477-frame intro timeline was consumed in a dozen frames. */
static void emu_request_vblank(emu_machine *m)
{
    if (m->inTick) return;             /* a vblank server cannot wait for the next vblank */
    m->waitVblank = 1;
}

/* One vertical blank: bump the frame, then run every registered interrupt server. */
static void emu_tick(emu_machine *m)
{
    u32 save[18];
    int i;

    m->frame++;
    m->insnToTick = EMU_INSN_PER_FRAME;
    if (m->pressAt != 0)
        m->fireDown = (m->frame >= m->pressAt && (m->releaseAt == 0 || m->frame < m->releaseAt))
                          ? 1u : 0u;
    /* The tool's once-per-frame hook. Input must be read here and not on a present, because the
     * game spends long stretches with nothing to present (it waits for /FIRE inside the menus) and
     * a window that is only pumped when a raster is shown stops responding exactly then. */
    if (m->on_frame) m->on_frame(m);
    if (m->inTick) return;             /* a handler cannot be interrupted by the next vblank */
    m->inTick = 1;
    emu_save_regs(save);
    for (i = 0; i < m->intCount; i++)
    {
        u32 code = m->intCode[i];
        if (code == 0) continue;
        if (!emu_run_handler(m, code, m->intData[i])) break;
        emu_restore_regs(save);        /* handlers nest in order, each sees the same state */
    }
    emu_restore_regs(save);
    m->inTick = 0;
}

/* One instruction, the library trap and the fail-fast checks. 1 = keep running. */
static int emu_step(emu_machine *m)
{
    char text[128];
    u32 pc = m68k_get_reg(0, M68K_REG_PC);
    s32 lvo = 0;

    if (m->watch != 0 && pc == m->watch)
    {
        int k;
        printf("emu: watch hit %06lx, recent PCs:", (unsigned long)pc);
        for (k = 0; k < EMU_RING_SIZE; k++)
            printf(" %06lx", (unsigned long)m->ring[(m->ringPos + k) & (EMU_RING_SIZE - 1)]);
        printf("\n");
    }
    m->ring[m->ringPos++ & (EMU_RING_SIZE - 1)] = pc;
    m->insns++;
    if (pc == EMU_EXIT_PC)
    {
        printf("emu: the program returned, D0=%08lx (frame %lu, %ld instructions)\n",
               (unsigned long)m68k_get_reg(0, M68K_REG_D0), (unsigned long)m->frame,
               (unsigned long)m->insns);
        return 0;
    }
    if ((m68k_get_reg(0, M68K_REG_A7) & 1) != 0 || m68k_get_reg(0, M68K_REG_A7) < 0x1000u)
    {
        printf("emu: stack pointer went bad (%06lx) at pc %06lx:\n",
               (unsigned long)m68k_get_reg(0, M68K_REG_A7), (unsigned long)pc);
        emu_dump_ring(m);
        return 0;
    }
    if (pc < EMU_IMAGE_BASE)
    {
        printf("emu: PC ran below the image at %06lx:\n", (unsigned long)pc);
        emu_dump_ring(m);
        return 0;
    }
    if (emu_library_of(m, pc, &lvo) >= 0)
    {
        int lib = emu_library_of(m, pc, &lvo);
        return emu_dispatch(m, lib, lvo);          /* unhandled: stop and report */
    }
    if (m->imageTop != 0 && pc >= m->imageTop && pc < EMU_LIB_BASE)
    {
        printf("emu: PC left the image at %06lx\n", (unsigned long)pc);
        return 0;
    }
    if (m->trace)
    {
        m68k_disassemble(text, pc, M68K_CPU_TYPE_68000);
        printf("%06lx  %-40s D0=%08lX A0=%08lX A7=%08lX\n",
               (unsigned long)pc, text,
               (unsigned long)m68k_get_reg(0, M68K_REG_D0),
               (unsigned long)m68k_get_reg(0, M68K_REG_A0),
               (unsigned long)m68k_get_reg(0, M68K_REG_A7));
    }
    m68k_execute(1);
    return 1;
}

u32 emu_run(emu_machine *m, long maxInsns)
{
    while (m->insns < maxInsns)
    {
        if (m->stop) break;            /* the tool asked to finish (window closed) */
        if (m->waitVblank)
        {
            /* The program asked for the next vblank: the rest of this frame is idle, so no
             * instruction is executed for it. One budget step is enough to end the frame. */
            m->waitVblank = 0;
            m->insnToTick = 1;
        }
        if (!emu_step(m)) return m68k_get_reg(0, M68K_REG_PC);
        if (--m->insnToTick <= 0) emu_tick(m);
        if (m->progress && (m->insns % 1000000L) == 0)
            printf("emu: %ld steps, pc %06lx, frame %lu, %lu raster(s), %lu blit(s), %lu drop(s), %lu fire poll(s), %lu handler(s)\n",
                   (long)m->insns, (unsigned long)m68k_get_reg(0, M68K_REG_PC),
                   (unsigned long)m->frame, (unsigned long)m->gfx.frames,
                   (unsigned long)m->blits, (unsigned long)m->blitDrops,
                   (unsigned long)m->firePolls, (unsigned long)m->handlerRuns);
    }
    emu_lvo_report();
    return m68k_get_reg(0, M68K_REG_PC);
}

/* Boots the image at 0 with the register state the exporter documents. */
void emu_boot(u32 entry, u32 a4)
{
    m68k_init();
    m68k_set_cpu_type(M68K_CPU_TYPE_68000);
    m68k_pulse_reset();
    m68k_set_reg(M68K_REG_PC, entry);
    m68k_set_reg(M68K_REG_A7, EMU_STACK_TOP - 4);
    m68k_set_reg(M68K_REG_A4, a4);
    /* The Lattice C startup: A0 points at the command line tail, D0 is its length. dshell takes
     * no arguments (see the HDesert script), so both are empty but A0 must still be readable. */
    m68k_set_reg(M68K_REG_A0, EMU_ARGS_ADDR);
    m68k_set_reg(M68K_REG_D0, 0);
    m68k_set_reg(M68K_REG_SR, 0x2700);
    /* After the image load: the image's BSS ends at 0x31598 and the Process block must survive. */
    emu_build_process(emu_current);
    /* The hunk loader would have called us, so leave a return address the program can rts to.
     * The DOS loader does the same: the entry code ends with `rts`. */
    emu_write32(&emu_current->mem, EMU_STACK_TOP - 4, EMU_EXIT_PC);
}
