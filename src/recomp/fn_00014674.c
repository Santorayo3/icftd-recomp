/* fn_00014674 - 348 byte(s), 93 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00014674(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00014674u: goto L_14674;
    case 0x00014678u: goto L_14678;
    case 0x0001467cu: goto L_1467C;
    case 0x0001467eu: goto L_1467E;
    case 0x00014682u: goto L_14682;
    case 0x00014684u: goto L_14684;
    case 0x00014688u: goto L_14688;
    case 0x0001468cu: goto L_1468C;
    case 0x00014690u: goto L_14690;
    case 0x00014694u: goto L_14694;
    case 0x00014696u: goto L_14696;
    case 0x0001469au: goto L_1469A;
    case 0x0001469eu: goto L_1469E;
    case 0x000146a0u: goto L_146A0;
    case 0x000146a4u: goto L_146A4;
    case 0x000146a6u: goto L_146A6;
    case 0x000146acu: goto L_146AC;
    case 0x000146b0u: goto L_146B0;
    case 0x000146b4u: goto L_146B4;
    case 0x000146b6u: goto L_146B6;
    case 0x000146bcu: goto L_146BC;
    case 0x000146beu: goto L_146BE;
    case 0x000146c0u: goto L_146C0;
    case 0x000146c4u: goto L_146C4;
    case 0x000146c8u: goto L_146C8;
    case 0x000146ccu: goto L_146CC;
    case 0x000146ceu: goto L_146CE;
    case 0x000146d2u: goto L_146D2;
    case 0x000146d6u: goto L_146D6;
    case 0x000146d8u: goto L_146D8;
    case 0x000146dcu: goto L_146DC;
    case 0x000146e0u: goto L_146E0;
    case 0x000146e4u: goto L_146E4;
    case 0x000146e8u: goto L_146E8;
    case 0x000146ecu: goto L_146EC;
    case 0x000146f0u: goto L_146F0;
    case 0x000146f4u: goto L_146F4;
    case 0x000146fau: goto L_146FA;
    case 0x000146feu: goto L_146FE;
    case 0x00014702u: goto L_14702;
    case 0x00014706u: goto L_14706;
    case 0x0001470au: goto L_1470A;
    case 0x0001470cu: goto L_1470C;
    case 0x0001470eu: goto L_1470E;
    case 0x00014712u: goto L_14712;
    case 0x00014716u: goto L_14716;
    case 0x0001471au: goto L_1471A;
    case 0x0001471eu: goto L_1471E;
    case 0x00014722u: goto L_14722;
    case 0x00014726u: goto L_14726;
    case 0x0001472au: goto L_1472A;
    case 0x00014730u: goto L_14730;
    case 0x00014734u: goto L_14734;
    case 0x00014738u: goto L_14738;
    case 0x0001473cu: goto L_1473C;
    case 0x00014740u: goto L_14740;
    case 0x00014744u: goto L_14744;
    case 0x00014748u: goto L_14748;
    case 0x0001474cu: goto L_1474C;
    case 0x00014750u: goto L_14750;
    case 0x00014756u: goto L_14756;
    case 0x00014758u: goto L_14758;
    case 0x0001475eu: goto L_1475E;
    case 0x00014764u: goto L_14764;
    case 0x00014766u: goto L_14766;
    case 0x0001476cu: goto L_1476C;
    case 0x00014772u: goto L_14772;
    case 0x00014774u: goto L_14774;
    case 0x0001477au: goto L_1477A;
    case 0x00014780u: goto L_14780;
    case 0x00014782u: goto L_14782;
    case 0x00014788u: goto L_14788;
    case 0x0001478eu: goto L_1478E;
    case 0x00014790u: goto L_14790;
    case 0x00014794u: goto L_14794;
    case 0x00014798u: goto L_14798;
    case 0x0001479cu: goto L_1479C;
    case 0x0001479eu: goto L_1479E;
    case 0x000147a0u: goto L_147A0;
    case 0x000147a4u: goto L_147A4;
    case 0x000147a8u: goto L_147A8;
    case 0x000147acu: goto L_147AC;
    case 0x000147aeu: goto L_147AE;
    case 0x000147b0u: goto L_147B0;
    case 0x000147b4u: goto L_147B4;
    case 0x000147b8u: goto L_147B8;
    case 0x000147bcu: goto L_147BC;
    case 0x000147beu: goto L_147BE;
    case 0x000147c0u: goto L_147C0;
    case 0x000147c4u: goto L_147C4;
    case 0x000147c8u: goto L_147C8;
    case 0x000147ccu: goto L_147CC;
    case 0x000147ceu: goto L_147CE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14674:
    /* 00014674   4  link.w A5,#0 */
    c->pc = 0x00014674u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_14678:
    /* 00014678   4  tst.w (1140,A4) */
    c->pc = 0x00014678u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1140u));
    rc_set_nzvc(c, t0, RC_W);

