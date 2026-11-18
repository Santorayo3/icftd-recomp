/* fn_00000d9c - 184 byte(s), 49 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00000d9c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00000d9cu): goto L_D9C;
    case RC_ADDR(0x00000da0u): goto L_DA0;
    case RC_ADDR(0x00000da4u): goto L_DA4;
    case RC_ADDR(0x00000da8u): goto L_DA8;
    case RC_ADDR(0x00000dacu): goto L_DAC;
    case RC_ADDR(0x00000daeu): goto L_DAE;
    case RC_ADDR(0x00000db2u): goto L_DB2;
    case RC_ADDR(0x00000db6u): goto L_DB6;
    case RC_ADDR(0x00000dbau): goto L_DBA;
    case RC_ADDR(0x00000dbeu): goto L_DBE;
    case RC_ADDR(0x00000dc0u): goto L_DC0;
    case RC_ADDR(0x00000dc4u): goto L_DC4;
    case RC_ADDR(0x00000dc8u): goto L_DC8;
    case RC_ADDR(0x00000dccu): goto L_DCC;
    case RC_ADDR(0x00000dd0u): goto L_DD0;
    case RC_ADDR(0x00000dd4u): goto L_DD4;
    case RC_ADDR(0x00000dd8u): goto L_DD8;
    case RC_ADDR(0x00000ddau): goto L_DDA;
    case RC_ADDR(0x00000ddeu): goto L_DDE;
    case RC_ADDR(0x00000de2u): goto L_DE2;
    case RC_ADDR(0x00000de6u): goto L_DE6;
    case RC_ADDR(0x00000deau): goto L_DEA;
    case RC_ADDR(0x00000deeu): goto L_DEE;
    case RC_ADDR(0x00000df2u): goto L_DF2;
    case RC_ADDR(0x00000df4u): goto L_DF4;
    case RC_ADDR(0x00000df8u): goto L_DF8;
    case RC_ADDR(0x00000dfcu): goto L_DFC;
    case RC_ADDR(0x00000e00u): goto L_E00;
    case RC_ADDR(0x00000e04u): goto L_E04;
    case RC_ADDR(0x00000e08u): goto L_E08;
    case RC_ADDR(0x00000e0cu): goto L_E0C;
    case RC_ADDR(0x00000e0eu): goto L_E0E;
    case RC_ADDR(0x00000e12u): goto L_E12;
    case RC_ADDR(0x00000e16u): goto L_E16;
    case RC_ADDR(0x00000e1au): goto L_E1A;
    case RC_ADDR(0x00000e1eu): goto L_E1E;
    case RC_ADDR(0x00000e22u): goto L_E22;
    case RC_ADDR(0x00000e26u): goto L_E26;
    case RC_ADDR(0x00000e28u): goto L_E28;
    case RC_ADDR(0x00000e2cu): goto L_E2C;
    case RC_ADDR(0x00000e30u): goto L_E30;
    case RC_ADDR(0x00000e34u): goto L_E34;
    case RC_ADDR(0x00000e3au): goto L_E3A;
    case RC_ADDR(0x00000e3eu): goto L_E3E;
    case RC_ADDR(0x00000e42u): goto L_E42;
    case RC_ADDR(0x00000e48u): goto L_E48;
    case RC_ADDR(0x00000e4cu): goto L_E4C;
    case RC_ADDR(0x00000e50u): goto L_E50;
    case RC_ADDR(0x00000e52u): goto L_E52;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D9C:
    /* 00000d9c   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00000d9cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_DA0:
    /* 00000da0   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00000da0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DA4:
    /* 00000da4   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00000da4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DA8:
    /* 00000da8   4  tst.w (ffff83f6,A4) */
    c->pc = RC_ADDR(0x00000da8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c0au));
    rc_set_nzvc(c, t0, RC_W);

