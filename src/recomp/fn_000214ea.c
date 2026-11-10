/* fn_000214ea - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000214ea(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case 0x000214eau: goto L_214EA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_214EA:
    /* 000214ea   4  jmp (000214ee) */
    c->pc = 0x000214eau;
    /* exec.library -414 */
    rc_os_call(c, m, 0, -414);

}
