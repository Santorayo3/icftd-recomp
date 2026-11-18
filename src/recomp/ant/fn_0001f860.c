/* fn_0001f860 - 184 byte(s), 52 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f860(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f860u): goto L_1F860;
    case RC_ADDR(0x0001f864u): goto L_1F864;
    case RC_ADDR(0x0001f86au): goto L_1F86A;
    case RC_ADDR(0x0001f870u): goto L_1F870;
    case RC_ADDR(0x0001f874u): goto L_1F874;
    case RC_ADDR(0x0001f876u): goto L_1F876;
    case RC_ADDR(0x0001f87au): goto L_1F87A;
    case RC_ADDR(0x0001f87cu): goto L_1F87C;
    case RC_ADDR(0x0001f880u): goto L_1F880;
    case RC_ADDR(0x0001f884u): goto L_1F884;
    case RC_ADDR(0x0001f888u): goto L_1F888;
    case RC_ADDR(0x0001f88au): goto L_1F88A;
    case RC_ADDR(0x0001f88eu): goto L_1F88E;
    case RC_ADDR(0x0001f892u): goto L_1F892;
    case RC_ADDR(0x0001f894u): goto L_1F894;
    case RC_ADDR(0x0001f896u): goto L_1F896;
    case RC_ADDR(0x0001f89au): goto L_1F89A;
    case RC_ADDR(0x0001f89eu): goto L_1F89E;
    case RC_ADDR(0x0001f8a0u): goto L_1F8A0;
    case RC_ADDR(0x0001f8a2u): goto L_1F8A2;
    case RC_ADDR(0x0001f8a6u): goto L_1F8A6;
    case RC_ADDR(0x0001f8acu): goto L_1F8AC;
    case RC_ADDR(0x0001f8b0u): goto L_1F8B0;
    case RC_ADDR(0x0001f8b6u): goto L_1F8B6;
    case RC_ADDR(0x0001f8b8u): goto L_1F8B8;
    case RC_ADDR(0x0001f8bau): goto L_1F8BA;
    case RC_ADDR(0x0001f8beu): goto L_1F8BE;
    case RC_ADDR(0x0001f8c2u): goto L_1F8C2;
    case RC_ADDR(0x0001f8c4u): goto L_1F8C4;
    case RC_ADDR(0x0001f8c6u): goto L_1F8C6;
    case RC_ADDR(0x0001f8cau): goto L_1F8CA;
    case RC_ADDR(0x0001f8ceu): goto L_1F8CE;
    case RC_ADDR(0x0001f8d0u): goto L_1F8D0;
    case RC_ADDR(0x0001f8d2u): goto L_1F8D2;
    case RC_ADDR(0x0001f8d6u): goto L_1F8D6;
    case RC_ADDR(0x0001f8dcu): goto L_1F8DC;
    case RC_ADDR(0x0001f8e0u): goto L_1F8E0;
    case RC_ADDR(0x0001f8e6u): goto L_1F8E6;
    case RC_ADDR(0x0001f8e8u): goto L_1F8E8;
    case RC_ADDR(0x0001f8ecu): goto L_1F8EC;
    case RC_ADDR(0x0001f8f0u): goto L_1F8F0;
    case RC_ADDR(0x0001f8f4u): goto L_1F8F4;
    case RC_ADDR(0x0001f8f6u): goto L_1F8F6;
    case RC_ADDR(0x0001f8fau): goto L_1F8FA;
    case RC_ADDR(0x0001f8fcu): goto L_1F8FC;
    case RC_ADDR(0x0001f900u): goto L_1F900;
    case RC_ADDR(0x0001f902u): goto L_1F902;
    case RC_ADDR(0x0001f906u): goto L_1F906;
    case RC_ADDR(0x0001f90au): goto L_1F90A;
    case RC_ADDR(0x0001f90eu): goto L_1F90E;
    case RC_ADDR(0x0001f914u): goto L_1F914;
    case RC_ADDR(0x0001f916u): goto L_1F916;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F860:
    /* 0001f860   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001f860u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1F864:
    /* 0001f864   6  move.w (32f2,A4),(32f0,A4) */
    c->pc = RC_ADDR(0x0001f864u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x32f2u));
    rc_wr16(c, m, (c->a[4] + 0x32f0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F86A:
    /* 0001f86a   6  move.w (91c,A4),(924,A4) */
    c->pc = RC_ADDR(0x0001f86au);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x91cu));
    rc_wr16(c, m, (c->a[4] + 0x924u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F870:
    /* 0001f870   4  tst.w (30ea,A4) */
    c->pc = RC_ADDR(0x0001f870u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30eau));
    rc_set_nzvc(c, t0, RC_W);

L_1F874:
    /* 0001f874   2  bne 0001f87c */
    c->pc = RC_ADDR(0x0001f874u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F87C;

L_1F876:
    /* 0001f876   4  tst.w (ffffd2a2,A4) */
    c->pc = RC_ADDR(0x0001f876u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d5eu));
    rc_set_nzvc(c, t0, RC_W);

L_1F87A:
    /* 0001f87a   2  beq 0001f8f6 */
    c->pc = RC_ADDR(0x0001f87au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F8F6;

L_1F87C:
    /* 0001f87c   4  clr.w (ffffd2a2,A4) */
    c->pc = RC_ADDR(0x0001f87cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d5eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F880:
    /* 0001f880   4  clr.w (30ea,A4) */
    c->pc = RC_ADDR(0x0001f880u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x30eau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F884:
    /* 0001f884   4  tst.w (ffffd2a4,A4) */
    c->pc = RC_ADDR(0x0001f884u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d5cu));
    rc_set_nzvc(c, t0, RC_W);

L_1F888:
    /* 0001f888   2  beq 0001f8ba */
    c->pc = RC_ADDR(0x0001f888u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F8BA;

L_1F88A:
    /* 0001f88a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f88au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F88E:
    /* 0001f88e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001f88eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F892:
    /* 0001f892   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f892u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1F894:
    /* 0001f894   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001f894u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1F896:
    /* 0001f896   4  lea (85c,A4),A0 */
    c->pc = RC_ADDR(0x0001f896u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x85cu);

L_1F89A:
    /* 0001f89a   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001f89au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F89E:
    /* 0001f89e   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001f89eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1F8A0:
    /* 0001f8a0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001f8a0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1F8A2:
    /* 0001f8a2   4  lea (7f6,A4),A1 */
    c->pc = RC_ADDR(0x0001f8a2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x7f6u);

L_1F8A6:
    /* 0001f8a6   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001f8a6u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F8AC:
    /* 0001f8ac   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f8acu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1F8B0:
    /* 0001f8b0   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f8b0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_1F8B6:
    /* 0001f8b6   2  blt 0001f88e */
    c->pc = RC_ADDR(0x0001f8b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1F88E; }

L_1F8B8:
    /* 0001f8b8   2  bra 0001f8e8 */
    c->pc = RC_ADDR(0x0001f8b8u);
    rc_step(c, m, 10);
    goto L_1F8E8;

L_1F8BA:
    /* 0001f8ba   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f8bau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F8BE:
    /* 0001f8be   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001f8beu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F8C2:
    /* 0001f8c2   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001f8c2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1F8C4:
    /* 0001f8c4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001f8c4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1F8C6:
    /* 0001f8c6   4  lea (8dc,A4),A0 */
    c->pc = RC_ADDR(0x0001f8c6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8dcu);

L_1F8CA:
    /* 0001f8ca   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001f8cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F8CE:
    /* 0001f8ce   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001f8ceu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1F8D0:
    /* 0001f8d0   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001f8d0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1F8D2:
    /* 0001f8d2   4  lea (7f6,A4),A1 */
    c->pc = RC_ADDR(0x0001f8d2u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x7f6u);

L_1F8D6:
    /* 0001f8d6   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001f8d6u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F8DC:
    /* 0001f8dc   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f8dcu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1F8E0:
    /* 0001f8e0   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f8e0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_1F8E6:
    /* 0001f8e6   2  blt 0001f8be */
    c->pc = RC_ADDR(0x0001f8e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1F8BE; }

L_1F8E8:
    /* 0001f8e8   4  pea (7f6,A4) */
    c->pc = RC_ADDR(0x0001f8e8u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x7f6u));

L_1F8EC:
    /* 0001f8ec   4  move.l (ffffd294,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f8ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d6cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F8F0:
    /* 0001f8f0   4  jsr (0001fa64) */
    c->pc = RC_ADDR(0x0001f8f0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f8f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fa64u);
    return;

L_1F8F4:
    /* 0001f8f4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f8f4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F8F6:
    /* 0001f8f6   4  tst.w (91e,A4) */
    c->pc = RC_ADDR(0x0001f8f6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x91eu));
    rc_set_nzvc(c, t0, RC_W);

L_1F8FA:
    /* 0001f8fa   2  beq 0001f914 */
    c->pc = RC_ADDR(0x0001f8fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F914;

L_1F8FC:
    /* 0001f8fc   4  tst.w (924,A4) */
    c->pc = RC_ADDR(0x0001f8fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x924u));
    rc_set_nzvc(c, t0, RC_W);

L_1F900:
    /* 0001f900   2  beq 0001f914 */
    c->pc = RC_ADDR(0x0001f900u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F914;

L_1F902:
    /* 0001f902   4  clr.w (91e,A4) */
    c->pc = RC_ADDR(0x0001f902u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x91eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F906:
    /* 0001f906   4  clr.w (924,A4) */
    c->pc = RC_ADDR(0x0001f906u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x924u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F90A:
    /* 0001f90a   4  jsr (0001f990) */
    c->pc = RC_ADDR(0x0001f90au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f90eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f990u);
    return;

L_1F90E:
    /* 0001f90e   6  move.w #1,(924,A4) */
    c->pc = RC_ADDR(0x0001f90eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x924u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F914:
    /* 0001f914   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f914u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F916:
    /* 0001f916   2  rts */
    c->pc = RC_ADDR(0x0001f916u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
