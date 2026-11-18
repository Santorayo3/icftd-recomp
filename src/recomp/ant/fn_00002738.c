/* fn_00002738 - 4 byte(s), 1 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00002738(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00002738u): goto L_2738;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2738:
    /* 00002738   4  jsr (ffff8062,A4) */
    c->pc = RC_ADDR(0x00002738u);
    rc_step(c, m, 18);
    /* vector 16 */
    rc_push32(c, m, RC_ADDR(0x0000273cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b58u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00004852u);
    return;

    /* falls through into 0000273c */
    c->pc = RC_ADDR(0x0000273cu);
    return;
}
