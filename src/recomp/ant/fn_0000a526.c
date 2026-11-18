/* fn_0000a526 - 112 byte(s), 32 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a526(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a526u): goto L_A526;
    case RC_ADDR(0x0000a52au): goto L_A52A;
    case RC_ADDR(0x0000a52eu): goto L_A52E;
    case RC_ADDR(0x0000a532u): goto L_A532;
    case RC_ADDR(0x0000a536u): goto L_A536;
    case RC_ADDR(0x0000a538u): goto L_A538;
    case RC_ADDR(0x0000a53cu): goto L_A53C;
    case RC_ADDR(0x0000a542u): goto L_A542;
    case RC_ADDR(0x0000a544u): goto L_A544;
    case RC_ADDR(0x0000a54au): goto L_A54A;
    case RC_ADDR(0x0000a54cu): goto L_A54C;
    case RC_ADDR(0x0000a54eu): goto L_A54E;
    case RC_ADDR(0x0000a552u): goto L_A552;
    case RC_ADDR(0x0000a558u): goto L_A558;
    case RC_ADDR(0x0000a55cu): goto L_A55C;
    case RC_ADDR(0x0000a560u): goto L_A560;
    case RC_ADDR(0x0000a564u): goto L_A564;
    case RC_ADDR(0x0000a568u): goto L_A568;
    case RC_ADDR(0x0000a56au): goto L_A56A;
    case RC_ADDR(0x0000a56cu): goto L_A56C;
    case RC_ADDR(0x0000a56eu): goto L_A56E;
    case RC_ADDR(0x0000a570u): goto L_A570;
    case RC_ADDR(0x0000a574u): goto L_A574;
    case RC_ADDR(0x0000a576u): goto L_A576;
    case RC_ADDR(0x0000a57au): goto L_A57A;
    case RC_ADDR(0x0000a57cu): goto L_A57C;
    case RC_ADDR(0x0000a580u): goto L_A580;
    case RC_ADDR(0x0000a584u): goto L_A584;
    case RC_ADDR(0x0000a586u): goto L_A586;
    case RC_ADDR(0x0000a58cu): goto L_A58C;
    case RC_ADDR(0x0000a590u): goto L_A590;
    case RC_ADDR(0x0000a594u): goto L_A594;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A526:
    /* 0000a526   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000a526u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_A52A:
    /* 0000a52a   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x0000a52au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A52E:
    /* 0000a52e   4  lea (ffff954c,A4),A0 */
    c->pc = RC_ADDR(0x0000a52eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6ab4u);

L_A532:
    /* 0000a532   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000a532u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A536:
    /* 0000a536   2  ext.w D1 */
    c->pc = RC_ADDR(0x0000a536u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_A538:
    /* 0000a538   4  move.w D1,(a62,A4) */
    c->pc = RC_ADDR(0x0000a538u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] + 0xa62u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A53C:
    /* 0000a53c   6  cmpi.w #1,(a62,A4) */
    c->pc = RC_ADDR(0x0000a53cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xa62u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_A542:
    /* 0000a542   2  bge 0000a54e */
    c->pc = RC_ADDR(0x0000a542u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_A54E;

L_A544:
    /* 0000a544   6  move.w #1,(856,A4) */
    c->pc = RC_ADDR(0x0000a544u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x856u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A54A:
    /* 0000a54a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a54au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A54C:
    /* 0000a54c   2  rts */
    c->pc = RC_ADDR(0x0000a54cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_A54E:
    /* 0000a54e   4  clr.w (afe,A4) */
    c->pc = RC_ADDR(0x0000a54eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xafeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A552:
    /* 0000a552   6  move.w #1,(b00,A4) */
    c->pc = RC_ADDR(0x0000a552u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xb00u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A558:
    /* 0000a558   4  clr.w (7ba,A4) */
    c->pc = RC_ADDR(0x0000a558u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x7bau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A55C:
    /* 0000a55c   4  clr.w (856,A4) */
    c->pc = RC_ADDR(0x0000a55cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x856u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A560:
    /* 0000a560   4  pea (fffff890,A4) */
    c->pc = RC_ADDR(0x0000a560u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x770u));

L_A564:
    /* 0000a564   4  jsr (0000a220) */
    c->pc = RC_ADDR(0x0000a564u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a568u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a220u);
    return;

L_A568:
    /* 0000a568   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000a568u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_A56A:
    /* 0000a56a   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000a56au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_A56C:
    /* 0000a56c   2  bne 0000a570 */
    c->pc = RC_ADDR(0x0000a56cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_A570;

L_A56E:
    /* 0000a56e   2  bra 0000a54a */
    c->pc = RC_ADDR(0x0000a56eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_A54A;

L_A570:
    /* 0000a570   4  pea (00009238) */
    c->pc = RC_ADDR(0x0000a570u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00009238u));

L_A574:
    /* 0000a574   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0000a574u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_A576:
    /* 0000a576   4  jsr (ffff8218,A4) */
    c->pc = RC_ADDR(0x0000a576u);
    rc_step(c, m, 18);
    /* vector 89 */
    rc_push32(c, m, RC_ADDR(0x0000a57au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d0eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f34cu);
    return;

L_A57A:
    /* 0000a57a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000a57au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_A57C:
    /* 0000a57c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000a57cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_A580:
    /* 0000a580   4  jsr (ffff80ce,A4) */
    c->pc = RC_ADDR(0x0000a580u);
    rc_step(c, m, 18);
    /* vector 34 */
    rc_push32(c, m, RC_ADDR(0x0000a584u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bc4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af96u);
    return;

L_A584:
    /* 0000a584   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000a584u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_A586:
    /* 0000a586   6  move.w #c8,(ffffd346,A4) */
    c->pc = RC_ADDR(0x0000a586u);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x2cbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A58C:
    /* 0000a58c   4  jsr (ffff823c,A4) */
    c->pc = RC_ADDR(0x0000a58cu);
    rc_step(c, m, 18);
    /* vector 95 */
    rc_push32(c, m, RC_ADDR(0x0000a590u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d32u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f814u);
    return;

L_A590:
    /* 0000a590   4  jsr (0000a376) */
    c->pc = RC_ADDR(0x0000a590u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000a594u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000a376u);
    return;

L_A594:
    /* 0000a594   2  bra 0000a54a */
    c->pc = RC_ADDR(0x0000a594u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_A54A;

}
