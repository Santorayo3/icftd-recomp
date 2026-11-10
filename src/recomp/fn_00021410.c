/* fn_00021410 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021410(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x00021410u: goto L_21410;
    case 0x00021414u: goto L_21414;
    case 0x00021418u: goto L_21418;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21410:
    /* 00021410   4  move.l (4,A7),D1 */
    c->pc = 0x00021410u;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21414:
    /* 00021414   4  movea.l (3af8,A4),A6 */
    c->pc = 0x00021414u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af8u));
    c->a[6] = t0;

L_21418:
    /* 00021418   4  jmp (ffffff82,A6) */
    c->pc = 0x00021418u;
    rc_os_call_a6(c, m, -126);
    return;

}
