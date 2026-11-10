/* fn_00002cc4 - 4 byte(s), 1 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00002cc4(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case 0x00002cc4u: goto L_2CC4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2CC4:
    /* 00002cc4   4  move.w (0,A0,D0.w),-(A1) */
    c->pc = 0x00002cc4u;
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] -= 2u;
    rc_wr16(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_W);

    /* falls through into 00002cc8 */
    c->pc = 0x00002cc8u;
    return;
}
