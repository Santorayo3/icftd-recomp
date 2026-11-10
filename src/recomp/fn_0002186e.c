/* fn_0002186e - 18 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002186e(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002186eu): goto L_2186E;
    case RC_ADDR(0x00021874u): goto L_21874;
    case RC_ADDR(0x00021878u): goto L_21878;
    case RC_ADDR(0x0002187cu): goto L_2187C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2186E:
    /* 0002186e   6  movem.l (SP)+,{ A0 A1 } */
    c->pc = RC_ADDR(0x0002186eu);
    rc_step(c, m);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_21874:
    /* 00021874   4  move.l (c,A7),D0 */
    c->pc = RC_ADDR(0x00021874u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[7] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21878:
    /* 00021878   4  movea.l (ffffcba0,A4),A6 */
    c->pc = RC_ADDR(0x00021878u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_2187C:
    /* 0002187c   4  jmp (fffffe2c,A6) */
    c->pc = RC_ADDR(0x0002187cu);
    rc_step(c, m);
    rc_os_call_a6(c, m, -468);
    return;

}
