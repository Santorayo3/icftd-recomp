/* fn_00022da4 - 158 byte(s), 52 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022da4(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00022da4u): goto L_22DA4;
    case RC_ADDR(0x00022da8u): goto L_22DA8;
    case RC_ADDR(0x00022dacu): goto L_22DAC;
    case RC_ADDR(0x00022db0u): goto L_22DB0;
    case RC_ADDR(0x00022db2u): goto L_22DB2;
    case RC_ADDR(0x00022db6u): goto L_22DB6;
    case RC_ADDR(0x00022dbau): goto L_22DBA;
    case RC_ADDR(0x00022dbeu): goto L_22DBE;
    case RC_ADDR(0x00022dc0u): goto L_22DC0;
    case RC_ADDR(0x00022dc2u): goto L_22DC2;
    case RC_ADDR(0x00022dc6u): goto L_22DC6;
    case RC_ADDR(0x00022dc8u): goto L_22DC8;
    case RC_ADDR(0x00022dcau): goto L_22DCA;
    case RC_ADDR(0x00022dceu): goto L_22DCE;
    case RC_ADDR(0x00022dd2u): goto L_22DD2;
    case RC_ADDR(0x00022dd6u): goto L_22DD6;
    case RC_ADDR(0x00022ddau): goto L_22DDA;
    case RC_ADDR(0x00022ddcu): goto L_22DDC;
    case RC_ADDR(0x00022ddeu): goto L_22DDE;
    case RC_ADDR(0x00022de0u): goto L_22DE0;
    case RC_ADDR(0x00022de4u): goto L_22DE4;
    case RC_ADDR(0x00022de6u): goto L_22DE6;
    case RC_ADDR(0x00022deau): goto L_22DEA;
    case RC_ADDR(0x00022deeu): goto L_22DEE;
    case RC_ADDR(0x00022df0u): goto L_22DF0;
    case RC_ADDR(0x00022df2u): goto L_22DF2;
    case RC_ADDR(0x00022df4u): goto L_22DF4;
    case RC_ADDR(0x00022df6u): goto L_22DF6;
    case RC_ADDR(0x00022dfau): goto L_22DFA;
    case RC_ADDR(0x00022dfcu): goto L_22DFC;
    case RC_ADDR(0x00022e00u): goto L_22E00;
    case RC_ADDR(0x00022e02u): goto L_22E02;
    case RC_ADDR(0x00022e04u): goto L_22E04;
    case RC_ADDR(0x00022e06u): goto L_22E06;
    case RC_ADDR(0x00022e08u): goto L_22E08;
    case RC_ADDR(0x00022e0au): goto L_22E0A;
    case RC_ADDR(0x00022e0cu): goto L_22E0C;
    case RC_ADDR(0x00022e0eu): goto L_22E0E;
    case RC_ADDR(0x00022e14u): goto L_22E14;
    case RC_ADDR(0x00022e18u): goto L_22E18;
    case RC_ADDR(0x00022e1cu): goto L_22E1C;
    case RC_ADDR(0x00022e20u): goto L_22E20;
    case RC_ADDR(0x00022e24u): goto L_22E24;
    case RC_ADDR(0x00022e28u): goto L_22E28;
    case RC_ADDR(0x00022e2au): goto L_22E2A;
    case RC_ADDR(0x00022e2cu): goto L_22E2C;
    case RC_ADDR(0x00022e30u): goto L_22E30;
    case RC_ADDR(0x00022e32u): goto L_22E32;
    case RC_ADDR(0x00022e36u): goto L_22E36;
    case RC_ADDR(0x00022e3au): goto L_22E3A;
    case RC_ADDR(0x00022e3eu): goto L_22E3E;
    case RC_ADDR(0x00022e40u): goto L_22E40;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22DA4:
    /* 00022da4   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00022da4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_22DA8:
    /* 00022da8   4  movem.l { D4 D5 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00022da8u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_22DAC:
    /* 00022dac   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x00022dacu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_22DB0:
    /* 00022db0   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00022db0u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22DB2:
    /* 00022db2   4  pea (00022e42) */
    c->pc = RC_ADDR(0x00022db2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00022e42u));

L_22DB6:
    /* 00022db6   4  jsr (000237c6) */
    c->pc = RC_ADDR(0x00022db6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022dbau));
    rc_depth++;
    c->pc = RC_ADDR(0x000237c6u);
    return;

