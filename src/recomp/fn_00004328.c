/* fn_00004328 - 144 byte(s), 40 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00004328(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00004328u): goto L_4328;
    case RC_ADDR(0x0000432cu): goto L_432C;
    case RC_ADDR(0x00004332u): goto L_4332;
    case RC_ADDR(0x00004338u): goto L_4338;
    case RC_ADDR(0x0000433cu): goto L_433C;
    case RC_ADDR(0x00004340u): goto L_4340;
    case RC_ADDR(0x00004342u): goto L_4342;
    case RC_ADDR(0x00004346u): goto L_4346;
    case RC_ADDR(0x00004348u): goto L_4348;
    case RC_ADDR(0x0000434cu): goto L_434C;
    case RC_ADDR(0x00004350u): goto L_4350;
    case RC_ADDR(0x00004354u): goto L_4354;
    case RC_ADDR(0x00004358u): goto L_4358;
    case RC_ADDR(0x0000435au): goto L_435A;
    case RC_ADDR(0x0000435eu): goto L_435E;
    case RC_ADDR(0x00004362u): goto L_4362;
    case RC_ADDR(0x00004364u): goto L_4364;
    case RC_ADDR(0x00004368u): goto L_4368;
    case RC_ADDR(0x0000436cu): goto L_436C;
    case RC_ADDR(0x00004370u): goto L_4370;
    case RC_ADDR(0x00004374u): goto L_4374;
    case RC_ADDR(0x00004376u): goto L_4376;
    case RC_ADDR(0x0000437au): goto L_437A;
    case RC_ADDR(0x0000437cu): goto L_437C;
    case RC_ADDR(0x00004380u): goto L_4380;
    case RC_ADDR(0x00004384u): goto L_4384;
    case RC_ADDR(0x00004386u): goto L_4386;
    case RC_ADDR(0x0000438au): goto L_438A;
    case RC_ADDR(0x0000438eu): goto L_438E;
    case RC_ADDR(0x00004392u): goto L_4392;
    case RC_ADDR(0x00004394u): goto L_4394;
    case RC_ADDR(0x00004398u): goto L_4398;
    case RC_ADDR(0x0000439au): goto L_439A;
    case RC_ADDR(0x0000439eu): goto L_439E;
    case RC_ADDR(0x000043a0u): goto L_43A0;
    case RC_ADDR(0x000043a2u): goto L_43A2;
    case RC_ADDR(0x000043a8u): goto L_43A8;
    case RC_ADDR(0x000043aeu): goto L_43AE;
    case RC_ADDR(0x000043b4u): goto L_43B4;
    case RC_ADDR(0x000043b6u): goto L_43B6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4328:
    /* 00004328   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00004328u);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_432C:
    /* 0000432c   6  move.w #4,(fffffec2,A4) */
    c->pc = RC_ADDR(0x0000432cu);
    rc_step(c, m);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] - 0x13eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4332:
    /* 00004332   6  move.w #13b,(fffffec4,A4) */
    c->pc = RC_ADDR(0x00004332u);
    rc_step(c, m);
    t0 = 0x0000013bu;
    rc_wr16(c, m, (c->a[4] - 0x13cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4338:
    /* 00004338   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004338u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_433C:
    /* 0000433c   4  jsr (00004f5c) */
    c->pc = RC_ADDR(0x0000433cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00004340u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004f5cu);
    return;

L_4340:
    /* 00004340   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004340u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4342:
    /* 00004342   4  move.w #c5,D1 */
    c->pc = RC_ADDR(0x00004342u);
    rc_step(c, m);
    t0 = 0x000000c5u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4346:
    /* 00004346   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x00004346u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_4348:
    /* 00004348   4  move.w D1,(ffffcbc2,A4) */
    c->pc = RC_ADDR(0x00004348u);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x343eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_434C:
    /* 0000434c   4  move.w #1b,-(A7) */
    c->pc = RC_ADDR(0x0000434cu);
    rc_step(c, m);
    t0 = 0x0000001bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4350:
    /* 00004350   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004350u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4354:
    /* 00004354   4  jsr (ffff806e,A4) */
    c->pc = RC_ADDR(0x00004354u);
    rc_step(c, m);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x00004358u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ac4u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005012u);
    return;

L_4358:
    /* 00004358   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00004358u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_435A:
    /* 0000435a   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000435au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_435E:
    /* 0000435e   4  jsr (00003706) */
    c->pc = RC_ADDR(0x0000435eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00004362u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003706u);
    return;

L_4362:
    /* 00004362   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004362u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4364:
    /* 00004364   4  jsr (ffff81ee,A4) */
    c->pc = RC_ADDR(0x00004364u);
    rc_step(c, m);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x00004368u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c44u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d1dau);
    return;

