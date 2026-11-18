/* fn_00018486 - 136 byte(s), 42 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018486(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00018486u): goto L_18486;
    case RC_ADDR(0x0001848au): goto L_1848A;
    case RC_ADDR(0x0001848eu): goto L_1848E;
    case RC_ADDR(0x00018492u): goto L_18492;
    case RC_ADDR(0x00018496u): goto L_18496;
    case RC_ADDR(0x0001849cu): goto L_1849C;
    case RC_ADDR(0x0001849eu): goto L_1849E;
    case RC_ADDR(0x000184a2u): goto L_184A2;
    case RC_ADDR(0x000184a6u): goto L_184A6;
    case RC_ADDR(0x000184a8u): goto L_184A8;
    case RC_ADDR(0x000184aau): goto L_184AA;
    case RC_ADDR(0x000184aeu): goto L_184AE;
    case RC_ADDR(0x000184b0u): goto L_184B0;
    case RC_ADDR(0x000184b4u): goto L_184B4;
    case RC_ADDR(0x000184b6u): goto L_184B6;
    case RC_ADDR(0x000184bau): goto L_184BA;
    case RC_ADDR(0x000184beu): goto L_184BE;
    case RC_ADDR(0x000184c2u): goto L_184C2;
    case RC_ADDR(0x000184c4u): goto L_184C4;
    case RC_ADDR(0x000184c6u): goto L_184C6;
    case RC_ADDR(0x000184cau): goto L_184CA;
    case RC_ADDR(0x000184ccu): goto L_184CC;
    case RC_ADDR(0x000184d0u): goto L_184D0;
    case RC_ADDR(0x000184d4u): goto L_184D4;
    case RC_ADDR(0x000184d8u): goto L_184D8;
    case RC_ADDR(0x000184dcu): goto L_184DC;
    case RC_ADDR(0x000184deu): goto L_184DE;
    case RC_ADDR(0x000184e0u): goto L_184E0;
    case RC_ADDR(0x000184e4u): goto L_184E4;
    case RC_ADDR(0x000184e6u): goto L_184E6;
    case RC_ADDR(0x000184eau): goto L_184EA;
    case RC_ADDR(0x000184ecu): goto L_184EC;
    case RC_ADDR(0x000184f0u): goto L_184F0;
    case RC_ADDR(0x000184f4u): goto L_184F4;
    case RC_ADDR(0x000184f8u): goto L_184F8;
    case RC_ADDR(0x000184fau): goto L_184FA;
    case RC_ADDR(0x000184fcu): goto L_184FC;
    case RC_ADDR(0x000184feu): goto L_184FE;
    case RC_ADDR(0x00018502u): goto L_18502;
    case RC_ADDR(0x00018508u): goto L_18508;
    case RC_ADDR(0x0001850au): goto L_1850A;
    case RC_ADDR(0x0001850cu): goto L_1850C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18486:
    /* 00018486   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x00018486u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1848A:
    /* 0001848a   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x0001848au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1848E:
    /* 0001848e   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001848eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18492:
    /* 00018492   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00018492u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_18496:
    /* 00018496   6  cmpi.w #60,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00018496u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000060u);

L_1849C:
    /* 0001849c   2  bcc 0001850a */
    c->pc = RC_ADDR(0x0001849cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1850A;

L_1849E:
    /* 0001849e   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001849eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_184A2:
    /* 000184a2   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000184a2u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_184A6:
    /* 000184a6   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000184a6u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_184A8:
    /* 000184a8   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x000184a8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_184AA:
    /* 000184aa   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000184aau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_184AE:
    /* 000184ae   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000184aeu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_184B0:
    /* 000184b0   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000184b0u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_184B4:
    /* 000184b4   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x000184b4u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_184B6:
    /* 000184b6   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000184b6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_184BA:
    /* 000184ba   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000184bau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_184BE:
    /* 000184be   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000184beu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_184C2:
    /* 000184c2   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000184c2u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_184C4:
    /* 000184c4   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x000184c4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_184C6:
    /* 000184c6   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000184c6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_184CA:
    /* 000184ca   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000184cau);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_184CC:
    /* 000184cc   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000184ccu);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_184D0:
    /* 000184d0   4  or.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000184d0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_184D4:
    /* 000184d4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000184d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_184D8:
    /* 000184d8   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x000184d8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_184DC:
    /* 000184dc   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000184dcu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_184DE:
    /* 000184de   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x000184deu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_184E0:
    /* 000184e0   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000184e0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_184E4:
    /* 000184e4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000184e4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_184E6:
    /* 000184e6   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000184e6u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_184EA:
    /* 000184ea   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x000184eau);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_184EC:
    /* 000184ec   4  or.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000184ecu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 | rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_184F0:
    /* 000184f0   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000184f0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_184F4:
    /* 000184f4   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x000184f4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_184F8:
    /* 000184f8   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x000184f8u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_184FA:
    /* 000184fa   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x000184fau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_184FC:
    /* 000184fc   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000184fcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_184FE:
    /* 000184fe   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x000184feu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_18502:
    /* 00018502   6  move.w (fffffffa,A5),(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00018502u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18508:
    /* 00018508   2  bra 00018496 */
    c->pc = RC_ADDR(0x00018508u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_18496;

L_1850A:
    /* 0001850a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001850au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1850C:
    /* 0001850c   2  rts */
    c->pc = RC_ADDR(0x0001850cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
