/* fn_0000c636 - 246 byte(s), 73 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c636(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c636u): goto L_C636;
    case RC_ADDR(0x0000c63au): goto L_C63A;
    case RC_ADDR(0x0000c63eu): goto L_C63E;
    case RC_ADDR(0x0000c640u): goto L_C640;
    case RC_ADDR(0x0000c644u): goto L_C644;
    case RC_ADDR(0x0000c646u): goto L_C646;
    case RC_ADDR(0x0000c648u): goto L_C648;
    case RC_ADDR(0x0000c64cu): goto L_C64C;
    case RC_ADDR(0x0000c64eu): goto L_C64E;
    case RC_ADDR(0x0000c652u): goto L_C652;
    case RC_ADDR(0x0000c656u): goto L_C656;
    case RC_ADDR(0x0000c658u): goto L_C658;
    case RC_ADDR(0x0000c65eu): goto L_C65E;
    case RC_ADDR(0x0000c662u): goto L_C662;
    case RC_ADDR(0x0000c664u): goto L_C664;
    case RC_ADDR(0x0000c668u): goto L_C668;
    case RC_ADDR(0x0000c66eu): goto L_C66E;
    case RC_ADDR(0x0000c670u): goto L_C670;
    case RC_ADDR(0x0000c674u): goto L_C674;
    case RC_ADDR(0x0000c678u): goto L_C678;
    case RC_ADDR(0x0000c67au): goto L_C67A;
    case RC_ADDR(0x0000c67cu): goto L_C67C;
    case RC_ADDR(0x0000c67eu): goto L_C67E;
    case RC_ADDR(0x0000c682u): goto L_C682;
    case RC_ADDR(0x0000c686u): goto L_C686;
    case RC_ADDR(0x0000c688u): goto L_C688;
    case RC_ADDR(0x0000c68cu): goto L_C68C;
    case RC_ADDR(0x0000c68eu): goto L_C68E;
    case RC_ADDR(0x0000c690u): goto L_C690;
    case RC_ADDR(0x0000c694u): goto L_C694;
    case RC_ADDR(0x0000c696u): goto L_C696;
    case RC_ADDR(0x0000c69au): goto L_C69A;
    case RC_ADDR(0x0000c69eu): goto L_C69E;
    case RC_ADDR(0x0000c6a0u): goto L_C6A0;
    case RC_ADDR(0x0000c6a6u): goto L_C6A6;
    case RC_ADDR(0x0000c6aau): goto L_C6AA;
    case RC_ADDR(0x0000c6acu): goto L_C6AC;
    case RC_ADDR(0x0000c6b0u): goto L_C6B0;
    case RC_ADDR(0x0000c6b6u): goto L_C6B6;
    case RC_ADDR(0x0000c6b8u): goto L_C6B8;
    case RC_ADDR(0x0000c6bcu): goto L_C6BC;
    case RC_ADDR(0x0000c6c0u): goto L_C6C0;
    case RC_ADDR(0x0000c6c2u): goto L_C6C2;
    case RC_ADDR(0x0000c6c4u): goto L_C6C4;
    case RC_ADDR(0x0000c6c6u): goto L_C6C6;
    case RC_ADDR(0x0000c6c8u): goto L_C6C8;
    case RC_ADDR(0x0000c6ccu): goto L_C6CC;
    case RC_ADDR(0x0000c6d2u): goto L_C6D2;
    case RC_ADDR(0x0000c6d6u): goto L_C6D6;
    case RC_ADDR(0x0000c6dau): goto L_C6DA;
    case RC_ADDR(0x0000c6deu): goto L_C6DE;
    case RC_ADDR(0x0000c6e0u): goto L_C6E0;
    case RC_ADDR(0x0000c6e4u): goto L_C6E4;
    case RC_ADDR(0x0000c6e8u): goto L_C6E8;
    case RC_ADDR(0x0000c6ecu): goto L_C6EC;
    case RC_ADDR(0x0000c6eeu): goto L_C6EE;
    case RC_ADDR(0x0000c6f0u): goto L_C6F0;
    case RC_ADDR(0x0000c6f4u): goto L_C6F4;
    case RC_ADDR(0x0000c6f8u): goto L_C6F8;
    case RC_ADDR(0x0000c6fcu): goto L_C6FC;
    case RC_ADDR(0x0000c700u): goto L_C700;
    case RC_ADDR(0x0000c704u): goto L_C704;
    case RC_ADDR(0x0000c708u): goto L_C708;
    case RC_ADDR(0x0000c70cu): goto L_C70C;
    case RC_ADDR(0x0000c710u): goto L_C710;
    case RC_ADDR(0x0000c712u): goto L_C712;
    case RC_ADDR(0x0000c714u): goto L_C714;
    case RC_ADDR(0x0000c718u): goto L_C718;
    case RC_ADDR(0x0000c71cu): goto L_C71C;
    case RC_ADDR(0x0000c720u): goto L_C720;
    case RC_ADDR(0x0000c724u): goto L_C724;
    case RC_ADDR(0x0000c728u): goto L_C728;
    case RC_ADDR(0x0000c72au): goto L_C72A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C636:
    /* 0000c636   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c636u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C63A:
    /* 0000c63a   4  tst.w (dd6,A4) */
    c->pc = RC_ADDR(0x0000c63au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdd6u));
    rc_set_nzvc(c, t0, RC_W);

