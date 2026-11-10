/* fn_000218fa - 16 byte(s), 4 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000218fa(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x000218fau: goto L_218FA;
    case 0x000218feu: goto L_218FE;
    case 0x00021902u: goto L_21902;
    case 0x00021906u: goto L_21906;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_218FA:
    /* 000218fa   4  movea.l (4,A7),A1 */
    c->pc = 0x000218fau;
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_218FE:
    /* 000218fe   4  move.l (8,A7),D0 */
    c->pc = 0x000218feu;
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21902:
    /* 00021902   4  movea.l (ffffcba0,A4),A6 */
    c->pc = 0x00021902u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x3460u));
    c->a[6] = t0;

L_21906:
    /* 00021906   4  jmp (fffffe9e,A6) */
    c->pc = 0x00021906u;
    rc_os_call_a6(c, m, -354);
    return;

}