L_1467C:
    /* 0001467c   2  bne 000146ac */
    c->pc = 0x0001467cu;
    if (rc_cond(c, 6)) goto L_146AC;

L_1467E:
    /* 0001467e   4  tst.w (10ce,A4) */
    c->pc = 0x0001467eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x10ceu));
    rc_set_nzvc(c, t0, RC_W);

L_14682:
    /* 00014682   2  beq 0001468c */
    c->pc = 0x00014682u;
    if (rc_cond(c, 7)) goto L_1468C;

L_14684:
    /* 00014684   4  move.w (af8,A4),D0 */
    c->pc = 0x00014684u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14688:
    /* 00014688   4  add.w D0,(1134,A4) */
    c->pc = 0x00014688u;
    t3 = (c->a[4] + 0x1134u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1468C:
    /* 0001468c   4  move.w (1134,A4),D0 */
    c->pc = 0x0001468cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1134u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14690:
    /* 00014690   4  cmp.w (1136,A4),D0 */
    c->pc = 0x00014690u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1136u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14694:
    /* 00014694   2  ble 000146ac */
    c->pc = 0x00014694u;
    if (rc_cond(c, 15)) goto L_146AC;

L_14696:
    /* 00014696   4  clr.w (1134,A4) */
    c->pc = 0x00014696u;
    rc_wr16(c, m, (c->a[4] + 0x1134u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1469A:
    /* 0001469a   4  tst.w (1132,A4) */
    c->pc = 0x0001469au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1132u));
    rc_set_nzvc(c, t0, RC_W);

L_1469E:
    /* 0001469e   2  beq 000146a6 */
    c->pc = 0x0001469eu;
    if (rc_cond(c, 7)) goto L_146A6;

L_146A0:
    /* 000146a0   4  subq.w #1,(1132,A4) */
    c->pc = 0x000146a0u;
    t3 = (c->a[4] + 0x1132u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_146A4:
    /* 000146a4   2  bra 000146ac */
    c->pc = 0x000146a4u;
    goto L_146AC;

L_146A6:
    /* 000146a6   6  move.w #1,(1140,A4) */
    c->pc = 0x000146a6u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1140u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_146AC:
    /* 000146ac   4  jsr (000140e0) */
    c->pc = 0x000146acu;
    rc_push32(c, m, 0x000146b0u);
    rc_depth++;
    c->pc = 0x000140e0u;
    return;

L_146B0:
    /* 000146b0   4  tst.w (10e2,A4) */
    c->pc = 0x000146b0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x10e2u));
    rc_set_nzvc(c, t0, RC_W);

L_146B4:
    /* 000146b4   2  beq 00014702 */
    c->pc = 0x000146b4u;
    if (rc_cond(c, 7)) goto L_14702;

L_146B6:
    /* 000146b6   6  cmpi.w #1,(10e2,A4) */
    c->pc = 0x000146b6u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x10e2u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_146BC:
    /* 000146bc   2  bne 000146f4 */
    c->pc = 0x000146bcu;
    if (rc_cond(c, 6)) goto L_146F4;

