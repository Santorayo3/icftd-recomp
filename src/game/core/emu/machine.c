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

/* The bases we hand out, in registration order. */
static const char *libraryName[EMU_LIB_SLOTS] = {
    "exec.library", "graphics.library", "dos.library", "intuition.library",
    "audio.device", "timer.device", "mathffp.library", "?"
};

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

/* Called with the CPU parked on a library slot. Returns 0 when the call is not modelled yet.
 * The 68k ABI is `jsr (lvo,A6)`: return address at A7, arguments above it, result in D0. */
static int emu_dispatch(emu_machine *m, s32 lvo)
{
    u32 sp = m68k_get_reg(0, M68K_REG_A7);
    u32 ret = emu_read32(&m->mem, sp);
    u32 result = 0;
    int i;

    i = (int)(-lvo / 6) % 64;

    switch (lvo)
    {
    case -294:                                   /* exec.FindTask */
        result = EMU_TASK_ADDR;
        break;
    case -198:                                   /* exec.AllocMem */
        {
            u32 bytes = (arg32(sp, 0) + 7u) & ~7u;
            result = heapTop;
            heapTop = (heapTop + bytes + 7u) & ~7u;
            if (heapTop > EMU_HEAP_TOP) { printf("emu: heap exhausted\n"); return 0; }
        }
        break;
    case -210:                                   /* exec.FreeMem */
    case -132:                                   /* exec.Forbid */
    case -138:                                   /* exec.Permit */
    case -270:                                   /* graphics.WaitTOF */
    case -228:                                   /* graphics.WaitBlit */
    case -456:                                   /* exec.DoIO */
        result = 0;
        break;
    case -552:                                   /* exec.OpenLibrary(name, version) */
    case -408:                                   /* exec.OldOpenLibrary(name) */
        {
            char name[64];
            u32 nameAddr = arg32(sp, 0);
            int idx;

            /* dshell's cstart loads the name into A1 before the call and passes nothing on
             * the stack (entry 0x4960: `lea (0x20,PC),a1; jsr (-$198,a6)`), so fall back to
             * A1 when the stack slot is empty. */
            if (nameAddr == 0) nameAddr = m68k_get_reg(0, M68K_REG_A1);
            read_cstr(nameAddr, name, (int)sizeof(name));
            idx = library_index_of(name);
            if (idx < 0) { printf("emu: OpenLibrary(\"%s\") - unknown library\n", name); result = 0; }
            else result = m->libraryBase[idx];
            if (m->trace) printf("     open \"%s\" -> %08lX\n", name, (unsigned long)result);
        }
        break;
    case -414:                                   /* exec.CloseLibrary */
        result = 0;
        break;
    case -108:                                   /* exec.Alert(code) - never returns */
        printf("emu: ALERT 0x%lX - the original halted here\n",
               (unsigned long)arg32(sp, 0));
        return 0;
    default:
        if (lvoSeen[i]++ == 0)
            printf("emu: unhandled LVO %ld (%s) - returns 0\n", (long)lvo, lvo_name(lvo));
        result = 0;
        break;
    }

    if (m->trace)
        printf("     -> %-28s (%ld) args %08lX %08lX %08lX = %08lX  A1=%08lX sp+: %08lX %08lX %08lX %08lX\n",
               lvo_name(lvo), (long)lvo,
               (unsigned long)arg32(sp, 0), (unsigned long)arg32(sp, 1),
               (unsigned long)arg32(sp, 2), (unsigned long)result,
               (unsigned long)m68k_get_reg(0, M68K_REG_A1),
               (unsigned long)emu_read32(&m->mem, sp),
               (unsigned long)emu_read32(&m->mem, sp + 4),
               (unsigned long)emu_read32(&m->mem, sp + 8),
               (unsigned long)emu_read32(&m->mem, sp + 12));

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

    static int emu_dispatch(emu_machine *m, s32 lvo);

    for (i = 0; i < maxInsns; i++)
    {
        u32 pc = m68k_get_reg(0, M68K_REG_PC);
        s32 lvo = 0;

        if (emu_library_of(m, pc, &lvo) >= 0)
        {
            if (!emu_dispatch(m, lvo)) return pc;          /* unhandled: stop and report */
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
