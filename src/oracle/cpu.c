/* The 68000 front end: Musashi plugged into the runtime.
 *
 * A development tool, not the product. It exists so the *original* dshell binary can be executed
 * and questioned - that is how every fact in this repository about the game's behaviour was
 * established - and it produces the fixtures (ref\fixtures) the differential harness replays.
 *
 * Everything in this file is CPU-specific: the memory hooks Musashi calls, the run/step loop, the
 * frame tick with its interrupt servers, and the trap that turns `jsr (lvo,A6)` into rt_os_call().
 * The shipped game replaces this file with the translated dispatcher and links no 68000 core.
 */
#include "machine.h"
#include "blitter.h"
#include "display.h"
#include "m68k.h"
#include "input.h"
#include "state.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

static int ram_has(u32 a) { return rt_current != 0 && a < rt_current->mem.size; }

/* Musashi's per-opcode 68000 cycle counts, already built by m68k_pulse_reset. Written out for
 * tools\gen-cycles.ps1 so the translated build charges the same time per instruction. */
extern unsigned char m68ki_cycles[][0x10000];

/* Time one instruction takes, in 68000 cycles: the base count from Musashi's own 68000 table,
 * indexed by the opcode word (which encodes the addressing modes, so `MOVE.W (A0),D0` and
 * `MOVE.W D1,D0` differ by themselves). The +2/+4 an indexed EA costs is NOT included - it lives in
 * the extension word, not the opcode, and leaving it out keeps this a single array lookup that the
 * translated code can compute at translation time. Measured error: see docs\next-session.md.
 *
 * This is the base count: the bus arbitration on top of it (slots.c, rt_bus_charge) turns it into
 * the time the instruction really takes, and both front ends apply exactly that rule.
 *
 * This is the one definition of "time" in the project: the interpreter, the host's interpreted
 * fallback and the translated stream all charge exactly this. */
u32 oracle_cycle_cost(u32 pc)
{
    u32 c;

    /* A library entry is not an instruction: the trap is performed by the OS call, and the words
     * "at" the LVO are whatever the stub area holds. It costs nothing, which is what the
     * translated stream charges for the same slot (src\recomp\cpu.c, rc_os_call_a6). */
    if (rt_library_of(rt_current, pc, 0) >= 0) return 0;
    c = (u32)m68ki_cycles[0][rt_read16(&rt_current->mem, pc)];
    return c;
}

/* The real cost of the instruction at `pc`: its base cycle count with its bus words walked
 * through the chip bus (slots.c). Identical to the translated stream's rc_step, which calls
 * rt_bus_charge with the cost baked into the emitted code. */
u32 oracle_instruction_cost(rt_machine *m, u32 pc)
{
    u32 c = oracle_cycle_cost(pc);

    return (u32)rt_bus_charge(m, (long)c, rt_read16(&m->mem, pc), pc);
}

int oracle_dump_cycle_table(const char *path)
{
    FILE *f = fopen(path, "wb");
    if (f == 0) { printf("emu: cannot write %s\n", path); return 0; }
    if (fwrite(m68ki_cycles[0], 1, 0x10000u, f) != 0x10000u)
    {
        fclose(f);
        printf("emu: short write on %s\n", path);
        return 0;
    }
    fclose(f);
    printf("emu: 68000 cycle table (%u opcodes) written to %s\n", 0x10000u, path);
    return 1;
}

/* Instruction lengths, one byte per opcode word: how many 16-bit words the instruction occupies
 * including the opcode itself. Taken from Musashi's disassembler, which is the same table the
 * original was decoded with, so it cannot disagree with the recompiled functions about what a
 * given opcode is. Length is a function of the opcode word alone on the 68000: the extension words
 * an EA needs are fixed by its mode and register fields, and MOVEM's mask and an index word are one
 * word each whatever they contain. */
