/* fn_00003706 - 488 byte(s), 146 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00003706(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00003706u): goto L_3706;
    case RC_ADDR(0x0000370au): goto L_370A;
    case RC_ADDR(0x00003710u): goto L_3710;
    case RC_ADDR(0x00003712u): goto L_3712;
    case RC_ADDR(0x00003716u): goto L_3716;
    case RC_ADDR(0x0000371au): goto L_371A;
    case RC_ADDR(0x0000371cu): goto L_371C;
    case RC_ADDR(0x00003720u): goto L_3720;
    case RC_ADDR(0x00003724u): goto L_3724;
    case RC_ADDR(0x00003728u): goto L_3728;
    case RC_ADDR(0x0000372eu): goto L_372E;
    case RC_ADDR(0x00003734u): goto L_3734;
    case RC_ADDR(0x00003738u): goto L_3738;
    case RC_ADDR(0x0000373au): goto L_373A;
    case RC_ADDR(0x0000373cu): goto L_373C;
    case RC_ADDR(0x0000373eu): goto L_373E;
    case RC_ADDR(0x00003740u): goto L_3740;
    case RC_ADDR(0x00003746u): goto L_3746;
    case RC_ADDR(0x00003748u): goto L_3748;
    case RC_ADDR(0x0000374cu): goto L_374C;
    case RC_ADDR(0x00003750u): goto L_3750;
    case RC_ADDR(0x00003754u): goto L_3754;
    case RC_ADDR(0x00003758u): goto L_3758;
    case RC_ADDR(0x0000375eu): goto L_375E;
    case RC_ADDR(0x00003762u): goto L_3762;
    case RC_ADDR(0x00003764u): goto L_3764;
    case RC_ADDR(0x00003766u): goto L_3766;
    case RC_ADDR(0x00003768u): goto L_3768;
    case RC_ADDR(0x0000376au): goto L_376A;
    case RC_ADDR(0x0000376cu): goto L_376C;
    case RC_ADDR(0x00003772u): goto L_3772;
    case RC_ADDR(0x00003774u): goto L_3774;
    case RC_ADDR(0x00003778u): goto L_3778;
    case RC_ADDR(0x0000377cu): goto L_377C;
    case RC_ADDR(0x00003780u): goto L_3780;
    case RC_ADDR(0x00003784u): goto L_3784;
    case RC_ADDR(0x00003786u): goto L_3786;
    case RC_ADDR(0x00003788u): goto L_3788;
    case RC_ADDR(0x0000378au): goto L_378A;
    case RC_ADDR(0x0000378eu): goto L_378E;
    case RC_ADDR(0x00003792u): goto L_3792;
    case RC_ADDR(0x00003796u): goto L_3796;
    case RC_ADDR(0x0000379au): goto L_379A;
    case RC_ADDR(0x0000379eu): goto L_379E;
    case RC_ADDR(0x000037a2u): goto L_37A2;
    case RC_ADDR(0x000037a4u): goto L_37A4;
    case RC_ADDR(0x000037a8u): goto L_37A8;
    case RC_ADDR(0x000037aau): goto L_37AA;
    case RC_ADDR(0x000037aeu): goto L_37AE;
    case RC_ADDR(0x000037b2u): goto L_37B2;
    case RC_ADDR(0x000037b4u): goto L_37B4;
    case RC_ADDR(0x000037bau): goto L_37BA;
    case RC_ADDR(0x000037c0u): goto L_37C0;
    case RC_ADDR(0x000037c2u): goto L_37C2;
    case RC_ADDR(0x000037c8u): goto L_37C8;
    case RC_ADDR(0x000037ceu): goto L_37CE;
    case RC_ADDR(0x000037d2u): goto L_37D2;
    case RC_ADDR(0x000037d4u): goto L_37D4;
    case RC_ADDR(0x000037d8u): goto L_37D8;
    case RC_ADDR(0x000037dcu): goto L_37DC;
    case RC_ADDR(0x000037deu): goto L_37DE;
    case RC_ADDR(0x000037e0u): goto L_37E0;
    case RC_ADDR(0x000037e4u): goto L_37E4;
    case RC_ADDR(0x000037e8u): goto L_37E8;
    case RC_ADDR(0x000037ecu): goto L_37EC;
    case RC_ADDR(0x000037eeu): goto L_37EE;
    case RC_ADDR(0x000037f0u): goto L_37F0;
    case RC_ADDR(0x000037f2u): goto L_37F2;
    case RC_ADDR(0x000037f6u): goto L_37F6;
    case RC_ADDR(0x000037fau): goto L_37FA;
    case RC_ADDR(0x000037feu): goto L_37FE;
    case RC_ADDR(0x00003800u): goto L_3800;
    case RC_ADDR(0x00003804u): goto L_3804;
    case RC_ADDR(0x00003806u): goto L_3806;
    case RC_ADDR(0x00003808u): goto L_3808;
    case RC_ADDR(0x0000380cu): goto L_380C;
    case RC_ADDR(0x00003810u): goto L_3810;
    case RC_ADDR(0x00003814u): goto L_3814;
    case RC_ADDR(0x00003818u): goto L_3818;
    case RC_ADDR(0x0000381cu): goto L_381C;
    case RC_ADDR(0x00003820u): goto L_3820;
    case RC_ADDR(0x00003824u): goto L_3824;
    case RC_ADDR(0x00003826u): goto L_3826;
    case RC_ADDR(0x0000382au): goto L_382A;
    case RC_ADDR(0x0000382cu): goto L_382C;
    case RC_ADDR(0x0000382eu): goto L_382E;
    case RC_ADDR(0x00003832u): goto L_3832;
    case RC_ADDR(0x00003836u): goto L_3836;
    case RC_ADDR(0x00003838u): goto L_3838;
    case RC_ADDR(0x0000383cu): goto L_383C;
    case RC_ADDR(0x0000383eu): goto L_383E;
    case RC_ADDR(0x00003842u): goto L_3842;
    case RC_ADDR(0x00003844u): goto L_3844;
    case RC_ADDR(0x00003846u): goto L_3846;
    case RC_ADDR(0x0000384au): goto L_384A;
    case RC_ADDR(0x0000384cu): goto L_384C;
    case RC_ADDR(0x00003850u): goto L_3850;
    case RC_ADDR(0x00003854u): goto L_3854;
    case RC_ADDR(0x00003858u): goto L_3858;
    case RC_ADDR(0x0000385au): goto L_385A;
    case RC_ADDR(0x0000385cu): goto L_385C;
    case RC_ADDR(0x00003860u): goto L_3860;
    case RC_ADDR(0x00003864u): goto L_3864;
    case RC_ADDR(0x00003866u): goto L_3866;
    case RC_ADDR(0x00003868u): goto L_3868;
    case RC_ADDR(0x0000386cu): goto L_386C;
    case RC_ADDR(0x00003870u): goto L_3870;
    case RC_ADDR(0x00003872u): goto L_3872;
    case RC_ADDR(0x00003874u): goto L_3874;
    case RC_ADDR(0x00003878u): goto L_3878;
    case RC_ADDR(0x0000387au): goto L_387A;
    case RC_ADDR(0x0000387cu): goto L_387C;
    case RC_ADDR(0x0000387eu): goto L_387E;
    case RC_ADDR(0x00003882u): goto L_3882;
    case RC_ADDR(0x00003886u): goto L_3886;
    case RC_ADDR(0x0000388au): goto L_388A;
    case RC_ADDR(0x0000388eu): goto L_388E;
    case RC_ADDR(0x00003890u): goto L_3890;
    case RC_ADDR(0x00003894u): goto L_3894;
    case RC_ADDR(0x00003896u): goto L_3896;
    case RC_ADDR(0x0000389au): goto L_389A;
    case RC_ADDR(0x0000389cu): goto L_389C;
    case RC_ADDR(0x0000389eu): goto L_389E;
    case RC_ADDR(0x000038a2u): goto L_38A2;
    case RC_ADDR(0x000038a4u): goto L_38A4;
    case RC_ADDR(0x000038a8u): goto L_38A8;
    case RC_ADDR(0x000038aau): goto L_38AA;
    case RC_ADDR(0x000038aeu): goto L_38AE;
    case RC_ADDR(0x000038b2u): goto L_38B2;
    case RC_ADDR(0x000038b6u): goto L_38B6;
    case RC_ADDR(0x000038bau): goto L_38BA;
    case RC_ADDR(0x000038bcu): goto L_38BC;
    case RC_ADDR(0x000038c0u): goto L_38C0;
    case RC_ADDR(0x000038c4u): goto L_38C4;
    case RC_ADDR(0x000038c6u): goto L_38C6;
    case RC_ADDR(0x000038cau): goto L_38CA;
    case RC_ADDR(0x000038ceu): goto L_38CE;
    case RC_ADDR(0x000038d2u): goto L_38D2;
    case RC_ADDR(0x000038d6u): goto L_38D6;
    case RC_ADDR(0x000038dcu): goto L_38DC;
    case RC_ADDR(0x000038deu): goto L_38DE;
    case RC_ADDR(0x000038e0u): goto L_38E0;
    case RC_ADDR(0x000038e4u): goto L_38E4;
    case RC_ADDR(0x000038e8u): goto L_38E8;
    case RC_ADDR(0x000038eau): goto L_38EA;
    case RC_ADDR(0x000038ecu): goto L_38EC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3706:
    /* 00003706   4  link.w A5,#ffffffc6 */
    c->pc = RC_ADDR(0x00003706u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x3au;

L_370A:
    /* 0000370a   6  cmpi.w #c8,(ffffcbc2,A4) */
    c->pc = RC_ADDR(0x0000370au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x343eu));
    rc_cmp(c, RC_W, t0, 0x000000c8u);

