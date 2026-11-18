/* fn_00022480 - 152 byte(s), 45 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022480(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00022480u): goto L_22480;
    case RC_ADDR(0x00022484u): goto L_22484;
    case RC_ADDR(0x0002248au): goto L_2248A;
    case RC_ADDR(0x0002248eu): goto L_2248E;
    case RC_ADDR(0x00022490u): goto L_22490;
    case RC_ADDR(0x00022496u): goto L_22496;
    case RC_ADDR(0x0002249au): goto L_2249A;
    case RC_ADDR(0x0002249eu): goto L_2249E;
    case RC_ADDR(0x000224a0u): goto L_224A0;
    case RC_ADDR(0x000224a2u): goto L_224A2;
    case RC_ADDR(0x000224a4u): goto L_224A4;
    case RC_ADDR(0x000224a8u): goto L_224A8;
    case RC_ADDR(0x000224acu): goto L_224AC;
    case RC_ADDR(0x000224b0u): goto L_224B0;
    case RC_ADDR(0x000224b2u): goto L_224B2;
    case RC_ADDR(0x000224b6u): goto L_224B6;
    case RC_ADDR(0x000224bau): goto L_224BA;
    case RC_ADDR(0x000224beu): goto L_224BE;
    case RC_ADDR(0x000224c2u): goto L_224C2;
    case RC_ADDR(0x000224c4u): goto L_224C4;
    case RC_ADDR(0x000224c8u): goto L_224C8;
    case RC_ADDR(0x000224ccu): goto L_224CC;
    case RC_ADDR(0x000224d0u): goto L_224D0;
    case RC_ADDR(0x000224d4u): goto L_224D4;
    case RC_ADDR(0x000224d8u): goto L_224D8;
    case RC_ADDR(0x000224dau): goto L_224DA;
    case RC_ADDR(0x000224dcu): goto L_224DC;
    case RC_ADDR(0x000224deu): goto L_224DE;
    case RC_ADDR(0x000224e2u): goto L_224E2;
    case RC_ADDR(0x000224e6u): goto L_224E6;
    case RC_ADDR(0x000224eau): goto L_224EA;
    case RC_ADDR(0x000224ecu): goto L_224EC;
    case RC_ADDR(0x000224eeu): goto L_224EE;
    case RC_ADDR(0x000224f2u): goto L_224F2;
    case RC_ADDR(0x000224f6u): goto L_224F6;
    case RC_ADDR(0x000224fau): goto L_224FA;
    case RC_ADDR(0x000224feu): goto L_224FE;
    case RC_ADDR(0x00022500u): goto L_22500;
    case RC_ADDR(0x00022502u): goto L_22502;
    case RC_ADDR(0x00022506u): goto L_22506;
    case RC_ADDR(0x0002250au): goto L_2250A;
    case RC_ADDR(0x0002250eu): goto L_2250E;
    case RC_ADDR(0x00022510u): goto L_22510;
    case RC_ADDR(0x00022514u): goto L_22514;
    case RC_ADDR(0x00022516u): goto L_22516;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22480:
    /* 00022480   4  link.w A5,#fffffff2 */
    c->pc = RC_ADDR(0x00022480u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_22484:
    /* 00022484   6  move.l (350e,A4),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00022484u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x350eu));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2248A:
    /* 0002248a   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x0002248au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_2248E:
    /* 0002248e   2  bra 00022506 */
    c->pc = RC_ADDR(0x0002248eu);
    rc_step(c, m, 10);
    goto L_22506;

L_22490:
    /* 00022490   6  move.l (fffffffa,A5),(fffffff6,A5) */
    c->pc = RC_ADDR(0x00022490u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    rc_wr32(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_22496:
    /* 00022496   4  move.l (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00022496u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2249A:
    /* 0002249a   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x0002249au);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x0002249eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_2249E:
    /* 0002249e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002249eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_224A0:
    /* 000224a0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000224a0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_224A2:
    /* 000224a2   2  addq.l #1,D0 */
    c->pc = RC_ADDR(0x000224a2u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_224A4:
    /* 000224a4   4  add.l D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000224a4u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_224A8:
    /* 000224a8   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x000224a8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_224AC:
    /* 000224ac   4  jsr (0002234c) */
    c->pc = RC_ADDR(0x000224acu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000224b0u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002234cu);
    return;

L_224B0:
    /* 000224b0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000224b0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_224B2:
    /* 000224b2   4  move.l D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x000224b2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_224B6:
    /* 000224b6   4  addq.l #4,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000224b6u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_224BA:
    /* 000224ba   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x000224bau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_224BE:
    /* 000224be   4  jsr (0002234c) */
    c->pc = RC_ADDR(0x000224beu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000224c2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002234cu);
    return;

L_224C2:
    /* 000224c2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000224c2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_224C4:
    /* 000224c4   4  move.l D0,(14bc,A4) */
    c->pc = RC_ADDR(0x000224c4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x14bcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_224C8:
    /* 000224c8   4  addq.l #4,(fffffffa,A5) */
    c->pc = RC_ADDR(0x000224c8u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_224CC:
    /* 000224cc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000224ccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_224D0:
    /* 000224d0   4  move.l (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000224d0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_224D4:
    /* 000224d4   4  jsr (000222a6) */
    c->pc = RC_ADDR(0x000224d4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000224d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x000222a6u);
    return;

L_224D8:
    /* 000224d8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000224d8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_224DA:
    /* 000224da   2  tst.w D0 */
    c->pc = RC_ADDR(0x000224dau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_224DC:
    /* 000224dc   2  beq 00022502 */
    c->pc = RC_ADDR(0x000224dcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_22502;

L_224DE:
    /* 000224de   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x000224deu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_224E2:
    /* 000224e2   4  move.l (3544,A4),D0 */
    c->pc = RC_ADDR(0x000224e2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3544u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_224E6:
    /* 000224e6   4  add.l (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x000224e6u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_224EA:
    /* 000224ea   2  addq.l #6,D0 */
    c->pc = RC_ADDR(0x000224eau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + 0x00000006u;
    rc_flags_add(c, RC_L, t1, 0x00000006u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_224EC:
    /* 000224ec   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000224ecu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_224EE:
    /* 000224ee   4  move.l (350a,A4),-(A7) */
    c->pc = RC_ADDR(0x000224eeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x350au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_224F2:
    /* 000224f2   4  jsr (ffff833e,A4) */
    c->pc = RC_ADDR(0x000224f2u);
    rc_step(c, m, 18);
    /* vector 138 */
    rc_push32(c, m, RC_ADDR(0x000224f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e34u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023526u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0002352au);
    return;

L_224F6:
    /* 000224f6   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000224f6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_224FA:
    /* 000224fa   4  move.l (350a,A4),D0 */
    c->pc = RC_ADDR(0x000224fau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x350au));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_224FE:
    /* 000224fe   2  unlk A5 */
    c->pc = RC_ADDR(0x000224feu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_22500:
    /* 00022500   2  rts */
    c->pc = RC_ADDR(0x00022500u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_22502:
    /* 00022502   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00022502u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_22506:
    /* 00022506   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00022506u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2250A:
    /* 0002250a   4  cmp.w (3548,A4),D0 */
    c->pc = RC_ADDR(0x0002250au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x3548u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_2250E:
    /* 0002250e   2  bcs 00022490 */
    c->pc = RC_ADDR(0x0002250eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_22490; }

L_22510:
    /* 00022510   4  clr.l (14bc,A4) */
    c->pc = RC_ADDR(0x00022510u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x14bcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_22514:
    /* 00022514   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00022514u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_22516:
    /* 00022516   2  bra 000224fe */
    c->pc = RC_ADDR(0x00022516u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_224FE;

}
