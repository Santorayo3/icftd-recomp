/* fn_00021400 - 12 byte(s), 4 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021400(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021400u): goto L_21400;
    case RC_ADDR(0x00021404u): goto L_21404;
    case RC_ADDR(0x00021406u): goto L_21406;
    case RC_ADDR(0x00021408u): goto L_21408;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21400:
    /* 00021400   4  tst.l (a,A5) */
    c->pc = RC_ADDR(0x00021400u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    rc_set_nzvc(c, t0, RC_L);

L_21404:
    /* 00021404   2  bne 0002140c */
    c->pc = RC_ADDR(0x00021404u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6))
    {
        c->pc = RC_ADDR(0x0002140cu);
        return;
    }

L_21406:
    /* 00021406   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021406u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21408:
    /* 00021408   4  bra 0002136c */
    c->pc = RC_ADDR(0x00021408u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002136cu);
    return;

}
