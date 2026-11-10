/* fn_00021850 - 18 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021850(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case 0x00021850u: goto L_21850;
    case 0x00021854u: goto L_21854;
    case 0x0002185au: goto L_2185A;
    case 0x0002185eu: goto L_2185E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21850:
    /* 00021850   4  movea.l (4,A7),A0 */
    c->pc = 0x00021850u;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_21854:
    /* 00021854   6  movem.l (SP)+,{ D0 D1 D2 } */
    c->pc = 0x00021854u;
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;

L_2185A:
    /* 0002185a   4  movea.l (ffffcba0,A4),A6 */
    c->pc = 0x0002185au;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_2185E:
    /* 0002185e   4  jmp (fffffe7a,A6) */
    c->pc = 0x0002185eu;
    rc_os_call_a6(c, m, -390);
    return;

}
