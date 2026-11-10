/* fn_0000f03a - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f03a(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case 0x0000f03au: goto L_F03A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F03A:
    /* 0000f03a   4  bra 0000f160 */
    c->pc = 0x0000f03au;
    c->pc = 0x0000f160u;
    return;

}
