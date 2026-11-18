/* fn_0000f65e - 210 byte(s), 76 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000f65e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f65eu): goto L_F65E;
    case RC_ADDR(0x0000f662u): goto L_F662;
    case RC_ADDR(0x0000f666u): goto L_F666;
    case RC_ADDR(0x0000f66au): goto L_F66A;
    case RC_ADDR(0x0000f66cu): goto L_F66C;
    case RC_ADDR(0x0000f670u): goto L_F670;
    case RC_ADDR(0x0000f674u): goto L_F674;
    case RC_ADDR(0x0000f678u): goto L_F678;
    case RC_ADDR(0x0000f67au): goto L_F67A;
    case RC_ADDR(0x0000f67eu): goto L_F67E;
    case RC_ADDR(0x0000f680u): goto L_F680;
    case RC_ADDR(0x0000f684u): goto L_F684;
    case RC_ADDR(0x0000f686u): goto L_F686;
    case RC_ADDR(0x0000f688u): goto L_F688;
    case RC_ADDR(0x0000f68au): goto L_F68A;
    case RC_ADDR(0x0000f68cu): goto L_F68C;
    case RC_ADDR(0x0000f690u): goto L_F690;
    case RC_ADDR(0x0000f694u): goto L_F694;
    case RC_ADDR(0x0000f696u): goto L_F696;
    case RC_ADDR(0x0000f698u): goto L_F698;
    case RC_ADDR(0x0000f69au): goto L_F69A;
    case RC_ADDR(0x0000f69cu): goto L_F69C;
    case RC_ADDR(0x0000f6a0u): goto L_F6A0;
    case RC_ADDR(0x0000f6a2u): goto L_F6A2;
    case RC_ADDR(0x0000f6a6u): goto L_F6A6;
    case RC_ADDR(0x0000f6a8u): goto L_F6A8;
    case RC_ADDR(0x0000f6acu): goto L_F6AC;
    case RC_ADDR(0x0000f6aeu): goto L_F6AE;
    case RC_ADDR(0x0000f6b2u): goto L_F6B2;
    case RC_ADDR(0x0000f6b4u): goto L_F6B4;
    case RC_ADDR(0x0000f6b6u): goto L_F6B6;
    case RC_ADDR(0x0000f6bau): goto L_F6BA;
    case RC_ADDR(0x0000f6beu): goto L_F6BE;
    case RC_ADDR(0x0000f6c0u): goto L_F6C0;
    case RC_ADDR(0x0000f6c4u): goto L_F6C4;
    case RC_ADDR(0x0000f6c6u): goto L_F6C6;
    case RC_ADDR(0x0000f6cau): goto L_F6CA;
    case RC_ADDR(0x0000f6ccu): goto L_F6CC;
    case RC_ADDR(0x0000f6ceu): goto L_F6CE;
    case RC_ADDR(0x0000f6d0u): goto L_F6D0;
    case RC_ADDR(0x0000f6d4u): goto L_F6D4;
    case RC_ADDR(0x0000f6d6u): goto L_F6D6;
    case RC_ADDR(0x0000f6dau): goto L_F6DA;
    case RC_ADDR(0x0000f6dcu): goto L_F6DC;
    case RC_ADDR(0x0000f6e0u): goto L_F6E0;
    case RC_ADDR(0x0000f6e2u): goto L_F6E2;
    case RC_ADDR(0x0000f6e4u): goto L_F6E4;
    case RC_ADDR(0x0000f6e6u): goto L_F6E6;
    case RC_ADDR(0x0000f6e8u): goto L_F6E8;
    case RC_ADDR(0x0000f6eau): goto L_F6EA;
    case RC_ADDR(0x0000f6ecu): goto L_F6EC;
    case RC_ADDR(0x0000f6f0u): goto L_F6F0;
    case RC_ADDR(0x0000f6f4u): goto L_F6F4;
    case RC_ADDR(0x0000f6f6u): goto L_F6F6;
    case RC_ADDR(0x0000f6f8u): goto L_F6F8;
    case RC_ADDR(0x0000f6fcu): goto L_F6FC;
    case RC_ADDR(0x0000f6feu): goto L_F6FE;
    case RC_ADDR(0x0000f700u): goto L_F700;
    case RC_ADDR(0x0000f702u): goto L_F702;
    case RC_ADDR(0x0000f704u): goto L_F704;
    case RC_ADDR(0x0000f708u): goto L_F708;
    case RC_ADDR(0x0000f70au): goto L_F70A;
    case RC_ADDR(0x0000f70cu): goto L_F70C;
    case RC_ADDR(0x0000f712u): goto L_F712;
    case RC_ADDR(0x0000f714u): goto L_F714;
    case RC_ADDR(0x0000f716u): goto L_F716;
    case RC_ADDR(0x0000f718u): goto L_F718;
    case RC_ADDR(0x0000f71au): goto L_F71A;
    case RC_ADDR(0x0000f71cu): goto L_F71C;
    case RC_ADDR(0x0000f720u): goto L_F720;
    case RC_ADDR(0x0000f722u): goto L_F722;
    case RC_ADDR(0x0000f724u): goto L_F724;
    case RC_ADDR(0x0000f728u): goto L_F728;
    case RC_ADDR(0x0000f72au): goto L_F72A;
    case RC_ADDR(0x0000f72cu): goto L_F72C;
    case RC_ADDR(0x0000f72eu): goto L_F72E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F65E:
    /* 0000f65e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000f65eu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_F662:
    /* 0000f662   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000f662u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_F666:
    /* 0000f666   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000f666u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F66A:
    /* 0000f66a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f66au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F66C:
    /* 0000f66c   4  divs.w #20,D0 */
    c->pc = RC_ADDR(0x0000f66cu);
    rc_step(c, m, 162);
    t0 = 0x00000020u;
    rc_divs(c, m, 0, t0);