int oracle_dump_inst_len(const char *path)
{
    FILE *f = fopen(path, "wb");
    u8 *buf;
    u32 i;

    if (f == 0) { printf("emu: cannot write %s\n", path); return 0; }
    buf = (u8 *)malloc(0x10000u);
    if (buf == 0) { fclose(f); return 0; }
    for (i = 0; i < 0x10000u; i++)
    {
        /* The opcode, then room for its extension words (zeros: the length must not depend on
         * their contents on a 68000). 0x100000 is inside the RAM block and far from the image. */
        u32 at = 0x100000u;
        char text[160];
        unsigned int len;
        int k;
        rt_write16(&rt_current->mem, at, (u16)i);
        for (k = 1; k < 6; k++) rt_write16(&rt_current->mem, at + (u32)k * 2u, 0x0000u);
        len = m68k_disassemble(text, at, M68K_CPU_TYPE_68000);
        buf[i] = (u8)(len / 2u);
        if (buf[i] == 0) buf[i] = 1u;
    }
    if (fwrite(buf, 1, 0x10000u, f) != 0x10000u)
    {
        free(buf);
        fclose(f);
        printf("emu: short write on %s\n", path);
        return 0;
    }
    free(buf);
    fclose(f);
    printf("emu: instruction length table (65536 opcodes) written to %s\n", path);
    return 1;
}

/* --- Musashi memory interface ------------------------------------------------------------- */

/* Instruction fetch words are NOT charged here. The translated build cannot fetch them (they are
 * compiled away), so both front ends charge them at the instruction boundary from rt_inst_len -
 * that is the only way the two stay identical. What goes through this callback is data: operand
 * reads, which are bus accesses and are charged as such. */
unsigned int m68k_read_immediate_16(unsigned int a)
{
    a &= 0xFFFFFFu;
    if (rt_current->busTable) rt_current->busWords++;
    return rt_bus_read16(rt_current, a);
}

unsigned int m68k_read_immediate_32(unsigned int a)
{
    a &= 0xFFFFFFu;
    if (rt_current->busTable) rt_current->busWords += 2;
    return rt_bus_read32(rt_current, a);
}

/* PC-relative operands are data reads (the displacement is an instruction word, the operand is
 * not), so they pay for the bus like any other access. */
unsigned int m68k_read_pcrelative_16(unsigned int a) { return m68k_read_memory_16(a); }
unsigned int m68k_read_pcrelative_32(unsigned int a) { return m68k_read_memory_32(a); }
unsigned int m68k_read_pcrelative_8(unsigned int a) { return m68k_read_memory_8(a); }

unsigned int m68k_read_memory_8(unsigned int a)
{
    a &= 0xFFFFFFu;
    if (!rt_bus_is_io(rt_current, a) && !ram_has(a)) note_bad(a, (u32)m68k_get_reg(0, M68K_REG_PC));
    if (rt_current->busTable) rt_current->busWords++;
    return rt_bus_read8(rt_current, a);
}

unsigned int m68k_read_memory_16(unsigned int a)
{
    a &= 0xFFFFFFu;
    if (!rt_bus_is_io(rt_current, a) && !ram_has(a + 1u)) note_bad(a, (u32)m68k_get_reg(0, M68K_REG_PC));
    if (rt_current->busTable) rt_current->busWords++;
    return rt_bus_read16(rt_current, a);
}

unsigned int m68k_read_memory_32(unsigned int a)
{
    a &= 0xFFFFFFu;
    if (!rt_bus_is_io(rt_current, a) && !ram_has(a + 3u)) note_bad(a, (u32)m68k_get_reg(0, M68K_REG_PC));
    if (rt_current->busTable) rt_current->busWords += 2;   /* two word transfers */
    return rt_bus_read32(rt_current, a);
}

void m68k_write_memory_8(unsigned int a, unsigned int v)
{
    a &= 0xFFFFFFu;
    if (rt_current->busTable) rt_current->busWords++;
    rt_bus_write8(rt_current, a, v);
}

