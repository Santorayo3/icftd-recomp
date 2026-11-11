/* fn_000214a6 - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000214a6(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x000214a6u): goto L_214A6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_214A6:
    /* 000214a6   4  jmp (000214aa) */
    c->pc = RC_ADDR(0x000214a6u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000214aau);
    return;

}
