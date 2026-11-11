/* fn_0000b314 - 8 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b314(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0000b314u): goto L_B314;
    case RC_ADDR(0x0000b318u): goto L_B318;
    case RC_ADDR(0x0000b31au): goto L_B31A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B314:
    /* 0000b314   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b314u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B318:
    /* 0000b318   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b318u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B31A:
    /* 0000b31a   2  rts */
    c->pc = RC_ADDR(0x0000b31au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