void m68k_write_memory_16(unsigned int a, unsigned int v)
{
    a &= 0xFFFFFFu;
    if (rt_current->busTable) rt_current->busWords++;
    if (rt_current->dffLog && rt_current->dffSeen < 64 && a >= 0xDFF000u && a < 0xDFF100u)
    {
        rt_current->dffSeen++;
        printf("     dff+%03lX = %04lX at pc %06lx\n", (unsigned long)(a - 0xDFF000u),
               (unsigned long)(v & 0xFFFFu), (unsigned long)m68k_get_reg(0, M68K_REG_PC));
    }
    rt_bus_write16(rt_current, a, v);
}

void m68k_write_memory_32(unsigned int a, unsigned int v)
{
    a &= 0xFFFFFFu;
    if (rt_current->busTable) rt_current->busWords += 2;
    rt_bus_write32(rt_current, a, v);
}

/* Temporary probe: 0xBED00000 appears nowhere in the image and nowhere in our shims, so catching
 * the store that puts it in memory names the routine that corrupts the move node list. Defined
 * after the ring dumper so it can print the call chain. */

/* --- machine ------------------------------------------------------------------------------ */

/* m68kdasm.c reads through these; they must not touch the chipset. */
unsigned int m68k_read_disassembler_8(unsigned int a)  { return rt_read8(&rt_current->mem, a); }
unsigned int m68k_read_disassembler_16(unsigned int a) { return rt_read16(&rt_current->mem, a); }
unsigned int m68k_read_disassembler_32(unsigned int a) { return rt_read32(&rt_current->mem, a); }

static void oracle_dump_call_site(rt_machine *m, u32 ret)
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
static void oracle_dump_ring(rt_machine *m)
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

/* The ring, oldest first: the last instructions either front end executed, so two runs can be
 * compared at the point where their instruction streams start to differ. */
void oracle_ring_print(rt_machine *m)
{
    int k;

    for (k = 0; k < EMU_RING_SIZE; k++)
    {
        u32 pc = m->ring[(m->ringPos + k) & (EMU_RING_SIZE - 1)];
        if (pc != 0) printf("ring %06lx\n", (unsigned long)pc);
    }
}

/* --- interrupt model ---------------------------------------------------------------------- */
/* Everything the game does per frame hangs off the vertical blank: FUN_0001E3F6 registers the
 * MovE frame interrupt with AddIntServer(INTB_VERTB = 5, &DAT_26850 "MovE_VB") and the audio
 * driver arms ciaa.resource with AddICRVector (CIA-A port A bit 0 is /VERTB). Servers run in
 * registration order, which is also the order the game registered them in. */

static void oracle_save_regs(u32 *r)
{
    int i;
    for (i = 0; i < 16; i++) r[i] = m68k_get_reg(0, (int)M68K_REG_D0 + i);
    r[16] = m68k_get_reg(0, M68K_REG_SR);
    r[17] = m68k_get_reg(0, M68K_REG_PC);     /* the instruction the handler interrupted */
}

/* The register file in both directions, for a driver that also runs translated code (src\host):
 * d0-d7, a0-a7, sr, pc - the same order oracle_save_regs uses. */
void oracle_regs_get(u32 *r) { oracle_save_regs(r); }

static void oracle_restore_regs(const u32 *r)
{
    int i;
    for (i = 0; i < 16; i++) m68k_set_reg((int)M68K_REG_D0 + i, r[i]);
    m68k_set_reg(M68K_REG_SR, r[16]);
    m68k_set_reg(M68K_REG_PC, r[17]);
}

/* The other direction of the same transfer: a translated run hands its register file back. */
void oracle_regs_set(const u32 *r) { oracle_restore_regs(r); }

/* The interrupt returns through this address (pushed as the return address of the handler). */
#define EMU_INT_RET 0x00000204u

