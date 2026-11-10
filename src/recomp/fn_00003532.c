/* fn_00003532 - 12 byte(s), 5 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00003532(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case 0x00003532u: goto L_3532;
    case 0x00003536u: goto L_3536;
    case 0x00003538u: goto L_3538;
    case 0x0000353au: goto L_353A;
    case 0x0000353cu: goto L_353C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3532:
    /* 00003532   4  link.w A5,#0 */
    c->pc = 0x00003532u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_3536:
    /* 00003536   2  bsr 000034bc */
    c->pc = 0x00003536u;
    rc_push32(c, m, 0x00003538u);
    rc_depth++;
    c->pc = 0x000034bcu;
    return;

L_3538:
    /* 00003538   2  bsr 0000350a */
    c->pc = 0x00003538u;
    rc_push32(c, m, 0x0000353au);
    rc_depth++;
    c->pc = 0x0000350au;
    return;

L_353A:
    /* 0000353a   2  unlk A5 */
    c->pc = 0x0000353au;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_353C:
    /* 0000353c   2  rts */
    c->pc = 0x0000353cu;
    rc_ret(c, m);
    return;

}
