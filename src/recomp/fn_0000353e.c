/* fn_0000353e - 64 byte(s), 19 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000353e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000353eu): goto L_353E;
    case RC_ADDR(0x00003542u): goto L_3542;
    case RC_ADDR(0x00003546u): goto L_3546;
    case RC_ADDR(0x00003548u): goto L_3548;
    case RC_ADDR(0x0000354au): goto L_354A;
    case RC_ADDR(0x0000354cu): goto L_354C;
    case RC_ADDR(0x00003552u): goto L_3552;
    case RC_ADDR(0x00003558u): goto L_3558;
    case RC_ADDR(0x0000355eu): goto L_355E;
    case RC_ADDR(0x00003560u): goto L_3560;
    case RC_ADDR(0x00003562u): goto L_3562;
    case RC_ADDR(0x00003564u): goto L_3564;
    case RC_ADDR(0x00003568u): goto L_3568;
    case RC_ADDR(0x0000356cu): goto L_356C;
    case RC_ADDR(0x00003570u): goto L_3570;
    case RC_ADDR(0x00003574u): goto L_3574;
    case RC_ADDR(0x00003578u): goto L_3578;
    case RC_ADDR(0x0000357au): goto L_357A;
    case RC_ADDR(0x0000357cu): goto L_357C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_353E:
    /* 0000353e   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000353eu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_3542:
    /* 00003542   4  tst.w (ffff8534,A4) */
    c->pc = RC_ADDR(0x00003542u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7accu));
    rc_set_nzvc(c, t0, RC_W);

L_3546:
    /* 00003546   2  beq 0000354c */
    c->pc = RC_ADDR(0x00003546u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_354C;

L_3548:
    /* 00003548   2  unlk A5 */
    c->pc = RC_ADDR(0x00003548u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_354A:
    /* 0000354a   2  rts */
    c->pc = RC_ADDR(0x0000354au);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_354C:
    /* 0000354c   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x0000354cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3552:
    /* 00003552   6  pea (00010000).l */
    c->pc = RC_ADDR(0x00003552u);
    rc_step(c, m);
    rc_push32(c, m, 0x00010000u);

L_3558:
    /* 00003558   6  pea (001e0000).l */
    c->pc = RC_ADDR(0x00003558u);
    rc_step(c, m);
    rc_push32(c, m, 0x001e0000u);

L_355E:
    /* 0000355e   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000355eu);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3560:
    /* 00003560   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003560u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3562:
    /* 00003562   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00003562u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3564:
    /* 00003564   4  move.w #18,-(A7) */
    c->pc = RC_ADDR(0x00003564u);
    rc_step(c, m);
    t0 = 0x00000018u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3568:
    /* 00003568   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00003568u);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000356cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_356C:
    /* 0000356c   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x0000356cu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_3570:
    /* 00003570   4  jsr (ffff8224,A4) */
    c->pc = RC_ADDR(0x00003570u);
    rc_step(c, m);
    /* vector 91 */
    rc_push32(c, m, RC_ADDR(0x00003574u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c7au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d7c4u);
    return;

L_3574:
    /* 00003574   4  tst.w (fffffecc,A4) */
    c->pc = RC_ADDR(0x00003574u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x134u));
    rc_set_nzvc(c, t0, RC_W);

L_3578:
    /* 00003578   2  beq 0000357c */
    c->pc = RC_ADDR(0x00003578u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_357C;

L_357A:
    /* 0000357a   2  bra 00003574 */
    c->pc = RC_ADDR(0x0000357au);
    rc_step(c, m);
    rc_tick();
    goto L_3574;

L_357C:
    /* 0000357c   2  bra 00003548 */
    c->pc = RC_ADDR(0x0000357cu);
    rc_step(c, m);
    rc_tick();
    goto L_3548;

}