int oracle_step(rt_machine *m);

/* Runs one handler to its rts. Returns 0 when the handler never returned. */
static int oracle_run_handler(rt_machine *m, u32 code, u32 data)
{
    long guard = 400000;               /* an A500 vblank handler must fit in a few thousand */
    u32 sp = m68k_get_reg(0, M68K_REG_A7) - 4;

    m->handlerRuns++;
    rt_write32(&m->mem, sp, EMU_INT_RET);
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
        if (!oracle_step(m)) return 0;
    }
    return 1;
}


/* One ICR handler (the engine's CIA timer interrupt, e.g. the music driver at FUN_0000f264): it
 * runs between two instructions of the main program and must leave the register file exactly as
 * it found it. Used as rt_machine::on_cia by both front ends. */
void oracle_run_icr(rt_machine *m, u32 code, u32 data)
{
    u32 save[18];

    oracle_save_regs(save);
    if (!oracle_run_handler(m, code, data))
        printf("emu: ICR handler %06lx failed at frame %lu\n",
               (unsigned long)code, (unsigned long)m->frame);
    oracle_restore_regs(save);
}

static void oracle_cia_hook(rt_machine *m, u32 code)
{
    oracle_run_icr(m, code, m->ciaData);
}

/* One vertical blank: bump the frame, then run every registered interrupt server. */
void oracle_tick(rt_machine *m)
{
    u32 save[18];
    int i;

    if (m->tickLog)
        printf("tick %lu in insns %ld budget %ld blitcyc %ld step %lu pc %06lx\n", (unsigned long)m->frame,
               (long)m->insns, (long)m->cyclesToTick, (long)m->blitCycles,
               (unsigned long)rt_read32(&m->mem, EMU_STEP_COUNTER), (unsigned long)m68k_get_reg(0, M68K_REG_PC));
    m->frame++;
    if (m->slotsAt != 0 && m->frame == m->slotsAt) rt_slots_print(m);
    /* The budget carries whatever the last frame overspent: a blit can cost several frames, and the
     * CPU is stuck waiting for it (blitter.c). Only a WaitTOF/WaitBOVP resets it, because that is
     * the program declaring the rest of the frame idle. A debt bigger than one frame therefore
     * costs more than one vblank - the next instruction triggers the tick again. */
    m->cyclesToTick += EMU_CYCLES_PER_FRAME;
    /* The raster has finished the last frame: what was drawn into the loaded view is on screen. */
    rt_frame_present(m);
    if (m->pressAt != 0)
        m->fireDown = (m->frame >= m->pressAt && (m->releaseAt == 0 || m->frame < m->releaseAt))
                          ? 1u : 0u;
    /* A frame-indexed script overrides the press/release convenience: it is the reproducible form. */
    input_apply(m);
    /* The tool's once-per-frame hook. Input must be read here and not on a present, because the
     * game spends long stretches with nothing to present (it waits for /FIRE inside the menus) and
     * a window that is only pumped when a raster is shown stops responding exactly then. */
    if (m->on_frame) m->on_frame(m);
    if (m->inTick) return;             /* a handler cannot be interrupted by the next vblank */
    m->inTick = 1;
    oracle_save_regs(save);
    for (i = 0; i < m->intCount; i++)
    {
        u32 code = m->intCode[i];
        if (code == 0) continue;
        /* The vblank is interrupt level 3: count the times the 68000's mask (SR bits 8-10) would
         * have held it off, so the masking rule can be decided on a number. */
        if (((m68k_get_reg(0, M68K_REG_SR) >> 8) & 7u) >= 3u) m->irqDeferredVb++;
        if (!oracle_run_handler(m, code, m->intData[i])) break;
        oracle_restore_regs(save);        /* handlers nest in order, each sees the same state */
    }
    oracle_restore_regs(save);
    m->inTick = 0;
    /* Frame boundary: the state between two frames, after this frame's interrupt servers. */
    state_sample(m);
    if (m->tickLog)
        printf("tick %lu out insns %ld budget %ld pc %06lx\n", (unsigned long)m->frame,
               (long)m->insns, (long)m->cyclesToTick, (unsigned long)m68k_get_reg(0, M68K_REG_PC));
}