L_F670:
    /* 0000f670   4  muls.w #27,D0 */
    c->pc = RC_ADDR(0x0000f670u);
    rc_step(c, m, 42);
    t0 = 0x00000027u;
    rc_muls(c, 0, t0);

L_F674:
    /* 0000f674   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0000f674u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F678:
    /* 0000f678   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000f678u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_F67A:
    /* 0000f67a   4  divs.w #1b,D1 */
    c->pc = RC_ADDR(0x0000f67au);
    rc_step(c, m, 162);
    t0 = 0x0000001bu;
    rc_divs(c, m, 1, t0);

L_F67E:
    /* 0000f67e   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000f67eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F680:
    /* 0000f680   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x0000f680u);
    rc_step(c, m, 10);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F684:
    /* 0000f684   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f684u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F686:
    /* 0000f686   2  move.l D0,D5 */
    c->pc = RC_ADDR(0x0000f686u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F688:
    /* 0000f688   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0000f688u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F68A:
    /* 0000f68a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f68au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F68C:
    /* 0000f68c   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x0000f68cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_F690:
    /* 0000f690   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f690u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F694:
    /* 0000f694   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000f694u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_F696:
    /* 0000f696   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000f696u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F698:
    /* 0000f698   2  move.w D1,D0 */
    c->pc = RC_ADDR(0x0000f698u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F69A:
    /* 0000f69a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000f69au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_F69C:
    /* 0000f69c   4  movea.l (fffffabc,A4),A0 */
    c->pc = RC_ADDR(0x0000f69cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x544u));
    c->a[0] = t0;

L_F6A0:
    /* 0000f6a0   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000f6a0u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_F6A2:
    /* 0000f6a2   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f6a2u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F6A6:
    /* 0000f6a6   2  move.l D1,D4 */
    c->pc = RC_ADDR(0x0000f6a6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F6A8:
    /* 0000f6a8   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000f6a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F6AC:
    /* 0000f6ac   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f6acu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F6AE:
    /* 0000f6ae   4  divs.w #20,D0 */
    c->pc = RC_ADDR(0x0000f6aeu);
    rc_step(c, m, 162);
    t0 = 0x00000020u;
    rc_divs(c, m, 0, t0);

L_F6B2:
    /* 0000f6b2   2  swap D0 */
    c->pc = RC_ADDR(0x0000f6b2u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_F6B4:
    /* 0000f6b4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f6b4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F6B6:
    /* 0000f6b6   4  divs.w #8,D0 */
    c->pc = RC_ADDR(0x0000f6b6u);
    rc_step(c, m, 162);
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_F6BA:
    /* 0000f6ba   4  move.w (a,A5),D1 */
    c->pc = RC_ADDR(0x0000f6bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F6BE:
    /* 0000f6be   2  ext.l D1 */
    c->pc = RC_ADDR(0x0000f6beu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_F6C0:
    /* 0000f6c0   4  divs.w #1b,D1 */
    c->pc = RC_ADDR(0x0000f6c0u);
    rc_step(c, m, 162);
    t0 = 0x0000001bu;
    rc_divs(c, m, 1, t0);

L_F6C4:
    /* 0000f6c4   2  swap D1 */
    c->pc = RC_ADDR(0x0000f6c4u);
    rc_step(c, m, 4);
    t0 = c->d[1];
    c->d[1] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[1], RC_L);

L_F6C6:
    /* 0000f6c6   4  muls.w (fffffa9c,A4),D1 */
    c->pc = RC_ADDR(0x0000f6c6u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    rc_muls(c, 1, t0);

L_F6CA:
    /* 0000f6ca   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0000f6cau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_F6CC:
    /* 0000f6cc   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f6ccu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F6CE:
    /* 0000f6ce   2  add.l D0,D4 */
    c->pc = RC_ADDR(0x0000f6ceu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_F6D0:
    /* 0000f6d0   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000f6d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F6D4:
    /* 0000f6d4   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f6d4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F6D6:
    /* 0000f6d6   4  divs.w #8,D0 */
    c->pc = RC_ADDR(0x0000f6d6u);
    rc_step(c, m, 162);
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_F6DA:
    /* 0000f6da   2  swap D0 */
    c->pc = RC_ADDR(0x0000f6dau);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_F6DC:
    /* 0000f6dc   4  move.w #80,D1 */
    c->pc = RC_ADDR(0x0000f6dcu);
    rc_step(c, m, 8);
    t0 = 0x00000080u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F6E0:
    /* 0000f6e0   2  asr.w D0,D1 */
    c->pc = RC_ADDR(0x0000f6e0u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, (c->d[0] & 63u), rc_d_get(c, 1, RC_W), RC_W));

L_F6E2:
    /* 0000f6e2   2  move.b D1,D7 */
    c->pc = RC_ADDR(0x0000f6e2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_B);
    rc_d_set(c, 7, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F6E4:
    /* 0000f6e4   2  moveq #0,D6 */
    c->pc = RC_ADDR(0x0000f6e4u);
    rc_step(c, m, 4);
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_F6E6:
    /* 0000f6e6   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0000f6e6u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_F6E8:
    /* 0000f6e8   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0000f6e8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F6EA:
    /* 0000f6ea   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000f6eau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_F6EC:
    /* 0000f6ec   4  lea (fffffaa8,A4),A0 */
    c->pc = RC_ADDR(0x0000f6ecu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x558u);

L_F6F0:
    /* 0000f6f0   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000f6f0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_F6F4:
    /* 0000f6f4   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x0000f6f4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_F6F6:
    /* 0000f6f6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000f6f6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F6F8:
    /* 0000f6f8   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0000f6f8u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F6FC:
    /* 0000f6fc   2  move.b D7,D1 */
    c->pc = RC_ADDR(0x0000f6fcu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F6FE:
    /* 0000f6fe   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000f6feu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_F700:
    /* 0000f700   2  and.w D1,D0 */
    c->pc = RC_ADDR(0x0000f700u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_F702:
    /* 0000f702   2  beq 0000f708 */
    c->pc = RC_ADDR(0x0000f702u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F708;

L_F704:
    /* 0000f704   4  bset #5,D6 */
    c->pc = RC_ADDR(0x0000f704u);
    rc_step(c, m, 12);
    t4 = 0x00000005u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_L, t2);

L_F708:
    /* 0000f708   2  asr.w #1,D6 */
    c->pc = RC_ADDR(0x0000f708u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_W, rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 6, RC_W), RC_W));

L_F70A:
    /* 0000f70a   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x0000f70au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_F70C:
    /* 0000f70c   6  cmp.l #5,D5 */
    c->pc = RC_ADDR(0x0000f70cu);
    rc_step(c, m, 14);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_F712:
    /* 0000f712   2  blt 0000f6e8 */
    c->pc = RC_ADDR(0x0000f712u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_F6E8; }

L_F714:
    /* 0000f714   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x0000f714u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F716:
    /* 0000f716   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f716u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F718:
    /* 0000f718   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x0000f718u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_F71A:
    /* 0000f71a   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x0000f71au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_F71C:
    /* 0000f71c   4  and.l (ffff9cfc,A4),D1 */
    c->pc = RC_ADDR(0x0000f71cu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x6304u));
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_F720:
    /* 0000f720   2  beq 0000f72c */
    c->pc = RC_ADDR(0x0000f720u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_F72C;

L_F722:
    /* 0000f722   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000f722u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F724:
    /* 0000f724   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = RC_ADDR(0x0000f724u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[6] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_F728:
    /* 0000f728   2  unlk A5 */
    c->pc = RC_ADDR(0x0000f728u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_F72A:
    /* 0000f72a   2  rts */
    c->pc = RC_ADDR(0x0000f72au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_F72C:
    /* 0000f72c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000f72cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_F72E:
    /* 0000f72e   2  bra 0000f724 */
    c->pc = RC_ADDR(0x0000f72eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_F724;

}
