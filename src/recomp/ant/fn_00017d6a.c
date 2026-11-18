/* fn_00017d6a - 178 byte(s), 50 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00017d6a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00017d6au): goto L_17D6A;
    case RC_ADDR(0x00017d6eu): goto L_17D6E;
    case RC_ADDR(0x00017d72u): goto L_17D72;
    case RC_ADDR(0x00017d76u): goto L_17D76;
    case RC_ADDR(0x00017d78u): goto L_17D78;
    case RC_ADDR(0x00017d7cu): goto L_17D7C;
    case RC_ADDR(0x00017d80u): goto L_17D80;
    case RC_ADDR(0x00017d84u): goto L_17D84;
    case RC_ADDR(0x00017d86u): goto L_17D86;
    case RC_ADDR(0x00017d8au): goto L_17D8A;
    case RC_ADDR(0x00017d8eu): goto L_17D8E;
    case RC_ADDR(0x00017d90u): goto L_17D90;
    case RC_ADDR(0x00017d92u): goto L_17D92;
    case RC_ADDR(0x00017d96u): goto L_17D96;
    case RC_ADDR(0x00017d9au): goto L_17D9A;
    case RC_ADDR(0x00017d9cu): goto L_17D9C;
    case RC_ADDR(0x00017d9eu): goto L_17D9E;
    case RC_ADDR(0x00017da2u): goto L_17DA2;
    case RC_ADDR(0x00017da6u): goto L_17DA6;
    case RC_ADDR(0x00017dacu): goto L_17DAC;
    case RC_ADDR(0x00017db0u): goto L_17DB0;
    case RC_ADDR(0x00017db4u): goto L_17DB4;
    case RC_ADDR(0x00017db6u): goto L_17DB6;
    case RC_ADDR(0x00017dbau): goto L_17DBA;
    case RC_ADDR(0x00017dbcu): goto L_17DBC;
    case RC_ADDR(0x00017dbeu): goto L_17DBE;
    case RC_ADDR(0x00017dc2u): goto L_17DC2;
    case RC_ADDR(0x00017dc6u): goto L_17DC6;
    case RC_ADDR(0x00017dcau): goto L_17DCA;
    case RC_ADDR(0x00017dd0u): goto L_17DD0;
    case RC_ADDR(0x00017dd2u): goto L_17DD2;
    case RC_ADDR(0x00017dd6u): goto L_17DD6;
    case RC_ADDR(0x00017ddau): goto L_17DDA;
    case RC_ADDR(0x00017ddcu): goto L_17DDC;
    case RC_ADDR(0x00017ddeu): goto L_17DDE;
    case RC_ADDR(0x00017de2u): goto L_17DE2;
    case RC_ADDR(0x00017de6u): goto L_17DE6;
    case RC_ADDR(0x00017deau): goto L_17DEA;
    case RC_ADDR(0x00017deeu): goto L_17DEE;
    case RC_ADDR(0x00017df2u): goto L_17DF2;
    case RC_ADDR(0x00017df6u): goto L_17DF6;
    case RC_ADDR(0x00017dfau): goto L_17DFA;
    case RC_ADDR(0x00017e00u): goto L_17E00;
    case RC_ADDR(0x00017e06u): goto L_17E06;
    case RC_ADDR(0x00017e08u): goto L_17E08;
    case RC_ADDR(0x00017e0cu): goto L_17E0C;
    case RC_ADDR(0x00017e12u): goto L_17E12;
    case RC_ADDR(0x00017e14u): goto L_17E14;
    case RC_ADDR(0x00017e18u): goto L_17E18;
    case RC_ADDR(0x00017e1au): goto L_17E1A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_17D6A:
    /* 00017d6a   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00017d6au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_17D6E:
    /* 00017d6e   4  pea (00017e1c) */
    c->pc = RC_ADDR(0x00017d6eu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00017e1cu));

L_17D72:
    /* 00017d72   4  jsr (00018400) */
    c->pc = RC_ADDR(0x00017d72u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017d76u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018400u);
    return;

L_17D76:
    /* 00017d76   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00017d76u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_17D78:
    /* 00017d78   4  move.l D0,(1cc0,A4) */
    c->pc = RC_ADDR(0x00017d78u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1cc0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17D7C:
    /* 00017d7c   4  pea (00017e21) */
    c->pc = RC_ADDR(0x00017d7cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00017e21u));

L_17D80:
    /* 00017d80   4  jsr (00018400) */
    c->pc = RC_ADDR(0x00017d80u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00017d84u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018400u);
    return;

L_17D84:
    /* 00017d84   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00017d84u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_17D86:
    /* 00017d86   4  move.l D0,(1cc4,A4) */
    c->pc = RC_ADDR(0x00017d86u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1cc4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17D8A:
    /* 00017d8a   4  movea.l (1cc0,A4),A0 */
    c->pc = RC_ADDR(0x00017d8au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1cc0u));
    c->a[0] = t0;

