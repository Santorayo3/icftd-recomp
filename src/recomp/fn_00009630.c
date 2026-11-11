/* fn_00009630 - 570 byte(s), 162 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00009630(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00009630u): goto L_9630;
    case RC_ADDR(0x00009634u): goto L_9634;
    case RC_ADDR(0x00009638u): goto L_9638;
    case RC_ADDR(0x0000963cu): goto L_963C;
    case RC_ADDR(0x0000963eu): goto L_963E;
    case RC_ADDR(0x00009642u): goto L_9642;
    case RC_ADDR(0x00009646u): goto L_9646;
    case RC_ADDR(0x00009648u): goto L_9648;
    case RC_ADDR(0x0000964eu): goto L_964E;
    case RC_ADDR(0x00009652u): goto L_9652;
    case RC_ADDR(0x00009656u): goto L_9656;
    case RC_ADDR(0x00009658u): goto L_9658;
    case RC_ADDR(0x0000965cu): goto L_965C;
    case RC_ADDR(0x0000965eu): goto L_965E;
    case RC_ADDR(0x00009660u): goto L_9660;
    case RC_ADDR(0x00009662u): goto L_9662;
    case RC_ADDR(0x00009664u): goto L_9664;
    case RC_ADDR(0x00009668u): goto L_9668;
    case RC_ADDR(0x0000966cu): goto L_966C;
    case RC_ADDR(0x00009670u): goto L_9670;
    case RC_ADDR(0x00009674u): goto L_9674;
    case RC_ADDR(0x00009678u): goto L_9678;
    case RC_ADDR(0x0000967cu): goto L_967C;
    case RC_ADDR(0x00009682u): goto L_9682;
    case RC_ADDR(0x00009686u): goto L_9686;
    case RC_ADDR(0x00009688u): goto L_9688;
    case RC_ADDR(0x0000968cu): goto L_968C;
    case RC_ADDR(0x0000968eu): goto L_968E;
    case RC_ADDR(0x00009692u): goto L_9692;
    case RC_ADDR(0x00009694u): goto L_9694;
    case RC_ADDR(0x00009696u): goto L_9696;
    case RC_ADDR(0x00009698u): goto L_9698;
    case RC_ADDR(0x0000969au): goto L_969A;
    case RC_ADDR(0x0000969eu): goto L_969E;
    case RC_ADDR(0x000096a2u): goto L_96A2;
    case RC_ADDR(0x000096a6u): goto L_96A6;
    case RC_ADDR(0x000096aau): goto L_96AA;
    case RC_ADDR(0x000096aeu): goto L_96AE;
    case RC_ADDR(0x000096b0u): goto L_96B0;
    case RC_ADDR(0x000096b4u): goto L_96B4;
    case RC_ADDR(0x000096b8u): goto L_96B8;
    case RC_ADDR(0x000096bcu): goto L_96BC;
    case RC_ADDR(0x000096c0u): goto L_96C0;
    case RC_ADDR(0x000096c2u): goto L_96C2;
    case RC_ADDR(0x000096c6u): goto L_96C6;
    case RC_ADDR(0x000096cau): goto L_96CA;
    case RC_ADDR(0x000096ceu): goto L_96CE;
    case RC_ADDR(0x000096d0u): goto L_96D0;
    case RC_ADDR(0x000096d4u): goto L_96D4;
    case RC_ADDR(0x000096d8u): goto L_96D8;
    case RC_ADDR(0x000096dcu): goto L_96DC;
    case RC_ADDR(0x000096e0u): goto L_96E0;
    case RC_ADDR(0x000096e4u): goto L_96E4;
    case RC_ADDR(0x000096e8u): goto L_96E8;
    case RC_ADDR(0x000096ecu): goto L_96EC;
    case RC_ADDR(0x000096f0u): goto L_96F0;
    case RC_ADDR(0x000096f4u): goto L_96F4;
    case RC_ADDR(0x000096f8u): goto L_96F8;
    case RC_ADDR(0x000096fcu): goto L_96FC;
    case RC_ADDR(0x000096feu): goto L_96FE;
    case RC_ADDR(0x00009702u): goto L_9702;
    case RC_ADDR(0x00009706u): goto L_9706;
    case RC_ADDR(0x0000970au): goto L_970A;
    case RC_ADDR(0x0000970eu): goto L_970E;
    case RC_ADDR(0x00009710u): goto L_9710;
    case RC_ADDR(0x00009714u): goto L_9714;
    case RC_ADDR(0x00009718u): goto L_9718;
    case RC_ADDR(0x0000971cu): goto L_971C;
    case RC_ADDR(0x0000971eu): goto L_971E;
    case RC_ADDR(0x00009722u): goto L_9722;
    case RC_ADDR(0x00009726u): goto L_9726;
    case RC_ADDR(0x0000972au): goto L_972A;
    case RC_ADDR(0x0000972eu): goto L_972E;
    case RC_ADDR(0x00009732u): goto L_9732;
    case RC_ADDR(0x00009736u): goto L_9736;
    case RC_ADDR(0x0000973au): goto L_973A;
    case RC_ADDR(0x0000973eu): goto L_973E;
    case RC_ADDR(0x00009742u): goto L_9742;
    case RC_ADDR(0x00009746u): goto L_9746;
    case RC_ADDR(0x0000974au): goto L_974A;
    case RC_ADDR(0x0000974eu): goto L_974E;
    case RC_ADDR(0x00009752u): goto L_9752;
    case RC_ADDR(0x00009756u): goto L_9756;
    case RC_ADDR(0x0000975au): goto L_975A;
    case RC_ADDR(0x0000975eu): goto L_975E;
    case RC_ADDR(0x00009762u): goto L_9762;
    case RC_ADDR(0x00009766u): goto L_9766;
    case RC_ADDR(0x0000976au): goto L_976A;
    case RC_ADDR(0x0000976eu): goto L_976E;
    case RC_ADDR(0x00009772u): goto L_9772;
    case RC_ADDR(0x00009776u): goto L_9776;
    case RC_ADDR(0x0000977au): goto L_977A;
    case RC_ADDR(0x0000977eu): goto L_977E;
    case RC_ADDR(0x00009782u): goto L_9782;
    case RC_ADDR(0x00009786u): goto L_9786;
    case RC_ADDR(0x0000978au): goto L_978A;
    case RC_ADDR(0x0000978eu): goto L_978E;
    case RC_ADDR(0x00009792u): goto L_9792;
    case RC_ADDR(0x00009796u): goto L_9796;
    case RC_ADDR(0x0000979au): goto L_979A;
    case RC_ADDR(0x0000979cu): goto L_979C;
    case RC_ADDR(0x000097a0u): goto L_97A0;
    case RC_ADDR(0x000097a4u): goto L_97A4;
    case RC_ADDR(0x000097a6u): goto L_97A6;
    case RC_ADDR(0x000097aau): goto L_97AA;
    case RC_ADDR(0x000097aeu): goto L_97AE;
    case RC_ADDR(0x000097b0u): goto L_97B0;
    case RC_ADDR(0x000097b2u): goto L_97B2;
    case RC_ADDR(0x000097b6u): goto L_97B6;
    case RC_ADDR(0x000097bau): goto L_97BA;
    case RC_ADDR(0x000097bcu): goto L_97BC;
    case RC_ADDR(0x000097c0u): goto L_97C0;
    case RC_ADDR(0x000097c4u): goto L_97C4;
    case RC_ADDR(0x000097c6u): goto L_97C6;
    case RC_ADDR(0x000097c8u): goto L_97C8;
    case RC_ADDR(0x000097cau): goto L_97CA;
    case RC_ADDR(0x000097d0u): goto L_97D0;
    case RC_ADDR(0x000097d4u): goto L_97D4;
    case RC_ADDR(0x000097dau): goto L_97DA;
    case RC_ADDR(0x000097deu): goto L_97DE;
    case RC_ADDR(0x000097e0u): goto L_97E0;
    case RC_ADDR(0x000097e4u): goto L_97E4;
    case RC_ADDR(0x000097e6u): goto L_97E6;
    case RC_ADDR(0x000097eau): goto L_97EA;
    case RC_ADDR(0x000097f0u): goto L_97F0;
    case RC_ADDR(0x000097f4u): goto L_97F4;
    case RC_ADDR(0x000097fau): goto L_97FA;
    case RC_ADDR(0x000097feu): goto L_97FE;
    case RC_ADDR(0x00009800u): goto L_9800;
    case RC_ADDR(0x00009804u): goto L_9804;
    case RC_ADDR(0x00009806u): goto L_9806;
    case RC_ADDR(0x0000980au): goto L_980A;
    case RC_ADDR(0x0000980cu): goto L_980C;
    case RC_ADDR(0x00009810u): goto L_9810;
    case RC_ADDR(0x00009812u): goto L_9812;
    case RC_ADDR(0x00009814u): goto L_9814;
    case RC_ADDR(0x00009816u): goto L_9816;
    case RC_ADDR(0x00009818u): goto L_9818;
    case RC_ADDR(0x0000981au): goto L_981A;
    case RC_ADDR(0x0000981eu): goto L_981E;
    case RC_ADDR(0x00009820u): goto L_9820;
    case RC_ADDR(0x00009826u): goto L_9826;
    case RC_ADDR(0x0000982au): goto L_982A;
    case RC_ADDR(0x00009830u): goto L_9830;
    case RC_ADDR(0x00009832u): goto L_9832;
    case RC_ADDR(0x00009834u): goto L_9834;
    case RC_ADDR(0x00009836u): goto L_9836;
    case RC_ADDR(0x00009838u): goto L_9838;
    case RC_ADDR(0x0000983cu): goto L_983C;
    case RC_ADDR(0x00009840u): goto L_9840;
    case RC_ADDR(0x00009844u): goto L_9844;
    case RC_ADDR(0x00009848u): goto L_9848;
    case RC_ADDR(0x0000984au): goto L_984A;
    case RC_ADDR(0x0000984eu): goto L_984E;
    case RC_ADDR(0x00009852u): goto L_9852;
    case RC_ADDR(0x00009856u): goto L_9856;
    case RC_ADDR(0x00009858u): goto L_9858;
    case RC_ADDR(0x0000985cu): goto L_985C;
    case RC_ADDR(0x00009860u): goto L_9860;
    case RC_ADDR(0x00009864u): goto L_9864;
    case RC_ADDR(0x00009866u): goto L_9866;
    case RC_ADDR(0x00009868u): goto L_9868;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9630:
    /* 00009630   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00009630u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_9634:
    /* 00009634   4  jsr (ffff816a,A4) */
    c->pc = RC_ADDR(0x00009634u);
    rc_step(c, m, 18);
    /* vector 60 */
    rc_push32(c, m, RC_ADDR(0x00009638u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021bc0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00011bf0u);
    return;

L_9638:
    /* 00009638   4  tst.w (2e2,A4) */
    c->pc = RC_ADDR(0x00009638u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2e2u));
    rc_set_nzvc(c, t0, RC_W);

