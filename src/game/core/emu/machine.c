/* Musashi hooks + run loop. The 68000 core itself is third_party\musashi (MIT). */
#include "machine.h"
#include "platform.h"
#include "m68k.h"

#include <stdio.h>
#include <string.h>

emu_machine *emu_current = 0;

/* --- Musashi memory interface ------------------------------------------------------------- */

unsigned int m68k_read_memory_8(unsigned int a)
{
    return emu_read8(&emu_current->mem, a);
}

unsigned int m68k_read_memory_16(unsigned int a)
{
    return emu_read16(&emu_current->mem, a);
}

unsigned int m68k_read_memory_32(unsigned int a)
{
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
        emu_current->custom[(a - 0xDFF000u) >> 1] = (u16)v;
        return;
    }
    emu_write16(&emu_current->mem, a, v);
}

void m68k_write_memory_32(unsigned int a, unsigned int v)
{
    a &= 0xFFFFFFu;
    if (a >= 0xDFF000u && a < 0xDFF100u)
    {
        emu_current->custom[(a - 0xDFF000u) >> 1] = (u16)(v >> 16);
        emu_current->custom[(a + 2 - 0xDFF000u) >> 1] = (u16)v;
        return;
    }
    emu_write32(&emu_current->mem, a, v);
}

/* --- machine ------------------------------------------------------------------------------ */

/* m68kdasm.c reads through these; they must not touch the chipset. */
unsigned int m68k_read_disassembler_8(unsigned int a)  { return emu_read8(&emu_current->mem, a); }
unsigned int m68k_read_disassembler_16(unsigned int a) { return emu_read16(&emu_current->mem, a); }
unsigned int m68k_read_disassembler_32(unsigned int a) { return emu_read32(&emu_current->mem, a); }

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
#define EMU_HEAP_BASE 0x00040000u
#define EMU_HEAP_TOP  0x0007F000u
static u32 heapTop;

/* A fake exec task structure, so FindTask has something non-null to return. */
#define EMU_TASK_ADDR 0x0002F000u

/* Counts per-lvo so the trace only prints a name once. */
static long lvoSeen[64];

/* The bases we hand out, in registration order. Kept stable because the shims compare indexes. */
static const char *libraryName[EMU_LIB_SLOTS] = {
    "exec.library", "graphics.library", "dos.library", "intuition.library",
    "audio.device", "timer.device", "mathffp.library", "icon.library",
    "layers.library", "translator.library", "gadtools.library", "mathieeesingbas.library",
    "console.device", "input.device", "ciaa.resource", "resource"
};
#define EMU_LIB_RESOURCE 15                  /* the catch-all base OpenResource returns */

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

/* --- exec structures ---------------------------------------------------------------------- */
/* List is 14 bytes (head, tail, tailpred, type, pad); Node is 14 bytes; MsgPort is a Node plus
 * mp_Flags, mp_SigBit, mp_SigTask and the 14-byte message List - 34 bytes in all. */
#define LIST_HEAD(a)     ((a) + 0u)
#define LIST_TAILPRED(a) ((a) + 8u)

