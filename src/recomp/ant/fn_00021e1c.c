/* fn_00021e1c - 110 byte(s), 40 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021e1c(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00021e1cu): goto L_21E1C;
    case RC_ADDR(0x00021e20u): goto L_21E20;
    case RC_ADDR(0x00021e24u): goto L_21E24;
    case RC_ADDR(0x00021e28u): goto L_21E28;
    case RC_ADDR(0x00021e2cu): goto L_21E2C;
    case RC_ADDR(0x00021e2eu): goto L_21E2E;
    case RC_ADDR(0x00021e30u): goto L_21E30;
    case RC_ADDR(0x00021e34u): goto L_21E34;
    case RC_ADDR(0x00021e36u): goto L_21E36;
    case RC_ADDR(0x00021e3au): goto L_21E3A;
    case RC_ADDR(0x00021e3eu): goto L_21E3E;
    case RC_ADDR(0x00021e42u): goto L_21E42;
    case RC_ADDR(0x00021e46u): goto L_21E46;
    case RC_ADDR(0x00021e48u): goto L_21E48;
    case RC_ADDR(0x00021e4au): goto L_21E4A;
    case RC_ADDR(0x00021e4cu): goto L_21E4C;
    case RC_ADDR(0x00021e4eu): goto L_21E4E;
    case RC_ADDR(0x00021e52u): goto L_21E52;
    case RC_ADDR(0x00021e54u): goto L_21E54;
    case RC_ADDR(0x00021e56u): goto L_21E56;
    case RC_ADDR(0x00021e5au): goto L_21E5A;
    case RC_ADDR(0x00021e5cu): goto L_21E5C;
    case RC_ADDR(0x00021e5eu): goto L_21E5E;
    case RC_ADDR(0x00021e62u): goto L_21E62;
    case RC_ADDR(0x00021e64u): goto L_21E64;
    case RC_ADDR(0x00021e66u): goto L_21E66;
    case RC_ADDR(0x00021e68u): goto L_21E68;
    case RC_ADDR(0x00021e6au): goto L_21E6A;
    case RC_ADDR(0x00021e6cu): goto L_21E6C;
    case RC_ADDR(0x00021e6eu): goto L_21E6E;
    case RC_ADDR(0x00021e70u): goto L_21E70;
    case RC_ADDR(0x00021e72u): goto L_21E72;
    case RC_ADDR(0x00021e76u): goto L_21E76;
    case RC_ADDR(0x00021e78u): goto L_21E78;
    case RC_ADDR(0x00021e7au): goto L_21E7A;
    case RC_ADDR(0x00021e7cu): goto L_21E7C;
    case RC_ADDR(0x00021e80u): goto L_21E80;
    case RC_ADDR(0x00021e84u): goto L_21E84;
    case RC_ADDR(0x00021e86u): goto L_21E86;
    case RC_ADDR(0x00021e88u): goto L_21E88;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21E1C:
    /* 00021e1c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00021e1cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_21E20:
    /* 00021e20   4  movem.l { D5 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x00021e20u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_21E24:
    /* 00021e24   4  subq.w #1,(10,A5) */
    c->pc = RC_ADDR(0x00021e24u);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_21E28:
    /* 00021e28   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x00021e28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21E2C:
    /* 00021e2c   2  asl.w #1,D0 */
    c->pc = RC_ADDR(0x00021e2cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_21E2E:
    /* 00021e2e   2  move.w D0,D4 */
    c->pc = RC_ADDR(0x00021e2eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 4, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21E30:
    /* 00021e30   4  add.w #180,D4 */
    c->pc = RC_ADDR(0x00021e30u);
    rc_step(c, m, 10);
    t0 = 0x00000180u;
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_21E34:
    /* 00021e34   2  bra 00021e80 */
    c->pc = RC_ADDR(0x00021e34u);
    rc_step(c, m, 10);
    goto L_21E80;

L_21E36:
    /* 00021e36   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00021e36u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_21E3A:
    /* 00021e3a   4  movea.l (4,A0),A2 */
    c->pc = RC_ADDR(0x00021e3au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[2] = t0;

L_21E3E:
    /* 00021e3e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00021e3eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_21E42:
    /* 00021e42   4  move.w (8,A0),D5 */
    c->pc = RC_ADDR(0x00021e42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x8u));
    rc_d_set(c, 5, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21E46:
    /* 00021e46   2  bra 00021e68 */
    c->pc = RC_ADDR(0x00021e46u);
    rc_step(c, m, 10);
    goto L_21E68;

L_21E48:
    /* 00021e48   2  move.w (A2),D0 */
    c->pc = RC_ADDR(0x00021e48u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[2]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21E4A:
    /* 00021e4a   2  cmp.w D4,D0 */
    c->pc = RC_ADDR(0x00021e4au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_21E4C:
    /* 00021e4c   2  bne 00021e64 */
    c->pc = RC_ADDR(0x00021e4cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21E64;

L_21E4E:
    /* 00021e4e   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x00021e4eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21E52:
    /* 00021e52   2  ext.l D0 */
    c->pc = RC_ADDR(0x00021e52u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_21E54:
    /* 00021e54   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00021e54u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_21E56:
    /* 00021e56   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00021e56u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_21E5A:
    /* 00021e5a   2  movea.l A2,A1 */
    c->pc = RC_ADDR(0x00021e5au);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[1] = t0;

L_21E5C:
    /* 00021e5c   2  addq.l #2,A1 */
    c->pc = RC_ADDR(0x00021e5cu);
    rc_step(c, m, 8);
    c->a[1] += 0x00000002u;

L_21E5E:
    /* 00021e5e   4  move.l A1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00021e5eu);
    rc_step(c, m, 18);
    t0 = rc_a_get(c, 1, RC_L);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21E62:
    /* 00021e62   2  bra 00021e6c */
    c->pc = RC_ADDR(0x00021e62u);
    rc_step(c, m, 10);
    goto L_21E6C;

L_21E64:
    /* 00021e64   2  addq.l #4,A2 */
    c->pc = RC_ADDR(0x00021e64u);
    rc_step(c, m, 8);
    c->a[2] += 0x00000004u;

L_21E66:
    /* 00021e66   2  subq.w #1,D5 */
    c->pc = RC_ADDR(0x00021e66u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 5, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_W, t2);

L_21E68:
    /* 00021e68   2  tst.w D5 */
    c->pc = RC_ADDR(0x00021e68u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_21E6A:
    /* 00021e6a   2  bgt 00021e48 */
    c->pc = RC_ADDR(0x00021e6au);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) { rc_tick(); goto L_21E48; }

L_21E6C:
    /* 00021e6c   2  tst.w D5 */
    c->pc = RC_ADDR(0x00021e6cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_21E6E:
    /* 00021e6e   2  bne 00021e7a */
    c->pc = RC_ADDR(0x00021e6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21E7A;

L_21E70:
    /* 00021e70   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021e70u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21E72:
    /* 00021e72   4  movem.l (SP)+,{ D4 D5 A2 } */
    c->pc = RC_ADDR(0x00021e72u);
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
    c->a[2] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_21E76:
    /* 00021e76   2  unlk A5 */
    c->pc = RC_ADDR(0x00021e76u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21E78:
    /* 00021e78   2  rts */
    c->pc = RC_ADDR(0x00021e78u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_21E7A:
    /* 00021e7a   2  subq.w #2,D4 */
    c->pc = RC_ADDR(0x00021e7au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_21E7C:
    /* 00021e7c   4  subq.w #1,(10,A5) */
    c->pc = RC_ADDR(0x00021e7cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] + 0x10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_21E80:
    /* 00021e80   4  tst.w (10,A5) */
    c->pc = RC_ADDR(0x00021e80u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_21E84:
    /* 00021e84   2  bge 00021e36 */
    c->pc = RC_ADDR(0x00021e84u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) { rc_tick(); goto L_21E36; }

L_21E86:
    /* 00021e86   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00021e86u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21E88:
    /* 00021e88   2  bra 00021e72 */
    c->pc = RC_ADDR(0x00021e88u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21E72;

}
