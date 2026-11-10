/* fn_000167e0 - 284 byte(s), 80 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000167e0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case 0x000167e0u: goto L_167E0;
    case 0x000167e4u: goto L_167E4;
    case 0x000167e8u: goto L_167E8;
    case 0x000167eau: goto L_167EA;
    case 0x000167eeu: goto L_167EE;
    case 0x000167f0u: goto L_167F0;
    case 0x000167f4u: goto L_167F4;
    case 0x000167f8u: goto L_167F8;
    case 0x000167fcu: goto L_167FC;
    case 0x000167feu: goto L_167FE;
    case 0x00016804u: goto L_16804;
    case 0x00016806u: goto L_16806;
    case 0x00016808u: goto L_16808;
    case 0x0001680cu: goto L_1680C;
    case 0x0001680eu: goto L_1680E;
    case 0x00016812u: goto L_16812;
    case 0x00016816u: goto L_16816;
    case 0x00016818u: goto L_16818;
    case 0x0001681au: goto L_1681A;
    case 0x0001681eu: goto L_1681E;
    case 0x00016822u: goto L_16822;
    case 0x00016826u: goto L_16826;
    case 0x0001682au: goto L_1682A;
    case 0x0001682eu: goto L_1682E;
    case 0x00016830u: goto L_16830;
    case 0x00016834u: goto L_16834;
    case 0x00016838u: goto L_16838;
    case 0x0001683au: goto L_1683A;
    case 0x0001683cu: goto L_1683C;
    case 0x00016840u: goto L_16840;
    case 0x00016844u: goto L_16844;
    case 0x00016848u: goto L_16848;
    case 0x0001684cu: goto L_1684C;
    case 0x00016850u: goto L_16850;
    case 0x00016854u: goto L_16854;
    case 0x0001685au: goto L_1685A;
    case 0x0001685cu: goto L_1685C;
    case 0x0001685eu: goto L_1685E;
    case 0x00016862u: goto L_16862;
    case 0x00016866u: goto L_16866;
    case 0x00016868u: goto L_16868;
    case 0x0001686cu: goto L_1686C;
    case 0x00016870u: goto L_16870;
    case 0x00016872u: goto L_16872;
    case 0x00016874u: goto L_16874;
    case 0x00016878u: goto L_16878;
    case 0x0001687cu: goto L_1687C;
    case 0x00016880u: goto L_16880;
    case 0x00016884u: goto L_16884;
    case 0x00016888u: goto L_16888;
    case 0x0001688cu: goto L_1688C;
    case 0x0001688eu: goto L_1688E;
    case 0x00016890u: goto L_16890;
    case 0x00016894u: goto L_16894;
    case 0x00016898u: goto L_16898;
    case 0x0001689cu: goto L_1689C;
    case 0x000168a0u: goto L_168A0;
    case 0x000168a4u: goto L_168A4;
    case 0x000168a8u: goto L_168A8;
    case 0x000168aau: goto L_168AA;
    case 0x000168aeu: goto L_168AE;
    case 0x000168b0u: goto L_168B0;
    case 0x000168b4u: goto L_168B4;
    case 0x000168bau: goto L_168BA;
    case 0x000168beu: goto L_168BE;
    case 0x000168c0u: goto L_168C0;
    case 0x000168c4u: goto L_168C4;
    case 0x000168c8u: goto L_168C8;
    case 0x000168ccu: goto L_168CC;
    case 0x000168d0u: goto L_168D0;
    case 0x000168d4u: goto L_168D4;
    case 0x000168d8u: goto L_168D8;
    case 0x000168dcu: goto L_168DC;
    case 0x000168e0u: goto L_168E0;
    case 0x000168e4u: goto L_168E4;
    case 0x000168e8u: goto L_168E8;
    case 0x000168ecu: goto L_168EC;
    case 0x000168f0u: goto L_168F0;
    case 0x000168f4u: goto L_168F4;
    case 0x000168f8u: goto L_168F8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_167E0:
    /* 000167e0   4  link.w A5,#fffffff6 */
    c->pc = 0x000167e0u;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_167E4:
    /* 000167e4   4  tst.w (1132,A4) */
    c->pc = 0x000167e4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1132u));
    rc_set_nzvc(c, t0, RC_W);

