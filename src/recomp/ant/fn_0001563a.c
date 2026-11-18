/* fn_0001563a - 590 byte(s), 165 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001563a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001563au): goto L_1563A;
    case RC_ADDR(0x0001563eu): goto L_1563E;
    case RC_ADDR(0x00015642u): goto L_15642;
    case RC_ADDR(0x00015646u): goto L_15646;
    case RC_ADDR(0x0001564au): goto L_1564A;
    case RC_ADDR(0x0001564eu): goto L_1564E;
    case RC_ADDR(0x00015652u): goto L_15652;
    case RC_ADDR(0x00015656u): goto L_15656;
    case RC_ADDR(0x00015658u): goto L_15658;
    case RC_ADDR(0x0001565cu): goto L_1565C;
    case RC_ADDR(0x00015660u): goto L_15660;
    case RC_ADDR(0x00015664u): goto L_15664;
    case RC_ADDR(0x00015668u): goto L_15668;
    case RC_ADDR(0x0001566cu): goto L_1566C;
    case RC_ADDR(0x0001566eu): goto L_1566E;
    case RC_ADDR(0x00015672u): goto L_15672;
    case RC_ADDR(0x00015676u): goto L_15676;
    case RC_ADDR(0x0001567au): goto L_1567A;
    case RC_ADDR(0x0001567eu): goto L_1567E;
    case RC_ADDR(0x00015682u): goto L_15682;
    case RC_ADDR(0x00015686u): goto L_15686;
    case RC_ADDR(0x0001568au): goto L_1568A;
    case RC_ADDR(0x0001568eu): goto L_1568E;
    case RC_ADDR(0x00015690u): goto L_15690;
    case RC_ADDR(0x00015692u): goto L_15692;
    case RC_ADDR(0x00015694u): goto L_15694;
    case RC_ADDR(0x00015698u): goto L_15698;
    case RC_ADDR(0x0001569cu): goto L_1569C;
    case RC_ADDR(0x0001569eu): goto L_1569E;
    case RC_ADDR(0x000156a2u): goto L_156A2;
    case RC_ADDR(0x000156a6u): goto L_156A6;
    case RC_ADDR(0x000156aau): goto L_156AA;
    case RC_ADDR(0x000156aeu): goto L_156AE;
    case RC_ADDR(0x000156b2u): goto L_156B2;
    case RC_ADDR(0x000156b4u): goto L_156B4;
    case RC_ADDR(0x000156b6u): goto L_156B6;
    case RC_ADDR(0x000156b8u): goto L_156B8;
    case RC_ADDR(0x000156bcu): goto L_156BC;
    case RC_ADDR(0x000156c0u): goto L_156C0;
    case RC_ADDR(0x000156c4u): goto L_156C4;
    case RC_ADDR(0x000156c8u): goto L_156C8;
    case RC_ADDR(0x000156ccu): goto L_156CC;
    case RC_ADDR(0x000156d0u): goto L_156D0;
    case RC_ADDR(0x000156d4u): goto L_156D4;
    case RC_ADDR(0x000156d8u): goto L_156D8;
    case RC_ADDR(0x000156dcu): goto L_156DC;
    case RC_ADDR(0x000156e0u): goto L_156E0;
    case RC_ADDR(0x000156e4u): goto L_156E4;
    case RC_ADDR(0x000156e6u): goto L_156E6;
    case RC_ADDR(0x000156eau): goto L_156EA;
    case RC_ADDR(0x000156eeu): goto L_156EE;
    case RC_ADDR(0x000156f2u): goto L_156F2;
    case RC_ADDR(0x000156f6u): goto L_156F6;
    case RC_ADDR(0x000156fau): goto L_156FA;
    case RC_ADDR(0x000156feu): goto L_156FE;
    case RC_ADDR(0x00015702u): goto L_15702;
    case RC_ADDR(0x00015704u): goto L_15704;
    case RC_ADDR(0x00015708u): goto L_15708;
    case RC_ADDR(0x0001570cu): goto L_1570C;
    case RC_ADDR(0x0001570eu): goto L_1570E;
    case RC_ADDR(0x00015710u): goto L_15710;
    case RC_ADDR(0x00015712u): goto L_15712;
    case RC_ADDR(0x00015714u): goto L_15714;
    case RC_ADDR(0x00015718u): goto L_15718;
    case RC_ADDR(0x0001571cu): goto L_1571C;
    case RC_ADDR(0x00015722u): goto L_15722;
    case RC_ADDR(0x00015726u): goto L_15726;
    case RC_ADDR(0x0001572au): goto L_1572A;
    case RC_ADDR(0x00015730u): goto L_15730;
    case RC_ADDR(0x00015734u): goto L_15734;
    case RC_ADDR(0x00015736u): goto L_15736;
    case RC_ADDR(0x00015738u): goto L_15738;
    case RC_ADDR(0x0001573cu): goto L_1573C;
    case RC_ADDR(0x00015742u): goto L_15742;
    case RC_ADDR(0x00015746u): goto L_15746;
    case RC_ADDR(0x00015748u): goto L_15748;
    case RC_ADDR(0x0001574au): goto L_1574A;
    case RC_ADDR(0x0001574eu): goto L_1574E;
    case RC_ADDR(0x00015754u): goto L_15754;
    case RC_ADDR(0x00015758u): goto L_15758;
    case RC_ADDR(0x0001575cu): goto L_1575C;
    case RC_ADDR(0x0001575eu): goto L_1575E;
    case RC_ADDR(0x00015762u): goto L_15762;
    case RC_ADDR(0x00015768u): goto L_15768;
    case RC_ADDR(0x0001576cu): goto L_1576C;
    case RC_ADDR(0x0001576eu): goto L_1576E;
    case RC_ADDR(0x00015772u): goto L_15772;
    case RC_ADDR(0x00015776u): goto L_15776;
    case RC_ADDR(0x0001577au): goto L_1577A;
    case RC_ADDR(0x0001577eu): goto L_1577E;
    case RC_ADDR(0x00015780u): goto L_15780;
    case RC_ADDR(0x00015782u): goto L_15782;
    case RC_ADDR(0x00015786u): goto L_15786;
    case RC_ADDR(0x0001578au): goto L_1578A;
    case RC_ADDR(0x0001578eu): goto L_1578E;
    case RC_ADDR(0x00015790u): goto L_15790;
    case RC_ADDR(0x00015792u): goto L_15792;
    case RC_ADDR(0x00015798u): goto L_15798;
    case RC_ADDR(0x0001579cu): goto L_1579C;
    case RC_ADDR(0x0001579eu): goto L_1579E;
    case RC_ADDR(0x000157a2u): goto L_157A2;
    case RC_ADDR(0x000157a4u): goto L_157A4;
    case RC_ADDR(0x000157aau): goto L_157AA;
    case RC_ADDR(0x000157acu): goto L_157AC;
    case RC_ADDR(0x000157b0u): goto L_157B0;
    case RC_ADDR(0x000157b4u): goto L_157B4;
    case RC_ADDR(0x000157b6u): goto L_157B6;
    case RC_ADDR(0x000157b8u): goto L_157B8;
    case RC_ADDR(0x000157bcu): goto L_157BC;
    case RC_ADDR(0x000157c0u): goto L_157C0;
    case RC_ADDR(0x000157c4u): goto L_157C4;
    case RC_ADDR(0x000157c6u): goto L_157C6;
    case RC_ADDR(0x000157c8u): goto L_157C8;
    case RC_ADDR(0x000157ceu): goto L_157CE;
    case RC_ADDR(0x000157d2u): goto L_157D2;
    case RC_ADDR(0x000157d4u): goto L_157D4;
    case RC_ADDR(0x000157d8u): goto L_157D8;
    case RC_ADDR(0x000157dau): goto L_157DA;
    case RC_ADDR(0x000157deu): goto L_157DE;
    case RC_ADDR(0x000157e0u): goto L_157E0;
    case RC_ADDR(0x000157e4u): goto L_157E4;
    case RC_ADDR(0x000157e6u): goto L_157E6;
    case RC_ADDR(0x000157eau): goto L_157EA;
    case RC_ADDR(0x000157ecu): goto L_157EC;
    case RC_ADDR(0x000157eeu): goto L_157EE;
    case RC_ADDR(0x000157f2u): goto L_157F2;
    case RC_ADDR(0x000157f6u): goto L_157F6;
    case RC_ADDR(0x000157fau): goto L_157FA;
    case RC_ADDR(0x000157fcu): goto L_157FC;
    case RC_ADDR(0x000157feu): goto L_157FE;
    case RC_ADDR(0x00015802u): goto L_15802;
    case RC_ADDR(0x00015808u): goto L_15808;
    case RC_ADDR(0x0001580eu): goto L_1580E;
    case RC_ADDR(0x00015812u): goto L_15812;
    case RC_ADDR(0x00015818u): goto L_15818;
    case RC_ADDR(0x0001581cu): goto L_1581C;
    case RC_ADDR(0x00015820u): goto L_15820;
    case RC_ADDR(0x00015824u): goto L_15824;
    case RC_ADDR(0x00015826u): goto L_15826;
    case RC_ADDR(0x00015828u): goto L_15828;
    case RC_ADDR(0x0001582cu): goto L_1582C;
    case RC_ADDR(0x00015830u): goto L_15830;
    case RC_ADDR(0x00015832u): goto L_15832;
    case RC_ADDR(0x00015834u): goto L_15834;
    case RC_ADDR(0x00015838u): goto L_15838;
    case RC_ADDR(0x0001583cu): goto L_1583C;
    case RC_ADDR(0x0001583eu): goto L_1583E;
    case RC_ADDR(0x00015842u): goto L_15842;
    case RC_ADDR(0x00015844u): goto L_15844;
    case RC_ADDR(0x00015848u): goto L_15848;
    case RC_ADDR(0x0001584au): goto L_1584A;
    case RC_ADDR(0x00015850u): goto L_15850;
    case RC_ADDR(0x00015854u): goto L_15854;
    case RC_ADDR(0x0001585au): goto L_1585A;
    case RC_ADDR(0x0001585cu): goto L_1585C;
    case RC_ADDR(0x00015860u): goto L_15860;
    case RC_ADDR(0x00015864u): goto L_15864;
    case RC_ADDR(0x0001586au): goto L_1586A;
    case RC_ADDR(0x0001586cu): goto L_1586C;
    case RC_ADDR(0x00015870u): goto L_15870;
    case RC_ADDR(0x00015874u): goto L_15874;
    case RC_ADDR(0x00015878u): goto L_15878;
    case RC_ADDR(0x0001587cu): goto L_1587C;
    case RC_ADDR(0x00015880u): goto L_15880;
    case RC_ADDR(0x00015884u): goto L_15884;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1563A:
    /* 0001563a   4  link.w A5,#ffffffee */
    c->pc = RC_ADDR(0x0001563au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_1563E:
    /* 0001563e   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x0001563eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15642:
    /* 00015642   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00015642u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15646:
    /* 00015646   4  bra 00015874 */
    c->pc = RC_ADDR(0x00015646u);
    rc_step(c, m, 10);
    goto L_15874;

L_1564A:
    /* 0001564a   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x0001564au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1564E:
    /* 0001564e   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x0001564eu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_15652:
    /* 00015652   4  lea (fffffb24,A4),A0 */
    c->pc = RC_ADDR(0x00015652u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4dcu);

L_15656:
    /* 00015656   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x00015656u);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_15658:
    /* 00015658   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00015658u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1565C:
    /* 0001565c   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001565cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15660:
    /* 00015660   4  tst.b (13,A0) */
    c->pc = RC_ADDR(0x00015660u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x13u));
    rc_set_nzvc(c, t0, RC_B);

