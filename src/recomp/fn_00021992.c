/* fn_00021992 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00021992(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x00021992u: goto L_21992;
    case 0x00021996u: goto L_21996;
    case 0x0002199au: goto L_2199A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21992:
    /* 00021992   4  movea.l (4,A7),A0 */
    c->pc = 0x00021992u;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_21996:
    /* 00021996   4  movea.l (ffff8570,A4),A6 */
    c->pc = 0x00021996u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x7a90u));
    c->a[6] = t0;

L_2199A:
    /* 0002199a   4  jmp (ffffffe2,A6) */
    c->pc = 0x0002199au;
    rc_os_call_a6(c, m, -30);
    return;

}
