/* fn_00021496 - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021496(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case 0x00021496u: goto L_21496;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21496:
    /* 00021496   4  jmp (0002149a) */
    c->pc = 0x00021496u;
    c->pc = 0x0002149au;
    return;

}
