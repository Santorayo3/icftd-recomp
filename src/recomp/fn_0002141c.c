/* fn_0002141c - 12 byte(s), 3 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0002141c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0002141cu: goto L_2141C;
    case 0x00021420u: goto L_21420;
    case 0x00021424u: goto L_21424;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2141C:
    /* 0002141c   4  move.l (4,A7),D1 */
    c->pc = 0x0002141cu;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21420:
    /* 00021420   4  movea.l (3af8,A4),A6 */
    c->pc = 0x00021420u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x3af8u));
    c->a[6] = t0;

L_21424:
    /* 00021424   4  jmp (ffffff40,A6) */
    c->pc = 0x00021424u;
    rc_os_call_a6(c, m, -192);
    return;

}