L_167E8:
    /* 000167e8   2  bne 00016808 */
    c->pc = 0x000167e8u;
    if (rc_cond(c, 6)) goto L_16808;

L_167EA:
    /* 000167ea   4  tst.w (1144,A4) */
    c->pc = 0x000167eau;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1144u));
    rc_set_nzvc(c, t0, RC_W);

L_167EE:
    /* 000167ee   2  bne 00016804 */
    c->pc = 0x000167eeu;
    if (rc_cond(c, 6)) goto L_16804;

L_167F0:
    /* 000167f0   4  move.w #e,-(A7) */
    c->pc = 0x000167f0u;
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_167F4:
    /* 000167f4   4  pea (000168fc) */
    c->pc = 0x000167f4u;
    rc_push32(c, m, 0x000168fcu);

L_167F8:
    /* 000167f8   4  jsr (00016fda) */
    c->pc = 0x000167f8u;
    rc_push32(c, m, 0x000167fcu);
    rc_depth++;
    c->pc = 0x00016fdau;
    return;

L_167FC:
    /* 000167fc   2  addq.w #6,A7 */
    c->pc = 0x000167fcu;
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_167FE:
    /* 000167fe   6  move.w #1,(1144,A4) */
    c->pc = 0x000167feu;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1144u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16804:
    /* 00016804   2  unlk A5 */
    c->pc = 0x00016804u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16806:
    /* 00016806   2  rts */
    c->pc = 0x00016806u;
    rc_ret(c, m);
    return;

L_16808:
    /* 00016808   4  tst.w (12de,A4) */
    c->pc = 0x00016808u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x12deu));
    rc_set_nzvc(c, t0, RC_W);

L_1680C:
    /* 0001680c   2  beq 00016854 */
    c->pc = 0x0001680cu;
    if (rc_cond(c, 7)) goto L_16854;

L_1680E:
    /* 0001680e   4  pea (e38,A4) */
    c->pc = 0x0001680eu;
    rc_push32(c, m, (c->a[4] + 0xe38u));

L_16812:
    /* 00016812   4  move.l (12ca,A4),-(A7) */
    c->pc = 0x00016812u;
    t0 = rc_rd32(c, m, (c->a[4] + 0x12cau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16816:
    /* 00016816   2  clr.w -(A7) */
    c->pc = 0x00016816u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16818:
    /* 00016818   2  clr.w -(A7) */
    c->pc = 0x00016818u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1681A:
    /* 0001681a   4  jsr (ffff8152,A4) */
    c->pc = 0x0001681au;
    /* vector 56 */
    rc_push32(c, m, 0x0001681eu);
    rc_depth++;
    c->pc = 0x00011130u;
    return;

L_1681E:
    /* 0001681e   4  lea (c,A7),A7 */
    c->pc = 0x0001681eu;
    c->a[7] = (c->a[7] + 0xcu);

L_16822:
    /* 00016822   4  pea (00000015).l */
    c->pc = 0x00016822u;
    rc_push32(c, m, 0x00000015u);

L_16826:
    /* 00016826   4  pea (12e0,A4) */
    c->pc = 0x00016826u;
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_1682A:
    /* 0001682a   4  jsr (ffff838c,A4) */
    c->pc = 0x0001682au;
    /* vector 151 */
    rc_push32(c, m, 0x0001682eu);
    rc_depth++;
    c->pc = 0x000218eau;
    return;

L_1682E:
    /* 0001682e   2  addq.w #8,A7 */
    c->pc = 0x0001682eu;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16830:
    /* 00016830   4  pea (0000000f).l */
    c->pc = 0x00016830u;
    rc_push32(c, m, 0x0000000fu);

L_16834:
    /* 00016834   4  move.w (1132,A4),D0 */
    c->pc = 0x00016834u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1132u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16838:
    /* 00016838   2  ext.l D0 */
    c->pc = 0x00016838u;
    rc_ext_l(c, 0);

L_1683A:
    /* 0001683a   2  movea.l D0,A0 */
    c->pc = 0x0001683au;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1683C:
    /* 0001683c   4  pea (56,A0) */
    c->pc = 0x0001683cu;
    rc_push32(c, m, (c->a[0] + 0x56u));

L_16840:
    /* 00016840   4  pea (00000009).l */
    c->pc = 0x00016840u;
    rc_push32(c, m, 0x00000009u);

L_16844:
    /* 00016844   4  pea (00000056).l */
    c->pc = 0x00016844u;
    rc_push32(c, m, 0x00000056u);

L_16848:
    /* 00016848   4  pea (12e0,A4) */
    c->pc = 0x00016848u;
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_1684C:
    /* 0001684c   4  jsr (ffff8386,A4) */
    c->pc = 0x0001684cu;
    /* vector 150 */
    rc_push32(c, m, 0x00016850u);
    rc_depth++;
    c->pc = 0x000218d8u;
    return;

L_16850:
    /* 00016850   4  lea (14,A7),A7 */
    c->pc = 0x00016850u;
    c->a[7] = (c->a[7] + 0x14u);

L_16854:
    /* 00016854   6  cmpi.w #bd,(1132,A4) */
    c->pc = 0x00016854u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1132u));
    rc_cmp(c, RC_W, t0, 0x000000bdu);

