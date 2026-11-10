/* fn_0000a500 - 170 byte(s), 49 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000a500(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a500u): goto L_A500;
    case RC_ADDR(0x0000a504u): goto L_A504;
    case RC_ADDR(0x0000a508u): goto L_A508;
    case RC_ADDR(0x0000a50cu): goto L_A50C;
    case RC_ADDR(0x0000a512u): goto L_A512;
    case RC_ADDR(0x0000a516u): goto L_A516;
    case RC_ADDR(0x0000a518u): goto L_A518;
    case RC_ADDR(0x0000a51eu): goto L_A51E;
    case RC_ADDR(0x0000a522u): goto L_A522;
    case RC_ADDR(0x0000a524u): goto L_A524;
    case RC_ADDR(0x0000a52au): goto L_A52A;
    case RC_ADDR(0x0000a52cu): goto L_A52C;
    case RC_ADDR(0x0000a52eu): goto L_A52E;
    case RC_ADDR(0x0000a530u): goto L_A530;
    case RC_ADDR(0x0000a534u): goto L_A534;
    case RC_ADDR(0x0000a536u): goto L_A536;
    case RC_ADDR(0x0000a53cu): goto L_A53C;
    case RC_ADDR(0x0000a540u): goto L_A540;
    case RC_ADDR(0x0000a542u): goto L_A542;
    case RC_ADDR(0x0000a548u): goto L_A548;
    case RC_ADDR(0x0000a54eu): goto L_A54E;
    case RC_ADDR(0x0000a552u): goto L_A552;
    case RC_ADDR(0x0000a554u): goto L_A554;
    case RC_ADDR(0x0000a558u): goto L_A558;
    case RC_ADDR(0x0000a55au): goto L_A55A;
    case RC_ADDR(0x0000a560u): goto L_A560;
    case RC_ADDR(0x0000a566u): goto L_A566;
    case RC_ADDR(0x0000a568u): goto L_A568;
    case RC_ADDR(0x0000a56cu): goto L_A56C;
    case RC_ADDR(0x0000a56eu): goto L_A56E;
    case RC_ADDR(0x0000a572u): goto L_A572;
    case RC_ADDR(0x0000a574u): goto L_A574;
    case RC_ADDR(0x0000a576u): goto L_A576;
    case RC_ADDR(0x0000a57au): goto L_A57A;
    case RC_ADDR(0x0000a57cu): goto L_A57C;
    case RC_ADDR(0x0000a580u): goto L_A580;
    case RC_ADDR(0x0000a584u): goto L_A584;
    case RC_ADDR(0x0000a586u): goto L_A586;
    case RC_ADDR(0x0000a588u): goto L_A588;
    case RC_ADDR(0x0000a58cu): goto L_A58C;
    case RC_ADDR(0x0000a58eu): goto L_A58E;
    case RC_ADDR(0x0000a592u): goto L_A592;
    case RC_ADDR(0x0000a596u): goto L_A596;
    case RC_ADDR(0x0000a598u): goto L_A598;
    case RC_ADDR(0x0000a59cu): goto L_A59C;
    case RC_ADDR(0x0000a5a0u): goto L_A5A0;
    case RC_ADDR(0x0000a5a2u): goto L_A5A2;
    case RC_ADDR(0x0000a5a6u): goto L_A5A6;
    case RC_ADDR(0x0000a5a8u): goto L_A5A8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A500:
    /* 0000a500   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000a500u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_A504:
    /* 0000a504   4  clr.w (ffffce3c,A4) */
    c->pc = RC_ADDR(0x0000a504u);
    rc_wr16(c, m, (c->a[4] - 0x31c4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A508:
    /* 0000a508   4  clr.w (ffffce3e,A4) */
    c->pc = RC_ADDR(0x0000a508u);
    rc_wr16(c, m, (c->a[4] - 0x31c2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A50C:
    /* 0000a50c   6  move.w (00dff00c).l,D0 */
    c->pc = RC_ADDR(0x0000a50cu);
    t0 = rc_rd16(c, m, RC_ADDR(0x00dff00cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A512:
    /* 0000a512   4  btst #1,D0 */
    c->pc = RC_ADDR(0x0000a512u);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_A516:
    /* 0000a516   2  beq 0000a51e */
    c->pc = RC_ADDR(0x0000a516u);
    if (rc_cond(c, 7)) goto L_A51E;

L_A518:
    /* 0000a518   6  move.w #1,(ffffce3c,A4) */
    c->pc = RC_ADDR(0x0000a518u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x31c4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A51E:
    /* 0000a51e   4  btst #9,D0 */
    c->pc = RC_ADDR(0x0000a51eu);
    t4 = 0x00000009u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_A522:
    /* 0000a522   2  beq 0000a52a */
    c->pc = RC_ADDR(0x0000a522u);
    if (rc_cond(c, 7)) goto L_A52A;

L_A524:
    /* 0000a524   6  move.w #ffff,(ffffce3c,A4) */
    c->pc = RC_ADDR(0x0000a524u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] - 0x31c4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A52A:
    /* 0000a52a   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x0000a52au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A52C:
    /* 0000a52c   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0000a52cu);
    c->d[1] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W);

L_A52E:
    /* 0000a52e   2  eor.w D1,D0 */
    c->pc = RC_ADDR(0x0000a52eu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 ^ rc_d_get(c, 1, RC_W);
    rc_d_set(c, 0, RC_W, t2);
    rc_set_nzvc(c, t2, RC_W);

L_A530:
    /* 0000a530   4  btst #0,D0 */
    c->pc = RC_ADDR(0x0000a530u);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_A534:
    /* 0000a534   2  beq 0000a53c */
    c->pc = RC_ADDR(0x0000a534u);
    if (rc_cond(c, 7)) goto L_A53C;

L_A536:
    /* 0000a536   6  move.w #1,(ffffce3e,A4) */
    c->pc = RC_ADDR(0x0000a536u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x31c2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A53C:
    /* 0000a53c   4  btst #8,D0 */
    c->pc = RC_ADDR(0x0000a53cu);
    t4 = 0x00000008u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_A540:
    /* 0000a540   2  beq 0000a548 */
    c->pc = RC_ADDR(0x0000a540u);
    if (rc_cond(c, 7)) goto L_A548;

L_A542:
    /* 0000a542   6  move.w #ffff,(ffffce3e,A4) */
    c->pc = RC_ADDR(0x0000a542u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[4] - 0x31c2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A548:
    /* 0000a548   6  move.b (00bfe001).l,D0 */
    c->pc = RC_ADDR(0x0000a548u);
    t0 = rc_rd8(c, m, RC_ADDR(0x00bfe001u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_A54E:
    /* 0000a54e   4  btst #7,D0 */
    c->pc = RC_ADDR(0x0000a54eu);
    t4 = 0x00000007u;
    t0 = rc_d_get(c, 0, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_A552:
    /* 0000a552   2  bne 0000a568 */
    c->pc = RC_ADDR(0x0000a552u);
    if (rc_cond(c, 6)) goto L_A568;

L_A554:
    /* 0000a554   4  tst.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x0000a554u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_A558:
    /* 0000a558   2  bne 0000a56c */
    c->pc = RC_ADDR(0x0000a558u);
    if (rc_cond(c, 6)) goto L_A56C;

L_A55A:
    /* 0000a55a   6  move.w #1,(ffffce42,A4) */
    c->pc = RC_ADDR(0x0000a55au);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x31beu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A560:
    /* 0000a560   6  move.w #1,(ffffce40,A4) */
    c->pc = RC_ADDR(0x0000a560u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x31c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A566:
    /* 0000a566   2  bra 0000a56c */
    c->pc = RC_ADDR(0x0000a566u);
    goto L_A56C;

L_A568:
    /* 0000a568   4  clr.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x0000a568u);
    rc_wr16(c, m, (c->a[4] - 0x31c0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A56C:
    /* 0000a56c   2  clr.b D1 */
    c->pc = RC_ADDR(0x0000a56cu);
    rc_d_set(c, 1, RC_B, 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_A56E:
    /* 0000a56e   4  move.w (ffffce3c,A4),D0 */
    c->pc = RC_ADDR(0x0000a56eu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A572:
    /* 0000a572   2  beq 0000a580 */
    c->pc = RC_ADDR(0x0000a572u);
    if (rc_cond(c, 7)) goto L_A580;

L_A574:
    /* 0000a574   2  bmi 0000a57c */
    c->pc = RC_ADDR(0x0000a574u);
    if (rc_cond(c, 11)) goto L_A57C;

L_A576:
    /* 0000a576   4  bset #3,D1 */
    c->pc = RC_ADDR(0x0000a576u);
    t4 = 0x00000003u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_B, t2);

L_A57A:
    /* 0000a57a   2  bra 0000a580 */
    c->pc = RC_ADDR(0x0000a57au);
    goto L_A580;

L_A57C:
    /* 0000a57c   4  bset #2,D1 */
    c->pc = RC_ADDR(0x0000a57cu);
    t4 = 0x00000002u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_B, t2);

L_A580:
    /* 0000a580   4  move.w (ffffce3e,A4),D0 */
    c->pc = RC_ADDR(0x0000a580u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A584:
    /* 0000a584   2  beq 0000a592 */
    c->pc = RC_ADDR(0x0000a584u);
    if (rc_cond(c, 7)) goto L_A592;

L_A586:
    /* 0000a586   2  bmi 0000a58e */
    c->pc = RC_ADDR(0x0000a586u);
    if (rc_cond(c, 11)) goto L_A58E;

L_A588:
    /* 0000a588   4  bset #1,D1 */
    c->pc = RC_ADDR(0x0000a588u);
    t4 = 0x00000001u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_B, t2);

L_A58C:
    /* 0000a58c   2  bra 0000a592 */
    c->pc = RC_ADDR(0x0000a58cu);
    goto L_A592;

L_A58E:
    /* 0000a58e   4  bset #0,D1 */
    c->pc = RC_ADDR(0x0000a58eu);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_B, t2);

L_A592:
    /* 0000a592   4  move.w (ffffce40,A4),D0 */
    c->pc = RC_ADDR(0x0000a592u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A596:
    /* 0000a596   2  beq 0000a59c */
    c->pc = RC_ADDR(0x0000a596u);
    if (rc_cond(c, 7)) goto L_A59C;

L_A598:
    /* 0000a598   4  bset #4,D1 */
    c->pc = RC_ADDR(0x0000a598u);
    t4 = 0x00000004u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_B, t2);

L_A59C:
    /* 0000a59c   4  move.w (ffffce42,A4),D0 */
    c->pc = RC_ADDR(0x0000a59cu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31beu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A5A0:
    /* 0000a5a0   2  beq 0000a5a6 */
    c->pc = RC_ADDR(0x0000a5a0u);
    if (rc_cond(c, 7)) goto L_A5A6;

L_A5A2:
    /* 0000a5a2   4  bset #5,D1 */
    c->pc = RC_ADDR(0x0000a5a2u);
    t4 = 0x00000005u;
    t0 = rc_d_get(c, 1, RC_B);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 1, RC_B, t2);

L_A5A6:
    /* 0000a5a6   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a5a6u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A5A8:
    /* 0000a5a8   2  rts */
    c->pc = RC_ADDR(0x0000a5a8u);
    rc_ret(c, m);
    return;

}
