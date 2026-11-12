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
    /* DSAVE: is where the engine keeps its save file; the runtime owns that directory. */
    if ((name[0] == 'D' || name[0] == 'd') && (name[1] == 'S' || name[1] == 's') &&
        (name[2] == 'A' || name[2] == 'a') && (name[3] == 'V' || name[3] == 'v') &&
        (name[4] == 'E' || name[4] == 'e') && (name[5] == ':' || name[5] == '/'))
        return -2;
    return -1;
}

/* DSAVE:<name> is <exe dir>\<saveDir>\slot<slot>\<name>. Both directory levels are created on
 * demand: the engine locks DSAVE: before it opens anything, and a lock on a missing directory
 * would send it into its "please insert volume" panel. */
static void rt_save_ensure(rt_machine *m, char *out, int max)
{
    const char *dir = m->saveDir != 0 ? m->saveDir : "saves";
    char top[256];

    out[0] = 0;
    if ((int)strlen(plat_exe_dir()) + (int)strlen(dir) + 16 >= (int)sizeof(top)) return;
    sprintf(top, "%s\\%s", plat_exe_dir(), dir);
    if (!plat_mkdir(top)) return;
    sprintf(out, "%s\\slot%d", top, m->saveSlot);
    plat_mkdir(out);
}

/* Whether a slot has ever been written: its directory is the slot, so an empty one is unused. */
int rt_save_slot_empty(const rt_machine *m, int slot)
{
    const char *dir = m->saveDir != 0 ? m->saveDir : "saves";
    char path[288];

    if ((int)strlen(plat_exe_dir()) + (int)strlen(dir) + 24 >= (int)sizeof(path)) return 1;
    sprintf(path, "%s\\%s\\slot%d", plat_exe_dir(), dir, slot);
    return (int)plat_dir_empty(path);
}

/* Splits an AmigaDOS name into the disk it belongs to and the path inside it. Only Desert1..3
 * name a disk; any other volume is one of HDesert's assigns to the game directory, so it gets
 * vol = -1 and the file is searched on every disk. A name without a volume keeps its whole
 * string as the path. */
static void rt_split_name(const char *name, char *out, int max, int *vol)
{
    const char *p = name;
    int i = 0;

    *vol = -1;
    while (*p != 0 && *p != ':' && *p != '/' && *p != '\\') p++;
    if (*p == ':')
    {
        *vol = rt_volume_index(name);
        p++;
    }
    else p = name;                              /* no volume: the path starts at the name */
    while (*p == '/' || *p == '\\') p++;
    while (*p != 0 && i < max - 1)
    {
        char c = *p++;
        if (c == '/') c = '\\';                 /* AmigaDOS dir separator -> host */
        out[i++] = c;
    }
    out[i] = 0;
}

/* A bare name is relative to whatever CurrentDir last selected: FUN_000002f4 locks "Desert2:",
 * makes it current and then opens "desert.dat". Without this the name lost its whole string to
 * the volume scan and every such open failed. */
static int rt_full_name(rt_machine *m, const char *name, char *out, int max)
{
    const char *p = name;
    int i = 0;

    if (name == 0 || name[0] == 0) return 0;
    if (strchr(name, ':') == 0 && name[0] != '/' && name[0] != '\\' && m->cwd[0] != 0)
    {
        while (m->cwd[i] != 0 && i < max - 2)
        {
            out[i] = m->cwd[i];
            i++;
        }
        /* "Desert2:" already ends a path; "Desert1:sfx" does not. */
        if (i > 0 && out[i - 1] != ':' && out[i - 1] != '\\' && out[i - 1] != '/')
            out[i++] = '\\';
        while (*p == '/' || *p == '\\') p++;
    }
    while (*p != 0 && i < max - 1) out[i++] = *p++;
    out[i] = 0;
    return i > 0;
}

/* Does the object exist? Lock is the engine's existence test - it decides whether to prompt for
 * another disk - so it has to answer truthfully. */
static int rt_exists(rt_machine *m, const char *name)
{
    char full[256], rel[192], path[256];
    int vol, d;

    if (!rt_full_name(m, name, full, (int)sizeof(full))) return 0;
    rt_split_name(full, rel, (int)sizeof(rel), &vol);
    if (rel[0] == 0)                            /* a volume on its own: its directory */
    {
        if (vol >= 0) sprintf(path, "%s\\disk%d", m->dataDir, vol + 1);
        else if (vol == -2)
        {
            rt_save_ensure(m, path, (int)sizeof(path));
            return path[0] != 0 && plat_path_kind(path) == PLAT_PATH_DIR;
        }
        else          sprintf(path, "%s", m->dataDir);
        return plat_path_kind(path) == PLAT_PATH_DIR;
    }
    if (vol == -2)
    {
        char dir[256];
        rt_save_ensure(m, dir, (int)sizeof(dir));
        if (dir[0] == 0) return 0;
        sprintf(path, "%s\\%s", dir, rel);
        return plat_path_kind(path) != PLAT_PATH_MISSING;
    }
    if (vol >= 0)
    {
        sprintf(path, "%s\\disk%d\\%s", m->dataDir, vol + 1, rel);
        if (plat_path_kind(path) != PLAT_PATH_MISSING) return 1;
    }
    sprintf(path, "%s\\%s", m->dataDir, rel);
    if (plat_path_kind(path) != PLAT_PATH_MISSING) return 1;
    for (d = 1; d <= 3; d++)                    /* the file may sit on another disk */
    {
        sprintf(path, "%s\\disk%d\\%s", m->dataDir, d, rel);
        if (plat_path_kind(path) != PLAT_PATH_MISSING) return 1;
    }
    return 0;
}

