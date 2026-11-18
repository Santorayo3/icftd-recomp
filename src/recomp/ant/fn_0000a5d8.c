/* fn_0000a5d8 - 316 byte(s), 92 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a5d8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a5d8u): goto L_A5D8;
    case RC_ADDR(0x0000a5dcu): goto L_A5DC;
    case RC_ADDR(0x0000a5e0u): goto L_A5E0;
    case RC_ADDR(0x0000a5e4u): goto L_A5E4;
    case RC_ADDR(0x0000a5e8u): goto L_A5E8;
    case RC_ADDR(0x0000a5eeu): goto L_A5EE;
    case RC_ADDR(0x0000a5f0u): goto L_A5F0;
    case RC_ADDR(0x0000a5f2u): goto L_A5F2;
    case RC_ADDR(0x0000a5f6u): goto L_A5F6;
    case RC_ADDR(0x0000a5f8u): goto L_A5F8;
    case RC_ADDR(0x0000a5fcu): goto L_A5FC;
    case RC_ADDR(0x0000a5feu): goto L_A5FE;
    case RC_ADDR(0x0000a602u): goto L_A602;
    case RC_ADDR(0x0000a604u): goto L_A604;
    case RC_ADDR(0x0000a608u): goto L_A608;
    case RC_ADDR(0x0000a60eu): goto L_A60E;
    case RC_ADDR(0x0000a612u): goto L_A612;
    case RC_ADDR(0x0000a616u): goto L_A616;
    case RC_ADDR(0x0000a61au): goto L_A61A;
    case RC_ADDR(0x0000a61cu): goto L_A61C;
    case RC_ADDR(0x0000a620u): goto L_A620;
    case RC_ADDR(0x0000a624u): goto L_A624;
    case RC_ADDR(0x0000a62au): goto L_A62A;
    case RC_ADDR(0x0000a62cu): goto L_A62C;
    case RC_ADDR(0x0000a632u): goto L_A632;
    case RC_ADDR(0x0000a634u): goto L_A634;
    case RC_ADDR(0x0000a638u): goto L_A638;
    case RC_ADDR(0x0000a63au): goto L_A63A;
    case RC_ADDR(0x0000a63eu): goto L_A63E;
    case RC_ADDR(0x0000a640u): goto L_A640;
    case RC_ADDR(0x0000a642u): goto L_A642;
    case RC_ADDR(0x0000a646u): goto L_A646;
    case RC_ADDR(0x0000a648u): goto L_A648;
    case RC_ADDR(0x0000a64cu): goto L_A64C;
    case RC_ADDR(0x0000a64eu): goto L_A64E;
    case RC_ADDR(0x0000a652u): goto L_A652;
    case RC_ADDR(0x0000a654u): goto L_A654;
    case RC_ADDR(0x0000a658u): goto L_A658;
    case RC_ADDR(0x0000a65cu): goto L_A65C;
    case RC_ADDR(0x0000a65eu): goto L_A65E;
    case RC_ADDR(0x0000a662u): goto L_A662;
    case RC_ADDR(0x0000a664u): goto L_A664;
    case RC_ADDR(0x0000a668u): goto L_A668;
    case RC_ADDR(0x0000a66cu): goto L_A66C;
    case RC_ADDR(0x0000a66eu): goto L_A66E;
    case RC_ADDR(0x0000a672u): goto L_A672;
    case RC_ADDR(0x0000a674u): goto L_A674;
    case RC_ADDR(0x0000a678u): goto L_A678;
    case RC_ADDR(0x0000a67au): goto L_A67A;
    case RC_ADDR(0x0000a67eu): goto L_A67E;
    case RC_ADDR(0x0000a682u): goto L_A682;
    case RC_ADDR(0x0000a684u): goto L_A684;
    case RC_ADDR(0x0000a688u): goto L_A688;
    case RC_ADDR(0x0000a68cu): goto L_A68C;
    case RC_ADDR(0x0000a68eu): goto L_A68E;
    case RC_ADDR(0x0000a692u): goto L_A692;
    case RC_ADDR(0x0000a694u): goto L_A694;
    case RC_ADDR(0x0000a698u): goto L_A698;
    case RC_ADDR(0x0000a69cu): goto L_A69C;
    case RC_ADDR(0x0000a6a0u): goto L_A6A0;
    case RC_ADDR(0x0000a6a4u): goto L_A6A4;
    case RC_ADDR(0x0000a6a8u): goto L_A6A8;
    case RC_ADDR(0x0000a6acu): goto L_A6AC;
    case RC_ADDR(0x0000a6b0u): goto L_A6B0;
    case RC_ADDR(0x0000a6b4u): goto L_A6B4;
    case RC_ADDR(0x0000a6b8u): goto L_A6B8;
    case RC_ADDR(0x0000a6bcu): goto L_A6BC;
    case RC_ADDR(0x0000a6c0u): goto L_A6C0;
    case RC_ADDR(0x0000a6c2u): goto L_A6C2;
    case RC_ADDR(0x0000a6c6u): goto L_A6C6;
    case RC_ADDR(0x0000a6cau): goto L_A6CA;
    case RC_ADDR(0x0000a6ccu): goto L_A6CC;
    case RC_ADDR(0x0000a6d0u): goto L_A6D0;
    case RC_ADDR(0x0000a6d4u): goto L_A6D4;
    case RC_ADDR(0x0000a6d6u): goto L_A6D6;
    case RC_ADDR(0x0000a6dau): goto L_A6DA;
    case RC_ADDR(0x0000a6dcu): goto L_A6DC;
    case RC_ADDR(0x0000a6e0u): goto L_A6E0;
    case RC_ADDR(0x0000a6e2u): goto L_A6E2;
    case RC_ADDR(0x0000a6e6u): goto L_A6E6;
    case RC_ADDR(0x0000a6eau): goto L_A6EA;
    case RC_ADDR(0x0000a6ecu): goto L_A6EC;
    case RC_ADDR(0x0000a6f0u): goto L_A6F0;
    case RC_ADDR(0x0000a6f2u): goto L_A6F2;
    case RC_ADDR(0x0000a6f4u): goto L_A6F4;
    case RC_ADDR(0x0000a6f8u): goto L_A6F8;
    case RC_ADDR(0x0000a6fcu): goto L_A6FC;
    case RC_ADDR(0x0000a700u): goto L_A700;
    case RC_ADDR(0x0000a706u): goto L_A706;
    case RC_ADDR(0x0000a70au): goto L_A70A;
    case RC_ADDR(0x0000a710u): goto L_A710;
    case RC_ADDR(0x0000a712u): goto L_A712;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A5D8:
    /* 0000a5d8   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x0000a5d8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_A5DC:
    /* 0000a5dc   4  tst.w (ffffd2a4,A4) */
    c->pc = RC_ADDR(0x0000a5dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d5cu));
    rc_set_nzvc(c, t0, RC_W);

