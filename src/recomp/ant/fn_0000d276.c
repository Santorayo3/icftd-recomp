/* fn_0000d276 - 166 byte(s), 46 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000d276(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000d276u): goto L_D276;
    case RC_ADDR(0x0000d27au): goto L_D27A;
    case RC_ADDR(0x0000d27eu): goto L_D27E;
    case RC_ADDR(0x0000d282u): goto L_D282;
    case RC_ADDR(0x0000d286u): goto L_D286;
    case RC_ADDR(0x0000d28au): goto L_D28A;
    case RC_ADDR(0x0000d28eu): goto L_D28E;
    case RC_ADDR(0x0000d292u): goto L_D292;
    case RC_ADDR(0x0000d296u): goto L_D296;
    case RC_ADDR(0x0000d29au): goto L_D29A;
    case RC_ADDR(0x0000d29eu): goto L_D29E;
    case RC_ADDR(0x0000d2a2u): goto L_D2A2;
    case RC_ADDR(0x0000d2a6u): goto L_D2A6;
    case RC_ADDR(0x0000d2aau): goto L_D2AA;
    case RC_ADDR(0x0000d2aeu): goto L_D2AE;
    case RC_ADDR(0x0000d2b2u): goto L_D2B2;
    case RC_ADDR(0x0000d2b6u): goto L_D2B6;
    case RC_ADDR(0x0000d2bau): goto L_D2BA;
    case RC_ADDR(0x0000d2beu): goto L_D2BE;
    case RC_ADDR(0x0000d2c2u): goto L_D2C2;
    case RC_ADDR(0x0000d2c6u): goto L_D2C6;
    case RC_ADDR(0x0000d2cau): goto L_D2CA;
    case RC_ADDR(0x0000d2ceu): goto L_D2CE;
    case RC_ADDR(0x0000d2d2u): goto L_D2D2;
    case RC_ADDR(0x0000d2d6u): goto L_D2D6;
    case RC_ADDR(0x0000d2dau): goto L_D2DA;
    case RC_ADDR(0x0000d2deu): goto L_D2DE;
    case RC_ADDR(0x0000d2e2u): goto L_D2E2;
    case RC_ADDR(0x0000d2e6u): goto L_D2E6;
    case RC_ADDR(0x0000d2eau): goto L_D2EA;
    case RC_ADDR(0x0000d2eeu): goto L_D2EE;
    case RC_ADDR(0x0000d2f2u): goto L_D2F2;
    case RC_ADDR(0x0000d2f6u): goto L_D2F6;
    case RC_ADDR(0x0000d2f8u): goto L_D2F8;
    case RC_ADDR(0x0000d2fcu): goto L_D2FC;
    case RC_ADDR(0x0000d300u): goto L_D300;
    case RC_ADDR(0x0000d302u): goto L_D302;
    case RC_ADDR(0x0000d304u): goto L_D304;
    case RC_ADDR(0x0000d306u): goto L_D306;
    case RC_ADDR(0x0000d30au): goto L_D30A;
    case RC_ADDR(0x0000d30eu): goto L_D30E;
    case RC_ADDR(0x0000d310u): goto L_D310;
    case RC_ADDR(0x0000d314u): goto L_D314;
    case RC_ADDR(0x0000d316u): goto L_D316;
    case RC_ADDR(0x0000d318u): goto L_D318;
    case RC_ADDR(0x0000d31au): goto L_D31A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D276:
    /* 0000d276   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000d276u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_D27A:
    /* 0000d27a   4  movem.l { A2 A3 },-(SP) */
    c->pc = RC_ADDR(0x0000d27au);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[5]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_D27E:
    /* 0000d27e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000d27eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D282:
    /* 0000d282   4  pea (0000d328) */
    c->pc = RC_ADDR(0x0000d282u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d328u));

L_D286:
    /* 0000d286   4  pea (0000d31c) */
    c->pc = RC_ADDR(0x0000d286u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d31cu));

L_D28A:
    /* 0000d28a   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0000d28au);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000d28eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_D28E:
    /* 0000d28e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000d28eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_D292:
    /* 0000d292   4  pea (e4a,A4) */
    c->pc = RC_ADDR(0x0000d292u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xe4au));

L_D296:
    /* 0000d296   4  pea (e44,A4) */
    c->pc = RC_ADDR(0x0000d296u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xe44u));

L_D29A:
    /* 0000d29a   4  pea (0000d32f) */
    c->pc = RC_ADDR(0x0000d29au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d32fu));

L_D29E:
    /* 0000d29e   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000d29eu);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000d2a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_D2A2:
    /* 0000d2a2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000d2a2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_D2A6:
    /* 0000d2a6   4  move.l D0,(e38,A4) */
    c->pc = RC_ADDR(0x0000d2a6u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe38u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D2AA:
    /* 0000d2aa   4  pea (e52,A4) */
    c->pc = RC_ADDR(0x0000d2aau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xe52u));

