/* fn_0000dbc6 - 174 byte(s), 51 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000dbc6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000dbc6u): goto L_DBC6;
    case RC_ADDR(0x0000dbcau): goto L_DBCA;
    case RC_ADDR(0x0000dbceu): goto L_DBCE;
    case RC_ADDR(0x0000dbd2u): goto L_DBD2;
    case RC_ADDR(0x0000dbd6u): goto L_DBD6;
    case RC_ADDR(0x0000dbdau): goto L_DBDA;
    case RC_ADDR(0x0000dbdeu): goto L_DBDE;
    case RC_ADDR(0x0000dbe0u): goto L_DBE0;
    case RC_ADDR(0x0000dbe2u): goto L_DBE2;
    case RC_ADDR(0x0000dbe4u): goto L_DBE4;
    case RC_ADDR(0x0000dbe8u): goto L_DBE8;
    case RC_ADDR(0x0000dbecu): goto L_DBEC;
    case RC_ADDR(0x0000dbeeu): goto L_DBEE;
    case RC_ADDR(0x0000dbf0u): goto L_DBF0;
    case RC_ADDR(0x0000dbf2u): goto L_DBF2;
    case RC_ADDR(0x0000dbf4u): goto L_DBF4;
    case RC_ADDR(0x0000dbf8u): goto L_DBF8;
    case RC_ADDR(0x0000dbfcu): goto L_DBFC;
    case RC_ADDR(0x0000dbfeu): goto L_DBFE;
    case RC_ADDR(0x0000dc00u): goto L_DC00;
    case RC_ADDR(0x0000dc04u): goto L_DC04;
    case RC_ADDR(0x0000dc06u): goto L_DC06;
    case RC_ADDR(0x0000dc08u): goto L_DC08;
    case RC_ADDR(0x0000dc0au): goto L_DC0A;
    case RC_ADDR(0x0000dc0cu): goto L_DC0C;
    case RC_ADDR(0x0000dc0eu): goto L_DC0E;
    case RC_ADDR(0x0000dc12u): goto L_DC12;
    case RC_ADDR(0x0000dc16u): goto L_DC16;
    case RC_ADDR(0x0000dc1au): goto L_DC1A;
    case RC_ADDR(0x0000dc1cu): goto L_DC1C;
    case RC_ADDR(0x0000dc1eu): goto L_DC1E;
    case RC_ADDR(0x0000dc22u): goto L_DC22;
    case RC_ADDR(0x0000dc26u): goto L_DC26;
    case RC_ADDR(0x0000dc2au): goto L_DC2A;
    case RC_ADDR(0x0000dc2cu): goto L_DC2C;
    case RC_ADDR(0x0000dc32u): goto L_DC32;
    case RC_ADDR(0x0000dc34u): goto L_DC34;
    case RC_ADDR(0x0000dc3au): goto L_DC3A;
    case RC_ADDR(0x0000dc3cu): goto L_DC3C;
    case RC_ADDR(0x0000dc42u): goto L_DC42;
    case RC_ADDR(0x0000dc48u): goto L_DC48;
    case RC_ADDR(0x0000dc4au): goto L_DC4A;
    case RC_ADDR(0x0000dc50u): goto L_DC50;
    case RC_ADDR(0x0000dc56u): goto L_DC56;
    case RC_ADDR(0x0000dc58u): goto L_DC58;
    case RC_ADDR(0x0000dc5eu): goto L_DC5E;
    case RC_ADDR(0x0000dc64u): goto L_DC64;
    case RC_ADDR(0x0000dc66u): goto L_DC66;
    case RC_ADDR(0x0000dc6cu): goto L_DC6C;
    case RC_ADDR(0x0000dc70u): goto L_DC70;
    case RC_ADDR(0x0000dc72u): goto L_DC72;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_DBC6:
    /* 0000dbc6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000dbc6u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_DBCA:
    /* 0000dbca   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000dbcau);
    rc_step(c, m);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_DBCE:
    /* 0000dbce   4  move.w (8,A5),D5 */
    c->pc = RC_ADDR(0x0000dbceu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBD2:
    /* 0000dbd2   4  move.w (a,A5),D6 */
    c->pc = RC_ADDR(0x0000dbd2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBD6:
    /* 0000dbd6   4  clr.w (70c,A4) */
    c->pc = RC_ADDR(0x0000dbd6u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x70cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DBDA:
    /* 0000dbda   4  clr.w (70e,A4) */
    c->pc = RC_ADDR(0x0000dbdau);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] + 0x70eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DBDE:
    /* 0000dbde   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000dbdeu);
    rc_step(c, m);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_DBE0:
    /* 0000dbe0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000dbe0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DBE2:
    /* 0000dbe2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dbe2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DBE4:
    /* 0000dbe4   4  lea (ffff9a68,A4),A0 */
    c->pc = RC_ADDR(0x0000dbe4u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x6598u);

L_DBE8:
    /* 0000dbe8   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000dbe8u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBEC:
    /* 0000dbec   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x0000dbecu);
    rc_step(c, m);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DBEE:
    /* 0000dbee   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000dbeeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBF0:
    /* 0000dbf0   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000dbf0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DBF2:
    /* 0000dbf2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dbf2u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DBF4:
    /* 0000dbf4   4  lea (ffff9a58,A4),A0 */
    c->pc = RC_ADDR(0x0000dbf4u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x65a8u);

L_DBF8:
    /* 0000dbf8   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000dbf8u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DBFC:
    /* 0000dbfc   2  add.w D5,D1 */
    c->pc = RC_ADDR(0x0000dbfcu);
    rc_step(c, m);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DBFE:
    /* 0000dbfe   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000dbfeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC00:
    /* 0000dc00   4  jsr (0000ddf2) */
    c->pc = RC_ADDR(0x0000dc00u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000dc04u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000ddf2u);
    return;

L_DC04:
    /* 0000dc04   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000dc04u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_DC06:
    /* 0000dc06   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000dc06u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_DC08:
    /* 0000dc08   2  beq 0000dc2a */
    c->pc = RC_ADDR(0x0000dc08u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_DC2A;

L_DC0A:
    /* 0000dc0a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000dc0au);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DC0C:
    /* 0000dc0c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dc0cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DC0E:
    /* 0000dc0e   4  lea (ffff9a78,A4),A0 */
    c->pc = RC_ADDR(0x0000dc0eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x6588u);

L_DC12:
    /* 0000dc12   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000dc12u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC16:
    /* 0000dc16   4  add.w D1,(70c,A4) */
    c->pc = RC_ADDR(0x0000dc16u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x70cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_DC1A:
    /* 0000dc1a   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000dc1au);
    rc_step(c, m);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DC1C:
    /* 0000dc1c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dc1cu);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DC1E:
    /* 0000dc1e   4  lea (ffff9a88,A4),A0 */
    c->pc = RC_ADDR(0x0000dc1eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x6578u);

L_DC22:
    /* 0000dc22   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000dc22u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC26:
    /* 0000dc26   4  add.w D1,(70e,A4) */
    c->pc = RC_ADDR(0x0000dc26u);
    rc_step(c, m);
    t3 = (c->a[4] + 0x70eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_DC2A:
    /* 0000dc2a   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000dc2au);
    rc_step(c, m);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_DC2C:
    /* 0000dc2c   6  cmp.l #8,D4 */
    c->pc = RC_ADDR(0x0000dc2cu);
    rc_step(c, m);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_DC32:
    /* 0000dc32   2  blt 0000dbe0 */
    c->pc = RC_ADDR(0x0000dc32u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_DBE0; }

L_DC34:
    /* 0000dc34   6  cmpi.w #ffff,(70c,A4) */
    c->pc = RC_ADDR(0x0000dc34u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_DC3A:
    /* 0000dc3a   2  bge 0000dc42 */
    c->pc = RC_ADDR(0x0000dc3au);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_DC42;

L_DC3C:
    /* 0000dc3c   6  move.w #ffff,(70c,A4) */
    c->pc = RC_ADDR(0x0000dc3cu);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC42:
    /* 0000dc42   6  cmpi.w #1,(70c,A4) */
    c->pc = RC_ADDR(0x0000dc42u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_DC48:
    /* 0000dc48   2  ble 0000dc50 */
    c->pc = RC_ADDR(0x0000dc48u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_DC50;

L_DC4A:
    /* 0000dc4a   6  move.w #1,(70c,A4) */
    c->pc = RC_ADDR(0x0000dc4au);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC50:
    /* 0000dc50   6  cmpi.w #ffff,(70e,A4) */
    c->pc = RC_ADDR(0x0000dc50u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_DC56:
    /* 0000dc56   2  bge 0000dc5e */
    c->pc = RC_ADDR(0x0000dc56u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_DC5E;

L_DC58:
    /* 0000dc58   6  move.w #ffff,(70e,A4) */
    c->pc = RC_ADDR(0x0000dc58u);
    rc_step(c, m);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC5E:
    /* 0000dc5e   6  cmpi.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x0000dc5eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_DC64:
    /* 0000dc64   2  ble 0000dc6c */
    c->pc = RC_ADDR(0x0000dc64u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_DC6C;

L_DC66:
    /* 0000dc66   6  move.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x0000dc66u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC6C:
    /* 0000dc6c   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0000dc6cu);
    rc_step(c, m);
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
    c->a[7] = t3;

L_DC70:
    /* 0000dc70   2  unlk A5 */
    c->pc = RC_ADDR(0x0000dc70u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DC72:
    /* 0000dc72   2  rts */
    c->pc = RC_ADDR(0x0000dc72u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