L_A5E0:
    /* 0000a5e0   4  beq 0000a710 */
    c->pc = RC_ADDR(0x0000a5e0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A710;

L_A5E4:
    /* 0000a5e4   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a5e4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A5E8:
    /* 0000a5e8   6  cmpi.w #8,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a5e8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_A5EE:
    /* 0000a5ee   2  bne 0000a612 */
    c->pc = RC_ADDR(0x0000a5eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A612;

L_A5F0:
    /* 0000a5f0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000a5f0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_A5F2:
    /* 0000a5f2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000a5f2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A5F6:
    /* 0000a5f6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000a5f6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_A5F8:
    /* 0000a5f8   4  lea (fffff7ce,A4),A0 */
    c->pc = RC_ADDR(0x0000a5f8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x832u);

L_A5FC:
    /* 0000a5fc   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000a5fcu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_A5FE:
    /* 0000a5fe   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0000a5feu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A602:
    /* 0000a602   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0000a602u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_A604:
    /* 0000a604   4  lea (85c,A4),A1 */
    c->pc = RC_ADDR(0x0000a604u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x85cu);

L_A608:
    /* 0000a608   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0000a608u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A60E:
    /* 0000a60e   4  bra 0000a6fc */
    c->pc = RC_ADDR(0x0000a60eu);
    rc_step(c, m, 10);
    goto L_A6FC;

L_A612:
    /* 0000a612   4  move.w (ffff83e6,A4),D0 */
    c->pc = RC_ADDR(0x0000a612u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A616:
    /* 0000a616   4  lea (ffff8400,A4),A0 */
    c->pc = RC_ADDR(0x0000a616u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7c00u);

L_A61A:
    /* 0000a61a   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0000a61au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_A61C:
    /* 0000a61c   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000a61cu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A620:
    /* 0000a620   4  move.w D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a620u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A624:
    /* 0000a624   6  cmpi.w #1c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a624u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000001cu);

L_A62A:
    /* 0000a62a   2  beq 0000a634 */
    c->pc = RC_ADDR(0x0000a62au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A634;

L_A62C:
    /* 0000a62c   6  cmpi.w #1e,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a62cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000001eu);

L_A632:
    /* 0000a632   2  bne 0000a648 */
    c->pc = RC_ADDR(0x0000a632u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A648;

L_A634:
    /* 0000a634   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a634u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_A638:
    /* 0000a638   2  beq 0000a648 */
    c->pc = RC_ADDR(0x0000a638u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A648;

L_A63A:
    /* 0000a63a   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000a63au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A63E:
    /* 0000a63e   2  addq.w #2,D0 */
    c->pc = RC_ADDR(0x0000a63eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_A640:
    /* 0000a640   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x0000a640u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_A642:
    /* 0000a642   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a642u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A646:
    /* 0000a646   2  bra 0000a65c */
    c->pc = RC_ADDR(0x0000a646u);
    rc_step(c, m, 10);
    goto L_A65C;

L_A648:
    /* 0000a648   4  tst.w (ffff84a0,A4) */
    c->pc = RC_ADDR(0x0000a648u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7b60u));
    rc_set_nzvc(c, t0, RC_W);

L_A64C:
    /* 0000a64c   2  bne 0000a65c */
    c->pc = RC_ADDR(0x0000a64cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A65C;

L_A64E:
    /* 0000a64e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000a64eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A652:
    /* 0000a652   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000a652u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_A654:
    /* 0000a654   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x0000a654u);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_A658:
    /* 0000a658   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000a658u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A65C:
    /* 0000a65c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000a65cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_A65E:
    /* 0000a65e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000a65eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A662:
    /* 0000a662   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000a662u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_A664:
    /* 0000a664   4  lea (fffff7ce,A4),A0 */
    c->pc = RC_ADDR(0x0000a664u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x832u);

L_A668:
    /* 0000a668   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000a668u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A66C:
    /* 0000a66c   2  lsr.w #8,D1 */
    c->pc = RC_ADDR(0x0000a66cu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_A66E:
    /* 0000a66e   4  move.w D1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000a66eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A672:
    /* 0000a672   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000a672u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_A674:
    /* 0000a674   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000a674u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A678:
    /* 0000a678   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000a678u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_A67A:
    /* 0000a67a   4  lea (fffff7ce,A4),A0 */
    c->pc = RC_ADDR(0x0000a67au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x832u);

L_A67E:
    /* 0000a67e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000a67eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A682:
    /* 0000a682   2  lsr.w #4,D1 */
    c->pc = RC_ADDR(0x0000a682u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W));

L_A684:
    /* 0000a684   4  and.w #f,D1 */
    c->pc = RC_ADDR(0x0000a684u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_A688:
    /* 0000a688   4  move.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000a688u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A68C:
    /* 0000a68c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000a68cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_A68E:
    /* 0000a68e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000a68eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A692:
    /* 0000a692   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000a692u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_A694:
    /* 0000a694   4  lea (fffff7ce,A4),A0 */
    c->pc = RC_ADDR(0x0000a694u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x832u);

L_A698:
    /* 0000a698   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000a698u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A69C:
    /* 0000a69c   4  and.w #f,D1 */
    c->pc = RC_ADDR(0x0000a69cu);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_A6A0:
    /* 0000a6a0   4  move.w D1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000a6a0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A6A4:
    /* 0000a6a4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000a6a4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A6A8:
    /* 0000a6a8   4  sub.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000a6a8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_A6AC:
    /* 0000a6ac   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000a6acu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A6B0:
    /* 0000a6b0   4  sub.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0000a6b0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_A6B4:
    /* 0000a6b4   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0000a6b4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A6B8:
    /* 0000a6b8   4  sub.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x0000a6b8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_A6BC:
    /* 0000a6bc   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000a6bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_A6C0:
    /* 0000a6c0   2  bge 0000a6c6 */
    c->pc = RC_ADDR(0x0000a6c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_A6C6;

L_A6C2:
    /* 0000a6c2   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0000a6c2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A6C6:
    /* 0000a6c6   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000a6c6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_A6CA:
    /* 0000a6ca   2  bge 0000a6d0 */
    c->pc = RC_ADDR(0x0000a6cau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_A6D0;

L_A6CC:
    /* 0000a6cc   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x0000a6ccu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A6D0:
    /* 0000a6d0   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x0000a6d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_A6D4:
    /* 0000a6d4   2  bge 0000a6da */
    c->pc = RC_ADDR(0x0000a6d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_A6DA;

L_A6D6:
    /* 0000a6d6   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x0000a6d6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A6DA:
    /* 0000a6da   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000a6dau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_A6DC:
    /* 0000a6dc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0000a6dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A6E0:
    /* 0000a6e0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000a6e0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_A6E2:
    /* 0000a6e2   4  lea (85c,A4),A0 */
    c->pc = RC_ADDR(0x0000a6e2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x85cu);

L_A6E6:
    /* 0000a6e6   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x0000a6e6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A6EA:
    /* 0000a6ea   2  asl.w #8,D1 */
    c->pc = RC_ADDR(0x0000a6eau);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_A6EC:
    /* 0000a6ec   4  move.w (fffffff8,A5),D2 */
    c->pc = RC_ADDR(0x0000a6ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A6F0:
    /* 0000a6f0   2  asl.w #4,D2 */
    c->pc = RC_ADDR(0x0000a6f0u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_A6F2:
    /* 0000a6f2   2  add.w D2,D1 */
    c->pc = RC_ADDR(0x0000a6f2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_A6F4:
    /* 0000a6f4   4  add.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x0000a6f4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_A6F8:
    /* 0000a6f8   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000a6f8u);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A6FC:
    /* 0000a6fc   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a6fcu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_A700:
    /* 0000a700   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0000a700u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_A706:
    /* 0000a706   4  bcs 0000a5e8 */
    c->pc = RC_ADDR(0x0000a706u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_A5E8; }

L_A70A:
    /* 0000a70a   6  move.w #1,(ffffd2a2,A4) */
    c->pc = RC_ADDR(0x0000a70au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2d5eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A710:
    /* 0000a710   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a710u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A712:
    /* 0000a712   2  rts */
    c->pc = RC_ADDR(0x0000a712u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
