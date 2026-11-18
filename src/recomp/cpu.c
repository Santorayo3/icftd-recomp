/* cpu_t helpers: memory, flags and the two call seams. Semantics are the interpreter's
 * (src\assetExport\Cpu68k\Cpu68k.cs) - the translated function must equal it byte for byte. */
#include "cpu.h"
#include "fn_table.h"

#include <stdio.h>

static void note_bad(cpu_t *c, rt_machine *m, u32 addr)
{
    /* The runtime counts out-of-range accesses; the PC makes the count actionable. */
    if (m->mem.bad < 8u)
        printf("recomp: access %08lX outside RAM from pc %06lX\n",
               (unsigned long)addr, (unsigned long)c->pc);
}

/* Every memory access and every call passes here: that is where a translated busy-wait or a run
 * that has already been asked to stop is unwound. */
static void tick(void)
{
    if (rc_abort == 0) return;
    if (++rc_ops > rc_opsLimit) longjmp(*rc_abort, 1);
    if (rt_current != 0 && rt_current->stop) longjmp(*rc_abort, 1);
}

void rc_tick(void)
{
    tick();
}

/* --- the frame boundary --------------------------------------------------------------------- */

void (*rc_frame_hook)(cpu_t *c, rt_machine *m);
int rc_stopOnUnknown;
long rc_stopAt;
u32 rc_breakPc;

/* Armed only while rc_call runs the stream, so rc_step can leave it in the middle of a function. */
static jmp_buf rc_stopBuf;
static jmp_buf *rc_stopJump;

/* One instruction's worth of bookkeeping, exactly the interpreter's rule (src\oracle\cpu.c,
 * oracle_run): the instruction's cycles are charged before it, going negative runs the vblank
 * first, and the bisection stop leaves the stream on the instruction that has not run. The emitted
 * code sets c->pc to that instruction before calling rc_step, so a stop reports the state the
 * interpreter reports. `words` >= 0 replaces the opcode's bus word count: a hand-written
 * replacement of translated code charges the words of the whole group it stands in for. */
