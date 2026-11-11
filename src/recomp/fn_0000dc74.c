/* fn_0000dc74 - 172 byte(s), 51 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000dc74(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000dc74u): goto L_DC74;
    case RC_ADDR(0x0000dc78u): goto L_DC78;
    case RC_ADDR(0x0000dc7cu): goto L_DC7C;
    case RC_ADDR(0x0000dc80u): goto L_DC80;
    case RC_ADDR(0x0000dc84u): goto L_DC84;
    case RC_ADDR(0x0000dc88u): goto L_DC88;
    case RC_ADDR(0x0000dc8cu): goto L_DC8C;
    case RC_ADDR(0x0000dc8eu): goto L_DC8E;
    case RC_ADDR(0x0000dc90u): goto L_DC90;
    case RC_ADDR(0x0000dc92u): goto L_DC92;
    case RC_ADDR(0x0000dc96u): goto L_DC96;
    case RC_ADDR(0x0000dc9au): goto L_DC9A;
    case RC_ADDR(0x0000dc9cu): goto L_DC9C;
    case RC_ADDR(0x0000dc9eu): goto L_DC9E;
    case RC_ADDR(0x0000dca0u): goto L_DCA0;
    case RC_ADDR(0x0000dca2u): goto L_DCA2;
    case RC_ADDR(0x0000dca6u): goto L_DCA6;
    case RC_ADDR(0x0000dcaau): goto L_DCAA;
    case RC_ADDR(0x0000dcacu): goto L_DCAC;
    case RC_ADDR(0x0000dcaeu): goto L_DCAE;
    case RC_ADDR(0x0000dcb0u): goto L_DCB0;
    case RC_ADDR(0x0000dcb2u): goto L_DCB2;
    case RC_ADDR(0x0000dcb4u): goto L_DCB4;
    case RC_ADDR(0x0000dcb6u): goto L_DCB6;
    case RC_ADDR(0x0000dcb8u): goto L_DCB8;
    case RC_ADDR(0x0000dcbau): goto L_DCBA;
    case RC_ADDR(0x0000dcbeu): goto L_DCBE;
    case RC_ADDR(0x0000dcc2u): goto L_DCC2;
    case RC_ADDR(0x0000dcc6u): goto L_DCC6;
    case RC_ADDR(0x0000dcc8u): goto L_DCC8;
    case RC_ADDR(0x0000dccau): goto L_DCCA;
    case RC_ADDR(0x0000dcceu): goto L_DCCE;
    case RC_ADDR(0x0000dcd2u): goto L_DCD2;
    case RC_ADDR(0x0000dcd6u): goto L_DCD6;
    case RC_ADDR(0x0000dcd8u): goto L_DCD8;
    case RC_ADDR(0x0000dcdeu): goto L_DCDE;
    case RC_ADDR(0x0000dce0u): goto L_DCE0;
    case RC_ADDR(0x0000dce6u): goto L_DCE6;
    case RC_ADDR(0x0000dce8u): goto L_DCE8;
    case RC_ADDR(0x0000dceeu): goto L_DCEE;
    case RC_ADDR(0x0000dcf4u): goto L_DCF4;
    case RC_ADDR(0x0000dcf6u): goto L_DCF6;
    case RC_ADDR(0x0000dcfcu): goto L_DCFC;
    case RC_ADDR(0x0000dd02u): goto L_DD02;
    case RC_ADDR(0x0000dd04u): goto L_DD04;
    case RC_ADDR(0x0000dd0au): goto L_DD0A;
    case RC_ADDR(0x0000dd10u): goto L_DD10;
    case RC_ADDR(0x0000dd12u): goto L_DD12;
    case RC_ADDR(0x0000dd18u): goto L_DD18;
    case RC_ADDR(0x0000dd1cu): goto L_DD1C;
    case RC_ADDR(0x0000dd1eu): goto L_DD1E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_DC74:
    /* 0000dc74   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000dc74u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_DC78:
    /* 0000dc78   4  movem.l { A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000dc78u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_DC7C:
    /* 0000dc7c   4  move.w (8,A5),D5 */
    c->pc = RC_ADDR(0x0000dc7cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC80:
    /* 0000dc80   4  move.w (a,A5),D6 */
    c->pc = RC_ADDR(0x0000dc80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 6, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC84:
    /* 0000dc84   4  clr.w (70c,A4) */
    c->pc = RC_ADDR(0x0000dc84u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x70cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DC88:
    /* 0000dc88   4  clr.w (70e,A4) */
    c->pc = RC_ADDR(0x0000dc88u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x70eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DC8C:
    /* 0000dc8c   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x0000dc8cu);
    rc_step(c, m, 4);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_DC8E:
    /* 0000dc8e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000dc8eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DC90:
    /* 0000dc90   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dc90u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DC92:
    /* 0000dc92   4  lea (ffff9aa8,A4),A0 */
    c->pc = RC_ADDR(0x0000dc92u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6558u);

L_DC96:
    /* 0000dc96   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000dc96u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC9A:
    /* 0000dc9a   2  add.w D6,D1 */
    c->pc = RC_ADDR(0x0000dc9au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DC9C:
    /* 0000dc9c   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000dc9cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DC9E:
    /* 0000dc9e   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000dc9eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DCA0:
    /* 0000dca0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dca0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DCA2:
    /* 0000dca2   4  lea (ffff9a98,A4),A0 */
    c->pc = RC_ADDR(0x0000dca2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6568u);

L_DCA6:
    /* 0000dca6   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000dca6u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCAA:
    /* 0000dcaa   2  add.w D5,D1 */
    c->pc = RC_ADDR(0x0000dcaau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_DCAC:
    /* 0000dcac   2  move.w D1,-(A7) */
    c->pc = RC_ADDR(0x0000dcacu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 1, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCAE:
    /* 0000dcae   2  bsr 0000dd20 */
    c->pc = RC_ADDR(0x0000dcaeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000dcb0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000dd20u);
    return;

L_DCB0:
    /* 0000dcb0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000dcb0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_DCB2:
    /* 0000dcb2   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000dcb2u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_DCB4:
    /* 0000dcb4   2  beq 0000dcd6 */
    c->pc = RC_ADDR(0x0000dcb4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_DCD6;

L_DCB6:
    /* 0000dcb6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000dcb6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DCB8:
    /* 0000dcb8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dcb8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DCBA:
    /* 0000dcba   4  lea (ffff9ab8,A4),A0 */
    c->pc = RC_ADDR(0x0000dcbau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6548u);

L_DCBE:
    /* 0000dcbe   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000dcbeu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCC2:
    /* 0000dcc2   4  add.w D1,(70c,A4) */
    c->pc = RC_ADDR(0x0000dcc2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x70cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_DCC6:
    /* 0000dcc6   2  move.l D4,D0 */
    c->pc = RC_ADDR(0x0000dcc6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_DCC8:
    /* 0000dcc8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000dcc8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_DCCA:
    /* 0000dcca   4  lea (ffff9ac8,A4),A0 */
    c->pc = RC_ADDR(0x0000dccau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6538u);

L_DCCE:
    /* 0000dcce   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000dcceu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCD2:
    /* 0000dcd2   4  add.w D1,(70e,A4) */
    c->pc = RC_ADDR(0x0000dcd2u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x70eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_DCD6:
    /* 0000dcd6   2  addq.l #1,D4 */
    c->pc = RC_ADDR(0x0000dcd6u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_DCD8:
    /* 0000dcd8   6  cmp.l #8,D4 */
    c->pc = RC_ADDR(0x0000dcd8u);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 4, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_DCDE:
    /* 0000dcde   2  blt 0000dc8e */
    c->pc = RC_ADDR(0x0000dcdeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_DC8E; }

L_DCE0:
    /* 0000dce0   6  cmpi.w #ffff,(70c,A4) */
    c->pc = RC_ADDR(0x0000dce0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_DCE6:
    /* 0000dce6   2  bge 0000dcee */
    c->pc = RC_ADDR(0x0000dce6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_DCEE;

L_DCE8:
    /* 0000dce8   6  move.w #ffff,(70c,A4) */
    c->pc = RC_ADDR(0x0000dce8u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCEE:
    /* 0000dcee   6  cmpi.w #1,(70c,A4) */
    c->pc = RC_ADDR(0x0000dceeu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70cu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_DCF4:
    /* 0000dcf4   2  ble 0000dcfc */
    c->pc = RC_ADDR(0x0000dcf4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_DCFC;

L_DCF6:
    /* 0000dcf6   6  move.w #1,(70c,A4) */
    c->pc = RC_ADDR(0x0000dcf6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DCFC:
    /* 0000dcfc   6  cmpi.w #ffff,(70e,A4) */
    c->pc = RC_ADDR(0x0000dcfcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_DD02:
    /* 0000dd02   2  bge 0000dd0a */
    c->pc = RC_ADDR(0x0000dd02u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_DD0A;

L_DD04:
    /* 0000dd04   6  move.w #ffff,(70e,A4) */
    c->pc = RC_ADDR(0x0000dd04u);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD0A:
    /* 0000dd0a   6  cmpi.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x0000dd0au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x70eu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_DD10:
    /* 0000dd10   2  ble 0000dd18 */
    c->pc = RC_ADDR(0x0000dd10u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_DD18;

L_DD12:
    /* 0000dd12   6  move.w #1,(70e,A4) */
    c->pc = RC_ADDR(0x0000dd12u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x70eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DD18:
    /* 0000dd18   4  movem.l (SP)+,{ D4 D5 D6 } */
    c->pc = RC_ADDR(0x0000dd18u);
    rc_step(c, m, 12);
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

L_DD1C:
    /* 0000dd1c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000dd1cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DD1E:
    /* 0000dd1e   2  rts */
    c->pc = RC_ADDR(0x0000dd1eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
