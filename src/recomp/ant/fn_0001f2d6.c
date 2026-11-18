/* fn_0001f2d6 - 118 byte(s), 35 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f2d6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f2d6u): goto L_1F2D6;
    case RC_ADDR(0x0001f2dau): goto L_1F2DA;
    case RC_ADDR(0x0001f2deu): goto L_1F2DE;
    case RC_ADDR(0x0001f2e4u): goto L_1F2E4;
    case RC_ADDR(0x0001f2e8u): goto L_1F2E8;
    case RC_ADDR(0x0001f2ecu): goto L_1F2EC;
    case RC_ADDR(0x0001f2eeu): goto L_1F2EE;
    case RC_ADDR(0x0001f2f2u): goto L_1F2F2;
    case RC_ADDR(0x0001f2f6u): goto L_1F2F6;
    case RC_ADDR(0x0001f2fau): goto L_1F2FA;
    case RC_ADDR(0x0001f2fcu): goto L_1F2FC;
    case RC_ADDR(0x0001f300u): goto L_1F300;
    case RC_ADDR(0x0001f302u): goto L_1F302;
    case RC_ADDR(0x0001f306u): goto L_1F306;
    case RC_ADDR(0x0001f30au): goto L_1F30A;
    case RC_ADDR(0x0001f30cu): goto L_1F30C;
    case RC_ADDR(0x0001f310u): goto L_1F310;
    case RC_ADDR(0x0001f312u): goto L_1F312;
    case RC_ADDR(0x0001f316u): goto L_1F316;
    case RC_ADDR(0x0001f31au): goto L_1F31A;
    case RC_ADDR(0x0001f31cu): goto L_1F31C;
    case RC_ADDR(0x0001f320u): goto L_1F320;
    case RC_ADDR(0x0001f322u): goto L_1F322;
    case RC_ADDR(0x0001f326u): goto L_1F326;
    case RC_ADDR(0x0001f32au): goto L_1F32A;
    case RC_ADDR(0x0001f32cu): goto L_1F32C;
    case RC_ADDR(0x0001f330u): goto L_1F330;
    case RC_ADDR(0x0001f332u): goto L_1F332;
    case RC_ADDR(0x0001f336u): goto L_1F336;
    case RC_ADDR(0x0001f33au): goto L_1F33A;
    case RC_ADDR(0x0001f33cu): goto L_1F33C;
    case RC_ADDR(0x0001f340u): goto L_1F340;
    case RC_ADDR(0x0001f344u): goto L_1F344;
    case RC_ADDR(0x0001f348u): goto L_1F348;
    case RC_ADDR(0x0001f34au): goto L_1F34A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F2D6:
    /* 0001f2d6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f2d6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F2DA:
    /* 0001f2da   4  jsr (00023a2c) */
    c->pc = RC_ADDR(0x0001f2dau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f2deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023a2cu);
    return;

L_1F2DE:
    /* 0001f2de   6  move.w #1,(ffffd2b0,A4) */
    c->pc = RC_ADDR(0x0001f2deu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2d50u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F2E4:
    /* 0001f2e4   4  clr.w (ffffd2ae,A4) */
    c->pc = RC_ADDR(0x0001f2e4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d52u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F2E8:
    /* 0001f2e8   4  tst.l (ffffd298,A4) */
    c->pc = RC_ADDR(0x0001f2e8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    rc_set_nzvc(c, t0, RC_L);

L_1F2EC:
    /* 0001f2ec   2  beq 0001f2fc */
    c->pc = RC_ADDR(0x0001f2ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F2FC;

L_1F2EE:
    /* 0001f2ee   4  pea (00000064).l */
    c->pc = RC_ADDR(0x0001f2eeu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000064u);

L_1F2F2:
    /* 0001f2f2   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f2f2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F2F6:
    /* 0001f2f6   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001f2f6u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001f2fau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1F2FA:
    /* 0001f2fa   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001f2fau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1F2FC:
    /* 0001f2fc   4  tst.l (ffffd290,A4) */
    c->pc = RC_ADDR(0x0001f2fcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d70u));
    rc_set_nzvc(c, t0, RC_L);

L_1F300:
    /* 0001f300   2  beq 0001f30c */
    c->pc = RC_ADDR(0x0001f300u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F30C;

L_1F302:
    /* 0001f302   4  pea (ffffd290,A4) */
    c->pc = RC_ADDR(0x0001f302u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x2d70u));

L_1F306:
    /* 0001f306   4  jsr (00021d70) */
    c->pc = RC_ADDR(0x0001f306u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f30au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d70u);
    return;

L_1F30A:
    /* 0001f30a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f30au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F30C:
    /* 0001f30c   4  tst.l (ffffd294,A4) */
    c->pc = RC_ADDR(0x0001f30cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d6cu));
    rc_set_nzvc(c, t0, RC_L);

L_1F310:
    /* 0001f310   2  beq 0001f31c */
    c->pc = RC_ADDR(0x0001f310u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F31C;

L_1F312:
    /* 0001f312   4  pea (ffffd294,A4) */
    c->pc = RC_ADDR(0x0001f312u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] - 0x2d6cu));

L_1F316:
    /* 0001f316   4  jsr (00021d70) */
    c->pc = RC_ADDR(0x0001f316u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f31au));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d70u);
    return;

L_1F31A:
    /* 0001f31a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f31au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F31C:
    /* 0001f31c   4  tst.l (ffffd33c,A4) */
    c->pc = RC_ADDR(0x0001f31cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    rc_set_nzvc(c, t0, RC_L);

L_1F320:
    /* 0001f320   2  beq 0001f32c */
    c->pc = RC_ADDR(0x0001f320u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F32C;

L_1F322:
    /* 0001f322   4  move.l (ffffd33c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f322u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F326:
    /* 0001f326   4  jsr (0001f4dc) */
    c->pc = RC_ADDR(0x0001f326u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f32au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f4dcu);
    return;

L_1F32A:
    /* 0001f32a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f32au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F32C:
    /* 0001f32c   4  tst.l (ffffd340,A4) */
    c->pc = RC_ADDR(0x0001f32cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_set_nzvc(c, t0, RC_L);

L_1F330:
    /* 0001f330   2  beq 0001f33c */
    c->pc = RC_ADDR(0x0001f330u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F33C;

L_1F332:
    /* 0001f332   4  move.l (ffffd340,A4),-(A7) */
    c->pc = RC_ADDR(0x0001f332u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F336:
    /* 0001f336   4  jsr (0001f4dc) */
    c->pc = RC_ADDR(0x0001f336u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f33au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f4dcu);
    return;

L_1F33A:
    /* 0001f33a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001f33au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1F33C:
    /* 0001f33c   4  clr.l (ffffd340,A4) */
    c->pc = RC_ADDR(0x0001f33cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2cc0u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F340:
    /* 0001f340   4  clr.l (ffffd33c,A4) */
    c->pc = RC_ADDR(0x0001f340u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2cc4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F344:
    /* 0001f344   4  clr.l (ffffd298,A4) */
    c->pc = RC_ADDR(0x0001f344u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2d68u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1F348:
    /* 0001f348   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f348u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F34A:
    /* 0001f34a   2  rts */
    c->pc = RC_ADDR(0x0001f34au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
