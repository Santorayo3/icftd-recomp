/* fn_000108ca - 4 byte(s), 1 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000108ca(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x000108cau): goto L_108CA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_108CA:
    /* 000108ca   4  bra 000108d6 */
    c->pc = RC_ADDR(0x000108cau);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000108d6u);
    return;

}
