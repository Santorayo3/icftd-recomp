/* fn_00005404 - 100 byte(s), 30 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00005404(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00005404u): goto L_5404;
    case RC_ADDR(0x00005408u): goto L_5408;
    case RC_ADDR(0x0000540cu): goto L_540C;
    case RC_ADDR(0x00005412u): goto L_5412;
    case RC_ADDR(0x00005416u): goto L_5416;
    case RC_ADDR(0x00005418u): goto L_5418;
    case RC_ADDR(0x0000541au): goto L_541A;
    case RC_ADDR(0x0000541eu): goto L_541E;
    case RC_ADDR(0x00005422u): goto L_5422;
    case RC_ADDR(0x00005424u): goto L_5424;
    case RC_ADDR(0x00005428u): goto L_5428;
    case RC_ADDR(0x0000542au): goto L_542A;
    case RC_ADDR(0x0000542cu): goto L_542C;
    case RC_ADDR(0x00005430u): goto L_5430;
    case RC_ADDR(0x00005432u): goto L_5432;
    case RC_ADDR(0x00005434u): goto L_5434;
    case RC_ADDR(0x00005438u): goto L_5438;
    case RC_ADDR(0x0000543cu): goto L_543C;
    case RC_ADDR(0x00005440u): goto L_5440;
    case RC_ADDR(0x00005444u): goto L_5444;
    case RC_ADDR(0x00005448u): goto L_5448;
    case RC_ADDR(0x0000544au): goto L_544A;
    case RC_ADDR(0x0000544cu): goto L_544C;
    case RC_ADDR(0x00005450u): goto L_5450;
    case RC_ADDR(0x00005454u): goto L_5454;
    case RC_ADDR(0x00005458u): goto L_5458;
    case RC_ADDR(0x0000545cu): goto L_545C;
    case RC_ADDR(0x00005460u): goto L_5460;
    case RC_ADDR(0x00005464u): goto L_5464;
    case RC_ADDR(0x00005466u): goto L_5466;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_5404:
    /* 00005404   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x00005404u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_5408:
    /* 00005408   4  movea.l (ffffd298,A4),A0 */
    c->pc = RC_ADDR(0x00005408u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[0] = t0;

L_540C:
    /* 0000540c   6  move.l (ffffd340,A4),(4,A0) */
    c->pc = RC_ADDR(0x0000540cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2cc0u));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5412:
    /* 00005412   4  move.w (10,A5),D0 */
    c->pc = RC_ADDR(0x00005412u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5416:
    /* 00005416   2  ext.l D0 */
    c->pc = RC_ADDR(0x00005416u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_5418:
    /* 00005418   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00005418u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_541A:
    /* 0000541a   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x0000541au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_541E:
    /* 0000541e   4  jsr (ffff83b0,A4) */
    c->pc = RC_ADDR(0x0000541eu);
    rc_step(c, m, 18);
    /* vector 157 */
    rc_push32(c, m, RC_ADDR(0x00005422u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023ea6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002398cu);
    return;

L_5422:
    /* 00005422   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00005422u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_5424:
    /* 00005424   4  move.w (e,A5),D0 */
    c->pc = RC_ADDR(0x00005424u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5428:
    /* 00005428   2  ext.l D0 */
    c->pc = RC_ADDR(0x00005428u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_542A:
    /* 0000542a   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x0000542au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_542C:
    /* 0000542c   4  move.w (c,A5),D0 */
    c->pc = RC_ADDR(0x0000542cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5430:
    /* 00005430   2  ext.l D0 */
    c->pc = RC_ADDR(0x00005430u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_5432:
    /* 00005432   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00005432u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5434:
    /* 00005434   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00005434u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5438:
    /* 00005438   4  jsr (ffff839e,A4) */
    c->pc = RC_ADDR(0x00005438u);
    rc_step(c, m, 18);
    /* vector 154 */
    rc_push32(c, m, RC_ADDR(0x0000543cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e94u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023954u);
    return;

L_543C:
    /* 0000543c   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x0000543cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_5440:
    /* 00005440   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00005440u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5444:
    /* 00005444   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x00005444u);
    rc_step(c, m, 18);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00005448u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dc8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228c2u);
    return;

L_5448:
    /* 00005448   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00005448u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_544A:
    /* 0000544a   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000544au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_544C:
    /* 0000544c   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x0000544cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5450:
    /* 00005450   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00005450u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5454:
    /* 00005454   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00005454u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_5458:
    /* 00005458   4  move.l (ffffd298,A4),-(A7) */
    c->pc = RC_ADDR(0x00005458u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d68u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_545C:
    /* 0000545c   4  jsr (ffff83c2,A4) */
    c->pc = RC_ADDR(0x0000545cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00005460u));
    rc_depth++;
    t3 = (c->a[4] - 0x7c3eu);
    c->pc = t3;
    return;

L_5460:
    /* 00005460   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00005460u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_5464:
    /* 00005464   2  unlk A5 */
    c->pc = RC_ADDR(0x00005464u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_5466:
    /* 00005466   2  rts */
    c->pc = RC_ADDR(0x00005466u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
