/* fn_000239d6 - 20 byte(s), 5 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000239d6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000239d6u): goto L_239D6;
    case RC_ADDR(0x000239dau): goto L_239DA;
    case RC_ADDR(0x000239deu): goto L_239DE;
    case RC_ADDR(0x000239e2u): goto L_239E2;
    case RC_ADDR(0x000239e6u): goto L_239E6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_239D6:
    /* 000239d6   4  movea.l (4,A7),A1 */
    c->pc = RC_ADDR(0x000239d6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[1] = t0;

L_239DA:
    /* 000239da   4  movea.l (8,A7),A0 */
    c->pc = RC_ADDR(0x000239dau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    c->a[0] = t0;

L_239DE:
    /* 000239de   4  move.l (c,A7),D0 */
    c->pc = RC_ADDR(0x000239deu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_239E2:
    /* 000239e2   4  movea.l (ffffd324,A4),A6 */
    c->pc = RC_ADDR(0x000239e2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cdcu));
    c->a[6] = t0;

L_239E6:
    /* 000239e6   4  jmp (ffffffca,A6) */
    c->pc = RC_ADDR(0x000239e6u);
    rc_step(c, m, 10);
    rc_os_call_a6(c, m, -54);
    return;

}
