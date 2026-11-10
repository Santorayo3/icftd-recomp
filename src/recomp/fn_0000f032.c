/* fn_0000f032 - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f032(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case 0x0000f032u: goto L_F032;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F032:
    /* 0000f032   4  bra 0000f0fe */
    c->pc = 0x0000f032u;
    c->pc = 0x0000f0feu;
    return;

}
