/* fn_000228b2 - 16 byte(s), 6 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000228b2(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000228b2u): goto L_228B2;
    case RC_ADDR(0x000228b6u): goto L_228B6;
    case RC_ADDR(0x000228b8u): goto L_228B8;
    case RC_ADDR(0x000228bcu): goto L_228BC;
    case RC_ADDR(0x000228beu): goto L_228BE;
    case RC_ADDR(0x000228c0u): goto L_228C0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_228B2:
    /* 000228b2   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x000228b2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_228B6:
    /* 000228b6   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x000228b6u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_228B8:
    /* 000228b8   4  movea.l (8,A7),A1 */
    c->pc = RC_ADDR(0x000228b8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    c->a[1] = t0;

L_228BC:
    /* 000228bc   2  move.b (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x000228bcu);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_228BE:
    /* 000228be   2  bne 000228bc */
    c->pc = RC_ADDR(0x000228beu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_228BC; }

L_228C0:
    /* 000228c0   2  rts */
    c->pc = RC_ADDR(0x000228c0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