static void step_budget(cpu_t *c, rt_machine *m, u32 cost, int words)
{
    tick();
    if (m->traceTo != 0) rt_trace(m, c->pc);
    /* The IFF chunk skipper (0x9AE0) reads its loop flag from the word at (A5-0xE) *before* anything
     * writes it. On the Amiga that frame slot holds leftover stack data, non-zero in practice, so the
     * skip loop always ran at least once; our zeroed RAM made it return without skipping, FUN_00009984
     * parsed the 8SVX VHDR four bytes early, and the flight's "ants" sample divided 3,579,545 by a
     * samplesPerSec of 0 (divu, image 0x21218). Seed the slot as the routine is entered - the
     * interpreter does the identical store in oracle_step (src\oracle\cpu.c), so the two front ends
     * stay in lockstep. Lives here, not in fn_00009ae0.c, because that file is regenerated. */
    if (c->pc == RC_ADDR(0x00009AE0u)) rc_wr16(c, m, c->a[7] - 0x12u, 1u);
    /* The emitted code has already named the instruction, so the ring means the same thing here
     * as in the interpreter (src\oracle\cpu.c, oracle_step). Compiled out of the release build. */
#if EMU_TRACE_RING
    m->ring[m->ringPos++ & (EMU_RING_SIZE - 1)] = c->pc;
#endif
    if (rc_stopAt > 0 && m->insns >= rc_stopAt)
    {
        m->stop = 1;
        if (rc_stopJump != 0) longjmp(*rc_stopJump, 1);
        return;
    }
    /* The front end asked to be handed the program before this instruction runs (rc_breakPc): the
     * stream is left with c->pc on it, exactly as rc_stopAt leaves it, and the front end re-enters
     * there when it is done. */
    if (rc_breakPc != 0 && c->pc == rc_breakPc)
    {
        if (rc_stopJump != 0) longjmp(*rc_stopJump, 1);
        return;
    }
    /* A WaitTOF/WaitBOVP - or a dos.Delay behind one - ended the frame early: the rest of it is
     * idle, so its budget slot is the idle one. Each pending boundary is run here, in one go,
     * because that is what happens on the Amiga: the task is asleep while the vblanks keep firing
     * and it resumes on the boundary it asked for. One boundary is exactly what the previous
     * single-shot form did (zero budget, then the cost drives it negative), so a WaitTOF is
     * unchanged. Exactly what oracle_run does - the request is seen between two instructions, the
     * counter is forced to 0 and the decrement below turns it negative. Spending the slot in
     * rc_os_call_a6 instead put the straddling instruction on the old frame's side and shifted
     * every later vblank by one instruction (measured: frame 487, tick 5308877 vs the oracle's
     * 5308878). */
    while (m->waitFrames > 0 && rc_frame_hook != 0)
    {
        m->waitFrames--;
        rt_time_idle(m);                 /* the devices keep running through the idle frame */
        rc_frame_hook(c, m);
        if (m->stop) break;
    }
    if (rc_frame_hook != 0)
    {
        long bus = (words < 0)
                 ? rt_bus_charge(m, (long)cost, rt_read16(&m->mem, c->pc), c->pc)
                 : rt_bus_charge_words(m, (long)cost, words);

        /* rt_bus_charge walks the instruction's bus words through the slot map (slots.c): internal
         * cycles run at the 68000's full rate, each bus word waits for a colour clock Agnus did not
         * take. The interpreter charges the same rule from oracle_cycle_cost's base count, so the
         * two front ends cannot drift. The blitter's own cycles are bus cycles already and are
         * charged as such, so they are not stretched again. */
        m->cyclesToTick -= bus;
        rt_time_slice(m, bus);           /* Paula + CIA timers, the same clock as the budget */
        if (m->ciaPending) rt_cia_service(m);
        if (m->cyclesToTick < 0) rc_frame_hook(c, m);
    }
    /* The instruction about to run, for diagnostics: a native crash leaves this in the machine
     * (and the host writes it to the crash journal every vblank). */
    m->pc = c->pc;
    m->insns++;
}

void rc_step(cpu_t *c, rt_machine *m, u32 cycles)
{
    step_budget(c, m, cycles, -1);      /* the words come from the opcode at c->pc */
}

void rc_step_words(cpu_t *c, rt_machine *m, u32 cycles, int words)
{
    step_budget(c, m, cycles, words);
}

static u32 mask_size(int size)
{
    if (size == 4) return 0xFFFFFFFFu;
    if (size == 2) return 0x0000FFFFu;
    return 0x000000FFu;
}

/* --- memory ---------------------------------------------------------------------------------
 * Emulated memory is big-endian and is never cast to a host pointer, but the RAM block is one
 * flat allocation, so the overwhelming majority of accesses can skip the bus entirely: one size
 * check, then byte loads. Only an address outside the block reaches the bus (chipset, CIA,
 * out-of-range reporting), which keeps the same semantics as rt_bus_read* and costs one extra
 * test in the common case where it is needed at all. */

u32 rc_rd8(cpu_t *c, rt_machine *m, u32 addr)
{
    u32 a = addr & 0xFFFFFFu;

    tick();
    if (a < m->mem.size) return m->mem.base[a];
    if (!rt_bus_is_io(m, a)) note_bad(c, m, addr);
    return rt_bus_read8(m, addr);
}

u32 rc_rd16(cpu_t *c, rt_machine *m, u32 addr)
{
    u32 a = addr & 0xFFFFFFu;

    tick();
    if (a + 2u <= m->mem.size)
    {
        const u8 *p = m->mem.base + a;
        return ((u32)p[0] << 8) | p[1];
    }
    if (!rt_bus_is_io(m, a)) note_bad(c, m, addr);
    return rt_bus_read16(m, addr);
}

u32 rc_rd32(cpu_t *c, rt_machine *m, u32 addr)
{
    u32 a = addr & 0xFFFFFFu;

    tick();
    if (a + 4u <= m->mem.size)
    {
        const u8 *p = m->mem.base + a;
        return ((u32)p[0] << 24) | ((u32)p[1] << 16) | ((u32)p[2] << 8) | p[3];
    }
    if (!rt_bus_is_io(m, a)) note_bad(c, m, addr);
    return rt_bus_read32(m, addr);
}

