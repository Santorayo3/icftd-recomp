/* fn_0001fe4e - 118 byte(s), 40 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001fe4e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case 0x0001fe4eu: goto L_1FE4E;
    case 0x0001fe52u: goto L_1FE52;
    case 0x0001fe56u: goto L_1FE56;
    case 0x0001fe5au: goto L_1FE5A;
    case 0x0001fe5eu: goto L_1FE5E;
    case 0x0001fe62u: goto L_1FE62;
    case 0x0001fe66u: goto L_1FE66;
    case 0x0001fe68u: goto L_1FE68;
    case 0x0001fe6cu: goto L_1FE6C;
    case 0x0001fe6eu: goto L_1FE6E;
    case 0x0001fe70u: goto L_1FE70;
    case 0x0001fe74u: goto L_1FE74;
    case 0x0001fe76u: goto L_1FE76;
    case 0x0001fe78u: goto L_1FE78;
    case 0x0001fe7cu: goto L_1FE7C;
    case 0x0001fe80u: goto L_1FE80;
    case 0x0001fe82u: goto L_1FE82;
    case 0x0001fe86u: goto L_1FE86;
    case 0x0001fe88u: goto L_1FE88;
    case 0x0001fe8au: goto L_1FE8A;
    case 0x0001fe8cu: goto L_1FE8C;
    case 0x0001fe8eu: goto L_1FE8E;
    case 0x0001fe92u: goto L_1FE92;
    case 0x0001fe96u: goto L_1FE96;
    case 0x0001fe98u: goto L_1FE98;
    case 0x0001fe9cu: goto L_1FE9C;
    case 0x0001fe9eu: goto L_1FE9E;
    case 0x0001fea0u: goto L_1FEA0;
    case 0x0001fea2u: goto L_1FEA2;
    case 0x0001fea6u: goto L_1FEA6;
    case 0x0001feaau: goto L_1FEAA;
    case 0x0001feacu: goto L_1FEAC;
    case 0x0001feb0u: goto L_1FEB0;
    case 0x0001feb2u: goto L_1FEB2;
    case 0x0001feb4u: goto L_1FEB4;
    case 0x0001feb6u: goto L_1FEB6;
    case 0x0001feb8u: goto L_1FEB8;
    case 0x0001febcu: goto L_1FEBC;
    case 0x0001fec0u: goto L_1FEC0;
    case 0x0001fec2u: goto L_1FEC2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FE4E:
    /* 0001fe4e   4  link.w A5,#0 */
    c->pc = 0x0001fe4eu;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1FE52:
    /* 0001fe52   4  movem.l { D4 D5 },-(SP) */
    c->pc = 0x0001fe52u;
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    c->a[7] = t3;

L_1FE56:
    /* 0001fe56   4  movea.l (8,A5),A2 */
    c->pc = 0x0001fe56u;
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_1FE5A:
    /* 0001fe5a   4  movea.l (c,A5),A3 */
    c->pc = 0x0001fe5au;
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[3] = t0;

