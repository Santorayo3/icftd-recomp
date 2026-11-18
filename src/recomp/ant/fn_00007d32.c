/* fn_00007d32 - 270 byte(s), 76 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00007d32(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00007d32u): goto L_7D32;
    case RC_ADDR(0x00007d36u): goto L_7D36;
    case RC_ADDR(0x00007d3au): goto L_7D3A;
    case RC_ADDR(0x00007d3eu): goto L_7D3E;
    case RC_ADDR(0x00007d42u): goto L_7D42;
    case RC_ADDR(0x00007d46u): goto L_7D46;
    case RC_ADDR(0x00007d4au): goto L_7D4A;
    case RC_ADDR(0x00007d4eu): goto L_7D4E;
    case RC_ADDR(0x00007d54u): goto L_7D54;
    case RC_ADDR(0x00007d58u): goto L_7D58;
    case RC_ADDR(0x00007d5cu): goto L_7D5C;
    case RC_ADDR(0x00007d5eu): goto L_7D5E;
    case RC_ADDR(0x00007d62u): goto L_7D62;
    case RC_ADDR(0x00007d68u): goto L_7D68;
    case RC_ADDR(0x00007d6cu): goto L_7D6C;
    case RC_ADDR(0x00007d70u): goto L_7D70;
    case RC_ADDR(0x00007d72u): goto L_7D72;
    case RC_ADDR(0x00007d76u): goto L_7D76;
    case RC_ADDR(0x00007d7au): goto L_7D7A;
    case RC_ADDR(0x00007d7cu): goto L_7D7C;
    case RC_ADDR(0x00007d80u): goto L_7D80;
    case RC_ADDR(0x00007d84u): goto L_7D84;
    case RC_ADDR(0x00007d88u): goto L_7D88;
    case RC_ADDR(0x00007d8au): goto L_7D8A;
    case RC_ADDR(0x00007d8eu): goto L_7D8E;
    case RC_ADDR(0x00007d92u): goto L_7D92;
    case RC_ADDR(0x00007d96u): goto L_7D96;
    case RC_ADDR(0x00007d98u): goto L_7D98;
    case RC_ADDR(0x00007d9au): goto L_7D9A;
    case RC_ADDR(0x00007d9eu): goto L_7D9E;
    case RC_ADDR(0x00007da4u): goto L_7DA4;
    case RC_ADDR(0x00007da6u): goto L_7DA6;
    case RC_ADDR(0x00007daau): goto L_7DAA;
    case RC_ADDR(0x00007daeu): goto L_7DAE;
    case RC_ADDR(0x00007db2u): goto L_7DB2;
    case RC_ADDR(0x00007db4u): goto L_7DB4;
    case RC_ADDR(0x00007db6u): goto L_7DB6;
    case RC_ADDR(0x00007dbau): goto L_7DBA;
    case RC_ADDR(0x00007dbcu): goto L_7DBC;
    case RC_ADDR(0x00007dc0u): goto L_7DC0;
    case RC_ADDR(0x00007dc2u): goto L_7DC2;
    case RC_ADDR(0x00007dc6u): goto L_7DC6;
    case RC_ADDR(0x00007dcau): goto L_7DCA;
    case RC_ADDR(0x00007dccu): goto L_7DCC;
    case RC_ADDR(0x00007dd0u): goto L_7DD0;
    case RC_ADDR(0x00007dd6u): goto L_7DD6;
    case RC_ADDR(0x00007ddau): goto L_7DDA;
    case RC_ADDR(0x00007de0u): goto L_7DE0;
    case RC_ADDR(0x00007de4u): goto L_7DE4;
    case RC_ADDR(0x00007de6u): goto L_7DE6;
    case RC_ADDR(0x00007deau): goto L_7DEA;
    case RC_ADDR(0x00007deeu): goto L_7DEE;
    case RC_ADDR(0x00007df2u): goto L_7DF2;
    case RC_ADDR(0x00007df4u): goto L_7DF4;
    case RC_ADDR(0x00007df8u): goto L_7DF8;
    case RC_ADDR(0x00007dfau): goto L_7DFA;
    case RC_ADDR(0x00007dfeu): goto L_7DFE;
    case RC_ADDR(0x00007e00u): goto L_7E00;
    case RC_ADDR(0x00007e04u): goto L_7E04;
    case RC_ADDR(0x00007e06u): goto L_7E06;
    case RC_ADDR(0x00007e0au): goto L_7E0A;
    case RC_ADDR(0x00007e0eu): goto L_7E0E;
    case RC_ADDR(0x00007e10u): goto L_7E10;
    case RC_ADDR(0x00007e14u): goto L_7E14;
    case RC_ADDR(0x00007e16u): goto L_7E16;
    case RC_ADDR(0x00007e1au): goto L_7E1A;
    case RC_ADDR(0x00007e1eu): goto L_7E1E;
    case RC_ADDR(0x00007e22u): goto L_7E22;
    case RC_ADDR(0x00007e24u): goto L_7E24;
    case RC_ADDR(0x00007e28u): goto L_7E28;
    case RC_ADDR(0x00007e2cu): goto L_7E2C;
    case RC_ADDR(0x00007e30u): goto L_7E30;
    case RC_ADDR(0x00007e34u): goto L_7E34;
    case RC_ADDR(0x00007e38u): goto L_7E38;
    case RC_ADDR(0x00007e3cu): goto L_7E3C;
    case RC_ADDR(0x00007e3eu): goto L_7E3E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_7D32:
    /* 00007d32   4  link.w A5,#ffffffe4 */
    c->pc = RC_ADDR(0x00007d32u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x1cu;

L_7D36:
    /* 00007d36   4  clr.l (fffffa0c,A4) */
    c->pc = RC_ADDR(0x00007d36u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5f4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7D3A:
    /* 00007d3a   4  clr.w (fffffa10,A4) */
    c->pc = RC_ADDR(0x00007d3au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5f0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7D3E:
    /* 00007d3e   4  clr.b (ffffffe9,A5) */
    c->pc = RC_ADDR(0x00007d3eu);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[5] - 0x17u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_7D42:
    /* 00007d42   4  jsr (000076c4) */
    c->pc = RC_ADDR(0x00007d42u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007d46u));
    rc_depth++;
    c->pc = RC_ADDR(0x000076c4u);
    return;

L_7D46:
    /* 00007d46   4  clr.w (fffffa18,A4) */
    c->pc = RC_ADDR(0x00007d46u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5e8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7D4A:
    /* 00007d4a   4  clr.w (fffffa14,A4) */
    c->pc = RC_ADDR(0x00007d4au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5ecu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7D4E:
    /* 00007d4e   6  move.w #1,(ffffffe4,A5) */
    c->pc = RC_ADDR(0x00007d4eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7D54:
    /* 00007d54   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00007d54u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7D58:
    /* 00007d58   4  jsr (0000226a) */
    c->pc = RC_ADDR(0x00007d58u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007d5cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000226au);
    return;

L_7D5C:
    /* 00007d5c   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00007d5cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_7D5E:
    /* 00007d5e   4  move.l D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00007d5eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7D62:
    /* 00007d62   6  move.w #ffff,(fffffa0a,A4) */
    c->pc = RC_ADDR(0x00007d62u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] - 0x5f6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7D68:
    /* 00007d68   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00007d68u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_7D6C:
    /* 00007d6c   4  move.b (1,A0),D0 */
    c->pc = RC_ADDR(0x00007d6cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x1u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_7D70:
    /* 00007d70   2  ext.w D0 */
    c->pc = RC_ADDR(0x00007d70u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_7D72:
    /* 00007d72   4  move.w D0,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x00007d72u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7D76:
    /* 00007d76   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x00007d76u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_7D7A:
    /* 00007d7a   2  addq.l #2,A0 */
    c->pc = RC_ADDR(0x00007d7au);
    rc_step(c, m, 8);
    c->a[0] += 0x00000002u;

L_7D7C:
    /* 00007d7c   4  move.l A0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00007d7cu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7D80:
    /* 00007d80   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00007d80u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7D84:
    /* 00007d84   4  jsr (00007c6e) */
    c->pc = RC_ADDR(0x00007d84u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007d88u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007c6eu);
    return;

L_7D88:
    /* 00007d88   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007d88u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7D8A:
    /* 00007d8a   4  clr.l (ffffffea,A5) */
    c->pc = RC_ADDR(0x00007d8au);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7D8E:
    /* 00007d8e   4  move.w (ffffffe6,A5),D0 */
    c->pc = RC_ADDR(0x00007d8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7D92:
    /* 00007d92   4  subq.w #1,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x00007d92u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x1au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_7D96:
    /* 00007d96   2  tst.w D0 */
    c->pc = RC_ADDR(0x00007d96u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_7D98:
    /* 00007d98   2  beq 00007dfa */
    c->pc = RC_ADDR(0x00007d98u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7DFA;

L_7D9A:
    /* 00007d9a   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x00007d9au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_7D9E:
    /* 00007d9e   6  cmpi.b #64,(4,A0) */
    c->pc = RC_ADDR(0x00007d9eu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_7DA4:
    /* 00007da4   2  bne 00007de6 */
    c->pc = RC_ADDR(0x00007da4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7DE6;

L_7DA6:
    /* 00007da6   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x00007da6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_7DAA:
    /* 00007daa   4  move.l (A0),(fffffff2,A5) */
    c->pc = RC_ADDR(0x00007daau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7DAE:
    /* 00007dae   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00007daeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_7DB2:
    /* 00007db2   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00007db2u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_7DB4:
    /* 00007db4   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00007db4u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7DB6:
    /* 00007db6   4  jsr (00007790) */
    c->pc = RC_ADDR(0x00007db6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007dbau));
    rc_depth++;
    c->pc = RC_ADDR(0x00007790u);
    return;

L_7DBA:
    /* 00007dba   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007dbau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7DBC:
    /* 00007dbc   4  tst.w (ffffffe4,A5) */
    c->pc = RC_ADDR(0x00007dbcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1cu));
    rc_set_nzvc(c, t0, RC_W);

L_7DC0:
    /* 00007dc0   2  beq 00007dd6 */
    c->pc = RC_ADDR(0x00007dc0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7DD6;

L_7DC2:
    /* 00007dc2   4  clr.w (ffffffe4,A5) */
    c->pc = RC_ADDR(0x00007dc2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x1cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7DC6:
    /* 00007dc6   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00007dc6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_7DCA:
    /* 00007dca   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00007dcau);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_7DCC:
    /* 00007dcc   4  move.l A0,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00007dccu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7DD0:
    /* 00007dd0   6  move.w #1,(fffffa18,A4) */
    c->pc = RC_ADDR(0x00007dd0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7DD6:
    /* 00007dd6   4  movea.l (fffffff2,A5),A0 */
    c->pc = RC_ADDR(0x00007dd6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    c->a[0] = t0;

L_7DDA:
    /* 00007dda   6  adda.l #10,A0 */
    c->pc = RC_ADDR(0x00007ddau);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    c->a[0] += t0;

L_7DE0:
    /* 00007de0   4  move.l A0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00007de0u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7DE4:
    /* 00007de4   2  bra 00007df8 */
    c->pc = RC_ADDR(0x00007de4u);
    rc_step(c, m, 10);
    goto L_7DF8;

L_7DE6:
    /* 00007de6   4  movea.l (fffffff6,A5),A0 */
    c->pc = RC_ADDR(0x00007de6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[0] = t0;

L_7DEA:
    /* 00007dea   4  move.l (A0),(ffffffee,A5) */
    c->pc = RC_ADDR(0x00007deau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7DEE:
    /* 00007dee   4  movea.l (ffffffee,A5),A0 */
    c->pc = RC_ADDR(0x00007deeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x12u));
    c->a[0] = t0;

L_7DF2:
    /* 00007df2   2  addq.l #4,A0 */
    c->pc = RC_ADDR(0x00007df2u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000004u;

L_7DF4:
    /* 00007df4   4  move.l A0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00007df4u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7DF8:
    /* 00007df8   2  bra 00007d8e */
    c->pc = RC_ADDR(0x00007df8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_7D8E;

L_7DFA:
    /* 00007dfa   4  tst.w (fffffa10,A4) */
    c->pc = RC_ADDR(0x00007dfau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5f0u));
    rc_set_nzvc(c, t0, RC_W);

L_7DFE:
    /* 00007dfe   2  bne 00007e06 */
    c->pc = RC_ADDR(0x00007dfeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7E06;

L_7E00:
    /* 00007e00   4  tst.w (fffff864,A4) */
    c->pc = RC_ADDR(0x00007e00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x79cu));
    rc_set_nzvc(c, t0, RC_W);

L_7E04:
    /* 00007e04   2  beq 00007e10 */
    c->pc = RC_ADDR(0x00007e04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7E10;

L_7E06:
    /* 00007e06   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007e06u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7E0A:
    /* 00007e0a   4  jsr (00007a4e) */
    c->pc = RC_ADDR(0x00007e0au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007e0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00007a4eu);
    return;

L_7E0E:
    /* 00007e0e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007e0eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7E10:
    /* 00007e10   4  tst.l (ffffffea,A5) */
    c->pc = RC_ADDR(0x00007e10u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    rc_set_nzvc(c, t0, RC_L);

L_7E14:
    /* 00007e14   2  beq 00007e24 */
    c->pc = RC_ADDR(0x00007e14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7E24;

L_7E16:
    /* 00007e16   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007e16u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7E1A:
    /* 00007e1a   4  move.l (ffffffea,A5),-(A7) */
    c->pc = RC_ADDR(0x00007e1au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7E1E:
    /* 00007e1e   4  jsr (0000791a) */
    c->pc = RC_ADDR(0x00007e1eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007e22u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000791au);
    return;

L_7E22:
    /* 00007e22   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007e22u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7E24:
    /* 00007e24   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00007e24u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7E28:
    /* 00007e28   4  pea (ffffffe9,A5) */
    c->pc = RC_ADDR(0x00007e28u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x17u));

L_7E2C:
    /* 00007e2c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007e2cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7E30:
    /* 00007e30   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00007e30u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7E34:
    /* 00007e34   4  jsr (00007b30) */
    c->pc = RC_ADDR(0x00007e34u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007e38u));
    rc_depth++;
    c->pc = RC_ADDR(0x00007b30u);
    return;

L_7E38:
    /* 00007e38   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00007e38u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_7E3C:
    /* 00007e3c   2  unlk A5 */
    c->pc = RC_ADDR(0x00007e3cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7E3E:
    /* 00007e3e   2  rts */
    c->pc = RC_ADDR(0x00007e3eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
