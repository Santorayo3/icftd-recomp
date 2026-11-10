/* The Amiga machine model: memory, the library shims, the heap and the exec structures.
 *
 * This is the runtime. It knows nothing about the 68000: a library call arrives as
 * rt_os_call(m, sp, a1, lib, lvo) and returns a result, and whoever executes the code (the
 * Musashi front end in src\oracle today, the translated dispatcher in src\recomp tomorrow) owns
 * the registers. `blitter.c` and `display.c` sit beside it; below them is only the platform.
 */
#include "machine.h"
#include "blitter.h"
#include "display.h"
#include "platform.h"

#include <stdio.h>
#include <string.h>

rt_machine *rt_current = 0;


/* --- host filesystem behind dos.library ---------------------------------------------------- */
/* The game asks for AmigaDOS names like "Desert1:OPEN". The extracted disk folders on the host
 * hold exactly those files, so a volume becomes a directory: Desert1 -> <dataDir>\disk1. A real
 * OFS/FFS reader over the ADFs replaces this later; the shim interface will not change. */

static int rt_volume_index(const char *name)
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

static void rt_path_after_volume(const char *name, char *out, int max)
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

static u32 rt_alloc(u32 bytes);
static void rt_add_server(rt_machine *m, u32 code, u32 data);
static void rt_remove_server(rt_machine *m, u32 code);

static u32 rt_file_open(rt_machine *m, const char *name)
{
    char path[256], rel[192];
    int vol, slot;

    for (slot = 0; slot < EMU_MAX_FILES; slot++)
        if (m->files[slot].f == 0) break;
    if (slot >= EMU_MAX_FILES) return 0;

    rt_path_after_volume(name, rel, (int)sizeof(rel));
    if (rel[0] == 0) return 0;

    vol = rt_volume_index(name);
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
    m->files[slot].addr = rt_alloc(44);
    if (m->files[slot].addr == 0)
    {
        plat_close((plat_file *)m->files[slot].f);
        m->files[slot].f = 0;
        return 0;
    }
    rt_write32(&m->mem, m->files[slot].addr + 0, 0);
    rt_write32(&m->mem, m->files[slot].addr + 36, 0);   /* fh_Args */
    rt_write32(&m->mem, m->files[slot].addr + 40, 0);   /* fh_Arg1 */
    /* Few files are opened, and "which file did the game try to read" is the first question for
     * every new scene, so this reports unconditionally. */
    printf("emu: open \"%s\" -> %s (%lu bytes)\n", name, path, (unsigned long)m->files[slot].size);
    return m->files[slot].addr >> 2;
}

static rt_file *rt_file_of(rt_machine *m, u32 bptr)
{
    u32 addr = bptr << 2;
    int i;

    if (bptr == 0) return 0;
    for (i = 0; i < EMU_MAX_FILES; i++)
        if (m->files[i].f != 0 && m->files[i].addr == addr) return &m->files[i];
    return 0;
}

static void rt_file_close(rt_machine *m, u32 fh)
{
    rt_file *f = rt_file_of(m, fh);
    if (f == 0) return;
    plat_close((plat_file *)f->f);
    f->f = 0;
}

