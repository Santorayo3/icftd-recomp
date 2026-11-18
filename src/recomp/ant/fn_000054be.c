/* fn_000054be - 134 byte(s), 39 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000054be(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000054beu): goto L_54BE;
    case RC_ADDR(0x000054c2u): goto L_54C2;
    case RC_ADDR(0x000054c6u): goto L_54C6;
    case RC_ADDR(0x000054cau): goto L_54CA;
    case RC_ADDR(0x000054d0u): goto L_54D0;
    case RC_ADDR(0x000054d4u): goto L_54D4;
    case RC_ADDR(0x000054d8u): goto L_54D8;
    case RC_ADDR(0x000054dcu): goto L_54DC;
    case RC_ADDR(0x000054e0u): goto L_54E0;
    case RC_ADDR(0x000054e4u): goto L_54E4;
    case RC_ADDR(0x000054e6u): goto L_54E6;
    case RC_ADDR(0x000054eau): goto L_54EA;
    case RC_ADDR(0x000054ecu): goto L_54EC;
    case RC_ADDR(0x000054eeu): goto L_54EE;
    case RC_ADDR(0x000054f2u): goto L_54F2;
    case RC_ADDR(0x000054f6u): goto L_54F6;
    case RC_ADDR(0x000054fau): goto L_54FA;
    case RC_ADDR(0x000054feu): goto L_54FE;
    case RC_ADDR(0x00005502u): goto L_5502;
    case RC_ADDR(0x00005506u): goto L_5506;
    case RC_ADDR(0x0000550au): goto L_550A;
    case RC_ADDR(0x0000550eu): goto L_550E;
    case RC_ADDR(0x00005512u): goto L_5512;
    case RC_ADDR(0x00005514u): goto L_5514;
    case RC_ADDR(0x00005518u): goto L_5518;
    case RC_ADDR(0x0000551cu): goto L_551C;
    case RC_ADDR(0x0000551eu): goto L_551E;
    case RC_ADDR(0x00005522u): goto L_5522;
    case RC_ADDR(0x00005526u): goto L_5526;
    case RC_ADDR(0x0000552cu): goto L_552C;
    case RC_ADDR(0x0000552eu): goto L_552E;
    case RC_ADDR(0x00005532u): goto L_5532;
    case RC_ADDR(0x00005534u): goto L_5534;
    case RC_ADDR(0x00005538u): goto L_5538;
    case RC_ADDR(0x0000553au): goto L_553A;
    case RC_ADDR(0x0000553cu): goto L_553C;
    case RC_ADDR(0x0000553eu): goto L_553E;
    case RC_ADDR(0x00005540u): goto L_5540;
    case RC_ADDR(0x00005542u): goto L_5542;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_54BE:
    /* 000054be   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x000054beu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_54C2:
    /* 000054c2   4  clr.l (fffffa1c,A4) */
    c->pc = RC_ADDR(0x000054c2u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x5e4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_54C6:
    /* 000054c6   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x000054c6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_54CA:
    /* 000054ca   6  move.l (8,A5),(fffffffa,A5) */
    c->pc = RC_ADDR(0x000054cau);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_54D0:
    /* 000054d0   4  move.w (852,A4),D0 */
    c->pc = RC_ADDR(0x000054d0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x852u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_54D4:
    /* 000054d4   4  sub.w (850,A4),D0 */
    c->pc = RC_ADDR(0x000054d4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x850u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_54D8:
    /* 000054d8   4  move.w D0,(fffffa24,A4) */
    c->pc = RC_ADDR(0x000054d8u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x5dcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_54DC:
    /* 000054dc   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x000054dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_54E0:
    /* 000054e0   4  cmp.w (fffffa24,A4),D0 */
    c->pc = RC_ADDR(0x000054e0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_54E4:
    /* 000054e4   2  bge 00005514 */
    c->pc = RC_ADDR(0x000054e4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_5514;

L_54E6:
    /* 000054e6   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x000054e6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_54EA:
    /* 000054ea   2  tst.b (A0) */
    c->pc = RC_ADDR(0x000054eau);
    rc_step(c, m, 8);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_54EC:
    /* 000054ec   2  beq 00005514 */
    c->pc = RC_ADDR(0x000054ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_5514;

L_54EE:
    /* 000054ee   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000054eeu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_54F2:
    /* 000054f2   4  move.l (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x000054f2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_54F6:
    /* 000054f6   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x000054f6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_54FA:
    /* 000054fa   4  jsr (ffff83c8,A4) */
    c->pc = RC_ADDR(0x000054fau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000054feu));
    rc_depth++;
    t3 = (c->a[4] - 0x7c38u);
    c->pc = t3;
    return;

L_54FE:
    /* 000054fe   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000054feu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_5502:
    /* 00005502   4  add.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00005502u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_5506:
    /* 00005506   4  addq.l #1,(fffffa1c,A4) */
    c->pc = RC_ADDR(0x00005506u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x5e4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_550A:
    /* 0000550a   4  movea.l (fffffffa,A5),A0 */
    c->pc = RC_ADDR(0x0000550au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x6u));
    c->a[0] = t0;

L_550E:
    /* 0000550e   4  addq.l #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x0000550eu);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_5512:
    /* 00005512   2  bra 000054dc */
    c->pc = RC_ADDR(0x00005512u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_54DC;

L_5514:
    /* 00005514   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00005514u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5518:
    /* 00005518   4  cmp.w (fffffa24,A4),D0 */
    c->pc = RC_ADDR(0x00005518u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x5dcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_551C:
    /* 0000551c   2  blt 00005540 */
    c->pc = RC_ADDR(0x0000551cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_5540;

L_551E:
    /* 0000551e   4  move.l (fffffa1c,A4),D0 */
    c->pc = RC_ADDR(0x0000551eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5e4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_5522:
    /* 00005522   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00005522u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_5526:
    /* 00005526   6  cmpi.b #20,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00005526u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x00000020u);

L_552C:
    /* 0000552c   2  beq 0000553a */
    c->pc = RC_ADDR(0x0000552cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_553A;

L_552E:
    /* 0000552e   4  tst.l (fffffa1c,A4) */
    c->pc = RC_ADDR(0x0000552eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x5e4u));
    rc_set_nzvc(c, t0, RC_L);

L_5532:
    /* 00005532   2  beq 0000553a */
    c->pc = RC_ADDR(0x00005532u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_553A;

L_5534:
    /* 00005534   4  subq.l #1,(fffffa1c,A4) */
    c->pc = RC_ADDR(0x00005534u);
    rc_step(c, m, 24);
    t3 = (c->a[4] - 0x5e4u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_5538:
    /* 00005538   2  bra 0000551e */
    c->pc = RC_ADDR(0x00005538u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_551E;

L_553A:
    /* 0000553a   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x0000553au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_553C:
    /* 0000553c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000553cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_553E:
    /* 0000553e   2  rts */
    c->pc = RC_ADDR(0x0000553eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_5540:
    /* 00005540   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00005540u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_5542:
    /* 00005542   2  bra 0000553c */
    c->pc = RC_ADDR(0x00005542u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_553C;

}
