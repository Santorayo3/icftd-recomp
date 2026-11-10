/* fn_000007f4 - 226 byte(s), 62 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000007f4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000007f4u): goto L_7F4;
    case RC_ADDR(0x000007f8u): goto L_7F8;
    case RC_ADDR(0x000007fcu): goto L_7FC;
    case RC_ADDR(0x00000800u): goto L_800;
    case RC_ADDR(0x00000802u): goto L_802;
    case RC_ADDR(0x00000806u): goto L_806;
    case RC_ADDR(0x00000808u): goto L_808;
    case RC_ADDR(0x0000080cu): goto L_80C;
    case RC_ADDR(0x0000080eu): goto L_80E;
    case RC_ADDR(0x00000812u): goto L_812;
    case RC_ADDR(0x00000814u): goto L_814;
    case RC_ADDR(0x00000818u): goto L_818;
    case RC_ADDR(0x0000081au): goto L_81A;
    case RC_ADDR(0x0000081eu): goto L_81E;
    case RC_ADDR(0x00000824u): goto L_824;
    case RC_ADDR(0x00000826u): goto L_826;
    case RC_ADDR(0x0000082au): goto L_82A;
    case RC_ADDR(0x0000082cu): goto L_82C;
    case RC_ADDR(0x00000830u): goto L_830;
    case RC_ADDR(0x00000832u): goto L_832;
    case RC_ADDR(0x00000836u): goto L_836;
    case RC_ADDR(0x00000838u): goto L_838;
    case RC_ADDR(0x0000083cu): goto L_83C;
    case RC_ADDR(0x00000842u): goto L_842;
    case RC_ADDR(0x00000846u): goto L_846;
    case RC_ADDR(0x0000084cu): goto L_84C;
    case RC_ADDR(0x0000084eu): goto L_84E;
    case RC_ADDR(0x00000852u): goto L_852;
    case RC_ADDR(0x00000856u): goto L_856;
    case RC_ADDR(0x0000085au): goto L_85A;
    case RC_ADDR(0x0000085cu): goto L_85C;
    case RC_ADDR(0x00000860u): goto L_860;
    case RC_ADDR(0x00000864u): goto L_864;
    case RC_ADDR(0x00000868u): goto L_868;
    case RC_ADDR(0x0000086cu): goto L_86C;
    case RC_ADDR(0x00000870u): goto L_870;
    case RC_ADDR(0x00000874u): goto L_874;
    case RC_ADDR(0x00000878u): goto L_878;
    case RC_ADDR(0x0000087cu): goto L_87C;
    case RC_ADDR(0x00000880u): goto L_880;
    case RC_ADDR(0x00000884u): goto L_884;
    case RC_ADDR(0x00000886u): goto L_886;
    case RC_ADDR(0x0000088au): goto L_88A;
    case RC_ADDR(0x0000088eu): goto L_88E;
    case RC_ADDR(0x00000892u): goto L_892;
    case RC_ADDR(0x00000896u): goto L_896;
    case RC_ADDR(0x0000089au): goto L_89A;
    case RC_ADDR(0x0000089eu): goto L_89E;
    case RC_ADDR(0x000008a2u): goto L_8A2;
    case RC_ADDR(0x000008a6u): goto L_8A6;
    case RC_ADDR(0x000008aau): goto L_8AA;
    case RC_ADDR(0x000008aeu): goto L_8AE;
    case RC_ADDR(0x000008b0u): goto L_8B0;
    case RC_ADDR(0x000008b4u): goto L_8B4;
    case RC_ADDR(0x000008b8u): goto L_8B8;
    case RC_ADDR(0x000008bcu): goto L_8BC;
    case RC_ADDR(0x000008c0u): goto L_8C0;
    case RC_ADDR(0x000008c4u): goto L_8C4;
    case RC_ADDR(0x000008c8u): goto L_8C8;
    case RC_ADDR(0x000008ccu): goto L_8CC;
    case RC_ADDR(0x000008d2u): goto L_8D2;
    case RC_ADDR(0x000008d4u): goto L_8D4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7F4:
    /* 000007f4   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x000007f4u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_7F8:
    /* 000007f8   4  tst.w (ffff8504,A4) */
    c->pc = RC_ADDR(0x000007f8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7afcu));
    rc_set_nzvc(c, t0, RC_W);

L_7FC:
    /* 000007fc   4  bne 000008a2 */
    c->pc = RC_ADDR(0x000007fcu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_8A2;

L_800:
    /* 00000800   2  bsr 000007b2 */
    c->pc = RC_ADDR(0x00000800u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00000802u));
    rc_depth++;
    c->pc = RC_ADDR(0x000007b2u);
    return;

L_802:
    /* 00000802   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00000802u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_806:
    /* 00000806   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000806u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_808:
    /* 00000808   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000808u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_80C:
    /* 0000080c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000080cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_80E:
    /* 0000080e   4  lea (fffffe7c,A4),A0 */
    c->pc = RC_ADDR(0x0000080eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x184u);

L_812:
    /* 00000812   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00000812u);
    rc_step(c, m);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_814:
    /* 00000814   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00000814u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_818:
    /* 00000818   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00000818u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_81A:
    /* 0000081a   4  lea (fffffe42,A4),A1 */
    c->pc = RC_ADDR(0x0000081au);
    rc_step(c, m);
    c->a[1] = (c->a[4] - 0x1beu);

L_81E:
    /* 0000081e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0000081eu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_824:
    /* 00000824   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000824u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_826:
    /* 00000826   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000826u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_82A:
    /* 0000082a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000082au);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_82C:
    /* 0000082c   4  lea (ffff84fa,A4),A0 */
    c->pc = RC_ADDR(0x0000082cu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7b06u);

