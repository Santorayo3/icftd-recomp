/* fn_0000b22c - 8 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b22c(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0000b22cu): goto L_B22C;
    case RC_ADDR(0x0000b230u): goto L_B230;
    case RC_ADDR(0x0000b232u): goto L_B232;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B22C:
    /* 0000b22c   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b22cu);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B230:
    /* 0000b230   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b230u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B232:
    /* 0000b232   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x0000b232u);
    rc_ret(c, m);
    return;

}
