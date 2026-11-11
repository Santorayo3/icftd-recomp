/* fn_0000f05a - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f05a(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0000f05au): goto L_F05A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F05A:
    /* 0000f05a   4  bra 0000f6b0 */
    c->pc = RC_ADDR(0x0000f05au);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0000f6b0u);
    return;

}