L_1685A:
    /* 0001685a   2  bgt 000168a0 */
    c->pc = 0x0001685au;
    if (rc_cond(c, 14)) goto L_168A0;

L_1685C:
    /* 0001685c   2  clr.l -(A7) */
    c->pc = 0x0001685cu;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1685E:
    /* 0001685e   4  pea (12e0,A4) */
    c->pc = 0x0001685eu;
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_16862:
    /* 00016862   4  jsr (ffff838c,A4) */
    c->pc = 0x00016862u;
    /* vector 151 */
    rc_push32(c, m, 0x00016866u);
    rc_depth++;
    c->pc = 0x000218eau;
    return;

L_16866:
    /* 00016866   2  addq.w #8,A7 */
    c->pc = 0x00016866u;
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16868:
    /* 00016868   4  pea (00000009).l */
    c->pc = 0x00016868u;
    rc_push32(c, m, 0x00000009u);

L_1686C:
    /* 0001686c   4  move.w (1132,A4),D0 */
    c->pc = 0x0001686cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1132u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16870:
    /* 00016870   2  ext.l D0 */
    c->pc = 0x00016870u;
    rc_ext_l(c, 0);

L_16872:
    /* 00016872   2  movea.l D0,A0 */
    c->pc = 0x00016872u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_16874:
    /* 00016874   4  pea (56,A0) */
    c->pc = 0x00016874u;
    rc_push32(c, m, (c->a[0] + 0x56u));

L_16878:
    /* 00016878   4  pea (12e0,A4) */
    c->pc = 0x00016878u;
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_1687C:
    /* 0001687c   4  jsr (ffff837a,A4) */
    c->pc = 0x0001687cu;
    /* vector 148 */
    rc_push32(c, m, 0x00016880u);
    rc_depth++;
    c->pc = 0x000218b2u;
    return;

L_16880:
    /* 00016880   4  lea (c,A7),A7 */
    c->pc = 0x00016880u;
    c->a[7] = (c->a[7] + 0xcu);

L_16884:
    /* 00016884   4  pea (0000000f).l */
    c->pc = 0x00016884u;
    rc_push32(c, m, 0x0000000fu);

L_16888:
    /* 00016888   4  move.w (1132,A4),D0 */
    c->pc = 0x00016888u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1132u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1688C:
    /* 0001688c   2  ext.l D0 */
    c->pc = 0x0001688cu;
    rc_ext_l(c, 0);

L_1688E:
    /* 0001688e   2  movea.l D0,A0 */
    c->pc = 0x0001688eu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_16890:
    /* 00016890   4  pea (56,A0) */
    c->pc = 0x00016890u;
    rc_push32(c, m, (c->a[0] + 0x56u));

L_16894:
    /* 00016894   4  pea (12e0,A4) */
    c->pc = 0x00016894u;
    rc_push32(c, m, (c->a[4] + 0x12e0u));

L_16898:
    /* 00016898   4  jsr (ffff8368,A4) */
    c->pc = 0x00016898u;
    /* vector 145 */
    rc_push32(c, m, 0x0001689cu);
    rc_depth++;
    c->pc = 0x000217fcu;
    return;

L_1689C:
    /* 0001689c   4  lea (c,A7),A7 */
    c->pc = 0x0001689cu;
    c->a[7] = (c->a[7] + 0xcu);

