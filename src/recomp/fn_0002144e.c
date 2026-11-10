/* fn_0002144e - 14 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002144e(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case 0x0002144eu: goto L_2144E;
    case 0x00021454u: goto L_21454;
    case 0x00021458u: goto L_21458;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2144E:
    /* 0002144e   6  movem.l (SP)+,{ D1 D2 } */
    c->pc = 0x0002144eu;
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;

L_21454:
    /* 00021454   4  movea.l (3af8,A4),A6 */
    c->pc = 0x00021454u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af8u));
    c->a[6] = t0;

L_21458:
    /* 00021458   4  jmp (ffffffac,A6) */
    c->pc = 0x00021458u;
    rc_os_call_a6(c, m, -84);
    return;

}
