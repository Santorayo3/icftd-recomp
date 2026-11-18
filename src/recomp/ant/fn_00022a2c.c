/* fn_00022a2c - 8 byte(s), 2 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022a2c(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00022a2cu): goto L_22A2C;
    case RC_ADDR(0x00022a32u): goto L_22A32;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22A2C:
    /* 00022a2c   6  lea (0002baf6).l,A4 */
    c->pc = RC_ADDR(0x00022a2cu);
    rc_step(c, m, 12);
    c->a[4] = RC_ADDR(0x0002baf6u);

L_22A32:
    /* 00022a32   2  rts */
    c->pc = RC_ADDR(0x00022a32u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
