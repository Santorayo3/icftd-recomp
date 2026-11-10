/* fn_00020e02 - 142 byte(s), 48 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00020e02(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00020e02u): goto L_20E02;
    case RC_ADDR(0x00020e06u): goto L_20E06;
    case RC_ADDR(0x00020e0au): goto L_20E0A;
    case RC_ADDR(0x00020e0eu): goto L_20E0E;
    case RC_ADDR(0x00020e14u): goto L_20E14;
    case RC_ADDR(0x00020e16u): goto L_20E16;
    case RC_ADDR(0x00020e1au): goto L_20E1A;
    case RC_ADDR(0x00020e1cu): goto L_20E1C;
    case RC_ADDR(0x00020e1eu): goto L_20E1E;
    case RC_ADDR(0x00020e22u): goto L_20E22;
    case RC_ADDR(0x00020e24u): goto L_20E24;
    case RC_ADDR(0x00020e28u): goto L_20E28;
    case RC_ADDR(0x00020e2au): goto L_20E2A;
    case RC_ADDR(0x00020e2cu): goto L_20E2C;
    case RC_ADDR(0x00020e2eu): goto L_20E2E;
    case RC_ADDR(0x00020e30u): goto L_20E30;
    case RC_ADDR(0x00020e34u): goto L_20E34;
    case RC_ADDR(0x00020e36u): goto L_20E36;
    case RC_ADDR(0x00020e38u): goto L_20E38;
    case RC_ADDR(0x00020e3au): goto L_20E3A;
    case RC_ADDR(0x00020e3eu): goto L_20E3E;
    case RC_ADDR(0x00020e42u): goto L_20E42;
    case RC_ADDR(0x00020e44u): goto L_20E44;
    case RC_ADDR(0x00020e48u): goto L_20E48;
    case RC_ADDR(0x00020e4au): goto L_20E4A;
    case RC_ADDR(0x00020e4cu): goto L_20E4C;
    case RC_ADDR(0x00020e4eu): goto L_20E4E;
    case RC_ADDR(0x00020e54u): goto L_20E54;
    case RC_ADDR(0x00020e58u): goto L_20E58;
    case RC_ADDR(0x00020e5au): goto L_20E5A;
    case RC_ADDR(0x00020e5cu): goto L_20E5C;
    case RC_ADDR(0x00020e60u): goto L_20E60;
    case RC_ADDR(0x00020e64u): goto L_20E64;
    case RC_ADDR(0x00020e66u): goto L_20E66;
    case RC_ADDR(0x00020e6au): goto L_20E6A;
    case RC_ADDR(0x00020e6eu): goto L_20E6E;
    case RC_ADDR(0x00020e70u): goto L_20E70;
    case RC_ADDR(0x00020e72u): goto L_20E72;
    case RC_ADDR(0x00020e76u): goto L_20E76;
    case RC_ADDR(0x00020e78u): goto L_20E78;
    case RC_ADDR(0x00020e7au): goto L_20E7A;
    case RC_ADDR(0x00020e7eu): goto L_20E7E;
    case RC_ADDR(0x00020e80u): goto L_20E80;
    case RC_ADDR(0x00020e82u): goto L_20E82;
    case RC_ADDR(0x00020e86u): goto L_20E86;
    case RC_ADDR(0x00020e88u): goto L_20E88;
    case RC_ADDR(0x00020e8cu): goto L_20E8C;
    case RC_ADDR(0x00020e8eu): goto L_20E8E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20E02:
    /* 00020e02   4  link.w A5,#0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e02u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20E06:
    /* 00020e06   4  movem.l { D5 A3 },-(SP) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e06u);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_20E0A:
    /* 00020e0a   4  movea.l (e,A5),A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e0au);
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    c->a[2] = t0;

L_20E0E:
    /* 00020e0e   6  cmpi.w #4,(12,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e0eu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_20E14:
    /* 00020e14   2  bne 00020e1e */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e14u);
    if (rc_cond(c, 6)) goto L_20E1E;

