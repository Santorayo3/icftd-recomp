/* fn_0002140c - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002140c(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0002140cu): goto L_2140C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2140C:
    /* 0002140c   4  jmp (00021410) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002140cu);
    c->pc = RC_ADDR(0x00021410u);
    return;

}
