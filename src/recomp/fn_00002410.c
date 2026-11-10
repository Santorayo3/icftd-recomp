/* fn_00002410 - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00002410(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x00002410u: goto L_2410;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2410:
    /* 00002410   4  move.l -(A4),(0,A2) */
    c->pc = 0x00002410u;
    c->a[4] -= 4u;
    t0 = rc_rd32(c, m, c->a[4]);
    rc_wr32(c, m, (c->a[2] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_L);

    /* falls through into 00002414 */
    c->pc = 0x00002414u;
    return;
}
