/* fn_000216b4 - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000216b4(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x000216b4u): goto L_216B4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_216B4:
    /* 000216b4   4  jmp (000216b8) */
    c->pc = RC_ADDR(0x000216b4u);
    /* exec.library -294 */
    rc_os_call(c, m, 0, -294);

}
