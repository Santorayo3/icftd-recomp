/* fn_00021776 - 18 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021776(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case 0x00021776u: goto L_21776;
    case 0x0002177au: goto L_2177A;
    case 0x00021780u: goto L_21780;
    case 0x00021784u: goto L_21784;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21776:
    /* 00021776   4  movea.l (4,A7),A1 */
    c->pc = 0x00021776u;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_2177A:
    /* 0002177a   6  movem.l (SP)+,{ D0 D1 } */
    c->pc = 0x0002177au;
    t3 = (c->a[7] + 0x8u);
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;

L_21780:
    /* 00021780   4  movea.l (ffffcba0,A4),A6 */
    c->pc = 0x00021780u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_21784:
    /* 00021784   4  jmp (fffffefe,A6) */
    c->pc = 0x00021784u;
    rc_os_call_a6(c, m, -258);
    return;

}
