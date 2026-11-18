/* fn_000154d6 - 116 byte(s), 35 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000154d6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000154d6u): goto L_154D6;
    case RC_ADDR(0x000154dau): goto L_154DA;
    case RC_ADDR(0x000154deu): goto L_154DE;
    case RC_ADDR(0x000154e2u): goto L_154E2;
    case RC_ADDR(0x000154e6u): goto L_154E6;
    case RC_ADDR(0x000154ecu): goto L_154EC;
    case RC_ADDR(0x000154eeu): goto L_154EE;
    case RC_ADDR(0x000154f2u): goto L_154F2;
    case RC_ADDR(0x000154f6u): goto L_154F6;
    case RC_ADDR(0x000154fau): goto L_154FA;
    case RC_ADDR(0x000154fcu): goto L_154FC;
    case RC_ADDR(0x000154feu): goto L_154FE;
    case RC_ADDR(0x00015500u): goto L_15500;
    case RC_ADDR(0x00015504u): goto L_15504;
    case RC_ADDR(0x00015508u): goto L_15508;
    case RC_ADDR(0x0001550cu): goto L_1550C;
    case RC_ADDR(0x0001550eu): goto L_1550E;
    case RC_ADDR(0x00015510u): goto L_15510;
    case RC_ADDR(0x00015514u): goto L_15514;
    case RC_ADDR(0x00015518u): goto L_15518;
    case RC_ADDR(0x0001551cu): goto L_1551C;
    case RC_ADDR(0x0001551eu): goto L_1551E;
    case RC_ADDR(0x00015522u): goto L_15522;
    case RC_ADDR(0x00015524u): goto L_15524;
    case RC_ADDR(0x00015526u): goto L_15526;
    case RC_ADDR(0x0001552au): goto L_1552A;
    case RC_ADDR(0x0001552eu): goto L_1552E;
    case RC_ADDR(0x00015532u): goto L_15532;
    case RC_ADDR(0x00015534u): goto L_15534;
    case RC_ADDR(0x00015538u): goto L_15538;
    case RC_ADDR(0x0001553au): goto L_1553A;
    case RC_ADDR(0x0001553eu): goto L_1553E;
    case RC_ADDR(0x00015544u): goto L_15544;
    case RC_ADDR(0x00015546u): goto L_15546;
    case RC_ADDR(0x00015548u): goto L_15548;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_154D6:
    /* 000154d6   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000154d6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_154DA:
    /* 000154da   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000154dau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_154DE:
    /* 000154de   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000154deu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_154E2:
    /* 000154e2   4  lea (68c,A4),A0 */
    c->pc = RC_ADDR(0x000154e2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x68cu);

L_154E6:
    /* 000154e6   6  cmpi.b #ff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000154e6u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x000000ffu);

L_154EC:
    /* 000154ec   2  ble 0001553a */
    c->pc = RC_ADDR(0x000154ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1553A;

L_154EE:
    /* 000154ee   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000154eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_154F2:
    /* 000154f2   4  lea (68c,A4),A0 */
    c->pc = RC_ADDR(0x000154f2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x68cu);

L_154F6:
    /* 000154f6   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000154f6u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_154FA:
    /* 000154fa   2  ext.w D1 */
    c->pc = RC_ADDR(0x000154fau);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_154FC:
    /* 000154fc   2  ext.l D1 */
    c->pc = RC_ADDR(0x000154fcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_154FE:
    /* 000154fe   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000154feu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_15500:
    /* 00015500   4  lea (5f4,A4),A0 */
    c->pc = RC_ADDR(0x00015500u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x5f4u);

L_15504:
    /* 00015504   4  move.l (0,A0,D1.w),-(A7) */
    c->pc = RC_ADDR(0x00015504u);
    rc_step(c, m, 26);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_15508:
    /* 00015508   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00015508u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1550C:
    /* 0001550c   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001550cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1550E:
    /* 0001550e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001550eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15510:
    /* 00015510   4  lea (650,A4),A0 */
    c->pc = RC_ADDR(0x00015510u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x650u);

L_15514:
    /* 00015514   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015514u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15518:
    /* 00015518   4  sub.w (17f6,A4),D1 */
    c->pc = RC_ADDR(0x00015518u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_1551C:
    /* 0001551c   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0001551cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1551E:
    /* 0001551e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001551eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15522:
    /* 00015522   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015522u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15524:
    /* 00015524   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015524u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15526:
    /* 00015526   4  lea (614,A4),A0 */
    c->pc = RC_ADDR(0x00015526u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x614u);

L_1552A:
    /* 0001552a   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001552au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1552E:
    /* 0001552e   4  sub.w (17f4,A4),D1 */
    c->pc = RC_ADDR(0x0001552eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_15532:
    /* 00015532   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x00015532u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15534:
    /* 00015534   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x00015534u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x00015538u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_15538:
    /* 00015538   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00015538u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1553A:
    /* 0001553a   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001553au);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1553E:
    /* 0001553e   6  cmpi.w #1e,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001553eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000001eu);

L_15544:
    /* 00015544   2  blt 000154de */
    c->pc = RC_ADDR(0x00015544u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_154DE; }

L_15546:
    /* 00015546   2  unlk A5 */
    c->pc = RC_ADDR(0x00015546u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_15548:
    /* 00015548   2  rts */
    c->pc = RC_ADDR(0x00015548u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
