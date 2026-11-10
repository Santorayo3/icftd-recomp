/* fn_0000db2c - 154 byte(s), 55 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000db2c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x0000db2cu: goto L_DB2C;
    case 0x0000db30u: goto L_DB30;
    case 0x0000db34u: goto L_DB34;
    case 0x0000db38u: goto L_DB38;
    case 0x0000db3cu: goto L_DB3C;
    case 0x0000db40u: goto L_DB40;
    case 0x0000db44u: goto L_DB44;
    case 0x0000db48u: goto L_DB48;
    case 0x0000db4au: goto L_DB4A;
    case 0x0000db4cu: goto L_DB4C;
    case 0x0000db4eu: goto L_DB4E;
    case 0x0000db52u: goto L_DB52;
    case 0x0000db54u: goto L_DB54;
    case 0x0000db56u: goto L_DB56;
    case 0x0000db58u: goto L_DB58;
    case 0x0000db5au: goto L_DB5A;
    case 0x0000db5cu: goto L_DB5C;
    case 0x0000db60u: goto L_DB60;
    case 0x0000db62u: goto L_DB62;
    case 0x0000db66u: goto L_DB66;
    case 0x0000db68u: goto L_DB68;
    case 0x0000db6cu: goto L_DB6C;
    case 0x0000db6eu: goto L_DB6E;
    case 0x0000db70u: goto L_DB70;
    case 0x0000db72u: goto L_DB72;
    case 0x0000db74u: goto L_DB74;
    case 0x0000db78u: goto L_DB78;
    case 0x0000db7cu: goto L_DB7C;
    case 0x0000db7eu: goto L_DB7E;
    case 0x0000db80u: goto L_DB80;
    case 0x0000db84u: goto L_DB84;
    case 0x0000db88u: goto L_DB88;
    case 0x0000db8au: goto L_DB8A;
    case 0x0000db8cu: goto L_DB8C;
    case 0x0000db8eu: goto L_DB8E;
    case 0x0000db90u: goto L_DB90;
    case 0x0000db94u: goto L_DB94;
    case 0x0000db96u: goto L_DB96;
    case 0x0000db98u: goto L_DB98;
    case 0x0000db9au: goto L_DB9A;
    case 0x0000db9cu: goto L_DB9C;
    case 0x0000db9eu: goto L_DB9E;
    case 0x0000dba4u: goto L_DBA4;
    case 0x0000dba6u: goto L_DBA6;
    case 0x0000dba8u: goto L_DBA8;
    case 0x0000dbaau: goto L_DBAA;
    case 0x0000dbacu: goto L_DBAC;
    case 0x0000dbaeu: goto L_DBAE;
    case 0x0000dbb2u: goto L_DBB2;
    case 0x0000dbb4u: goto L_DBB4;
    case 0x0000dbb8u: goto L_DBB8;
    case 0x0000dbbau: goto L_DBBA;
    case 0x0000dbbeu: goto L_DBBE;
    case 0x0000dbc2u: goto L_DBC2;
    case 0x0000dbc4u: goto L_DBC4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_DB2C:
    /* 0000db2c   4  link.w A5,#fffffffe */
    c->pc = 0x0000db2cu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_DB30:
    /* 0000db30   4  movem.l { D5 A0 A1 A2 A3 },-(SP) */
    c->pc = 0x0000db30u;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_DB34:
    /* 0000db34   4  move.w (47a,A4),D6 */
    c->pc = 0x0000db34u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47au));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB38:
    /* 0000db38   4  sub.w (470,A4),D6 */
    c->pc = 0x0000db38u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x470u));
    t1 = rc_d_get(c, 6, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 6, RC_W, t2);

L_DB3C:
    /* 0000db3c   4  move.w (47c,A4),D7 */
    c->pc = 0x0000db3cu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x47cu));
    rc_d_set(c, 7, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB40:
    /* 0000db40   4  sub.w (472,A4),D7 */
    c->pc = 0x0000db40u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x472u));
    t1 = rc_d_get(c, 7, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 7, RC_W, t2);

