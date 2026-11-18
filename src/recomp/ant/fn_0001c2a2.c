/* fn_0001c2a2 - 168 byte(s), 59 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001c2a2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001c2a2u): goto L_1C2A2;
    case RC_ADDR(0x0001c2a6u): goto L_1C2A6;
    case RC_ADDR(0x0001c2aau): goto L_1C2AA;
    case RC_ADDR(0x0001c2aeu): goto L_1C2AE;
    case RC_ADDR(0x0001c2b0u): goto L_1C2B0;
    case RC_ADDR(0x0001c2b6u): goto L_1C2B6;
    case RC_ADDR(0x0001c2b8u): goto L_1C2B8;
    case RC_ADDR(0x0001c2bau): goto L_1C2BA;
    case RC_ADDR(0x0001c2beu): goto L_1C2BE;
    case RC_ADDR(0x0001c2c0u): goto L_1C2C0;
    case RC_ADDR(0x0001c2c2u): goto L_1C2C2;
    case RC_ADDR(0x0001c2c6u): goto L_1C2C6;
    case RC_ADDR(0x0001c2c8u): goto L_1C2C8;
    case RC_ADDR(0x0001c2ceu): goto L_1C2CE;
    case RC_ADDR(0x0001c2d0u): goto L_1C2D0;
    case RC_ADDR(0x0001c2d2u): goto L_1C2D2;
    case RC_ADDR(0x0001c2d4u): goto L_1C2D4;
    case RC_ADDR(0x0001c2d8u): goto L_1C2D8;
    case RC_ADDR(0x0001c2dcu): goto L_1C2DC;
    case RC_ADDR(0x0001c2e0u): goto L_1C2E0;
    case RC_ADDR(0x0001c2e2u): goto L_1C2E2;
    case RC_ADDR(0x0001c2e6u): goto L_1C2E6;
    case RC_ADDR(0x0001c2e8u): goto L_1C2E8;
    case RC_ADDR(0x0001c2eau): goto L_1C2EA;
    case RC_ADDR(0x0001c2ecu): goto L_1C2EC;
    case RC_ADDR(0x0001c2f0u): goto L_1C2F0;
    case RC_ADDR(0x0001c2f2u): goto L_1C2F2;
    case RC_ADDR(0x0001c2f6u): goto L_1C2F6;
    case RC_ADDR(0x0001c2f8u): goto L_1C2F8;
    case RC_ADDR(0x0001c2fcu): goto L_1C2FC;
    case RC_ADDR(0x0001c2feu): goto L_1C2FE;
    case RC_ADDR(0x0001c300u): goto L_1C300;
    case RC_ADDR(0x0001c302u): goto L_1C302;
    case RC_ADDR(0x0001c304u): goto L_1C304;
    case RC_ADDR(0x0001c306u): goto L_1C306;
    case RC_ADDR(0x0001c308u): goto L_1C308;
    case RC_ADDR(0x0001c30cu): goto L_1C30C;
    case RC_ADDR(0x0001c310u): goto L_1C310;
    case RC_ADDR(0x0001c312u): goto L_1C312;
    case RC_ADDR(0x0001c314u): goto L_1C314;
    case RC_ADDR(0x0001c318u): goto L_1C318;
    case RC_ADDR(0x0001c31au): goto L_1C31A;
    case RC_ADDR(0x0001c31cu): goto L_1C31C;
    case RC_ADDR(0x0001c31eu): goto L_1C31E;
    case RC_ADDR(0x0001c320u): goto L_1C320;
    case RC_ADDR(0x0001c324u): goto L_1C324;
    case RC_ADDR(0x0001c326u): goto L_1C326;
    case RC_ADDR(0x0001c328u): goto L_1C328;
    case RC_ADDR(0x0001c32eu): goto L_1C32E;
    case RC_ADDR(0x0001c330u): goto L_1C330;
    case RC_ADDR(0x0001c332u): goto L_1C332;
    case RC_ADDR(0x0001c334u): goto L_1C334;
    case RC_ADDR(0x0001c336u): goto L_1C336;
    case RC_ADDR(0x0001c338u): goto L_1C338;
    case RC_ADDR(0x0001c33cu): goto L_1C33C;
    case RC_ADDR(0x0001c33eu): goto L_1C33E;
    case RC_ADDR(0x0001c340u): goto L_1C340;
    case RC_ADDR(0x0001c344u): goto L_1C344;
    case RC_ADDR(0x0001c346u): goto L_1C346;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1C2A2:
    /* 0001c2a2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001c2a2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1C2A6:
    /* 0001c2a6   4  movem.l { A0 A1 A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0001c2a6u);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[7]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[6]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_1C2AA:
    /* 0001c2aa   4  tst.w (8,A5) */
    c->pc = RC_ADDR(0x0001c2aau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_1C2AE:
    /* 0001c2ae   2  blt 0001c2b8 */
    c->pc = RC_ADDR(0x0001c2aeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1C2B8;

L_1C2B0:
    /* 0001c2b0   6  cmpi.w #150,(8,A5) */
    c->pc = RC_ADDR(0x0001c2b0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000150u);

L_1C2B6:
    /* 0001c2b6   2  blt 0001c2c2 */
    c->pc = RC_ADDR(0x0001c2b6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1C2C2;

L_1C2B8:
    /* 0001c2b8   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c2b8u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C2BA:
    /* 0001c2ba   4  movem.l (SP)+,{ D4 D5 D6 D7 } */
    c->pc = RC_ADDR(0x0001c2bau);
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
    t0 = rc_rd32(c, m, t3);
    c->d[7] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_1C2BE:
    /* 0001c2be   2  unlk A5 */
    c->pc = RC_ADDR(0x0001c2beu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1C2C0:
    /* 0001c2c0   2  rts */
    c->pc = RC_ADDR(0x0001c2c0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1C2C2:
    /* 0001c2c2   4  tst.w (a,A5) */
    c->pc = RC_ADDR(0x0001c2c2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_1C2C6:
    /* 0001c2c6   2  blt 0001c2d0 */
    c->pc = RC_ADDR(0x0001c2c6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1C2D0;

L_1C2C8:
    /* 0001c2c8   6  cmpi.w #c8,(a,A5) */
    c->pc = RC_ADDR(0x0001c2c8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_cmp(c, RC_W, t0, 0x000000c8u);

L_1C2CE:
    /* 0001c2ce   2  blt 0001c2d4 */
    c->pc = RC_ADDR(0x0001c2ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1C2D4;

L_1C2D0:
    /* 0001c2d0   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c2d0u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C2D2:
    /* 0001c2d2   2  bra 0001c2ba */
    c->pc = RC_ADDR(0x0001c2d2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1C2BA;

L_1C2D4:
    /* 0001c2d4   4  move.w (fffffa76,A4),D0 */
    c->pc = RC_ADDR(0x0001c2d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x58au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C2D8:
    /* 0001c2d8   4  muls.w (a,A5),D0 */
    c->pc = RC_ADDR(0x0001c2d8u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_muls(c, 0, t0);

L_1C2DC:
    /* 0001c2dc   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x0001c2dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C2E0:
    /* 0001c2e0   2  ext.l D1 */
    c->pc = RC_ADDR(0x0001c2e0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_1C2E2:
    /* 0001c2e2   4  divs.w #8,D1 */
    c->pc = RC_ADDR(0x0001c2e2u);
    rc_step(c, m, 162);
    t0 = 0x00000008u;
    rc_divs(c, m, 1, t0);

L_1C2E6:
    /* 0001c2e6   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x0001c2e6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_1C2E8:
    /* 0001c2e8   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c2e8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C2EA:
    /* 0001c2ea   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x0001c2eau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C2EC:
    /* 0001c2ec   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0001c2ecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C2F0:
    /* 0001c2f0   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c2f0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C2F2:
    /* 0001c2f2   4  divs.w #8,D0 */
    c->pc = RC_ADDR(0x0001c2f2u);
    rc_step(c, m, 162);
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_1C2F6:
    /* 0001c2f6   2  swap D0 */
    c->pc = RC_ADDR(0x0001c2f6u);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C2F8:
    /* 0001c2f8   4  move.w #80,D1 */
    c->pc = RC_ADDR(0x0001c2f8u);
    rc_step(c, m, 8);
    t0 = 0x00000080u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C2FC:
    /* 0001c2fc   2  asr.w D0,D1 */
    c->pc = RC_ADDR(0x0001c2fcu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 0, (c->d[0] & 63u), rc_d_get(c, 1, RC_W), RC_W));

L_1C2FE:
    /* 0001c2fe   2  move.b D1,D7 */
    c->pc = RC_ADDR(0x0001c2feu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_B);
    rc_d_set(c, 7, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C300:
    /* 0001c300   2  moveq #0,D6 */
    c->pc = RC_ADDR(0x0001c300u);
    rc_step(c, m, 4);
    c->d[6] = 0x00000000u;
    rc_set_nzvc(c, c->d[6], RC_L);

L_1C302:
    /* 0001c302   2  moveq #0,D5 */
    c->pc = RC_ADDR(0x0001c302u);
    rc_step(c, m, 4);
    c->d[5] = 0x00000000u;
    rc_set_nzvc(c, c->d[5], RC_L);

L_1C304:
    /* 0001c304   2  move.l D5,D0 */
    c->pc = RC_ADDR(0x0001c304u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 5, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C306:
    /* 0001c306   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001c306u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1C308:
    /* 0001c308   4  lea (ffffface,A4),A0 */
    c->pc = RC_ADDR(0x0001c308u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x532u);

L_1C30C:
    /* 0001c30c   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0001c30cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1C310:
    /* 0001c310   2  movea.l D4,A0 */
    c->pc = RC_ADDR(0x0001c310u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[0] = t0;

L_1C312:
    /* 0001c312   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c312u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C314:
    /* 0001c314   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x0001c314u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C318:
    /* 0001c318   2  move.b D7,D1 */
    c->pc = RC_ADDR(0x0001c318u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 7, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1C31A:
    /* 0001c31a   2  ext.w D1 */
    c->pc = RC_ADDR(0x0001c31au);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_1C31C:
    /* 0001c31c   2  and.w D1,D0 */
    c->pc = RC_ADDR(0x0001c31cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_1C31E:
    /* 0001c31e   2  beq 0001c324 */
    c->pc = RC_ADDR(0x0001c31eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1C324;

L_1C320:
    /* 0001c320   4  bset #5,D6 */
    c->pc = RC_ADDR(0x0001c320u);
    rc_step(c, m, 12);
    t4 = 0x00000005u;
    t0 = rc_d_get(c, 6, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 6, RC_L, t2);

L_1C324:
    /* 0001c324   2  asr.w #1,D6 */
    c->pc = RC_ADDR(0x0001c324u);
    rc_step(c, m, 6);
    rc_d_set(c, 6, RC_W, rc_shift(c, 0, 0, 0x00000001u, rc_d_get(c, 6, RC_W), RC_W));

L_1C326:
    /* 0001c326   2  addq.l #1,D5 */
    c->pc = RC_ADDR(0x0001c326u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 5, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 5, RC_L, t2);

L_1C328:
    /* 0001c328   6  cmp.l #5,D5 */
    c->pc = RC_ADDR(0x0001c328u);
    rc_step(c, m, 14);
    t0 = 0x00000005u;
    t1 = rc_d_get(c, 5, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1C32E:
    /* 0001c32e   2  blt 0001c304 */
    c->pc = RC_ADDR(0x0001c32eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1C304; }

L_1C330:
    /* 0001c330   2  move.w D6,D0 */
    c->pc = RC_ADDR(0x0001c330u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 6, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1C332:
    /* 0001c332   2  ext.l D0 */
    c->pc = RC_ADDR(0x0001c332u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1C334:
    /* 0001c334   2  moveq #1,D1 */
    c->pc = RC_ADDR(0x0001c334u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000001u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1C336:
    /* 0001c336   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x0001c336u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_1C338:
    /* 0001c338   4  and.l (c,A5),D1 */
    c->pc = RC_ADDR(0x0001c338u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    t2 = t0 & rc_d_get(c, 1, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 1, RC_L, t2);

L_1C33C:
    /* 0001c33c   2  beq 0001c344 */
    c->pc = RC_ADDR(0x0001c33cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1C344;

L_1C33E:
    /* 0001c33e   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0001c33eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C340:
    /* 0001c340   4  bra 0001c2ba */
    c->pc = RC_ADDR(0x0001c340u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1C2BA;

L_1C344:
    /* 0001c344   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001c344u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1C346:
    /* 0001c346   4  bra 0001c2ba */
    c->pc = RC_ADDR(0x0001c346u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1C2BA;

}