L_1FE5E:
    /* 0001fe5e   4  move.w (c,A2),D0 */
    c->pc = 0x0001fe5eu;
    t0 = rc_rd16(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FE62:
    /* 0001fe62   4  add.w (34,A2),D0 */
    c->pc = 0x0001fe62u;
    t0 = rc_rd16(c, m, (c->a[2] + 0x34u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FE66:
    /* 0001fe66   2  subq.w #1,D0 */
    c->pc = 0x0001fe66u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FE68:
    /* 0001fe68   4  cmp.w (c,A3),D0 */
    c->pc = 0x0001fe68u;
    t0 = rc_rd16(c, m, (c->a[3] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1FE6C:
    /* 0001fe6c   2  bge 0001fe78 */
    c->pc = 0x0001fe6cu;
    if (rc_cond(c, 12)) goto L_1FE78;

L_1FE6E:
    /* 0001fe6e   2  moveq #0,D0 */
    c->pc = 0x0001fe6eu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FE70:
    /* 0001fe70   4  movem.l (SP)+,{ A2 A3 } */
    c->pc = 0x0001fe70u;
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

L_1FE74:
    /* 0001fe74   2  unlk A5 */
    c->pc = 0x0001fe74u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FE76:
    /* 0001fe76   2  rts */
    c->pc = 0x0001fe76u;
    rc_ret(c, m);
    return;

L_1FE78:
    /* 0001fe78   4  move.w (c,A3),D0 */
    c->pc = 0x0001fe78u;
    t0 = rc_rd16(c, m, (c->a[3] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FE7C:
    /* 0001fe7c   4  add.w (34,A3),D0 */
    c->pc = 0x0001fe7cu;
    t0 = rc_rd16(c, m, (c->a[3] + 0x34u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FE80:
    /* 0001fe80   2  subq.w #1,D0 */
    c->pc = 0x0001fe80u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FE82:
    /* 0001fe82   4  move.w (c,A2),D1 */
    c->pc = 0x0001fe82u;
    t0 = rc_rd16(c, m, (c->a[2] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FE86:
    /* 0001fe86   2  cmp.w D0,D1 */
    c->pc = 0x0001fe86u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1FE88:
    /* 0001fe88   2  ble 0001fe8e */
    c->pc = 0x0001fe88u;
    if (rc_cond(c, 15)) goto L_1FE8E;

L_1FE8A:
    /* 0001fe8a   2  moveq #0,D0 */
    c->pc = 0x0001fe8au;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FE8C:
    /* 0001fe8c   2  bra 0001fe70 */
    c->pc = 0x0001fe8cu;
    rc_tick();
    goto L_1FE70;

L_1FE8E:
    /* 0001fe8e   4  move.w (e,A2),D0 */
    c->pc = 0x0001fe8eu;
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FE92:
    /* 0001fe92   4  add.w (36,A2),D0 */
    c->pc = 0x0001fe92u;
    t0 = rc_rd16(c, m, (c->a[2] + 0x36u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FE96:
    /* 0001fe96   2  subq.w #1,D0 */
    c->pc = 0x0001fe96u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FE98:
    /* 0001fe98   4  cmp.w (e,A3),D0 */
    c->pc = 0x0001fe98u;
    t0 = rc_rd16(c, m, (c->a[3] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1FE9C:
    /* 0001fe9c   2  bge 0001fea2 */
    c->pc = 0x0001fe9cu;
    if (rc_cond(c, 12)) goto L_1FEA2;

L_1FE9E:
    /* 0001fe9e   2  moveq #0,D0 */
    c->pc = 0x0001fe9eu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FEA0:
    /* 0001fea0   2  bra 0001fe70 */
    c->pc = 0x0001fea0u;
    rc_tick();
    goto L_1FE70;

L_1FEA2:
    /* 0001fea2   4  move.w (e,A3),D0 */
    c->pc = 0x0001fea2u;
    t0 = rc_rd16(c, m, (c->a[3] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FEA6:
    /* 0001fea6   4  add.w (36,A3),D0 */
    c->pc = 0x0001fea6u;
    t0 = rc_rd16(c, m, (c->a[3] + 0x36u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FEAA:
    /* 0001feaa   2  subq.w #1,D0 */
    c->pc = 0x0001feaau;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1FEAC:
    /* 0001feac   4  move.w (e,A2),D1 */
    c->pc = 0x0001feacu;
    t0 = rc_rd16(c, m, (c->a[2] + 0xeu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1FEB0:
    /* 0001feb0   2  cmp.w D0,D1 */
    c->pc = 0x0001feb0u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1FEB2:
    /* 0001feb2   2  ble 0001feb8 */
    c->pc = 0x0001feb2u;
    if (rc_cond(c, 15)) goto L_1FEB8;

L_1FEB4:
    /* 0001feb4   2  moveq #0,D0 */
    c->pc = 0x0001feb4u;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FEB6:
    /* 0001feb6   2  bra 0001fe70 */
    c->pc = 0x0001feb6u;
    rc_tick();
    goto L_1FE70;

L_1FEB8:
    /* 0001feb8   4  move.l A2,(ffffcd16,A4) */
    c->pc = 0x0001feb8u;
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x32eau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FEBC:
    /* 0001febc   4  move.l A3,(ffffcd1a,A4) */
    c->pc = 0x0001febcu;
    t0 = rc_a_get(c, 3, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x32e6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FEC0:
    /* 0001fec0   2  moveq #1,D0 */
    c->pc = 0x0001fec0u;
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FEC2:
    /* 0001fec2   2  bra 0001fe70 */
    c->pc = 0x0001fec2u;
    rc_tick();
    goto L_1FE70;

}