L_D2AE:
    /* 0000d2ae   4  pea (e48,A4) */
    c->pc = RC_ADDR(0x0000d2aeu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xe48u));

L_D2B2:
    /* 0000d2b2   4  pea (0000d342) */
    c->pc = RC_ADDR(0x0000d2b2u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d342u));

L_D2B6:
    /* 0000d2b6   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000d2b6u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000d2bau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_D2BA:
    /* 0000d2ba   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000d2bau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_D2BE:
    /* 0000d2be   4  move.l D0,(e40,A4) */
    c->pc = RC_ADDR(0x0000d2beu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe40u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D2C2:
    /* 0000d2c2   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000d2c2u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_D2C6:
    /* 0000d2c6   4  pea (0000d360) */
    c->pc = RC_ADDR(0x0000d2c6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d360u));

L_D2CA:
    /* 0000d2ca   4  pea (0000d354) */
    c->pc = RC_ADDR(0x0000d2cau);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d354u));

L_D2CE:
    /* 0000d2ce   4  jsr (ffff800e,A4) */
    c->pc = RC_ADDR(0x0000d2ceu);
    rc_step(c, m, 18);
    /* vector 2 */
    rc_push32(c, m, RC_ADDR(0x0000d2d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b04u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000068au);
    return;

L_D2D2:
    /* 0000d2d2   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0000d2d2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_D2D6:
    /* 0000d2d6   4  pea (e4e,A4) */
    c->pc = RC_ADDR(0x0000d2d6u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xe4eu));

L_D2DA:
    /* 0000d2da   4  pea (e46,A4) */
    c->pc = RC_ADDR(0x0000d2dau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0xe46u));

L_D2DE:
    /* 0000d2de   4  pea (0000d367) */
    c->pc = RC_ADDR(0x0000d2deu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d367u));

L_D2E2:
    /* 0000d2e2   4  jsr (ffff80bc,A4) */
    c->pc = RC_ADDR(0x0000d2e2u);
    rc_step(c, m, 18);
    /* vector 31 */
    rc_push32(c, m, RC_ADDR(0x0000d2e6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bb2u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000ad50u);
    return;

L_D2E6:
    /* 0000d2e6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000d2e6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_D2EA:
    /* 0000d2ea   4  move.l D0,(e3c,A4) */
    c->pc = RC_ADDR(0x0000d2eau);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0xe3cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_D2EE:
    /* 0000d2ee   4  pea (0000d37a) */
    c->pc = RC_ADDR(0x0000d2eeu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d37au));

L_D2F2:
    /* 0000d2f2   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x0000d2f2u);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x0000d2f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_D2F6:
    /* 0000d2f6   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000d2f6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_D2F8:
    /* 0000d2f8   4  pea (0000d388) */
    c->pc = RC_ADDR(0x0000d2f8u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000d388u));

L_D2FC:
    /* 0000d2fc   4  jsr (ffff824e,A4) */
    c->pc = RC_ADDR(0x0000d2fcu);
    rc_step(c, m, 18);
    /* vector 98 */
    rc_push32(c, m, RC_ADDR(0x0000d300u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d44u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001ff16u);
    return;

L_D300:
    /* 0000d300   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000d300u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_D302:
    /* 0000d302   2  tst.l D0 */
    c->pc = RC_ADDR(0x0000d302u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_D304:
    /* 0000d304   2  beq 0000d318 */
    c->pc = RC_ADDR(0x0000d304u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_D318;

L_D306:
    /* 0000d306   4  jsr (ffff8056,A4) */
    c->pc = RC_ADDR(0x0000d306u);
    rc_step(c, m, 18);
    /* vector 14 */
    rc_push32(c, m, RC_ADDR(0x0000d30au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b4cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00003988u);
    return;

L_D30A:
    /* 0000d30a   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x0000d30au);
    rc_step(c, m, 18);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x0000d30eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d9eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022308u);
    return;

L_D30E:
    /* 0000d30e   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000d30eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_D310:
    /* 0000d310   4  movem.l (SP)+,{ D4 D5 } */
    c->pc = RC_ADDR(0x0000d310u);
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
    c->a[7] = t3;

L_D314:
    /* 0000d314   2  unlk A5 */
    c->pc = RC_ADDR(0x0000d314u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_D316:
    /* 0000d316   2  rts */
    c->pc = RC_ADDR(0x0000d316u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_D318:
    /* 0000d318   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000d318u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_D31A:
    /* 0000d31a   2  bra 0000d310 */
    c->pc = RC_ADDR(0x0000d31au);
    rc_step(c, m, 10);
    rc_tick();
    goto L_D310;

}
