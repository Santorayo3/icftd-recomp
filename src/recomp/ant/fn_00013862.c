/* fn_00013862 - 168 byte(s), 49 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013862(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013862u): goto L_13862;
    case RC_ADDR(0x00013866u): goto L_13866;
    case RC_ADDR(0x0001386au): goto L_1386A;
    case RC_ADDR(0x0001386cu): goto L_1386C;
    case RC_ADDR(0x00013870u): goto L_13870;
    case RC_ADDR(0x00013872u): goto L_13872;
    case RC_ADDR(0x00013876u): goto L_13876;
    case RC_ADDR(0x00013878u): goto L_13878;
    case RC_ADDR(0x0001387cu): goto L_1387C;
    case RC_ADDR(0x0001387eu): goto L_1387E;
    case RC_ADDR(0x00013882u): goto L_13882;
    case RC_ADDR(0x00013886u): goto L_13886;
    case RC_ADDR(0x0001388cu): goto L_1388C;
    case RC_ADDR(0x00013890u): goto L_13890;
    case RC_ADDR(0x00013892u): goto L_13892;
    case RC_ADDR(0x00013896u): goto L_13896;
    case RC_ADDR(0x00013898u): goto L_13898;
    case RC_ADDR(0x0001389cu): goto L_1389C;
    case RC_ADDR(0x0001389eu): goto L_1389E;
    case RC_ADDR(0x000138a2u): goto L_138A2;
    case RC_ADDR(0x000138a4u): goto L_138A4;
    case RC_ADDR(0x000138a8u): goto L_138A8;
    case RC_ADDR(0x000138acu): goto L_138AC;
    case RC_ADDR(0x000138b2u): goto L_138B2;
    case RC_ADDR(0x000138b6u): goto L_138B6;
    case RC_ADDR(0x000138bau): goto L_138BA;
    case RC_ADDR(0x000138c0u): goto L_138C0;
    case RC_ADDR(0x000138c2u): goto L_138C2;
    case RC_ADDR(0x000138c6u): goto L_138C6;
    case RC_ADDR(0x000138cau): goto L_138CA;
    case RC_ADDR(0x000138d0u): goto L_138D0;
    case RC_ADDR(0x000138d4u): goto L_138D4;
    case RC_ADDR(0x000138d6u): goto L_138D6;
    case RC_ADDR(0x000138dau): goto L_138DA;
    case RC_ADDR(0x000138dcu): goto L_138DC;
    case RC_ADDR(0x000138deu): goto L_138DE;
    case RC_ADDR(0x000138e0u): goto L_138E0;
    case RC_ADDR(0x000138e4u): goto L_138E4;
    case RC_ADDR(0x000138e8u): goto L_138E8;
    case RC_ADDR(0x000138ecu): goto L_138EC;
    case RC_ADDR(0x000138f2u): goto L_138F2;
    case RC_ADDR(0x000138f6u): goto L_138F6;
    case RC_ADDR(0x000138f8u): goto L_138F8;
    case RC_ADDR(0x000138fcu): goto L_138FC;
    case RC_ADDR(0x000138feu): goto L_138FE;
    case RC_ADDR(0x00013900u): goto L_13900;
    case RC_ADDR(0x00013902u): goto L_13902;
    case RC_ADDR(0x00013906u): goto L_13906;
    case RC_ADDR(0x00013908u): goto L_13908;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13862:
    /* 00013862   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00013862u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_13866:
    /* 00013866   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00013866u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1386A:
    /* 0001386a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001386au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1386C:
    /* 0001386c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001386cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13870:
    /* 00013870   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00013870u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_13872:
    /* 00013872   4  lea (1802,A4),A0 */
    c->pc = RC_ADDR(0x00013872u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1802u);

L_13876:
    /* 00013876   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00013876u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_13878:
    /* 00013878   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00013878u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1387C:
    /* 0001387c   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x0001387cu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_1387E:
    /* 0001387e   4  lea (ffffface,A4),A1 */
    c->pc = RC_ADDR(0x0001387eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x532u);

L_13882:
    /* 00013882   4  movea.l (0,A1,D1.w),A6 */
    c->pc = RC_ADDR(0x00013882u);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_13886:
    /* 00013886   6  adda.l #190,A6 */
    c->pc = RC_ADDR(0x00013886u);
    rc_step(c, m, 16);
    t0 = 0x00000190u;
    c->a[6] += t0;

L_1388C:
    /* 0001388c   4  move.l A6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001388cu);
    rc_step(c, m, 18);
    t0 = rc_a_get(c, 6, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13890:
    /* 00013890   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00013890u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_13892:
    /* 00013892   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00013892u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13896:
    /* 00013896   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00013896u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_13898:
    /* 00013898   4  lea (1816,A4),A0 */
    c->pc = RC_ADDR(0x00013898u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1816u);