L_4368:
    /* 00004368   4  move.w #1b,-(A7) */
    c->pc = RC_ADDR(0x00004368u);
    rc_step(c, m);
    t0 = 0x0000001bu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_436C:
    /* 0000436c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000436cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4370:
    /* 00004370   4  jsr (ffff806e,A4) */
    c->pc = RC_ADDR(0x00004370u);
    rc_step(c, m);
    /* vector 18 */
    rc_push32(c, m, RC_ADDR(0x00004374u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021ac4u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00005012u);
    return;

L_4374:
    /* 00004374   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00004374u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_4376:
    /* 00004376   4  tst.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x00004376u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_437A:
    /* 0000437a   2  bne 0000439a */
    c->pc = RC_ADDR(0x0000437au);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_439A;

L_437C:
    /* 0000437c   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000437cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4380:
    /* 00004380   4  jsr (000042c6) */
    c->pc = RC_ADDR(0x00004380u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00004384u));
    rc_depth++;
    c->pc = RC_ADDR(0x000042c6u);
    return;

L_4384:
    /* 00004384   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004384u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4386:
    /* 00004386   4  jsr (00003912) */
    c->pc = RC_ADDR(0x00004386u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000438au));
    rc_depth++;
    c->pc = RC_ADDR(0x00003912u);
    return;

L_438A:
    /* 0000438a   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000438au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_438E:
    /* 0000438e   4  jsr (00003706) */
    c->pc = RC_ADDR(0x0000438eu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00004392u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003706u);
    return;

L_4392:
    /* 00004392   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004392u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_4394:
    /* 00004394   4  jsr (ffff81ee,A4) */
    c->pc = RC_ADDR(0x00004394u);
    rc_step(c, m);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x00004398u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c44u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d1dau);
    return;

L_4398:
    /* 00004398   2  bra 00004376 */
    c->pc = RC_ADDR(0x00004398u);
    rc_step(c, m);
    rc_tick();
    goto L_4376;

L_439A:
    /* 0000439a   4  tst.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x0000439au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_439E:
    /* 0000439e   2  beq 000043a2 */
    c->pc = RC_ADDR(0x0000439eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_43A2;

L_43A0:
    /* 000043a0   2  bra 0000439a */
    c->pc = RC_ADDR(0x000043a0u);
    rc_step(c, m);
    rc_tick();
    goto L_439A;

L_43A2:
    /* 000043a2   6  move.w #c8,(ffffcbc2,A4) */
    c->pc = RC_ADDR(0x000043a2u);
    rc_step(c, m);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x343eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_43A8:
    /* 000043a8   6  move.w #13,(fffffec2,A4) */
    c->pc = RC_ADDR(0x000043a8u);
    rc_step(c, m);
    t0 = 0x00000013u;
    rc_wr16(c, m, (c->a[4] - 0x13eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_43AE:
    /* 000043ae   6  move.w #12c,(fffffec4,A4) */
    c->pc = RC_ADDR(0x000043aeu);
    rc_step(c, m);
    t0 = 0x0000012cu;
    rc_wr16(c, m, (c->a[4] - 0x13cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_43B4:
    /* 000043b4   2  unlk A5 */
    c->pc = RC_ADDR(0x000043b4u);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_43B6:
    /* 000043b6   2  rts */
    c->pc = RC_ADDR(0x000043b6u);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