L_C63E:
    /* 0000c63e   2  beq 0000c682 */
    c->pc = RC_ADDR(0x0000c63eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C682;

L_C640:
    /* 0000c640   4  subq.w #1,(dda,A4) */
    c->pc = RC_ADDR(0x0000c640u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xddau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C644:
    /* 0000c644   2  bne 0000c682 */
    c->pc = RC_ADDR(0x0000c644u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C682;

L_C646:
    /* 0000c646   2  moveq #14,D0 */
    c->pc = RC_ADDR(0x0000c646u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000014u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_C648:
    /* 0000c648   4  sub.w (dd6,A4),D0 */
    c->pc = RC_ADDR(0x0000c648u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdd6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C64C:
    /* 0000c64c   2  asl.w #3,D0 */
    c->pc = RC_ADDR(0x0000c64cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W));

L_C64E:
    /* 0000c64e   4  move.w D0,(dda,A4) */
    c->pc = RC_ADDR(0x0000c64eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xddau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C652:
    /* 0000c652   4  tst.w (dda,A4) */
    c->pc = RC_ADDR(0x0000c652u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xddau));
    rc_set_nzvc(c, t0, RC_W);

L_C656:
    /* 0000c656   2  bgt 0000c65e */
    c->pc = RC_ADDR(0x0000c656u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_C65E;

L_C658:
    /* 0000c658   6  move.w #1,(dda,A4) */
    c->pc = RC_ADDR(0x0000c658u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xddau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C65E:
    /* 0000c65e   4  tst.w (dde,A4) */
    c->pc = RC_ADDR(0x0000c65eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xddeu));
    rc_set_nzvc(c, t0, RC_W);

L_C662:
    /* 0000c662   2  beq 0000c682 */
    c->pc = RC_ADDR(0x0000c662u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C682;

L_C664:
    /* 0000c664   4  subq.w #1,(dde,A4) */
    c->pc = RC_ADDR(0x0000c664u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xddeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C668:
    /* 0000c668   6  cmpi.w #14,(dda,A4) */
    c->pc = RC_ADDR(0x0000c668u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xddau));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_C66E:
    /* 0000c66e   2  bgt 0000c67e */
    c->pc = RC_ADDR(0x0000c66eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_C67E;

L_C670:
    /* 0000c670   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000c670u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C674:
    /* 0000c674   4  jsr (ffff826c,A4) */
    c->pc = RC_ADDR(0x0000c674u);
    rc_step(c, m, 18);
    /* vector 103 */
    rc_push32(c, m, RC_ADDR(0x0000c678u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d62u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020c7eu);
    return;

L_C678:
    /* 0000c678   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000c678u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C67A:
    /* 0000c67a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000c67au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_C67C:
    /* 0000c67c   2  bne 0000c682 */
    c->pc = RC_ADDR(0x0000c67cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C682;

L_C67E:
    /* 0000c67e   4  jsr (0000c72c) */
    c->pc = RC_ADDR(0x0000c67eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c682u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c72cu);
    return;

L_C682:
    /* 0000c682   4  tst.w (dd8,A4) */
    c->pc = RC_ADDR(0x0000c682u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdd8u));
    rc_set_nzvc(c, t0, RC_W);

L_C686:
    /* 0000c686   2  beq 0000c6c8 */
    c->pc = RC_ADDR(0x0000c686u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C6C8;

L_C688:
    /* 0000c688   4  subq.w #1,(ddc,A4) */
    c->pc = RC_ADDR(0x0000c688u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xddcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C68C:
    /* 0000c68c   2  bne 0000c6c8 */
    c->pc = RC_ADDR(0x0000c68cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C6C8;

L_C68E:
    /* 0000c68e   2  moveq #14,D0 */
    c->pc = RC_ADDR(0x0000c68eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000014u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_C690:
    /* 0000c690   4  sub.w (dd8,A4),D0 */
    c->pc = RC_ADDR(0x0000c690u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdd8u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C694:
    /* 0000c694   2  asl.w #2,D0 */
    c->pc = RC_ADDR(0x0000c694u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_C696:
    /* 0000c696   4  move.w D0,(ddc,A4) */
    c->pc = RC_ADDR(0x0000c696u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xddcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C69A:
    /* 0000c69a   4  tst.w (ddc,A4) */
    c->pc = RC_ADDR(0x0000c69au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xddcu));
    rc_set_nzvc(c, t0, RC_W);

L_C69E:
    /* 0000c69e   2  bgt 0000c6a6 */
    c->pc = RC_ADDR(0x0000c69eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_C6A6;

L_C6A0:
    /* 0000c6a0   6  move.w #1,(ddc,A4) */
    c->pc = RC_ADDR(0x0000c6a0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xddcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C6A6:
    /* 0000c6a6   4  tst.w (de0,A4) */
    c->pc = RC_ADDR(0x0000c6a6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xde0u));
    rc_set_nzvc(c, t0, RC_W);

L_C6AA:
    /* 0000c6aa   2  beq 0000c6c8 */
    c->pc = RC_ADDR(0x0000c6aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_C6C8;

L_C6AC:
    /* 0000c6ac   4  subq.w #1,(de0,A4) */
    c->pc = RC_ADDR(0x0000c6acu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xde0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_C6B0:
    /* 0000c6b0   6  cmpi.w #14,(ddc,A4) */
    c->pc = RC_ADDR(0x0000c6b0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xddcu));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_C6B6:
    /* 0000c6b6   2  bgt 0000c6c6 */
    c->pc = RC_ADDR(0x0000c6b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_C6C6;

L_C6B8:
    /* 0000c6b8   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0000c6b8u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C6BC:
    /* 0000c6bc   4  jsr (ffff826c,A4) */
    c->pc = RC_ADDR(0x0000c6bcu);
    rc_step(c, m, 18);
    /* vector 103 */
    rc_push32(c, m, RC_ADDR(0x0000c6c0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d62u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020c7eu);
    return;

L_C6C0:
    /* 0000c6c0   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000c6c0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_C6C2:
    /* 0000c6c2   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000c6c2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_C6C4:
    /* 0000c6c4   2  bne 0000c6c8 */
    c->pc = RC_ADDR(0x0000c6c4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_C6C8;

L_C6C6:
    /* 0000c6c6   2  bsr 0000c734 */
    c->pc = RC_ADDR(0x0000c6c6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000c6c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000c734u);
    return;

L_C6C8:
    /* 0000c6c8   4  movea.l (ffffd298,A4),A0 */
    c->pc = RC_ADDR(0x0000c6c8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[0] = t0;

L_C6CC:
    /* 0000c6cc   6  move.l (ffffd340,A4),(4,A0) */
    c->pc = RC_ADDR(0x0000c6ccu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C6D2:
    /* 0000c6d2   4  pea (00000015).l */
    c->pc = RC_ADDR(0x0000c6d2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000015u);

L_C6D6:
    /* 0000c6d6   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c6d6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C6DA:
    /* 0000c6da   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x0000c6dau);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x0000c6deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_C6DE:
    /* 0000c6de   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000c6deu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C6E0:
    /* 0000c6e0   4  pea (000000c2).l */
    c->pc = RC_ADDR(0x0000c6e0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c2u);

L_C6E4:
    /* 0000c6e4   4  move.w (dde,A4),D0 */
    c->pc = RC_ADDR(0x0000c6e4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xddeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C6E8:
    /* 0000c6e8   4  add.w #63,D0 */
    c->pc = RC_ADDR(0x0000c6e8u);
    rc_step(c, m, 10);
    t0 = 0x00000063u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C6EC:
    /* 0000c6ec   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c6ecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C6EE:
    /* 0000c6ee   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000c6eeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C6F0:
    /* 0000c6f0   4  pea (000000be).l */
    c->pc = RC_ADDR(0x0000c6f0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000beu);

L_C6F4:
    /* 0000c6f4   4  pea (00000065).l */
    c->pc = RC_ADDR(0x0000c6f4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000065u);

L_C6F8:
    /* 0000c6f8   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c6f8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C6FC:
    /* 0000c6fc   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x0000c6fcu);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x0000c700u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_C700:
    /* 0000c700   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000c700u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_C704:
    /* 0000c704   4  pea (0000000a).l */
    c->pc = RC_ADDR(0x0000c704u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000au);

L_C708:
    /* 0000c708   4  move.w (de0,A4),D0 */
    c->pc = RC_ADDR(0x0000c708u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xde0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_C70C:
    /* 0000c70c   4  add.w #63,D0 */
    c->pc = RC_ADDR(0x0000c70cu);
    rc_step(c, m, 10);
    t0 = 0x00000063u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C710:
    /* 0000c710   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000c710u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_C712:
    /* 0000c712   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000c712u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C714:
    /* 0000c714   4  pea (00000006).l */
    c->pc = RC_ADDR(0x0000c714u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000006u);

L_C718:
    /* 0000c718   4  pea (00000065).l */
    c->pc = RC_ADDR(0x0000c718u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000065u);

L_C71C:
    /* 0000c71c   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c71cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C720:
    /* 0000c720   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x0000c720u);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x0000c724u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_C724:
    /* 0000c724   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000c724u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_C728:
    /* 0000c728   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c728u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C72A:
    /* 0000c72a   2  rts */
    c->pc = RC_ADDR(0x0000c72au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