/* --- dos.library locks -------------------------------------------------------------------- */
static rt_lock *rt_lock_of(rt_machine *m, u32 token)
{
    int i;

    if (token == 0) return 0;
    for (i = 0; i < EMU_MAX_LOCKS; i++)
        if (m->locks[i].token == token) return &m->locks[i];
    return 0;
}

/* Returns a lock token, or 0 when the object does not exist (AmigaDOS answers 0 there). */
static u32 rt_lock_new(rt_machine *m, const char *name)
{
    int i, len = 0;

    if (!rt_exists(m, name)) return 0;
    for (i = 0; i < EMU_MAX_LOCKS; i++)
        if (m->locks[i].token == 0) break;
    if (i >= EMU_MAX_LOCKS) i = 0;              /* the engine keeps the locks it makes */
    m->locks[i].token = 0x10000u + (u32)i;
    while (name[len] != 0 && len < (int)sizeof(m->locks[i].name) - 1)
    {
        m->locks[i].name[len] = name[len];
        len++;
    }
    m->locks[i].name[len] = 0;
    return m->locks[i].token;
}

static u32 rt_alloc(u32 bytes);
void rt_free(u32 addr);
static void rt_add_server(rt_machine *m, u32 code, u32 data);

/* Live dos.library handles, for the open trace. */
static int rt_files_open(rt_machine *m)
{
    int i, n = 0;
    for (i = 0; i < EMU_MAX_FILES; i++) if (m->files[i].f != 0) n++;
    return n;
}
static void rt_remove_server(rt_machine *m, u32 code);

static u32 rt_file_open(rt_machine *m, const char *name, int mode)
{
    char path[256], rel[192], full[256];
    int vol, slot;

    for (slot = 0; slot < EMU_MAX_FILES; slot++)
        if (m->files[slot].f == 0) break;
    if (slot >= EMU_MAX_FILES)
    {
        printf("emu: Open(\"%s\",%ld) failed: all %d file handle(s) in use\n", name, (long)mode,
               EMU_MAX_FILES);
        return 0;
    }

    if (!rt_full_name(m, name, full, (int)sizeof(full)))
    {
        printf("emu: Open(\"%s\",%ld) failed: empty name\n", name, (long)mode);
        return 0;
    }
    rt_split_name(full, rel, (int)sizeof(rel), &vol);
    if (rel[0] == 0)
    {
        printf("emu: Open(\"%s\",%ld) failed: \"%s\" names a volume\n", name, (long)mode, full);
        return 0;
    }

    m->files[slot].writable = 0;
    m->files[slot].inSaveDir = 0;
    if (vol == -2)
    {
        /* The save volume. MODE_NEWFILE (1006) and MODE_READWRITE (1004) create; MODE_OLDFILE
         * (1005) reads. Nothing is searched across the disks here. */
        char dir[256];
        rt_save_ensure(m, dir, (int)sizeof(dir));
        if (dir[0] == 0)
        {
            printf("emu: Open(\"%s\",%ld) failed: cannot create %s\\saves\\slot%d\n", name,
                   (long)mode, plat_exe_dir(), m->saveSlot);
            return 0;
        }
        sprintf(path, "%s\\%s", dir, rel);
        m->files[slot].inSaveDir = 1;
        m->files[slot].writable = (mode == 1006 || mode == 1004);
        m->files[slot].f = m->files[slot].writable ? plat_create(path) : plat_open(path);
        if (m->files[slot].f == 0)
        {
            printf("emu: Open(\"%s\",%ld) failed: cannot %s %s\n", name, (long)mode,
                   m->files[slot].writable ? "create" : "read", path);
            return 0;
        }
        goto opened;
    }

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
    if (m->files[slot].f == 0)
    {
        printf("emu: Open(\"%s\",%ld) failed: no disk holds %s (data %s)\n", name, (long)mode,
               rel, m->dataDir);
        return 0;
    }

opened:
    m->files[slot].size = plat_size(m->files[slot].f);
    m->files[slot].pos = 0;
    /* AmigaDOS hands out BPTRs (address >> 2) and callers may dereference the handle, so give it
     * a real 44-byte FileHandle block in the heap. */
    m->files[slot].addr = rt_alloc(44);
    if (m->files[slot].addr == 0)
    {
        printf("emu: Open(\"%s\",%ld) failed: no heap for the FileHandle (44 bytes)\n", name,
               (long)mode);
        plat_close((plat_file *)m->files[slot].f);
        m->files[slot].f = 0;
        return 0;
    }
    rt_write32(&m->mem, m->files[slot].addr + 0, 0);
    rt_write32(&m->mem, m->files[slot].addr + 36, 0);   /* fh_Args */
    rt_write32(&m->mem, m->files[slot].addr + 40, 0);   /* fh_Arg1 */
    /* Few files are opened, and "which file did the game try to read" is the first question for
     * every new scene, so this reports unconditionally - with how many handles are live, because
     * a climbing count is a leaked close, and with the frame and the call site, because a request
     * that never comes has to be told apart from one that comes from the wrong place. */
    printf("emu: open \"%s\" -> %s (%lu bytes) [%d of %d] frame %lu from %06lX\n", name, path,
           (unsigned long)m->files[slot].size, rt_files_open(m), EMU_MAX_FILES,
           (unsigned long)m->frame, (unsigned long)m->pc);
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
    /* The FileHandle block belongs to the handle: without this every open leaked 44 bytes of the
     * engine's own heap, and a long session ends with rt_alloc failing - which the engine reports
     * as "Unresolvable file read/write error!". */
    if (f->addr != 0) rt_free(f->addr);
    f->addr = 0;
    if (f->writable && f->inSaveDir && f->pos >= EMU_SAVE_BYTES)
    {
        /* A completed save: the icon in the top right corner is the only feedback the player
         * gets, because the engine writes the file silently. The size matters - when the load
         * routine finds no save it creates a one-byte placeholder through the same path. */
        m->saves++;
        rt_osd_icon(m, EMU_OSD_FRAMES);
        printf("recomp: saved %lu byte(s) to slot %d\n", (unsigned long)f->pos, m->saveSlot);
    }
    f->writable = 0;
    f->inSaveDir = 0;
}

