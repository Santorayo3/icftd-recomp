/* fn_00021488 - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021488(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case 0x00021488u: goto L_21488;
    case 0x0002148eu: goto L_2148E;
    case 0x00021492u: goto L_21492;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21488:
    /* 00021488   6  movem.l (SP)+,{ D1 D2 D3 } */
    c->pc = 0x00021488u;
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;

L_2148E:
    /* 0002148e   4  movea.l (3af8,A4),A6 */
    c->pc = 0x0002148eu;
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af8u));
    c->a[6] = t0;

L_21492:
    /* 00021492   4  jmp (ffffffbe,A6) */
    c->pc = 0x00021492u;
    rc_os_call_a6(c, m, -66);
    return;

}
