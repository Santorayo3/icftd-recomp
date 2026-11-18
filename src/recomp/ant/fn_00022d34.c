/* fn_00022d34 - 6 byte(s), 2 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022d34(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00022d34u): goto L_22D34;
    case RC_ADDR(0x00022d38u): goto L_22D38;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22D34:
    /* 00022d34   4  move.w #7fff,D0 */
    c->pc = RC_ADDR(0x00022d34u);
    rc_step(c, m, 8);
    t0 = 0x00007fffu;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22D38:
    /* 00022d38   2  bra 00022d3e */
    c->pc = RC_ADDR(0x00022d38u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00022d3eu);
    return;

}
