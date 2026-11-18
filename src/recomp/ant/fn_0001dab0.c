/* fn_0001dab0 - 284 byte(s), 76 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001dab0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001dab0u): goto L_1DAB0;
    case RC_ADDR(0x0001dab4u): goto L_1DAB4;
    case RC_ADDR(0x0001dab8u): goto L_1DAB8;
    case RC_ADDR(0x0001dabcu): goto L_1DABC;
    case RC_ADDR(0x0001dac0u): goto L_1DAC0;
    case RC_ADDR(0x0001dac4u): goto L_1DAC4;
    case RC_ADDR(0x0001dac8u): goto L_1DAC8;
    case RC_ADDR(0x0001daccu): goto L_1DACC;
    case RC_ADDR(0x0001dad0u): goto L_1DAD0;
    case RC_ADDR(0x0001dad4u): goto L_1DAD4;
    case RC_ADDR(0x0001dad8u): goto L_1DAD8;
    case RC_ADDR(0x0001dadcu): goto L_1DADC;
    case RC_ADDR(0x0001dae0u): goto L_1DAE0;
    case RC_ADDR(0x0001dae4u): goto L_1DAE4;
    case RC_ADDR(0x0001dae8u): goto L_1DAE8;
    case RC_ADDR(0x0001daecu): goto L_1DAEC;
    case RC_ADDR(0x0001daf0u): goto L_1DAF0;
    case RC_ADDR(0x0001daf4u): goto L_1DAF4;
    case RC_ADDR(0x0001daf8u): goto L_1DAF8;
    case RC_ADDR(0x0001dafcu): goto L_1DAFC;
    case RC_ADDR(0x0001dafeu): goto L_1DAFE;
    case RC_ADDR(0x0001db04u): goto L_1DB04;
    case RC_ADDR(0x0001db06u): goto L_1DB06;
    case RC_ADDR(0x0001db0cu): goto L_1DB0C;
    case RC_ADDR(0x0001db0eu): goto L_1DB0E;
    case RC_ADDR(0x0001db14u): goto L_1DB14;
    case RC_ADDR(0x0001db18u): goto L_1DB18;
    case RC_ADDR(0x0001db1au): goto L_1DB1A;
    case RC_ADDR(0x0001db1eu): goto L_1DB1E;
    case RC_ADDR(0x0001db22u): goto L_1DB22;
    case RC_ADDR(0x0001db26u): goto L_1DB26;
    case RC_ADDR(0x0001db28u): goto L_1DB28;
    case RC_ADDR(0x0001db2eu): goto L_1DB2E;
    case RC_ADDR(0x0001db34u): goto L_1DB34;
    case RC_ADDR(0x0001db36u): goto L_1DB36;
    case RC_ADDR(0x0001db3au): goto L_1DB3A;
    case RC_ADDR(0x0001db3eu): goto L_1DB3E;
    case RC_ADDR(0x0001db40u): goto L_1DB40;
    case RC_ADDR(0x0001db44u): goto L_1DB44;
    case RC_ADDR(0x0001db48u): goto L_1DB48;
    case RC_ADDR(0x0001db4au): goto L_1DB4A;
    case RC_ADDR(0x0001db4cu): goto L_1DB4C;
    case RC_ADDR(0x0001db50u): goto L_1DB50;
    case RC_ADDR(0x0001db52u): goto L_1DB52;
    case RC_ADDR(0x0001db58u): goto L_1DB58;
    case RC_ADDR(0x0001db5au): goto L_1DB5A;
    case RC_ADDR(0x0001db60u): goto L_1DB60;
    case RC_ADDR(0x0001db62u): goto L_1DB62;
    case RC_ADDR(0x0001db66u): goto L_1DB66;
    case RC_ADDR(0x0001db68u): goto L_1DB68;
    case RC_ADDR(0x0001db6eu): goto L_1DB6E;
    case RC_ADDR(0x0001db72u): goto L_1DB72;
    case RC_ADDR(0x0001db76u): goto L_1DB76;
    case RC_ADDR(0x0001db7au): goto L_1DB7A;
    case RC_ADDR(0x0001db7eu): goto L_1DB7E;
    case RC_ADDR(0x0001db82u): goto L_1DB82;
    case RC_ADDR(0x0001db86u): goto L_1DB86;
    case RC_ADDR(0x0001db8cu): goto L_1DB8C;
    case RC_ADDR(0x0001db90u): goto L_1DB90;
    case RC_ADDR(0x0001db92u): goto L_1DB92;
    case RC_ADDR(0x0001db94u): goto L_1DB94;
    case RC_ADDR(0x0001db98u): goto L_1DB98;
    case RC_ADDR(0x0001db9cu): goto L_1DB9C;
    case RC_ADDR(0x0001dba0u): goto L_1DBA0;
    case RC_ADDR(0x0001dba4u): goto L_1DBA4;
    case RC_ADDR(0x0001dba8u): goto L_1DBA8;
    case RC_ADDR(0x0001dbacu): goto L_1DBAC;
    case RC_ADDR(0x0001dbb0u): goto L_1DBB0;
    case RC_ADDR(0x0001dbb2u): goto L_1DBB2;
    case RC_ADDR(0x0001dbb6u): goto L_1DBB6;
    case RC_ADDR(0x0001dbb8u): goto L_1DBB8;
    case RC_ADDR(0x0001dbbcu): goto L_1DBBC;
    case RC_ADDR(0x0001dbc0u): goto L_1DBC0;
    case RC_ADDR(0x0001dbc4u): goto L_1DBC4;
    case RC_ADDR(0x0001dbc8u): goto L_1DBC8;
    case RC_ADDR(0x0001dbcau): goto L_1DBCA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DAB0:
    /* 0001dab0   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001dab0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1DAB4:
    /* 0001dab4   4  jsr (0001e3f6) */
    c->pc = RC_ADDR(0x0001dab4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dab8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e3f6u);
    return;