void rc_wr8(cpu_t *c, rt_machine *m, u32 addr, u32 v)
{
    u32 a = addr & 0xFFFFFFu;

    tick();
    if (a < m->mem.size) { m->mem.base[a] = (u8)v; return; }
    if (!rt_bus_is_io(m, a)) note_bad(c, m, addr);
    rt_bus_write8(m, addr, v);
}

void rc_wr16(cpu_t *c, rt_machine *m, u32 addr, u32 v)
{
    u32 a = addr & 0xFFFFFFu;

    tick();
    if (a + 2u <= m->mem.size)
    {
        u8 *p = m->mem.base + a;
        p[0] = (u8)(v >> 8);
        p[1] = (u8)v;
        return;
    }
    if (!rt_bus_is_io(m, a)) note_bad(c, m, addr);
    rt_bus_write16(m, addr, v);
}

void rc_wr32(cpu_t *c, rt_machine *m, u32 addr, u32 v)
{
    u32 a = addr & 0xFFFFFFu;

    tick();
    if (a + 4u <= m->mem.size)
    {
        u8 *p = m->mem.base + a;
        p[0] = (u8)(v >> 24);
        p[1] = (u8)(v >> 16);
        p[2] = (u8)(v >> 8);
        p[3] = (u8)v;
        return;
    }
    if (!rt_bus_is_io(m, a)) note_bad(c, m, addr);
    rt_bus_write32(m, addr, v);
}

/* --- stack ---------------------------------------------------------------------------------
 * A byte push on A7 steps by two, which is why the emitted code uses the sized helpers. */
void rc_push32(cpu_t *c, rt_machine *m, u32 v)
{
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], v);
}

void rc_push16(cpu_t *c, rt_machine *m, u32 v)
{
    c->a[7] -= 2;
    rc_wr16(c, m, c->a[7], v);
}

u32 rc_pop32(cpu_t *c, rt_machine *m)
{
    u32 v = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;
    return v;
}

u32 rc_pop16(cpu_t *c, rt_machine *m)
{
    u32 v = rc_rd16(c, m, c->a[7]);
    c->a[7] += 2;
    return v;
}

/* --- registers as operands ------------------------------------------------------------------
 * rc_d_get/rc_d_set/rc_a_get/rc_a_set/rc_trunc/rc_ext are static in cpu.h: every emitted
 * instruction uses them, so they must not be a call into another translation unit. */

/* --- flags ---------------------------------------------------------------------------------- */

void rc_set_nzvc(cpu_t *c, u32 v, int size)
{
    u32 m = mask_size(size), sign = m ^ (m >> 1);
    if ((v & sign) != 0) c->sr |= RC_N; else c->sr &= (u16)~RC_N;
    if ((v & m) == 0) c->sr |= RC_Z; else c->sr &= (u16)~RC_Z;
    c->sr &= (u16)~(RC_V | RC_C);
}

void rc_set_z(cpu_t *c, int z)
{
    if (z) c->sr |= RC_Z; else c->sr &= (u16)~RC_Z;
}

void rc_flags_add(cpu_t *c, int size, u32 dst, u32 src, u32 res, int keepZ)
{
    u32 m = mask_size(size), sign = m ^ (m >> 1);
    unsigned long long sum;
    int carry;

    dst &= m; src &= m; res &= m;
    sum = (unsigned long long)dst + (unsigned long long)src;
    carry = (sum > (unsigned long long)m);
    if (carry) c->sr |= RC_C; else c->sr &= (u16)~RC_C;
    if (carry) c->sr |= RC_X; else c->sr &= (u16)~RC_X;
    if (((dst ^ res) & (src ^ res) & sign) != 0) c->sr |= RC_V; else c->sr &= (u16)~RC_V;
    if ((res & sign) != 0) c->sr |= RC_N; else c->sr &= (u16)~RC_N;
    if (keepZ ? (((c->sr & RC_Z) != 0) && res == 0) : (res == 0)) c->sr |= RC_Z;
    else c->sr &= (u16)~RC_Z;
}

