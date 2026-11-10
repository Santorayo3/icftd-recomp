/* fn_0001029e - 250 byte(s), 69 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001029e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case 0x0001029eu: goto L_1029E;
    case 0x000102a2u: goto L_102A2;
    case 0x000102a6u: goto L_102A6;
    case 0x000102aau: goto L_102AA;
    case 0x000102aeu: goto L_102AE;
    case 0x000102b2u: goto L_102B2;
    case 0x000102b6u: goto L_102B6;
    case 0x000102bau: goto L_102BA;
    case 0x000102beu: goto L_102BE;
    case 0x000102c2u: goto L_102C2;
    case 0x000102c6u: goto L_102C6;
    case 0x000102cau: goto L_102CA;
    case 0x000102ceu: goto L_102CE;
    case 0x000102d2u: goto L_102D2;
    case 0x000102d6u: goto L_102D6;
    case 0x000102dau: goto L_102DA;
    case 0x000102deu: goto L_102DE;
    case 0x000102e2u: goto L_102E2;
    case 0x000102e6u: goto L_102E6;
    case 0x000102eau: goto L_102EA;
    case 0x000102eeu: goto L_102EE;
    case 0x000102f2u: goto L_102F2;
    case 0x000102f4u: goto L_102F4;
    case 0x000102f6u: goto L_102F6;
    case 0x000102f8u: goto L_102F8;
    case 0x000102fau: goto L_102FA;
    case 0x000102fcu: goto L_102FC;
    case 0x00010300u: goto L_10300;
    case 0x00010304u: goto L_10304;
    case 0x00010308u: goto L_10308;
    case 0x0001030cu: goto L_1030C;
    case 0x0001030eu: goto L_1030E;
    case 0x00010310u: goto L_10310;
    case 0x00010312u: goto L_10312;
    case 0x00010314u: goto L_10314;
    case 0x00010318u: goto L_10318;
    case 0x0001031cu: goto L_1031C;
    case 0x00010320u: goto L_10320;
    case 0x00010322u: goto L_10322;
    case 0x00010326u: goto L_10326;
    case 0x00010328u: goto L_10328;
    case 0x0001032cu: goto L_1032C;
    case 0x00010330u: goto L_10330;
    case 0x00010334u: goto L_10334;
    case 0x00010338u: goto L_10338;
    case 0x0001033cu: goto L_1033C;
    case 0x00010340u: goto L_10340;
    case 0x00010344u: goto L_10344;
    case 0x00010348u: goto L_10348;
    case 0x0001034cu: goto L_1034C;
    case 0x00010350u: goto L_10350;
    case 0x00010354u: goto L_10354;
    case 0x00010358u: goto L_10358;
    case 0x0001035cu: goto L_1035C;
    case 0x00010360u: goto L_10360;
    case 0x00010364u: goto L_10364;
    case 0x00010368u: goto L_10368;
    case 0x0001036cu: goto L_1036C;
    case 0x00010370u: goto L_10370;
    case 0x00010374u: goto L_10374;
    case 0x00010378u: goto L_10378;
    case 0x0001037cu: goto L_1037C;
    case 0x00010380u: goto L_10380;
    case 0x00010384u: goto L_10384;
    case 0x00010388u: goto L_10388;
    case 0x0001038cu: goto L_1038C;
    case 0x00010390u: goto L_10390;
    case 0x00010392u: goto L_10392;
    case 0x00010394u: goto L_10394;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1029E:
    /* 0001029e   4  link.w A5,#ffffffee */
    c->pc = 0x0001029eu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_102A2:
    /* 000102a2   4  jsr (ffff801a,A4) */
    c->pc = 0x000102a2u;
    /* vector 4 */
    rc_push32(c, m, 0x000102a6u);
    rc_depth++;
    c->pc = 0x000007f4u;
    return;

L_102A6:
    /* 000102a6   4  move.w #4,-(A7) */
    c->pc = 0x000102a6u;
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_102AA:
    /* 000102aa   4  pea (0000005f).l */
    c->pc = 0x000102aau;
    rc_push32(c, m, 0x0000005fu);

L_102AE:
    /* 000102ae   4  pea (00010398) */
    c->pc = 0x000102aeu;
    rc_push32(c, m, 0x00010398u);

L_102B2:
    /* 000102b2   4  jsr (ffff8026,A4) */
    c->pc = 0x000102b2u;
    /* vector 6 */
    rc_push32(c, m, 0x000102b6u);
    rc_depth++;
    c->pc = 0x0000093au;
    return;

L_102B6:
    /* 000102b6   4  lea (a,A7),A7 */
    c->pc = 0x000102b6u;
    c->a[7] = (c->a[7] + 0xau);

