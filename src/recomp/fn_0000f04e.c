/* fn_0000f04e - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f04e(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0000f04eu): goto L_F04E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F04E:
    /* 0000f04e   4  bra 0000f5a6 */
    c->pc = RC_ADDR(0x0000f04eu);
    c->pc = RC_ADDR(0x0000f5a6u);
    return;

}