L_17D8E:
    /* 00017d8e   2  move.w (A0),D0 */
    c->pc = RC_ADDR(0x00017d8eu);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D90:
    /* 00017d90   2  addq.w #8,D0 */
    c->pc = RC_ADDR(0x00017d90u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_17D92:
    /* 00017d92   4  movea.l (1cc0,A4),A0 */
    c->pc = RC_ADDR(0x00017d92u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1cc0u));
    c->a[0] = t0;

L_17D96:
    /* 00017d96   4  mulu.w (2,A0),D0 */
    c->pc = RC_ADDR(0x00017d96u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_mulu(c, 0, t0);

L_17D9A:
    /* 00017d9a   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00017d9au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_17D9C:
    /* 00017d9c   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00017d9cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17D9E:
    /* 00017d9e   4  move.l D1,(1cc8,A4) */
    c->pc = RC_ADDR(0x00017d9eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1cc8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17DA2:
    /* 00017da2   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00017da2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17DA6:
    /* 00017da6   6  pea (00010002).l */
    c->pc = RC_ADDR(0x00017da6u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_17DAC:
    /* 00017dac   4  move.l (1cc8,A4),-(A7) */
    c->pc = RC_ADDR(0x00017dacu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1cc8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17DB0:
    /* 00017db0   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00017db0u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00017db4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_17DB4:
    /* 00017db4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00017db4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_17DB6:
    /* 00017db6   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00017db6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_17DBA:
    /* 00017dba   2  ext.l D1 */
    c->pc = RC_ADDR(0x00017dbau);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_17DBC:
    /* 00017dbc   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00017dbcu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_17DBE:
    /* 00017dbe   4  lea (1832,A4),A0 */
    c->pc = RC_ADDR(0x00017dbeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1832u);

L_17DC2:
    /* 00017dc2   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00017dc2u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_17DC6:
    /* 00017dc6   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00017dc6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17DCA:
    /* 00017dca   6  cmpi.w #5,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00017dcau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_17DD0:
    /* 00017dd0   2  blt 00017da6 */
    c->pc = RC_ADDR(0x00017dd0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_17DA6; }

L_17DD2:
    /* 00017dd2   4  pea (1832,A4) */
    c->pc = RC_ADDR(0x00017dd2u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x1832u));

L_17DD6:
    /* 00017dd6   4  move.l (1cc0,A4),-(A7) */
    c->pc = RC_ADDR(0x00017dd6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_17DDA:
    /* 00017dda   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00017ddau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17DDC:
    /* 00017ddc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00017ddcu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17DDE:
    /* 00017dde   4  jsr (ffff8170,A4) */
    c->pc = RC_ADDR(0x00017ddeu);
    rc_step(c, m, 18);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x00017de2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c66u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012986u);
    return;

L_17DE2:
    /* 00017de2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00017de2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_17DE6:
    /* 00017de6   4  clr.w (1cd6,A4) */
    c->pc = RC_ADDR(0x00017de6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cd6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17DEA:
    /* 00017dea   4  clr.w (1cd4,A4) */
    c->pc = RC_ADDR(0x00017deau);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cd4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17DEE:
    /* 00017dee   4  clr.w (1cd0,A4) */
    c->pc = RC_ADDR(0x00017deeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cd0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17DF2:
    /* 00017df2   4  clr.w (1ccc,A4) */
    c->pc = RC_ADDR(0x00017df2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cccu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17DF6:
    /* 00017df6   4  clr.w (1cce,A4) */
    c->pc = RC_ADDR(0x00017df6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1cceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_17DFA:
    /* 00017dfa   6  move.w #2,(1cd2,A4) */
    c->pc = RC_ADDR(0x00017dfau);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x1cd2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_17E00:
    /* 00017e00   6  btst #0,(14e5,A4) */
    c->pc = RC_ADDR(0x00017e00u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x14e5u);
    t4 = 0x00000000u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_17E06:
    /* 00017e06   2  beq 00017e0c */
    c->pc = RC_ADDR(0x00017e06u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17E0C;

L_17E08:
    /* 00017e08   4  addq.w #1,(1cd2,A4) */
    c->pc = RC_ADDR(0x00017e08u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1cd2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17E0C:
    /* 00017e0c   6  btst #3,(14e5,A4) */
    c->pc = RC_ADDR(0x00017e0cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x14e5u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_17E12:
    /* 00017e12   2  beq 00017e18 */
    c->pc = RC_ADDR(0x00017e12u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_17E18;

L_17E14:
    /* 00017e14   4  addq.w #1,(1cd2,A4) */
    c->pc = RC_ADDR(0x00017e14u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1cd2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_17E18:
    /* 00017e18   2  unlk A5 */
    c->pc = RC_ADDR(0x00017e18u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_17E1A:
    /* 00017e1a   2  rts */
    c->pc = RC_ADDR(0x00017e1au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
