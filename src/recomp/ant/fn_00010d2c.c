/* fn_00010d2c - 172 byte(s), 56 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010d2c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00010d2cu): goto L_10D2C;
    case RC_ADDR(0x00010d30u): goto L_10D30;
    case RC_ADDR(0x00010d32u): goto L_10D32;
    case RC_ADDR(0x00010d36u): goto L_10D36;
    case RC_ADDR(0x00010d38u): goto L_10D38;
    case RC_ADDR(0x00010d3cu): goto L_10D3C;
    case RC_ADDR(0x00010d40u): goto L_10D40;
    case RC_ADDR(0x00010d42u): goto L_10D42;
    case RC_ADDR(0x00010d46u): goto L_10D46;
    case RC_ADDR(0x00010d4au): goto L_10D4A;
    case RC_ADDR(0x00010d4cu): goto L_10D4C;
    case RC_ADDR(0x00010d4eu): goto L_10D4E;
    case RC_ADDR(0x00010d52u): goto L_10D52;
    case RC_ADDR(0x00010d54u): goto L_10D54;
    case RC_ADDR(0x00010d56u): goto L_10D56;
    case RC_ADDR(0x00010d58u): goto L_10D58;
    case RC_ADDR(0x00010d5au): goto L_10D5A;
    case RC_ADDR(0x00010d5cu): goto L_10D5C;
    case RC_ADDR(0x00010d60u): goto L_10D60;
    case RC_ADDR(0x00010d64u): goto L_10D64;
    case RC_ADDR(0x00010d66u): goto L_10D66;
    case RC_ADDR(0x00010d6au): goto L_10D6A;
    case RC_ADDR(0x00010d6cu): goto L_10D6C;
    case RC_ADDR(0x00010d6eu): goto L_10D6E;
    case RC_ADDR(0x00010d70u): goto L_10D70;
    case RC_ADDR(0x00010d74u): goto L_10D74;
    case RC_ADDR(0x00010d78u): goto L_10D78;
    case RC_ADDR(0x00010d7cu): goto L_10D7C;
    case RC_ADDR(0x00010d7eu): goto L_10D7E;
    case RC_ADDR(0x00010d82u): goto L_10D82;
    case RC_ADDR(0x00010d84u): goto L_10D84;
    case RC_ADDR(0x00010d86u): goto L_10D86;
    case RC_ADDR(0x00010d88u): goto L_10D88;
    case RC_ADDR(0x00010d8cu): goto L_10D8C;
    case RC_ADDR(0x00010d8eu): goto L_10D8E;
    case RC_ADDR(0x00010d92u): goto L_10D92;
    case RC_ADDR(0x00010d94u): goto L_10D94;
    case RC_ADDR(0x00010d98u): goto L_10D98;
    case RC_ADDR(0x00010d9au): goto L_10D9A;
    case RC_ADDR(0x00010da0u): goto L_10DA0;
    case RC_ADDR(0x00010da2u): goto L_10DA2;
    case RC_ADDR(0x00010da6u): goto L_10DA6;
    case RC_ADDR(0x00010daau): goto L_10DAA;
    case RC_ADDR(0x00010daeu): goto L_10DAE;
    case RC_ADDR(0x00010db0u): goto L_10DB0;
    case RC_ADDR(0x00010db2u): goto L_10DB2;
    case RC_ADDR(0x00010db6u): goto L_10DB6;
    case RC_ADDR(0x00010dbau): goto L_10DBA;
    case RC_ADDR(0x00010dbeu): goto L_10DBE;
    case RC_ADDR(0x00010dc2u): goto L_10DC2;
    case RC_ADDR(0x00010dc6u): goto L_10DC6;
    case RC_ADDR(0x00010dccu): goto L_10DCC;
    case RC_ADDR(0x00010dceu): goto L_10DCE;
    case RC_ADDR(0x00010dd2u): goto L_10DD2;
    case RC_ADDR(0x00010dd4u): goto L_10DD4;
    case RC_ADDR(0x00010dd6u): goto L_10DD6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10D2C:
    /* 00010d2c   4  movem.l { D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 },-(SP) */
    c->pc = RC_ADDR(0x00010d2cu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[4]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[1]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
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
    c->a[7] = t3;

L_10D30:
    /* 00010d30   2  move.l A0,D3 */
    c->pc = RC_ADDR(0x00010d30u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 3, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_10D32:
    /* 00010d32   4  beq 00010dd4 */
    c->pc = RC_ADDR(0x00010d32u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10DD4;

L_10D36:
    /* 00010d36   2  movea.l D3,A0 */
    c->pc = RC_ADDR(0x00010d36u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 3, RC_L);
    c->a[0] = t0;

L_10D38:
    /* 00010d38   4  movea.l (6,A6),A5 */
    c->pc = RC_ADDR(0x00010d38u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x6u));
    c->a[5] = t0;

L_10D3C:
    /* 00010d3c   4  lea (3e,A6),A1 */
    c->pc = RC_ADDR(0x00010d3cu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[6] + 0x3eu);

L_10D40:
    /* 00010d40   2  ext.w D0 */
    c->pc = RC_ADDR(0x00010d40u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_10D42:
    /* 00010d42   4  bpl 00010d92 */
    c->pc = RC_ADDR(0x00010d42u);
    rc_step(c, m, 10);
    if (rc_cond(c, 10)) goto L_10D92;

L_10D46:
    /* 00010d46   4  move.b #0,D5 */
    c->pc = RC_ADDR(0x00010d46u);
    rc_step(c, m, 8);
    t0 = 0x00000000u;
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10D4A:
    /* 00010d4a   2  moveq #4,D7 */
    c->pc = RC_ADDR(0x00010d4au);
    rc_step(c, m, 4);
    c->d[7] = 0x00000004u;
    rc_set_nzvc(c, c->d[7], RC_L);

L_10D4C:
    /* 00010d4c   2  move.w D7,D6 */
    c->pc = RC_ADDR(0x00010d4cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D4E:
    /* 00010d4e   4  move.w (36,A6),D0 */
    c->pc = RC_ADDR(0x00010d4eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x36u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D52:
    /* 00010d52   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00010d52u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_10D54:
    /* 00010d54   2  cmp.w D7,D0 */
    c->pc = RC_ADDR(0x00010d54u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_10D56:
    /* 00010d56   2  bcs 00010d5a */
    c->pc = RC_ADDR(0x00010d56u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) goto L_10D5A;

L_10D58:
    /* 00010d58   2  clr.w D0 */
    c->pc = RC_ADDR(0x00010d58u);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10D5A:
    /* 00010d5a   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x00010d5au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D5C:
    /* 00010d5c   4  mulu.w #16,D3 */
    c->pc = RC_ADDR(0x00010d5cu);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_mulu(c, 3, t0);

L_10D60:
    /* 00010d60   4  tst.b (0,A1,D3.w) */
    c->pc = RC_ADDR(0x00010d60u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd8(c, m, (c->a[1] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_10D64:
    /* 00010d64   2  bne 00010d6c */
    c->pc = RC_ADDR(0x00010d64u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10D6C;

L_10D66:
    /* 00010d66   4  cmp.b (1,A1,D3.w),D5 */
    c->pc = RC_ADDR(0x00010d66u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u + t4));
    t1 = rc_d_get(c, 5, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_10D6A:
    /* 00010d6a   2  beq 00010d7e */
    c->pc = RC_ADDR(0x00010d6au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10D7E;

L_10D6C:
    /* 00010d6c   2  subq.w #1,D6 */
    c->pc = RC_ADDR(0x00010d6cu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_10D6E:
    /* 00010d6e   2  bne 00010d52 */
    c->pc = RC_ADDR(0x00010d6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_10D52; }

L_10D70:
    /* 00010d70   4  cmpi.b #0,D5 */
    c->pc = RC_ADDR(0x00010d70u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 5, RC_B);
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_10D74:
    /* 00010d74   4  bne 00010dd4 */
    c->pc = RC_ADDR(0x00010d74u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_10DD4;

L_10D78:
    /* 00010d78   4  move.b #2,D5 */
    c->pc = RC_ADDR(0x00010d78u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    rc_d_set(c, 5, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10D7C:
    /* 00010d7c   2  bra 00010d4c */
    c->pc = RC_ADDR(0x00010d7cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_10D4C;

L_10D7E:
    /* 00010d7e   4  tst.w (a,A6) */
    c->pc = RC_ADDR(0x00010d7eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_10D82:
    /* 00010d82   2  beq 00010d8e */
    c->pc = RC_ADDR(0x00010d82u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10D8E;

L_10D84:
    /* 00010d84   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x00010d84u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D86:
    /* 00010d86   2  asl.w #2,D3 */
    c->pc = RC_ADDR(0x00010d86u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 3, RC_W), RC_W));

L_10D88:
    /* 00010d88   4  tst.l (26,A6,D3.w) */
    c->pc = RC_ADDR(0x00010d88u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[3], RC_W);
    t0 = rc_rd32(c, m, (c->a[6] + 0x26u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_10D8C:
    /* 00010d8c   2  bne 00010d6c */
    c->pc = RC_ADDR(0x00010d8cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_10D6C; }

L_10D8E:
    /* 00010d8e   4  move.w D0,(36,A6) */
    c->pc = RC_ADDR(0x00010d8eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[6] + 0x36u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D92:
    /* 00010d92   2  move.w D0,D3 */
    c->pc = RC_ADDR(0x00010d92u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_10D94:
    /* 00010d94   4  mulu.w #16,D3 */
    c->pc = RC_ADDR(0x00010d94u);
    rc_step(c, m, 42);
    t0 = 0x00000016u;
    rc_mulu(c, 3, t0);

L_10D98:
    /* 00010d98   2  adda.w D3,A1 */
    c->pc = RC_ADDR(0x00010d98u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 3, RC_W);
    c->a[1] += rc_ext(t0, RC_W);

L_10D9A:
    /* 00010d9a   6  cmpi.b #0,(1,A1) */
    c->pc = RC_ADDR(0x00010d9au);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[1] + 0x1u));
    rc_cmp(c, RC_B, t0, 0x00000000u);

L_10DA0:
    /* 00010da0   2  beq 00010db6 */
    c->pc = RC_ADDR(0x00010da0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10DB6;

L_10DA2:
    /* 00010da2   4  movea.l (0,A0),A2 */
    c->pc = RC_ADDR(0x00010da2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u));
    c->a[2] = t0;

L_10DA6:
    /* 00010da6   4  movea.l (4,A1),A3 */
    c->pc = RC_ADDR(0x00010da6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[3] = t0;

L_10DAA:
    /* 00010daa   4  movea.l (0,A3),A3 */
    c->pc = RC_ADDR(0x00010daau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0x0u));
    c->a[3] = t0;

L_10DAE:
    /* 00010dae   2  cmpa.l A3,A2 */
    c->pc = RC_ADDR(0x00010daeu);
    rc_step(c, m, 6);
    t0 = rc_a_get(c, 3, RC_L);
    rc_cmp(c, RC_L, c->a[2], t0);

L_10DB0:
    /* 00010db0   2  beq 00010db6 */
    c->pc = RC_ADDR(0x00010db0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10DB6;

L_10DB2:
    /* 00010db2   4  bsr 00010e24 */
    c->pc = RC_ADDR(0x00010db2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010db6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010e24u);
    return;

L_10DB6:
    /* 00010db6   4  move.l A0,(4,A1) */
    c->pc = RC_ADDR(0x00010db6u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_10DBA:
    /* 00010dba   4  move.b D1,(3,A1) */
    c->pc = RC_ADDR(0x00010dbau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_B);
    rc_wr8(c, m, (c->a[1] + 0x3u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10DBE:
    /* 00010dbe   4  andi.w #ff,D2 */
    c->pc = RC_ADDR(0x00010dbeu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 2, RC_W);
    t2 = t1 & 0x000000ffu;
    rc_d_set(c, 2, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_10DC2:
    /* 00010dc2   4  move.w D2,(8,A1) */
    c->pc = RC_ADDR(0x00010dc2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, (c->a[1] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10DC6:
    /* 00010dc6   6  move.b #1,(0,A1) */
    c->pc = RC_ADDR(0x00010dc6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr8(c, m, (c->a[1] + 0x0u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_10DCC:
    /* 00010dcc   2  ext.l D0 */
    c->pc = RC_ADDR(0x00010dccu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_10DCE:
    /* 00010dce   4  movem.l (SP)+,{ D1 D2 D3 D4 D5 D6 D7 A0 A1 A2 A3 A4 A5 A6 } */
    c->pc = RC_ADDR(0x00010dceu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
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
    c->a[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[5] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[6] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_10DD2:
    /* 00010dd2   2  rts */
    c->pc = RC_ADDR(0x00010dd2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_10DD4:
    /* 00010dd4   2  moveq #ffffffff,D0 */
    c->pc = RC_ADDR(0x00010dd4u);
    rc_step(c, m, 4);
    c->d[0] = 0xffffffffu;
    rc_set_nzvc(c, c->d[0], RC_L);

L_10DD6:
    /* 00010dd6   2  bra 00010dce */
    c->pc = RC_ADDR(0x00010dd6u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_10DCE;

}