/* --- bus-word census (--bustable) --------------------------------------------------------- *
 * How many chip-bus words an instruction needs is the one datum the bus arbiter lacks: it turns
 * the 68000 cycle count into time on a bus Agnus also uses. It is a property of the instruction,
 * so it is measured once on the interpreter (each fetch, extension word, operand read and write is
 * one word transfer) and baked into src\runtime\amiga\bus_cycles.c by tools\gen-buscycles.ps1.
 * The census records min/max, so an opcode whose count is not stable (MOVEM's register list) shows
 * up instead of being averaged silently. */
static u32 busCounts[0x10000];
static u32 busSums[0x10000];
static u16 busMins[0x10000];
static u16 busMaxs[0x10000];

static void bus_record(u32 opcode, int words)
{
    u16 w = (u16)words;

    if (busCounts[opcode] == 0) { busMins[opcode] = w; busMaxs[opcode] = w; }
    else
    {
        if (w < busMins[opcode]) busMins[opcode] = w;
        if (w > busMaxs[opcode]) busMaxs[opcode] = w;
    }
    busCounts[opcode]++;
    busSums[opcode] += (u32)words;
}

int oracle_bus_dump(const char *path)
{
    FILE *f = fopen(path, "w");
    u32 opcode;
    int n = 0;

    if (f == 0) { printf("emu: cannot write %s\n", path); return 0; }
    fprintf(f, "# opcode count min max sum - measured bus words per instruction\n");
    for (opcode = 0; opcode < 0x10000u; opcode++)
    {
        if (busCounts[opcode] == 0) continue;
        fprintf(f, "%04lX %lu %u %u %lu\n", (unsigned long)opcode,
                (unsigned long)busCounts[opcode], (unsigned)busMins[opcode],
                (unsigned)busMaxs[opcode], (unsigned long)busSums[opcode]);
        n++;
    }
    fclose(f);
    printf("emu: bus-word census: %d opcode(s) written to %s\n", n, path);
    return 1;
}

/* ICFTD_TRACE_LOAD=1 traces the sample loader's decisions: which name it compares against
 * "o.rff", which the bank mount gets, what the index scan answers, the size it allocates, and the
 * handler thunk each voice call goes through (0 = the voice object was never given one). It is how
 * the "ICR handler failed" bursts were tied to an instrument whose bank entry missed.
 *
 * ICFTD_TRACE_LOAD=2 additionally gives the `Desert1:sfx/o.rff` record back the 0x20 the loader
 * sets at 0xe8ea, which the missed index scan takes away. Measured: 142 aborted ticks become 0, so
 * that one size word is the whole difference between a stuttering and a clean intro. It is an
 * experiment, not a fix - it writes engine state, which no shipped path may do. */
static int loadTrace = -1;
static int loadWant;
/* ICFTD_ALLOW_LOW=1 lets the interpreter run addresses below the image (chip RAM, where a jump
 * through a null handler lands) instead of treating them as fatal. An experiment: it is what the
 * original machine does, and it says whether our fail-fast or the engine is the real difference. */
static int allowLow = -1;
static const char *loadStr(rt_machine *m, u32 a)
{
    static char buf[64];
    int i;
    for (i = 0; i < 63; i++)
    {
        int c = rt_read8(&m->mem, a + (u32)i);
        buf[i] = c;
        if (c == 0) break;
    }
    buf[i] = 0;
    return buf;
}