L_1DAB8:
    /* 0001dab8   4  jsr (0001e036) */
    c->pc = RC_ADDR(0x0001dab8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dabcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e036u);
    return;

L_1DABC:
    /* 0001dabc   4  jsr (0001e508) */
    c->pc = RC_ADDR(0x0001dabcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dac0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e508u);
    return;

L_1DAC0:
    /* 0001dac0   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001dac0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DAC4:
    /* 0001dac4   4  clr.w (fffffa32,A4) */
    c->pc = RC_ADDR(0x0001dac4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x5ceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DAC8:
    /* 0001dac8   4  clr.w (2ca8,A4) */
    c->pc = RC_ADDR(0x0001dac8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2ca8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DACC:
    /* 0001dacc   4  jsr (0001def2) */
    c->pc = RC_ADDR(0x0001daccu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dad0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001def2u);
    return;

L_1DAD0:
    /* 0001dad0   4  jsr (0001dbe4) */
    c->pc = RC_ADDR(0x0001dad0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dad4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001dbe4u);
    return;

L_1DAD4:
    /* 0001dad4   4  clr.w (2ca6,A4) */
    c->pc = RC_ADDR(0x0001dad4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2ca6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DAD8:
    /* 0001dad8   4  clr.w (2ca4,A4) */
    c->pc = RC_ADDR(0x0001dad8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2ca4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DADC:
    /* 0001dadc   4  clr.w (2ca2,A4) */
    c->pc = RC_ADDR(0x0001dadcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2ca2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DAE0:
    /* 0001dae0   4  jsr (0001e544) */
    c->pc = RC_ADDR(0x0001dae0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dae4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e544u);
    return;

L_1DAE4:
    /* 0001dae4   4  jsr (0001e8aa) */
    c->pc = RC_ADDR(0x0001dae4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dae8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e8aau);
    return;

L_1DAE8:
    /* 0001dae8   4  tst.w (2ca8,A4) */
    c->pc = RC_ADDR(0x0001dae8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca8u));
    rc_set_nzvc(c, t0, RC_W);

L_1DAEC:
    /* 0001daec   4  bne 0001dba0 */
    c->pc = RC_ADDR(0x0001daecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DBA0;

L_1DAF0:
    /* 0001daf0   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x0001daf0u);
    rc_step(c, m, 18);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x0001daf4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c7eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00013446u);
    return;

L_1DAF4:
    /* 0001daf4   4  jsr (0001e1a4) */
    c->pc = RC_ADDR(0x0001daf4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001daf8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e1a4u);
    return;

L_1DAF8:
    /* 0001daf8   4  tst.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001daf8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_W);

L_1DAFC:
    /* 0001dafc   2  beq 0001db06 */
    c->pc = RC_ADDR(0x0001dafcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DB06;

L_1DAFE:
    /* 0001dafe   6  move.w #ffff,(ffffb24c,A4) */
    c->pc = RC_ADDR(0x0001dafeu);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] - 0x4db4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB04:
    /* 0001db04   2  bra 0001db14 */
    c->pc = RC_ADDR(0x0001db04u);
    rc_step(c, m, 10);
    goto L_1DB14;

L_1DB06:
    /* 0001db06   6  cmpi.w #ffff,(ffffb24c,A4) */
    c->pc = RC_ADDR(0x0001db06u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_1DB0C:
    /* 0001db0c   2  bne 0001db14 */
    c->pc = RC_ADDR(0x0001db0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DB14;

L_1DB0E:
    /* 0001db0e   6  move.w #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001db0eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB14:
    /* 0001db14   4  tst.w (2ca2,A4) */
    c->pc = RC_ADDR(0x0001db14u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca2u));
    rc_set_nzvc(c, t0, RC_W);

L_1DB18:
    /* 0001db18   2  beq 0001db4c */
    c->pc = RC_ADDR(0x0001db18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DB4C;

L_1DB1A:
    /* 0001db1a   4  move.w (2ca6,A4),D0 */
    c->pc = RC_ADDR(0x0001db1au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB1E:
    /* 0001db1e   4  addq.w #1,(2ca6,A4) */
    c->pc = RC_ADDR(0x0001db1eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x2ca6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1DB22:
    /* 0001db22   4  cmp.w #3c,D0 */
    c->pc = RC_ADDR(0x0001db22u);
    rc_step(c, m, 8);
    t0 = 0x0000003cu;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1DB26:
    /* 0001db26   2  bne 0001db2e */
    c->pc = RC_ADDR(0x0001db26u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DB2E;

L_1DB28:
    /* 0001db28   6  move.w #1,(2ca8,A4) */
    c->pc = RC_ADDR(0x0001db28u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x2ca8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB2E:
    /* 0001db2e   6  cmpi.w #3,(2ca6,A4) */
    c->pc = RC_ADDR(0x0001db2eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca6u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1DB34:
    /* 0001db34   2  bne 0001db4a */
    c->pc = RC_ADDR(0x0001db34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DB4A;

L_1DB36:
    /* 0001db36   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001db36u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB3A:
    /* 0001db3a   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0001db3au);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0001db3eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_1DB3E:
    /* 0001db3e   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001db3eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1DB40:
    /* 0001db40   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001db40u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB44:
    /* 0001db44   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0001db44u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0001db48u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_1DB48:
    /* 0001db48   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001db48u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1DB4A:
    /* 0001db4a   2  bra 0001db86 */
    c->pc = RC_ADDR(0x0001db4au);
    rc_step(c, m, 10);
    goto L_1DB86;

L_1DB4C:
    /* 0001db4c   4  tst.w (ffffb24e,A4) */
    c->pc = RC_ADDR(0x0001db4cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db2u));
    rc_set_nzvc(c, t0, RC_W);

L_1DB50:
    /* 0001db50   2  beq 0001db86 */
    c->pc = RC_ADDR(0x0001db50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DB86;

L_1DB52:
    /* 0001db52   6  cmpi.w #2,(2caa,A4) */
    c->pc = RC_ADDR(0x0001db52u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2caau));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1DB58:
    /* 0001db58   2  ble 0001db86 */
    c->pc = RC_ADDR(0x0001db58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1DB86;

L_1DB5A:
    /* 0001db5a   6  cmpi.w #12,(2caa,A4) */
    c->pc = RC_ADDR(0x0001db5au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2caau));
    rc_cmp(c, RC_W, t0, 0x00000012u);

L_1DB60:
    /* 0001db60   2  bge 0001db86 */
    c->pc = RC_ADDR(0x0001db60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_1DB86;

L_1DB62:
    /* 0001db62   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001db62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_1DB66:
    /* 0001db66   2  bne 0001db6e */
    c->pc = RC_ADDR(0x0001db66u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DB6E;

L_1DB68:
    /* 0001db68   6  move.w #1,(ffffb24a,A4) */
    c->pc = RC_ADDR(0x0001db68u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x4db6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB6E:
    /* 0001db6e   4  move.w (ffffb24a,A4),D0 */
    c->pc = RC_ADDR(0x0001db6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB72:
    /* 0001db72   4  muls.w #f,D0 */
    c->pc = RC_ADDR(0x0001db72u);
    rc_step(c, m, 42);
    t0 = 0x0000000fu;
    rc_muls(c, 0, t0);

L_1DB76:
    /* 0001db76   4  move.w D0,(2ca4,A4) */
    c->pc = RC_ADDR(0x0001db76u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2ca4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB7A:
    /* 0001db7a   4  move.w D0,(2ca2,A4) */
    c->pc = RC_ADDR(0x0001db7au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x2ca2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB7E:
    /* 0001db7e   4  clr.w (2ca6,A4) */
    c->pc = RC_ADDR(0x0001db7eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2ca6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1DB82:
    /* 0001db82   4  jsr (0001e1e6) */
    c->pc = RC_ADDR(0x0001db82u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001db86u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e1e6u);
    return;

L_1DB86:
    /* 0001db86   6  move.w #1,(fffffa32,A4) */
    c->pc = RC_ADDR(0x0001db86u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x5ceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DB8C:
    /* 0001db8c   4  tst.w (fffffa32,A4) */
    /* a flag wait: rc_wait runs it natively and returns 1 when its exit branch is taken;
     * 0 means the three instructions below run instead (the reference path). */
    if (rc_wait(c, m, RC_ADDR(0x0001db8cu), 12,
                RC_ADDR(0x0001db90u), 10, 7,
                RC_ADDR(0x0001db92u), 10,
                (c->a[4] - 0x5ceu), RC_W))
        goto L_1DB94;
    c->pc = RC_ADDR(0x0001db8cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5ceu));
    rc_set_nzvc(c, t0, RC_W);

L_1DB90:
    /* 0001db90   2  beq 0001db94 */
    c->pc = RC_ADDR(0x0001db90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1DB94;

L_1DB92:
    /* 0001db92   2  bra 0001db8c */
    c->pc = RC_ADDR(0x0001db92u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1DB8C;

L_1DB94:
    /* 0001db94   4  jsr (0001e544) */
    c->pc = RC_ADDR(0x0001db94u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001db98u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e544u);
    return;

L_1DB98:
    /* 0001db98   4  jsr (0001e8aa) */
    c->pc = RC_ADDR(0x0001db98u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001db9cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e8aau);
    return;

L_1DB9C:
    /* 0001db9c   4  bra 0001dae8 */
    c->pc = RC_ADDR(0x0001db9cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1DAE8;

L_1DBA0:
    /* 0001dba0   4  jsr (0001ee1a) */
    c->pc = RC_ADDR(0x0001dba0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dba4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001ee1au);
    return;

L_1DBA4:
    /* 0001dba4   4  jsr (0001dc5c) */
    c->pc = RC_ADDR(0x0001dba4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dba8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001dc5cu);
    return;

L_1DBA8:
    /* 0001dba8   4  jsr (0001df98) */
    c->pc = RC_ADDR(0x0001dba8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dbacu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001df98u);
    return;

L_1DBAC:
    /* 0001dbac   4  tst.w (2cac,A4) */
    c->pc = RC_ADDR(0x0001dbacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2cacu));
    rc_set_nzvc(c, t0, RC_W);

L_1DBB0:
    /* 0001dbb0   2  bne 0001dbbc */
    c->pc = RC_ADDR(0x0001dbb0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DBBC;

L_1DBB2:
    /* 0001dbb2   4  tst.w (2ca6,A4) */
    c->pc = RC_ADDR(0x0001dbb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca6u));
    rc_set_nzvc(c, t0, RC_W);

L_1DBB6:
    /* 0001dbb6   2  bne 0001dbbc */
    c->pc = RC_ADDR(0x0001dbb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1DBBC;

L_1DBB8:
    /* 0001dbb8   4  jsr (0001e238) */
    c->pc = RC_ADDR(0x0001dbb8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dbbcu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e238u);
    return;

L_1DBBC:
    /* 0001dbbc   4  jsr (0001e2a2) */
    c->pc = RC_ADDR(0x0001dbbcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dbc0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e2a2u);
    return;

L_1DBC0:
    /* 0001dbc0   4  jsr (ffff8194,A4) */
    c->pc = RC_ADDR(0x0001dbc0u);
    rc_step(c, m, 18);
    /* vector 67 */
    rc_push32(c, m, RC_ADDR(0x0001dbc4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c8au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00018442u);
    return;

L_1DBC4:
    /* 0001dbc4   4  jsr (0001e4ea) */
    c->pc = RC_ADDR(0x0001dbc4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001dbc8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001e4eau);
    return;

L_1DBC8:
    /* 0001dbc8   2  unlk A5 */
    c->pc = RC_ADDR(0x0001dbc8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DBCA:
    /* 0001dbca   2  rts */
    c->pc = RC_ADDR(0x0001dbcau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
