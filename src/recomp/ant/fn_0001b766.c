/* fn_0001b766 - 418 byte(s), 113 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001b766(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001b766u): goto L_1B766;
    case RC_ADDR(0x0001b76au): goto L_1B76A;
    case RC_ADDR(0x0001b76eu): goto L_1B76E;
    case RC_ADDR(0x0001b772u): goto L_1B772;
    case RC_ADDR(0x0001b774u): goto L_1B774;
    case RC_ADDR(0x0001b778u): goto L_1B778;
    case RC_ADDR(0x0001b77cu): goto L_1B77C;
    case RC_ADDR(0x0001b77eu): goto L_1B77E;
    case RC_ADDR(0x0001b782u): goto L_1B782;
    case RC_ADDR(0x0001b788u): goto L_1B788;
    case RC_ADDR(0x0001b78cu): goto L_1B78C;
    case RC_ADDR(0x0001b78eu): goto L_1B78E;
    case RC_ADDR(0x0001b792u): goto L_1B792;
    case RC_ADDR(0x0001b796u): goto L_1B796;
    case RC_ADDR(0x0001b798u): goto L_1B798;
    case RC_ADDR(0x0001b79cu): goto L_1B79C;
    case RC_ADDR(0x0001b7a2u): goto L_1B7A2;
    case RC_ADDR(0x0001b7a6u): goto L_1B7A6;
    case RC_ADDR(0x0001b7a8u): goto L_1B7A8;
    case RC_ADDR(0x0001b7acu): goto L_1B7AC;
    case RC_ADDR(0x0001b7b0u): goto L_1B7B0;
    case RC_ADDR(0x0001b7b2u): goto L_1B7B2;
    case RC_ADDR(0x0001b7b4u): goto L_1B7B4;
    case RC_ADDR(0x0001b7b8u): goto L_1B7B8;
    case RC_ADDR(0x0001b7bcu): goto L_1B7BC;
    case RC_ADDR(0x0001b7c0u): goto L_1B7C0;
    case RC_ADDR(0x0001b7c2u): goto L_1B7C2;
    case RC_ADDR(0x0001b7c6u): goto L_1B7C6;
    case RC_ADDR(0x0001b7cau): goto L_1B7CA;
    case RC_ADDR(0x0001b7ccu): goto L_1B7CC;
    case RC_ADDR(0x0001b7ceu): goto L_1B7CE;
    case RC_ADDR(0x0001b7d0u): goto L_1B7D0;
    case RC_ADDR(0x0001b7d4u): goto L_1B7D4;
    case RC_ADDR(0x0001b7d6u): goto L_1B7D6;
    case RC_ADDR(0x0001b7dau): goto L_1B7DA;
    case RC_ADDR(0x0001b7e0u): goto L_1B7E0;
    case RC_ADDR(0x0001b7e4u): goto L_1B7E4;
    case RC_ADDR(0x0001b7ecu): goto L_1B7EC;
    case RC_ADDR(0x0001b7eeu): goto L_1B7EE;
    case RC_ADDR(0x0001b7f4u): goto L_1B7F4;
    case RC_ADDR(0x0001b7fau): goto L_1B7FA;
    case RC_ADDR(0x0001b7feu): goto L_1B7FE;
    case RC_ADDR(0x0001b802u): goto L_1B802;
    case RC_ADDR(0x0001b806u): goto L_1B806;
    case RC_ADDR(0x0001b80au): goto L_1B80A;
    case RC_ADDR(0x0001b80cu): goto L_1B80C;
    case RC_ADDR(0x0001b810u): goto L_1B810;
    case RC_ADDR(0x0001b814u): goto L_1B814;
    case RC_ADDR(0x0001b816u): goto L_1B816;
    case RC_ADDR(0x0001b818u): goto L_1B818;
    case RC_ADDR(0x0001b81cu): goto L_1B81C;
    case RC_ADDR(0x0001b820u): goto L_1B820;
    case RC_ADDR(0x0001b824u): goto L_1B824;
    case RC_ADDR(0x0001b828u): goto L_1B828;
    case RC_ADDR(0x0001b82cu): goto L_1B82C;
    case RC_ADDR(0x0001b82eu): goto L_1B82E;
    case RC_ADDR(0x0001b832u): goto L_1B832;
    case RC_ADDR(0x0001b838u): goto L_1B838;
    case RC_ADDR(0x0001b83cu): goto L_1B83C;
    case RC_ADDR(0x0001b83eu): goto L_1B83E;
    case RC_ADDR(0x0001b842u): goto L_1B842;
    case RC_ADDR(0x0001b848u): goto L_1B848;
    case RC_ADDR(0x0001b84cu): goto L_1B84C;
    case RC_ADDR(0x0001b84eu): goto L_1B84E;
    case RC_ADDR(0x0001b852u): goto L_1B852;
    case RC_ADDR(0x0001b858u): goto L_1B858;
    case RC_ADDR(0x0001b85cu): goto L_1B85C;
    case RC_ADDR(0x0001b85eu): goto L_1B85E;
    case RC_ADDR(0x0001b860u): goto L_1B860;
    case RC_ADDR(0x0001b864u): goto L_1B864;
    case RC_ADDR(0x0001b868u): goto L_1B868;
    case RC_ADDR(0x0001b86au): goto L_1B86A;
    case RC_ADDR(0x0001b86eu): goto L_1B86E;
    case RC_ADDR(0x0001b874u): goto L_1B874;
    case RC_ADDR(0x0001b878u): goto L_1B878;
    case RC_ADDR(0x0001b87au): goto L_1B87A;
    case RC_ADDR(0x0001b87cu): goto L_1B87C;
    case RC_ADDR(0x0001b880u): goto L_1B880;
    case RC_ADDR(0x0001b884u): goto L_1B884;
    case RC_ADDR(0x0001b886u): goto L_1B886;
    case RC_ADDR(0x0001b88au): goto L_1B88A;
    case RC_ADDR(0x0001b890u): goto L_1B890;
    case RC_ADDR(0x0001b894u): goto L_1B894;
    case RC_ADDR(0x0001b896u): goto L_1B896;
    case RC_ADDR(0x0001b898u): goto L_1B898;
    case RC_ADDR(0x0001b89cu): goto L_1B89C;
    case RC_ADDR(0x0001b8a0u): goto L_1B8A0;
    case RC_ADDR(0x0001b8a2u): goto L_1B8A2;
    case RC_ADDR(0x0001b8a6u): goto L_1B8A6;
    case RC_ADDR(0x0001b8acu): goto L_1B8AC;
    case RC_ADDR(0x0001b8b0u): goto L_1B8B0;
    case RC_ADDR(0x0001b8b2u): goto L_1B8B2;
    case RC_ADDR(0x0001b8b4u): goto L_1B8B4;
    case RC_ADDR(0x0001b8b8u): goto L_1B8B8;
    case RC_ADDR(0x0001b8beu): goto L_1B8BE;
    case RC_ADDR(0x0001b8c2u): goto L_1B8C2;
    case RC_ADDR(0x0001b8c4u): goto L_1B8C4;
    case RC_ADDR(0x0001b8c6u): goto L_1B8C6;
    case RC_ADDR(0x0001b8cau): goto L_1B8CA;
    case RC_ADDR(0x0001b8d0u): goto L_1B8D0;
    case RC_ADDR(0x0001b8d4u): goto L_1B8D4;
    case RC_ADDR(0x0001b8d6u): goto L_1B8D6;
    case RC_ADDR(0x0001b8d8u): goto L_1B8D8;
    case RC_ADDR(0x0001b8dcu): goto L_1B8DC;
    case RC_ADDR(0x0001b8e2u): goto L_1B8E2;
    case RC_ADDR(0x0001b8e6u): goto L_1B8E6;
    case RC_ADDR(0x0001b8eeu): goto L_1B8EE;
    case RC_ADDR(0x0001b8f2u): goto L_1B8F2;
    case RC_ADDR(0x0001b8f6u): goto L_1B8F6;
    case RC_ADDR(0x0001b8feu): goto L_1B8FE;
    case RC_ADDR(0x0001b902u): goto L_1B902;
    case RC_ADDR(0x0001b904u): goto L_1B904;
    case RC_ADDR(0x0001b906u): goto L_1B906;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1B766:
    /* 0001b766   4  link.w A5,#fffffff0 */
    c->pc = RC_ADDR(0x0001b766u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x10u;

L_1B76A:
    /* 0001b76a   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b76au);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1B76E:
    /* 0001b76e   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b76eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B772:
    /* 0001b772   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b772u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B774:
    /* 0001b774   4  lea (2710,A4),A0 */
    c->pc = RC_ADDR(0x0001b774u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2710u);

L_1B778:
    /* 0001b778   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b778u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B77C:
    /* 0001b77c   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b77cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B77E:
    /* 0001b77e   4  lea (13a4,A4),A1 */
    c->pc = RC_ADDR(0x0001b77eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x13a4u);

L_1B782:
    /* 0001b782   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b782u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B788:
    /* 0001b788   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b788u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B78C:
    /* 0001b78c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b78cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B78E:
    /* 0001b78e   4  lea (2728,A4),A0 */
    c->pc = RC_ADDR(0x0001b78eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2728u);

L_1B792:
    /* 0001b792   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b792u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B796:
    /* 0001b796   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b796u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B798:
    /* 0001b798   4  lea (13be,A4),A1 */
    c->pc = RC_ADDR(0x0001b798u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x13beu);

L_1B79C:
    /* 0001b79c   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b79cu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B7A2:
    /* 0001b7a2   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b7a2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7A6:
    /* 0001b7a6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b7a6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B7A8:
    /* 0001b7a8   4  lea (26f8,A4),A0 */
    c->pc = RC_ADDR(0x0001b7a8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x26f8u);

L_1B7AC:
    /* 0001b7ac   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001b7acu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B7B0:
    /* 0001b7b0   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001b7b0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1B7B2:
    /* 0001b7b2   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0001b7b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_1B7B4:
    /* 0001b7b4   4  lea (ffffce3c,A4),A0 */
    c->pc = RC_ADDR(0x0001b7b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x31c4u);

L_1B7B8:
    /* 0001b7b8   4  move.l (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0001b7b8u);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7BC:
    /* 0001b7bc   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b7bcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7C0:
    /* 0001b7c0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b7c0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B7C2:
    /* 0001b7c2   4  lea (2890,A4),A0 */
    c->pc = RC_ADDR(0x0001b7c2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2890u);

L_1B7C6:
    /* 0001b7c6   4  move.w (0,A0,D1.w),D2 */
    c->pc = RC_ADDR(0x0001b7c6u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B7CA:
    /* 0001b7ca   2  ext.l D2 */
    c->pc = RC_ADDR(0x0001b7cau);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_1B7CC:
    /* 0001b7cc   2  asl.l #2,D2 */
    c->pc = RC_ADDR(0x0001b7ccu);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 2, RC_L), RC_L));

