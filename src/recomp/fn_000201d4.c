/* fn_000201d4 - 8 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000201d4(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x000201d4u): goto L_201D4;
    case RC_ADDR(0x000201d8u): goto L_201D8;
    case RC_ADDR(0x000201dau): goto L_201DA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_201D4:
    /* 000201d4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000201d4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_201D8:
    /* 000201d8   2  unlk A5 */
    c->pc = RC_ADDR(0x000201d8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_201DA:
    /* 000201da   2  rts */
    c->pc = RC_ADDR(0x000201dau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