L_DB44:
    /* 0000db44   4  move.w (fffff2ce,A4),D0 */
    c->pc = 0x0000db44u;
    t0 = rc_rd16(c, m, (c->a[4] - 0xd32u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB48:
    /* 0000db48   2  muls.w D7,D0 */
    c->pc = 0x0000db48u;
    t0 = rc_d_get(c, 7, RC_W);
    rc_muls(c, 0, t0);

L_DB4A:
    /* 0000db4a   2  move.w D6,D1 */
    c->pc = 0x0000db4au;
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB4C:
    /* 0000db4c   2  ext.l D1 */
    c->pc = 0x0000db4cu;
    rc_ext_l(c, 1);

L_DB4E:
    /* 0000db4e   4  divs.w #8,D1 */
    c->pc = 0x0000db4eu;
    t0 = 0x00000008u;
    rc_divs(c, m, 1, t0);

L_DB52:
    /* 0000db52   2  add.w D1,D0 */
    c->pc = 0x0000db52u;
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DB54:
    /* 0000db54   2  ext.l D0 */
    c->pc = 0x0000db54u;
    rc_ext_l(c, 0);

L_DB56:
    /* 0000db56   2  move.l D0,D4 */
    c->pc = 0x0000db56u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DB58:
    /* 0000db58   2  move.w D6,D0 */
    c->pc = 0x0000db58u;
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB5A:
    /* 0000db5a   2  ext.l D0 */
    c->pc = 0x0000db5au;
    rc_ext_l(c, 0);

L_DB5C:
    /* 0000db5c   4  divs.w #8,D0 */
    c->pc = 0x0000db5cu;
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_DB60:
    /* 0000db60   2  swap D0 */
    c->pc = 0x0000db60u;
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_DB62:
    /* 0000db62   4  move.w #80,D1 */
    c->pc = 0x0000db62u;
    t0 = 0x00000080u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB66:
    /* 0000db66   2  asr.w D0,D1 */
    c->pc = 0x0000db66u;
    c->d[1] = rc_shift(c, 0, 0, (c->d[0] & 63u), rc_d_get(c, 1, RC_W), RC_W);

L_DB68:
    /* 0000db68   4  move.b D1,(ffffffff,A5) */
    c->pc = 0x0000db68u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_wr8(c, m, (c->a[5] - 0x1u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_DB6C:
    /* 0000db6c   2  suba.l A2,A2 */
    c->pc = 0x0000db6cu;
    t0 = rc_a_get(c, 2, RC_L);
    c->a[2] -= t0;

L_DB6E:
    /* 0000db6e   2  moveq #0,D5 */
    c->pc = 0x0000db6eu;
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_DB70:
    /* 0000db70   2  move.l D5,D0 */
    c->pc = 0x0000db70u;
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DB72:
    /* 0000db72   2  asl.l #2,D0 */
    c->pc = 0x0000db72u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_DB74:
    /* 0000db74   4  lea (fffff326,A4),A0 */
    c->pc = 0x0000db74u;
    c->a[0] = (c->a[4] - 0xcdau);

L_DB78:
    /* 0000db78   4  move.l (0,A0,D0.w),D1 */
    c->pc = 0x0000db78u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DB7C:
    /* 0000db7c   2  movea.l D4,A0 */
    c->pc = 0x0000db7cu;
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_DB7E:
    /* 0000db7e   2  moveq #0,D0 */
    c->pc = 0x0000db7eu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_DB80:
    /* 0000db80   4  move.b (0,A0,D1.w),D0 */
    c->pc = 0x0000db80u;
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_DB84:
    /* 0000db84   4  move.b (ffffffff,A5),D1 */
    c->pc = 0x0000db84u;
    t0 = rc_rd8(c, m, (c->a[5] - 0x1u));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_DB88:
    /* 0000db88   2  ext.w D1 */
    c->pc = 0x0000db88u;
    rc_ext_w(c, 1);

L_DB8A:
    /* 0000db8a   2  and.w D1,D0 */
    c->pc = 0x0000db8au;
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_DB8C:
    /* 0000db8c   2  beq 0000db96 */
    c->pc = 0x0000db8cu;
    if (rc_cond(c, 7)) goto L_DB96;

L_DB8E:
    /* 0000db8e   2  move.w A2,D0 */
    c->pc = 0x0000db8eu;
    t0 = rc_a_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB90:
    /* 0000db90   4  bset #5,D0 */
    c->pc = 0x0000db90u;
    t4 = 0x00000005u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 0, RC_B, t2);

L_DB94:
    /* 0000db94   2  movea.w D0,A2 */
    c->pc = 0x0000db94u;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[2] = rc_ext(t0, RC_W);

L_DB96:
    /* 0000db96   2  move.w A2,D0 */
    c->pc = 0x0000db96u;
    t0 = rc_a_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB98:
    /* 0000db98   2  asr.w #1,D0 */
    c->pc = 0x0000db98u;
    c->d[0] = rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_DB9A:
    /* 0000db9a   2  movea.w D0,A2 */
    c->pc = 0x0000db9au;
    t0 = rc_d_get(c, 0, RC_W);
    c->a[2] = rc_ext(t0, RC_W);

L_DB9C:
    /* 0000db9c   2  addq.l #1,D5 */
    c->pc = 0x0000db9cu;
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_DB9E:
    /* 0000db9e   6  cmp.l #5,D5 */
    c->pc = 0x0000db9eu;
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_DBA4:
    /* 0000dba4   2  blt 0000db70 */
    c->pc = 0x0000dba4u;
    if (rc_cond(c, 13)) { rc_tick(); goto L_DB70; }

L_DBA6:
    /* 0000dba6   2  move.w A2,D0 */
    c->pc = 0x0000dba6u;
    t0 = rc_a_get(c, 2, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBA8:
    /* 0000dba8   2  ext.l D0 */
    c->pc = 0x0000dba8u;
    rc_ext_l(c, 0);

L_DBAA:
    /* 0000dbaa   2  moveq #1,D1 */
    c->pc = 0x0000dbaau;
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_DBAC:
    /* 0000dbac   2  asl.l D0,D1 */
    c->pc = 0x0000dbacu;
    c->d[1] = rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L);

L_DBAE:
    /* 0000dbae   4  and.l (ffff9a54,A4),D1 */
    c->pc = 0x0000dbaeu;
    t0 = rc_rd32(c, m, (c->a[4] - 0x65acu));
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_DBB2:
    /* 0000dbb2   2  beq 0000dbba */
    c->pc = 0x0000dbb2u;
    if (rc_cond(c, 7)) goto L_DBBA;

L_DBB4:
    /* 0000dbb4   4  addq.w #1,(48e,A4) */
    c->pc = 0x0000dbb4u;
    t3 = (c->a[4] + 0x48eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_DBB8:
    /* 0000dbb8   2  bra 0000dbbe */
    c->pc = 0x0000dbb8u;
    goto L_DBBE;

L_DBBA:
    /* 0000dbba   4  clr.w (48e,A4) */
    c->pc = 0x0000dbbau;
    rc_wr16(c, m, (c->a[4] + 0x48eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DBBE:
    /* 0000dbbe   4  movem.l (SP)+,{ D4 D5 D6 D7 A2 } */
    c->pc = 0x0000dbbeu;
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
    c->d[7] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_DBC2:
    /* 0000dbc2   2  unlk A5 */
    c->pc = 0x0000dbc2u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DBC4:
    /* 0000dbc4   2  rts */
    c->pc = 0x0000dbc4u;
    rc_ret(c, m);
    return;

}
