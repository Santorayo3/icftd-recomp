/* fn_00012d68 - 276 byte(s), 75 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00012d68(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012d68u): goto L_12D68;
    case RC_ADDR(0x00012d6cu): goto L_12D6C;
    case RC_ADDR(0x00012d70u): goto L_12D70;
    case RC_ADDR(0x00012d78u): goto L_12D78;
    case RC_ADDR(0x00012d7eu): goto L_12D7E;
    case RC_ADDR(0x00012d86u): goto L_12D86;
    case RC_ADDR(0x00012d8eu): goto L_12D8E;
    case RC_ADDR(0x00012d92u): goto L_12D92;
    case RC_ADDR(0x00012d96u): goto L_12D96;
    case RC_ADDR(0x00012d9cu): goto L_12D9C;
    case RC_ADDR(0x00012da0u): goto L_12DA0;
    case RC_ADDR(0x00012da4u): goto L_12DA4;
    case RC_ADDR(0x00012da8u): goto L_12DA8;
    case RC_ADDR(0x00012daau): goto L_12DAA;
    case RC_ADDR(0x00012dacu): goto L_12DAC;
    case RC_ADDR(0x00012db0u): goto L_12DB0;
    case RC_ADDR(0x00012db4u): goto L_12DB4;
    case RC_ADDR(0x00012db8u): goto L_12DB8;
    case RC_ADDR(0x00012dbcu): goto L_12DBC;
    case RC_ADDR(0x00012dbeu): goto L_12DBE;
    case RC_ADDR(0x00012dc0u): goto L_12DC0;
    case RC_ADDR(0x00012dc2u): goto L_12DC2;
    case RC_ADDR(0x00012dc6u): goto L_12DC6;
    case RC_ADDR(0x00012dcau): goto L_12DCA;
    case RC_ADDR(0x00012dceu): goto L_12DCE;
    case RC_ADDR(0x00012dd2u): goto L_12DD2;
    case RC_ADDR(0x00012dd4u): goto L_12DD4;
    case RC_ADDR(0x00012dd6u): goto L_12DD6;
    case RC_ADDR(0x00012dd8u): goto L_12DD8;
    case RC_ADDR(0x00012ddeu): goto L_12DDE;
    case RC_ADDR(0x00012de2u): goto L_12DE2;
    case RC_ADDR(0x00012de4u): goto L_12DE4;
    case RC_ADDR(0x00012de6u): goto L_12DE6;
    case RC_ADDR(0x00012deau): goto L_12DEA;
    case RC_ADDR(0x00012decu): goto L_12DEC;
    case RC_ADDR(0x00012df0u): goto L_12DF0;
    case RC_ADDR(0x00012df4u): goto L_12DF4;
    case RC_ADDR(0x00012df8u): goto L_12DF8;
    case RC_ADDR(0x00012dfau): goto L_12DFA;
    case RC_ADDR(0x00012dfeu): goto L_12DFE;
    case RC_ADDR(0x00012e02u): goto L_12E02;
    case RC_ADDR(0x00012e06u): goto L_12E06;
    case RC_ADDR(0x00012e08u): goto L_12E08;
    case RC_ADDR(0x00012e0cu): goto L_12E0C;
    case RC_ADDR(0x00012e10u): goto L_12E10;
    case RC_ADDR(0x00012e14u): goto L_12E14;
    case RC_ADDR(0x00012e16u): goto L_12E16;
    case RC_ADDR(0x00012e18u): goto L_12E18;
    case RC_ADDR(0x00012e1cu): goto L_12E1C;
    case RC_ADDR(0x00012e1eu): goto L_12E1E;
    case RC_ADDR(0x00012e20u): goto L_12E20;
    case RC_ADDR(0x00012e24u): goto L_12E24;
    case RC_ADDR(0x00012e2au): goto L_12E2A;
    case RC_ADDR(0x00012e2eu): goto L_12E2E;
    case RC_ADDR(0x00012e30u): goto L_12E30;
    case RC_ADDR(0x00012e36u): goto L_12E36;
    case RC_ADDR(0x00012e3au): goto L_12E3A;
    case RC_ADDR(0x00012e3cu): goto L_12E3C;
    case RC_ADDR(0x00012e42u): goto L_12E42;
    case RC_ADDR(0x00012e44u): goto L_12E44;
    case RC_ADDR(0x00012e46u): goto L_12E46;
    case RC_ADDR(0x00012e48u): goto L_12E48;
    case RC_ADDR(0x00012e4eu): goto L_12E4E;
    case RC_ADDR(0x00012e56u): goto L_12E56;
    case RC_ADDR(0x00012e58u): goto L_12E58;
    case RC_ADDR(0x00012e5cu): goto L_12E5C;
    case RC_ADDR(0x00012e60u): goto L_12E60;
    case RC_ADDR(0x00012e62u): goto L_12E62;
    case RC_ADDR(0x00012e66u): goto L_12E66;
    case RC_ADDR(0x00012e68u): goto L_12E68;
    case RC_ADDR(0x00012e6cu): goto L_12E6C;
    case RC_ADDR(0x00012e70u): goto L_12E70;
    case RC_ADDR(0x00012e74u): goto L_12E74;
    case RC_ADDR(0x00012e78u): goto L_12E78;
    case RC_ADDR(0x00012e7au): goto L_12E7A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12D68:
    /* 00012d68   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00012d68u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_12D6C:
    /* 00012d6c   4  movem.l { D1 D2 A0 A1 A2 A3 A4 A5 A6 A7 },-(SP) */
    c->pc = RC_ADDR(0x00012d6cu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_12D70:
    /* 00012d70   8  move.w #9f0,(00dff040).l */
    c->pc = RC_ADDR(0x00012d70u);
    rc_step(c, m, 20);
    t0 = 0x000009f0u;
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D78:
    /* 00012d78   6  clr.w (00dff042).l */
    c->pc = RC_ADDR(0x00012d78u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff042u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12D7E:
    /* 00012d7e   8  move.w #ffff,(00dff044).l */
    c->pc = RC_ADDR(0x00012d7eu);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff044u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D86:
    /* 00012d86   8  move.w #ffff,(00dff046).l */
    c->pc = RC_ADDR(0x00012d86u);
    rc_step(c, m, 20);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, 0x00dff046u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D8E:
    /* 00012d8e   4  lea (fffffaa8,A4),A3 */
    c->pc = RC_ADDR(0x00012d8eu);
    rc_step(c, m, 8);
    c->a[3] = (c->a[4] - 0x558u);

L_12D92:
    /* 00012d92   4  lea (ffffface,A4),A6 */
    c->pc = RC_ADDR(0x00012d92u);
    rc_step(c, m, 8);
    c->a[6] = (c->a[4] - 0x532u);

L_12D96:
    /* 00012d96   6  move.w #4,(fffffa82,A4) */
    c->pc = RC_ADDR(0x00012d96u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] - 0x57eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D9C:
    /* 00012d9c   4  movea.l (fffffabc,A4),A5 */
    c->pc = RC_ADDR(0x00012d9cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x544u));
    c->a[5] = t0;

L_12DA0:
    /* 00012da0   4  move.l (fffffa90,A4),D5 */
    c->pc = RC_ADDR(0x00012da0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x570u));
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12DA4:
    /* 00012da4   4  sub.w (fffffa7a,A4),D5 */
    c->pc = RC_ADDR(0x00012da4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x586u));
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_12DA8:
    /* 00012da8   2  movea.l (A3)+,A1 */
    c->pc = RC_ADDR(0x00012da8u);
    rc_step(c, m, 12);
    t3 = c->a[3];
    c->a[3] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;

