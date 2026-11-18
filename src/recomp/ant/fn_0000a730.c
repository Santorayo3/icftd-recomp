/* fn_0000a730 - 200 byte(s), 58 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a730(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a730u): goto L_A730;
    case RC_ADDR(0x0000a734u): goto L_A734;
    case RC_ADDR(0x0000a738u): goto L_A738;
    case RC_ADDR(0x0000a73cu): goto L_A73C;
    case RC_ADDR(0x0000a740u): goto L_A740;
    case RC_ADDR(0x0000a742u): goto L_A742;
    case RC_ADDR(0x0000a746u): goto L_A746;
    case RC_ADDR(0x0000a74au): goto L_A74A;
    case RC_ADDR(0x0000a74eu): goto L_A74E;
    case RC_ADDR(0x0000a752u): goto L_A752;
    case RC_ADDR(0x0000a754u): goto L_A754;
    case RC_ADDR(0x0000a756u): goto L_A756;
    case RC_ADDR(0x0000a758u): goto L_A758;
    case RC_ADDR(0x0000a75au): goto L_A75A;
    case RC_ADDR(0x0000a75eu): goto L_A75E;
    case RC_ADDR(0x0000a762u): goto L_A762;
    case RC_ADDR(0x0000a766u): goto L_A766;
    case RC_ADDR(0x0000a76au): goto L_A76A;
    case RC_ADDR(0x0000a76eu): goto L_A76E;
    case RC_ADDR(0x0000a772u): goto L_A772;
    case RC_ADDR(0x0000a776u): goto L_A776;
    case RC_ADDR(0x0000a77au): goto L_A77A;
    case RC_ADDR(0x0000a77eu): goto L_A77E;
    case RC_ADDR(0x0000a780u): goto L_A780;
    case RC_ADDR(0x0000a784u): goto L_A784;
    case RC_ADDR(0x0000a788u): goto L_A788;
    case RC_ADDR(0x0000a78cu): goto L_A78C;
    case RC_ADDR(0x0000a790u): goto L_A790;
    case RC_ADDR(0x0000a794u): goto L_A794;
    case RC_ADDR(0x0000a796u): goto L_A796;
    case RC_ADDR(0x0000a79au): goto L_A79A;
    case RC_ADDR(0x0000a79eu): goto L_A79E;
    case RC_ADDR(0x0000a7a2u): goto L_A7A2;
    case RC_ADDR(0x0000a7a4u): goto L_A7A4;
    case RC_ADDR(0x0000a7a8u): goto L_A7A8;
    case RC_ADDR(0x0000a7acu): goto L_A7AC;
    case RC_ADDR(0x0000a7b0u): goto L_A7B0;
    case RC_ADDR(0x0000a7b4u): goto L_A7B4;
    case RC_ADDR(0x0000a7b6u): goto L_A7B6;
    case RC_ADDR(0x0000a7bau): goto L_A7BA;
    case RC_ADDR(0x0000a7c0u): goto L_A7C0;
    case RC_ADDR(0x0000a7c2u): goto L_A7C2;
    case RC_ADDR(0x0000a7c8u): goto L_A7C8;
    case RC_ADDR(0x0000a7cau): goto L_A7CA;
    case RC_ADDR(0x0000a7ceu): goto L_A7CE;
    case RC_ADDR(0x0000a7d0u): goto L_A7D0;
    case RC_ADDR(0x0000a7d4u): goto L_A7D4;
    case RC_ADDR(0x0000a7d8u): goto L_A7D8;
    case RC_ADDR(0x0000a7dau): goto L_A7DA;
    case RC_ADDR(0x0000a7deu): goto L_A7DE;
    case RC_ADDR(0x0000a7e2u): goto L_A7E2;
    case RC_ADDR(0x0000a7e4u): goto L_A7E4;
    case RC_ADDR(0x0000a7e8u): goto L_A7E8;
    case RC_ADDR(0x0000a7eau): goto L_A7EA;
    case RC_ADDR(0x0000a7eeu): goto L_A7EE;
    case RC_ADDR(0x0000a7f2u): goto L_A7F2;
    case RC_ADDR(0x0000a7f4u): goto L_A7F4;
    case RC_ADDR(0x0000a7f6u): goto L_A7F6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A730:
    /* 0000a730   4  link.w A5,#ffffffcc */
    c->pc = RC_ADDR(0x0000a730u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x34u;

L_A734:
    /* 0000a734   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x0000a734u);
    rc_step(c, m, 12);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A738:
    /* 0000a738   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000a738u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A73C:
    /* 0000a73c   4  jsr (00006500) */
    c->pc = RC_ADDR(0x0000a73cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a740u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_A740:
    /* 0000a740   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000a740u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_A742:
    /* 0000a742   4  jsr (0000370e) */
    c->pc = RC_ADDR(0x0000a742u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a746u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000370eu);
    return;

L_A746:
    /* 0000a746   4  clr.w (fffff8a6,A4) */
    c->pc = RC_ADDR(0x0000a746u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x75au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A74A:
    /* 0000a74a   4  clr.w (fffff8a2,A4) */
    c->pc = RC_ADDR(0x0000a74au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x75eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A74E:
    /* 0000a74e   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x0000a74eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_A752:
    /* 0000a752   2  bne 0000a7ca */
    c->pc = RC_ADDR(0x0000a752u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A7CA;

L_A754:
    /* 0000a754   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a754u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A756:
    /* 0000a756   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a756u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A758:
    /* 0000a758   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a758u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A75A:
    /* 0000a75a   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000a75au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_A75E:
    /* 0000a75e   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0000a75eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A762:
    /* 0000a762   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x0000a762u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x0000a766u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_A766:
    /* 0000a766   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000a766u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_A76A:
    /* 0000a76a   4  move.w (fffff8a2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a76au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x75eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A76E:
    /* 0000a76e   4  pea (0000a7f8) */
    c->pc = RC_ADDR(0x0000a76eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000a7f8u));

L_A772:
    /* 0000a772   4  pea (ffffffce,A5) */
    c->pc = RC_ADDR(0x0000a772u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x32u));

L_A776:
    /* 0000a776   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x0000a776u);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x0000a77au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_A77A:
    /* 0000a77a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000a77au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_A77E:
    /* 0000a77e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a77eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A780:
    /* 0000a780   4  move.w #a0,-(A7) */
    c->pc = RC_ADDR(0x0000a780u);
    rc_step(c, m, 12);
    t0 = 0x000000a0u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A784:
    /* 0000a784   4  move.w #a0,-(A7) */
    c->pc = RC_ADDR(0x0000a784u);
    rc_step(c, m, 12);
    t0 = 0x000000a0u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A788:
    /* 0000a788   4  pea (ffffffce,A5) */
    c->pc = RC_ADDR(0x0000a788u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x32u));

L_A78C:
    /* 0000a78c   4  jsr (00005468) */
    c->pc = RC_ADDR(0x0000a78cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a790u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005468u);
    return;

L_A790:
    /* 0000a790   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000a790u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_A794:
    /* 0000a794   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000a794u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A796:
    /* 0000a796   4  move.w #aa,-(A7) */
    c->pc = RC_ADDR(0x0000a796u);
    rc_step(c, m, 12);
    t0 = 0x000000aau;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A79A:
    /* 0000a79a   4  move.w #a0,-(A7) */
    c->pc = RC_ADDR(0x0000a79au);
    rc_step(c, m, 12);
    t0 = 0x000000a0u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A79E:
    /* 0000a79e   4  jsr (00005bfc) */
    c->pc = RC_ADDR(0x0000a79eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a7a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00005bfcu);
    return;

L_A7A2:
    /* 0000a7a2   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000a7a2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_A7A4:
    /* 0000a7a4   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x0000a7a4u);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x0000a7a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_A7A8:
    /* 0000a7a8   4  move.w (ffffd5c4,A4),D0 */
    c->pc = RC_ADDR(0x0000a7a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A7AC:
    /* 0000a7ac   4  add.w D0,(fffff8a2,A4) */
    c->pc = RC_ADDR(0x0000a7acu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x75eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_A7B0:
    /* 0000a7b0   4  tst.w (fffff8a2,A4) */
    c->pc = RC_ADDR(0x0000a7b0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x75eu));
    rc_set_nzvc(c, t0, RC_W);

L_A7B4:
    /* 0000a7b4   2  bge 0000a7ba */
    c->pc = RC_ADDR(0x0000a7b4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_A7BA;

L_A7B6:
    /* 0000a7b6   4  clr.w (fffff8a2,A4) */
    c->pc = RC_ADDR(0x0000a7b6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x75eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A7BA:
    /* 0000a7ba   6  cmpi.w #18,(fffff8a2,A4) */
    c->pc = RC_ADDR(0x0000a7bau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x75eu));
    rc_cmp(c, RC_W, t0, 0x00000018u);

L_A7C0:
    /* 0000a7c0   2  ble 0000a7c8 */
    c->pc = RC_ADDR(0x0000a7c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_A7C8;

L_A7C2:
    /* 0000a7c2   6  move.w #18,(fffff8a2,A4) */
    c->pc = RC_ADDR(0x0000a7c2u);
    rc_step(c, m, 16);
    t0 = 0x00000018u;
    rc_wr16(c, m, (c->a[4] - 0x75eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A7C8:
    /* 0000a7c8   2  bra 0000a74e */
    c->pc = RC_ADDR(0x0000a7c8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_A74E;

L_A7CA:
    /* 0000a7ca   4  tst.w (fffff8a2,A4) */
    c->pc = RC_ADDR(0x0000a7cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x75eu));
    rc_set_nzvc(c, t0, RC_W);

L_A7CE:
    /* 0000a7ce   2  beq 0000a7f4 */
    c->pc = RC_ADDR(0x0000a7ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_A7F4;

L_A7D0:
    /* 0000a7d0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000a7d0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_A7D4:
    /* 0000a7d4   4  jsr (000037c0) */
    c->pc = RC_ADDR(0x0000a7d4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a7d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000037c0u);
    return;

L_A7D8:
    /* 0000a7d8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a7d8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A7DA:
    /* 0000a7da   4  move.w (fffff8a2,A4),D0 */
    c->pc = RC_ADDR(0x0000a7dau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x75eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A7DE:
    /* 0000a7de   4  muls.w #3c,D0 */
    c->pc = RC_ADDR(0x0000a7deu);
    rc_step(c, m, 42);
    t0 = 0x0000003cu;
    rc_muls(c, 0, t0);

L_A7E2:
    /* 0000a7e2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000a7e2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A7E4:
    /* 0000a7e4   4  jsr (ffff8080,A4) */
    c->pc = RC_ADDR(0x0000a7e4u);
    rc_step(c, m, 18);
    /* vector 21 */
    rc_push32(c, m, RC_ADDR(0x0000a7e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b76u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00005db6u);
    return;

L_A7E8:
    /* 0000a7e8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000a7e8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_A7EA:
    /* 0000a7ea   4  move.w (fffff8a2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000a7eau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x75eu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A7EE:
    /* 0000a7ee   4  jsr (0000a8f2) */
    c->pc = RC_ADDR(0x0000a7eeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a7f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a8f2u);
    return;

L_A7F2:
    /* 0000a7f2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000a7f2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_A7F4:
    /* 0000a7f4   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a7f4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A7F6:
    /* 0000a7f6   2  rts */
    c->pc = RC_ADDR(0x0000a7f6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