L_102BA:
    /* 000102ba   4  move.w #4,-(A7) */
    c->pc = 0x000102bau;
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_102BE:
    /* 000102be   4  pea (00000069).l */
    c->pc = 0x000102beu;
    rc_push32(c, m, 0x00000069u);

L_102C2:
    /* 000102c2   4  pea (000103c5) */
    c->pc = 0x000102c2u;
    rc_push32(c, m, 0x000103c5u);

L_102C6:
    /* 000102c6   4  jsr (ffff8026,A4) */
    c->pc = 0x000102c6u;
    /* vector 6 */
    rc_push32(c, m, 0x000102cau);
    rc_depth++;
    c->pc = 0x0000093au;
    return;

L_102CA:
    /* 000102ca   4  lea (a,A7),A7 */
    c->pc = 0x000102cau;
    c->a[7] = (c->a[7] + 0xau);

L_102CE:
    /* 000102ce   4  move.w #4,-(A7) */
    c->pc = 0x000102ceu;
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_102D2:
    /* 000102d2   4  pea (00000073).l */
    c->pc = 0x000102d2u;
    rc_push32(c, m, 0x00000073u);

L_102D6:
    /* 000102d6   4  pea (000103f5) */
    c->pc = 0x000102d6u;
    rc_push32(c, m, 0x000103f5u);

L_102DA:
    /* 000102da   4  jsr (ffff8026,A4) */
    c->pc = 0x000102dau;
    /* vector 6 */
    rc_push32(c, m, 0x000102deu);
    rc_depth++;
    c->pc = 0x0000093au;
    return;

L_102DE:
    /* 000102de   4  lea (a,A7),A7 */
    c->pc = 0x000102deu;
    c->a[7] = (c->a[7] + 0xau);

L_102E2:
    /* 000102e2   4  jsr (000101e4) */
    c->pc = 0x000102e2u;
    rc_push32(c, m, 0x000102e6u);
    rc_depth++;
    c->pc = 0x000101e4u;
    return;

L_102E6:
    /* 000102e6   4  move.w D0,(ffffffee,A5) */
    c->pc = 0x000102e6u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_102EA:
    /* 000102ea   4  jsr (ffff8020,A4) */
    c->pc = 0x000102eau;
    /* vector 5 */
    rc_push32(c, m, 0x000102eeu);
    rc_depth++;
    c->pc = 0x000008d6u;
    return;

L_102EE:
    /* 000102ee   4  tst.w (ffffffee,A5) */
    c->pc = 0x000102eeu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_102F2:
    /* 000102f2   2  bne 000102fa */
    c->pc = 0x000102f2u;
    if (rc_cond(c, 6)) goto L_102FA;

L_102F4:
    /* 000102f4   2  moveq #0,D0 */
    c->pc = 0x000102f4u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_102F6:
    /* 000102f6   2  unlk A5 */
    c->pc = 0x000102f6u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_102F8:
    /* 000102f8   2  rts */
    c->pc = 0x000102f8u;
    rc_ret(c, m);
    return;

L_102FA:
    /* 000102fa   2  clr.w -(A7) */
    c->pc = 0x000102fau;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_102FC:
    /* 000102fc   4  move.l (ffffa210,A4),-(A7) */
    c->pc = 0x000102fcu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10300:
    /* 00010300   4  pea (00010423) */
    c->pc = 0x00010300u;
    rc_push32(c, m, 0x00010423u);

L_10304:
    /* 00010304   4  jsr (ffff800e,A4) */
    c->pc = 0x00010304u;
    /* vector 2 */
    rc_push32(c, m, 0x00010308u);
    rc_depth++;
    c->pc = 0x000002f4u;
    return;

L_10308:
    /* 00010308   4  lea (a,A7),A7 */
    c->pc = 0x00010308u;
    c->a[7] = (c->a[7] + 0xau);

L_1030C:
    /* 0001030c   2  tst.w D0 */
    c->pc = 0x0001030cu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1030E:
    /* 0001030e   2  bne 00010314 */
    c->pc = 0x0001030eu;
    if (rc_cond(c, 6)) goto L_10314;

L_10310:
    /* 00010310   2  moveq #0,D0 */
    c->pc = 0x00010310u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10312:
    /* 00010312   2  bra 000102f6 */
    c->pc = 0x00010312u;
    rc_tick();
    goto L_102F6;

L_10314:
    /* 00010314   4  pea (000003ed).l */
    c->pc = 0x00010314u;
    rc_push32(c, m, 0x000003edu);

L_10318:
    /* 00010318   4  move.l (ffffa210,A4),-(A7) */
    c->pc = 0x00010318u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x5df0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1031C:
    /* 0001031c   4  jsr (ffff8290,A4) */
    c->pc = 0x0001031cu;
    /* vector 109 */
    rc_push32(c, m, 0x00010320u);
    rc_depth++;
    c->pc = 0x00020476u;
    return;

