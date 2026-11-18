/* fn_0001089a - 4 byte(s), 1 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001089a(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0001089au): goto L_1089A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1089A:
    /* 0001089a   4  bra 00011a10 */
    c->pc = RC_ADDR(0x0001089au);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00011a10u);
    return;

}
