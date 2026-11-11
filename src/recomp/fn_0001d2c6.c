/* fn_0001d2c6 - 220 byte(s), 60 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001d2c6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001d2c6u): goto L_1D2C6;
    case RC_ADDR(0x0001d2cau): goto L_1D2CA;
    case RC_ADDR(0x0001d2d0u): goto L_1D2D0;
    case RC_ADDR(0x0001d2d4u): goto L_1D2D4;
    case RC_ADDR(0x0001d2d6u): goto L_1D2D6;
    case RC_ADDR(0x0001d2dau): goto L_1D2DA;
    case RC_ADDR(0x0001d2deu): goto L_1D2DE;
    case RC_ADDR(0x0001d2e0u): goto L_1D2E0;
    case RC_ADDR(0x0001d2e4u): goto L_1D2E4;
    case RC_ADDR(0x0001d2eau): goto L_1D2EA;
    case RC_ADDR(0x0001d2eeu): goto L_1D2EE;
    case RC_ADDR(0x0001d2f2u): goto L_1D2F2;
    case RC_ADDR(0x0001d2f4u): goto L_1D2F4;
    case RC_ADDR(0x0001d2fau): goto L_1D2FA;
    case RC_ADDR(0x0001d2feu): goto L_1D2FE;
    case RC_ADDR(0x0001d300u): goto L_1D300;
    case RC_ADDR(0x0001d304u): goto L_1D304;
    case RC_ADDR(0x0001d30au): goto L_1D30A;
    case RC_ADDR(0x0001d30eu): goto L_1D30E;
    case RC_ADDR(0x0001d312u): goto L_1D312;
    case RC_ADDR(0x0001d314u): goto L_1D314;
    case RC_ADDR(0x0001d318u): goto L_1D318;
    case RC_ADDR(0x0001d31au): goto L_1D31A;
    case RC_ADDR(0x0001d31cu): goto L_1D31C;
    case RC_ADDR(0x0001d31eu): goto L_1D31E;
    case RC_ADDR(0x0001d320u): goto L_1D320;
    case RC_ADDR(0x0001d324u): goto L_1D324;
    case RC_ADDR(0x0001d326u): goto L_1D326;
    case RC_ADDR(0x0001d328u): goto L_1D328;
    case RC_ADDR(0x0001d32cu): goto L_1D32C;
    case RC_ADDR(0x0001d330u): goto L_1D330;
    case RC_ADDR(0x0001d334u): goto L_1D334;
    case RC_ADDR(0x0001d338u): goto L_1D338;
    case RC_ADDR(0x0001d33eu): goto L_1D33E;
    case RC_ADDR(0x0001d342u): goto L_1D342;
    case RC_ADDR(0x0001d346u): goto L_1D346;
    case RC_ADDR(0x0001d34cu): goto L_1D34C;
    case RC_ADDR(0x0001d352u): goto L_1D352;
    case RC_ADDR(0x0001d358u): goto L_1D358;
    case RC_ADDR(0x0001d35cu): goto L_1D35C;
    case RC_ADDR(0x0001d362u): goto L_1D362;
    case RC_ADDR(0x0001d366u): goto L_1D366;
    case RC_ADDR(0x0001d36au): goto L_1D36A;
    case RC_ADDR(0x0001d36cu): goto L_1D36C;
    case RC_ADDR(0x0001d36eu): goto L_1D36E;
    case RC_ADDR(0x0001d372u): goto L_1D372;
    case RC_ADDR(0x0001d376u): goto L_1D376;
    case RC_ADDR(0x0001d378u): goto L_1D378;
    case RC_ADDR(0x0001d37cu): goto L_1D37C;
    case RC_ADDR(0x0001d37eu): goto L_1D37E;
    case RC_ADDR(0x0001d380u): goto L_1D380;
    case RC_ADDR(0x0001d384u): goto L_1D384;
    case RC_ADDR(0x0001d386u): goto L_1D386;
    case RC_ADDR(0x0001d38au): goto L_1D38A;
    case RC_ADDR(0x0001d38eu): goto L_1D38E;
    case RC_ADDR(0x0001d390u): goto L_1D390;
    case RC_ADDR(0x0001d394u): goto L_1D394;
    case RC_ADDR(0x0001d398u): goto L_1D398;
    case RC_ADDR(0x0001d39au): goto L_1D39A;
    case RC_ADDR(0x0001d39eu): goto L_1D39E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D2C6:
    /* 0001d2c6   4  link.w A5,#fffffff2 */
    c->pc = RC_ADDR(0x0001d2c6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0xeu;

L_1D2CA:
    /* 0001d2ca   6  move.l (ffffcb18,A4),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001d2cau);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x34e8u));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D2D0:
    /* 0001d2d0   4  tst.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0001d2d0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_1D2D4:
    /* 0001d2d4   2  beq 0001d2f4 */
    c->pc = RC_ADDR(0x0001d2d4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D2F4;

L_1D2D6:
    /* 0001d2d6   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d2d6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D2DA:
    /* 0001d2da   4  jsr (ffff8212,A4) */
    c->pc = RC_ADDR(0x0001d2dau);
    rc_step(c, m, 18);
    /* vector 88 */
    rc_push32(c, m, RC_ADDR(0x0001d2deu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c68u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d642u);
    return;

L_1D2DE:
    /* 0001d2de   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d2deu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D2E0:
    /* 0001d2e0   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0001d2e0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1D2E4:
    /* 0001d2e4   6  andi.w #fffd,(a,A0) */
    c->pc = RC_ADDR(0x0001d2e4u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fffdu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1D2EA:
    /* 0001d2ea   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0001d2eau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1D2EE:
    /* 0001d2ee   4  move.l (A0),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001d2eeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D2F2:
    /* 0001d2f2   2  bra 0001d2d0 */
    c->pc = RC_ADDR(0x0001d2f2u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D2D0;

L_1D2F4:
    /* 0001d2f4   6  move.l (ffffcce6,A4),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001d2f4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x331au));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D2FA:
    /* 0001d2fa   4  tst.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x0001d2fau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_1D2FE:
    /* 0001d2fe   2  beq 0001d314 */
    c->pc = RC_ADDR(0x0001d2feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D314;

L_1D300:
    /* 0001d300   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0001d300u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1D304:
    /* 0001d304   6  andi.w #fffd,(a,A0) */
    c->pc = RC_ADDR(0x0001d304u);
    rc_step(c, m, 20);
    t3 = (c->a[0] + 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x0000fffdu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_1D30A:
    /* 0001d30a   4  movea.l (fffffff8,A5),A0 */
    c->pc = RC_ADDR(0x0001d30au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[0] = t0;

L_1D30E:
    /* 0001d30e   4  move.l (A0),(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001d30eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, c->a[0]);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D312:
    /* 0001d312   2  bra 0001d2fa */
    c->pc = RC_ADDR(0x0001d312u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D2FA;

L_1D314:
    /* 0001d314   4  jsr (0001d00a) */
    c->pc = RC_ADDR(0x0001d314u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d318u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d00au);
    return;

L_1D318:
    /* 0001d318   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001d318u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1D31A:
    /* 0001d31a   2  bne 0001d320 */
    c->pc = RC_ADDR(0x0001d31au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D320;

L_1D31C:
    /* 0001d31c   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d31cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D31E:
    /* 0001d31e   2  rts */
    c->pc = RC_ADDR(0x0001d31eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1D320:
    /* 0001d320   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d320u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D324:
    /* 0001d324   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001d324u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D326:
    /* 0001d326   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0001d326u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D328:
    /* 0001d328   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d328u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D32C:
    /* 0001d32c   4  pea (fffffffc,A5) */
    c->pc = RC_ADDR(0x0001d32cu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x4u));

L_1D330:
    /* 0001d330   4  jsr (0001dcb0) */
    c->pc = RC_ADDR(0x0001d330u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d334u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001dcb0u);
    return;

L_1D334:
    /* 0001d334   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0001d334u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1D338:
    /* 0001d338   6  move.w (ffffcb06,A4),(26b4,A4) */
    c->pc = RC_ADDR(0x0001d338u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x34fau));
    rc_wr16(c, m, (c->a[4] + 0x26b4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D33E:
    /* 0001d33e   4  clr.l (26b6,A4) */
    c->pc = RC_ADDR(0x0001d33eu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0x26b6u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D342:
    /* 0001d342   4  jsr (0001d7a0) */
    c->pc = RC_ADDR(0x0001d342u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d346u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d7a0u);
    return;

L_1D346:
    /* 0001d346   6  move.w #1,(26ba,A4) */
    c->pc = RC_ADDR(0x0001d346u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D34C:
    /* 0001d34c   6  move.w #1,(26bc,A4) */
    c->pc = RC_ADDR(0x0001d34cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26bcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D352:
    /* 0001d352   6  move.w #1,(26be,A4) */
    c->pc = RC_ADDR(0x0001d352u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26beu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D358:
    /* 0001d358   4  clr.b (ffffcb32,A4) */
    c->pc = RC_ADDR(0x0001d358u);
    rc_step(c, m, 16);
    rc_wr8(c, m, (c->a[4] - 0x34ceu), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_1D35C:
    /* 0001d35c   6  move.w (26bc,A4),(26be,A4) */
    c->pc = RC_ADDR(0x0001d35cu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26bcu));
    rc_wr16(c, m, (c->a[4] + 0x26beu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D362:
    /* 0001d362   4  clr.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x0001d362u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1D366:
    /* 0001d366   4  move.w (fffffff2,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d366u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D36A:
    /* 0001d36a   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001d36au);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D36C:
    /* 0001d36c   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x0001d36cu);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1D36E:
    /* 0001d36e   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d36eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D372:
    /* 0001d372   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0001d372u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_1D376:
    /* 0001d376   2  jsr (A0) */
    c->pc = RC_ADDR(0x0001d376u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001d378u));
    rc_depth++;
    t3 = c->a[0];
    c->pc = t3;
    return;

L_1D378:
    /* 0001d378   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001d378u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1D37C:
    /* 0001d37c   2  tst.w D0 */
    c->pc = RC_ADDR(0x0001d37cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_1D37E:
    /* 0001d37e   2  bne 0001d390 */
    c->pc = RC_ADDR(0x0001d37eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D390;

L_1D380:
    /* 0001d380   4  tst.w (fffffff2,A5) */
    c->pc = RC_ADDR(0x0001d380u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_set_nzvc(c, t0, RC_W);

L_1D384:
    /* 0001d384   2  bne 0001d38a */
    c->pc = RC_ADDR(0x0001d384u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1D38A;

L_1D386:
    /* 0001d386   4  jsr (0001d1da) */
    c->pc = RC_ADDR(0x0001d386u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d38au));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d1dau);
    return;

L_1D38A:
    /* 0001d38a   4  addq.l #1,(26b6,A4) */
    c->pc = RC_ADDR(0x0001d38au);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x26b6u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_1D38E:
    /* 0001d38e   2  bra 0001d358 */
    c->pc = RC_ADDR(0x0001d38eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D358;

L_1D390:
    /* 0001d390   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x0001d390u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1D394:
    /* 0001d394   4  jsr (0001de42) */
    c->pc = RC_ADDR(0x0001d394u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d398u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001de42u);
    return;

L_1D398:
    /* 0001d398   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d398u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D39A:
    /* 0001d39a   4  jsr (0001d232) */
    c->pc = RC_ADDR(0x0001d39au);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001d39eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0001d232u);
    return;

L_1D39E:
    /* 0001d39e   4  bra 0001d31c */
    c->pc = RC_ADDR(0x0001d39eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D31C;

}