L_146BE:
    /* 000146be   2  clr.w -(A7) */
    c->pc = 0x000146beu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_146C0:
    /* 000146c0   4  move.w (1138,A4),-(A7) */
    c->pc = 0x000146c0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1138u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_146C4:
    /* 000146c4   4  move.w #2,-(A7) */
    c->pc = 0x000146c4u;
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_146C8:
    /* 000146c8   4  jsr (ffff80ce,A4) */
    c->pc = 0x000146c8u;
    /* vector 34 */
    rc_push32(c, m, 0x000146ccu);
    rc_depth++;
    c->pc = 0x00009c1au;
    return;

L_146CC:
    /* 000146cc   2  addq.w #6,A7 */
    c->pc = 0x000146ccu;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_146CE:
    /* 000146ce   4  pea (00000001).l */
    c->pc = 0x000146ceu;
    rc_push32(c, m, 0x00000001u);

L_146D2:
    /* 000146d2   4  jsr (ffff8122,A4) */
    c->pc = 0x000146d2u;
    /* vector 48 */
    rc_push32(c, m, 0x000146d6u);
    rc_depth++;
    c->pc = 0x0000efa6u;
    return;

L_146D6:
    /* 000146d6   2  addq.w #4,A7 */
    c->pc = 0x000146d6u;
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_146D8:
    /* 000146d8   4  move.w #3f,-(A7) */
    c->pc = 0x000146d8u;
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_146DC:
    /* 000146dc   4  move.w #1,-(A7) */
    c->pc = 0x000146dcu;
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_146E0:
    /* 000146e0   4  move.l (2de,A4),-(A7) */
    c->pc = 0x000146e0u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x2deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_146E4:
    /* 000146e4   4  move.w #2bc,-(A7) */
    c->pc = 0x000146e4u;
    t0 = 0x000002bcu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_146E8:
    /* 000146e8   4  move.l (ffffb150,A4),-(A7) */
    c->pc = 0x000146e8u;
    t0 = rc_rd32(c, m, (c->a[4] - 0x4eb0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_146EC:
    /* 000146ec   4  jsr (ffff80b6,A4) */
    c->pc = 0x000146ecu;
    /* vector 30 */
    rc_push32(c, m, 0x000146f0u);
    rc_depth++;
    c->pc = 0x00009b60u;
    return;

L_146F0:
    /* 000146f0   4  lea (e,A7),A7 */
    c->pc = 0x000146f0u;
    c->a[7] = (c->a[7] + 0xeu);

L_146F4:
    /* 000146f4   6  move.w #c,(10ca,A4) */
    c->pc = 0x000146f4u;
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[4] + 0x10cau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_146FA:
    /* 000146fa   4  addq.w #1,(10e2,A4) */
    c->pc = 0x000146fau;
    t3 = (c->a[4] + 0x10e2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_146FE:
    /* 000146fe   4  clr.w (10ce,A4) */
    c->pc = 0x000146feu;
    rc_wr16(c, m, (c->a[4] + 0x10ceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14702:
    /* 00014702   4  pea (fffff326,A4) */
    c->pc = 0x00014702u;
    rc_push32(c, m, (c->a[4] - 0xcdau));

L_14706:
    /* 00014706   4  move.w (10ca,A4),D0 */
    c->pc = 0x00014706u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x10cau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1470A:
    /* 0001470a   2  ext.l D0 */
    c->pc = 0x0001470au;
    rc_ext_l(c, 0);

L_1470C:
    /* 0001470c   2  asl.l #2,D0 */
    c->pc = 0x0001470cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_1470E:
    /* 0001470e   4  lea (10e4,A4),A0 */
    c->pc = 0x0001470eu;
    c->a[0] = (c->a[4] + 0x10e4u);

L_14712:
    /* 00014712   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = 0x00014712u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14716:
    /* 00014716   4  move.w (fffffd9a,A4),-(A7) */
    c->pc = 0x00014716u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1471A:
    /* 0001471a   4  move.w (fffffd98,A4),-(A7) */
    c->pc = 0x0001471au;
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1471E:
    /* 0001471e   4  jsr (ffff8152,A4) */
    c->pc = 0x0001471eu;
    /* vector 56 */
    rc_push32(c, m, 0x00014722u);
    rc_depth++;
    c->pc = 0x00011130u;
    return;

L_14722:
    /* 00014722   4  lea (c,A7),A7 */
    c->pc = 0x00014722u;
    c->a[7] = (c->a[7] + 0xcu);

L_14726:
    /* 00014726   4  clr.w (fffffd9c,A4) */
    c->pc = 0x00014726u;
    rc_wr16(c, m, (c->a[4] - 0x264u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1472A:
    /* 0001472a   6  move.w (ffffb030,A4),(fffff28c,A4) */
    c->pc = 0x0001472au;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd0u));
    rc_wr16(c, m, (c->a[4] - 0xd74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14730:
    /* 00014730   4  tst.w (10ce,A4) */
    c->pc = 0x00014730u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x10ceu));
    rc_set_nzvc(c, t0, RC_W);

L_14734:
    /* 00014734   4  beq 000147cc */
    c->pc = 0x00014734u;
    if (rc_cond(c, 7)) goto L_147CC;

L_14738:
    /* 00014738   4  move.w (10de,A4),D2 */
    c->pc = 0x00014738u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x10deu));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1473C:
    /* 0001473c   4  move.w (10e0,A4),D3 */
    c->pc = 0x0001473cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x10e0u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14740:
    /* 00014740   4  mulu.w (fffff286,A4),D2 */
    c->pc = 0x00014740u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd7au));
    rc_mulu(c, 2, t0);

L_14744:
    /* 00014744   4  mulu.w (fffff288,A4),D3 */
    c->pc = 0x00014744u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd78u));
    rc_mulu(c, 3, t0);

