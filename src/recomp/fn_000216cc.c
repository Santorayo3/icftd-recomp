/* fn_000216cc - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000216cc(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case 0x000216ccu: goto L_216CC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_216CC:
    /* 000216cc   4  jmp (000216d0) */
    c->pc = 0x000216ccu;
    /* exec.library -210 */
    rc_os_call(c, m, 0, -210);

}
