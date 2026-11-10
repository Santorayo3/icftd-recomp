/* fn_000214fa - 140 byte(s), 44 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_000214fa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000214fau): goto L_214FA;
    case RC_ADDR(0x000214feu): goto L_214FE;
    case RC_ADDR(0x00021502u): goto L_21502;
    case RC_ADDR(0x00021506u): goto L_21506;
    case RC_ADDR(0x0002150au): goto L_2150A;
    case RC_ADDR(0x0002150cu): goto L_2150C;
    case RC_ADDR(0x00021512u): goto L_21512;
    case RC_ADDR(0x00021514u): goto L_21514;
    case RC_ADDR(0x00021516u): goto L_21516;
    case RC_ADDR(0x00021518u): goto L_21518;
    case RC_ADDR(0x0002151cu): goto L_2151C;
    case RC_ADDR(0x0002151eu): goto L_2151E;
    case RC_ADDR(0x00021520u): goto L_21520;
    case RC_ADDR(0x00021526u): goto L_21526;
    case RC_ADDR(0x0002152au): goto L_2152A;
    case RC_ADDR(0x0002152eu): goto L_2152E;
    case RC_ADDR(0x00021530u): goto L_21530;
    case RC_ADDR(0x00021532u): goto L_21532;
    case RC_ADDR(0x00021534u): goto L_21534;
    case RC_ADDR(0x00021536u): goto L_21536;
    case RC_ADDR(0x00021538u): goto L_21538;
    case RC_ADDR(0x0002153cu): goto L_2153C;
    case RC_ADDR(0x0002153eu): goto L_2153E;
    case RC_ADDR(0x00021540u): goto L_21540;
    case RC_ADDR(0x00021542u): goto L_21542;
    case RC_ADDR(0x00021548u): goto L_21548;
    case RC_ADDR(0x0002154eu): goto L_2154E;
    case RC_ADDR(0x00021554u): goto L_21554;
    case RC_ADDR(0x00021558u): goto L_21558;
    case RC_ADDR(0x0002155cu): goto L_2155C;
    case RC_ADDR(0x0002155eu): goto L_2155E;
    case RC_ADDR(0x00021562u): goto L_21562;
    case RC_ADDR(0x00021566u): goto L_21566;
    case RC_ADDR(0x0002156au): goto L_2156A;
    case RC_ADDR(0x0002156cu): goto L_2156C;
    case RC_ADDR(0x0002156eu): goto L_2156E;
    case RC_ADDR(0x00021570u): goto L_21570;
    case RC_ADDR(0x00021574u): goto L_21574;
    case RC_ADDR(0x00021576u): goto L_21576;
    case RC_ADDR(0x00021578u): goto L_21578;
    case RC_ADDR(0x0002157cu): goto L_2157C;
    case RC_ADDR(0x00021580u): goto L_21580;
    case RC_ADDR(0x00021582u): goto L_21582;
    case RC_ADDR(0x00021584u): goto L_21584;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_214FA:
    /* 000214fa   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000214fau);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_214FE:
    /* 000214fe   4  movem.l { D5 A3 },-(SP) */
    c->pc = RC_ADDR(0x000214feu);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[2]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[4]);
    c->a[7] = t3;

L_21502:
    /* 00021502   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x00021502u);
    rc_push32(c, m, RC_ADDR(0xffffffffu));

L_21506:
    /* 00021506   4  jsr (000215d8) */
    c->pc = RC_ADDR(0x00021506u);
    /* exec.library -330 */
    c->pc = RC_ADDR(0x0002150au);
    rc_os_call(c, m, 0, -330);

