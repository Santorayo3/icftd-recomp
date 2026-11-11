/* fn_0001f1e0 - 8 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f1e0(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0001f1e0u): goto L_1F1E0;
    case RC_ADDR(0x0001f1e4u): goto L_1F1E4;
    case RC_ADDR(0x0001f1e6u): goto L_1F1E6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F1E0:
    /* 0001f1e0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f1e0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F1E4:
    /* 0001f1e4   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f1e4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F1E6:
    /* 0001f1e6   2  rts */
    c->pc = RC_ADDR(0x0001f1e6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
