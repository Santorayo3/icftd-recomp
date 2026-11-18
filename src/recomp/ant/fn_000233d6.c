/* fn_000233d6 - 6 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000233d6(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x000233d6u): goto L_233D6;
    case RC_ADDR(0x000233d8u): goto L_233D8;
    case RC_ADDR(0x000233dau): goto L_233DA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_233D6:
    /* 000233d6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000233d6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_233D8:
    /* 000233d8   2  frestore (A7)+ */
    c->pc = RC_ADDR(0x000233d8u);
    rc_step(c, m, 0);
    rc_line_f(c, m, "frestore");
    return;

L_233DA:
    /* 000233da   2  rte */
    c->pc = RC_ADDR(0x000233dau);
    rc_step(c, m, 20);
    c->sr = (u16)rc_pop16(c, m);
    c->pc = rc_pop32(c, m);
    return;

}
