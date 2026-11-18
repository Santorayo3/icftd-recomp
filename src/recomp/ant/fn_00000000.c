/* fn_00000000 - 6 byte(s), 1 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00000000(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00000000u): goto L_0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_0:
    /* 00000000   6  jmp (000229ba).l */
    c->pc = RC_ADDR(0x00000000u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000229bau);
    return;

}
