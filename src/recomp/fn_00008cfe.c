/* fn_00008cfe - 316 byte(s), 92 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00008cfe(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00008cfeu): goto L_8CFE;
    case RC_ADDR(0x00008d02u): goto L_8D02;
    case RC_ADDR(0x00008d06u): goto L_8D06;
    case RC_ADDR(0x00008d0au): goto L_8D0A;
    case RC_ADDR(0x00008d0eu): goto L_8D0E;
    case RC_ADDR(0x00008d14u): goto L_8D14;
    case RC_ADDR(0x00008d16u): goto L_8D16;
    case RC_ADDR(0x00008d18u): goto L_8D18;
    case RC_ADDR(0x00008d1cu): goto L_8D1C;
    case RC_ADDR(0x00008d1eu): goto L_8D1E;
    case RC_ADDR(0x00008d22u): goto L_8D22;
    case RC_ADDR(0x00008d24u): goto L_8D24;
    case RC_ADDR(0x00008d28u): goto L_8D28;
    case RC_ADDR(0x00008d2au): goto L_8D2A;
    case RC_ADDR(0x00008d2eu): goto L_8D2E;
    case RC_ADDR(0x00008d34u): goto L_8D34;
    case RC_ADDR(0x00008d38u): goto L_8D38;
    case RC_ADDR(0x00008d3cu): goto L_8D3C;
    case RC_ADDR(0x00008d40u): goto L_8D40;
    case RC_ADDR(0x00008d42u): goto L_8D42;
    case RC_ADDR(0x00008d46u): goto L_8D46;
    case RC_ADDR(0x00008d4au): goto L_8D4A;
    case RC_ADDR(0x00008d50u): goto L_8D50;
    case RC_ADDR(0x00008d52u): goto L_8D52;
    case RC_ADDR(0x00008d58u): goto L_8D58;
    case RC_ADDR(0x00008d5au): goto L_8D5A;
    case RC_ADDR(0x00008d5eu): goto L_8D5E;
    case RC_ADDR(0x00008d60u): goto L_8D60;
    case RC_ADDR(0x00008d64u): goto L_8D64;
    case RC_ADDR(0x00008d66u): goto L_8D66;
    case RC_ADDR(0x00008d68u): goto L_8D68;
    case RC_ADDR(0x00008d6cu): goto L_8D6C;
    case RC_ADDR(0x00008d6eu): goto L_8D6E;
    case RC_ADDR(0x00008d72u): goto L_8D72;
    case RC_ADDR(0x00008d74u): goto L_8D74;
    case RC_ADDR(0x00008d78u): goto L_8D78;
    case RC_ADDR(0x00008d7au): goto L_8D7A;
    case RC_ADDR(0x00008d7eu): goto L_8D7E;
    case RC_ADDR(0x00008d82u): goto L_8D82;
    case RC_ADDR(0x00008d84u): goto L_8D84;
    case RC_ADDR(0x00008d88u): goto L_8D88;
    case RC_ADDR(0x00008d8au): goto L_8D8A;
    case RC_ADDR(0x00008d8eu): goto L_8D8E;
    case RC_ADDR(0x00008d92u): goto L_8D92;
    case RC_ADDR(0x00008d94u): goto L_8D94;
    case RC_ADDR(0x00008d98u): goto L_8D98;
    case RC_ADDR(0x00008d9au): goto L_8D9A;
    case RC_ADDR(0x00008d9eu): goto L_8D9E;
    case RC_ADDR(0x00008da0u): goto L_8DA0;
    case RC_ADDR(0x00008da4u): goto L_8DA4;
    case RC_ADDR(0x00008da8u): goto L_8DA8;
    case RC_ADDR(0x00008daau): goto L_8DAA;
    case RC_ADDR(0x00008daeu): goto L_8DAE;
    case RC_ADDR(0x00008db2u): goto L_8DB2;
    case RC_ADDR(0x00008db4u): goto L_8DB4;
    case RC_ADDR(0x00008db8u): goto L_8DB8;
    case RC_ADDR(0x00008dbau): goto L_8DBA;
    case RC_ADDR(0x00008dbeu): goto L_8DBE;
    case RC_ADDR(0x00008dc2u): goto L_8DC2;
    case RC_ADDR(0x00008dc6u): goto L_8DC6;
    case RC_ADDR(0x00008dcau): goto L_8DCA;
    case RC_ADDR(0x00008dceu): goto L_8DCE;
    case RC_ADDR(0x00008dd2u): goto L_8DD2;
    case RC_ADDR(0x00008dd6u): goto L_8DD6;
    case RC_ADDR(0x00008ddau): goto L_8DDA;
    case RC_ADDR(0x00008ddeu): goto L_8DDE;
    case RC_ADDR(0x00008de2u): goto L_8DE2;
    case RC_ADDR(0x00008de6u): goto L_8DE6;
    case RC_ADDR(0x00008de8u): goto L_8DE8;
    case RC_ADDR(0x00008decu): goto L_8DEC;
    case RC_ADDR(0x00008df0u): goto L_8DF0;
    case RC_ADDR(0x00008df2u): goto L_8DF2;
    case RC_ADDR(0x00008df6u): goto L_8DF6;
    case RC_ADDR(0x00008dfau): goto L_8DFA;
    case RC_ADDR(0x00008dfcu): goto L_8DFC;
    case RC_ADDR(0x00008e00u): goto L_8E00;
    case RC_ADDR(0x00008e02u): goto L_8E02;
    case RC_ADDR(0x00008e06u): goto L_8E06;
    case RC_ADDR(0x00008e08u): goto L_8E08;
    case RC_ADDR(0x00008e0cu): goto L_8E0C;
    case RC_ADDR(0x00008e10u): goto L_8E10;
    case RC_ADDR(0x00008e12u): goto L_8E12;
    case RC_ADDR(0x00008e16u): goto L_8E16;
    case RC_ADDR(0x00008e18u): goto L_8E18;
    case RC_ADDR(0x00008e1au): goto L_8E1A;
    case RC_ADDR(0x00008e1eu): goto L_8E1E;
    case RC_ADDR(0x00008e22u): goto L_8E22;
    case RC_ADDR(0x00008e26u): goto L_8E26;
    case RC_ADDR(0x00008e2cu): goto L_8E2C;
    case RC_ADDR(0x00008e30u): goto L_8E30;
    case RC_ADDR(0x00008e36u): goto L_8E36;
    case RC_ADDR(0x00008e38u): goto L_8E38;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_8CFE:
    /* 00008cfe   4  link.w A5,#fffffff6 */
    c->pc = RC_ADDR(0x00008cfeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xau;

L_8D02:
    /* 00008d02   4  tst.w (ffffcb20,A4) */
    c->pc = RC_ADDR(0x00008d02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34e0u));
    rc_set_nzvc(c, t0, RC_W);