L_830:
    /* 00000830   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00000830u);
    rc_step(c, m);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_832:
    /* 00000832   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00000832u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_836:
    /* 00000836   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00000836u);
    rc_step(c, m);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_838:
    /* 00000838   4  lea (fffffe7c,A4),A1 */
    c->pc = RC_ADDR(0x00000838u);
    rc_step(c, m);
    c->a[1] = (c->a[4] - 0x184u);

L_83C:
    /* 0000083c   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0000083cu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_842:
    /* 00000842   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00000842u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_846:
    /* 00000846   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00000846u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_84C:
    /* 0000084c   2  bcs 00000806 */
    c->pc = RC_ADDR(0x0000084cu);
    rc_step(c, m);
    if (rc_cond(c, 5)) { rc_tick(); goto L_806; }

L_84E:
    /* 0000084e   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0000084eu);
    rc_step(c, m);
    rc_push32(c, m, 0x00000001u);

L_852:
    /* 00000852   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00000852u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_856:
    /* 00000856   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x00000856u);
    rc_step(c, m);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x0000085au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218eau);
    return;

L_85A:
    /* 0000085a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000085au);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_85C:
    /* 0000085c   4  pea (000000c5).l */
    c->pc = RC_ADDR(0x0000085cu);
    rc_step(c, m);
    rc_push32(c, m, 0x000000c5u);

L_860:
    /* 00000860   4  pea (0000013d).l */
    c->pc = RC_ADDR(0x00000860u);
    rc_step(c, m);
    rc_push32(c, m, 0x0000013du);

L_864:
    /* 00000864   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000864u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000002u);

L_868:
    /* 00000868   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000868u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000002u);

L_86C:
    /* 0000086c   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x0000086cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_870:
    /* 00000870   4  jsr (ffff8386,A4) */
    c->pc = RC_ADDR(0x00000870u);
    rc_step(c, m);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x00000874u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ddcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218d8u);
    return;

L_874:
    /* 00000874   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00000874u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_878:
    /* 00000878   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000878u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000002u);

L_87C:
    /* 0000087c   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x0000087cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_880:
    /* 00000880   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x00000880u);
    rc_step(c, m);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x00000884u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218eau);
    return;

L_884:
    /* 00000884   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000884u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_886:
    /* 00000886   4  pea (000000c3).l */
    c->pc = RC_ADDR(0x00000886u);
    rc_step(c, m);
    rc_push32(c, m, 0x000000c3u);

L_88A:
    /* 0000088a   4  pea (0000013b).l */
    c->pc = RC_ADDR(0x0000088au);
    rc_step(c, m);
    rc_push32(c, m, 0x0000013bu);

L_88E:
    /* 0000088e   4  pea (00000004).l */
    c->pc = RC_ADDR(0x0000088eu);
    rc_step(c, m);
    rc_push32(c, m, 0x00000004u);

L_892:
    /* 00000892   4  pea (00000004).l */
    c->pc = RC_ADDR(0x00000892u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000004u);

L_896:
    /* 00000896   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x00000896u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_89A:
    /* 0000089a   4  jsr (ffff8386,A4) */
    c->pc = RC_ADDR(0x0000089au);
    rc_step(c, m);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x0000089eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ddcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218d8u);
    return;

L_89E:
    /* 0000089e   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000089eu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_8A2:
    /* 000008a2   4  pea (00000003).l */
    c->pc = RC_ADDR(0x000008a2u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000003u);

L_8A6:
    /* 000008a6   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x000008a6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8AA:
    /* 000008aa   4  jsr (ffff838c,A4) */
    c->pc = RC_ADDR(0x000008aau);
    rc_step(c, m);
    /* vector 151 */
    rc_push32(c, m, RC_ADDR(0x000008aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021de2u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218eau);
    return;

L_8AE:
    /* 000008ae   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000008aeu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_8B0:
    /* 000008b0   4  pea (000000c1).l */
    c->pc = RC_ADDR(0x000008b0u);
    rc_step(c, m);
    rc_push32(c, m, 0x000000c1u);

L_8B4:
    /* 000008b4   4  pea (00000139).l */
    c->pc = RC_ADDR(0x000008b4u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000139u);

L_8B8:
    /* 000008b8   4  pea (00000006).l */
    c->pc = RC_ADDR(0x000008b8u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000006u);

L_8BC:
    /* 000008bc   4  pea (00000006).l */
    c->pc = RC_ADDR(0x000008bcu);
    rc_step(c, m);
    rc_push32(c, m, 0x00000006u);

L_8C0:
    /* 000008c0   4  move.l (ffffcb14,A4),-(A7) */
    c->pc = RC_ADDR(0x000008c0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34ecu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_8C4:
    /* 000008c4   4  jsr (ffff8386,A4) */
    c->pc = RC_ADDR(0x000008c4u);
    rc_step(c, m);
    /* vector 150 */
    rc_push32(c, m, RC_ADDR(0x000008c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ddcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000218d8u);
    return;

L_8C8:
    /* 000008c8   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000008c8u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_8CC:
    /* 000008cc   6  move.w #1,(ffff8504,A4) */
    c->pc = RC_ADDR(0x000008ccu);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7afcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D2:
    /* 000008d2   2  unlk A5 */
    c->pc = RC_ADDR(0x000008d2u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8D4:
    /* 000008d4   2  rts */
    c->pc = RC_ADDR(0x000008d4u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