void rc_flags_sub(cpu_t *c, int size, u32 dst, u32 src, u32 res, int keepZ)
{
    u32 m = mask_size(size), sign = m ^ (m >> 1);
    int borrow;

    dst &= m; src &= m; res &= m;
    borrow = ((unsigned long long)src > (unsigned long long)dst);
    if (borrow) c->sr |= RC_C; else c->sr &= (u16)~RC_C;
    if (borrow) c->sr |= RC_X; else c->sr &= (u16)~RC_X;
    if (((dst ^ src) & (dst ^ res) & sign) != 0) c->sr |= RC_V; else c->sr &= (u16)~RC_V;
    if ((res & sign) != 0) c->sr |= RC_N; else c->sr &= (u16)~RC_N;
    if (keepZ ? (((c->sr & RC_Z) != 0) && res == 0) : (res == 0)) c->sr |= RC_Z;
    else c->sr &= (u16)~RC_Z;
}

/* ADDX / SUBX: same flags as add/sub, except that the extend bit is part of the arithmetic, so
 * the carry has to come from the full dst + src + x (musashi's CFLAG_ADD/SUB), and Z can only be
 * cleared - a multi-precision chain keeps it from an earlier, zero-result byte. */
void rc_flags_addx(cpu_t *c, int size, u32 dst, u32 src, u32 x, u32 res)
{
    u32 m = mask_size(size), sign = m ^ (m >> 1);
    unsigned long long sum;
    int carry;

    dst &= m; src &= m; res &= m;
    sum = (unsigned long long)dst + (unsigned long long)src + x;
    carry = (sum > (unsigned long long)m);
    if (carry) c->sr |= (u16)(RC_C | RC_X); else c->sr &= (u16)~(RC_C | RC_X);
    if (((dst ^ res) & (src ^ res) & sign) != 0) c->sr |= RC_V; else c->sr &= (u16)~RC_V;
    if ((res & sign) != 0) c->sr |= RC_N; else c->sr &= (u16)~RC_N;
    if (res != 0) c->sr &= (u16)~RC_Z;
}

void rc_flags_subx(cpu_t *c, int size, u32 dst, u32 src, u32 x, u32 res)
{
    u32 m = mask_size(size), sign = m ^ (m >> 1);
    int borrow;

    dst &= m; src &= m; res &= m;
    borrow = (((unsigned long long)src + x) > (unsigned long long)dst);
    if (borrow) c->sr |= (u16)(RC_C | RC_X); else c->sr &= (u16)~(RC_C | RC_X);
    if (((dst ^ src) & (dst ^ res) & sign) != 0) c->sr |= RC_V; else c->sr &= (u16)~RC_V;
    if ((res & sign) != 0) c->sr |= RC_N; else c->sr &= (u16)~RC_N;
    if (res != 0) c->sr &= (u16)~RC_Z;
}

/* ABCD / SBCD, following musashi exactly (it is the Phase A machine, and the two must not drift):
 * the half-carry correction is applied to 32-bit unsigned arithmetic, C = X is the decimal carry,
 * and V is whatever musashi's "undefined V" pair leaves - which for ABCD is bit 7 of the result. */
u32 rc_bcd_add(cpu_t *c, u32 dst, u32 src)
{
    u32 res = (src & 0xFu) + (dst & 0xFu) + ((c->sr & RC_X) ? 1u : 0u);
    u32 v = ~res;
    int carry;

    if (res > 9u) res += 6u;
    res += (src & 0xF0u) + (dst & 0xF0u);
    carry = (res > 0x99u);
    if (carry) c->sr |= (u16)(RC_C | RC_X); else c->sr &= (u16)~(RC_C | RC_X);
    if (carry) res -= 0xA0u;
    res &= 0xFFu;
    v &= res;
    if ((v & 0x80u) != 0) c->sr |= RC_V; else c->sr &= (u16)~RC_V;
    if ((res & 0x80u) != 0) c->sr |= RC_N; else c->sr &= (u16)~RC_N;
    if (res != 0) c->sr &= (u16)~RC_Z;
    return res;
}

