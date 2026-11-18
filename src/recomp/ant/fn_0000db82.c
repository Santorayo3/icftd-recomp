/* fn_0000db82 - 122 byte(s), 34 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000db82(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000db82u): goto L_DB82;
    case RC_ADDR(0x0000db86u): goto L_DB86;
    case RC_ADDR(0x0000db8au): goto L_DB8A;
    case RC_ADDR(0x0000db8cu): goto L_DB8C;
    case RC_ADDR(0x0000db90u): goto L_DB90;
    case RC_ADDR(0x0000db94u): goto L_DB94;
    case RC_ADDR(0x0000db96u): goto L_DB96;
    case RC_ADDR(0x0000db9au): goto L_DB9A;
    case RC_ADDR(0x0000dba0u): goto L_DBA0;
    case RC_ADDR(0x0000dba2u): goto L_DBA2;
    case RC_ADDR(0x0000dba6u): goto L_DBA6;
    case RC_ADDR(0x0000dbaau): goto L_DBAA;
    case RC_ADDR(0x0000dbacu): goto L_DBAC;
    case RC_ADDR(0x0000dbb0u): goto L_DBB0;
    case RC_ADDR(0x0000dbb2u): goto L_DBB2;
    case RC_ADDR(0x0000dbb6u): goto L_DBB6;
    case RC_ADDR(0x0000dbb8u): goto L_DBB8;
    case RC_ADDR(0x0000dbbau): goto L_DBBA;
    case RC_ADDR(0x0000dbbeu): goto L_DBBE;
    case RC_ADDR(0x0000dbc2u): goto L_DBC2;
    case RC_ADDR(0x0000dbc4u): goto L_DBC4;
    case RC_ADDR(0x0000dbcau): goto L_DBCA;
    case RC_ADDR(0x0000dbd0u): goto L_DBD0;
    case RC_ADDR(0x0000dbd6u): goto L_DBD6;
    case RC_ADDR(0x0000dbdau): goto L_DBDA;
    case RC_ADDR(0x0000dbdeu): goto L_DBDE;
    case RC_ADDR(0x0000dbe2u): goto L_DBE2;
    case RC_ADDR(0x0000dbe6u): goto L_DBE6;
    case RC_ADDR(0x0000dbeau): goto L_DBEA;
    case RC_ADDR(0x0000dbecu): goto L_DBEC;
    case RC_ADDR(0x0000dbf0u): goto L_DBF0;
    case RC_ADDR(0x0000dbf4u): goto L_DBF4;
    case RC_ADDR(0x0000dbf8u): goto L_DBF8;
    case RC_ADDR(0x0000dbfau): goto L_DBFA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_DB82:
    /* 0000db82   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000db82u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_DB86:
    /* 0000db86   4  tst.w (1112,A4) */
    c->pc = RC_ADDR(0x0000db86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1112u));
    rc_set_nzvc(c, t0, RC_W);

L_DB8A:
    /* 0000db8a   2  beq 0000dbf8 */
    c->pc = RC_ADDR(0x0000db8au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_DBF8;

L_DB8C:
    /* 0000db8c   4  addq.w #1,(1112,A4) */
    c->pc = RC_ADDR(0x0000db8cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1112u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_DB90:
    /* 0000db90   4  tst.w (1118,A4) */
    c->pc = RC_ADDR(0x0000db90u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1118u));
    rc_set_nzvc(c, t0, RC_W);

L_DB94:
    /* 0000db94   2  beq 0000db9a */
    c->pc = RC_ADDR(0x0000db94u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_DB9A;

L_DB96:
    /* 0000db96   4  addq.w #1,(1118,A4) */
    c->pc = RC_ADDR(0x0000db96u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1118u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_DB9A:
    /* 0000db9a   6  cmpi.w #18,(1118,A4) */
    c->pc = RC_ADDR(0x0000db9au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1118u));
    rc_cmp(c, RC_W, t0, 0x00000018u);

L_DBA0:
    /* 0000dba0   2  ble 0000dba6 */
    c->pc = RC_ADDR(0x0000dba0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_DBA6;

L_DBA2:
    /* 0000dba2   4  addq.w #1,(1116,A4) */
    c->pc = RC_ADDR(0x0000dba2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1116u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_DBA6:
    /* 0000dba6   4  subq.w #1,(1114,A4) */
    c->pc = RC_ADDR(0x0000dba6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1114u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_DBAA:
    /* 0000dbaa   2  bne 0000dbf8 */
    c->pc = RC_ADDR(0x0000dbaau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_DBF8;

L_DBAC:
    /* 0000dbac   4  move.w (1112,A4),D0 */
    c->pc = RC_ADDR(0x0000dbacu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1112u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBB0:
    /* 0000dbb0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000dbb0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_DBB2:
    /* 0000dbb2   4  divs.w #12c,D0 */
    c->pc = RC_ADDR(0x0000dbb2u);
    rc_step(c, m, 162);
    t0 = 0x0000012cu;
    rc_divs(c, m, 0, t0);

L_DBB6:
    /* 0000dbb6   2  moveq #8,D1 */
    c->pc = RC_ADDR(0x0000dbb6u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000008u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_DBB8:
    /* 0000dbb8   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x0000dbb8u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DBBA:
    /* 0000dbba   4  move.w D1,(1114,A4) */
    c->pc = RC_ADDR(0x0000dbbau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x1114u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBBE:
    /* 0000dbbe   4  tst.w (1114,A4) */
    c->pc = RC_ADDR(0x0000dbbeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1114u));
    rc_set_nzvc(c, t0, RC_W);

L_DBC2:
    /* 0000dbc2   2  bgt 0000dbd6 */
    c->pc = RC_ADDR(0x0000dbc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_DBD6;

L_DBC4:
    /* 0000dbc4   6  move.w #3e7,(1114,A4) */
    c->pc = RC_ADDR(0x0000dbc4u);
    rc_step(c, m, 16);
    t0 = 0x000003e7u;
    rc_wr16(c, m, (c->a[4] + 0x1114u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBCA:
    /* 0000dbca   6  move.w #2,(111a,A4) */
    c->pc = RC_ADDR(0x0000dbcau);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x111au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBD0:
    /* 0000dbd0   6  move.w #1,(1118,A4) */
    c->pc = RC_ADDR(0x0000dbd0u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1118u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBD6:
    /* 0000dbd6   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000dbd6u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBDA:
    /* 0000dbda   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000dbdau);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBDE:
    /* 0000dbde   4  move.l (112a,A4),-(A7) */
    c->pc = RC_ADDR(0x0000dbdeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x112au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_DBE2:
    /* 0000dbe2   4  move.w (1126,A4),D0 */
    c->pc = RC_ADDR(0x0000dbe2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1126u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBE6:
    /* 0000dbe6   4  sub.w #c8,D0 */
    c->pc = RC_ADDR(0x0000dbe6u);
    rc_step(c, m, 10);
    t0 = 0x000000c8u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_DBEA:
    /* 0000dbea   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0000dbeau);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBEC:
    /* 0000dbec   4  move.l (111e,A4),-(A7) */
    c->pc = RC_ADDR(0x0000dbecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x111eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_DBF0:
    /* 0000dbf0   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0000dbf0u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0000dbf4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_DBF4:
    /* 0000dbf4   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000dbf4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_DBF8:
    /* 0000dbf8   2  unlk A5 */
    c->pc = RC_ADDR(0x0000dbf8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DBFA:
    /* 0000dbfa   2  rts */
    c->pc = RC_ADDR(0x0000dbfau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
