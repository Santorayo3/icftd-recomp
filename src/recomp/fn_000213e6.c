/* fn_000213e6 - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000213e6(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case 0x000213e6u: goto L_213E6;
    case 0x000213eau: goto L_213EA;
    case 0x000213f0u: goto L_213F0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_213E6:
    /* 000213e6   4  movea.l (4,A7),A6 */
    c->pc = 0x000213e6u;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[6] = t0;

L_213EA:
    /* 000213ea   6  movem.l (SP)+,{ D0 A1 } */
    c->pc = 0x000213eau;
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_213F0:
    /* 000213f0   4  jmp (fffffffa,A6) */
    c->pc = 0x000213f0u;
    rc_os_call_a6(c, m, -6);
    return;

}
