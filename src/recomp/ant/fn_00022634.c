/* fn_00022634 - 76 byte(s), 27 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022634(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00022634u): goto L_22634;
    case RC_ADDR(0x00022638u): goto L_22638;
    case RC_ADDR(0x0002263cu): goto L_2263C;
    case RC_ADDR(0x00022640u): goto L_22640;
    case RC_ADDR(0x00022644u): goto L_22644;
    case RC_ADDR(0x00022646u): goto L_22646;
    case RC_ADDR(0x00022648u): goto L_22648;
    case RC_ADDR(0x0002264au): goto L_2264A;
    case RC_ADDR(0x0002264cu): goto L_2264C;
    case RC_ADDR(0x0002264eu): goto L_2264E;
    case RC_ADDR(0x00022650u): goto L_22650;
    case RC_ADDR(0x00022654u): goto L_22654;
    case RC_ADDR(0x00022656u): goto L_22656;
    case RC_ADDR(0x00022658u): goto L_22658;
    case RC_ADDR(0x0002265cu): goto L_2265C;
    case RC_ADDR(0x0002265eu): goto L_2265E;
    case RC_ADDR(0x00022662u): goto L_22662;
    case RC_ADDR(0x00022664u): goto L_22664;
    case RC_ADDR(0x00022668u): goto L_22668;
    case RC_ADDR(0x0002266au): goto L_2266A;
    case RC_ADDR(0x0002266cu): goto L_2266C;
    case RC_ADDR(0x00022670u): goto L_22670;
    case RC_ADDR(0x00022672u): goto L_22672;
    case RC_ADDR(0x00022676u): goto L_22676;
    case RC_ADDR(0x00022678u): goto L_22678;
    case RC_ADDR(0x0002267cu): goto L_2267C;
    case RC_ADDR(0x0002267eu): goto L_2267E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22634:
    /* 00022634   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00022634u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_22638:
    /* 00022638   4  move.w (4506,A4),D0 */
    c->pc = RC_ADDR(0x00022638u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x4506u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2263C:
    /* 0002263c   4  movea.l (4514,A4),A0 */
    c->pc = RC_ADDR(0x0002263cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4514u));
    c->a[0] = t0;

L_22640:
    /* 00022640   4  cmpi.w #18,D0 */
    c->pc = RC_ADDR(0x00022640u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t0, 0x00000018u);

L_22644:
    /* 00022644   2  bgt 00022658 */
    c->pc = RC_ADDR(0x00022644u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_22658;

L_22646:
    /* 00022646   2  clr.l D1 */
    c->pc = RC_ADDR(0x00022646u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22648:
    /* 00022648   2  move.b (A0)+,D1 */
    c->pc = RC_ADDR(0x00022648u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 1u;
    t0 = rc_rd8(c, m, t3);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2264A:
    /* 0002264a   2  moveq #18,D2 */
    c->pc = RC_ADDR(0x0002264au);
    rc_step(c, m, 4);
    c->d[2] = 0x00000018u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_2264C:
    /* 0002264c   2  sub.w D0,D2 */
    c->pc = RC_ADDR(0x0002264cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 2, RC_W, t2);

L_2264E:
    /* 0002264e   2  lsl.l D2,D1 */
    c->pc = RC_ADDR(0x0002264eu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 1, 1, (c->d[2] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_22650:
    /* 00022650   4  or.l D1,(4508,A4) */
    c->pc = RC_ADDR(0x00022650u);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x4508u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 | rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_L);

L_22654:
    /* 00022654   2  addq.w #8,D0 */
    c->pc = RC_ADDR(0x00022654u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_22656:
    /* 00022656   2  bra 00022640 */
    c->pc = RC_ADDR(0x00022656u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22640;

L_22658:
    /* 00022658   4  move.l A0,(4514,A4) */
    c->pc = RC_ADDR(0x00022658u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x4514u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2265C:
    /* 0002265c   2  clr.l D2 */
    c->pc = RC_ADDR(0x0002265cu);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2265E:
    /* 0002265e   4  move.w (354a,A4),D2 */
    c->pc = RC_ADDR(0x0002265eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x354au));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_22662:
    /* 00022662   2  sub.w D2,D0 */
    c->pc = RC_ADDR(0x00022662u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_22664:
    /* 00022664   4  move.w D0,(4506,A4) */
    c->pc = RC_ADDR(0x00022664u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x4506u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_22668:
    /* 00022668   2  moveq #20,D1 */
    c->pc = RC_ADDR(0x00022668u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000020u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2266A:
    /* 0002266a   2  sub.w D2,D1 */
    c->pc = RC_ADDR(0x0002266au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_2266C:
    /* 0002266c   4  move.l (4508,A4),D0 */
    c->pc = RC_ADDR(0x0002266cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4508u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22670:
    /* 00022670   2  lsr.l D1,D0 */
    c->pc = RC_ADDR(0x00022670u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_22672:
    /* 00022672   4  move.l (4508,A4),D1 */
    c->pc = RC_ADDR(0x00022672u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4508u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22676:
    /* 00022676   2  lsl.l D2,D1 */
    c->pc = RC_ADDR(0x00022676u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 1, 1, (c->d[2] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_22678:
    /* 00022678   4  move.l D1,(4508,A4) */
    c->pc = RC_ADDR(0x00022678u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x4508u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2267C:
    /* 0002267c   2  unlk A5 */
    c->pc = RC_ADDR(0x0002267cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2267E:
    /* 0002267e   2  rts */
    c->pc = RC_ADDR(0x0002267eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
