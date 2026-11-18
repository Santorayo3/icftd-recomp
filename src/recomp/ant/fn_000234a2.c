/* fn_000234a2 - 12 byte(s), 3 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000234a2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000234a2u): goto L_234A2;
    case RC_ADDR(0x000234a6u): goto L_234A6;
    case RC_ADDR(0x000234aau): goto L_234AA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_234A2:
    /* 000234a2   4  move.l (4,A7),D1 */
    c->pc = RC_ADDR(0x000234a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_234A6:
    /* 000234a6   4  movea.l (4528,A4),A6 */
    c->pc = RC_ADDR(0x000234a6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4528u));
    c->a[6] = t0;

L_234AA:
    /* 000234aa   4  jmp (ffffffdc,A6) */
    c->pc = RC_ADDR(0x000234aau);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -36);
    return;

}