/* One instruction, the library trap and the fail-fast checks. 1 = keep running. */
int oracle_step(rt_machine *m)
{
    char text[128];
    u32 pc = m68k_get_reg(0, M68K_REG_PC);
    s32 lvo = 0;

    if (loadTrace < 0)
    {
        const char *e = getenv("ICFTD_TRACE_LOAD");
        loadTrace = e != 0 ? atoi(e) : 0;                 /* 1 = trace, 2 = trace + experiment */
        if (loadTrace == 0 && e != 0) loadTrace = 1;
    }
    if (allowLow < 0) allowLow = getenv("ICFTD_ALLOW_LOW") ? 1 : 0;
    if (loadTrace)
    {
        u32 rel = pc - m->imageBase;
        u32 a4 = m68k_get_reg(0, M68K_REG_A4);
        u32 sp = m68k_get_reg(0, M68K_REG_A7);
        if (rel == 0x0000E8BAu)
            printf("emu: load f%lu cmp `%s` vs `o.rff`\n", (unsigned long)m->frame,
                   loadStr(m, rt_read32(&m->mem, sp)));
        else if (rel == 0x0000E8C8u)
            printf("emu: load f%lu mount `%s`\n", (unsigned long)m->frame,
                   loadStr(m, rt_read32(&m->mem, sp)));
        else if (rel == 0x0000E8FAu)
        {
            const char *nm = loadStr(m, rt_read32(&m->mem, sp));
            printf("emu: load f%lu open `%s` (dir=%04x size=%08lx)\n", (unsigned long)m->frame, nm,
                   (unsigned)rt_read16(&m->mem, a4 + 0x2AD8u),
                   (unsigned long)rt_read32(&m->mem, a4 + 0x0AC2u));
            /* loadTrace == 2 is the experiment: give this record back the 0x20 the loader set at
             * 0xe8ea, which the missed index scan took away. */
            loadWant = (loadTrace == 2 && strcmp(nm, "Desert1:sfx/o.rff") == 0) ? 1 : 0;
        }
        else if (rel == 0x0000E900u && loadWant)
        {
            loadWant = 0;
            rt_write32(&m->mem, a4 + 0x0AC2u, 0x20u);
            printf("emu: load f%lu restored size=0x20 after the o.rff open\n", (unsigned long)m->frame);
        }
        else if (rel == 0x0000E91Au)
            printf("emu: load f%lu alloc size=%ld\n", (unsigned long)m->frame,
                   (long)rt_read32(&m->mem, a4 + 0x0AC2u));
        else if (rel == 0x0002046Eu)
            printf("emu: load f%lu scan exhausted\n", (unsigned long)m->frame);
        else if (rel == 0x0000F41Eu)
            printf("emu: load f%lu voice obj %06lx type %08lx\n", (unsigned long)m->frame,
                   (unsigned long)a4, (unsigned long)rt_read32(&m->mem, a4));
    }

    if (m->watch != 0 && pc == m->watch)
    {
        int k;
        printf("emu: watch hit %06lx, recent PCs:", (unsigned long)pc);
        for (k = 0; k < EMU_RING_SIZE; k++)
            printf(" %06lx", (unsigned long)m->ring[(m->ringPos + k) & (EMU_RING_SIZE - 1)]);
        printf("\n");
    }
#if EMU_TRACE_RING
    m->ring[m->ringPos++ & (EMU_RING_SIZE - 1)] = pc;
#endif
    m->insns++;
    /* FUN_00009ae0 (the IFF chunk skipper) reads its loop flag out of the word at (A5-0xE) before
     * anything writes it. On the Amiga that frame slot holds leftover stack data, which is
     * non-zero in practice, so the skip loop always ran at least once; our RAM holds zeros there,
     * so the skipper returned without skipping, FUN_00009984 parsed the 8SVX VHDR four bytes early
     * and 3579545 was divided by a samplesPerSec of 0 (the flight's "ants" sample, divu at image
     * 0x211FE). Seed the slot as the routine is entered - no emulated instruction, so the two
     * front ends stay in lockstep; the translation does the same store in fn_00009ae0.c. From the
     * second iteration on the loop's own value governs, including its early exit. */
    if (pc == m->imageBase + 0x00009AE0u)
        rt_write16(&m->mem, m68k_get_reg(0, M68K_REG_A7) - 0x12u, 0x0001u);
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
        oracle_dump_ring(m);
        return 0;
    }
    if (pc < m->imageBase && !allowLow)
    {
        printf("emu: PC ran below the image at %06lx:\n", (unsigned long)pc);
        oracle_dump_ring(m);
        return 0;
    }
    if (rt_library_of(m, pc, &lvo) >= 0)
    {
        /* The program is parked on a library stub: `jsr (lvo,A6)` with the return address at A7.
         * Hand the call to the runtime with the CPU values as plain arguments, then perform the
         * ABI's effects here - result in D0, stack popped past the return address, PC back in the
         * caller. The translated build does exactly the same thing with its own registers. */
        int lib = rt_library_of(m, pc, &lvo);
        u32 sp = m68k_get_reg(0, M68K_REG_A7);
        /* graphics.library takes its arguments in A0/A1/D0/D1, everything else on the stack. */
        u32 a0 = m68k_get_reg(0, M68K_REG_A0);
        u32 a1 = m68k_get_reg(0, M68K_REG_A1);
        u32 d0 = m68k_get_reg(0, M68K_REG_D0);
        u32 d1 = m68k_get_reg(0, M68K_REG_D1);
        u32 ret = rt_read32(&m->mem, sp);
        u32 result;

        m->pc = pc;
        result = rt_os_call(m, sp, a0, a1, d0, d1, lib, lvo);
        if (m->osUnhandled)
        {
            m->osUnhandled = 0;
            oracle_dump_call_site(m, ret);
        }
        m68k_set_reg(M68K_REG_D0, result);
        m68k_set_reg(M68K_REG_A7, sp + 4);
        m68k_set_reg(M68K_REG_PC, ret);
        return m->stop ? 0 : 1;
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
    if (m->busTable) m->busWords = 0;
    m68k_execute(1);
    if (m->busTable) bus_record(rt_read16(&m->mem, pc), (int)m->busWords);
    return 1;
}