L_2150A:
    /* 0002150a   2  move.l D0,D4 */
    c->pc = RC_ADDR(0x0002150au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2150C:
    /* 0002150c   6  cmp.l #ffffffff,D0 */
    c->pc = RC_ADDR(0x0002150cu);
    t0 = 0xffffffffu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_21512:
    /* 00021512   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021512u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21514:
    /* 00021514   2  bne 00021520 */
    c->pc = RC_ADDR(0x00021514u);
    if (rc_cond(c, 6)) goto L_21520;

L_21516:
    /* 00021516   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021516u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21518:
    /* 00021518   4  movem.l (SP)+,{ D4 A2 } */
    c->pc = RC_ADDR(0x00021518u);
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

L_2151C:
    /* 0002151c   2  unlk A5 */
    c->pc = RC_ADDR(0x0002151cu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_2151E:
    /* 0002151e   2  rts */
    c->pc = RC_ADDR(0x0002151eu);
    rc_ret(c, m);
    return;

L_21520:
    /* 00021520   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00021520u);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_21526:
    /* 00021526   4  pea (00000022).l */
    c->pc = RC_ADDR(0x00021526u);
    rc_push32(c, m, RC_ADDR(0x00000022u));

L_2152A:
    /* 0002152a   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0002152au);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x0002152eu);
    rc_os_call(c, m, 0, -198);

L_2152E:
    /* 0002152e   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0002152eu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_21530:
    /* 00021530   2  tst.l D0 */
    c->pc = RC_ADDR(0x00021530u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_21532:
    /* 00021532   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00021532u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_21534:
    /* 00021534   2  bne 00021542 */
    c->pc = RC_ADDR(0x00021534u);
    if (rc_cond(c, 6)) goto L_21542;

L_21536:
    /* 00021536   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00021536u);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21538:
    /* 00021538   4  jsr (000216e0) */
    c->pc = RC_ADDR(0x00021538u);
    /* exec.library -336 */
    c->pc = RC_ADDR(0x0002153cu);
    rc_os_call(c, m, 0, -336);

L_2153C:
    /* 0002153c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002153cu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2153E:
    /* 0002153e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002153eu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21540:
    /* 00021540   2  bra 00021518 */
    c->pc = RC_ADDR(0x00021540u);
    rc_tick();
    goto L_21518;

L_21542:
    /* 00021542   6  move.l (8,A5),(a,A2) */
    c->pc = RC_ADDR(0x00021542u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[2] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21548:
    /* 00021548   6  move.b (f,A5),(9,A2) */
    c->pc = RC_ADDR(0x00021548u);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_wr8(c, m, (c->a[2] + 0x9u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_2154E:
    /* 0002154e   6  move.b #4,(8,A2) */
    c->pc = RC_ADDR(0x0002154eu);
    t0 = 0x00000004u;
    rc_wr8(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_21554:
    /* 00021554   4  clr.b (e,A2) */
    c->pc = RC_ADDR(0x00021554u);
    rc_wr8(c, m, (c->a[2] + 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_21558:
    /* 00021558   4  move.b D4,(f,A2) */
    c->pc = RC_ADDR(0x00021558u);
    t0 = rc_d_get(c, 4, RC_B);
    rc_wr8(c, m, (c->a[2] + 0xfu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_2155C:
    /* 0002155c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0002155cu);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2155E:
    /* 0002155e   4  jsr (ffff833e,A4) */
    c->pc = RC_ADDR(0x0002155eu);
    /* vector 138: exec.library -294 */
    c->pc = RC_ADDR(0x00021562u);
    rc_os_call(c, m, 0, -294);

L_21562:
    /* 00021562   4  move.l D0,(10,A2) */
    c->pc = RC_ADDR(0x00021562u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[2] + 0x10u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21566:
    /* 00021566   4  tst.l (8,A5) */
    c->pc = RC_ADDR(0x00021566u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_2156A:
    /* 0002156a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0002156au);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_2156C:
    /* 0002156c   2  beq 00021578 */
    c->pc = RC_ADDR(0x0002156cu);
    if (rc_cond(c, 7)) goto L_21578;

L_2156E:
    /* 0002156e   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x0002156eu);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21570:
    /* 00021570   4  jsr (000215cc) */
    c->pc = RC_ADDR(0x00021570u);
    /* exec.library -354 */
    c->pc = RC_ADDR(0x00021574u);
    rc_os_call(c, m, 0, -354);

L_21574:
    /* 00021574   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021574u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21576:
    /* 00021576   2  bra 00021582 */
    c->pc = RC_ADDR(0x00021576u);
    goto L_21582;

L_21578:
    /* 00021578   4  pea (14,A2) */
    c->pc = RC_ADDR(0x00021578u);
    rc_push32(c, m, (c->a[2] + 0x14u));

L_2157C:
    /* 0002157c   4  jsr (000216f8) */
    c->pc = RC_ADDR(0x0002157cu);
    rc_push32(c, m, RC_ADDR(0x00021580u));
    rc_depth++;
    c->pc = RC_ADDR(0x000216f8u);
    return;

L_21580:
    /* 00021580   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00021580u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_21582:
    /* 00021582   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x00021582u);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21584:
    /* 00021584   2  bra 00021518 */
    c->pc = RC_ADDR(0x00021584u);
    rc_tick();
    goto L_21518;

}
