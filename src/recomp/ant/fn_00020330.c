/* fn_00020330 - 130 byte(s), 41 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00020330(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00020330u): goto L_20330;
    case RC_ADDR(0x00020334u): goto L_20334;
    case RC_ADDR(0x00020336u): goto L_20336;
    case RC_ADDR(0x00020338u): goto L_20338;
    case RC_ADDR(0x0002033cu): goto L_2033C;
    case RC_ADDR(0x0002033eu): goto L_2033E;
    case RC_ADDR(0x00020342u): goto L_20342;
    case RC_ADDR(0x00020346u): goto L_20346;
    case RC_ADDR(0x00020348u): goto L_20348;
    case RC_ADDR(0x0002034cu): goto L_2034C;
    case RC_ADDR(0x00020350u): goto L_20350;
    case RC_ADDR(0x00020352u): goto L_20352;
    case RC_ADDR(0x00020356u): goto L_20356;
    case RC_ADDR(0x0002035au): goto L_2035A;
    case RC_ADDR(0x0002035cu): goto L_2035C;
    case RC_ADDR(0x0002035eu): goto L_2035E;
    case RC_ADDR(0x00020362u): goto L_20362;
    case RC_ADDR(0x00020364u): goto L_20364;
    case RC_ADDR(0x00020368u): goto L_20368;
    case RC_ADDR(0x0002036cu): goto L_2036C;
    case RC_ADDR(0x00020370u): goto L_20370;
    case RC_ADDR(0x00020372u): goto L_20372;
    case RC_ADDR(0x00020374u): goto L_20374;
    case RC_ADDR(0x0002037au): goto L_2037A;
    case RC_ADDR(0x0002037cu): goto L_2037C;
    case RC_ADDR(0x00020380u): goto L_20380;
    case RC_ADDR(0x00020384u): goto L_20384;
    case RC_ADDR(0x00020386u): goto L_20386;
    case RC_ADDR(0x0002038au): goto L_2038A;
    case RC_ADDR(0x00020390u): goto L_20390;
    case RC_ADDR(0x00020394u): goto L_20394;
    case RC_ADDR(0x00020398u): goto L_20398;
    case RC_ADDR(0x0002039cu): goto L_2039C;
    case RC_ADDR(0x000203a0u): goto L_203A0;
    case RC_ADDR(0x000203a4u): goto L_203A4;
    case RC_ADDR(0x000203a6u): goto L_203A6;
    case RC_ADDR(0x000203a8u): goto L_203A8;
    case RC_ADDR(0x000203aau): goto L_203AA;
    case RC_ADDR(0x000203acu): goto L_203AC;
    case RC_ADDR(0x000203aeu): goto L_203AE;
    case RC_ADDR(0x000203b0u): goto L_203B0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20330:
    /* 00020330   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00020330u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_20334:
    /* 00020334   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00020334u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20336:
    /* 00020336   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00020336u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20338:
    /* 00020338   4  jsr (0002359c) */
    c->pc = RC_ADDR(0x00020338u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002033cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002359cu);
    return;

L_2033C:
    /* 0002033c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002033cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2033E:
    /* 0002033e   4  move.l D0,(ffffd2ca,A4) */
    c->pc = RC_ADDR(0x0002033eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2d36u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20342:
    /* 00020342   4  tst.l (ffffd2ca,A4) */
    c->pc = RC_ADDR(0x00020342u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d36u));
    rc_set_nzvc(c, t0, RC_L);

