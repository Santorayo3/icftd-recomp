/* fn_0000f02a - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f02a(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0000f02au): goto L_F02A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F02A:
    /* 0000f02a   4  bra 0001013a */
    c->pc = RC_ADDR(0x0000f02au);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001013au);
    return;

}