L_8D06:
    /* 00008d06   4  beq 00008e36 */
    c->pc = RC_ADDR(0x00008d06u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_8E36;

L_8D0A:
    /* 00008d0a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00008d0au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8D0E:
    /* 00008d0e   6  cmpi.w #8,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00008d0eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_8D14:
    /* 00008d14   2  bne 00008d38 */
    c->pc = RC_ADDR(0x00008d14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_8D38;

L_8D16:
    /* 00008d16   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00008d16u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_8D18:
    /* 00008d18   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00008d18u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D1C:
    /* 00008d1c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00008d1cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_8D1E:
    /* 00008d1e   4  lea (fffff026,A4),A0 */
    c->pc = RC_ADDR(0x00008d1eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xfdau);

L_8D22:
    /* 00008d22   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00008d22u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_8D24:
    /* 00008d24   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00008d24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D28:
    /* 00008d28   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00008d28u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_8D2A:
    /* 00008d2a   4  lea (fffffece,A4),A1 */
    c->pc = RC_ADDR(0x00008d2au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] - 0x132u);

L_8D2E:
    /* 00008d2e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00008d2eu);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D34:
    /* 00008d34   4  bra 00008e22 */
    c->pc = RC_ADDR(0x00008d34u);
    rc_step(c, m, 10);
    goto L_8E22;

L_8D38:
    /* 00008d38   4  move.w (ffff83cc,A4),D0 */
    c->pc = RC_ADDR(0x00008d38u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c34u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D3C:
    /* 00008d3c   4  lea (ffff83e0,A4),A0 */
    c->pc = RC_ADDR(0x00008d3cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7c20u);

L_8D40:
    /* 00008d40   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00008d40u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_8D42:
    /* 00008d42   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00008d42u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_8D46:
    /* 00008d46   4  move.w D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00008d46u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D4A:
    /* 00008d4a   6  cmpi.w #1c,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00008d4au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000001cu);

L_8D50:
    /* 00008d50   2  beq 00008d5a */
    c->pc = RC_ADDR(0x00008d50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_8D5A;

L_8D52:
    /* 00008d52   6  cmpi.w #1e,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00008d52u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000001eu);

L_8D58:
    /* 00008d58   2  bne 00008d6e */
    c->pc = RC_ADDR(0x00008d58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_8D6E;

L_8D5A:
    /* 00008d5a   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00008d5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_8D5E:
    /* 00008d5e   2  beq 00008d6e */
    c->pc = RC_ADDR(0x00008d5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_8D6E;

L_8D60:
    /* 00008d60   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00008d60u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D64:
    /* 00008d64   2  addq.w #2,D0 */
    c->pc = RC_ADDR(0x00008d64u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_8D66:
    /* 00008d66   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x00008d66u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_8D68:
    /* 00008d68   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00008d68u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D6C:
    /* 00008d6c   2  bra 00008d82 */
    c->pc = RC_ADDR(0x00008d6cu);
    rc_step(c, m, 10);
    goto L_8D82;

L_8D6E:
    /* 00008d6e   4  tst.w (ffff843e,A4) */
    c->pc = RC_ADDR(0x00008d6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7bc2u));
    rc_set_nzvc(c, t0, RC_W);

L_8D72:
    /* 00008d72   2  bne 00008d82 */
    c->pc = RC_ADDR(0x00008d72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_8D82;

L_8D74:
    /* 00008d74   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00008d74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D78:
    /* 00008d78   2  ext.l D0 */
    c->pc = RC_ADDR(0x00008d78u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_8D7A:
    /* 00008d7a   4  divs.w #2,D0 */
    c->pc = RC_ADDR(0x00008d7au);
    rc_step(c, m, 162);
    t0 = 0x00000002u;
    rc_divs(c, m, 0, t0);

L_8D7E:
    /* 00008d7e   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00008d7eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D82:
    /* 00008d82   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00008d82u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_8D84:
    /* 00008d84   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00008d84u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D88:
    /* 00008d88   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00008d88u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_8D8A:
    /* 00008d8a   4  lea (fffff026,A4),A0 */
    c->pc = RC_ADDR(0x00008d8au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xfdau);

L_8D8E:
    /* 00008d8e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00008d8eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D92:
    /* 00008d92   2  lsr.w #8,D1 */
    c->pc = RC_ADDR(0x00008d92u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_8D94:
    /* 00008d94   4  move.w D1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00008d94u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D98:
    /* 00008d98   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00008d98u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_8D9A:
    /* 00008d9a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00008d9au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8D9E:
    /* 00008d9e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00008d9eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_8DA0:
    /* 00008da0   4  lea (fffff026,A4),A0 */
    c->pc = RC_ADDR(0x00008da0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xfdau);

L_8DA4:
    /* 00008da4   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00008da4u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8DA8:
    /* 00008da8   2  lsr.w #4,D1 */
    c->pc = RC_ADDR(0x00008da8u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 1, RC_W), RC_W));

L_8DAA:
    /* 00008daa   4  and.w #f,D1 */
    c->pc = RC_ADDR(0x00008daau);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_8DAE:
    /* 00008dae   4  move.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00008daeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8DB2:
    /* 00008db2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00008db2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_8DB4:
    /* 00008db4   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00008db4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8DB8:
    /* 00008db8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00008db8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_8DBA:
    /* 00008dba   4  lea (fffff026,A4),A0 */
    c->pc = RC_ADDR(0x00008dbau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0xfdau);

L_8DBE:
    /* 00008dbe   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00008dbeu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8DC2:
    /* 00008dc2   4  and.w #f,D1 */
    c->pc = RC_ADDR(0x00008dc2u);
    rc_step(c, m, 10);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 1, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 1, RC_W, t2);

L_8DC6:
    /* 00008dc6   4  move.w D1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00008dc6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8DCA:
    /* 00008dca   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00008dcau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8DCE:
    /* 00008dce   4  sub.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00008dceu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_8DD2:
    /* 00008dd2   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00008dd2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8DD6:
    /* 00008dd6   4  sub.w D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00008dd6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_8DDA:
    /* 00008dda   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00008ddau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8DDE:
    /* 00008dde   4  sub.w D0,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00008ddeu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_8DE2:
    /* 00008de2   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00008de2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_8DE6:
    /* 00008de6   2  bge 00008dec */
    c->pc = RC_ADDR(0x00008de6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_8DEC;

L_8DE8:
    /* 00008de8   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00008de8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8DEC:
    /* 00008dec   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00008decu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_8DF0:
    /* 00008df0   2  bge 00008df6 */
    c->pc = RC_ADDR(0x00008df0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_8DF6;

L_8DF2:
    /* 00008df2   4  clr.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00008df2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8DF6:
    /* 00008df6   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00008df6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_8DFA:
    /* 00008dfa   2  bge 00008e00 */
    c->pc = RC_ADDR(0x00008dfau);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_8E00;

L_8DFC:
    /* 00008dfc   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00008dfcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_8E00:
    /* 00008e00   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00008e00u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_8E02:
    /* 00008e02   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00008e02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8E06:
    /* 00008e06   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00008e06u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_8E08:
    /* 00008e08   4  lea (fffffece,A4),A0 */
    c->pc = RC_ADDR(0x00008e08u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x132u);

L_8E0C:
    /* 00008e0c   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x00008e0cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8E10:
    /* 00008e10   2  asl.w #8,D1 */
    c->pc = RC_ADDR(0x00008e10u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000008u, rc_d_get(c, 1, RC_W), RC_W));

L_8E12:
    /* 00008e12   4  move.w (fffffff8,A5),D2 */
    c->pc = RC_ADDR(0x00008e12u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_8E16:
    /* 00008e16   2  asl.w #4,D2 */
    c->pc = RC_ADDR(0x00008e16u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W));

L_8E18:
    /* 00008e18   2  add.w D2,D1 */
    c->pc = RC_ADDR(0x00008e18u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_8E1A:
    /* 00008e1a   4  add.w (fffffff6,A5),D1 */
    c->pc = RC_ADDR(0x00008e1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_8E1E:
    /* 00008e1e   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00008e1eu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8E22:
    /* 00008e22   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00008e22u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_8E26:
    /* 00008e26   6  cmpi.w #20,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00008e26u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_8E2C:
    /* 00008e2c   4  bcs 00008d0e */
    c->pc = RC_ADDR(0x00008e2cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_8D0E; }

L_8E30:
    /* 00008e30   6  move.w #1,(ffffcb1e,A4) */
    c->pc = RC_ADDR(0x00008e30u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x34e2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_8E36:
    /* 00008e36   2  unlk A5 */
    c->pc = RC_ADDR(0x00008e36u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_8E38:
    /* 00008e38   2  rts */
    c->pc = RC_ADDR(0x00008e38u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