/* The one-shot scene entry set by oracle_call_at (see its comment in cpu.h). */
static u32 callPc, callFrame, callArg, callAtPc;
static long callInsns;
static int callDone;

void oracle_call_at(u32 pc, u32 frame, u32 arg, long insns, u32 atPc)
{
    callPc = pc;
    callFrame = frame;
    callArg = arg;
    callInsns = insns;
    callAtPc = atPc;
    callDone = 0;
}

u32 oracle_run(rt_machine *m, long maxInsns)
{
    while (m->insns < maxInsns)
    {
        if (m->stop) break;            /* the tool asked to finish (window closed) */
        if (callPc != 0 && !callDone &&
            (callInsns > 0 ? m->insns >= (long)callInsns : m->frame >= callFrame) &&
            (callAtPc == 0 || m68k_get_reg(0, M68K_REG_PC) == callAtPc))
        {
            u32 sp = m68k_get_reg(0, M68K_REG_A7);
            callDone = 1;
            sp -= 4;
            rt_write32(&m->mem, sp, callArg);      /* the routine's first argument */
            sp -= 4;
            rt_write32(&m->mem, sp, EMU_EXIT_PC);  /* return into the program-end sentinel */
            m68k_set_reg(M68K_REG_A7, sp);
            m68k_set_reg(M68K_REG_PC, callPc);
            printf("emu: calling %06lX(%08lX) at frame %lu\n", (unsigned long)callPc,
                   (unsigned long)callArg, (unsigned long)m->frame);
        }
        while (m->waitFrames > 0)
        {
            /* The program asked for the next vblank (WaitTOF/WaitBOVP) or to sleep (dos.Delay):
             * the rest of this frame is idle, so no cycle is spent for it. Zero budget is enough
             * to end the frame; a Delay of n ticks is n boundaries, run before the next
             * instruction - the task is asleep while the vblanks keep firing. The devices still
             * run through that idle time (rt_time_idle: the music driver keeps ticking). */
            m->waitFrames--;
            rt_time_idle(m);
            oracle_tick(m);
            if (m->stop) break;
        }
        /* The budget is charged per instruction from the 68000 cycle table, with the instruction's
         * bus words walked through the chip bus (rt_bus_charge) - the same rule the translated code
         * follows (src\recomp\cpu.c, step_budget). */
        {
            u32 pc = m68k_get_reg(0, M68K_REG_PC);
            u32 cost = oracle_instruction_cost(m, pc);

            rt_trace(m, pc);
            m->cyclesToTick -= (long)cost;
            rt_time_run(m, (long)cost);      /* Paula + CIA timers, same clock as the budget */
            rt_cia_service(m);               /* a timer expiry is taken between instructions */
            if (m->cyclesToTick < 0) oracle_tick(m);
        }
        if (!oracle_step(m)) return m68k_get_reg(0, M68K_REG_PC);
        if (m->progress && (m->insns % 1000000L) == 0)
            printf("emu: %ld steps, pc %06lx, frame %lu, %lu raster(s), %lu blit(s), %lu drop(s), %lu fire poll(s), %lu handler(s)\n",
                   (long)m->insns, (unsigned long)m68k_get_reg(0, M68K_REG_PC),
                   (unsigned long)m->frame, (unsigned long)m->gfx.frames,
                   (unsigned long)m->blits, (unsigned long)m->blitDrops,
                   (unsigned long)m->firePolls, (unsigned long)m->handlerRuns);
    }
    rt_lvo_report();
    return m68k_get_reg(0, M68K_REG_PC);
}

