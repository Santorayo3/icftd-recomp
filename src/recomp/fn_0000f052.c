/* fn_0000f052 - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f052(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0000f052u): goto L_F052;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F052:
    /* 0000f052   4  bra 0000f608 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000f052u);
    c->pc = RC_ADDR(0x0000f608u);
    return;

}
