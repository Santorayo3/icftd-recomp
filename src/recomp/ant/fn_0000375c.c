/* fn_0000375c - 76 byte(s), 31 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000375c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000375cu): goto L_375C;
    case RC_ADDR(0x00003760u): goto L_3760;
    case RC_ADDR(0x00003764u): goto L_3764;
    case RC_ADDR(0x00003768u): goto L_3768;
    case RC_ADDR(0x0000376cu): goto L_376C;
    case RC_ADDR(0x0000376eu): goto L_376E;
    case RC_ADDR(0x00003770u): goto L_3770;
    case RC_ADDR(0x00003772u): goto L_3772;
    case RC_ADDR(0x00003774u): goto L_3774;
    case RC_ADDR(0x00003776u): goto L_3776;
    case RC_ADDR(0x00003778u): goto L_3778;
    case RC_ADDR(0x0000377au): goto L_377A;
    case RC_ADDR(0x0000377cu): goto L_377C;
    case RC_ADDR(0x0000377eu): goto L_377E;
    case RC_ADDR(0x00003780u): goto L_3780;
    case RC_ADDR(0x00003784u): goto L_3784;
    case RC_ADDR(0x00003786u): goto L_3786;
    case RC_ADDR(0x00003788u): goto L_3788;
    case RC_ADDR(0x0000378au): goto L_378A;
    case RC_ADDR(0x0000378cu): goto L_378C;
    case RC_ADDR(0x0000378eu): goto L_378E;
    case RC_ADDR(0x00003790u): goto L_3790;
    case RC_ADDR(0x00003792u): goto L_3792;
    case RC_ADDR(0x00003794u): goto L_3794;
    case RC_ADDR(0x00003796u): goto L_3796;
    case RC_ADDR(0x00003798u): goto L_3798;
    case RC_ADDR(0x0000379cu): goto L_379C;
    case RC_ADDR(0x0000379eu): goto L_379E;
    case RC_ADDR(0x000037a0u): goto L_37A0;
    case RC_ADDR(0x000037a4u): goto L_37A4;
    case RC_ADDR(0x000037a6u): goto L_37A6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_375C:
    /* 0000375c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000375cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_3760:
    /* 00003760   4  movem.l { D4 D5 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00003760u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_3764:
    /* 00003764   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00003764u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_3768:
    /* 00003768   4  move.w (2,A2),D0 */
    c->pc = RC_ADDR(0x00003768u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_376C:
    /* 0000376c   2  mulu.w (A2),D0 */
    c->pc = RC_ADDR(0x0000376cu);
    rc_step(c, m, 42);
    t0 = rc_rd16(c, m, c->a[2]);
    rc_mulu(c, 0, t0);

L_376E:
    /* 0000376e   2  move.w D0,D6 */
    c->pc = RC_ADDR(0x0000376eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3770:
    /* 00003770   2  lsr.w #2,D6 */
    c->pc = RC_ADDR(0x00003770u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_W, rc_shift(c, 1, 0, 0x00000002u, rc_d_get(c, 6, RC_W), RC_W));

L_3772:
    /* 00003772   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00003772u);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_3774:
    /* 00003774   2  bra 00003796 */
    c->pc = RC_ADDR(0x00003774u);
    rc_step(c, m, 10);
    goto L_3796;

L_3776:
    /* 00003776   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00003776u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3778:
    /* 00003778   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003778u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_377A:
    /* 0000377a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000377au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_377C:
    /* 0000377c   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0000377cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_377E:
    /* 0000377e   2  adda.l A2,A0 */
    c->pc = RC_ADDR(0x0000377eu);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[0] += t0;

L_3780:
    /* 00003780   4  movea.l (8,A0),A3 */
    c->pc = RC_ADDR(0x00003780u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    c->a[3] = t0;

L_3784:
    /* 00003784   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x00003784u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_3786:
    /* 00003786   2  bra 00003790 */
    c->pc = RC_ADDR(0x00003786u);
    rc_step(c, m, 10);
    goto L_3790;

L_3788:
    /* 00003788   2  movea.l A3,A0 */
    c->pc = RC_ADDR(0x00003788u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[0] = t0;

L_378A:
    /* 0000378a   2  addq.l #4,A3 */
    c->pc = RC_ADDR(0x0000378au);
    rc_step(c, m, 8);
    c->a[3] += 0x00000004u;

L_378C:
    /* 0000378c   2  clr.l (A0) */
    c->pc = RC_ADDR(0x0000378cu);
    rc_step(c, m, 20);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_378E:
    /* 0000378e   2  addq.w #1,D5 */
    c->pc = RC_ADDR(0x0000378eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_3790:
    /* 00003790   2  cmp.w D6,D5 */
    c->pc = RC_ADDR(0x00003790u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 5, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_3792:
    /* 00003792   2  blt 00003788 */
    c->pc = RC_ADDR(0x00003792u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_3788; }

L_3794:
    /* 00003794   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x00003794u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_3796:
    /* 00003796   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00003796u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3798:
    /* 00003798   4  move.b (5,A2),D0 */
    c->pc = RC_ADDR(0x00003798u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[2] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_379C:
    /* 0000379c   2  cmp.w D0,D4 */
    c->pc = RC_ADDR(0x0000379cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_379E:
    /* 0000379e   2  bcs 00003776 */
    c->pc = RC_ADDR(0x0000379eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_3776; }

L_37A0:
    /* 000037a0   4  movem.l (SP)+,{ D4 D5 D6 A2 A3 } */
    c->pc = RC_ADDR(0x000037a0u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_37A4:
    /* 000037a4   2  unlk A5 */
    c->pc = RC_ADDR(0x000037a4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_37A6:
    /* 000037a6   2  rts */
    c->pc = RC_ADDR(0x000037a6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
