/* fn_000216e0 - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000216e0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x000216e0u: goto L_216E0;
    case 0x000216e4u: goto L_216E4;
    case 0x000216e8u: goto L_216E8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_216E0:
    /* 000216e0   4  move.l (4,A7),D0 */
    c->pc = 0x000216e0u;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_216E4:
    /* 000216e4   4  movea.l (3af4,A4),A6 */
    c->pc = 0x000216e4u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af4u));
    c->a[6] = t0;

L_216E8:
    /* 000216e8   4  jmp (fffffeb0,A6) */
    c->pc = 0x000216e8u;
    rc_os_call_a6(c, m, -336);
    return;

}
