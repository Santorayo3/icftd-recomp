/* fn_0000782a - 76 byte(s), 25 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000782a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000782au): goto L_782A;
    case RC_ADDR(0x0000782eu): goto L_782E;
    case RC_ADDR(0x00007832u): goto L_7832;
    case RC_ADDR(0x00007836u): goto L_7836;
    case RC_ADDR(0x00007838u): goto L_7838;
    case RC_ADDR(0x0000783au): goto L_783A;
    case RC_ADDR(0x0000783eu): goto L_783E;
    case RC_ADDR(0x00007840u): goto L_7840;
    case RC_ADDR(0x00007842u): goto L_7842;
    case RC_ADDR(0x00007846u): goto L_7846;
    case RC_ADDR(0x0000784au): goto L_784A;
    case RC_ADDR(0x0000784cu): goto L_784C;
    case RC_ADDR(0x0000784eu): goto L_784E;
    case RC_ADDR(0x00007850u): goto L_7850;
    case RC_ADDR(0x00007854u): goto L_7854;
    case RC_ADDR(0x00007856u): goto L_7856;
    case RC_ADDR(0x00007858u): goto L_7858;
    case RC_ADDR(0x0000785cu): goto L_785C;
    case RC_ADDR(0x00007860u): goto L_7860;
    case RC_ADDR(0x00007862u): goto L_7862;
    case RC_ADDR(0x00007866u): goto L_7866;
    case RC_ADDR(0x0000786au): goto L_786A;
    case RC_ADDR(0x00007870u): goto L_7870;
    case RC_ADDR(0x00007872u): goto L_7872;
    case RC_ADDR(0x00007874u): goto L_7874;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_782A:
    /* 0000782a   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0000782au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_782E:
    /* 0000782e   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000782eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7832:
    /* 00007832   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007832u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7836:
    /* 00007836   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007836u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7838:
    /* 00007838   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x00007838u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L));

L_783A:
    /* 0000783a   4  lea (9f8,A4),A0 */
    c->pc = RC_ADDR(0x0000783au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x9f8u);

L_783E:
    /* 0000783e   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x0000783eu);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_7840:
    /* 00007840   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00007840u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7842:
    /* 00007842   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007842u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7846:
    /* 00007846   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x00007846u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x0000784au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_784A:
    /* 0000784a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000784au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_784C:
    /* 0000784c   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000784cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_784E:
    /* 0000784e   2  bne 00007866 */
    c->pc = RC_ADDR(0x0000784eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7866;

L_7850:
    /* 00007850   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00007850u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7854:
    /* 00007854   2  ext.l D0 */
    c->pc = RC_ADDR(0x00007854u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_7856:
    /* 00007856   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00007856u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_7858:
    /* 00007858   4  lea (a48,A4),A0 */
    c->pc = RC_ADDR(0x00007858u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xa48u);

L_785C:
    /* 0000785c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000785cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7860:
    /* 00007860   2  ext.l D1 */
    c->pc = RC_ADDR(0x00007860u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_7862:
    /* 00007862   4  move.l D1,(fffffa0c,A4) */
    c->pc = RC_ADDR(0x00007862u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x5f4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7866:
    /* 00007866   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00007866u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_786A:
    /* 0000786a   6  cmpi.w #a,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000786au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000au);

L_7870:
    /* 00007870   2  blt 00007832 */
    c->pc = RC_ADDR(0x00007870u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_7832; }

L_7872:
    /* 00007872   2  unlk A5 */
    c->pc = RC_ADDR(0x00007872u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7874:
    /* 00007874   2  rts */
    c->pc = RC_ADDR(0x00007874u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
