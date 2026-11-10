/* fn_000218b2 - 18 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000218b2(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case 0x000218b2u: goto L_218B2;
    case 0x000218b6u: goto L_218B6;
    case 0x000218bcu: goto L_218BC;
    case 0x000218c0u: goto L_218C0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_218B2:
    /* 000218b2   4  movea.l (4,A7),A1 */
    c->pc = 0x000218b2u;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_218B6:
    /* 000218b6   6  movem.l (SP)+,{ D0 D1 } */
    c->pc = 0x000218b6u;
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;

L_218BC:
    /* 000218bc   4  movea.l (ffffcba0,A4),A6 */
    c->pc = 0x000218bcu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_218C0:
    /* 000218c0   4  jmp (ffffff10,A6) */
    c->pc = 0x000218c0u;
    rc_os_call_a6(c, m, -240);
    return;

}
