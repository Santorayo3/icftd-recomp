/* fn_0001f1e8 - 8 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f1e8(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case 0x0001f1e8u: goto L_1F1E8;
    case 0x0001f1ecu: goto L_1F1EC;
    case 0x0001f1eeu: goto L_1F1EE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F1E8:
    /* 0001f1e8   4  link.w A5,#0 */
    c->pc = 0x0001f1e8u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F1EC:
    /* 0001f1ec   2  unlk A5 */
    c->pc = 0x0001f1ecu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F1EE:
    /* 0001f1ee   2  rts */
    c->pc = 0x0001f1eeu;
    rc_ret(c, m);
    return;

}
