/* fn_000188e8 - 234 byte(s), 68 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000188e8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000188e8u): goto L_188E8;
    case RC_ADDR(0x000188ecu): goto L_188EC;
    case RC_ADDR(0x000188f0u): goto L_188F0;
    case RC_ADDR(0x000188f2u): goto L_188F2;
    case RC_ADDR(0x000188f4u): goto L_188F4;
    case RC_ADDR(0x000188f6u): goto L_188F6;
    case RC_ADDR(0x000188fau): goto L_188FA;
    case RC_ADDR(0x000188fcu): goto L_188FC;
    case RC_ADDR(0x00018900u): goto L_18900;
    case RC_ADDR(0x00018904u): goto L_18904;
    case RC_ADDR(0x00018908u): goto L_18908;
    case RC_ADDR(0x0001890au): goto L_1890A;
    case RC_ADDR(0x0001890cu): goto L_1890C;
    case RC_ADDR(0x00018910u): goto L_18910;
    case RC_ADDR(0x00018914u): goto L_18914;
    case RC_ADDR(0x00018916u): goto L_18916;
    case RC_ADDR(0x0001891au): goto L_1891A;
    case RC_ADDR(0x0001891eu): goto L_1891E;
    case RC_ADDR(0x00018920u): goto L_18920;
    case RC_ADDR(0x00018922u): goto L_18922;
    case RC_ADDR(0x00018926u): goto L_18926;
    case RC_ADDR(0x0001892au): goto L_1892A;
    case RC_ADDR(0x0001892eu): goto L_1892E;
    case RC_ADDR(0x00018930u): goto L_18930;
    case RC_ADDR(0x00018934u): goto L_18934;
    case RC_ADDR(0x00018938u): goto L_18938;
    case RC_ADDR(0x0001893au): goto L_1893A;
    case RC_ADDR(0x0001893eu): goto L_1893E;
    case RC_ADDR(0x00018940u): goto L_18940;
    case RC_ADDR(0x00018942u): goto L_18942;
    case RC_ADDR(0x00018946u): goto L_18946;
    case RC_ADDR(0x0001894au): goto L_1894A;
    case RC_ADDR(0x0001894eu): goto L_1894E;
    case RC_ADDR(0x00018952u): goto L_18952;
    case RC_ADDR(0x00018956u): goto L_18956;
    case RC_ADDR(0x0001895au): goto L_1895A;
    case RC_ADDR(0x0001895eu): goto L_1895E;
    case RC_ADDR(0x00018964u): goto L_18964;
    case RC_ADDR(0x0001896au): goto L_1896A;
    case RC_ADDR(0x0001896eu): goto L_1896E;
    case RC_ADDR(0x00018972u): goto L_18972;
    case RC_ADDR(0x00018974u): goto L_18974;
    case RC_ADDR(0x00018976u): goto L_18976;
    case RC_ADDR(0x0001897au): goto L_1897A;
    case RC_ADDR(0x0001897eu): goto L_1897E;
    case RC_ADDR(0x00018980u): goto L_18980;
    case RC_ADDR(0x00018984u): goto L_18984;
    case RC_ADDR(0x00018986u): goto L_18986;
    case RC_ADDR(0x0001898au): goto L_1898A;
    case RC_ADDR(0x0001898eu): goto L_1898E;
    case RC_ADDR(0x00018992u): goto L_18992;
    case RC_ADDR(0x00018996u): goto L_18996;
    case RC_ADDR(0x0001899au): goto L_1899A;
    case RC_ADDR(0x0001899eu): goto L_1899E;
    case RC_ADDR(0x000189a2u): goto L_189A2;
    case RC_ADDR(0x000189a6u): goto L_189A6;
    case RC_ADDR(0x000189aau): goto L_189AA;
    case RC_ADDR(0x000189acu): goto L_189AC;
    case RC_ADDR(0x000189b0u): goto L_189B0;
    case RC_ADDR(0x000189b4u): goto L_189B4;
    case RC_ADDR(0x000189b6u): goto L_189B6;
    case RC_ADDR(0x000189bau): goto L_189BA;
    case RC_ADDR(0x000189beu): goto L_189BE;
    case RC_ADDR(0x000189c2u): goto L_189C2;
    case RC_ADDR(0x000189c6u): goto L_189C6;
    case RC_ADDR(0x000189cau): goto L_189CA;
    case RC_ADDR(0x000189ceu): goto L_189CE;
    case RC_ADDR(0x000189d0u): goto L_189D0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_188E8:
    /* 000188e8   4  link.w A5,#fffffff2 */
    c->pc = RC_ADDR(0x000188e8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_188EC:
    /* 000188ec   4  move.w (1d5e,A4),D0 */
    c->pc = RC_ADDR(0x000188ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1d5eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_188F0:
    /* 000188f0   2  asl.w #3,D0 */
    c->pc = RC_ADDR(0x000188f0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W));

L_188F2:
    /* 000188f2   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000188f2u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_188F4:
    /* 000188f4   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x000188f4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_188F6:
    /* 000188f6   4  move.l D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x000188f6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_188FA:
    /* 000188fa   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000188fau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_188FC:
    /* 000188fc   4  move.w (1d60,A4),D0 */
    c->pc = RC_ADDR(0x000188fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1d60u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18900:
    /* 00018900   4  move.l D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00018900u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18904:
    /* 00018904   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x00018904u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_18908:
    /* 00018908   2  ext.l D0 */
    c->pc = RC_ADDR(0x00018908u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1890A:
    /* 0001890a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001890au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1890C:
    /* 0001890c   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x0001890cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_18910:
    /* 00018910   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00018910u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00018914u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_18914:
    /* 00018914   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018914u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18916:
    /* 00018916   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00018916u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1891A:
    /* 0001891a   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001891au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1891E:
    /* 0001891e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001891eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18920:
    /* 00018920   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00018920u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18922:
    /* 00018922   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x00018922u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_18926:
    /* 00018926   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x00018926u);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x0001892au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_1892A:
    /* 0001892a   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0001892au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_1892E:
    /* 0001892e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001892eu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_18930:
    /* 00018930   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x00018930u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_18934:
    /* 00018934   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x00018934u);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00018938u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_18938:
    /* 00018938   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018938u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1893A:
    /* 0001893a   4  move.l (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x0001893au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1893E:
    /* 0001893e   2  subq.l #4,D0 */
    c->pc = RC_ADDR(0x0001893eu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_18940:
    /* 00018940   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00018940u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18942:
    /* 00018942   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x00018942u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_18946:
    /* 00018946   4  pea (ffffffde,A0) */
    c->pc = RC_ADDR(0x00018946u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] - 0x22u));

L_1894A:
    /* 0001894a   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0001894au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_1894E:
    /* 0001894e   4  pea (00000001).l */
    c->pc = RC_ADDR(0x0001894eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_18952:
    /* 00018952   4  pea (1cda,A4) */
    c->pc = RC_ADDR(0x00018952u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1cdau));

L_18956:
    /* 00018956   4  jsr (ffff83aa,A4) */
    c->pc = RC_ADDR(0x00018956u);
    rc_step(c, m, 18);
    /* vector 156 */
    rc_push32(c, m, RC_ADDR(0x0001895au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002397au);
    return;

L_1895A:
    /* 0001895a   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0001895au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_1895E:
    /* 0001895e   6  move.w #a,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0001895eu);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18964:
    /* 00018964   6  move.l (8,A5),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00018964u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1896A:
    /* 0001896a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001896au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1896E:
    /* 0001896e   4  addq.l #1,(8,A5) */
    c->pc = RC_ADDR(0x0001896eu);
    rc_step(c, m, 24);
    t3 = (c->a[5] + 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_18972:
    /* 00018972   2  tst.b (A0) */
    c->pc = RC_ADDR(0x00018972u);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_18974:
    /* 00018974   2  beq 000189b6 */
    c->pc = RC_ADDR(0x00018974u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_189B6;

L_18976:
    /* 00018976   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00018976u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1897A:
    /* 0001897a   4  cmpi.b #a,(A0) */
    c->pc = RC_ADDR(0x0001897au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000000au);

L_1897E:
    /* 0001897e   2  bne 000189b4 */
    c->pc = RC_ADDR(0x0001897eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_189B4;

L_18980:
    /* 00018980   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00018980u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_18984:
    /* 00018984   2  clr.b (A0) */
    c->pc = RC_ADDR(0x00018984u);
    rc_step(c, m, 12);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_18986:
    /* 00018986   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00018986u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1898A:
    /* 0001898a   4  move.w (fffffff2,A5),-(A7) */
    c->pc = RC_ADDR(0x0001898au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1898E:
    /* 0001898e   4  move.w #d,-(A7) */
    c->pc = RC_ADDR(0x0001898eu);
    rc_step(c, m, 12);
    t0 = 0x0000000du;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18992:
    /* 00018992   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00018992u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18996:
    /* 00018996   4  jsr (00018880) */
    c->pc = RC_ADDR(0x00018996u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001899au));
    rc_depth++;
    c->pc = RC_ADDR(0x00018880u);
    return;

L_1899A:
    /* 0001899a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001899au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1899E:
    /* 0001899e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001899eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_189A2:
    /* 000189a2   4  move.b #a,(A0) */
    c->pc = RC_ADDR(0x000189a2u);
    rc_step(c, m, 12);
    t0 = 0x0000000au;
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_189A6:
    /* 000189a6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000189a6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_189AA:
    /* 000189aa   2  addq.l #1,A0 */
    c->pc = RC_ADDR(0x000189aau);
    rc_step(c, m, 8);
    c->a[0] += 0x00000001u;

L_189AC:
    /* 000189ac   4  move.l A0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000189acu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_189B0:
    /* 000189b0   4  addq.w #8,(fffffff2,A5) */
    c->pc = RC_ADDR(0x000189b0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_189B4:
    /* 000189b4   2  bra 0001896a */
    c->pc = RC_ADDR(0x000189b4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1896A;

L_189B6:
    /* 000189b6   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000189b6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_189BA:
    /* 000189ba   4  move.w (fffffff2,A5),-(A7) */
    c->pc = RC_ADDR(0x000189bau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_189BE:
    /* 000189be   4  move.w #d,-(A7) */
    c->pc = RC_ADDR(0x000189beu);
    rc_step(c, m, 12);
    t0 = 0x0000000du;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_189C2:
    /* 000189c2   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x000189c2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_189C6:
    /* 000189c6   4  jsr (00018880) */
    c->pc = RC_ADDR(0x000189c6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000189cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00018880u);
    return;

L_189CA:
    /* 000189ca   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000189cau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_189CE:
    /* 000189ce   2  unlk A5 */
    c->pc = RC_ADDR(0x000189ceu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_189D0:
    /* 000189d0   2  rts */
    c->pc = RC_ADDR(0x000189d0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