L_3710:
    /* 00003710   2  bge 00003728 */
    c->pc = RC_ADDR(0x00003710u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_3728;

L_3712:
    /* 00003712   4  move.w (ffffefea,A4),D0 */
    c->pc = RC_ADDR(0x00003712u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1016u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3716:
    /* 00003716   4  cmp.w (ffffeff4,A4),D0 */
    c->pc = RC_ADDR(0x00003716u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x100cu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_371A:
    /* 0000371a   2  bne 00003728 */
    c->pc = RC_ADDR(0x0000371au);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_3728;

L_371C:
    /* 0000371c   4  move.w #c8,D0 */
    c->pc = RC_ADDR(0x0000371cu);
    rc_step(c, m);
    t0 = 0x000000c8u;
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3720:
    /* 00003720   4  sub.w (ffffcbc2,A4),D0 */
    c->pc = RC_ADDR(0x00003720u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x343eu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3724:
    /* 00003724   4  sub.w D0,(ffffefea,A4) */
    c->pc = RC_ADDR(0x00003724u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x1016u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_3728:
    /* 00003728   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x00003728u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_372E:
    /* 0000372e   6  pea (00020000).l */
    c->pc = RC_ADDR(0x0000372eu);
    rc_step(c, m);
    rc_push32(c, m, 0x00020000u);

L_3734:
    /* 00003734   4  move.w (ffffefea,A4),D0 */
    c->pc = RC_ADDR(0x00003734u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1016u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3738:
    /* 00003738   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003738u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_373A:
    /* 0000373a   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0000373au);
    rc_step(c, m);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_373C:
    /* 0000373c   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x0000373cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_373E:
    /* 0000373e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000373eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3740:
    /* 00003740   6  pea (00660000).l */
    c->pc = RC_ADDR(0x00003740u);
    rc_step(c, m);
    rc_push32(c, m, 0x00660000u);

L_3746:
    /* 00003746   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003746u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3748:
    /* 00003748   4  move.l (ffffefd8,A4),-(A7) */
    c->pc = RC_ADDR(0x00003748u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1028u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_374C:
    /* 0000374c   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000374cu);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3750:
    /* 00003750   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00003750u);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00003754u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_3754:
    /* 00003754   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00003754u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_3758:
    /* 00003758   6  pea (00020000).l */
    c->pc = RC_ADDR(0x00003758u);
    rc_step(c, m);
    rc_push32(c, m, 0x00020000u);

L_375E:
    /* 0000375e   4  move.w (ffffefea,A4),D0 */
    c->pc = RC_ADDR(0x0000375eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1016u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3762:
    /* 00003762   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00003762u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3764:
    /* 00003764   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003764u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_3766:
    /* 00003766   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00003766u);
    rc_step(c, m);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3768:
    /* 00003768   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00003768u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_376A:
    /* 0000376a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000376au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_376C:
    /* 0000376c   6  pea (00b20000).l */
    c->pc = RC_ADDR(0x0000376cu);
    rc_step(c, m);
    rc_push32(c, m, 0x00b20000u);

L_3772:
    /* 00003772   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003772u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3774:
    /* 00003774   4  move.l (ffffefdc,A4),-(A7) */
    c->pc = RC_ADDR(0x00003774u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1024u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3778:
    /* 00003778   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00003778u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_377C:
    /* 0000377c   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000377cu);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00003780u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_3780:
    /* 00003780   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00003780u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_3784:
    /* 00003784   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003784u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3786:
    /* 00003786   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00003786u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3788:
    /* 00003788   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00003788u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_378A:
    /* 0000378a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000378au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_378E:
    /* 0000378e   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000378eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3792:
    /* 00003792   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x00003792u);
    rc_step(c, m);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x00003796u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_3796:
    /* 00003796   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00003796u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_379A:
    /* 0000379a   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x0000379au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_379E:
    /* 0000379e   4  cmp.w (ffffefec,A4),D0 */
    c->pc = RC_ADDR(0x0000379eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1014u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_37A2:
    /* 000037a2   2  bne 000037aa */
    c->pc = RC_ADDR(0x000037a2u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_37AA;

L_37A4:
    /* 000037a4   4  clr.w (ffffefee,A4) */
    c->pc = RC_ADDR(0x000037a4u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x1012u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_37A8:
    /* 000037a8   2  bra 000037fe */
    c->pc = RC_ADDR(0x000037a8u);
    rc_step(c, m);
    goto L_37FE;

L_37AA:
    /* 000037aa   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x000037aau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_37AE:
    /* 000037ae   4  cmp.w (ffffefec,A4),D0 */
    c->pc = RC_ADDR(0x000037aeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1014u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_37B2:
    /* 000037b2   2  bcc 000037c2 */
    c->pc = RC_ADDR(0x000037b2u);
    rc_step(c, m);
    if (rc_cond(c, 4)) goto L_37C2;

L_37B4:
    /* 000037b4   6  move.w (ffffefe4,A4),(fffffffe,A5) */
    c->pc = RC_ADDR(0x000037b4u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_37BA:
    /* 000037ba   6  move.w (ffffefec,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x000037bau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1014u));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_37C0:
    /* 000037c0   2  bra 000037ce */
    c->pc = RC_ADDR(0x000037c0u);
    rc_step(c, m);
    goto L_37CE;

L_37C2:
    /* 000037c2   6  move.w (ffffefec,A4),(fffffffe,A5) */
    c->pc = RC_ADDR(0x000037c2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1014u));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_37C8:
    /* 000037c8   6  move.w (ffffefe4,A4),(fffffffc,A5) */
    c->pc = RC_ADDR(0x000037c8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_37CE:
    /* 000037ce   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000037ceu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_37D2:
    /* 000037d2   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000037d2u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_37D4:
    /* 000037d4   4  sub.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000037d4u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_37D8:
    /* 000037d8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000037d8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_37DC:
    /* 000037dc   2  ext.l D0 */
    c->pc = RC_ADDR(0x000037dcu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_37DE:
    /* 000037de   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000037deu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_37E0:
    /* 000037e0   4  lea (ffffff56,A4),A0 */
    c->pc = RC_ADDR(0x000037e0u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0xaau);

L_37E4:
    /* 000037e4   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000037e4u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_37E8:
    /* 000037e8   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000037e8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_37EC:
    /* 000037ec   2  ext.l D0 */
    c->pc = RC_ADDR(0x000037ecu);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_37EE:
    /* 000037ee   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000037eeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_37F0:
    /* 000037f0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000037f0u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_37F2:
    /* 000037f2   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000037f2u);
    rc_step(c, m);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_37F6:
    /* 000037f6   4  mulu.w #5,D0 */
    c->pc = RC_ADDR(0x000037f6u);
    rc_step(c, m);
    t0 = 0x00000005u;
    rc_mulu(c, 0, t0);

L_37FA:
    /* 000037fa   4  move.w D0,(ffffefee,A4) */
    c->pc = RC_ADDR(0x000037fau);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x1012u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_37FE:
    /* 000037fe   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000037feu);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3800:
    /* 00003800   4  move.w (ffffefea,A4),D0 */
    c->pc = RC_ADDR(0x00003800u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1016u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3804:
    /* 00003804   2  subq.w #7,D0 */
    c->pc = RC_ADDR(0x00003804u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000007u;
    rc_flags_sub(c, RC_W, t1, 0x00000007u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3806:
    /* 00003806   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003806u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3808:
    /* 00003808   4  move.w #52,-(A7) */
    c->pc = RC_ADDR(0x00003808u);
    rc_step(c, m);
    t0 = 0x00000052u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_380C:
    /* 0000380c   4  move.w (ffffefec,A4),D0 */
    c->pc = RC_ADDR(0x0000380cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1014u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3810:
    /* 00003810   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00003810u);
    rc_step(c, m);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_3814:
    /* 00003814   4  lea (ffff8578,A4),A0 */
    c->pc = RC_ADDR(0x00003814u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7a88u);

L_3818:
    /* 00003818   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00003818u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_381C:
    /* 0000381c   4  jsr (00004e2e) */
    c->pc = RC_ADDR(0x0000381cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003820u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004e2eu);
    return;

L_3820:
    /* 00003820   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00003820u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_3824:
    /* 00003824   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003824u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3826:
    /* 00003826   4  move.w (ffffefea,A4),D0 */
    c->pc = RC_ADDR(0x00003826u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1016u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_382A:
    /* 0000382a   2  addq.w #3,D0 */
    c->pc = RC_ADDR(0x0000382au);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000003u;
    rc_flags_add(c, RC_W, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_382C:
    /* 0000382c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000382cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_382E:
    /* 0000382e   4  move.w #52,-(A7) */
    c->pc = RC_ADDR(0x0000382eu);
    rc_step(c, m);
    t0 = 0x00000052u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3832:
    /* 00003832   4  jsr (000055ba) */
    c->pc = RC_ADDR(0x00003832u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003836u));
    rc_depth++;
    c->pc = RC_ADDR(0x000055bau);
    return;

L_3836:
    /* 00003836   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00003836u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_3838:
    /* 00003838   4  tst.w (fffff1c6,A4) */
    c->pc = RC_ADDR(0x00003838u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe3au));
    rc_set_nzvc(c, t0, RC_W);

L_383C:
    /* 0000383c   2  beq 00003890 */
    c->pc = RC_ADDR(0x0000383cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3890;

L_383E:
    /* 0000383e   4  move.w (ffffefec,A4),D0 */
    c->pc = RC_ADDR(0x0000383eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1014u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3842:
    /* 00003842   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003842u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_3844:
    /* 00003844   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00003844u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_3846:
    /* 00003846   4  lea (fffff102,A4),A0 */
    c->pc = RC_ADDR(0x00003846u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0xefeu);

L_384A:
    /* 0000384a   2  add.l A0,D0 */
    c->pc = RC_ADDR(0x0000384au);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_384C:
    /* 0000384c   4  move.l D0,(ffffffc6,A5) */
    c->pc = RC_ADDR(0x0000384cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x3au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3850:
    /* 00003850   4  movea.l (ffffffc6,A5),A0 */
    c->pc = RC_ADDR(0x00003850u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    c->a[0] = t0;

L_3854:
    /* 00003854   4  move.b (3,A0),D0 */
    c->pc = RC_ADDR(0x00003854u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x3u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_3858:
    /* 00003858   2  ext.w D0 */
    c->pc = RC_ADDR(0x00003858u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_385A:
    /* 0000385a   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000385au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_385C:
    /* 0000385c   4  movea.l (ffffffc6,A5),A0 */
    c->pc = RC_ADDR(0x0000385cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    c->a[0] = t0;

L_3860:
    /* 00003860   4  move.b (2,A0),D0 */
    c->pc = RC_ADDR(0x00003860u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_3864:
    /* 00003864   2  ext.w D0 */
    c->pc = RC_ADDR(0x00003864u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_3866:
    /* 00003866   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003866u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3868:
    /* 00003868   4  movea.l (ffffffc6,A5),A0 */
    c->pc = RC_ADDR(0x00003868u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    c->a[0] = t0;

L_386C:
    /* 0000386c   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x0000386cu);
    rc_step(c, m);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_3870:
    /* 00003870   2  ext.w D0 */
    c->pc = RC_ADDR(0x00003870u);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_3872:
    /* 00003872   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003872u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3874:
    /* 00003874   4  movea.l (ffffffc6,A5),A0 */
    c->pc = RC_ADDR(0x00003874u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    c->a[0] = t0;

L_3878:
    /* 00003878   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00003878u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_387A:
    /* 0000387a   2  ext.w D0 */
    c->pc = RC_ADDR(0x0000387au);
    rc_step(c, m);
    rc_ext_w(c, 0);

L_387C:
    /* 0000387c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000387cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_387E:
    /* 0000387e   4  pea (000038ee) */
    c->pc = RC_ADDR(0x0000387eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000038eeu));

L_3882:
    /* 00003882   4  pea (ffffffca,A5) */
    c->pc = RC_ADDR(0x00003882u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x36u));

L_3886:
    /* 00003886   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x00003886u);
    rc_step(c, m);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x0000388au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d28u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_388A:
    /* 0000388a   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x0000388au);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x10u);

L_388E:
    /* 0000388e   2  bra 000038ba */
    c->pc = RC_ADDR(0x0000388eu);
    rc_step(c, m);
    goto L_38BA;

L_3890:
    /* 00003890   4  move.w (ffffefee,A4),D0 */
    c->pc = RC_ADDR(0x00003890u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1012u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3894:
    /* 00003894   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003894u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_3896:
    /* 00003896   4  divs.w #3c,D0 */
    c->pc = RC_ADDR(0x00003896u);
    rc_step(c, m);
    t0 = 0x0000003cu;
    rc_divs(c, m, 0, t0);

L_389A:
    /* 0000389a   2  swap D0 */
    c->pc = RC_ADDR(0x0000389au);
    rc_step(c, m);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_389C:
    /* 0000389c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000389cu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_389E:
    /* 0000389e   4  move.w (ffffefee,A4),D0 */
    c->pc = RC_ADDR(0x0000389eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1012u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_38A2:
    /* 000038a2   2  ext.l D0 */
    c->pc = RC_ADDR(0x000038a2u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_38A4:
    /* 000038a4   4  divs.w #3c,D0 */
    c->pc = RC_ADDR(0x000038a4u);
    rc_step(c, m);
    t0 = 0x0000003cu;
    rc_divs(c, m, 0, t0);

L_38A8:
    /* 000038a8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000038a8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_38AA:
    /* 000038aa   4  pea (00003902) */
    c->pc = RC_ADDR(0x000038aau);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003902u));

L_38AE:
    /* 000038ae   4  pea (ffffffca,A5) */
    c->pc = RC_ADDR(0x000038aeu);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x36u));

L_38B2:
    /* 000038b2   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x000038b2u);
    rc_step(c, m);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x000038b6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d28u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_38B6:
    /* 000038b6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000038b6u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_38BA:
    /* 000038ba   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000038bau);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_38BC:
    /* 000038bc   4  move.w (ffffefea,A4),D0 */
    c->pc = RC_ADDR(0x000038bcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1016u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_38C0:
    /* 000038c0   4  add.w #d,D0 */
    c->pc = RC_ADDR(0x000038c0u);
    rc_step(c, m);
    t0 = 0x0000000du;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_38C4:
    /* 000038c4   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000038c4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_38C6:
    /* 000038c6   4  move.w #52,-(A7) */
    c->pc = RC_ADDR(0x000038c6u);
    rc_step(c, m);
    t0 = 0x00000052u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_38CA:
    /* 000038ca   4  pea (ffffffca,A5) */
    c->pc = RC_ADDR(0x000038cau);
    rc_step(c, m);
    rc_push32(c, m, (c->a[5] - 0x36u));

L_38CE:
    /* 000038ce   4  jsr (00004e2e) */
    c->pc = RC_ADDR(0x000038ceu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000038d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004e2eu);
    return;

L_38D2:
    /* 000038d2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000038d2u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xau);

L_38D6:
    /* 000038d6   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x000038d6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_38DC:
    /* 000038dc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000038dcu);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_38DE:
    /* 000038de   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000038deu);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_38E0:
    /* 000038e0   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x000038e0u);
    rc_step(c, m);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_38E4:
    /* 000038e4   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x000038e4u);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x000038e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_38E8:
    /* 000038e8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000038e8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_38EA:
    /* 000038ea   2  unlk A5 */
    c->pc = RC_ADDR(0x000038eau);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_38EC:
    /* 000038ec   2  rts */
    c->pc = RC_ADDR(0x000038ecu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