L_14748:
    /* 00014748   4  add.w D2,(fffffd98,A4) */
    c->pc = 0x00014748u;
    t3 = (c->a[4] - 0x268u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 2, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 2, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1474C:
    /* 0001474c   4  add.w D3,(fffffd9a,A4) */
    c->pc = 0x0001474cu;
    t3 = (c->a[4] - 0x266u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 3, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 3, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_14750:
    /* 00014750   6  cmpi.w #be,(fffffd98,A4) */
    c->pc = 0x00014750u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_14756:
    /* 00014756   2  blt 0001475e */
    c->pc = 0x00014756u;
    if (rc_cond(c, 13)) goto L_1475E;

L_14758:
    /* 00014758   6  ori.w #1,(fffffd9c,A4) */
    c->pc = 0x00014758u;
    t3 = (c->a[4] - 0x264u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000001u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1475E:
    /* 0001475e   6  cmpi.w #6e,(fffffd98,A4) */
    c->pc = 0x0001475eu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x268u));
    rc_cmp(c, RC_W, t0, 0x0000006eu);

L_14764:
    /* 00014764   2  bgt 0001476c */
    c->pc = 0x00014764u;
    if (rc_cond(c, 14)) goto L_1476C;

L_14766:
    /* 00014766   6  ori.w #2,(fffffd9c,A4) */
    c->pc = 0x00014766u;
    t3 = (c->a[4] - 0x264u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000002u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1476C:
    /* 0001476c   6  cmpi.w #64,(fffffd9a,A4) */
    c->pc = 0x0001476cu;
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_cmp(c, RC_W, t0, 0x00000064u);

L_14772:
    /* 00014772   2  blt 0001477a */
    c->pc = 0x00014772u;
    if (rc_cond(c, 13)) goto L_1477A;

L_14774:
    /* 00014774   6  ori.w #4,(fffffd9c,A4) */
    c->pc = 0x00014774u;
    t3 = (c->a[4] - 0x264u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000004u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1477A:
    /* 0001477a   6  cmpi.w #50,(fffffd9a,A4) */
    c->pc = 0x0001477au;
    t0 = rc_rd16(c, m, (c->a[4] - 0x266u));
    rc_cmp(c, RC_W, t0, 0x00000050u);

L_14780:
    /* 00014780   2  bgt 00014788 */
    c->pc = 0x00014780u;
    if (rc_cond(c, 14)) goto L_14788;

L_14782:
    /* 00014782   6  ori.w #8,(fffffd9c,A4) */
    c->pc = 0x00014782u;
    t3 = (c->a[4] - 0x264u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | 0x00000008u;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_14788:
    /* 00014788   6  cmpi.w #5,(af8,A4) */
    c->pc = 0x00014788u;
    t0 = rc_rd16(c, m, (c->a[4] + 0xaf8u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_1478E:
    /* 0001478e   2  bgt 000147cc */
    c->pc = 0x0001478eu;
    if (rc_cond(c, 14)) goto L_147CC;

L_14790:
    /* 00014790   4  move.w (111c,A4),D0 */
    c->pc = 0x00014790u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x111cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14794:
    /* 00014794   4  move.w (111e,A4),D1 */
    c->pc = 0x00014794u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x111eu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14798:
    /* 00014798   4  bsr 00015e48 */
    c->pc = 0x00014798u;
    rc_push32(c, m, 0x0001479cu);
    rc_depth++;
    c->pc = 0x00015e48u;
    return;

L_1479C:
    /* 0001479c   2  tst.w D0 */
    c->pc = 0x0001479cu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1479E:
    /* 0001479e   2  bne 000147cc */
    c->pc = 0x0001479eu;
    if (rc_cond(c, 6)) goto L_147CC;

L_147A0:
    /* 000147a0   4  move.w (1120,A4),D0 */
    c->pc = 0x000147a0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1120u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147A4:
    /* 000147a4   4  move.w (1122,A4),D1 */
    c->pc = 0x000147a4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1122u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147A8:
    /* 000147a8   4  bsr 00015e48 */
    c->pc = 0x000147a8u;
    rc_push32(c, m, 0x000147acu);
    rc_depth++;
    c->pc = 0x00015e48u;
    return;

L_147AC:
    /* 000147ac   2  tst.w D0 */
    c->pc = 0x000147acu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_147AE:
    /* 000147ae   2  bne 000147cc */
    c->pc = 0x000147aeu;
    if (rc_cond(c, 6)) goto L_147CC;

L_147B0:
    /* 000147b0   4  move.w (1124,A4),D0 */
    c->pc = 0x000147b0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1124u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147B4:
    /* 000147b4   4  move.w (1126,A4),D1 */
    c->pc = 0x000147b4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1126u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147B8:
    /* 000147b8   4  bsr 00015e48 */
    c->pc = 0x000147b8u;
    rc_push32(c, m, 0x000147bcu);
    rc_depth++;
    c->pc = 0x00015e48u;
    return;

L_147BC:
    /* 000147bc   2  tst.w D0 */
    c->pc = 0x000147bcu;
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_147BE:
    /* 000147be   2  bne 000147cc */
    c->pc = 0x000147beu;
    if (rc_cond(c, 6)) goto L_147CC;

L_147C0:
    /* 000147c0   4  move.w (1128,A4),D0 */
    c->pc = 0x000147c0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1128u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147C4:
    /* 000147c4   4  move.w (112a,A4),D1 */
    c->pc = 0x000147c4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x112au));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_147C8:
    /* 000147c8   4  bsr 00015e48 */
    c->pc = 0x000147c8u;
    rc_push32(c, m, 0x000147ccu);
    rc_depth++;
    c->pc = 0x00015e48u;
    return;

L_147CC:
    /* 000147cc   2  unlk A5 */
    c->pc = 0x000147ccu;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_147CE:
    /* 000147ce   2  rts */
    c->pc = 0x000147ceu;
    rc_ret(c, m);
    return;

}
