/* fn_00020698 - 4 byte(s), 2 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020698(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x00020698u): goto L_20698;
    case RC_ADDR(0x0002069au): goto L_2069A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20698:
    /* 00020698   2  unlk A5 */
    c->pc = RC_ADDR(0x00020698u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2069A:
    /* 0002069a   2  rts */
    c->pc = RC_ADDR(0x0002069au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
