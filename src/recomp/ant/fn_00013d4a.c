/* fn_00013d4a - 204 byte(s), 58 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013d4a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00013d4au): goto L_13D4A;
    case RC_ADDR(0x00013d4eu): goto L_13D4E;
    case RC_ADDR(0x00013d52u): goto L_13D52;
    case RC_ADDR(0x00013d54u): goto L_13D54;
    case RC_ADDR(0x00013d56u): goto L_13D56;
    case RC_ADDR(0x00013d5au): goto L_13D5A;
    case RC_ADDR(0x00013d5eu): goto L_13D5E;
    case RC_ADDR(0x00013d62u): goto L_13D62;
    case RC_ADDR(0x00013d66u): goto L_13D66;
    case RC_ADDR(0x00013d68u): goto L_13D68;
    case RC_ADDR(0x00013d6au): goto L_13D6A;
    case RC_ADDR(0x00013d6eu): goto L_13D6E;
    case RC_ADDR(0x00013d74u): goto L_13D74;
    case RC_ADDR(0x00013d78u): goto L_13D78;
    case RC_ADDR(0x00013d7au): goto L_13D7A;
    case RC_ADDR(0x00013d7cu): goto L_13D7C;
    case RC_ADDR(0x00013d80u): goto L_13D80;
    case RC_ADDR(0x00013d86u): goto L_13D86;
    case RC_ADDR(0x00013d8au): goto L_13D8A;
    case RC_ADDR(0x00013d8cu): goto L_13D8C;
    case RC_ADDR(0x00013d8eu): goto L_13D8E;
    case RC_ADDR(0x00013d92u): goto L_13D92;
    case RC_ADDR(0x00013d96u): goto L_13D96;
    case RC_ADDR(0x00013d9au): goto L_13D9A;
    case RC_ADDR(0x00013d9cu): goto L_13D9C;
    case RC_ADDR(0x00013d9eu): goto L_13D9E;
    case RC_ADDR(0x00013da2u): goto L_13DA2;
    case RC_ADDR(0x00013da8u): goto L_13DA8;
    case RC_ADDR(0x00013dacu): goto L_13DAC;
    case RC_ADDR(0x00013daeu): goto L_13DAE;
    case RC_ADDR(0x00013db0u): goto L_13DB0;
    case RC_ADDR(0x00013db4u): goto L_13DB4;
    case RC_ADDR(0x00013dbau): goto L_13DBA;
    case RC_ADDR(0x00013dbeu): goto L_13DBE;
    case RC_ADDR(0x00013dc0u): goto L_13DC0;
    case RC_ADDR(0x00013dc2u): goto L_13DC2;
    case RC_ADDR(0x00013dc6u): goto L_13DC6;
    case RC_ADDR(0x00013dccu): goto L_13DCC;
    case RC_ADDR(0x00013dd0u): goto L_13DD0;
    case RC_ADDR(0x00013dd2u): goto L_13DD2;
    case RC_ADDR(0x00013dd4u): goto L_13DD4;
    case RC_ADDR(0x00013dd8u): goto L_13DD8;
    case RC_ADDR(0x00013ddeu): goto L_13DDE;
    case RC_ADDR(0x00013de2u): goto L_13DE2;
    case RC_ADDR(0x00013de4u): goto L_13DE4;
    case RC_ADDR(0x00013de6u): goto L_13DE6;
    case RC_ADDR(0x00013deau): goto L_13DEA;
    case RC_ADDR(0x00013df0u): goto L_13DF0;
    case RC_ADDR(0x00013df4u): goto L_13DF4;
    case RC_ADDR(0x00013df6u): goto L_13DF6;
    case RC_ADDR(0x00013df8u): goto L_13DF8;
    case RC_ADDR(0x00013dfcu): goto L_13DFC;
    case RC_ADDR(0x00013e02u): goto L_13E02;
    case RC_ADDR(0x00013e06u): goto L_13E06;
    case RC_ADDR(0x00013e0cu): goto L_13E0C;
    case RC_ADDR(0x00013e0eu): goto L_13E0E;
    case RC_ADDR(0x00013e12u): goto L_13E12;
    case RC_ADDR(0x00013e14u): goto L_13E14;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13D4A:
    /* 00013d4a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00013d4au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_13D4E:
    /* 00013d4e   4  move.w (1a7c,A4),D0 */
    c->pc = RC_ADDR(0x00013d4eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1a7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D52:
    /* 00013d52   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013d52u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13D54:
    /* 00013d54   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013d54u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13D56:
    /* 00013d56   4  lea (1914,A4),A0 */
    c->pc = RC_ADDR(0x00013d56u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1914u);

L_13D5A:
    /* 00013d5a   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013d5au);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_13D5E:
    /* 00013d5e   4  bge 00013e12 */
    c->pc = RC_ADDR(0x00013d5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_13E12;

L_13D62:
    /* 00013d62   4  move.w (1a7c,A4),D0 */
    c->pc = RC_ADDR(0x00013d62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1a7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D66:
    /* 00013d66   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013d66u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13D68:
    /* 00013d68   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013d68u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13D6A:
    /* 00013d6a   4  lea (1860,A4),A0 */
    c->pc = RC_ADDR(0x00013d6au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1860u);

L_13D6E:
    /* 00013d6e   6  move.w (8,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013d6eu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D74:
    /* 00013d74   4  move.w (1a7c,A4),D0 */
    c->pc = RC_ADDR(0x00013d74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1a7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D78:
    /* 00013d78   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013d78u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13D7A:
    /* 00013d7a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013d7au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13D7C:
    /* 00013d7c   4  lea (189c,A4),A0 */
    c->pc = RC_ADDR(0x00013d7cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x189cu);

L_13D80:
    /* 00013d80   6  move.w (a,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013d80u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D86:
    /* 00013d86   4  move.w (1a7c,A4),D0 */
    c->pc = RC_ADDR(0x00013d86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1a7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D8A:
    /* 00013d8a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013d8au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13D8C:
    /* 00013d8c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013d8cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13D8E:
    /* 00013d8e   4  lea (1914,A4),A0 */
    c->pc = RC_ADDR(0x00013d8eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1914u);

L_13D92:
    /* 00013d92   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013d92u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13D96:
    /* 00013d96   4  move.w (1a7c,A4),D0 */
    c->pc = RC_ADDR(0x00013d96u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1a7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13D9A:
    /* 00013d9a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013d9au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13D9C:
    /* 00013d9c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013d9cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13D9E:
    /* 00013d9e   4  lea (18d8,A4),A0 */
    c->pc = RC_ADDR(0x00013d9eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x18d8u);

L_13DA2:
    /* 00013da2   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013da2u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DA8:
    /* 00013da8   4  move.w (1a7c,A4),D0 */
    c->pc = RC_ADDR(0x00013da8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1a7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DAC:
    /* 00013dac   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013dacu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13DAE:
    /* 00013dae   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013daeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13DB0:
    /* 00013db0   4  lea (1950,A4),A0 */
    c->pc = RC_ADDR(0x00013db0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1950u);

L_13DB4:
    /* 00013db4   6  move.w (c,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013db4u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DBA:
    /* 00013dba   4  move.w (1a7c,A4),D0 */
    c->pc = RC_ADDR(0x00013dbau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1a7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DBE:
    /* 00013dbe   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013dbeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13DC0:
    /* 00013dc0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013dc0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13DC2:
    /* 00013dc2   4  lea (198c,A4),A0 */
    c->pc = RC_ADDR(0x00013dc2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x198cu);

L_13DC6:
    /* 00013dc6   6  move.w (e,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013dc6u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DCC:
    /* 00013dcc   4  move.w (1a7c,A4),D0 */
    c->pc = RC_ADDR(0x00013dccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1a7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DD0:
    /* 00013dd0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013dd0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13DD2:
    /* 00013dd2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013dd2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13DD4:
    /* 00013dd4   4  lea (19c8,A4),A0 */
    c->pc = RC_ADDR(0x00013dd4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x19c8u);

L_13DD8:
    /* 00013dd8   6  move.w (10,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013dd8u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DDE:
    /* 00013dde   4  move.w (1a7c,A4),D0 */
    c->pc = RC_ADDR(0x00013ddeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1a7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DE2:
    /* 00013de2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013de2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13DE4:
    /* 00013de4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013de4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13DE6:
    /* 00013de6   4  lea (1a04,A4),A0 */
    c->pc = RC_ADDR(0x00013de6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1a04u);

L_13DEA:
    /* 00013dea   6  move.w (12,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013deau);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DF0:
    /* 00013df0   4  move.w (1a7c,A4),D0 */
    c->pc = RC_ADDR(0x00013df0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1a7cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DF4:
    /* 00013df4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00013df4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_13DF6:
    /* 00013df6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00013df6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_13DF8:
    /* 00013df8   4  lea (1a40,A4),A0 */
    c->pc = RC_ADDR(0x00013df8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1a40u);

L_13DFC:
    /* 00013dfc   6  move.w (14,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00013dfcu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E02:
    /* 00013e02   4  addq.w #1,(1a7c,A4) */
    c->pc = RC_ADDR(0x00013e02u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1a7cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13E06:
    /* 00013e06   6  cmpi.w #1d,(1a7c,A4) */
    c->pc = RC_ADDR(0x00013e06u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1a7cu));
    rc_cmp(c, RC_W, t0, 0x0000001du);

L_13E0C:
    /* 00013e0c   2  ble 00013e12 */
    c->pc = RC_ADDR(0x00013e0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_13E12;

L_13E0E:
    /* 00013e0e   4  clr.w (1a7c,A4) */
    c->pc = RC_ADDR(0x00013e0eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1a7cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13E12:
    /* 00013e12   2  unlk A5 */
    c->pc = RC_ADDR(0x00013e12u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13E14:
    /* 00013e14   2  rts */
    c->pc = RC_ADDR(0x00013e14u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