L_1B7CE:
    /* 0001b7ce   2  movea.l D2,A0 */
    c->pc = RC_ADDR(0x0001b7ceu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_L);
    c->a[0] = t0;

L_1B7D0:
    /* 0001b7d0   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b7d0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7D4:
    /* 0001b7d4   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0001b7d4u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_1B7D6:
    /* 0001b7d6   4  lea (13d8,A4),A1 */
    c->pc = RC_ADDR(0x0001b7d6u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x13d8u);

L_1B7DA:
    /* 0001b7da   6  move.l (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b7dau);
    rc_step(c, m, 32);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B7E0:
    /* 0001b7e0   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b7e0u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1B7E4:
    /* 0001b7e4   8  cmpi.l #c,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b7e4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x0000000cu);

L_1B7EC:
    /* 0001b7ec   2  blt 0001b76e */
    c->pc = RC_ADDR(0x0001b7ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B76E; }

L_1B7EE:
    /* 0001b7ee   6  move.w (e76,A4),(13bc,A4) */
    c->pc = RC_ADDR(0x0001b7eeu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe76u));
    rc_wr16(c, m, (c->a[4] + 0x13bcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B7F4:
    /* 0001b7f4   6  move.w (e78,A4),(13d6,A4) */
    c->pc = RC_ADDR(0x0001b7f4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_wr16(c, m, (c->a[4] + 0x13d6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B7FA:
    /* 0001b7fa   4  clr.l (1408,A4) */
    c->pc = RC_ADDR(0x0001b7fau);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x1408u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1B7FE:
    /* 0001b7fe   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0001b7feu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1B802:
    /* 0001b802   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b802u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1B806:
    /* 0001b806   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b806u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B80A:
    /* 0001b80a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b80au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B80C:
    /* 0001b80c   4  lea (13be,A4),A0 */
    c->pc = RC_ADDR(0x0001b80cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13beu);

L_1B810:
    /* 0001b810   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b810u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B814:
    /* 0001b814   2  addq.l #1,D1 */
    c->pc = RC_ADDR(0x0001b814u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_1B816:
    /* 0001b816   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b816u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B818:
    /* 0001b818   4  lea (13be,A4),A1 */
    c->pc = RC_ADDR(0x0001b818u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x13beu);

L_1B81C:
    /* 0001b81c   4  move.w (0,A0,D0.w),D2 */
    c->pc = RC_ADDR(0x0001b81cu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B820:
    /* 0001b820   4  cmp.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x0001b820u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 2, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1B824:
    /* 0001b824   4  ble 0001b8e2 */
    c->pc = RC_ADDR(0x0001b824u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1B8E2;

L_1B828:
    /* 0001b828   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b828u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B82C:
    /* 0001b82c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b82cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B82E:
    /* 0001b82e   4  lea (13a4,A4),A0 */
    c->pc = RC_ADDR(0x0001b82eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13a4u);

L_1B832:
    /* 0001b832   6  move.w (0,A0,D0.w),(fffffff6,A5) */
    c->pc = RC_ADDR(0x0001b832u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B838:
    /* 0001b838   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b838u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B83C:
    /* 0001b83c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b83cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B83E:
    /* 0001b83e   4  lea (13be,A4),A0 */
    c->pc = RC_ADDR(0x0001b83eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13beu);

L_1B842:
    /* 0001b842   6  move.w (0,A0,D0.w),(fffffff4,A5) */
    c->pc = RC_ADDR(0x0001b842u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B848:
    /* 0001b848   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b848u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B84C:
    /* 0001b84c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b84cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1B84E:
    /* 0001b84e   4  lea (13d8,A4),A0 */
    c->pc = RC_ADDR(0x0001b84eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13d8u);

L_1B852:
    /* 0001b852   6  move.l (0,A0,D0.w),(fffffff0,A5) */
    c->pc = RC_ADDR(0x0001b852u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B858:
    /* 0001b858   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b858u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B85C:
    /* 0001b85c   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0001b85cu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B85E:
    /* 0001b85e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b85eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B860:
    /* 0001b860   4  lea (13a4,A4),A0 */
    c->pc = RC_ADDR(0x0001b860u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13a4u);

L_1B864:
    /* 0001b864   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b864u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B868:
    /* 0001b868   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b868u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B86A:
    /* 0001b86a   4  lea (13a4,A4),A1 */
    c->pc = RC_ADDR(0x0001b86au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x13a4u);

L_1B86E:
    /* 0001b86e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b86eu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B874:
    /* 0001b874   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b874u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B878:
    /* 0001b878   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0001b878u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B87A:
    /* 0001b87a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b87au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B87C:
    /* 0001b87c   4  lea (13be,A4),A0 */
    c->pc = RC_ADDR(0x0001b87cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13beu);

L_1B880:
    /* 0001b880   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b880u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B884:
    /* 0001b884   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001b884u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1B886:
    /* 0001b886   4  lea (13be,A4),A1 */
    c->pc = RC_ADDR(0x0001b886u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x13beu);

L_1B88A:
    /* 0001b88a   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b88au);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B890:
    /* 0001b890   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b890u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B894:
    /* 0001b894   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0001b894u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B896:
    /* 0001b896   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b896u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1B898:
    /* 0001b898   4  lea (13d8,A4),A0 */
    c->pc = RC_ADDR(0x0001b898u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13d8u);

L_1B89C:
    /* 0001b89c   4  move.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x0001b89cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B8A0:
    /* 0001b8a0   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0001b8a0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_1B8A2:
    /* 0001b8a2   4  lea (13d8,A4),A1 */
    c->pc = RC_ADDR(0x0001b8a2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x13d8u);

L_1B8A6:
    /* 0001b8a6   6  move.l (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001b8a6u);
    rc_step(c, m, 32);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B8AC:
    /* 0001b8ac   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b8acu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B8B0:
    /* 0001b8b0   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0001b8b0u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B8B2:
    /* 0001b8b2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b8b2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B8B4:
    /* 0001b8b4   4  lea (13a4,A4),A0 */
    c->pc = RC_ADDR(0x0001b8b4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13a4u);

L_1B8B8:
    /* 0001b8b8   6  move.w (fffffff6,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b8b8u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B8BE:
    /* 0001b8be   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b8beu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B8C2:
    /* 0001b8c2   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0001b8c2u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B8C4:
    /* 0001b8c4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001b8c4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B8C6:
    /* 0001b8c6   4  lea (13be,A4),A0 */
    c->pc = RC_ADDR(0x0001b8c6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13beu);

L_1B8CA:
    /* 0001b8ca   6  move.w (fffffff4,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b8cau);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B8D0:
    /* 0001b8d0   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x0001b8d0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B8D4:
    /* 0001b8d4   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x0001b8d4u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1B8D6:
    /* 0001b8d6   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001b8d6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1B8D8:
    /* 0001b8d8   4  lea (13d8,A4),A0 */
    c->pc = RC_ADDR(0x0001b8d8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x13d8u);

L_1B8DC:
    /* 0001b8dc   6  move.l (fffffff0,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001b8dcu);
    rc_step(c, m, 30);
    t0 = rc_rd32(c, m, (c->a[5] - 0x10u));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1B8E2:
    /* 0001b8e2   4  addq.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b8e2u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1B8E6:
    /* 0001b8e6   8  cmpi.l #c,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001b8e6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x0000000cu);

L_1B8EE:
    /* 0001b8ee   4  blt 0001b806 */
    c->pc = RC_ADDR(0x0001b8eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B806; }

L_1B8F2:
    /* 0001b8f2   4  addq.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001b8f2u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1B8F6:
    /* 0001b8f6   8  cmpi.l #d,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001b8f6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x0000000du);

L_1B8FE:
    /* 0001b8fe   4  blt 0001b802 */
    c->pc = RC_ADDR(0x0001b8feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B802; }

L_1B902:
    /* 0001b902   2  bsr 0001b908 */
    c->pc = RC_ADDR(0x0001b902u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001b904u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001b908u);
    return;

L_1B904:
    /* 0001b904   2  unlk A5 */
    c->pc = RC_ADDR(0x0001b904u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B906:
    /* 0001b906   2  rts */
    c->pc = RC_ADDR(0x0001b906u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