L_168A0:
    /* 000168a0   4  move.w (12d6,A4),D0 */
    c->pc = 0x000168a0u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x12d6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_168A4:
    /* 000168a4   4  cmp.w (1130,A4),D0 */
    c->pc = 0x000168a4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1130u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_168A8:
    /* 000168a8   2  bne 000168b0 */
    c->pc = 0x000168a8u;
    if (rc_cond(c, 6)) goto L_168B0;

L_168AA:
    /* 000168aa   4  tst.w (12de,A4) */
    c->pc = 0x000168aau;
    t0 = rc_rd16(c, m, (c->a[4] + 0x12deu));
    rc_set_nzvc(c, t0, RC_W);

L_168AE:
    /* 000168ae   2  beq 000168f8 */
    c->pc = 0x000168aeu;
    if (rc_cond(c, 7)) goto L_168F8;

L_168B0:
    /* 000168b0   4  clr.w (12de,A4) */
    c->pc = 0x000168b0u;
    rc_wr16(c, m, (c->a[4] + 0x12deu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_168B4:
    /* 000168b4   6  move.w (1130,A4),(12d6,A4) */
    c->pc = 0x000168b4u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1130u));
    rc_wr16(c, m, (c->a[4] + 0x12d6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_168BA:
    /* 000168ba   4  pea (0000000b).l */
    c->pc = 0x000168bau;
    rc_push32(c, m, 0x0000000bu);

L_168BE:
    /* 000168be   2  clr.l -(A7) */
    c->pc = 0x000168beu;
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_168C0:
    /* 000168c0   4  pea (0000001d).l */
    c->pc = 0x000168c0u;
    rc_push32(c, m, 0x0000001du);

L_168C4:
    /* 000168c4   4  jsr (00016550) */
    c->pc = 0x000168c4u;
    rc_push32(c, m, 0x000168c8u);
    rc_depth++;
    c->pc = 0x00016550u;
    return;

L_168C8:
    /* 000168c8   4  lea (c,A7),A7 */
    c->pc = 0x000168c8u;
    c->a[7] = (c->a[7] + 0xcu);

L_168CC:
    /* 000168cc   4  move.w (1130,A4),-(A7) */
    c->pc = 0x000168ccu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x1130u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_168D0:
    /* 000168d0   4  pea (00016942) */
    c->pc = 0x000168d0u;
    rc_push32(c, m, 0x00016942u);

L_168D4:
    /* 000168d4   4  pea (fffffff6,A5) */
    c->pc = 0x000168d4u;
    rc_push32(c, m, (c->a[5] - 0xau));

L_168D8:
    /* 000168d8   4  jsr (ffff82d2,A4) */
    c->pc = 0x000168d8u;
    /* vector 120 */
    rc_push32(c, m, 0x000168dcu);
    rc_depth++;
    c->pc = 0x00020db6u;
    return;

L_168DC:
    /* 000168dc   4  lea (a,A7),A7 */
    c->pc = 0x000168dcu;
    c->a[7] = (c->a[7] + 0xau);

L_168E0:
    /* 000168e0   4  move.w #e,-(A7) */
    c->pc = 0x000168e0u;
    t0 = 0x0000000eu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_168E4:
    /* 000168e4   4  move.w #10,-(A7) */
    c->pc = 0x000168e4u;
    t0 = 0x00000010u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_168E8:
    /* 000168e8   4  move.w #1d,-(A7) */
    c->pc = 0x000168e8u;
    t0 = 0x0000001du;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_168EC:
    /* 000168ec   4  pea (fffffff6,A5) */
    c->pc = 0x000168ecu;
    rc_push32(c, m, (c->a[5] - 0xau));

L_168F0:
    /* 000168f0   4  jsr (00016f72) */
    c->pc = 0x000168f0u;
    rc_push32(c, m, 0x000168f4u);
    rc_depth++;
    c->pc = 0x00016f72u;
    return;

L_168F4:
    /* 000168f4   4  lea (a,A7),A7 */
    c->pc = 0x000168f4u;
    c->a[7] = (c->a[7] + 0xau);

L_168F8:
    /* 000168f8   4  bra 00016804 */
    c->pc = 0x000168f8u;
    rc_tick();
    goto L_16804;

}