L_20346:
    /* 00020346   2  beq 000203ac */
    c->pc = RC_ADDR(0x00020346u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_203AC;

L_20348:
    /* 00020348   4  move.l (ffffd2ca,A4),-(A7) */
    c->pc = RC_ADDR(0x00020348u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d36u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2034C:
    /* 0002034c   4  jsr (00023686) */
    c->pc = RC_ADDR(0x0002034cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020350u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023686u);
    return;

L_20350:
    /* 00020350   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020350u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20352:
    /* 00020352   4  move.l D0,(ffffd2c6,A4) */
    c->pc = RC_ADDR(0x00020352u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2d3au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20356:
    /* 00020356   4  tst.l (ffffd2c6,A4) */
    c->pc = RC_ADDR(0x00020356u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d3au));
    rc_set_nzvc(c, t0, RC_L);

L_2035A:
    /* 0002035a   2  beq 000203ac */
    c->pc = RC_ADDR(0x0002035au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_203AC;

L_2035C:
    /* 0002035c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0002035cu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2035E:
    /* 0002035e   4  move.l (ffffd2c6,A4),-(A7) */
    c->pc = RC_ADDR(0x0002035eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d3au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20362:
    /* 00020362   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00020362u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20364:
    /* 00020364   4  pea (000203b2) */
    c->pc = RC_ADDR(0x00020364u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000203b2u));

L_20368:
    /* 00020368   4  jsr (000237ac) */
    c->pc = RC_ADDR(0x00020368u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0002036cu));
    rc_depth++;
    c->pc = RC_ADDR(0x000237acu);
    return;

L_2036C:
    /* 0002036c   4  lea (10,A7),A7 */
    c->pc = RC_ADDR(0x0002036cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x10u);

L_20370:
    /* 00020370   2  tst.l D0 */
    c->pc = RC_ADDR(0x00020370u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_20372:
    /* 00020372   2  bne 0002037c */
    c->pc = RC_ADDR(0x00020372u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_2037C;

L_20374:
    /* 00020374   6  move.w #1,(ffffd2c4,A4) */
    c->pc = RC_ADDR(0x00020374u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x2d3cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2037A:
    /* 0002037a   2  bra 00020380 */
    c->pc = RC_ADDR(0x0002037au);
    rc_step(c, m, 10);
    goto L_20380;

L_2037C:
    /* 0002037c   4  clr.w (ffffd2c4,A4) */
    c->pc = RC_ADDR(0x0002037cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x2d3cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20380:
    /* 00020380   4  tst.w (ffffd2c4,A4) */
    c->pc = RC_ADDR(0x00020380u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d3cu));
    rc_set_nzvc(c, t0, RC_W);

L_20384:
    /* 00020384   2  beq 000203ac */
    c->pc = RC_ADDR(0x00020384u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_203AC;

L_20386:
    /* 00020386   4  movea.l (ffffd2c6,A4),A0 */
    c->pc = RC_ADDR(0x00020386u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d3au));
    c->a[0] = t0;

L_2038A:
    /* 0002038a   6  move.w #9,(1c,A0) */
    c->pc = RC_ADDR(0x0002038au);
    rc_step(c, m, 16);
    t0 = 0x00000009u;
    rc_wr16(c, m, (c->a[0] + 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20390:
    /* 00020390   4  lea (ffffd2ce,A4),A0 */
    c->pc = RC_ADDR(0x00020390u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2d32u);

L_20394:
    /* 00020394   4  movea.l (ffffd2c6,A4),A1 */
    c->pc = RC_ADDR(0x00020394u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d3au));
    c->a[1] = t0;

L_20398:
    /* 00020398   4  move.l A0,(28,A1) */
    c->pc = RC_ADDR(0x00020398u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x28u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2039C:
    /* 0002039c   4  move.l (ffffd2c6,A4),-(A7) */
    c->pc = RC_ADDR(0x0002039cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d3au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_203A0:
    /* 000203a0   4  jsr (00023740) */
    c->pc = RC_ADDR(0x000203a0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000203a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023740u);
    return;

L_203A4:
    /* 000203a4   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x000203a4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_203A6:
    /* 000203a6   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x000203a6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_203A8:
    /* 000203a8   2  unlk A5 */
    c->pc = RC_ADDR(0x000203a8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_203AA:
    /* 000203aa   2  rts */
    c->pc = RC_ADDR(0x000203aau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_203AC:
    /* 000203ac   2  bsr 000203c0 */
    c->pc = RC_ADDR(0x000203acu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000203aeu));
    rc_depth++;
    c->pc = RC_ADDR(0x000203c0u);
    return;

L_203AE:
    /* 000203ae   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000203aeu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_203B0:
    /* 000203b0   2  bra 000203a8 */
    c->pc = RC_ADDR(0x000203b0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_203A8;

}