u32 rc_bcd_sub(cpu_t *c, u32 dst, u32 src)
{
    u32 res = (dst & 0xFu) - (src & 0xFu) - ((c->sr & RC_X) ? 1u : 0u);
    u32 v = ~res;
    int borrow;

    if (res > 9u) res -= 6u;
    res += (dst & 0xF0u) - (src & 0xF0u);
    borrow = (res > 0x99u);
    if (borrow) c->sr |= (u16)(RC_C | RC_X); else c->sr &= (u16)~(RC_C | RC_X);
    if (borrow) res += 0xA0u;
    res &= 0xFFu;
    v &= res;
    if ((v & 0x80u) != 0) c->sr |= RC_V; else c->sr &= (u16)~RC_V;
    if ((res & 0x80u) != 0) c->sr |= RC_N; else c->sr &= (u16)~RC_N;
    if (res != 0) c->sr &= (u16)~RC_Z;
    return res;
}

void rc_cmp(cpu_t *c, int size, u32 dst, u32 src)
{
    u32 save = c->sr;
    rc_flags_sub(c, size, dst, src, rc_trunc(dst, size) - rc_trunc(src, size), 0);
    /* CMP leaves X alone. */
    c->sr = (u16)((c->sr & (u16)~RC_X) | (save & RC_X));
}

int rc_cond(const cpu_t *c, int cc)
{
    int n = (c->sr & RC_N) != 0, z = (c->sr & RC_Z) != 0;
    int v = (c->sr & RC_V) != 0, cv = (c->sr & RC_C) != 0;

    switch (cc & 15)
    {
    case 0:  return 1;                        /* T  */
    case 1:  return 0;                        /* F  */
    case 2:  return !cv && !z;                /* HI */
    case 3:  return cv || z;                  /* LS */
    case 4:  return !cv;                      /* CC */
    case 5:  return cv;                       /* CS */
    case 6:  return !z;                       /* NE */
    case 7:  return z;                        /* EQ */
    case 8:  return !v;                       /* VC */
    case 9:  return v;                        /* VS */
    case 10: return !n;                       /* PL */
    case 11: return n;                        /* MI */
    case 12: return n == v;                   /* GE */
    case 13: return n != v;                   /* LT */
    case 14: return !z && (n == v);           /* GT */
    default: return z || (n != v);            /* LE */
    }
}

/* --- the rest of the instruction set --------------------------------------------------------
 * Same semantics as the interpreter; rc_div* report a divide by zero the way the interpreter
 * refuses it (there is no exception vector model here) and stop the run. */

/* A divide by zero is a symptom, not the bug: the original raises a Zero Divide trap here, so the
 * interesting part is who asked for the division. The 68000 stack holds the call chain's return
 * addresses - print the ones that land inside the image, and the operands. */
static void rc_div_zero(cpu_t *c, rt_machine *m, int reg, const char *what)
{
    int i, n = 0;
    u32 a7 = c->a[7];

    printf("recomp: DIVIDE BY ZERO (%s) at pc %06lX: D%d %08lX / 0\n", what,
           (unsigned long)c->pc, reg, (unsigned long)c->d[reg]);
    printf("recomp:   return addresses on the 68000 stack (A7 %06lX):", (unsigned long)a7);
    for (i = 0; i < 32 && n < 10; i++)
    {
        u32 v = rt_read32(&m->mem, a7 + (u32)i * 4u);
        if (v < m->imageBase || v >= m->imageTop) continue;
        printf(" %06lX", (unsigned long)v);
        n++;
    }
    printf("\nrecomp:   registers: D0-D3 %08lX %08lX %08lX %08lX  A0-A3 %08lX %08lX %08lX %08lX\n",
           (unsigned long)c->d[0], (unsigned long)c->d[1], (unsigned long)c->d[2],
           (unsigned long)c->d[3], (unsigned long)c->a[0], (unsigned long)c->a[1],
           (unsigned long)c->a[2], (unsigned long)c->a[3]);
}

