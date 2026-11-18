/* fn_0001ea3a - 194 byte(s), 57 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001ea3a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001ea3au): goto L_1EA3A;
    case RC_ADDR(0x0001ea3eu): goto L_1EA3E;
    case RC_ADDR(0x0001ea44u): goto L_1EA44;
    case RC_ADDR(0x0001ea46u): goto L_1EA46;
    case RC_ADDR(0x0001ea4cu): goto L_1EA4C;
    case RC_ADDR(0x0001ea4eu): goto L_1EA4E;
    case RC_ADDR(0x0001ea52u): goto L_1EA52;
    case RC_ADDR(0x0001ea56u): goto L_1EA56;
    case RC_ADDR(0x0001ea58u): goto L_1EA58;
    case RC_ADDR(0x0001ea5cu): goto L_1EA5C;
    case RC_ADDR(0x0001ea60u): goto L_1EA60;
    case RC_ADDR(0x0001ea62u): goto L_1EA62;
    case RC_ADDR(0x0001ea68u): goto L_1EA68;
    case RC_ADDR(0x0001ea6cu): goto L_1EA6C;
    case RC_ADDR(0x0001ea70u): goto L_1EA70;
    case RC_ADDR(0x0001ea72u): goto L_1EA72;
    case RC_ADDR(0x0001ea76u): goto L_1EA76;
    case RC_ADDR(0x0001ea7au): goto L_1EA7A;
    case RC_ADDR(0x0001ea7cu): goto L_1EA7C;
    case RC_ADDR(0x0001ea7eu): goto L_1EA7E;
    case RC_ADDR(0x0001ea82u): goto L_1EA82;
    case RC_ADDR(0x0001ea88u): goto L_1EA88;
    case RC_ADDR(0x0001ea8au): goto L_1EA8A;
    case RC_ADDR(0x0001ea8eu): goto L_1EA8E;
    case RC_ADDR(0x0001ea92u): goto L_1EA92;
    case RC_ADDR(0x0001ea96u): goto L_1EA96;
    case RC_ADDR(0x0001ea9au): goto L_1EA9A;
    case RC_ADDR(0x0001ea9cu): goto L_1EA9C;
    case RC_ADDR(0x0001eaa0u): goto L_1EAA0;
    case RC_ADDR(0x0001eaa2u): goto L_1EAA2;
    case RC_ADDR(0x0001eaa6u): goto L_1EAA6;
    case RC_ADDR(0x0001eaa8u): goto L_1EAA8;
    case RC_ADDR(0x0001eaacu): goto L_1EAAC;
    case RC_ADDR(0x0001eaaeu): goto L_1EAAE;
    case RC_ADDR(0x0001eab2u): goto L_1EAB2;
    case RC_ADDR(0x0001eab4u): goto L_1EAB4;
    case RC_ADDR(0x0001eab8u): goto L_1EAB8;
    case RC_ADDR(0x0001eabau): goto L_1EABA;
    case RC_ADDR(0x0001eabcu): goto L_1EABC;
    case RC_ADDR(0x0001eac0u): goto L_1EAC0;
    case RC_ADDR(0x0001eac2u): goto L_1EAC2;
    case RC_ADDR(0x0001eac4u): goto L_1EAC4;
    case RC_ADDR(0x0001eac8u): goto L_1EAC8;
    case RC_ADDR(0x0001eacau): goto L_1EACA;
    case RC_ADDR(0x0001eaccu): goto L_1EACC;
    case RC_ADDR(0x0001ead0u): goto L_1EAD0;
    case RC_ADDR(0x0001ead4u): goto L_1EAD4;
    case RC_ADDR(0x0001ead8u): goto L_1EAD8;
    case RC_ADDR(0x0001eadcu): goto L_1EADC;
    case RC_ADDR(0x0001eae0u): goto L_1EAE0;
    case RC_ADDR(0x0001eae4u): goto L_1EAE4;
    case RC_ADDR(0x0001eaeau): goto L_1EAEA;
    case RC_ADDR(0x0001eaecu): goto L_1EAEC;
    case RC_ADDR(0x0001eaf0u): goto L_1EAF0;
    case RC_ADDR(0x0001eaf2u): goto L_1EAF2;
    case RC_ADDR(0x0001eaf8u): goto L_1EAF8;
    case RC_ADDR(0x0001eafau): goto L_1EAFA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1EA3A:
    /* 0001ea3a   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x0001ea3au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_1EA3E:
    /* 0001ea3e   6  cmpi.w #1,(30d0,A4) */
    c->pc = RC_ADDR(0x0001ea3eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30d0u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_1EA44:
    /* 0001ea44   2  ble 0001ea72 */
    c->pc = RC_ADDR(0x0001ea44u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1EA72;

L_1EA46:
    /* 0001ea46   6  cmpi.w #3,(30d0,A4) */
    c->pc = RC_ADDR(0x0001ea46u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30d0u));
    rc_cmp(c, RC_W, t0, 0x00000003u);

L_1EA4C:
    /* 0001ea4c   2  bne 0001ea62 */
    c->pc = RC_ADDR(0x0001ea4cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1EA62;

L_1EA4E:
    /* 0001ea4e   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0001ea4eu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA52:
    /* 0001ea52   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0001ea52u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0001ea56u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_1EA56:
    /* 0001ea56   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001ea56u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1EA58:
    /* 0001ea58   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001ea58u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA5C:
    /* 0001ea5c   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0001ea5cu);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0001ea60u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_1EA60:
    /* 0001ea60   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0001ea60u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1EA62:
    /* 0001ea62   6  move.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ea62u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA68:
    /* 0001ea68   4  move.w (30d6,A4),D0 */
    c->pc = RC_ADDR(0x0001ea68u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30d6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA6C:
    /* 0001ea6c   4  add.w D0,(30d6,A4) */
    c->pc = RC_ADDR(0x0001ea6cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x30d6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EA70:
    /* 0001ea70   2  bra 0001ea76 */
    c->pc = RC_ADDR(0x0001ea70u);
    rc_step(c, m, 10);
    goto L_1EA76;

L_1EA72:
    /* 0001ea72   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0001ea72u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1EA76:
    /* 0001ea76   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x0001ea76u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EA7A:
    /* 0001ea7a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001ea7au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1EA7C:
    /* 0001ea7c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001ea7cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1EA7E:
    /* 0001ea7e   4  lea (30c2,A4),A0 */
    c->pc = RC_ADDR(0x0001ea7eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x30c2u);

L_1EA82:
    /* 0001ea82   6  move.l (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x0001ea82u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EA88:
    /* 0001ea88   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001ea88u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1EA8A:
    /* 0001ea8a   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001ea8au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1EA8E:
    /* 0001ea8e   4  move.l (24,A0),-(A7) */
    c->pc = RC_ADDR(0x0001ea8eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x24u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EA92:
    /* 0001ea92   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001ea92u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1EA96:
    /* 0001ea96   4  move.l (20,A0),-(A7) */
    c->pc = RC_ADDR(0x0001ea96u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x20u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EA9A:
    /* 0001ea9a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001ea9au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1EA9C:
    /* 0001ea9c   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001ea9cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1EAA0:
    /* 0001eaa0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001eaa0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EAA2:
    /* 0001eaa2   4  move.w (2,A0),D0 */
    c->pc = RC_ADDR(0x0001eaa2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EAA6:
    /* 0001eaa6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001eaa6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EAA8:
    /* 0001eaa8   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0001eaa8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_1EAAC:
    /* 0001eaac   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001eaacu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1EAAE:
    /* 0001eaae   4  move.b (4,A0),D0 */
    c->pc = RC_ADDR(0x0001eaaeu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1EAB2:
    /* 0001eab2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001eab2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EAB4:
    /* 0001eab4   4  move.w (30d4,A4),D0 */
    c->pc = RC_ADDR(0x0001eab4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30d4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EAB8:
    /* 0001eab8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001eab8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1EABA:
    /* 0001eaba   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001eabau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EABC:
    /* 0001eabc   4  move.w (30d2,A4),D0 */
    c->pc = RC_ADDR(0x0001eabcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30d2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EAC0:
    /* 0001eac0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001eac0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1EAC2:
    /* 0001eac2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0001eac2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EAC4:
    /* 0001eac4   4  pea (2cc8,A4) */
    c->pc = RC_ADDR(0x0001eac4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x2cc8u));

L_1EAC8:
    /* 0001eac8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001eac8u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1EACA:
    /* 0001eaca   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001eacau);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1EACC:
    /* 0001eacc   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x0001eaccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1EAD0:
    /* 0001ead0   4  jsr (ffff8260,A4) */
    c->pc = RC_ADDR(0x0001ead0u);
    rc_step(c, m, 18);
    /* vector 101 */
    rc_push32(c, m, RC_ADDR(0x0001ead4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d56u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00020940u);
    return;

L_1EAD4:
    /* 0001ead4   4  lea (30,A7),A7 */
    c->pc = RC_ADDR(0x0001ead4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x30u);

L_1EAD8:
    /* 0001ead8   4  move.w (30d6,A4),D0 */
    c->pc = RC_ADDR(0x0001ead8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30d6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EADC:
    /* 0001eadc   4  add.w D0,(30d2,A4) */
    c->pc = RC_ADDR(0x0001eadcu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x30d2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EAE0:
    /* 0001eae0   4  addq.w #1,(30d0,A4) */
    c->pc = RC_ADDR(0x0001eae0u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x30d0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1EAE4:
    /* 0001eae4   6  cmpi.w #c,(30d0,A4) */
    c->pc = RC_ADDR(0x0001eae4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30d0u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_1EAEA:
    /* 0001eaea   2  bgt 0001eaf2 */
    c->pc = RC_ADDR(0x0001eaeau);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_1EAF2;

L_1EAEC:
    /* 0001eaec   4  tst.w (2ca6,A4) */
    c->pc = RC_ADDR(0x0001eaecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2ca6u));
    rc_set_nzvc(c, t0, RC_W);

L_1EAF0:
    /* 0001eaf0   2  beq 0001eaf8 */
    c->pc = RC_ADDR(0x0001eaf0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1EAF8;

L_1EAF2:
    /* 0001eaf2   6  move.w #1,(2ca8,A4) */
    c->pc = RC_ADDR(0x0001eaf2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x2ca8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1EAF8:
    /* 0001eaf8   2  unlk A5 */
    c->pc = RC_ADDR(0x0001eaf8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1EAFA:
    /* 0001eafa   2  rts */
    c->pc = RC_ADDR(0x0001eafau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