L_10320:
    /* 00010320   2  addq.w #8,A7 */
    c->pc = 0x00010320u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_10322:
    /* 00010322   4  move.l D0,(fffffffc,A5) */
    c->pc = 0x00010322u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10326:
    /* 00010326   2  beq 00010392 */
    c->pc = 0x00010326u;
    if (rc_cond(c, 7)) goto L_10392;

L_10328:
    /* 00010328   4  lea (ffff83c2,A4),A0 */
    c->pc = 0x00010328u;
    c->a[0] = (c->a[4] - 0x7c3eu);

L_1032C:
    /* 0001032c   4  move.l A0,(fffffff8,A5) */
    c->pc = 0x0001032cu;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10330:
    /* 00010330   4  lea (ffff843a,A4),A0 */
    c->pc = 0x00010330u;
    c->a[0] = (c->a[4] - 0x7bc6u);

L_10334:
    /* 00010334   4  move.l A0,(fffffff4,A5) */
    c->pc = 0x00010334u;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10338:
    /* 00010338   4  movea.l (fffffff4,A5),A0 */
    c->pc = 0x00010338u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1033C:
    /* 0001033c   4  suba.l (fffffff8,A5),A0 */
    c->pc = 0x0001033cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] -= t0;

L_10340:
    /* 00010340   4  move.l A0,(fffffff0,A5) */
    c->pc = 0x00010340u;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10344:
    /* 00010344   4  move.l (fffffff0,A5),-(A7) */
    c->pc = 0x00010344u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10348:
    /* 00010348   4  move.l (fffffff8,A5),-(A7) */
    c->pc = 0x00010348u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1034C:
    /* 0001034c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x0001034cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10350:
    /* 00010350   4  jsr (ffff8314,A4) */
    c->pc = 0x00010350u;
    /* vector 131 */
    rc_push32(c, m, 0x00010354u);
    rc_depth++;
    c->pc = 0x00021476u;
    return;

L_10354:
    /* 00010354   4  lea (c,A7),A7 */
    c->pc = 0x00010354u;
    c->a[7] = (c->a[7] + 0xcu);

L_10358:
    /* 00010358   4  lea (ffffce16,A4),A0 */
    c->pc = 0x00010358u;
    c->a[0] = (c->a[4] - 0x31eau);

L_1035C:
    /* 0001035c   4  move.l A0,(fffffff8,A5) */
    c->pc = 0x0001035cu;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10360:
    /* 00010360   4  lea (fffffe3a,A4),A0 */
    c->pc = 0x00010360u;
    c->a[0] = (c->a[4] - 0x1c6u);

L_10364:
    /* 00010364   4  move.l A0,(fffffff4,A5) */
    c->pc = 0x00010364u;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10368:
    /* 00010368   4  movea.l (fffffff4,A5),A0 */
    c->pc = 0x00010368u;
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[0] = t0;

L_1036C:
    /* 0001036c   4  suba.l (fffffff8,A5),A0 */
    c->pc = 0x0001036cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] -= t0;

L_10370:
    /* 00010370   4  move.l A0,(fffffff0,A5) */
    c->pc = 0x00010370u;
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10374:
    /* 00010374   4  move.l (fffffff0,A5),-(A7) */
    c->pc = 0x00010374u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10378:
    /* 00010378   4  move.l (fffffff8,A5),-(A7) */
    c->pc = 0x00010378u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1037C:
    /* 0001037c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x0001037cu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_10380:
    /* 00010380   4  jsr (ffff8314,A4) */
    c->pc = 0x00010380u;
    /* vector 131 */
    rc_push32(c, m, 0x00010384u);
    rc_depth++;
    c->pc = 0x00021476u;
    return;

L_10384:
    /* 00010384   4  lea (c,A7),A7 */
    c->pc = 0x00010384u;
    c->a[7] = (c->a[7] + 0xcu);

L_10388:
    /* 00010388   4  move.l (fffffffc,A5),-(A7) */
    c->pc = 0x00010388u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1038C:
    /* 0001038c   4  jsr (ffff8296,A4) */
    c->pc = 0x0001038cu;
    /* vector 110 */
    rc_push32(c, m, 0x00010390u);
    rc_depth++;
    c->pc = 0x00020490u;
    return;

L_10390:
    /* 00010390   2  addq.w #4,A7 */
    c->pc = 0x00010390u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_10392:
    /* 00010392   2  moveq #1,D0 */
    c->pc = 0x00010392u;
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10394:
    /* 00010394   4  bra 000102f6 */
    c->pc = 0x00010394u;
    rc_tick();
    goto L_102F6;

}