L_22DBA:
    /* 00022dba   4  move.l D0,(4546,A4) */
    c->pc = RC_ADDR(0x00022dbau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x4546u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22DBE:
    /* 00022dbe   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022dbeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22DC0:
    /* 00022dc0   2  bne 00022dca */
    c->pc = RC_ADDR(0x00022dc0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_22DCA;

L_22DC2:
    /* 00022dc2   4  movem.l (SP)+,{ D4 D5 D6 A2 A3 } */
    c->pc = RC_ADDR(0x00022dc2u);
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
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_22DC6:
    /* 00022dc6   2  unlk A5 */
    c->pc = RC_ADDR(0x00022dc6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22DC8:
    /* 00022dc8   2  rts */
    c->pc = RC_ADDR(0x00022dc8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_22DCA:
    /* 00022dca   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00022dcau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_22DCE:
    /* 00022dce   4  movea.l (24,A0),A1 */
    c->pc = RC_ADDR(0x00022dceu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[1] = t0;

L_22DD2:
    /* 00022dd2   4  move.l (4,A1),-(A7) */
    c->pc = RC_ADDR(0x00022dd2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22DD6:
    /* 00022dd6   4  jsr (00023a20) */
    c->pc = RC_ADDR(0x00022dd6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022ddau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023a20u);
    return;

L_22DDA:
    /* 00022dda   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x00022ddau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22DDC:
    /* 00022ddc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00022ddcu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_22DDE:
    /* 00022dde   2  beq 00022e32 */
    c->pc = RC_ADDR(0x00022ddeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22E32;

L_22DE0:
    /* 00022de0   4  pea (00022e4f) */
    c->pc = RC_ADDR(0x00022de0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00022e4fu));

L_22DE4:
    /* 00022de4   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x00022de4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_22DE6:
    /* 00022de6   4  move.l (36,A0),-(A7) */
    c->pc = RC_ADDR(0x00022de6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x36u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22DEA:
    /* 00022dea   4  jsr (00023a06) */
    c->pc = RC_ADDR(0x00022deau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022deeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023a06u);
    return;

L_22DEE:
    /* 00022dee   2  movea.l D0,A3 */
    c->pc = RC_ADDR(0x00022deeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[3] = t0;

L_22DF0:
    /* 00022df0   2  tst.l D0 */
    c->pc = RC_ADDR(0x00022df0u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_22DF2:
    /* 00022df2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022df2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22DF4:
    /* 00022df4   2  beq 00022e2a */
    c->pc = RC_ADDR(0x00022df4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22E2A;

L_22DF6:
    /* 00022df6   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00022df6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_22DFA:
    /* 00022dfa   2  move.l A3,-(A7) */
    c->pc = RC_ADDR(0x00022dfau);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22DFC:
    /* 00022dfc   4  jsr (000234fe) */
    c->pc = RC_ADDR(0x00022dfcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022e00u));
    rc_depth++;
    c->pc = RC_ADDR(0x000234feu);
    return;

L_22E00:
    /* 00022e00   2  move.l D0,D6 */
    c->pc = RC_ADDR(0x00022e00u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 6, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22E02:
    /* 00022e02   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022e02u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22E04:
    /* 00022e04   2  beq 00022e2a */
    c->pc = RC_ADDR(0x00022e04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22E2A;

L_22E06:
    /* 00022e06   2  move.l D6,D0 */
    c->pc = RC_ADDR(0x00022e06u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22E08:
    /* 00022e08   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00022e08u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_22E0A:
    /* 00022e0a   2  move.l D0,D5 */
    c->pc = RC_ADDR(0x00022e0au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 5, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_22E0C:
    /* 00022e0c   2  movea.l D5,A0 */
    c->pc = RC_ADDR(0x00022e0cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    c->a[0] = t0;

L_22E0E:
    /* 00022e0e   6  move.l (8,A0),(a4,A2) */
    c->pc = RC_ADDR(0x00022e0eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[2] + 0xa4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22E14:
    /* 00022e14   4  move.l D6,(9c,A2) */
    c->pc = RC_ADDR(0x00022e14u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 6, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x9cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22E18:
    /* 00022e18   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00022e18u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_22E1C:
    /* 00022e1c   4  pea (00022e56) */
    c->pc = RC_ADDR(0x00022e1cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00022e56u));

L_22E20:
    /* 00022e20   4  jsr (000234fe) */
    c->pc = RC_ADDR(0x00022e20u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022e24u));
    rc_depth++;
    c->pc = RC_ADDR(0x000234feu);
    return;

L_22E24:
    /* 00022e24   4  move.l D0,(a0,A2) */
    c->pc = RC_ADDR(0x00022e24u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0xa0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22E28:
    /* 00022e28   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00022e28u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_22E2A:
    /* 00022e2a   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00022e2au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22E2C:
    /* 00022e2c   4  jsr (00023a14) */
    c->pc = RC_ADDR(0x00022e2cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00022e30u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023a14u);
    return;

L_22E30:
    /* 00022e30   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00022e30u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_22E32:
    /* 00022e32   4  move.l (4546,A4),-(A7) */
    c->pc = RC_ADDR(0x00022e32u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4546u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_22E36:
    /* 00022e36   4  jsr (ffff8356,A4) */
    c->pc = RC_ADDR(0x00022e36u);
    rc_step(c, m, 18);
    /* vector 142 */
    rc_push32(c, m, RC_ADDR(0x00022e3au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002358cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023590u);
    return;

L_22E3A:
    /* 00022e3a   4  clr.l (4546,A4) */
    c->pc = RC_ADDR(0x00022e3au);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x4546u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22E3E:
    /* 00022e3e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00022e3eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_22E40:
    /* 00022e40   2  bra 00022dc2 */
    c->pc = RC_ADDR(0x00022e40u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_22DC2;

}
