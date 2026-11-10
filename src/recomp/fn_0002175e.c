/* fn_0002175e - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002175e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0002175eu: goto L_2175E;
    case 0x00021762u: goto L_21762;
    case 0x00021766u: goto L_21766;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2175E:
    /* 0002175e   4  movea.l (4,A7),A1 */
    c->pc = 0x0002175eu;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_21762:
    /* 00021762   4  movea.l (3af4,A4),A6 */
    c->pc = 0x00021762u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_21766:
    /* 00021766   4  jmp (fffffe86,A6) */
    c->pc = 0x00021766u;
    rc_os_call_a6(c, m, -378);
    return;

}