L_DAC:
    /* 00000dac   2  beq 00000de2 */
    c->pc = RC_ADDR(0x00000dacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_DE2;

L_DAE:
    /* 00000dae   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000daeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB2:
    /* 00000db2   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x00000db2u);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_DB6:
    /* 00000db6   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00000db6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBA:
    /* 00000dba   4  muls.w #e,D1 */
    c->pc = RC_ADDR(0x00000dbau);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_muls(c, 1, t0);

L_DBE:
    /* 00000dbe   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00000dbeu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_DC0:
    /* 00000dc0   4  lea (ffffd738,A4),A0 */
    c->pc = RC_ADDR(0x00000dc0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28c8u);

L_DC4:
    /* 00000dc4   4  clr.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00000dc4u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_DC8:
    /* 00000dc8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000dc8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCC:
    /* 00000dcc   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x00000dccu);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_DD0:
    /* 00000dd0   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00000dd0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD4:
    /* 00000dd4   4  muls.w #e,D1 */
    c->pc = RC_ADDR(0x00000dd4u);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_muls(c, 1, t0);

L_DD8:
    /* 00000dd8   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00000dd8u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_DDA:
    /* 00000dda   4  lea (ffffd744,A4),A0 */
    c->pc = RC_ADDR(0x00000ddau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28bcu);

L_DDE:
    /* 00000dde   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00000ddeu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_DE2:
    /* 00000de2   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000de2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DE6:
    /* 00000de6   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x00000de6u);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_DEA:
    /* 00000dea   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00000deau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DEE:
    /* 00000dee   4  muls.w #e,D1 */
    c->pc = RC_ADDR(0x00000deeu);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_muls(c, 1, t0);

L_DF2:
    /* 00000df2   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00000df2u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_DF4:
    /* 00000df4   4  lea (ffffd73c,A4),A0 */
    c->pc = RC_ADDR(0x00000df4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28c4u);

L_DF8:
    /* 00000df8   4  clr.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00000df8u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_DFC:
    /* 00000dfc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000dfcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E00:
    /* 00000e00   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x00000e00u);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_E04:
    /* 00000e04   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00000e04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E08:
    /* 00000e08   4  muls.w #e,D1 */
    c->pc = RC_ADDR(0x00000e08u);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_muls(c, 1, t0);

L_E0C:
    /* 00000e0c   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00000e0cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_E0E:
    /* 00000e0e   4  lea (ffffd740,A4),A0 */
    c->pc = RC_ADDR(0x00000e0eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28c0u);

L_E12:
    /* 00000e12   4  clr.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00000e12u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_E16:
    /* 00000e16   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00000e16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E1A:
    /* 00000e1a   4  muls.w #222,D0 */
    c->pc = RC_ADDR(0x00000e1au);
    rc_step(c, m, 42);
    t0 = 0x00000222u;
    rc_muls(c, 0, t0);

L_E1E:
    /* 00000e1e   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00000e1eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E22:
    /* 00000e22   4  muls.w #e,D1 */
    c->pc = RC_ADDR(0x00000e22u);
    rc_step(c, m, 42);
    t0 = 0x0000000eu;
    rc_muls(c, 1, t0);

L_E26:
    /* 00000e26   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00000e26u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_E28:
    /* 00000e28   4  lea (ffffd745,A4),A0 */
    c->pc = RC_ADDR(0x00000e28u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x28bbu);

L_E2C:
    /* 00000e2c   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00000e2cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_E30:
    /* 00000e30   4  addq.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000e30u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_E34:
    /* 00000e34   6  cmpi.w #27,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000e34u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_E3A:
    /* 00000e3a   4  blt 00000da8 */
    c->pc = RC_ADDR(0x00000e3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_DA8; }

L_E3E:
    /* 00000e3e   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00000e3eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_E42:
    /* 00000e42   6  cmpi.w #f,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00000e42u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_E48:
    /* 00000e48   4  blt 00000da4 */
    c->pc = RC_ADDR(0x00000e48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_DA4; }

L_E4C:
    /* 00000e4c   4  clr.w (ffff83f6,A4) */
    c->pc = RC_ADDR(0x00000e4cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7c0au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E50:
    /* 00000e50   2  unlk A5 */
    c->pc = RC_ADDR(0x00000e50u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_E52:
    /* 00000e52   2  rts */
    c->pc = RC_ADDR(0x00000e52u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