static u32 emu_alloc(u32 bytes)
{
    u32 p;
    bytes = (bytes + 7u) & ~7u;
    p = heapTop;
    heapTop = (heapTop + bytes + 7u) & ~7u;
    if (heapTop > EMU_HEAP_TOP)
    {
        printf("emu: heap exhausted asking for %lu bytes (top %06lX)\n",
               (unsigned long)bytes, (unsigned long)(heapTop - bytes));
        return 0;
    }
    return p;
}

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
    int i;

    i = (int)(-lvo / 6) % 64;

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
        case -210:                               /* FreeMem */
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
                if (idx < 0) { printf("emu: OpenLibrary(\"%s\") - unknown library\n", name); }
                else result = m->libraryBase[idx];
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
                read_cstr(arg32(sp, 0), name, (int)sizeof(name));
                if (m->trace) printf("     resource \"%s\"\n", name);
                result = m->libraryBase[EMU_LIB_RESOURCE];
            }
            break;
        case -168:                               /* AddIntServer */
        case -174:                               /* RemIntServer */
        case -132:                               /* Forbid */
        case -138:                               /* Permit */
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
        case -126:                               /* CurrentDir(lock) */
            result = 0xFFFFFFFFu;                /* DOSTRUE */
            break;
        case -84:                                /* Lock(name, mode) - no filesystem yet */
            result = 0;
            break;
        case -90:                                /* UnLock */
        case -36:                                /* Close */
        case -56:                                /* Close? */
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
        case -360:                               /* InitView(view) */
        case -204:                               /* InitVPort(vp) */
        case -390:                               /* InitBitMap(bm, depth, w, h) */
        case -198:                               /* InitRastPort(rp) */
        case -282:                               /* InitArea */
        case -468:                               /* InitTmpRas */
        case -342:                               /* SetAPen */
        case -366:                               /* CBump */
        case -240:                               /* Move */
        case -246:                               /* Draw */
        case -252:                               /* AreaMove */
        case -258:                               /* AreaDraw */
        case -264:                               /* AreaEnd */
        case -306:                               /* RectFill */
        case -300:                               /* BltClear */
        case -30:                                /* BltBitMap */
        case -216:                               /* MakeVPort */
        case -210:                               /* MrgCop */
        case -564:                               /* FreeCprList */
        case -540:                               /* FreeVPortCopLists */
        case -270:                               /* WaitTOF */
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
        case -222:                               /* LoadView(view) */
            {
                u32 v = arg32(sp, 0);
                u32 vp, k;
                m->view = v;
                vp = emu_read32(&m->mem, v);
                if (m->trace)
                {
                    printf("emu: LoadView view=%06lX vp=%06lX\n",
                           (unsigned long)v, (unsigned long)vp);
                    for (k = 0; k < 14; k++)
                        printf("     vp+%02lX = %08lX\n", (unsigned long)(k * 4),
                               (unsigned long)emu_read32(&m->mem, vp + k * 4));
                }
                result = 0;
            }
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
    if (lvoSeen[i]++ == 0)
        printf("emu: unhandled LVO %ld (%s) on library %d - returns 0\n",
               (long)lvo, lvo_name(lvo), lib);
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
    heapTop = EMU_HEAP_BASE;
    /* AbsExecBase: the cstart does `movea.l 4.w,a6` and stores it where it needs it, exactly
     * like on the real machine. */
    emu_write32(&m->mem, 4, m->libraryBase[0]);
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

u32 emu_run(emu_machine *m, long maxInsns)
{
    char text[128];
    long i;

    static int emu_dispatch(emu_machine *m, int lib, s32 lvo);

    for (i = 0; i < maxInsns; i++)
    {
        u32 pc = m68k_get_reg(0, M68K_REG_PC);
        s32 lvo = 0;

        if (emu_library_of(m, pc, &lvo) >= 0)
        {
            int lib = emu_library_of(m, pc, &lvo);
            if (!emu_dispatch(m, lib, lvo)) return pc;     /* unhandled: stop and report */
            continue;
        }
        if (m->imageTop != 0 && pc >= m->imageTop && pc < EMU_LIB_BASE)
        {
            printf("emu: PC left the image at %06lx\n", (unsigned long)pc);
            return pc;
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
        m->insns++;
    }
    return m68k_get_reg(0, M68K_REG_PC);
}

/* Boots the image at 0 with the register state the exporter documents. */
void emu_boot(u32 entry, u32 a4)
{
    m68k_init();
    m68k_set_cpu_type(M68K_CPU_TYPE_68000);
    m68k_pulse_reset();
    m68k_set_reg(M68K_REG_PC, entry);
    m68k_set_reg(M68K_REG_A7, EMU_STACK_TOP);
    m68k_set_reg(M68K_REG_A4, a4);
    m68k_set_reg(M68K_REG_SR, 0x2700);
}