L_12DAA:
    /* 00012daa   2  movea.l (A6)+,A2 */
    c->pc = RC_ADDR(0x00012daau);
    rc_step(c, m, 12);
    t3 = c->a[6];
    c->a[6] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_12DAC:
    /* 00012dac   4  movea.l (fffffaa0,A4),A0 */
    c->pc = RC_ADDR(0x00012dacu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[0] = t0;

L_12DB0:
    /* 00012db0   4  adda.l (fffffa8c,A4),A0 */
    c->pc = RC_ADDR(0x00012db0u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x574u));
    c->a[0] += t0;

L_12DB4:
    /* 00012db4   4  move.w (17e6,A4),D7 */
    c->pc = RC_ADDR(0x00012db4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17e6u));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12DB8:
    /* 00012db8   4  tst.w (fffffa7a,A4) */
    c->pc = RC_ADDR(0x00012db8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x586u));
    rc_set_nzvc(c, t0, RC_W);

L_12DBC:
    /* 00012dbc   2  beq 00012dc0 */
    c->pc = RC_ADDR(0x00012dbcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12DC0;

L_12DBE:
    /* 00012dbe   2  addq.w #1,D7 */
    c->pc = RC_ADDR(0x00012dbeu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_12DC0:
    /* 00012dc0   2  clr.l D4 */
    c->pc = RC_ADDR(0x00012dc0u);
    rc_step(c, m, 6);
    rc_d_set(c, 4, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12DC2:
    /* 00012dc2   4  bset #1,D4 */
    c->pc = RC_ADDR(0x00012dc2u);
    rc_step(c, m, 12);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 4, RC_L, t2);

L_12DC6:
    /* 00012dc6   4  move.l (17e8,A4),D2 */
    c->pc = RC_ADDR(0x00012dc6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17e8u));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12DCA:
    /* 00012dca   4  move.w (17e4,A4),D6 */
    c->pc = RC_ADDR(0x00012dcau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17e4u));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12DCE:
    /* 00012dce   4  tst.w (fffffa7e,A4) */
    c->pc = RC_ADDR(0x00012dceu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x582u));
    rc_set_nzvc(c, t0, RC_W);

