/* fn_0002259c - 30 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002259c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0002259cu): goto L_2259C;
    case RC_ADDR(0x000225a0u): goto L_225A0;
    case RC_ADDR(0x000225a4u): goto L_225A4;
    case RC_ADDR(0x000225a8u): goto L_225A8;
    case RC_ADDR(0x000225acu): goto L_225AC;
    case RC_ADDR(0x000225aeu): goto L_225AE;
    case RC_ADDR(0x000225b0u): goto L_225B0;
    case RC_ADDR(0x000225b2u): goto L_225B2;
    case RC_ADDR(0x000225b6u): goto L_225B6;
    case RC_ADDR(0x000225b8u): goto L_225B8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2259C:
    /* 0002259c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0002259cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_225A0:
    /* 000225a0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000225a0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_225A4:
    /* 000225a4   4  move.l (c,A5),D0 */
    c->pc = RC_ADDR(0x000225a4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_225A8:
    /* 000225a8   4  movea.l (34b2,A4),A1 */
    c->pc = RC_ADDR(0x000225a8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x34b2u));
    c->a[1] = t0;

L_225AC:
    /* 000225ac   2  move.b (A1)+,(A0)+ */
    c->pc = RC_ADDR(0x000225acu);
    rc_step(c, m, 12);
    t3 = c->a[1];
    c->a[1] += 1u;
    t0 = rc_rd8(c, m, t3);
    t3 = c->a[0];
    c->a[0] += 1u;
    rc_wr8(c, m, t3, t0);
    rc_set_nzvc(c, t0, RC_B);

L_225AE:
    /* 000225ae   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x000225aeu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_225B0:
    /* 000225b0   2  bne 000225ac */
    c->pc = RC_ADDR(0x000225b0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_225AC; }

L_225B2:
    /* 000225b2   4  move.l A1,(34b2,A4) */
    c->pc = RC_ADDR(0x000225b2u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x34b2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_225B6:
    /* 000225b6   2  unlk A5 */
    c->pc = RC_ADDR(0x000225b6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_225B8:
    /* 000225b8   2  rts */
    c->pc = RC_ADDR(0x000225b8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
