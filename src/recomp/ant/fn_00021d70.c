/* fn_00021d70 - 172 byte(s), 54 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021d70(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00021d70u): goto L_21D70;
    case RC_ADDR(0x00021d74u): goto L_21D74;
    case RC_ADDR(0x00021d78u): goto L_21D78;
    case RC_ADDR(0x00021d7cu): goto L_21D7C;
    case RC_ADDR(0x00021d80u): goto L_21D80;
    case RC_ADDR(0x00021d84u): goto L_21D84;
    case RC_ADDR(0x00021d88u): goto L_21D88;
    case RC_ADDR(0x00021d8cu): goto L_21D8C;
    case RC_ADDR(0x00021d8eu): goto L_21D8E;
    case RC_ADDR(0x00021d92u): goto L_21D92;
    case RC_ADDR(0x00021d94u): goto L_21D94;
    case RC_ADDR(0x00021d96u): goto L_21D96;
    case RC_ADDR(0x00021d98u): goto L_21D98;
    case RC_ADDR(0x00021d9au): goto L_21D9A;
    case RC_ADDR(0x00021d9eu): goto L_21D9E;
    case RC_ADDR(0x00021da0u): goto L_21DA0;
    case RC_ADDR(0x00021da4u): goto L_21DA4;
    case RC_ADDR(0x00021da6u): goto L_21DA6;
    case RC_ADDR(0x00021daau): goto L_21DAA;
    case RC_ADDR(0x00021daeu): goto L_21DAE;
    case RC_ADDR(0x00021db0u): goto L_21DB0;
    case RC_ADDR(0x00021db4u): goto L_21DB4;
    case RC_ADDR(0x00021db6u): goto L_21DB6;
    case RC_ADDR(0x00021dbau): goto L_21DBA;
    case RC_ADDR(0x00021dbeu): goto L_21DBE;
    case RC_ADDR(0x00021dc2u): goto L_21DC2;
    case RC_ADDR(0x00021dc4u): goto L_21DC4;
    case RC_ADDR(0x00021dc6u): goto L_21DC6;
    case RC_ADDR(0x00021dcau): goto L_21DCA;
    case RC_ADDR(0x00021dccu): goto L_21DCC;
    case RC_ADDR(0x00021dd0u): goto L_21DD0;
    case RC_ADDR(0x00021dd2u): goto L_21DD2;
    case RC_ADDR(0x00021dd4u): goto L_21DD4;
    case RC_ADDR(0x00021dd6u): goto L_21DD6;
    case RC_ADDR(0x00021ddau): goto L_21DDA;
    case RC_ADDR(0x00021ddeu): goto L_21DDE;
    case RC_ADDR(0x00021de0u): goto L_21DE0;
    case RC_ADDR(0x00021de4u): goto L_21DE4;
    case RC_ADDR(0x00021de8u): goto L_21DE8;
    case RC_ADDR(0x00021decu): goto L_21DEC;
    case RC_ADDR(0x00021deeu): goto L_21DEE;
    case RC_ADDR(0x00021df2u): goto L_21DF2;
    case RC_ADDR(0x00021df6u): goto L_21DF6;
    case RC_ADDR(0x00021df8u): goto L_21DF8;
    case RC_ADDR(0x00021dfcu): goto L_21DFC;
    case RC_ADDR(0x00021e00u): goto L_21E00;
    case RC_ADDR(0x00021e04u): goto L_21E04;
    case RC_ADDR(0x00021e06u): goto L_21E06;
    case RC_ADDR(0x00021e0au): goto L_21E0A;
    case RC_ADDR(0x00021e0eu): goto L_21E0E;
    case RC_ADDR(0x00021e12u): goto L_21E12;
    case RC_ADDR(0x00021e14u): goto L_21E14;
    case RC_ADDR(0x00021e18u): goto L_21E18;
    case RC_ADDR(0x00021e1au): goto L_21E1A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21D70:
    /* 00021d70   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00021d70u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_21D74:
    /* 00021d74   4  movem.l { D4 D5 },-(SP) */
    c->pc = RC_ADDR(0x00021d74u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_21D78:
    /* 00021d78   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00021d78u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_21D7C:
    /* 00021d7c   4  move.l (A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00021d7cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D80:
    /* 00021d80   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00021d80u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_21D84:
    /* 00021d84   4  beq 00021e14 */
    c->pc = RC_ADDR(0x00021d84u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21E14;

L_21D88:
    /* 00021d88   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00021d88u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_21D8C:
    /* 00021d8c   2  clr.l (A0) */
    c->pc = RC_ADDR(0x00021d8cu);
    rc_step(c, m, 20);
    rc_wr32(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_21D8E:
    /* 00021d8e   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21D92:
    /* 00021d92   2  movea.l (A0),A2 */
    c->pc = RC_ADDR(0x00021d92u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[2] = t0;

L_21D94:
    /* 00021d94   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x00021d94u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D96:
    /* 00021d96   2  beq 00021dd6 */
    c->pc = RC_ADDR(0x00021d96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21DD6;

L_21D98:
    /* 00021d98   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021d98u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21D9A:
    /* 00021d9a   4  jsr (000238c8) */
    c->pc = RC_ADDR(0x00021d9au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021d9eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000238c8u);
    return;

L_21D9E:
    /* 00021d9e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021d9eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21DA0:
    /* 00021da0   4  tst.l (4,A2) */
    c->pc = RC_ADDR(0x00021da0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_21DA4:
    /* 00021da4   2  beq 00021db0 */
    c->pc = RC_ADDR(0x00021da4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21DB0;

L_21DA6:
    /* 00021da6   4  move.l (4,A2),-(A7) */
    c->pc = RC_ADDR(0x00021da6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21DAA:
    /* 00021daa   4  jsr (000238b0) */
    c->pc = RC_ADDR(0x00021daau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021daeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000238b0u);
    return;

L_21DAE:
    /* 00021dae   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021daeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21DB0:
    /* 00021db0   4  tst.l (24,A2) */
    c->pc = RC_ADDR(0x00021db0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[2] + 0x24u));
    rc_set_nzvc(c, t0, RC_L);

L_21DB4:
    /* 00021db4   2  beq 00021dc4 */
    c->pc = RC_ADDR(0x00021db4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21DC4;

L_21DB6:
    /* 00021db6   4  pea (0000000c).l */
    c->pc = RC_ADDR(0x00021db6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000cu);

L_21DBA:
    /* 00021dba   4  move.l (24,A2),-(A7) */
    c->pc = RC_ADDR(0x00021dbau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[2] + 0x24u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21DBE:
    /* 00021dbe   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00021dbeu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00021dc2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_21DC2:
    /* 00021dc2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021dc2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21DC4:
    /* 00021dc4   2  movea.l (A2),A3 */
    c->pc = RC_ADDR(0x00021dc4u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[3] = t0;

L_21DC6:
    /* 00021dc6   4  pea (00000028).l */
    c->pc = RC_ADDR(0x00021dc6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000028u);

L_21DCA:
    /* 00021dca   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00021dcau);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21DCC:
    /* 00021dcc   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00021dccu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00021dd0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_21DD0:
    /* 00021dd0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021dd0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21DD2:
    /* 00021dd2   2  movea.l A3,A2 */
    c->pc = RC_ADDR(0x00021dd2u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[2] = t0;

L_21DD4:
    /* 00021dd4   2  bra 00021d94 */
    c->pc = RC_ADDR(0x00021dd4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21D94;

L_21DD6:
    /* 00021dd6   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021dd6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21DDA:
    /* 00021dda   4  tst.l (4,A0) */
    c->pc = RC_ADDR(0x00021ddau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_21DDE:
    /* 00021dde   2  beq 00021dee */
    c->pc = RC_ADDR(0x00021ddeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21DEE;

L_21DE0:
    /* 00021de0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021de0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21DE4:
    /* 00021de4   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x00021de4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21DE8:
    /* 00021de8   4  jsr (000238bc) */
    c->pc = RC_ADDR(0x00021de8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021decu));
    rc_depth++;
    c->pc = RC_ADDR(0x000238bcu);
    return;

L_21DEC:
    /* 00021dec   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021decu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21DEE:
    /* 00021dee   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021deeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21DF2:
    /* 00021df2   4  tst.l (8,A0) */
    c->pc = RC_ADDR(0x00021df2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_21DF6:
    /* 00021df6   2  beq 00021e06 */
    c->pc = RC_ADDR(0x00021df6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21E06;

L_21DF8:
    /* 00021df8   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x00021df8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_21DFC:
    /* 00021dfc   4  move.l (8,A0),-(A7) */
    c->pc = RC_ADDR(0x00021dfcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21E00:
    /* 00021e00   4  jsr (000238bc) */
    c->pc = RC_ADDR(0x00021e00u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021e04u));
    rc_depth++;
    c->pc = RC_ADDR(0x000238bcu);
    return;

L_21E04:
    /* 00021e04   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021e04u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21E06:
    /* 00021e06   4  pea (00000114).l */
    c->pc = RC_ADDR(0x00021e06u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000114u);

L_21E0A:
    /* 00021e0a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00021e0au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21E0E:
    /* 00021e0e   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00021e0eu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x00021e12u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_21E12:
    /* 00021e12   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021e12u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21E14:
    /* 00021e14   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = RC_ADDR(0x00021e14u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_21E18:
    /* 00021e18   2  unlk A5 */
    c->pc = RC_ADDR(0x00021e18u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21E1A:
    /* 00021e1a   2  rts */
    c->pc = RC_ADDR(0x00021e1au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
