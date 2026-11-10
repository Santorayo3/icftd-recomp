/* fn_0002188c - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002188c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0002188cu: goto L_2188C;
    case 0x00021890u: goto L_21890;
    case 0x00021894u: goto L_21894;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2188C:
    /* 0002188c   4  movea.l (4,A7),A0 */
    c->pc = 0x0002188cu;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_21890:
    /* 00021890   4  movea.l (ffffcba0,A4),A6 */
    c->pc = 0x00021890u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_21894:
    /* 00021894   4  jmp (ffffff34,A6) */
    c->pc = 0x00021894u;
    rc_os_call_a6(c, m, -204);
    return;

}