void rc_ext_w(cpu_t *c, int reg)
{
    u32 v = (u32)(s32)(s8)(c->d[reg] & 0xFFu);
    c->d[reg] = (c->d[reg] & 0xFFFF0000u) | (v & 0xFFFFu);
    rc_set_nzvc(c, c->d[reg] & 0xFFFFu, RC_W);
}

void rc_ext_l(cpu_t *c, int reg)
{
    c->d[reg] = (u32)(s32)(s16)(c->d[reg] & 0xFFFFu);
    rc_set_nzvc(c, c->d[reg], RC_L);
}

void rc_mulu(cpu_t *c, int reg, u32 src)
{
    u32 r = (c->d[reg] & 0xFFFFu) * (src & 0xFFFFu);
    c->d[reg] = r;
    rc_set_nzvc(c, r, RC_L);
}

void rc_muls(cpu_t *c, int reg, u32 src)
{
    s32 r = (s32)(s16)(c->d[reg] & 0xFFFFu) * (s32)(s16)(src & 0xFFFFu);
    c->d[reg] = (u32)r;
    rc_set_nzvc(c, (u32)r, RC_L);
}

void rc_divu(cpu_t *c, rt_machine *m, int reg, u32 src)
{
    u32 qu, rem;

    src &= 0xFFFFu;
    if (src == 0)
    {
        rc_div_zero(c, m, reg, "divu");
        m->stop = 1;
        return;
    }
    qu = c->d[reg] / src;
    rem = c->d[reg] % src;
    if (qu > 0xFFFFu)
    {
        c->sr |= RC_V;
        c->sr &= (u16)~RC_C;
        return;
    }
    c->d[reg] = (rem << 16) | qu;
    rc_set_nzvc(c, qu, RC_W);
}

void rc_divs(cpu_t *c, rt_machine *m, int reg, u32 src)
{
    s32 dv = (s32)(s16)(src & 0xFFFFu);
    s32 dividend = (s32)c->d[reg];
    s32 q, rem;

    if (dv == 0)
    {
        rc_div_zero(c, m, reg, "divs");
        m->stop = 1;
        return;
    }
    q = dividend / dv;
    rem = dividend % dv;
    if (q > 32767 || q < -32768)
    {
        c->sr |= RC_V;
        c->sr &= (u16)~RC_C;
        return;
    }
    c->d[reg] = ((u32)(u16)rem << 16) | (u32)(u16)q;
    rc_set_nzvc(c, (u32)q & 0xFFFFu, RC_W);
}

/* AS/LS/ROX/RO, left or right, `count` 0..63. A count of zero clears C and changes nothing else,
 * which is what the interpreter does before it touches the register. */
u32 rc_shift(cpu_t *c, int type, int left, u32 count, u32 value, int size)
{
    u32 mask = mask_size(size);
    u32 sign = mask ^ (mask >> 1);
    u32 v = value & mask;
    u32 signOfInput = v & sign;
    int carry = 0, overflow = 0;
    u32 i;

    count &= 63u;
    if (count == 0)
    {
        c->sr &= (u16)~RC_C;
        return v;
    }
    for (i = 0; i < count; i++)
    {
        if (left)
        {
            int outBit = (v & sign) != 0;
            v = (v << 1) & mask;
            if (type == 2 && (c->sr & RC_X) != 0) v |= 1u;
            if (type == 3 && outBit) v |= 1u;              /* RO feeds the bit back in */
            if (type == 0 && (((v & sign) != 0) != (outBit != 0))) overflow = 1;
            carry = outBit;
        }
        else
        {
            int outBit = (v & 1u) != 0;
            v >>= 1;
            if (type == 0) v |= signOfInput;
            if (type == 2 && (c->sr & RC_X) != 0) v |= sign;
            if (type == 3 && outBit) v |= sign;
            carry = outBit;
        }
        if (type != 3)                     /* RO leaves X alone */
        {
            if (carry) c->sr |= RC_X; else c->sr &= (u16)~RC_X;
        }
    }
    rc_set_nzvc(c, v, size);
    if (carry) c->sr |= RC_C; else c->sr &= (u16)~RC_C;
    if (overflow) c->sr |= RC_V; else c->sr &= (u16)~RC_V;
    return v;
}
/* --- calls ----------------------------------------------------------------------------------
 * Every translated function returns after setting c->pc, so this is the machine's instruction
 * stream: dispatch on the pc, run one function, repeat. A function frame never sits on the C stack,
 * so call depth costs nothing and an rts into the middle of a function (the engine's own opcode
 * tables do that) simply re-enters it at the matching case. */