static u32 rt_file_read(rt_machine *m, u32 fh, u32 buf, u32 len)
{
    rt_file *f = rt_file_of(m, fh);
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

void rt_lvo_report(void);

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
typedef struct rt_block
{
    u32 magic;                       /* EMU_BLOCK_MAGIC while the header is intact */
    u32 size;                        /* including this header, 8-byte aligned */
    u32 used;                        /* 1 = handed out */
    u32 pad;
} rt_block;

#define EMU_BLOCK_MAGIC 0x424C4B31u  /* 'BLK1' */
#define EMU_BLOCK_HDR  ((u32)sizeof(rt_block))
#define EMU_HEAP_BASE 0x00040000u
#define EMU_HEAP_TOP  0x0017C000u     /* EMU_SYS_BASE: the exec structures live above */
static rt_block *heapFirst;
static int heapCorrupt;

static void rt_heap_reset(void)
{
    heapCorrupt = 0;
    heapFirst = (rt_block *)(rt_current->mem.base + EMU_HEAP_BASE);
    heapFirst->magic = EMU_BLOCK_MAGIC;
    heapFirst->size = EMU_HEAP_TOP - EMU_HEAP_BASE;
    heapFirst->used = 0;
}

/* Next block in address order, or 0 when the list ends or a header has been overwritten. */
static rt_block *heap_next(rt_block *b)
{
    u32 off;
    rt_block *n;

    if (b->magic != EMU_BLOCK_MAGIC || b->size < EMU_BLOCK_HDR)
    {
        if (!heapCorrupt++)
            printf("emu: heap header at %06lX was overwritten (frame %lu) - list ends here\n",
                   (unsigned long)((u8 *)b - rt_current->mem.base),
                   (unsigned long)rt_current->frame);
        return 0;
    }
    off = (u32)((u8 *)b - rt_current->mem.base) + b->size;
    if (off + EMU_BLOCK_HDR > EMU_HEAP_TOP) return 0;
    n = (rt_block *)(rt_current->mem.base + off);
    return n->magic == EMU_BLOCK_MAGIC ? n : 0;
}

/* First fit. Splits when the tail is still big enough to be worth a header. */
static u32 rt_alloc(u32 bytes)
{
    rt_block *b;

    bytes = (bytes + 7u) & ~7u;                       /* AllocMem rounds to 8 */
    if (bytes == 0) bytes = 8;
    for (b = heapFirst; b != 0; b = heap_next(b))
    {
        if (b->used || b->size < bytes + EMU_BLOCK_HDR) continue;
        if (b->size >= bytes + EMU_BLOCK_HDR + 16u)
        {
            rt_block *rest = (rt_block *)((u8 *)b + EMU_BLOCK_HDR + bytes);
            rest->magic = EMU_BLOCK_MAGIC;
            rest->size = b->size - EMU_BLOCK_HDR - bytes;
            rest->used = 0;
            b->size = EMU_BLOCK_HDR + bytes;
        }
        b->used = 1;
        memset((u8 *)b + EMU_BLOCK_HDR, 0, b->size - EMU_BLOCK_HDR);
        return (u32)((u8 *)b - rt_current->mem.base) + EMU_BLOCK_HDR;
    }
    printf("emu: out of memory asking for %lu bytes (frame %lu)\n",
           (unsigned long)bytes, (unsigned long)rt_current->frame);
    return 0;
}

void rt_free(u32 addr)
{
    rt_block *b, *n;

    if (addr < EMU_HEAP_BASE + EMU_BLOCK_HDR || addr >= EMU_HEAP_TOP) return;   /* not ours */
    b = (rt_block *)(rt_current->mem.base + addr - EMU_BLOCK_HDR);
    if (b->magic != EMU_BLOCK_MAGIC || !b->used) return;  /* corrupt or double free: ignore */
    b->used = 0;
    /* Coalesce forwards as far as the neighbours are free, then backwards once. */
    while ((n = heap_next(b)) != 0 && !n->used)
        b->size += n->size;
    {
        rt_block *p = heapFirst;
        while (p != 0 && heap_next(p) != b) p = heap_next(p);
        if (p != 0 && !p->used)
        {
            while ((n = heap_next(p)) != 0 && !n->used) p->size += n->size;
        }
    }
}

/* Public form for the graphics shim (MrgCop's copper list). */
u32 rt_alloc_bytes(u32 bytes)
{
    return rt_alloc(bytes);
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

void rt_lvo_report(void)
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
        u8 ch = (u8)rt_read8(&rt_current->mem, addr + (u32)i);
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
    return rt_read32(&rt_current->mem, sp + 4 + (u32)n * 4);
}

static void write_cstr(u32 addr, const char *s)
{
    while (*s != 0) rt_write8(&rt_current->mem, addr++, (u8)*s++);
    rt_write8(&rt_current->mem, addr, 0);
}

/* Builds the Process that FindTask(0) returns, plus the CLI record the cstart reads. See the
 * comment at EMU_CLI_ADDR for why this is the CLI and not the Workbench form. Must run *after* the
 * image is loaded: the image's BSS reaches past this block. */
void rt_build_process(rt_machine *m)
{    u32 proc = EMU_TASK_ADDR;
    u32 port = proc + 0x5Cu;                 /* struct Process: Task, then pr_MsgPort */
    u32 msgList = port + 0x14u;
    const char *name = "dshell";

    rt_write8(&m->mem, proc + 8, 13);                 /* ln_Type = NT_PROCESS */
    rt_write8(&m->mem, proc + 0x0F, 2);               /* tc_State = TS_RUN */
    rt_write8(&m->mem, port + 8, 4);                  /* pr_MsgPort.ln_Type = NT_MSGPORT */
    rt_write8(&m->mem, port + 0x0E, 2);               /* mp_Flags = PA_SIGNAL */
    rt_write8(&m->mem, port + 0x0F, (u8)(m->signals++));  /* mp_SigBit */
    rt_write32(&m->mem, port + 0x10, proc);           /* mp_SigTask */
    rt_write32(&m->mem, msgList, msgList);            /* empty List */
    rt_write32(&m->mem, msgList + 8, msgList);        /* lh_TailPred */

    rt_write8(&m->mem, EMU_CMDLINE_ADDR, 6);          /* BSTR: length byte, then "dshell" */
    write_cstr(EMU_CMDLINE_ADDR + 1u, name);

    rt_write32(&m->mem, EMU_CLI_ADDR + 0x10,
                (EMU_CMDLINE_ADDR + 4u) >> 2);         /* cli_CommandName (BPTR) */
    rt_write8(&m->mem, EMU_CLI_ADDR + 0x14, 20);      /* cli_FailLevel */
    rt_write32(&m->mem, proc + 0xAC, (EMU_CLI_ADDR + 4u) >> 2);   /* pr_CLI */
    rt_write8(&m->mem, EMU_ARGS_ADDR, 0);             /* no arguments */

    /* AbsExecBase. Written here and not only in rt_init, because the image load comes in between:
     * at base 0 the flattened image covers address 4, so the load would replace it. */
    rt_write32(&m->mem, 4, m->libraryBase[0]);
}

/* --- exec structures ---------------------------------------------------------------------- */
/* List is 14 bytes (head, tail, tailpred, type, pad); Node is 14 bytes; MsgPort is a Node plus
 * mp_Flags, mp_SigBit, mp_SigTask and the 14-byte message List - 34 bytes in all. */
#define LIST_HEAD(a)     ((a) + 0u)
#define LIST_TAILPRED(a) ((a) + 8u)

static void rt_new_list(rt_machine *m, u32 a)
{
    rt_write32(&m->mem, a + 0, a + 4);          /* lh_Head   = &lh_Tail */
    rt_write32(&m->mem, a + 4, 0);              /* lh_Tail   = 0 */
    rt_write32(&m->mem, a + 8, a + 0);          /* lh_TailPred = &lh_Head */
    rt_write8(&m->mem, a + 12, 0);              /* lh_Type */
    rt_write8(&m->mem, a + 13, 0);
}

static u32 rt_new_port(rt_machine *m)
{
    u32 p = rt_alloc(34);
    if (p == 0) return 0;
    rt_write32(&m->mem, p + 0, 0);              /* ln_Succ */
    rt_write32(&m->mem, p + 4, 0);              /* ln_Pred */
    rt_write8(&m->mem, p + 8, 4);               /* ln_Type = NT_MSGPORT */
    rt_write8(&m->mem, p + 9, 0);               /* ln_Pri */
    rt_write32(&m->mem, p + 10, 0);             /* ln_Name */
    rt_write8(&m->mem, p + 14, 2);              /* mp_Flags = PA_IGNORE */
    rt_write8(&m->mem, p + 15, 0);              /* mp_SigBit */
    rt_write32(&m->mem, p + 16, EMU_TASK_ADDR); /* mp_SigTask */
    rt_new_list(m, p + 20);
    return p;
}

/* Kept for CreatePort-style shims landing next; AddPort takes a caller-made port. */
static u32 (*const rt_new_port_ref)(rt_machine *) = rt_new_port;

static void rt_put_msg(rt_machine *m, u32 port, u32 msg)
{
    u32 head = rt_read32(&m->mem, port + 20);
    rt_write32(&m->mem, msg + 0, head);         /* ln_Succ */
    rt_write32(&m->mem, msg + 4, port + 20);    /* ln_Pred = &lh_Head */
    rt_write32(&m->mem, head + 4, msg);         /* head->ln_Pred = msg */
    rt_write32(&m->mem, port + 20, msg);        /* lh_Head = msg */
}

static u32 rt_get_msg(rt_machine *m, u32 port)
{
    u32 list = port + 20;
    u32 head = rt_read32(&m->mem, list);
    u32 next;

    if (head == list + 4) return 0;              /* empty: head points at lh_Tail */
    next = rt_read32(&m->mem, head + 0);
    rt_write32(&m->mem, list, next);
    rt_write32(&m->mem, next + 4, list);
    return head;
}

/* One library call, as the program makes it.
 *
 * The 68k ABI is `jsr (lvo,A6)`: the return address is at A7, the arguments above it, the result
 * goes to D0 and A7 stays popped by 4. None of that belongs here - the caller owns the CPU. This
 * takes the stack pointer and A1 (one shim, OpenLibrary, receives its name in A1) as plain values
 * and returns the result, plus two flags the caller must act on:
 *
 *   m->waitVblank   a WaitTOF/WaitBOVP ran: the frame is over (see rt_request_vblank)
 *   m->stop         the program halted (Alert)
 *
 * That is the only seam between the machine model and whatever executes the code: the Musashi
 * front end in src\oracle for the original binary, and the translated function dispatcher for the
 * shipped game. `lib` is the base index from rt_library_of(), because the same LVO means different
 * functions per library. */
u32 rt_os_call(rt_machine *m, u32 sp, u32 a1, int lib, s32 lvo)
{
    u32 ret = rt_read32(&m->mem, sp);
    u32 result = 0;
    int waitFrame = 0;             /* set by WaitTOF/WaitBOVP, acted on after the call returns */
    int i;

    if (m->callLog != 0)
        fprintf((FILE *)m->callLog, "%ld %d %ld\n", (long)m->insns, lib, (long)lvo);

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
            result = rt_alloc(arg32(sp, 0));
            break;
        case -210:                               /* FreeMem(block, bytes) */
            /* Must actually free: the game releases a scene's bitmaps and allocates the next
             * screen's, so a heap that only ever grows runs dry inside the first menu. */
            rt_free(arg32(sp, 0));
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
                if (nameAddr == 0) nameAddr = a1;    /* one shim takes its argument in A1 */
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
            result = rt_get_msg(m, arg32(sp, 0));
            break;
        case -384:                               /* WaitPort(port) */
            result = rt_read32(&m->mem, arg32(sp, 0) + 20);
            if (result == arg32(sp, 0) + 24) result = 0;    /* empty -> .l nothing pending */
            break;
        case -378:                               /* ReplyMsg(message) */
            {
                u32 msg = arg32(sp, 0);
                u32 port = msg != 0 ? rt_read32(&m->mem, msg + 14) : 0;
                if (port != 0) rt_put_msg(m, port, msg);
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
                    rt_add_server(m, rt_read32(&m->mem, intr + 0x12),
                                   rt_read32(&m->mem, intr + 0x0E));
                if (m->trace)
                    printf("     AddIntServer %ld interrupt %06lX\n",
                           (long)arg32(sp, 0), (unsigned long)intr);
            }
            result = 0;
            break;
        case -174:                               /* RemIntServer(number, interrupt) */
            {
                u32 intr = arg32(sp, 1);
                if (intr != 0) rt_remove_server(m, rt_read32(&m->mem, intr + 0x12));
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
                if (iob != 0) rt_write32(&m->mem, iob + 0x14, m->libraryBase[idx]);
                if (m->trace)
                    printf("     device \"%s\" unit %ld iob %06lX -> %s\n", name,
                           (long)arg32(sp, 1), (unsigned long)iob, libraryName[idx]);
            }
            result = 0;
            break;
        case -450:                               /* CloseDevice(iob) */
            {
                u32 iob = arg32(sp, 0);
                if (iob != 0) rt_write32(&m->mem, iob + 0x14, 0);
            }
            result = 0;
            break;
        case -456:                               /* DoIO(iob) - no device timing yet */
            result = 0;
            break;
        case -108:                               /* Alert(code) - never returns */
            printf("emu: ALERT 0x%lX - the original halted here\n",
                   (unsigned long)arg32(sp, 0));
            m->stop = 1;
            result = 0;
            break;
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
                result = rt_file_open(m, name);
                if (m->dosLog)
                    printf("     dos.Open(\"%s\",%ld) = %06lX from %06lX\n", name, (long)arg32(sp, 1),
                           (unsigned long)result, (unsigned long)ret);
            }
            break;
        case -36:                                /* Close(fh) */
            rt_file_close(m, arg32(sp, 0));
            result = 0;
            break;
        case -42:                                /* Read(fh, buf, len) */
            result = rt_file_read(m, arg32(sp, 0), arg32(sp, 1), arg32(sp, 2));
            if (m->dosLog)
                printf("     dos.Read(%06lX,%06lX,%lu) = %lu (pos %lu)\n",
                       (unsigned long)arg32(sp, 0), (unsigned long)arg32(sp, 1),
                       (unsigned long)arg32(sp, 2), (unsigned long)result,
                       (unsigned long)(rt_file_of(m, arg32(sp, 0)) != 0
                                          ? rt_file_of(m, arg32(sp, 0))->pos : 0));
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
                    u8 ch = (u8)rt_read8(&m->mem, buf + k);
                    if (ch == 0) break;
                    putchar((int)ch);
                }
                result = len;
            }
            break;
        case -66:                                /* Seek(fh, offset, offsetMode) */
            {
                rt_file *f = rt_file_of(m, arg32(sp, 0));
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
                    rt_write32(&m->mem, ds + 0, 0);
                    rt_write32(&m->mem, ds + 4, 0);
                    rt_write32(&m->mem, ds + 8, 0);
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
            rt_gfx_init_bitmap(m, arg32(sp, 0), (int)arg32(sp, 1), (int)arg32(sp, 2),
                                (int)arg32(sp, 3));
            result = 0;
            break;
        case -30:                                /* BltBitMap */
            if (m->progress)
                printf("     BltBitMap src %06lX (%ld,%ld) dst %06lX (%ld,%ld) %ldx%ld minterm %02lX\n",
                       (unsigned long)arg32(sp, 0), (long)arg32(sp, 1), (long)arg32(sp, 2),
                       (unsigned long)arg32(sp, 3), (long)arg32(sp, 4), (long)arg32(sp, 5),
                       (long)arg32(sp, 6), (long)arg32(sp, 7), (unsigned long)arg32(sp, 8));
            rt_gfx_blt_bitmap(m, arg32(sp, 0), (s32)arg32(sp, 1), (s32)arg32(sp, 2),
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
            rt_gfx_blt_clear(m, arg32(sp, 0), arg32(sp, 1), arg32(sp, 2));
            result = 0;
            break;
        case -306:                               /* RectFill(rp, x1, y1, x2, y2) */
            if (m->progress)
                printf("     RectFill rp %06lX (%ld,%ld)-(%ld,%ld)\n",
                       (unsigned long)arg32(sp, 0), (long)arg32(sp, 1), (long)arg32(sp, 2),
                       (long)arg32(sp, 3), (long)arg32(sp, 4));
            rt_gfx_rect_fill(m, arg32(sp, 0), (s32)arg32(sp, 1), (s32)arg32(sp, 2),
                              (s32)arg32(sp, 3), (s32)arg32(sp, 4));
            result = 0;
            break;
        case -252:                               /* AreaMove(rp, x, y) */
            rt_gfx_area_move(m, arg32(sp, 0), (s32)arg32(sp, 1), (s32)arg32(sp, 2));
            result = 0;
            break;
        case -258:                               /* AreaDraw(rp, x, y) */
            rt_gfx_area_draw(m, arg32(sp, 0), (s32)arg32(sp, 1), (s32)arg32(sp, 2));
            result = 0;
            break;
        case -264:                               /* AreaEnd(rp) */
            if (m->progress) printf("     AreaEnd %d point(s)\n", m->gfx.areaCount);
            rt_gfx_area_end(m, arg32(sp, 0));
            result = 0;
            break;
        case -342:                               /* SetAPen(rp, pen) */
            rt_gfx_set_apen(m, arg32(sp, 0), arg32(sp, 1));
            result = 0;
            break;
        case -348:                               /* SetBPen(rp, pen) */
            rt_gfx_set_bpen(m, arg32(sp, 0), arg32(sp, 1));
            result = 0;
            break;
        case -354:                               /* SetDrMd(rp, mode) */
            rt_gfx_set_drmd(m, arg32(sp, 0), arg32(sp, 1));
            result = 0;
            break;
        case -192:                               /* LoadRGB4(vp, table, count) */
            rt_gfx_load_rgb4(m, arg32(sp, 0), arg32(sp, 1), arg32(sp, 2));
            result = 0;
            break;
        case -288:                               /* SetRGB4(vp, index, r, g, b) */
            rt_gfx_set_rgb4(m, arg32(sp, 0), arg32(sp, 1), arg32(sp, 2), arg32(sp, 3),
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
            rt_gfx_mrg_cop(m, arg32(sp, 0));
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
                cm = rt_alloc(20);              /* Node(14) + Flags + Count + Table */
                table = rt_alloc((u32)n * 4u);
                rt_write8(&m->mem, cm + 14, 0);
                rt_write8(&m->mem, cm + 15, (u8)n);
                rt_write32(&m->mem, cm + 16, table);
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
                rt_gfx_present(m, v);
                if (m->trace)
                {
                    u32 vp = v != 0 ? rt_read32(&m->mem, v) : 0;
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
                    rt_add_server(m, rt_read32(&m->mem, intr + 0x12),
                                   rt_read32(&m->mem, intr + 0x0E));
                if (m->trace)
                    printf("     AddICRVector bit %ld interrupt %06lX\n",
                           (long)arg32(sp, 1), (unsigned long)intr);
            }
            result = 0;
            break;
        case -12:                                /* RemICRVector */
            {
                u32 intr = arg32(sp, 2);
                if (intr != 0) rt_remove_server(m, rt_read32(&m->mem, intr + 0x12));
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
        m->osUnhandled = 1;              /* the caller decides whether to dump the call site */
    }
    result = 0;

done:
    if (m->trace)
        printf("     -> %-28s (%ld) lib %d args %08lX %08lX %08lX = %08lX\n",
               lvo_name(lvo), (long)lvo, lib,
               (unsigned long)arg32(sp, 0), (unsigned long)arg32(sp, 1),
               (unsigned long)arg32(sp, 2), (unsigned long)result);

    /* A WaitTOF/WaitBOVP is posted, never waited on: the caller ends the frame. It is posted here,
     * after the shim has finished, because a nested dispatch used to complete the wait with the
     * stack half-unwound and then rewind the program onto a frame it had already left. */
    if (waitFrame) rt_request_vblank(m);
    return result;
}

int rt_init(rt_machine *m)
{
    memset(m, 0, sizeof(*m));
    if (!rt_mem_init(&m->mem, EMU_RAM_SIZE)) return 0;
    rt_current = m;
    /* exec, graphics and dos bases up front, so the run stops at the first LVO instead of
     * following a null library pointer into nothing. */
    rt_library_new(m);
    rt_library_new(m);
    rt_library_new(m);
    rt_library_new(m);
    rt_library_new(m);
    rt_library_new(m);
    while (m->libraries < EMU_LIB_SLOTS) rt_library_new(m);
    rt_heap_reset();
    m->insnToTick = EMU_INSN_PER_FRAME;
    /* The joystick and pot inputs are active low, so an unpressed port reads all ones. */
    m->joy0 = 0xFFFFu;
    m->joy1 = 0xFFFFu;
    /* AbsExecBase: the cstart does `movea.l 4.w,a6` and stores it where it needs it, exactly
     * like on the real machine. */
    rt_write32(&m->mem, 4, m->libraryBase[0]);
    rt_gfx_reset(m);
    return 1;
}

void rt_shutdown(rt_machine *m)
{
    rt_mem_free(&m->mem);
    if (rt_current == m) rt_current = 0;
}

int rt_load_image(rt_machine *m, u32 addr, const char *path)
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
    ok = (got == size) && rt_mem_load(&m->mem, addr, buf, size);
    if (ok) { m->imageTop = addr + size; m->imageBase = addr; }
    plat_free(buf);
    return ok;
}

u32 rt_library_new(rt_machine *m)
{
    u32 base = EMU_LIB_BASE + (u32)m->libraries * EMU_LIB_STRIDE;
    m->libraryBase[m->libraries++] = base;
    return base;
}

int rt_library_of(rt_machine *m, u32 pc, s32 *lvo)
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

int rt_lib_index(rt_machine *m, u32 base)
{
    int i;

    for (i = 0; i < m->libraries; i++)
        if (base != 0 && m->libraryBase[i] == base) return i;
    return -1;
}

/* Prints the code around a library call. `ret` is the return address the call pushed, so
 * execution resumes there; the call itself is further back in the ring behind the engine's own
 * thunk/trampoline chain. An unhandled LVO is only actionable with that code, so the ring plus the
 * resume instruction is the diagnostic. */

static void rt_add_server(rt_machine *m, u32 code, u32 data)
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

static void rt_remove_server(rt_machine *m, u32 code)
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

/* A shim asked for the next vertical blank: end this frame without executing anything. */
void rt_request_vblank(rt_machine *m)
{
    if (m->inTick) return;             /* a vblank server cannot wait for the next vblank */
    m->waitVblank = 1;
}

/* Where the runtime put the CLI argument tail: the program receives this pointer in A0. */
u32 rt_args_addr(void)
{
    return EMU_ARGS_ADDR;
}

/* Opens the call log; a run without it writes nothing. */
int rt_calllog_open(rt_machine *m, const char *path)
{
    FILE *f = fopen(path, "w");
    if (f == 0) return 0;
    m->callLog = (void *)f;
    return 1;
}

/* Raw RAM at the stop point: what the bisection needs when a frame boundary is too coarse. */
void rt_ram_snapshot(rt_machine *m, const char *path)
{
    FILE *f = fopen(path, "wb");
    if (f == 0) return;
    fwrite(m->mem.base, 1, m->mem.size, f);
    fclose(f);
}

/* One line per instruction inside the requested window: the frame budget next to the count, so a
 * cadence difference between the two front ends names the instruction it starts at. */
void rt_trace(rt_machine *m, u32 pc)
{
    if (m->traceTo == 0 || m->insns < m->traceFrom || m->insns > m->traceTo) return;
    printf("t %ld %ld %06lx\n", (long)m->insns, (long)m->insnToTick, (unsigned long)pc);
}

/* --- the 68000 bus ---------------------------------------------------------------------------
 * Chipset registers, the fire button and the joystick ports live outside the RAM block. Both
 * front ends go through here, so a translated store reaches the same register file an
 * interpreted one would - the draw chain programs BPLxPT/BLTxCON by storing to $DFF0xx. */

/* The chipset window is modelled when the RAM block does not cover it. The fixture harness
 * (src\recomp\check.c) hands the core a full 24-bit space so its dumps can be diffed against the
 * interpreter, which keeps $DFF0xx as plain memory - there the window stays memory. */
int rt_bus_is_io(rt_machine *m, u32 a)
{
    return m->mem.size <= a && a >= 0xBF0000u && a < 0xE00000u;
}

/* The register file itself, inside a window that runs much wider than it. */
static int is_custom(rt_machine *m, u32 a)
{
    return rt_bus_is_io(m, a) && a >= 0xDFF000u && a < 0xDFF100u;
}

u32 rt_bus_read8(rt_machine *m, u32 a)
{
    a &= 0xFFFFFFu;
    if (is_custom(m, a)) return m->custom[(a - 0xDFF000u) >> 1] & 0xFFu;
    if (a == 0xBFE001u && rt_bus_is_io(m, a))
    {
        /* CIA-A port A: bit 7 is /FIRE, active low, the rest float high. */
        m->firePolls++;
        return 0x7Fu | (m->fireDown != 0 ? 0u : 0x80u);
    }
    return rt_read8(&m->mem, a);
}

u32 rt_bus_read16(rt_machine *m, u32 a)
{
    a &= 0xFFFFFFu;
    if (is_custom(m, a))
    {
        if (a == 0xDFF00Cu) return m->joy0;                  /* JOY0DAT */
        if (a == 0xDFF00Eu) return m->joy1;                  /* JOY1DAT */
        if (a == 0xDFF016u) return 0xFFFFu;                  /* POTINP: nothing plugged in */
        return m->custom[(a - 0xDFF000u) >> 1];
    }
    return rt_read16(&m->mem, a);
}

u32 rt_bus_read32(rt_machine *m, u32 a)
{
    a &= 0xFFFFFFu;
    if (is_custom(m, a) && a < 0xDFF0FCu)
        return ((u32)m->custom[(a - 0xDFF000u) >> 1] << 16) |
               (u32)m->custom[(a + 2 - 0xDFF000u) >> 1];
    return rt_read32(&m->mem, a);
}

void rt_bus_write8(rt_machine *m, u32 a, u32 v)
{
    a &= 0xFFFFFFu;
    if (is_custom(m, a))
    {
        m->custom[(a - 0xDFF000u) >> 1] = (u16)v;
        return;
    }
    rt_write8(&m->mem, a, v);
}

void rt_bus_write16(rt_machine *m, u32 a, u32 v)
{
    a &= 0xFFFFFFu;
    if (is_custom(m, a))
    {
        rt_custom_write16(m, (u16)(a - 0xDFF000u), (u16)v);
        return;
    }
    rt_write16(&m->mem, a, v);
}

void rt_bus_write32(rt_machine *m, u32 a, u32 v)
{
    a &= 0xFFFFFFu;
    if (is_custom(m, a))
    {
        rt_custom_write16(m, (u16)(a - 0xDFF000u), (u16)(v >> 16));
        rt_custom_write16(m, (u16)(a + 2u - 0xDFF000u), (u16)v);
        return;
    }
    rt_write32(&m->mem, a, v);
}