L_12DD2:
    /* 00012dd2   2  beq 00012dd8 */
    c->pc = RC_ADDR(0x00012dd2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12DD8;

L_12DD4:
    /* 00012dd4   2  addq.w #1,D6 */
    c->pc = RC_ADDR(0x00012dd4u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_12DD6:
    /* 00012dd6   2  subq.l #2,D2 */
    c->pc = RC_ADDR(0x00012dd6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 2, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 2, RC_L, t2);

L_12DD8:
    /* 00012dd8   6  move.l A2,(00dff054).l */
    c->pc = RC_ADDR(0x00012dd8u);
    rc_step(c, m, 20);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12DDE:
    /* 00012dde   4  bset #2,D4 */
    c->pc = RC_ADDR(0x00012ddeu);
    rc_step(c, m, 12);
    t4 = 0x00000002u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 4, RC_L, t2);

L_12DE2:
    /* 00012de2   2  clr.l D0 */
    c->pc = RC_ADDR(0x00012de2u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_12DE4:
    /* 00012de4   2  move.w (A0)+,D0 */
    c->pc = RC_ADDR(0x00012de4u);
    rc_step(c, m, 8);
    t3 = c->a[0];
    c->a[0] += 2u;
    t0 = rc_rd16(c, m, t3);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12DE6:
    /* 00012de6   4  move.w (0,A5,D0.w),D0 */
    c->pc = RC_ADDR(0x00012de6u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[5] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12DEA:
    /* 00012dea   2  add.l A1,D0 */
    c->pc = RC_ADDR(0x00012deau);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_12DEC:
    /* 00012dec   4  move.w (fffffa94,A4),D1 */
    c->pc = RC_ADDR(0x00012decu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56cu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12DF0:
    /* 00012df0   4  move.w (fffffa96,A4),D3 */
    c->pc = RC_ADDR(0x00012df0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x56au));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12DF4:
    /* 00012df4   4  btst #1,D4 */
    c->pc = RC_ADDR(0x00012df4u);
    rc_step(c, m, 10);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12DF8:
    /* 00012df8   2  beq 00012e02 */
    c->pc = RC_ADDR(0x00012df8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12E02;

L_12DFA:
    /* 00012dfa   4  sub.w (fffffa7a,A4),D1 */
    c->pc = RC_ADDR(0x00012dfau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x586u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12DFE:
    /* 00012dfe   4  add.l (fffffa84,A4),D0 */
    c->pc = RC_ADDR(0x00012dfeu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x57cu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_12E02:
    /* 00012e02   4  btst #2,D4 */
    c->pc = RC_ADDR(0x00012e02u);
    rc_step(c, m, 10);
    t4 = 0x00000002u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12E06:
    /* 00012e06   2  beq 00012e14 */
    c->pc = RC_ADDR(0x00012e06u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_12E14;

L_12E08:
    /* 00012e08   4  bclr #2,D4 */
    c->pc = RC_ADDR(0x00012e08u);
    rc_step(c, m, 14);
    t4 = 0x00000002u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 & ~(1u << t4);
    rc_d_set(c, 4, RC_L, t2);

L_12E0C:
    /* 00012e0c   4  sub.w (fffffa7e,A4),D3 */
    c->pc = RC_ADDR(0x00012e0cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x582u));
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_12E10:
    /* 00012e10   4  add.l (fffffa88,A4),D0 */
    c->pc = RC_ADDR(0x00012e10u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x578u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_12E14:
    /* 00012e14   2  tst.w D6 */
    c->pc = RC_ADDR(0x00012e14u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_12E16:
    /* 00012e16   2  bne 00012e1c */
    c->pc = RC_ADDR(0x00012e16u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_12E1C;

L_12E18:
    /* 00012e18   4  sub.w (fffffa80,A4),D3 */
    c->pc = RC_ADDR(0x00012e18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x580u));
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_12E1C:
    /* 00012e1c   2  tst.w D7 */
    c->pc = RC_ADDR(0x00012e1cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_12E1E:
    /* 00012e1e   2  bne 00012e24 */
    c->pc = RC_ADDR(0x00012e1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_12E24;

L_12E20:
    /* 00012e20   4  sub.w (fffffa7c,A4),D1 */
    c->pc = RC_ADDR(0x00012e20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x584u));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_12E24:
    /* 00012e24   6  move.l D0,(00dff050).l */
    c->pc = RC_ADDR(0x00012e24u);
    rc_step(c, m, 20);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, 0x00dff050u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12E2A:
    /* 00012e2a   4  move.w (fffffa76,A4),D0 */
    c->pc = RC_ADDR(0x00012e2au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E2E:
    /* 00012e2e   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00012e2eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12E30:
    /* 00012e30   6  move.w D0,(00dff066).l */
    c->pc = RC_ADDR(0x00012e30u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff066u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E36:
    /* 00012e36   4  move.w (fffffa9c,A4),D0 */
    c->pc = RC_ADDR(0x00012e36u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x564u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E3A:
    /* 00012e3a   2  sub.w D1,D0 */
    c->pc = RC_ADDR(0x00012e3au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12E3C:
    /* 00012e3c   6  move.w D0,(00dff064).l */
    c->pc = RC_ADDR(0x00012e3cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff064u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E42:
    /* 00012e42   2  lsl.w #6,D3 */
    c->pc = RC_ADDR(0x00012e42u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 3, RC_W), RC_W));

L_12E44:
    /* 00012e44   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00012e44u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_12E46:
    /* 00012e46   2  or.w D1,D3 */
    c->pc = RC_ADDR(0x00012e46u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 3, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 3, RC_W, t2);

L_12E48:
    /* 00012e48   6  move.w D3,(00dff058).l */
    c->pc = RC_ADDR(0x00012e48u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 3, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E4E:
    /* 00012e4e   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00012e4eu);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_12E56:
    /* 00012e56   2  bne 00012e4e */
    c->pc = RC_ADDR(0x00012e56u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_12E4E; }

L_12E58:
    /* 00012e58   4  dbf D6,00012de2 */
    c->pc = RC_ADDR(0x00012e58u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 6, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 6, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_12DE2; }
    }

L_12E5C:
    /* 00012e5c   4  bclr #1,D4 */
    c->pc = RC_ADDR(0x00012e5cu);
    rc_step(c, m, 14);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 4, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 & ~(1u << t4);
    rc_d_set(c, 4, RC_L, t2);

L_12E60:
    /* 00012e60   2  adda.l D5,A2 */
    c->pc = RC_ADDR(0x00012e60u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 5, RC_L);
    c->a[2] += t0;

L_12E62:
    /* 00012e62   4  move.l (fffffa90,A4),D5 */
    c->pc = RC_ADDR(0x00012e62u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x570u));
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12E66:
    /* 00012e66   2  adda.l D2,A0 */
    c->pc = RC_ADDR(0x00012e66u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 2, RC_L);
    c->a[0] += t0;

L_12E68:
    /* 00012e68   4  dbf D7,00012dc6 */
    c->pc = RC_ADDR(0x00012e68u);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 7, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 7, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_12DC6; }
    }

L_12E6C:
    /* 00012e6c   4  subq.w #1,(fffffa82,A4) */
    c->pc = RC_ADDR(0x00012e6cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x57eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12E70:
    /* 00012e70   4  bpl 00012da0 */
    c->pc = RC_ADDR(0x00012e70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) { rc_tick(); goto L_12DA0; }

L_12E74:
    /* 00012e74   4  movem.l (SP)+,{ D0 D1 D2 D3 D4 D5 D6 D7 A5 A6 } */
    c->pc = RC_ADDR(0x00012e74u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->d[3] = t0;
    t3 += 4u;
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
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_12E78:
    /* 00012e78   2  unlk A5 */
    c->pc = RC_ADDR(0x00012e78u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12E7A:
    /* 00012e7a   2  rts */
    c->pc = RC_ADDR(0x00012e7au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
