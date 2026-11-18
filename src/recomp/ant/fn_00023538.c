/* fn_00023538 - 4 byte(s), 1 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023538(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00023538u): goto L_23538;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23538:
    /* 00023538   4  jmp (0002353c) */
    c->pc = RC_ADDR(0x00023538u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002353cu);
    return;

}