static u32 rt_file_read(rt_machine *m, u32 fh, u32 buf, u32 len)
{
    rt_file *f = rt_file_of(m, fh);
    u32 got;

    if (f == 0 || buf == 0 || len == 0) return 0;
    if (len > f->size - f->pos) len = f->size - f->pos;
    /* The engine loads a whole pack with one Read and does not loop on a short return, so this
     * has to be able to satisfy the full request. */
    if (len > 0x100000u) len = 0x100000u;
    if (len == 0) return 0;

    got = plat_read((plat_file *)f->f, f->pos, m->mem.base + buf, len);
    f->pos += got;
    return got;
}

/* The engine's save routine writes its two memory ranges and closes the file; nothing seeks. */
static u32 rt_file_write(rt_machine *m, u32 fh, u32 buf, u32 len)
{
    rt_file *f = rt_file_of(m, fh);
    u32 put;

    if (f == 0 || !f->writable || buf == 0 || len == 0) return 0;
    put = plat_write((plat_file *)f->f, f->pos, m->mem.base + buf, len);
    f->pos += put;
    return put;
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

/* --- graphics.library text: what the engine actually asks for -------------------------------
 * One dump of the RastPort/BitMap/TextFont the game passes, so the drawing code can be written
 * against the real structures instead of the header file. */
void rt_text_log(rt_machine *m, u32 rp, u32 text, u32 count, u32 plotted)
{
    u32 bm, font;
    int i;

    if (!m->textLog || m->textSeen >= 200) return;
    m->textSeen++;
    bm = rt_read32(&m->mem, rp + 4);
    printf("text: frame %ld rp %06lX bm %06lX str %06lX count %ld plotted %ld\n",
           (long)m->frame, (unsigned long)rp, (unsigned long)bm, (unsigned long)text, (long)count,
           (unsigned long)plotted);
    {
        int k;
        printf("  \"");
        for (k = 0; k < (int)count && k < 80; k++)
        {
            u8 c = (u8)rt_read8(&m->mem, text + (u32)k);
            printf("%c", (c >= 32 && c < 127) ? c : '.');
        }
        printf("\"\n");
    }
    if (bm != 0)
        printf("  bm: bytesPerRow %ld rows %ld flags %02lx depth %ld plane0 %06lX\n",
               (long)rt_read16(&m->mem, bm), (long)rt_read16(&m->mem, bm + 2),
               (unsigned long)rt_read8(&m->mem, bm + 4), (long)rt_read8(&m->mem, bm + 5),
               (unsigned long)rt_read32(&m->mem, bm + 8));
    font = rt_read32(&m->mem, rp + 36);      /* rp->Font (see below) */
    printf("  font %06lX  rp pens fg %ld bg %ld mode %ld cp %ld,%ld\n",
           (unsigned long)font, (long)(s8)rt_read8(&m->mem, rp + 29),
           (long)(s8)rt_read8(&m->mem, rp + 30), (long)(s8)rt_read8(&m->mem, rp + 32),
           (long)(s16)rt_read16(&m->mem, rp + 40), (long)(s16)rt_read16(&m->mem, rp + 42));
    (void)i;
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

    /* A real machine hands a process recycled stack memory, never zeroes. That matters: the 8SVX
     * chunk scanner FUN_00009ae0 tests an uninitialised frame word (`tst.w -0xE(A5)`, bytes
     * 4E55FFF2 4A6DFFF2 at 0x9AE0) before its first read and only scans when it is non-zero. With
     * zeroed RAM it returns "not found" at once, the VHDR parse shifts by 4 and the sample rate
     * reads 0. Fill the block so that path is deterministic instead of depending on our heap. */
    memset(m->mem.base + EMU_SYS_BASE + 0x200u, 0xA5,
           (size_t)(EMU_STACK_TOP - 4u - (EMU_SYS_BASE + 0x200u)));

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

/* --- diskfont.library --------------------------------------------------------------------
 * FUN_00004cb6 asks diskfont for textAttr{ "newnem.font", ySize } and hands the result to
 * graphics SetFont. A font file is a hunk file whose single segment holds a TextFont (ln_Type
 * NT_FONT) plus four blobs it addresses by *offsets into that segment*: CharData (tf_YSize rows of
 * tf_Modulo bytes), CharLoc (a u16 {bit offset, width} pair per character), CharSpace (u16 advance
 * per character) and CharKern. The disk loader relocates those four words against the segment it
 * allocated; we copy the segment to the heap and do exactly that, so graphics.library draws with
 * the font the disk ships. */

static u8 *rt_host_file(rt_machine *m, const char *rel, u32 *outSize)
{
    char path[256];
    plat_file *f;
    u8 *buf;
    u32 size, d;
    int found = 0;

    for (d = 0; d <= 3 && !found; d++)
    {
        if (d == 0) sprintf(path, "%s\\%s", m->dataDir, rel);
        else sprintf(path, "%s\\disk%lu\\%s", m->dataDir, (unsigned long)d, rel);
        f = plat_open(path);
        found = f != 0;
        if (!found) continue;
        size = plat_size(f);
        buf = (u8 *)plat_alloc(size != 0 ? size : 1u);
        if (buf == 0 || plat_read(f, 0, buf, size) != size)
        {
            if (buf != 0) plat_free(buf);
            plat_close(f);
            return 0;
        }
        plat_close(f);
        *outSize = size;
        if (m->dosLog) printf("emu: font data %s (%lu bytes)\n", path, (unsigned long)size);
        return buf;
    }
    return 0;
}

static u32 be16(const u8 *p) { return ((u32)p[0] << 8) | p[1]; }
static u32 be32(const u8 *p) { return ((u32)p[0] << 24) | ((u32)p[1] << 16) | ((u32)p[2] << 8) | p[3]; }

/* Builds the TextFont of one font file for the size the caller asked for. */
static u32 rt_font_build(rt_machine *m, const u8 *data, u32 size, int ySize)
{
    u32 seg = 0, len = 0, t, base = 0;
    static const u32 reloc[4] = { EMU_TF_CHAR_DATA, EMU_TF_CHAR_LOC, EMU_TF_CHAR_SPACE,
                                  EMU_TF_CHAR_KERN };

    for (t = 0; t + 8 <= size && t < 64; t += 2)
        if (be16(data + t) == 0x3E9u)                  /* HUNK_CODE */
        {
            len = be32(data + t + 2) * 4u;
            seg = t + 6;
            break;
        }
    if (seg == 0 || seg + len > size) return 0;

    for (t = 0; t + 52u <= len; t += 2)
    {
        const u8 *f = data + seg + t;
        u32 cd = be32(f + EMU_TF_CHAR_DATA), cl = be32(f + EMU_TF_CHAR_LOC);
        u32 cs = be32(f + EMU_TF_CHAR_SPACE), ck = be32(f + EMU_TF_CHAR_KERN);
        u32 k;

        if (f[EMU_TF_TYPE] != 12) continue;             /* NT_FONT */
        if ((int)be16(f + EMU_TF_Y_SIZE) != ySize) continue;
        if (f[EMU_TF_LO_CHAR] >= f[EMU_TF_HI_CHAR]) continue;
        if (cd >= len || cl >= len || cs >= len || ck >= len) continue;

        base = rt_alloc(len);
        if (base == 0) return 0;
        for (k = 0; k < len; k++) rt_write8(&m->mem, base + k, data[seg + k]);
        for (k = 0; k < 4; k++)
        {
            u32 field = t + reloc[k];
            rt_write32(&m->mem, base + field, base + rt_read32(&m->mem, base + field));
        }
        if (m->dosLog)
            printf("emu: TextFont at %06lX: %d row(s), modulo %ld, chars %d..%d, data %06lX loc %06lX"
                   " space %06lX kern %06lX\n",
                   (unsigned long)(base + t), (int)be16(f + EMU_TF_Y_SIZE),
                   (long)be16(f + EMU_TF_MODULO), (int)f[EMU_TF_LO_CHAR],
                   (int)f[EMU_TF_HI_CHAR],
                   (unsigned long)rt_read32(&m->mem, base + t + EMU_TF_CHAR_DATA),
                   (unsigned long)rt_read32(&m->mem, base + t + EMU_TF_CHAR_LOC),
                   (unsigned long)rt_read32(&m->mem, base + t + EMU_TF_CHAR_SPACE),
                   (unsigned long)rt_read32(&m->mem, base + t + EMU_TF_CHAR_KERN));
        return base + t;                        /* the TextFont sits inside the loaded segment */
    }
    return 0;
}

/* OpenDiskFont(textAttr): textAttr{ name @0, ySize @4, style @6, flags @7 }. The FontContents file
 * (fch_FileID 0x0F00, entry count, then 260-byte {name[256], ySize, style, flags} records) maps a
 * size onto the file that holds it. */
static u32 rt_font_open_disk(rt_machine *m, u32 ta)
{
    char name[128], rel[192];
    u32 size = 0, i;
    u8 *buf;
    u32 fileName = ta != 0 ? rt_read32(&m->mem, ta) : 0;
    int ySize = ta != 0 ? (int)(s16)rt_read16(&m->mem, ta + 4) : 0;

    if (fileName == 0 || ySize <= 0) return 0;
    for (i = 0; i < sizeof name - 1u; i++)
    {
        u8 c = (u8)rt_read8(&m->mem, fileName + i);
        name[i] = (char)c;
        if (c == 0) break;
    }
    name[sizeof name - 1u] = 0;
    sprintf(rel, "fonts\\%s", name);
    buf = rt_host_file(m, rel, &size);
    if (buf == 0)
    {
        sprintf(rel, "%s", name);
        buf = rt_host_file(m, rel, &size);
    }
    if (buf == 0) return 0;

    if (size >= 4 && be16(buf) == 0x0F00u)             /* FontContents */
    {
        u32 n = be16(buf + 2), e;
        for (e = 0; e < n; e++)
        {
            u32 o = 4u + e * 260u;
            if (o + 260u > size) break;
            if ((int)be16(buf + o + 256) != ySize) continue;
            {
                char sub[192];
                sprintf(sub, "fonts\\%.200s", (const char *)(buf + o));   /* "newnem/7" */
                for (i = 0; sub[i] != 0; i++) if (sub[i] == '/') sub[i] = '\\';
                plat_free(buf);
                buf = rt_host_file(m, sub, &size);
                if (buf == 0) return 0;
            }
            break;
        }
        if (e == n)
        {
            plat_free(buf);
            return 0;
        }
    }
    i = rt_font_build(m, buf, size, ySize);
    plat_free(buf);
    return i;
}

/* --- mathffp.library ---------------------------------------------------------------------
 * Motorola Fast Floating Point: sign, 7-bit exponent (excess 64) in bits 30..24, and a 24-bit
 * mantissa holding the fraction after the binary point (0.5 <= M/2^23 < 1). So 1.0 = 0x40800000.
 * The engine divides through this library when it computes its fade steps, so answering 0 broke
 * every interpolation it set up. */

static double rt_ffp_to_d(u32 v)
{
    double d = (double)(v & 0xFFFFFFu) / 8388608.0;
    int e = (int)((v >> 24) & 0x7Fu) - 64;
    int i;

    for (i = 0; i < (e < 0 ? -e : e); i++) d = (e < 0) ? d / 2.0 : d * 2.0;
    return (v & 0x80000000u) != 0 ? -d : d;
}

static u32 rt_d_to_ffp(double d)
{
    u32 sign = 0, m;
    int e = 64;

    if (d < 0.0) { sign = 0x80000000u; d = -d; }
    if (d == 0.0) return 0;
    while (d >= 1.0 && e < 127) { d /= 2.0; e++; }
    while (d < 0.5 && e > 1) { d *= 2.0; e--; }
    m = (u32)(d * 8388608.0 + 0.5);
    if (m > 0xFFFFFFu) { m >>= 1; e++; }
    return sign | ((u32)(e & 0x7F) << 24) | (m & 0xFFFFFFu);
}

/* One library call, as the program makes it.
 *
 * The 68k ABI is `jsr (lvo,A6)`: the return address is at A7, the arguments above it, the result
 * goes to D0 and A7 stays popped by 4. None of that belongs here - the caller owns the CPU. This
 * takes the stack pointer, A0/A1 and D0/D1 as plain values and returns the result, plus two flags
 * the caller must act on:
 *
 *   m->waitFrames   WaitTOF/WaitBOVP/dos.Delay asked for frame boundaries (see rt_request_vblank)
 *   m->stop         the program halted (Alert)
 *
 * The registers matter because that is how graphics.library takes its arguments (A1 = RastPort,
 * A0 = a string or a font, D0/D1 = coordinates) - see the wrappers at 0x218d0..0x21960 in
 * re\disasm\dshell.asm, which load them from the stack and then *jump* to the vector, so the
 * arguments are still above the return address for arg32() as well.
 *
 * That is the only seam between the machine model and whatever executes the code: the Musashi
 * front end in src\oracle for the original binary, and the translated function dispatcher for the
 * shipped game. `lib` is the base index from rt_library_of(), because the same LVO means different
 * functions per library. */
u32 rt_os_call(rt_machine *m, u32 sp, u32 a0, u32 a1, u32 d0, u32 d1, int lib, s32 lvo)
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
                result = rt_file_open(m, name, (int)arg32(sp, 1));
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
                u32 buf = arg32(sp, 1);
                u32 len = arg32(sp, 2);
                u32 k;

                /* A real file handle is the engine writing its save; handle 0 is the console,
                 * where the game prints its own diagnostics ("Can't allocate animation bitmaps"
                 * and friends), so those still go to stdout. */
                if (rt_file_of(m, arg32(sp, 0)) != 0)
                {
                    result = rt_file_write(m, arg32(sp, 0), buf, len);
                    break;
                }
                for (k = 0; k < len; k++)
                {
                    u8 ch = (u8)rt_read8(&m->mem, buf + k);
                    if (ch == 0) break;
                    putchar((int)ch);
                }
                result = len;
            }
            break;
        case -114:                               /* Info(lock, InfoData) */
            {
                /* FUN_0000050e, the save wrapper, asks for the volume's id_DiskState and only
                 * leaves its retry loop on ID_VALIDATED (0x52); ID_WRITE_PROTECTED (0x50) shows
                 * the "is write protected" panel. Answering 0 left the block zeroed, so the game
                 * retried the volume forever - the save appeared to hang. Only the save volume is
                 * writable: the game's disk folders are read-only extractions, and the engine
                 * never writes to them. */
                u32 block = arg32(sp, 1);
                rt_lock *l = rt_lock_of(m, arg32(sp, 0));
                int writable = l != 0 && rt_volume_index(l->name) == -2;

                if (block != 0)
                {
                    rt_write32(&m->mem, block + 0, 0);           /* id_NumSoftErrors */
                    rt_write32(&m->mem, block + 4, 0xFFFFFFFFu); /* id_UnitNumber (none) */
                    rt_write32(&m->mem, block + 8, writable ? 82u : 80u); /* id_DiskState */
                    rt_write32(&m->mem, block + 12, 1760);       /* id_NumBlocks */
                    rt_write32(&m->mem, block + 16, 0);          /* id_NumBlocksUsed */
                    rt_write32(&m->mem, block + 20, 512);        /* id_BytesPerBlock */
                    rt_write32(&m->mem, block + 24, 0x444F5301u);/* id_DiskType 'DOS\1' */
                    rt_write32(&m->mem, block + 28, 0);          /* id_VolumeNode */
                    rt_write32(&m->mem, block + 32, 0xFFFFFFFFu);/* id_InUse */
                }
                result = 0xFFFFFFFFu;                            /* DOSTRUE */
                if (m->dosLog)
                    printf("     dos.Info(%06lX) = %s (block %06lX)\n",
                           (unsigned long)arg32(sp, 0), writable ? "validated" : "write protected",
                           (unsigned long)block);
            }
            break;
        case -66:                                /* Seek(fh, offset, offsetMode) */            {
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
                    u32 old = f->pos;
                    if (np < 0) np = 0;
                    f->pos = (u32)np;
                    /* AmigaDOS returns the PREVIOUS position, not the new one: the engine reads
                     * a file's size as Seek(f,0,END) then Seek(f,0,START). */
                    result = old;
                    if (m->dosLog)
                        printf("     dos.Seek(%06lX,%ld,%ld) = %ld (now %ld)\n",
                               (unsigned long)arg32(sp, 0), (long)off, (long)mode,
                               (long)result, (long)np);
                }
            }
            break;
        case -126:                               /* CurrentDir(lock) */
            {
                /* Returns the previous directory's lock, which the caller then unlocks. The
                 * engine locks a volume, makes it current and only then opens bare file names,
                 * so the name has to be remembered here, not in the lock token. */
                rt_lock *l = rt_lock_of(m, arg32(sp, 0));
                u32 prev = m->cwdLock;
                if (l != 0)
                {
                    strcpy(m->cwd, l->name);
                    m->cwdLock = l->token;
                }
                result = prev;
                if (m->dosLog)
                    printf("     dos.CurrentDir(%06lX) -> \"%s\" (previous %06lX)\n",
                           (unsigned long)arg32(sp, 0), m->cwd, (unsigned long)prev);
            }
            break;
        case -84:                                /* Lock(name, mode) */
            {
                char name[192];
                read_cstr(arg32(sp, 0), name, (int)sizeof(name));
                result = rt_lock_new(m, name);   /* 0 when the object does not exist */
                if (m->dosLog || result == 0)
                    printf("     dos.Lock(\"%s\",%ld) = %06lX from %06lX\n", name,
                           (long)arg32(sp, 1), (unsigned long)result, (unsigned long)ret);
            }
            break;
        case -90:                                /* UnLock(lock) */
            {
                rt_lock *l = rt_lock_of(m, arg32(sp, 0));
                /* The selected directory keeps its own reference, as a real process does. */
                if (l != 0 && l->token != m->cwdLock) l->token = 0;
            }
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
        case -198:                               /* Delay(ticks) */
            {
                /* AmigaDOS blocks the caller for `ticks` of the 50 Hz system clock. Answering 0
                 * without spending the time made every Delay a no-op, so anything that paced
                 * itself with it ran as fast as the emulator could go. rt_delay_ticks hands the
                 * wait to the frame budget, which is the same clock (see the header). */
                u32 ticks = arg32(sp, 0);
                if (m->trace || m->dosLog) printf("     dos.Delay(%lu)\n", (unsigned long)ticks);
                rt_delay_ticks(m, ticks);
            }
            result = 0;
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
        case -66:                                /* SetFont(rp=A1, font=A0) */
            rt_gfx_set_font(m, a1, a0);
            result = 0;
            break;
        case -192:                               /* LoadRGB4(vp, table, count) */
            if (m->progress)
                printf("     LoadRGB4(vp %06lX, table %06lX, count %ld) from %06lX\n",
                       (unsigned long)arg32(sp, 0), (unsigned long)arg32(sp, 1),
                       (long)arg32(sp, 2), (unsigned long)ret);
            rt_gfx_load_rgb4(m, arg32(sp, 0), arg32(sp, 1), arg32(sp, 2));
            result = 0;
            break;
        case -288:                               /* SetRGB4(vp, index, r, g, b) */
            if (m->progress)
                printf("     SetRGB4(vp %06lX, index %ld, %ld/%ld/%ld)\n",
                       (unsigned long)arg32(sp, 0), (long)arg32(sp, 1), (long)arg32(sp, 2),
                       (long)arg32(sp, 3), (long)arg32(sp, 4));
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
        case -216:                               /* MakeVPort */
            result = 0;
            break;
        case -240:                               /* Move(rp=A1, x=D0, y=D1) */
            rt_gfx_move(m, a1, (s32)d0, (s32)d1);
            result = 0;
            break;
        case -246:                               /* Draw(rp=A1, x=D0, y=D1) */
            rt_gfx_line(m, a1, (s32)d0, (s32)d1);
            result = 0;
            break;
        case -60:                                /* Text(rp=A1, string=A0, count=D0) */
            rt_text_log(m, a1, a0, d0, rt_gfx_text(m, a1, a0, d0));
            result = 0;
            break;
        case -54:                                /* TextLength(rp=A1, string=A0, count=D0) */
            result = (u32)rt_gfx_text_length(m, a1, a0, d0);
            if (m->textLog)
                printf("  len: count %lu = %ld (font %06lX cp %d)\n",
                       (unsigned long)d0, (long)(s32)result,
                       (unsigned long)rt_read32(&m->mem, a1 + 36),
                       (int)(s16)rt_read16(&m->mem, a1 + 40));
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
        case -228:                               /* WaitBlit - the CPU waits for the device */
            {
                long c = rt_blit_wait(m);
                if (c > 0) rt_time_run(m, c);
            }
            result = 0;
            break;
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
    else if (lib == 6)                           /* mathffp.library */
    {
        switch (lvo)
        {
        case -30:                                /* SPFix(D0) - float to integer */
            result = (u32)(s32)rt_ffp_to_d(d0);
            break;
        case -36:                                /* SPFlt(D0) - integer to float */
            result = rt_d_to_ffp((double)(s32)d0);
            break;
        case -84:                                /* SPDiv(D0, D1) */
            {
                double b = rt_ffp_to_d(d1);
                result = b != 0.0 ? rt_d_to_ffp(rt_ffp_to_d(d0) / b) : 0;
            }
            break;
        default:
            goto unhandled;
        }
    }
    else if (lib == 16)                          /* diskfont.library */
    {
        switch (lvo)
        {
        case -30:                                /* OpenDiskFont(textAttr=A0) */
            result = rt_font_open_disk(m, a0);
            /* The OSD draws in the game's own font, not the Amiga ROM one. */
            if (result != 0) m->osdFont = result;
            break;
        default:
            goto unhandled;
        }
    }
    else if (lib == EMU_LIB_CIAARES)             /* ciaa.resource */
    {
        /* The audio driver (FUN_0000ed90) hangs its mixer on CIA-A timer A:
         *   -6  AddICRVector(res, icrBit, interrupt)   FUN_0000ed90, result must be 0
         *   -12 RemICRVector(res, icrBit, interrupt)   FUN_0000ed2a, mirrors -6
         *   -18 AbleICR(res, flags)                    FUN_0000ed90, flags 0x81 = bit 7 (enable)
         *                                              + bit 0 (timer A)
         * icrBit 0 is /INT2 = timer A, which is the source the driver programs through
         * $BFE401/$BFE501/$BFEE01 (audio.c runs it when the latch underflows). */
        switch (lvo)
        {
        case -6:                                 /* AddICRVector */
            {
                u32 intr = arg32(sp, 2);
                if (intr != 0)
                    rt_cia_add_vector(m, arg32(sp, 1),
                                      rt_read32(&m->mem, intr + 0x12),
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
                if (intr != 0) rt_cia_remove_vector(m, rt_read32(&m->mem, intr + 0x12));
            }
            result = 0;
            break;
        case -18:                                /* AbleICR */
            result = rt_cia_able(m, arg32(sp, 1));
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
    rt_slots_reset(m);                   /* every clock is the CPU's until a display is programmed */
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
    m->cyclesToTick = EMU_CYCLES_PER_FRAME;
    /* The blitter's channel pointers are word pointers (blitter.c row_advance) - not a preference,
     * the pointers have no bit 0. --byteptr restores the byte arithmetic for bisection. */
    m->blitBytePtr = 0;
    /* An unpressed joystick port reads all zero: FUN_00011bf0 takes bit1/bit9 as the vertical
     * axis and the XOR of the two bit pairs as the horizontal one, so 0xFFFF read as "down". */
    m->joy0 = 0x0000u;
    m->joy1 = 0x0000u;
    /* Save slots: the player cycles them with F1..F5, so there is nothing to configure. */
    m->saveSlot = 1;
    m->saveDir = "saves";
    /* AbsExecBase: the cstart does `movea.l 4.w,a6` and stores it where it needs it, exactly
     * like on the real machine. */
    rt_write32(&m->mem, 4, m->libraryBase[0]);
    rt_gfx_reset(m);
    rt_audio_init(m);
    return 1;
}

void rt_shutdown(rt_machine *m)
{
    rt_audio_close(m);
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
    m->waitFrames += 1;
}

/* dos.Delay(ticks): AmigaDOS suspends the calling task for that many system ticks, and the 50 Hz
 * E clock that counts them is the vertical blank the frame budget already counts, so n ticks are
 * n frame boundaries. The front end consumes them before it executes the next instruction - the
 * task is asleep while the vblanks keep firing, and the game resumes on the boundary it asked for
 * (src\recomp\cpu.c step_budget, src\oracle\cpu.c oracle_run). */
void rt_delay_ticks(rt_machine *m, u32 ticks)
{
    if (m->inTick) return;             /* a vblank server cannot sleep */
    if (ticks > 0x10000u) ticks = 0x10000u;
    m->waitFrames += (int)ticks;
}

/* The display keeps showing m->view until the program loads another one, so whatever was drawn
 * into that bitmap since the last flip becomes visible now. Presenting only on LoadView hid every
 * screen that is drawn once and then waits for input - the prompt was painted into the displayed
 * bitmap and never appeared. */
void rt_frame_present(rt_machine *m)
{
    if (m->frameLog != 0) rt_framelog(m);
    if (m->view != 0 && !m->inTick) rt_gfx_present(m, m->view);
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

/* --- the frame timeline ---------------------------------------------------------------------
 * One line per emulated frame, as key=value pairs, so a timeline taken from another machine can
 * contribute only what that machine can actually see. Ours reads the colours out of the copper
 * list MrgCop built (the engine fades by patching that list, so it is what the picture shows) and
 * the engine's own MovE step counter; the reference in cycle-exact WinUAE (tools\winuae-steplog.lua)
 * can only read RAM - the colour registers are write-only - so it logs fewer keys.
 *
 * Addresses are deliberately absent: the original is loaded into slow RAM by AmigaDOS and we load
 * the same image at $4000, so only values that are the same number on both machines are logged. */

int rt_framelog_open(rt_machine *m, const char *path)
{
    FILE *f = fopen(path, "w");
    if (f == 0) return 0;
    m->frameLog = (void *)f;
    return 1;
}

void rt_framelog(rt_machine *m)
{
    FILE *f = (FILE *)m->frameLog;
    u32 list = m->gfx.cprList;
    u32 start = list != 0 ? rt_read32(&m->mem, list + 4) : 0;
    int entries = list != 0 ? (int)rt_read16(&m->mem, list + 8) : 0;
    u16 col[16], con0 = m->custom[0x100 / 2];
    u32 step = 0;
    int i, e;

    if (f == 0) return;
    /* The colours are not in custom[] here: MrgCop builds a list of (COLORxx, value) entries and
     * the engine fades by patching that list in place, so the list is what the picture shows. */
    for (i = 0; i < 16; i++) col[i] = m->custom[0x180 / 2 + i];
    for (e = 0; start != 0 && e < entries && e < 256; e++)
    {
        u32 reg = rt_read16(&m->mem, start + (u32)e * 4u);
        u32 val = rt_read16(&m->mem, start + (u32)e * 4u + 2u);
        if (reg == 0x100u) con0 = (u16)val;
        if (reg >= 0x180u && reg < 0x180u + 32u && (reg & 1u) == 0)
            col[(reg - 0x180u) >> 1] = (u16)val;
    }
    if (m->mem.size > EMU_STEP_COUNTER + 4) step = rt_read32(&m->mem, EMU_STEP_COUNTER);
    fprintf(f, "frame=%lu", (unsigned long)m->frame);
    for (i = 0; i < 16; i++) fprintf(f, " c%d=%04X", i, col[i]);
    fprintf(f, " dmacon=%04X con0=%04X strt=%03X stop=%03X",
            m->custom[0x096 / 2],                       /* DMACON: what the program asked for */
            con0,                                       /* BPLCON0: planes, hires, colour */
            m->custom[0x08C / 2] & 0x1FEu,              /* DDFSTRT: display window */
            m->custom[0x090 / 2] & 0x1FEu);             /* DDFSTOP */
    for (i = 0; i < 4; i++) fprintf(f, " v%d=%02X", i, m->audio.ch[i].vol);
    for (i = 0; i < 4; i++)
        fprintf(f, " lc%d=%06X", i,
                (unsigned)(((u32)m->audio.ch[i].lcHi << 16) | m->audio.ch[i].lcLo) & 0xFFFFFFu);
    fprintf(f, " step=%lu\n", (unsigned long)step);
    fflush(f);
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
    printf("t %ld %ld %06lx\n", (long)m->insns, (long)m->cyclesToTick, (unsigned long)pc);
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
    return rt_bus_is_io(m, a) && a >= 0xDFF000u && a < 0xDFF200u;
}

/* --- the registers that come from the clock, not from a store ------------------------------- *
 * PAL geometry: a line is 227 colour clocks = 454 68000 cycles and a frame is 312.5 of them, so
 * EMU_CYCLES_PER_FRAME = 141,875 is exactly 312.5 lines and the beam position follows from the
 * frame budget itself. The engine reads $DFF006 as entropy (FUN_00016e56 and FUN_00016e8e fold it
 * into DAT_0002665c), so a constant zero there is a difference from the original, not a
 * simplification. */
#define EMU_CYCLES_PER_LINE 454

static long cycles_into_frame(const rt_machine *m)
{
    long c = EMU_CYCLES_PER_FRAME - m->cyclesToTick;
    if (c < 0) return 0;
    if (c >= EMU_CYCLES_PER_FRAME) return EMU_CYCLES_PER_FRAME - 1;
    return c;
}

static u32 beam_register(const rt_machine *m, u32 a)
{
    long c = cycles_into_frame(m);
    int line = (int)(c / EMU_CYCLES_PER_LINE);
    int hpos = (int)((c % EMU_CYCLES_PER_LINE) / 2);   /* colour clocks, 0..226 */

    if (a == 0xDFF004u)                                /* VPOSR: vpos in 15..1, long frame in 0 */
        return (u32)(((line & 0x7FF) << 1) | (int)(m->frame & 1u));
    return (u32)(((line & 0xFF) << 8) | (hpos & 0xFF)); /* VHPOSR: vpos high byte, hpos low */
}

/* CIA time-of-day: 24-bit BCD (hundredths, seconds, minutes) counting 10 Hz E-clock pulses, so it
 * runs on the same 50 Hz frame clock - one hundredth every five frames. Reading TODLO freezes the
 * three read registers and only TODHI releases them (HRM), and the engine reads just LO and MID of
 * both CIAs, so what it sees is the value its first read latched. */
static u32 cia_tod_byte(rt_machine *m, int cia, int which)
{
    u32 t, v;

    if (!m->todLatched[cia]) m->todLatch[cia] = m->frame;
    t = m->todLatch[cia] / 5u;                     /* hundredths since the program started */
    v = which == 0 ? (t % 100u) : (which == 1 ? ((t / 100u) % 60u) : ((t / 6000u) % 60u));
    if (which == 0) m->todLatched[cia] = 1;
    if (which == 2) m->todLatched[cia] = 0;
    return ((v / 10u) << 4) | (v % 10u);           /* packed BCD, as the counter holds it */
}

/* CIA-A $BFE000 / CIA-B $BFD000, byte accesses only (the engine reads the TOD bytes one by one). */
static int cia_tod_index(u32 a, int *cia, int *which)
{
    if (a == 0xBFE801u || a == 0xBFD800u) { *cia = a == 0xBFD800u; *which = 0; return 1; }
    if (a == 0xBFE901u || a == 0xBFD900u) { *cia = a == 0xBFD900u; *which = 1; return 1; }
    if (a == 0xBFEA01u || a == 0xBFDA01u) { *cia = a == 0xBFDA01u; *which = 2; return 1; }
    return 0;
}

u32 rt_bus_read8(rt_machine *m, u32 a)
{
    int cia, which;
    u32 value;

    a &= 0xFFFFFFu;
    if (is_custom(m, a))
    {
        if (a == 0xDFF005u || a == 0xDFF007u) return beam_register(m, a - 1u) & 0xFFu;
        return m->custom[(a - 0xDFF000u) >> 1] & 0xFFu;
    }
    if (rt_bus_is_io(m, a) && rt_cia_read8(m, a, &value)) return value;
    if (a == 0xBFE001u && rt_bus_is_io(m, a))
    {
        /* CIA-A port A: bit 7 is /FIRE, active low, the rest float high. */
        m->firePolls++;
        return 0x7Fu | (m->fireDown != 0 ? 0u : 0x80u);
    }
    if (rt_bus_is_io(m, a) && cia_tod_index(a, &cia, &which)) return cia_tod_byte(m, cia, which);
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
        if (a == 0xDFF002u)                                  /* DMACONR: BBUSY is the blitter */
            return m->custom[0x002u >> 1] | (m->blit.run ? 0x4000u : 0u);
        if (a == 0xDFF004u || a == 0xDFF006u) return beam_register(m, a);
        return m->custom[(a - 0xDFF000u) >> 1];
    }
    return rt_read16(&m->mem, a);
}

u32 rt_bus_read32(rt_machine *m, u32 a)
{
    a &= 0xFFFFFFu;
    if (is_custom(m, a) && a == 0xDFF004u)                   /* VPOSR:VHPOSR in one long */
        return (beam_register(m, 0xDFF004u) << 16) | beam_register(m, 0xDFF006u);
    if (is_custom(m, a) && a < 0xDFF1FCu)
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
    if (rt_bus_is_io(m, a) && rt_cia_write8(m, a, v)) return;
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