L_20E16:
    /* 00020e16   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e16u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20E1A:
    /* 00020e1a   2  move.l (A0),D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e1au);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20E1C:
    /* 00020e1c   2  bra 00020e3a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e1cu);
    goto L_20E3A;

L_20E1E:
    /* 00020e1e   4  tst.w (c,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e1eu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_20E22:
    /* 00020e22   2  ble 00020e30 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e22u);
    if (rc_cond(c, 15)) goto L_20E30;

L_20E24:
    /* 00020e24   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e24u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20E28:
    /* 00020e28   2  moveq #0,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e28u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20E2A:
    /* 00020e2a   2  move.w (A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e2au);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E2C:
    /* 00020e2c   2  move.l D0,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e2cu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20E2E:
    /* 00020e2e   2  bra 00020e3a */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e2eu);
    goto L_20E3A;

L_20E30:
    /* 00020e30   4  movea.l (8,A5),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e30u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_20E34:
    /* 00020e34   2  move.w (A0),D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e34u);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E36:
    /* 00020e36   2  ext.l D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e36u);
    rc_ext_l(c, 0);

L_20E38:
    /* 00020e38   2  move.l D0,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e38u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20E3A:
    /* 00020e3a   4  clr.w (12,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e3au);
    rc_wr16(c, m, (c->a[5] + 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20E3E:
    /* 00020e3e   4  tst.w (c,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e3eu);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_20E42:
    /* 00020e42   2  bge 00020e54 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e42u);
    if (rc_cond(c, 12)) goto L_20E54;

L_20E44:
    /* 00020e44   4  neg.w (c,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e44u);
    t3 = (c->a[5] + 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20E48:
    /* 00020e48   2  tst.l D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e48u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_20E4A:
    /* 00020e4a   2  bge 00020e54 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e4au);
    if (rc_cond(c, 12)) goto L_20E54;

L_20E4C:
    /* 00020e4c   2  neg.l D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e4cu);
    t1 = rc_d_get(c, 4, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 4, RC_L, t2);

L_20E4E:
    /* 00020e4e   6  move.w #1,(12,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e4eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E54:
    /* 00020e54   4  move.w (c,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e54u);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E58:
    /* 00020e58   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e58u);
    rc_ext_l(c, 1);

L_20E5A:
    /* 00020e5a   2  move.l D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e5au);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20E5C:
    /* 00020e5c   4  jsr (000211ee) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e5cu);
    rc_push32(c, m, RC_ADDR(0x00020e60u));
    rc_depth++;
    c->pc = RC_ADDR(0x000211eeu);
    return;

L_20E60:
    /* 00020e60   4  lea (ffffcd2a,A4),A0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e60u);
    c->a[0] = (c->a[4] - 0x32d6u);

L_20E64:
    /* 00020e64   2  subq.l #1,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e64u);
    c->a[2] -= 0x00000001u;

L_20E66:
    /* 00020e66   4  move.b (0,A0,D0.w),(A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e66u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_B);

L_20E6A:
    /* 00020e6a   4  move.w (c,A5),D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e6au);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E6E:
    /* 00020e6e   2  ext.l D1 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e6eu);
    rc_ext_l(c, 1);

L_20E70:
    /* 00020e70   2  move.l D4,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e70u);
    t0 = rc_d_get(c, 4, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20E72:
    /* 00020e72   4  jsr (ffff82de,A4) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e72u);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x00020e76u));
    rc_depth++;
    c->pc = RC_ADDR(0x000211fau);
    return;

L_20E76:
    /* 00020e76   2  move.l D0,D4 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e76u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20E78:
    /* 00020e78   2  bne 00020e54 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e78u);
    if (rc_cond(c, 6)) { rc_tick(); goto L_20E54; }

L_20E7A:
    /* 00020e7a   4  tst.w (12,A5) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e7au);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_20E7E:
    /* 00020e7e   2  beq 00020e86 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e7eu);
    if (rc_cond(c, 7)) goto L_20E86;

L_20E80:
    /* 00020e80   2  subq.l #1,A2 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e80u);
    c->a[2] -= 0x00000001u;

L_20E82:
    /* 00020e82   4  move.b #2d,(A2) */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e82u);
    t0 = 0x0000002du;
    rc_wr8(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_B);

L_20E86:
    /* 00020e86   2  move.l A2,D0 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e86u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20E88:
    /* 00020e88   4  movem.l (SP)+,{ D4 A2 } */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e88u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_20E8C:
    /* 00020e8c   2  unlk A5 */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e8cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_20E8E:
    /* 00020e8e   2  rts */
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020e8eu);
    rc_ret(c, m);
    return;

}