L_963C:
    /* 0000963c   2  beq 00009682 */
    c->pc = RC_ADDR(0x0000963cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9682;

L_963E:
    /* 0000963e   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0000963eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_9642:
    /* 00009642   4  jsr (ffff80e6,A4) */
    c->pc = RC_ADDR(0x00009642u);
    rc_step(c, m, 18);
    /* vector 38 */
    rc_push32(c, m, RC_ADDR(0x00009646u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b3cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009cc4u);
    return;

L_9646:
    /* 00009646   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00009646u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9648:
    /* 00009648   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x00009648u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_964E:
    /* 0000964e   4  pea (0000986a) */
    c->pc = RC_ADDR(0x0000964eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000986au));

L_9652:
    /* 00009652   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x00009652u);
    rc_step(c, m, 18);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x00009656u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021caau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_9656:
    /* 00009656   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00009656u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_9658:
    /* 00009658   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00009658u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_965C:
    /* 0000965c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000965cu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_965E:
    /* 0000965e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000965eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9660:
    /* 00009660   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009660u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9662:
    /* 00009662   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00009662u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9664:
    /* 00009664   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00009664u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9668:
    /* 00009668   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00009668u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_966C:
    /* 0000966c   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000966cu);
    rc_step(c, m, 18);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00009670u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_9670:
    /* 00009670   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00009670u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_9674:
    /* 00009674   4  clr.w (2e2,A4) */
    c->pc = RC_ADDR(0x00009674u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2e2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9678:
    /* 00009678   4  clr.w (ffffcdea,A4) */
    c->pc = RC_ADDR(0x00009678u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x3216u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_967C:
    /* 0000967c   6  move.l (ffffce38,A4),(ffffcdec,A4) */
    c->pc = RC_ADDR(0x0000967cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x31c8u));
    rc_wr32(c, m, (c->a[4] - 0x3214u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_9682:
    /* 00009682   4  tst.l (ffffcdec,A4) */
    c->pc = RC_ADDR(0x00009682u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3214u));
    rc_set_nzvc(c, t0, RC_L);

L_9686:
    /* 00009686   2  beq 00009694 */
    c->pc = RC_ADDR(0x00009686u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9694;

L_9688:
    /* 00009688   4  tst.l (ffffcdec,A4) */
    c->pc = RC_ADDR(0x00009688u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3214u));
    rc_set_nzvc(c, t0, RC_L);

L_968C:
    /* 0000968c   2  beq 00009694 */
    c->pc = RC_ADDR(0x0000968cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9694;

L_968E:
    /* 0000968e   4  subq.l #1,(ffffcdec,A4) */
    c->pc = RC_ADDR(0x0000968eu);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x3214u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_9692:
    /* 00009692   2  bra 00009688 */
    c->pc = RC_ADDR(0x00009692u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_9688;

L_9694:
    /* 00009694   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00009694u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9696:
    /* 00009696   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009696u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_9698:
    /* 00009698   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00009698u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_969A:
    /* 0000969a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000969au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_969E:
    /* 0000969e   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000969eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_96A2:
    /* 000096a2   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x000096a2u);
    rc_step(c, m, 18);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x000096a6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_96A6:
    /* 000096a6   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000096a6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_96AA:
    /* 000096aa   4  move.w (ffffcdea,A4),D0 */
    c->pc = RC_ADDR(0x000096aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3216u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_96AE:
    /* 000096ae   2  ext.l D0 */
    c->pc = RC_ADDR(0x000096aeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_96B0:
    /* 000096b0   4  bra 000097ca */
    c->pc = RC_ADDR(0x000096b0u);
    rc_step(c, m, 10);
    goto L_97CA;

L_96B4:
    /* 000096b4   4  pea (0000003c).l */
    c->pc = RC_ADDR(0x000096b4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000003cu);

L_96B8:
    /* 000096b8   4  pea (0000006e).l */
    c->pc = RC_ADDR(0x000096b8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000006eu);

L_96BC:
    /* 000096bc   4  jsr (0000ef88) */
    c->pc = RC_ADDR(0x000096bcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000096c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ef88u);
    return;

L_96C0:
    /* 000096c0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000096c0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_96C2:
    /* 000096c2   4  bra 0000981a */
    c->pc = RC_ADDR(0x000096c2u);
    rc_step(c, m, 10);
    goto L_981A;

L_96C6:
    /* 000096c6   4  pea (00000003).l */
    c->pc = RC_ADDR(0x000096c6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000003u);

L_96CA:
    /* 000096ca   4  jsr (ffff8122,A4) */
    c->pc = RC_ADDR(0x000096cau);
    rc_step(c, m, 18);
    /* vector 48 */
    rc_push32(c, m, RC_ADDR(0x000096ceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b78u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000efa6u);
    return;

L_96CE:
    /* 000096ce   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000096ceu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_96D0:
    /* 000096d0   4  bra 0000981a */
    c->pc = RC_ADDR(0x000096d0u);
    rc_step(c, m, 10);
    goto L_981A;

L_96D4:
    /* 000096d4   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x000096d4u);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_96D8:
    /* 000096d8   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x000096d8u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_96DC:
    /* 000096dc   4  move.l (2d6,A4),-(A7) */
    c->pc = RC_ADDR(0x000096dcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2d6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_96E0:
    /* 000096e0   4  move.w (2d0,A4),-(A7) */
    c->pc = RC_ADDR(0x000096e0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2d0u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_96E4:
    /* 000096e4   4  move.l (2c4,A4),-(A7) */
    c->pc = RC_ADDR(0x000096e4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_96E8:
    /* 000096e8   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x000096e8u);
    rc_step(c, m, 18);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x000096ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_96EC:
    /* 000096ec   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000096ecu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_96F0:
    /* 000096f0   4  bra 0000981a */
    c->pc = RC_ADDR(0x000096f0u);
    rc_step(c, m, 10);
    goto L_981A;

L_96F4:
    /* 000096f4   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x000096f4u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_96F8:
    /* 000096f8   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x000096f8u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x000096fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b18u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_96FC:
    /* 000096fc   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000096fcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_96FE:
    /* 000096fe   4  bra 0000981a */
    c->pc = RC_ADDR(0x000096feu);
    rc_step(c, m, 10);
    goto L_981A;

L_9702:
    /* 00009702   4  pea (000000dc).l */
    c->pc = RC_ADDR(0x00009702u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000dcu);

L_9706:
    /* 00009706   4  pea (00000190).l */
    c->pc = RC_ADDR(0x00009706u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000190u);

L_970A:
    /* 0000970a   4  jsr (0000ef88) */
    c->pc = RC_ADDR(0x0000970au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000970eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ef88u);
    return;

L_970E:
    /* 0000970e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000970eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9710:
    /* 00009710   4  bra 0000981a */
    c->pc = RC_ADDR(0x00009710u);
    rc_step(c, m, 10);
    goto L_981A;

L_9714:
    /* 00009714   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00009714u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_9718:
    /* 00009718   4  jsr (ffff8122,A4) */
    c->pc = RC_ADDR(0x00009718u);
    rc_step(c, m, 18);
    /* vector 48 */
    rc_push32(c, m, RC_ADDR(0x0000971cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b78u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000efa6u);
    return;

L_971C:
    /* 0000971c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000971cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_971E:
    /* 0000971e   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000971eu);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9722:
    /* 00009722   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x00009722u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9726:
    /* 00009726   4  move.l (2da,A4),-(A7) */
    c->pc = RC_ADDR(0x00009726u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_972A:
    /* 0000972a   4  move.w (2d2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000972au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2d2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_972E:
    /* 0000972e   4  move.l (2c8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000972eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9732:
    /* 00009732   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x00009732u);
    rc_step(c, m, 18);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x00009736u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_9736:
    /* 00009736   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009736u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_973A:
    /* 0000973a   4  bra 0000981a */
    c->pc = RC_ADDR(0x0000973au);
    rc_step(c, m, 10);
    goto L_981A;

L_973E:
    /* 0000973e   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000973eu);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9742:
    /* 00009742   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00009742u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9746:
    /* 00009746   4  move.l (2da,A4),-(A7) */
    c->pc = RC_ADDR(0x00009746u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_974A:
    /* 0000974a   4  move.w (2d2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000974au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2d2u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_974E:
    /* 0000974e   4  move.l (2c8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000974eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9752:
    /* 00009752   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x00009752u);
    rc_step(c, m, 18);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x00009756u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_9756:
    /* 00009756   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009756u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_975A:
    /* 0000975a   4  bra 0000981a */
    c->pc = RC_ADDR(0x0000975au);
    rc_step(c, m, 10);
    goto L_981A;

L_975E:
    /* 0000975e   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000975eu);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9762:
    /* 00009762   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x00009762u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9766:
    /* 00009766   4  move.l (2de,A4),-(A7) */
    c->pc = RC_ADDR(0x00009766u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_976A:
    /* 0000976a   4  move.w #384,-(A7) */
    c->pc = RC_ADDR(0x0000976au);
    rc_step(c, m, 12);
    t0 = 0x00000384u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_976E:
    /* 0000976e   4  move.l (2cc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000976eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2ccu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9772:
    /* 00009772   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x00009772u);
    rc_step(c, m, 18);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x00009776u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_9776:
    /* 00009776   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009776u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_977A:
    /* 0000977a   4  bra 0000981a */
    c->pc = RC_ADDR(0x0000977au);
    rc_step(c, m, 10);
    goto L_981A;

L_977E:
    /* 0000977e   4  move.w #3f,-(A7) */
    c->pc = RC_ADDR(0x0000977eu);
    rc_step(c, m, 12);
    t0 = 0x0000003fu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9782:
    /* 00009782   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00009782u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_9786:
    /* 00009786   4  move.l (2de,A4),-(A7) */
    c->pc = RC_ADDR(0x00009786u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_978A:
    /* 0000978a   4  move.w #384,-(A7) */
    c->pc = RC_ADDR(0x0000978au);
    rc_step(c, m, 12);
    t0 = 0x00000384u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_978E:
    /* 0000978e   4  move.l (2cc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000978eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2ccu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9792:
    /* 00009792   4  jsr (ffff80b6,A4) */
    c->pc = RC_ADDR(0x00009792u);
    rc_step(c, m, 18);
    /* vector 30 */
    rc_push32(c, m, RC_ADDR(0x00009796u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b0cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009b60u);
    return;

L_9796:
    /* 00009796   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00009796u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_979A:
    /* 0000979a   2  bra 0000981a */
    c->pc = RC_ADDR(0x0000979au);
    rc_step(c, m, 10);
    goto L_981A;

L_979C:
    /* 0000979c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000979cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_97A0:
    /* 000097a0   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x000097a0u);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x000097a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b18u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_97A4:
    /* 000097a4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000097a4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_97A6:
    /* 000097a6   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x000097a6u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_97AA:
    /* 000097aa   4  jsr (ffff80c2,A4) */
    c->pc = RC_ADDR(0x000097aau);
    rc_step(c, m, 18);
    /* vector 32 */
    rc_push32(c, m, RC_ADDR(0x000097aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b18u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009bcau);
    return;

L_97AE:
    /* 000097ae   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000097aeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_97B0:
    /* 000097b0   2  bra 0000981a */
    c->pc = RC_ADDR(0x000097b0u);
    rc_step(c, m, 10);
    goto L_981A;

L_97B2:
    /* 000097b2   4  pea (00000002).l */
    c->pc = RC_ADDR(0x000097b2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000002u);

L_97B6:
    /* 000097b6   4  jsr (0000efc0) */
    c->pc = RC_ADDR(0x000097b6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000097bau));
    rc_depth++;
    c->pc = RC_ADDR(0x0000efc0u);
    return;

L_97BA:
    /* 000097ba   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000097bau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_97BC:
    /* 000097bc   4  pea (00000003).l */
    c->pc = RC_ADDR(0x000097bcu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000003u);

L_97C0:
    /* 000097c0   4  jsr (0000efc0) */
    c->pc = RC_ADDR(0x000097c0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000097c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000efc0u);
    return;

L_97C4:
    /* 000097c4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000097c4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_97C6:
    /* 000097c6   2  bra 0000981a */
    c->pc = RC_ADDR(0x000097c6u);
    rc_step(c, m, 10);
    goto L_981A;

L_97C8:
    /* 000097c8   2  bra 0000981a */
    c->pc = RC_ADDR(0x000097c8u);
    rc_step(c, m, 10);
    goto L_981A;

L_97CA:
    /* 000097ca   6  sub.l #a0,D0 */
    c->pc = RC_ADDR(0x000097cau);
    rc_step(c, m, 16);
    t0 = 0x000000a0u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_97D0:
    /* 000097d0   4  beq 000096b4 */
    c->pc = RC_ADDR(0x000097d0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_96B4; }

L_97D4:
    /* 000097d4   6  sub.l #28,D0 */
    c->pc = RC_ADDR(0x000097d4u);
    rc_step(c, m, 16);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_97DA:
    /* 000097da   4  beq 000096c6 */
    c->pc = RC_ADDR(0x000097dau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_96C6; }

L_97DE:
    /* 000097de   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x000097deu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_97E0:
    /* 000097e0   4  beq 000096d4 */
    c->pc = RC_ADDR(0x000097e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_96D4; }

L_97E4:
    /* 000097e4   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x000097e4u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_97E6:
    /* 000097e6   4  beq 000096f4 */
    c->pc = RC_ADDR(0x000097e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_96F4; }

L_97EA:
    /* 000097ea   6  sub.l #6a,D0 */
    c->pc = RC_ADDR(0x000097eau);
    rc_step(c, m, 16);
    t0 = 0x0000006au;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_97F0:
    /* 000097f0   4  beq 00009702 */
    c->pc = RC_ADDR(0x000097f0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9702; }

L_97F4:
    /* 000097f4   6  sub.l #45,D0 */
    c->pc = RC_ADDR(0x000097f4u);
    rc_step(c, m, 16);
    t0 = 0x00000045u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_97FA:
    /* 000097fa   4  beq 00009714 */
    c->pc = RC_ADDR(0x000097fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_9714; }

L_97FE:
    /* 000097fe   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x000097feu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9800:
    /* 00009800   4  beq 0000973e */
    c->pc = RC_ADDR(0x00009800u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_973E; }

L_9804:
    /* 00009804   2  subq.l #8,D0 */
    c->pc = RC_ADDR(0x00009804u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_L, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9806:
    /* 00009806   4  beq 0000975e */
    c->pc = RC_ADDR(0x00009806u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_975E; }

L_980A:
    /* 0000980a   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x0000980au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_980C:
    /* 0000980c   4  beq 0000977e */
    c->pc = RC_ADDR(0x0000980cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_977E; }

L_9810:
    /* 00009810   2  subq.l #3,D0 */
    c->pc = RC_ADDR(0x00009810u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000003u;
    rc_flags_sub(c, RC_L, t1, 0x00000003u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9812:
    /* 00009812   2  beq 0000979c */
    c->pc = RC_ADDR(0x00009812u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_979C; }

L_9814:
    /* 00009814   2  subq.l #6,D0 */
    c->pc = RC_ADDR(0x00009814u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000006u;
    rc_flags_sub(c, RC_L, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_9816:
    /* 00009816   2  beq 000097b2 */
    c->pc = RC_ADDR(0x00009816u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_97B2; }

L_9818:
    /* 00009818   2  bra 000097c8 */
    c->pc = RC_ADDR(0x00009818u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_97C8;

L_981A:
    /* 0000981a   4  tst.w (ffffb02e,A4) */
    c->pc = RC_ADDR(0x0000981au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4fd2u));
    rc_set_nzvc(c, t0, RC_W);

L_981E:
    /* 0000981e   2  beq 00009826 */
    c->pc = RC_ADDR(0x0000981eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_9826;

L_9820:
    /* 00009820   6  move.w #1f4,(ffffcdea,A4) */
    c->pc = RC_ADDR(0x00009820u);
    rc_step(c, m, 16);
    t0 = 0x000001f4u;
    rc_wr16(c, m, (c->a[4] - 0x3216u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9826:
    /* 00009826   4  addq.w #1,(ffffcdea,A4) */
    c->pc = RC_ADDR(0x00009826u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x3216u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_982A:
    /* 0000982a   6  cmpi.w #1de,(ffffcdea,A4) */
    c->pc = RC_ADDR(0x0000982au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3216u));
    rc_cmp(c, RC_W, t0, 0x000001deu);

L_9830:
    /* 00009830   2  bge 00009838 */
    c->pc = RC_ADDR(0x00009830u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_9838;

L_9832:
    /* 00009832   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00009832u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_9834:
    /* 00009834   2  unlk A5 */
    c->pc = RC_ADDR(0x00009834u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9836:
    /* 00009836   2  rts */
    c->pc = RC_ADDR(0x00009836u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_9838:
    /* 00009838   4  jsr (ffff80c8,A4) */
    c->pc = RC_ADDR(0x00009838u);
    rc_step(c, m, 18);
    /* vector 33 */
    rc_push32(c, m, RC_ADDR(0x0000983cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b1eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00009becu);
    return;

L_983C:
    /* 0000983c   4  move.l (2d6,A4),-(A7) */
    c->pc = RC_ADDR(0x0000983cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2d6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9840:
    /* 00009840   4  move.l (2c4,A4),-(A7) */
    c->pc = RC_ADDR(0x00009840u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9844:
    /* 00009844   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00009844u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x00009848u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_9848:
    /* 00009848   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009848u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_984A:
    /* 0000984a   4  move.l (2da,A4),-(A7) */
    c->pc = RC_ADDR(0x0000984au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2dau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_984E:
    /* 0000984e   4  move.l (2c8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000984eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9852:
    /* 00009852   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00009852u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x00009856u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_9856:
    /* 00009856   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009856u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9858:
    /* 00009858   4  move.l (2de,A4),-(A7) */
    c->pc = RC_ADDR(0x00009858u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_985C:
    /* 0000985c   4  move.l (2cc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000985cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2ccu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_9860:
    /* 00009860   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00009860u);
    rc_step(c, m, 18);
    /* vector 139 */
    rc_push32(c, m, RC_ADDR(0x00009864u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000216ccu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x000216d0u);
    return;

L_9864:
    /* 00009864   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00009864u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_9866:
    /* 00009866   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00009866u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_9868:
    /* 00009868   2  bra 00009834 */
    c->pc = RC_ADDR(0x00009868u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_9834;

}
