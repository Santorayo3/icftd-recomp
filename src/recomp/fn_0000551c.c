/* fn_0000551c - 112 byte(s), 28 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000551c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000551cu): goto L_551C;
    case RC_ADDR(0x00005520u): goto L_5520;
    case RC_ADDR(0x00005524u): goto L_5524;
    case RC_ADDR(0x0000552au): goto L_552A;
    case RC_ADDR(0x0000552eu): goto L_552E;
    case RC_ADDR(0x00005534u): goto L_5534;
    case RC_ADDR(0x00005538u): goto L_5538;
    case RC_ADDR(0x0000553cu): goto L_553C;
    case RC_ADDR(0x0000553eu): goto L_553E;
    case RC_ADDR(0x00005542u): goto L_5542;
    case RC_ADDR(0x00005546u): goto L_5546;
    case RC_ADDR(0x0000554cu): goto L_554C;
    case RC_ADDR(0x00005550u): goto L_5550;
    case RC_ADDR(0x00005556u): goto L_5556;
    case RC_ADDR(0x0000555au): goto L_555A;
    case RC_ADDR(0x0000555eu): goto L_555E;
    case RC_ADDR(0x00005562u): goto L_5562;
    case RC_ADDR(0x00005566u): goto L_5566;
    case RC_ADDR(0x0000556au): goto L_556A;
    case RC_ADDR(0x0000556eu): goto L_556E;
    case RC_ADDR(0x00005572u): goto L_5572;
    case RC_ADDR(0x00005576u): goto L_5576;
    case RC_ADDR(0x0000557au): goto L_557A;
    case RC_ADDR(0x0000557eu): goto L_557E;
    case RC_ADDR(0x00005582u): goto L_5582;
    case RC_ADDR(0x00005586u): goto L_5586;
    case RC_ADDR(0x00005588u): goto L_5588;
    case RC_ADDR(0x0000558au): goto L_558A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_551C:
    /* 0000551c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000551cu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_5520:
    /* 00005520   4  move.l A4,(ffffce24,A4) */
    c->pc = RC_ADDR(0x00005520u);
    rc_step(c, m);
    t0 = rc_a_get(c, 4, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x31dcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5524:
    /* 00005524   6  move.w #50,(ffffce28,A4) */
    c->pc = RC_ADDR(0x00005524u);
    rc_step(c, m);
    t0 = 0x00000050u;
    rc_wr16(c, m, (c->a[4] - 0x31d8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_552A:
    /* 0000552a   4  clr.w (ffffce2a,A4) */
    c->pc = RC_ADDR(0x0000552au);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x31d6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_552E:
    /* 0000552e   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0000552eu);
    rc_step(c, m);
    rc_push32(c, m, 0x00010001u);

L_5534:
    /* 00005534   4  pea (00000016).l */
    c->pc = RC_ADDR(0x00005534u);
    rc_step(c, m);
    rc_push32(c, m, 0x00000016u);

L_5538:
    /* 00005538   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00005538u);
    rc_step(c, m);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x0000553cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d8eu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0002168cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00021690u);
    return;

L_553C:
    /* 0000553c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000553cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_553E:
    /* 0000553e   4  move.l D0,(ffffce20,A4) */
    c->pc = RC_ADDR(0x0000553eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x31e0u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5542:
    /* 00005542   4  movea.l (ffffce20,A4),A0 */
    c->pc = RC_ADDR(0x00005542u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x31e0u));
    c->a[0] = t0;

L_5546:
    /* 00005546   6  move.b #2,(8,A0) */
    c->pc = RC_ADDR(0x00005546u);
    rc_step(c, m);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_554C:
    /* 0000554c   4  movea.l (ffffce20,A4),A0 */
    c->pc = RC_ADDR(0x0000554cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x31e0u));
    c->a[0] = t0;

L_5550:
    /* 00005550   6  move.b #c4,(9,A0) */
    c->pc = RC_ADDR(0x00005550u);
    rc_step(c, m);
    t0 = 0x000000c4u;
    rc_wr8(c, m, (c->a[0] + 0x9u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_5556:
    /* 00005556   4  movea.l (ffffce20,A4),A0 */
    c->pc = RC_ADDR(0x00005556u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x31e0u));
    c->a[0] = t0;

L_555A:
    /* 0000555a   4  lea (0000558c),A1 */
    c->pc = RC_ADDR(0x0000555au);
    rc_step(c, m);
    c->a[1] = RC_ADDR(0x0000558cu);

L_555E:
    /* 0000555e   4  move.l A1,(a,A0) */
    c->pc = RC_ADDR(0x0000555eu);
    rc_step(c, m);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5562:
    /* 00005562   4  lea (ffffce24,A4),A0 */
    c->pc = RC_ADDR(0x00005562u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x31dcu);

L_5566:
    /* 00005566   4  movea.l (ffffce20,A4),A1 */
    c->pc = RC_ADDR(0x00005566u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x31e0u));
    c->a[1] = t0;

L_556A:
    /* 0000556a   4  move.l A0,(e,A1) */
    c->pc = RC_ADDR(0x0000556au);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_556E:
    /* 0000556e   4  lea (000054cc),A0 */
    c->pc = RC_ADDR(0x0000556eu);
    rc_step(c, m);
    c->a[0] = RC_ADDR(0x000054ccu);

L_5572:
    /* 00005572   4  movea.l (ffffce20,A4),A1 */
    c->pc = RC_ADDR(0x00005572u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x31e0u));
    c->a[1] = t0;

L_5576:
    /* 00005576   4  move.l A0,(12,A1) */
    c->pc = RC_ADDR(0x00005576u);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_557A:
    /* 0000557a   4  move.l (ffffce20,A4),-(A7) */
    c->pc = RC_ADDR(0x0000557au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x31e0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_557E:
    /* 0000557e   4  pea (00000005).l */
    c->pc = RC_ADDR(0x0000557eu);
    rc_step(c, m);
    rc_push32(c, m, 0x00000005u);

L_5582:
    /* 00005582   4  jsr (ffff832c,A4) */
    c->pc = RC_ADDR(0x00005582u);
    rc_step(c, m);
    /* vector 135 */
    rc_push32(c, m, RC_ADDR(0x00005586u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d82u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x000214b8u);
    return;

L_5586:
    /* 00005586   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005586u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5588:
    /* 00005588   2  unlk A5 */
    c->pc = RC_ADDR(0x00005588u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_558A:
    /* 0000558a   2  rts */
    c->pc = RC_ADDR(0x0000558au);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