static int rc_returned;

/* --- the program being run --------------------------------------------------------------------
 * Two engine builds share this address space (docs\antheads.md): the table and the save geometry
 * belong to the build the front end selected, and nothing else in this layer differs. Each
 * generated table describes its own build (rc_engine / ant_engine), and the 1989 one is the
 * default, so every front end that does not switch runs what it always ran. */
const rc_program *rc_active = &rc_engine;

static void rc_stream(cpu_t *c, rt_machine *m);

rc_fn rc_lookup(u32 addr)
{
    const rc_entry *e = rc_active->fns;
    unsigned lo = 0, hi = rc_active->count;

    while (lo < hi)
    {
        unsigned mid = (lo + hi) / 2u;
        if (e[mid].addr == addr) return e[mid].fn;
        if (e[mid].addr < addr) lo = mid + 1u;
        else hi = mid;
    }
    return 0;
}

const rc_entry *rc_containing(u32 addr)
{
    const rc_entry *e = rc_active->fns;
    unsigned lo = 0, hi = rc_active->count;

    while (lo < hi)
    {
        unsigned mid = (lo + hi) / 2u;
        if (e[mid].addr <= addr) lo = mid + 1u;
        else hi = mid;
    }
    if (lo == 0) return 0;
    return addr < e[lo - 1u].end ? &e[lo - 1u] : 0;
}

void rc_ret(cpu_t *c, rt_machine *m)
{
    c->pc = rc_pop32(c, m);
    if (rc_depth > 0) rc_depth--;
    else rc_returned = 1;
}

void rc_call(cpu_t *c, rt_machine *m, u32 addr)
{
    c->pc = addr;
    rc_returned = 0;
    /* rc_step longjmps here when the instruction budget runs out, which is the only way to leave
     * a translated function in the middle: its body is a straight C function. */
    if (setjmp(rc_stopBuf) != 0) { rc_stopJump = 0; return; }
    rc_stopJump = &rc_stopBuf;
    rc_stream(c, m);
    rc_stopJump = 0;
}

static void rc_stream(cpu_t *c, rt_machine *m)
{
    for (;;)
    {
        rc_fn fn;
        const rc_entry *owner;

        /* 0 is the host's "returned" sentinel: the fixture harness and the game's entry both use it. */
        if (c->pc == 0u || m->stop) return;
        tick();
        fn = rc_native_lookup(c->pc);
        if (fn == 0) fn = rc_lookup(c->pc);
        if (fn == 0)
        {
            /* The engine's tables call into the middle of a function: run the owner, which
             * dispatches on c->pc to the instruction at that address. */
            owner = rc_containing(c->pc);
            if (owner != 0) fn = owner->fn;
        }
        if (fn != 0)
        {
            if (rc_entryHook != 0) rc_entryHook(c, m, c->pc);
            if (rc_coverHook != 0)
            {
                const rc_entry *own = rc_containing(c->pc);
                if (own != 0) rc_coverHook((unsigned)(own - rc_active->fns));
            }
            rc_returned = 0;
            fn(c, m);
            /* A harness replay runs one function: it ends with that function's own rts. */
            if (rc_returned && rc_stopOnReturn) return;
            continue;
        }
        if (rc_interpreter != 0)
        {
            rc_interpreter(c, m, c->pc);
            continue;
        }
        /* The host driver owns the seam: it exports the register file and lets the 68000 core
         * continue at c->pc. */
        if (rc_stopOnUnknown) return;
        /* The shipped build has no fallback: an untranslated call is a build error, not a runtime one. */
        printf("recomp: no translation for %06lX\n", (unsigned long)c->pc);
        m->stop = 1;
        return;
    }
}

