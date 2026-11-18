/* fn_0002136c - 8 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002136c(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002136cu): goto L_2136C;
    case RC_ADDR(0x00021370u): goto L_21370;
    case RC_ADDR(0x00021372u): goto L_21372;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2136C:
    /* 0002136c   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x0002136cu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_21370:
    /* 00021370   2  unlk A5 */
    c->pc = RC_ADDR(0x00021370u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21372:
    /* 00021372   2  rts */
    c->pc = RC_ADDR(0x00021372u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
