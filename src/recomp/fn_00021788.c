/* fn_00021788 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021788(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x00021788u: goto L_21788;
    case 0x0002178cu: goto L_2178C;
    case 0x00021790u: goto L_21790;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21788:
    /* 00021788   4  movea.l (4,A7),A1 */
    c->pc = 0x00021788u;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_2178C:
    /* 0002178c   4  movea.l (ffffcba0,A4),A6 */
    c->pc = 0x0002178cu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_21790:
    /* 00021790   4  jmp (fffffef8,A6) */
    c->pc = 0x00021790u;
    rc_os_call_a6(c, m, -264);
    return;

}
