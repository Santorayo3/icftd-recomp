/* fn_000014ee - 4 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000014ee(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x000014eeu): goto L_14EE;
    case RC_ADDR(0x000014f0u): goto L_14F0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14EE:
    /* 000014ee   2  unlk A5 */
    c->pc = RC_ADDR(0x000014eeu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14F0:
    /* 000014f0   2  rts */
    c->pc = RC_ADDR(0x000014f0u);
    rc_ret(c, m);
    return;

}
