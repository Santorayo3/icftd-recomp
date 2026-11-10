/* fn_0000b126 - 8 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000b126(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case 0x0000b126u: goto L_B126;
    case 0x0000b12au: goto L_B12A;
    case 0x0000b12cu: goto L_B12C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B126:
    /* 0000b126   4  link.w A5,#0 */
    c->pc = 0x0000b126u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B12A:
    /* 0000b12a   2  unlk A5 */
    c->pc = 0x0000b12au;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B12C:
    /* 0000b12c   2  rts */
    c->pc = 0x0000b12cu;
    rc_ret(c, m);
    return;

}
