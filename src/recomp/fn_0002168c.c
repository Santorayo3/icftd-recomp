/* fn_0002168c - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002168c(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case 0x0002168cu: goto L_2168C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2168C:
    /* 0002168c   4  jmp (00021690) */
    c->pc = 0x0002168cu;
    /* exec.library -198 */
    rc_os_call(c, m, 0, -198);

}