L_1389C:
    /* 0001389c   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x0001389cu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1389E:
    /* 0001389e   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x0001389eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_138A2:
    /* 000138a2   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x000138a2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_138A4:
    /* 000138a4   4  lea (fffffae2,A4),A1 */
    c->pc = RC_ADDR(0x000138a4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x51eu);

L_138A8:
    /* 000138a8   4  movea.l (0,A1,D1.w),A6 */
    c->pc = RC_ADDR(0x000138a8u);
    rc_step(c, m, 18);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_138AC:
    /* 000138ac   6  adda.l #190,A6 */
    c->pc = RC_ADDR(0x000138acu);
    rc_step(c, m, 16);
    t0 = 0x00000190u;
    c->a[6] += t0;

L_138B2:
    /* 000138b2   4  move.l A6,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000138b2u);
    rc_step(c, m, 18);
    t0 = rc_a_get(c, 6, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_138B6:
    /* 000138b6   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000138b6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_138BA:
    /* 000138ba   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000138bau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_138C0:
    /* 000138c0   2  bcs 0001386a */
    c->pc = RC_ADDR(0x000138c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_1386A; }

L_138C2:
    /* 000138c2   4  lea (1802,A4),A0 */
    c->pc = RC_ADDR(0x000138c2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1802u);

L_138C6:
    /* 000138c6   4  movea.l (17fe,A4),A1 */
    c->pc = RC_ADDR(0x000138c6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17feu));
    c->a[1] = t0;

L_138CA:
    /* 000138ca   6  adda.l #2a,A1 */
    c->pc = RC_ADDR(0x000138cau);
    rc_step(c, m, 16);
    t0 = 0x0000002au;
    c->a[1] += t0;

L_138D0:
    /* 000138d0   4  move.w #4,D1 */
    c->pc = RC_ADDR(0x000138d0u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_138D4:
    /* 000138d4   2  move.l (A0)+,D0 */
    c->pc = RC_ADDR(0x000138d4u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_138D6:
    /* 000138d6   4  move.w D0,(4,A1) */
    c->pc = RC_ADDR(0x000138d6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_138DA:
    /* 000138da   2  swap D0 */
    c->pc = RC_ADDR(0x000138dau);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_138DC:
    /* 000138dc   2  move.w D0,(A1) */
    c->pc = RC_ADDR(0x000138dcu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_W);

L_138DE:
    /* 000138de   2  addq.l #8,A1 */
    c->pc = RC_ADDR(0x000138deu);
    rc_step(c, m, 8);
    c->a[1] += 0x00000008u;

L_138E0:
    /* 000138e0   4  dbf D1,000138d4 */
    c->pc = RC_ADDR(0x000138e0u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_138D4; }
    }

L_138E4:
    /* 000138e4   4  lea (1832,A4),A0 */
    c->pc = RC_ADDR(0x000138e4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1832u);

L_138E8:
    /* 000138e8   4  movea.l (17fe,A4),A1 */
    c->pc = RC_ADDR(0x000138e8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17feu));
    c->a[1] = t0;

L_138EC:
    /* 000138ec   6  adda.l #e2,A1 */
    c->pc = RC_ADDR(0x000138ecu);
    rc_step(c, m, 16);
    t0 = 0x000000e2u;
    c->a[1] += t0;

L_138F2:
    /* 000138f2   4  move.w #4,D1 */
    c->pc = RC_ADDR(0x000138f2u);
    rc_step(c, m, 8);
    t0 = 0x00000004u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_138F6:
    /* 000138f6   2  move.l (A0)+,D0 */
    c->pc = RC_ADDR(0x000138f6u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_138F8:
    /* 000138f8   4  move.w D0,(4,A1) */
    c->pc = RC_ADDR(0x000138f8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_138FC:
    /* 000138fc   2  swap D0 */
    c->pc = RC_ADDR(0x000138fcu);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_138FE:
    /* 000138fe   2  move.w D0,(A1) */
    c->pc = RC_ADDR(0x000138feu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, c->a[1], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13900:
    /* 00013900   2  addq.l #8,A1 */
    c->pc = RC_ADDR(0x00013900u);
    rc_step(c, m, 8);
    c->a[1] += 0x00000008u;

L_13902:
    /* 00013902   4  dbf D1,000138f6 */
    c->pc = RC_ADDR(0x00013902u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 1, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 1, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_138F6; }
    }

L_13906:
    /* 00013906   2  unlk A5 */
    c->pc = RC_ADDR(0x00013906u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13908:
    /* 00013908   2  rts */
    c->pc = RC_ADDR(0x00013908u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
