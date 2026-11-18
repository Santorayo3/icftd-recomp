/* fn_0002208a - 8 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002208a(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002208au): goto L_2208A;
    case RC_ADDR(0x0002208eu): goto L_2208E;
    case RC_ADDR(0x00022090u): goto L_22090;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2208A:
    /* 0002208a   4  movem.l (SP)+,{ D4 D5 A2 } */
    c->pc = RC_ADDR(0x0002208au);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_2208E:
    /* 0002208e   2  unlk A5 */
    c->pc = RC_ADDR(0x0002208eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22090:
    /* 00022090   2  rts */
    c->pc = RC_ADDR(0x00022090u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
