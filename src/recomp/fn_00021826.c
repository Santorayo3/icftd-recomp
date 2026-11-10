/* fn_00021826 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021826(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x00021826u: goto L_21826;
    case 0x0002182au: goto L_2182A;
    case 0x0002182eu: goto L_2182E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21826:
    /* 00021826   4  movea.l (4,A7),A0 */
    c->pc = 0x00021826u;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_2182A:
    /* 0002182a   4  movea.l (ffffcba0,A4),A6 */
    c->pc = 0x0002182au;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_2182E:
    /* 0002182e   4  jmp (fffffde4,A6) */
    c->pc = 0x0002182eu;
    rc_os_call_a6(c, m, -540);
    return;

}
