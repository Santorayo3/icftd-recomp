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

static u32 mask_size(int size)
{
    if (size == 4) return 0xFFFFFFFFu;
    if (size == 2) return 0x0000FFFFu;
    return 0x000000FFu;
}

u32 rc_trunc(u32 v, int size)
{
    return v & mask_size(size);
}

u32 rc_ext(u32 v, int size)
{
    if (size == 1) return (u32)(s32)(s8)(v & 0xFFu);
    if (size == 2) return (u32)(s32)(s16)(v & 0xFFFFu);
    return v;
}

/* --- memory ------------------------------------------------------------------------------- */

u32 rc_rd8(cpu_t *c, rt_machine *m, u32 addr)
{
    tick();
    if ((addr & 0xFFFFFFu) >= m->mem.size) note_bad(c, m, addr);
    return rt_read8(&m->mem, addr);
}

u32 rc_rd16(cpu_t *c, rt_machine *m, u32 addr)
{
    tick();
    if ((addr & 0xFFFFFFu) + 1u >= m->mem.size) note_bad(c, m, addr);
    return rt_read16(&m->mem, addr);
}

u32 rc_rd32(cpu_t *c, rt_machine *m, u32 addr)
{
    tick();
    if ((addr & 0xFFFFFFu) + 3u >= m->mem.size) note_bad(c, m, addr);
    return rt_read32(&m->mem, addr);
}

void rc_wr8(cpu_t *c, rt_machine *m, u32 addr, u32 v)
{
    tick();
    if ((addr & 0xFFFFFFu) >= m->mem.size) note_bad(c, m, addr);
    rt_write8(&m->mem, addr, v);
}

void rc_wr16(cpu_t *c, rt_machine *m, u32 addr, u32 v)
{
    tick();
    if ((addr & 0xFFFFFFu) + 1u >= m->mem.size) note_bad(c, m, addr);
    rt_write16(&m->mem, addr, v);
}

void rc_wr32(cpu_t *c, rt_machine *m, u32 addr, u32 v)
{
    tick();
    if ((addr & 0xFFFFFFu) + 3u >= m->mem.size) note_bad(c, m, addr);
    rt_write32(&m->mem, addr, v);
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

/* --- registers as operands ------------------------------------------------------------------ */

u32 rc_d_get(const cpu_t *c, int reg, int size)
{
    return rc_trunc(c->d[reg], size);
}

void rc_d_set(cpu_t *c, int reg, int size, u32 v)
{
    u32 m = mask_size(size);
    c->d[reg] = (c->d[reg] & ~m) | (v & m);
}

u32 rc_a_get(const cpu_t *c, int reg, int size)
{
    /* A word read of An is allowed and takes the low half; the 68000 sign-extends on write. */
    return rc_trunc(c->a[reg], size);
}

void rc_a_set(cpu_t *c, int reg, int size, u32 v)
{
    c->a[reg] = (size == 2) ? rc_ext(v, 2) : rc_trunc(v, size);
}

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
        printf("recomp: divu by zero at pc %06lX\n", (unsigned long)c->pc);
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
        printf("recomp: divs by zero at pc %06lX\n", (unsigned long)c->pc);
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
            if (type == 0 && (((v & sign) != 0) != (outBit != 0))) overflow = 1;
            carry = outBit;
        }
        else
        {
            int outBit = (v & 1u) != 0;
            v >>= 1;
            if (type == 0) v |= signOfInput;
            if (type == 2 && (c->sr & RC_X) != 0) v |= sign;
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
    for (;;)
    {
        rc_fn fn;
        const rc_entry *owner;

        /* 0 is the host's "returned" sentinel: the fixture harness and the game's entry both use it. */
        if (c->pc == 0u || m->stop) return;
        tick();
        fn = rc_lookup(c->pc);
        if (fn == 0)
        {
            /* The engine's tables call into the middle of a function: run the owner, which
             * dispatches on c->pc to the instruction at that address. */
            owner = rc_containing(c->pc);
            if (owner != 0) fn = owner->fn;
        }
        if (fn != 0)
        {
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
    return rt_os_call(m, sp0, c->a[1], lib, lvo);
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

    c->d[0] = os_call(c, m, lib, lvo);
    /* jsr/jmp (d16,A6) reads the return address that is already on the stack, then pops it. */
    c->pc = rc_rd32(c, m, sp);
    c->a[7] = sp + 4;
}