/* Boots the image at 0 with the register state the exporter documents. */
void oracle_boot(u32 entry, u32 a4)
{
    m68k_init();
    m68k_set_cpu_type(M68K_CPU_TYPE_68000);
    m68k_pulse_reset();
    /* m68k_execute() starts by draining the cycle count m68k_pulse_reset() queued (RESET_CYCLES)
     * and returns without retiring an instruction if that uses up the slice. Step once here to get
     * that out of the way: otherwise the run's first oracle_step() counts an instruction that never
     * ran (and now would also charge its cycles), and the translated build - which has no phantom
     * step - drifts one instruction behind at the very first frame boundary. */
    m68k_execute(1);
    m68k_set_reg(M68K_REG_PC, entry);
    m68k_set_reg(M68K_REG_A7, EMU_STACK_TOP - 4);
    m68k_set_reg(M68K_REG_A4, a4);
    /* The Lattice C startup: A0 points at the command line tail, D0 is its length. dshell takes
     * no arguments (see the HDesert script), so both are empty but A0 must still be readable. */
    m68k_set_reg(M68K_REG_A0, rt_args_addr());
    m68k_set_reg(M68K_REG_D0, 0);
    m68k_set_reg(M68K_REG_SR, 0x2700);
    /* After the image load: the image's BSS ends at 0x31598 and the Process block must survive. */
    rt_build_process(rt_current);
    /* The first frame is a full frame, in both front ends (rt_init leaves the budget at zero). */
    rt_current->cyclesToTick = EMU_CYCLES_PER_FRAME;
    /* Device interrupts are game code: the runtime raises them, this core runs them. */
    rt_current->on_cia = oracle_cia_hook;
    /* The hunk loader would have called us, so leave a return address the program can rts to.
     * The DOS loader does the same: the entry code ends with `rts`. */
    rt_write32(&rt_current->mem, EMU_STACK_TOP - 4, EMU_EXIT_PC);
}

