/* fn_0001fe32 - 172 byte(s), 60 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001fe32(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fe32u): goto L_1FE32;
    case RC_ADDR(0x0001fe36u): goto L_1FE36;
    case RC_ADDR(0x0001fe3au): goto L_1FE3A;
    case RC_ADDR(0x0001fe3eu): goto L_1FE3E;
    case RC_ADDR(0x0001fe42u): goto L_1FE42;
    case RC_ADDR(0x0001fe44u): goto L_1FE44;
    case RC_ADDR(0x0001fe46u): goto L_1FE46;
    case RC_ADDR(0x0001fe4au): goto L_1FE4A;
    case RC_ADDR(0x0001fe4cu): goto L_1FE4C;
    case RC_ADDR(0x0001fe4eu): goto L_1FE4E;
    case RC_ADDR(0x0001fe52u): goto L_1FE52;
    case RC_ADDR(0x0001fe54u): goto L_1FE54;
    case RC_ADDR(0x0001fe58u): goto L_1FE58;
    case RC_ADDR(0x0001fe5cu): goto L_1FE5C;
    case RC_ADDR(0x0001fe5eu): goto L_1FE5E;
    case RC_ADDR(0x0001fe60u): goto L_1FE60;
    case RC_ADDR(0x0001fe62u): goto L_1FE62;
    case RC_ADDR(0x0001fe66u): goto L_1FE66;
    case RC_ADDR(0x0001fe68u): goto L_1FE68;
    case RC_ADDR(0x0001fe6cu): goto L_1FE6C;
    case RC_ADDR(0x0001fe6eu): goto L_1FE6E;
    case RC_ADDR(0x0001fe72u): goto L_1FE72;
    case RC_ADDR(0x0001fe74u): goto L_1FE74;
    case RC_ADDR(0x0001fe78u): goto L_1FE78;
    case RC_ADDR(0x0001fe7au): goto L_1FE7A;
    case RC_ADDR(0x0001fe7cu): goto L_1FE7C;
    case RC_ADDR(0x0001fe80u): goto L_1FE80;
    case RC_ADDR(0x0001fe82u): goto L_1FE82;
    case RC_ADDR(0x0001fe84u): goto L_1FE84;
    case RC_ADDR(0x0001fe88u): goto L_1FE88;
    case RC_ADDR(0x0001fe8cu): goto L_1FE8C;
    case RC_ADDR(0x0001fe8eu): goto L_1FE8E;
    case RC_ADDR(0x0001fe92u): goto L_1FE92;
    case RC_ADDR(0x0001fe94u): goto L_1FE94;
    case RC_ADDR(0x0001fe98u): goto L_1FE98;
    case RC_ADDR(0x0001fe9au): goto L_1FE9A;
    case RC_ADDR(0x0001fe9cu): goto L_1FE9C;
    case RC_ADDR(0x0001fea0u): goto L_1FEA0;
    case RC_ADDR(0x0001fea2u): goto L_1FEA2;
    case RC_ADDR(0x0001fea4u): goto L_1FEA4;
    case RC_ADDR(0x0001fea6u): goto L_1FEA6;
    case RC_ADDR(0x0001fea8u): goto L_1FEA8;
    case RC_ADDR(0x0001feacu): goto L_1FEAC;
    case RC_ADDR(0x0001feb0u): goto L_1FEB0;
    case RC_ADDR(0x0001feb2u): goto L_1FEB2;
    case RC_ADDR(0x0001feb4u): goto L_1FEB4;
    case RC_ADDR(0x0001feb6u): goto L_1FEB6;
    case RC_ADDR(0x0001febau): goto L_1FEBA;
    case RC_ADDR(0x0001febcu): goto L_1FEBC;
    case RC_ADDR(0x0001fec0u): goto L_1FEC0;
    case RC_ADDR(0x0001fec2u): goto L_1FEC2;
    case RC_ADDR(0x0001fec4u): goto L_1FEC4;
    case RC_ADDR(0x0001fec6u): goto L_1FEC6;
    case RC_ADDR(0x0001fecau): goto L_1FECA;
    case RC_ADDR(0x0001feccu): goto L_1FECC;
    case RC_ADDR(0x0001fed0u): goto L_1FED0;
    case RC_ADDR(0x0001fed2u): goto L_1FED2;
    case RC_ADDR(0x0001fed6u): goto L_1FED6;
    case RC_ADDR(0x0001fed8u): goto L_1FED8;
    case RC_ADDR(0x0001fedau): goto L_1FEDA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FE32:
    /* 0001fe32   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001fe32u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1FE36:
    /* 0001fe36   4  movem.l { D4 D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001fe36u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[3]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1FE3A:
    /* 0001fe3a   4  move.b (11,A5),D4 */
    c->pc = RC_ADDR(0x0001fe3au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0x11u));
    rc_d_set(c, 4, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FE3E:
    /* 0001fe3e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fe3eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FE42:
    /* 0001fe42   2  tst.l (A0) */
    c->pc = RC_ADDR(0x0001fe42u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_L);

L_1FE44:
    /* 0001fe44   2  bne 0001fe4e */
    c->pc = RC_ADDR(0x0001fe44u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FE4E;

L_1FE46:
    /* 0001fe46   4  movem.l (SP)+,{ D4 A2 A3 } */
    c->pc = RC_ADDR(0x0001fe46u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[4] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[3] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1FE4A:
    /* 0001fe4a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001fe4au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1FE4C:
    /* 0001fe4c   2  rts */
    c->pc = RC_ADDR(0x0001fe4cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1FE4E:
    /* 0001fe4e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fe4eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FE52:
    /* 0001fe52   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x0001fe52u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1FE54:
    /* 0001fe54   4  movea.l (4,A1),A0 */
    c->pc = RC_ADDR(0x0001fe54u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[1] + 0x4u));
    c->a[0] = t0;

L_1FE58:
    /* 0001fe58   4  cmpa.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0001fe58u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_cmp(c, RC_L, c->a[0], t0);

L_1FE5C:
    /* 0001fe5c   2  bne 0001fe9c */
    c->pc = RC_ADDR(0x0001fe5cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FE9C;

L_1FE5E:
    /* 0001fe5e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001fe5eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FE60:
    /* 0001fe60   2  move.b D4,D0 */
    c->pc = RC_ADDR(0x0001fe60u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FE62:
    /* 0001fe62   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fe62u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FE66:
    /* 0001fe66   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x0001fe66u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1FE68:
    /* 0001fe68   4  cmp.w (8,A1),D0 */
    c->pc = RC_ADDR(0x0001fe68u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[1] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1FE6C:
    /* 0001fe6c   2  bne 0001fe9c */
    c->pc = RC_ADDR(0x0001fe6cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FE9C;

L_1FE6E:
    /* 0001fe6e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fe6eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FE72:
    /* 0001fe72   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x0001fe72u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1FE74:
    /* 0001fe74   4  move.l (2c,A1),-(A7) */
    c->pc = RC_ADDR(0x0001fe74u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[1] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FE78:
    /* 0001fe78   2  bsr 0001fede */
    c->pc = RC_ADDR(0x0001fe78u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001fe7au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fedeu);
    return;

L_1FE7A:
    /* 0001fe7a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001fe7au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FE7C:
    /* 0001fe7c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fe7cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FE80:
    /* 0001fe80   2  movea.l (A0),A1 */
    c->pc = RC_ADDR(0x0001fe80u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[1] = t0;

L_1FE82:
    /* 0001fe82   2  movea.l (A1),A2 */
    c->pc = RC_ADDR(0x0001fe82u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[1]);
    c->a[2] = t0;

L_1FE84:
    /* 0001fe84   4  pea (0000003e).l */
    c->pc = RC_ADDR(0x0001fe84u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000003eu);

L_1FE88:
    /* 0001fe88   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fe88u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FE8C:
    /* 0001fe8c   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x0001fe8cu);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FE8E:
    /* 0001fe8e   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001fe8eu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001fe92u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1FE92:
    /* 0001fe92   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001fe92u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FE94:
    /* 0001fe94   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fe94u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FE98:
    /* 0001fe98   2  move.l A2,(A0) */
    c->pc = RC_ADDR(0x0001fe98u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FE9A:
    /* 0001fe9a   2  bra 0001feda */
    c->pc = RC_ADDR(0x0001fe9au);
    rc_step(c, m, 10);
    goto L_1FEDA;

L_1FE9C:
    /* 0001fe9c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0001fe9cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1FEA0:
    /* 0001fea0   2  movea.l (A0),A2 */
    c->pc = RC_ADDR(0x0001fea0u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[2] = t0;

L_1FEA2:
    /* 0001fea2   2  movea.l (A2),A3 */
    c->pc = RC_ADDR(0x0001fea2u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[2]);
    c->a[3] = t0;

L_1FEA4:
    /* 0001fea4   2  move.l A3,D0 */
    c->pc = RC_ADDR(0x0001fea4u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FEA6:
    /* 0001fea6   2  beq 0001feda */
    c->pc = RC_ADDR(0x0001fea6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FEDA;

L_1FEA8:
    /* 0001fea8   4  movea.l (4,A3),A0 */
    c->pc = RC_ADDR(0x0001fea8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[3] + 0x4u));
    c->a[0] = t0;

L_1FEAC:
    /* 0001feac   4  cmpa.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0001feacu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    rc_cmp(c, RC_L, c->a[0], t0);

L_1FEB0:
    /* 0001feb0   2  bne 0001fed6 */
    c->pc = RC_ADDR(0x0001feb0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FED6;

L_1FEB2:
    /* 0001feb2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001feb2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1FEB4:
    /* 0001feb4   2  move.b D4,D0 */
    c->pc = RC_ADDR(0x0001feb4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_B);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FEB6:
    /* 0001feb6   4  cmp.w (8,A3),D0 */
    c->pc = RC_ADDR(0x0001feb6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[3] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_1FEBA:
    /* 0001feba   2  bne 0001fed6 */
    c->pc = RC_ADDR(0x0001febau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1FED6;

L_1FEBC:
    /* 0001febc   4  move.l (2c,A3),-(A7) */
    c->pc = RC_ADDR(0x0001febcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[3] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FEC0:
    /* 0001fec0   2  bsr 0001fede */
    c->pc = RC_ADDR(0x0001fec0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001fec2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001fedeu);
    return;

L_1FEC2:
    /* 0001fec2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001fec2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1FEC4:
    /* 0001fec4   2  move.l (A3),(A2) */
    c->pc = RC_ADDR(0x0001fec4u);
    rc_step(c, m, 20);
    t0 = rc_rd32(c, m, c->a[3]);
    rc_wr32(c, m, c->a[2], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FEC6:
    /* 0001fec6   4  pea (0000003e).l */
    c->pc = RC_ADDR(0x0001fec6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000003eu);

L_1FECA:
    /* 0001feca   2  move.l A3,-(A7) */
    c->pc = RC_ADDR(0x0001fecau);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FECC:
    /* 0001fecc   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001feccu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001fed0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1FED0:
    /* 0001fed0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001fed0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1FED2:
    /* 0001fed2   4  bra 0001fe46 */
    c->pc = RC_ADDR(0x0001fed2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1FE46;

L_1FED6:
    /* 0001fed6   2  movea.l A3,A2 */
    c->pc = RC_ADDR(0x0001fed6u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 3, RC_L);
    c->a[2] = t0;

L_1FED8:
    /* 0001fed8   2  bra 0001fea2 */
    c->pc = RC_ADDR(0x0001fed8u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1FEA2;

L_1FEDA:
    /* 0001feda   4  bra 0001fe46 */
    c->pc = RC_ADDR(0x0001fedau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1FE46;

}