L_15664:
    /* 00015664   4  beq 00015870 */
    c->pc = RC_ADDR(0x00015664u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15870;

L_15668:
    /* 00015668   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015668u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1566C:
    /* 0001566c   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x0001566cu);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1566E:
    /* 0001566e   4  add.w (c,A5),D0 */
    c->pc = RC_ADDR(0x0001566eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15672:
    /* 00015672   4  move.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00015672u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15676:
    /* 00015676   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015676u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1567A:
    /* 0001567a   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x0001567au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1567E:
    /* 0001567e   4  add.w (e,A5),D0 */
    c->pc = RC_ADDR(0x0001567eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15682:
    /* 00015682   4  move.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00015682u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15686:
    /* 00015686   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015686u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1568A:
    /* 0001568a   4  move.b (d,A0),D0 */
    c->pc = RC_ADDR(0x0001568au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xdu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1568E:
    /* 0001568e   2  ext.w D0 */
    c->pc = RC_ADDR(0x0001568eu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_15690:
    /* 00015690   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015690u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15692:
    /* 00015692   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00015692u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_15694:
    /* 00015694   4  lea (574,A4),A0 */
    c->pc = RC_ADDR(0x00015694u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x574u);

L_15698:
    /* 00015698   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x00015698u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_1569C:
    /* 0001569c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001569cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1569E:
    /* 0001569e   4  move.b (4,A1),D0 */
    c->pc = RC_ADDR(0x0001569eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_156A2:
    /* 000156a2   4  sub.w (c,A5),D0 */
    c->pc = RC_ADDR(0x000156a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_156A6:
    /* 000156a6   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x000156a6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_156AA:
    /* 000156aa   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x000156aau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_156AE:
    /* 000156ae   4  move.b (d,A0),D0 */
    c->pc = RC_ADDR(0x000156aeu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0xdu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_156B2:
    /* 000156b2   2  ext.w D0 */
    c->pc = RC_ADDR(0x000156b2u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_156B4:
    /* 000156b4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000156b4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_156B6:
    /* 000156b6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000156b6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_156B8:
    /* 000156b8   4  lea (574,A4),A0 */
    c->pc = RC_ADDR(0x000156b8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x574u);

L_156BC:
    /* 000156bc   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x000156bcu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_156C0:
    /* 000156c0   4  move.w (2,A1),D0 */
    c->pc = RC_ADDR(0x000156c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_156C4:
    /* 000156c4   4  sub.w (e,A5),D0 */
    c->pc = RC_ADDR(0x000156c4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_156C8:
    /* 000156c8   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x000156c8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_156CC:
    /* 000156cc   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000156ccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_156D0:
    /* 000156d0   4  cmp.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000156d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_156D4:
    /* 000156d4   4  ble 00015870 */
    c->pc = RC_ADDR(0x000156d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_15870;

L_156D8:
    /* 000156d8   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000156d8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_156DC:
    /* 000156dc   4  add.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x000156dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_156E0:
    /* 000156e0   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x000156e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_156E4:
    /* 000156e4   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x000156e4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_156E6:
    /* 000156e6   4  bge 00015870 */
    c->pc = RC_ADDR(0x000156e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_15870;

L_156EA:
    /* 000156ea   4  move.w (a,A5),D0 */
    c->pc = RC_ADDR(0x000156eau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_156EE:
    /* 000156ee   4  cmp.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x000156eeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_156F2:
    /* 000156f2   4  ble 00015870 */
    c->pc = RC_ADDR(0x000156f2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_15870;

L_156F6:
    /* 000156f6   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x000156f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_156FA:
    /* 000156fa   4  add.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x000156fau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_156FE:
    /* 000156fe   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x000156feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15702:
    /* 00015702   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00015702u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_15704:
    /* 00015704   4  bge 00015870 */
    c->pc = RC_ADDR(0x00015704u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_15870;

L_15708:
    /* 00015708   4  tst.w (10,A5) */
    c->pc = RC_ADDR(0x00015708u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_1570C:
    /* 0001570c   2  beq 00015714 */
    c->pc = RC_ADDR(0x0001570cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_15714;

L_1570E:
    /* 0001570e   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001570eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_15710:
    /* 00015710   2  unlk A5 */
    c->pc = RC_ADDR(0x00015710u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_15712:
    /* 00015712   2  rts */
    c->pc = RC_ADDR(0x00015712u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_15714:
    /* 00015714   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015714u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15718:
    /* 00015718   4  clr.b (13,A0) */
    c->pc = RC_ADDR(0x00015718u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[0] + 0x13u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1571C:
    /* 0001571c   6  move.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x0001571cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15722:
    /* 00015722   4  move.w (6aa,A4),D0 */
    c->pc = RC_ADDR(0x00015722u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6aau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15726:
    /* 00015726   4  lea (68c,A4),A0 */
    c->pc = RC_ADDR(0x00015726u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x68cu);

L_1572A:
    /* 0001572a   6  move.b (ffffb375,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001572au);
    rc_step(c, m, 22);
    t0 = rc_rd8(c, m, (c->a[4] - 0x4c8bu));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_15730:
    /* 00015730   4  move.w (6aa,A4),D0 */
    c->pc = RC_ADDR(0x00015730u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6aau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15734:
    /* 00015734   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015734u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15736:
    /* 00015736   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015736u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_15738:
    /* 00015738   4  lea (614,A4),A0 */
    c->pc = RC_ADDR(0x00015738u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x614u);

L_1573C:
    /* 0001573c   6  move.w (fffffff8,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001573cu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15742:
    /* 00015742   4  move.w (6aa,A4),D0 */
    c->pc = RC_ADDR(0x00015742u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6aau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15746:
    /* 00015746   2  ext.l D0 */
    c->pc = RC_ADDR(0x00015746u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15748:
    /* 00015748   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00015748u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1574A:
    /* 0001574a   4  lea (650,A4),A0 */
    c->pc = RC_ADDR(0x0001574au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x650u);

L_1574E:
    /* 0001574e   6  move.w (fffffff6,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001574eu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15754:
    /* 00015754   4  addq.w #1,(6e6,A4) */
    c->pc = RC_ADDR(0x00015754u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6e6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15758:
    /* 00015758   4  tst.w (6c4,A4) */
    c->pc = RC_ADDR(0x00015758u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6c4u));
    rc_set_nzvc(c, t0, RC_W);

L_1575C:
    /* 0001575c   2  beq 0001577a */
    c->pc = RC_ADDR(0x0001575cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1577A;

L_1575E:
    /* 0001575e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001575eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15762:
    /* 00015762   6  move.b #ff,(c,A0) */
    c->pc = RC_ADDR(0x00015762u);
    rc_step(c, m, 16);
    t0 = 0x000000ffu;
    rc_wr8(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_15768:
    /* 00015768   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015768u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1576C:
    /* 0001576c   2  clr.w (A0) */
    c->pc = RC_ADDR(0x0001576cu);
    rc_step(c, m, 12);
    rc_wr16(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1576E:
    /* 0001576e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001576eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15772:
    /* 00015772   4  clr.w (2,A0) */
    c->pc = RC_ADDR(0x00015772u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[0] + 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15776:
    /* 00015776   4  bra 00015850 */
    c->pc = RC_ADDR(0x00015776u);
    rc_step(c, m, 10);
    goto L_15850;

L_1577A:
    /* 0001577a   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x0001577au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1577E:
    /* 0001577e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001577eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15780:
    /* 00015780   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00015780u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_15782:
    /* 00015782   4  lea (ffff84de,A4),A0 */
    c->pc = RC_ADDR(0x00015782u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b22u);

L_15786:
    /* 00015786   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00015786u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1578A:
    /* 0001578a   4  move.w (1abe,A4),D0 */
    c->pc = RC_ADDR(0x0001578au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1abeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1578E:
    /* 0001578e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001578eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_15790:
    /* 00015790   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00015790u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_15792:
    /* 00015792   6  move.b (0,A0,D1.w),(fffffff1,A5) */
    c->pc = RC_ADDR(0x00015792u);
    rc_step(c, m, 22);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, (c->a[5] - 0xfu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_15798:
    /* 00015798   4  tst.b (fffffff1,A5) */
    c->pc = RC_ADDR(0x00015798u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    rc_set_nzvc(c, t0, RC_B);

L_1579C:
    /* 0001579c   2  beq 000157ce */
    c->pc = RC_ADDR(0x0001579cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_157CE;

L_1579E:
    /* 0001579e   4  tst.w (1ac2,A4) */
    c->pc = RC_ADDR(0x0001579eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac2u));
    rc_set_nzvc(c, t0, RC_W);

L_157A2:
    /* 000157a2   2  bne 000157ce */
    c->pc = RC_ADDR(0x000157a2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_157CE;

L_157A4:
    /* 000157a4   6  cmpi.b #64,(fffffff1,A5) */
    c->pc = RC_ADDR(0x000157a4u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_157AA:
    /* 000157aa   2  bge 000157ce */
    c->pc = RC_ADDR(0x000157aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_157CE;

L_157AC:
    /* 000157ac   4  subq.b #1,(fffffff1,A5) */
    c->pc = RC_ADDR(0x000157acu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xfu);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_157B0:
    /* 000157b0   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x000157b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_157B4:
    /* 000157b4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000157b4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_157B6:
    /* 000157b6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000157b6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_157B8:
    /* 000157b8   4  lea (ffff84de,A4),A0 */
    c->pc = RC_ADDR(0x000157b8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b22u);

L_157BC:
    /* 000157bc   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000157bcu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_157C0:
    /* 000157c0   4  move.w (1abe,A4),D0 */
    c->pc = RC_ADDR(0x000157c0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1abeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_157C4:
    /* 000157c4   2  ext.l D0 */
    c->pc = RC_ADDR(0x000157c4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_157C6:
    /* 000157c6   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000157c6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_157C8:
    /* 000157c8   6  move.b (fffffff1,A5),(0,A0,D1.w) */
    c->pc = RC_ADDR(0x000157c8u);
    rc_step(c, m, 22);
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    t4 = c->d[1];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_157CE:
    /* 000157ce   4  tst.w (1ac2,A4) */
    c->pc = RC_ADDR(0x000157ceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac2u));
    rc_set_nzvc(c, t0, RC_W);

L_157D2:
    /* 000157d2   2  bne 00015834 */
    c->pc = RC_ADDR(0x000157d2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15834;

L_157D4:
    /* 000157d4   4  tst.b (fffffff1,A5) */
    c->pc = RC_ADDR(0x000157d4u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    rc_set_nzvc(c, t0, RC_B);

L_157D8:
    /* 000157d8   2  beq 000157e6 */
    c->pc = RC_ADDR(0x000157d8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_157E6;

L_157DA:
    /* 000157da   4  move.b (fffffff1,A5),D0 */
    c->pc = RC_ADDR(0x000157dau);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_157DE:
    /* 000157de   2  ext.w D0 */
    c->pc = RC_ADDR(0x000157deu);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_157E0:
    /* 000157e0   4  cmp.w (6ca,A4),D0 */
    c->pc = RC_ADDR(0x000157e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6cau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_157E4:
    /* 000157e4   2  bgt 00015828 */
    c->pc = RC_ADDR(0x000157e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_15828;

L_157E6:
    /* 000157e6   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x000157e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_157EA:
    /* 000157ea   2  ext.l D0 */
    c->pc = RC_ADDR(0x000157eau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_157EC:
    /* 000157ec   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000157ecu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_157EE:
    /* 000157ee   4  lea (ffff84de,A4),A0 */
    c->pc = RC_ADDR(0x000157eeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b22u);

L_157F2:
    /* 000157f2   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000157f2u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_157F6:
    /* 000157f6   4  move.w (1abe,A4),D0 */
    c->pc = RC_ADDR(0x000157f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1abeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_157FA:
    /* 000157fa   2  ext.l D0 */
    c->pc = RC_ADDR(0x000157fau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_157FC:
    /* 000157fc   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000157fcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_157FE:
    /* 000157fe   4  clr.b (0,A0,D1.w) */
    c->pc = RC_ADDR(0x000157feu);
    rc_step(c, m, 18);
    t4 = c->d[1];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_15802:
    /* 00015802   6  move.w #1,(6c4,A4) */
    c->pc = RC_ADDR(0x00015802u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x6c4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15808:
    /* 00015808   6  move.w #64,(6c6,A4) */
    c->pc = RC_ADDR(0x00015808u);
    rc_step(c, m, 16);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[4] + 0x6c6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1580E:
    /* 0001580e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001580eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15812:
    /* 00015812   6  move.b #ff,(c,A0) */
    c->pc = RC_ADDR(0x00015812u);
    rc_step(c, m, 16);
    t0 = 0x000000ffu;
    rc_wr8(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_15818:
    /* 00015818   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015818u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1581C:
    /* 0001581c   4  clr.w (2,A0) */
    c->pc = RC_ADDR(0x0001581cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[0] + 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15820:
    /* 00015820   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00015820u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_15824:
    /* 00015824   2  clr.w (A0) */
    c->pc = RC_ADDR(0x00015824u);
    rc_step(c, m, 12);
    rc_wr16(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15826:
    /* 00015826   2  bra 00015832 */
    c->pc = RC_ADDR(0x00015826u);
    rc_step(c, m, 10);
    goto L_15832;

L_15828:
    /* 00015828   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00015828u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1582C:
    /* 0001582c   4  jsr (00014858) */
    c->pc = RC_ADDR(0x0001582cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00015830u));
    rc_depth++;
    c->pc = RC_ADDR(0x00014858u);
    return;

L_15830:
    /* 00015830   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00015830u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_15832:
    /* 00015832   2  bra 0001583e */
    c->pc = RC_ADDR(0x00015832u);
    rc_step(c, m, 10);
    goto L_1583E;

L_15834:
    /* 00015834   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00015834u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_15838:
    /* 00015838   4  jsr (00014858) */
    c->pc = RC_ADDR(0x00015838u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001583cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00014858u);
    return;

L_1583C:
    /* 0001583c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001583cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1583E:
    /* 0001583e   4  tst.b (fffffff1,A5) */
    c->pc = RC_ADDR(0x0001583eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    rc_set_nzvc(c, t0, RC_B);

L_15842:
    /* 00015842   2  bne 00015850 */
    c->pc = RC_ADDR(0x00015842u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15850;

L_15844:
    /* 00015844   4  tst.w (1ac2,A4) */
    c->pc = RC_ADDR(0x00015844u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ac2u));
    rc_set_nzvc(c, t0, RC_W);

L_15848:
    /* 00015848   2  bne 00015850 */
    c->pc = RC_ADDR(0x00015848u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_15850;

L_1584A:
    /* 0001584a   6  move.w #1,(6c8,A4) */
    c->pc = RC_ADDR(0x0001584au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x6c8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_15850:
    /* 00015850   4  addq.w #1,(ffffb374,A4) */
    c->pc = RC_ADDR(0x00015850u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x4c8cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15854:
    /* 00015854   6  cmpi.w #8,(ffffb374,A4) */
    c->pc = RC_ADDR(0x00015854u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4c8cu));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_1585A:
    /* 0001585a   2  blt 00015860 */
    c->pc = RC_ADDR(0x0001585au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_15860;

L_1585C:
    /* 0001585c   4  clr.w (ffffb374,A4) */
    c->pc = RC_ADDR(0x0001585cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x4c8cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15860:
    /* 00015860   4  addq.w #1,(6aa,A4) */
    c->pc = RC_ADDR(0x00015860u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x6aau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15864:
    /* 00015864   6  cmpi.w #1e,(6aa,A4) */
    c->pc = RC_ADDR(0x00015864u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6aau));
    rc_cmp(c, RC_W, t0, 0x0000001eu);

L_1586A:
    /* 0001586a   2  blt 00015870 */
    c->pc = RC_ADDR(0x0001586au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_15870;

L_1586C:
    /* 0001586c   4  clr.w (6aa,A4) */
    c->pc = RC_ADDR(0x0001586cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x6aau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_15870:
    /* 00015870   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00015870u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_15874:
    /* 00015874   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00015874u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15878:
    /* 00015878   4  cmp.w (6b8,A4),D0 */
    c->pc = RC_ADDR(0x00015878u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x6b8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1587C:
    /* 0001587c   4  blt 0001564a */
    c->pc = RC_ADDR(0x0001587cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1564A; }

L_15880:
    /* 00015880   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00015880u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15884:
    /* 00015884   4  bra 00015710 */
    c->pc = RC_ADDR(0x00015884u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_15710;

}