void rc_bad_entry(cpu_t *c, rt_machine *m)
{
    printf("recomp: %06lX is not an instruction of the function it entered\n", (unsigned long)c->pc);
    m->stop = 1;
}

/* --- hand-written replacements ---------------------------------------------------------------
 * Linear over a table of a few entries, and only once per dispatched function (not per
 * instruction): a handful of compares against a frame that no translated instruction can see. */
rc_fn rc_native_lookup(u32 addr)
{
    const rc_native *n;

    for (n = rc_native_fns; n->fn != 0; n++)
        if (n->addr == addr) return n->fn;
    return 0;
}

/* A library call. The caller has already arranged the arguments on the stack and pushed the return
 * address; this hands the call to the runtime and pops, exactly as the Musashi front end does for
 * the original binary. `lib` may be -1 when A6 does not hold a base the runtime knows (a fixture
 * replay, where nothing was opened): then only the LVO identifies the call, as in the interpreter. */
static u32 os_call(cpu_t *c, rt_machine *m, int lib, s32 lvo)
{
    u32 sp = c->a[7];
    u32 sp0;

    if (rc_stub_host != 0 && rc_stub_host(c, m, lib, lvo)) return c->d[0];
    if (lib < 0)
    {
        if (rc_allow_unmodelled) return 0;
        printf("recomp: library call %ld with no library base (A6=%06lX) at pc %06lX\n",
               (long)lvo, (unsigned long)c->a[6], (unsigned long)c->pc);
        m->stop = 1;
        return 0;
    }
    sp0 = sp;
    m->pc = c->pc;
    return rt_os_call(m, sp0, c->a[0], c->a[1], c->d[0], c->d[1], lib, lvo);
}

void rc_os_call(cpu_t *c, rt_machine *m, int lib, s32 lvo)
{
    u32 sp = c->a[7] - 4;

    rc_wr32(c, m, sp, c->pc);          /* the return address a jsr would push */
    c->a[7] = sp;
    c->d[0] = os_call(c, m, lib, lvo);
    c->a[7] = sp + 4;
}

void rc_os_call_a6(cpu_t *c, rt_machine *m, s32 lvo)
{
    u32 sp = c->a[7];
    int lib = rt_lib_index(m, c->a[6]);

    /* The core jumps into the library and traps there: that entry is a budget slot of its own in
     * the oracle (jmp -> library -> trap), so it must spend one here as well or the vblank cadence
     * drifts by one instruction per library call. The PC is the trap address, so a stop inside the
     * call reports where the interpreter would be standing. The slot costs nothing: the
     * interpreter charges the cycle table entry of the word at that address, and a library entry is
     * inside the zero-filled stub area. */
    c->pc = c->a[6] + (u32)lvo;
    step_budget(c, m, 0, -1);
    if (m->stop) return;

    c->d[0] = os_call(c, m, lib, lvo);
    /* jsr/jmp (d16,A6) reads the return address that is already on the stack, then pops it: this is
     * the library function's own rts, so it unwinds one call frame like rc_ret does. */
    c->pc = rc_rd32(c, m, sp);
    c->a[7] = sp + 4;
    if (rc_depth > 0) rc_depth--;
    else rc_returned = 1;

    /* WaitTOF/WaitBOVP end the frame here: the oracle's run loop sees the request between two
     * instructions and runs the vblank before the next one, so the translated stream must too.
     * A bisection stop lands between the call and that vblank, as it does in the interpreter.
     * the vblank itself is run by the next instruction's budget step (step_budget), not here:
     * the request is a flag the loop consumes, exactly like oracle_run's `if (m->waitFrames)`. */
    if (rc_stopAt > 0 && m->insns >= rc_stopAt)
    {
        m->stop = 1;
        return;
    }
}
