/* fn_000189d2 - 26 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000189d2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000189d2u): goto L_189D2;
    case RC_ADDR(0x000189d6u): goto L_189D6;
    case RC_ADDR(0x000189dcu): goto L_189DC;
    case RC_ADDR(0x000189e2u): goto L_189E2;
    case RC_ADDR(0x000189e8u): goto L_189E8;
    case RC_ADDR(0x000189eau): goto L_189EA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_189D2:
    /* 000189d2   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x000189d2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_189D6:
    /* 000189d6   6  move.l (ffffd340,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x000189d6u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_189DC:
    /* 000189dc   6  move.l (ffffd33c,A4),(ffffd340,A4) */
    c->pc = RC_ADDR(0x000189dcu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    rc_wr32(c, m, (c->a[4] - 0x2cc0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_189E2:
    /* 000189e2   6  move.l (fffffffc,A5),(ffffd33c,A4) */
    c->pc = RC_ADDR(0x000189e2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_wr32(c, m, (c->a[4] - 0x2cc4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_189E8:
    /* 000189e8   2  unlk A5 */
    c->pc = RC_ADDR(0x000189e8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_189EA:
    /* 000189ea   2  rts */
    c->pc = RC_ADDR(0x000189eau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
