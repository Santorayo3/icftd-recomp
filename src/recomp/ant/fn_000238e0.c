/* fn_000238e0 - 18 byte(s), 4 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000238e0(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000238e0u): goto L_238E0;
    case RC_ADDR(0x000238e6u): goto L_238E6;
    case RC_ADDR(0x000238eau): goto L_238EA;
    case RC_ADDR(0x000238eeu): goto L_238EE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_238E0:
    /* 000238e0   6  movem.l (SP)+,{ A0 A1 } */
    c->pc = RC_ADDR(0x000238e0u);
    rc_step(c, m, 16);
    t3 = (c->a[7] + 0x4u);
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;

L_238E6:
    /* 000238e6   4  move.l (c,A7),D0 */
    c->pc = RC_ADDR(0x000238e6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_238EA:
    /* 000238ea   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x000238eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_238EE:
    /* 000238ee   4  jmp (fffffee6,A6) */
    c->pc = RC_ADDR(0x000238eeu);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -282);
    return;

}
