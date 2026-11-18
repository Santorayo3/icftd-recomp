/* fn_000013ec - 124 byte(s), 36 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000013ec(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x000013ecu): goto L_13EC;
    case RC_ADDR(0x000013f0u): goto L_13F0;
    case RC_ADDR(0x000013f4u): goto L_13F4;
    case RC_ADDR(0x000013f8u): goto L_13F8;
    case RC_ADDR(0x000013fcu): goto L_13FC;
    case RC_ADDR(0x00001400u): goto L_1400;
    case RC_ADDR(0x00001404u): goto L_1404;
    case RC_ADDR(0x00001408u): goto L_1408;
    case RC_ADDR(0x0000140cu): goto L_140C;
    case RC_ADDR(0x0000140eu): goto L_140E;
    case RC_ADDR(0x00001412u): goto L_1412;
    case RC_ADDR(0x00001416u): goto L_1416;
    case RC_ADDR(0x00001418u): goto L_1418;
    case RC_ADDR(0x0000141au): goto L_141A;
    case RC_ADDR(0x0000141eu): goto L_141E;
    case RC_ADDR(0x00001422u): goto L_1422;
    case RC_ADDR(0x00001426u): goto L_1426;
    case RC_ADDR(0x0000142au): goto L_142A;
    case RC_ADDR(0x0000142eu): goto L_142E;
    case RC_ADDR(0x00001430u): goto L_1430;
    case RC_ADDR(0x00001434u): goto L_1434;
    case RC_ADDR(0x00001438u): goto L_1438;
    case RC_ADDR(0x0000143cu): goto L_143C;
    case RC_ADDR(0x0000143eu): goto L_143E;
    case RC_ADDR(0x00001442u): goto L_1442;
    case RC_ADDR(0x00001446u): goto L_1446;
    case RC_ADDR(0x00001448u): goto L_1448;
    case RC_ADDR(0x0000144cu): goto L_144C;
    case RC_ADDR(0x00001450u): goto L_1450;
    case RC_ADDR(0x00001454u): goto L_1454;
    case RC_ADDR(0x00001458u): goto L_1458;
    case RC_ADDR(0x0000145au): goto L_145A;
    case RC_ADDR(0x0000145cu): goto L_145C;
    case RC_ADDR(0x00001460u): goto L_1460;
    case RC_ADDR(0x00001464u): goto L_1464;
    case RC_ADDR(0x00001466u): goto L_1466;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13EC:
    /* 000013ec   4  link.w A5,#ffffffec */
    c->pc = RC_ADDR(0x000013ecu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x14u;

L_13F0:
    /* 000013f0   4  pea (00000001).l */
    c->pc = RC_ADDR(0x000013f0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_13F4:
    /* 000013f4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000013f4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13F8:
    /* 000013f8   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x000013f8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13FC:
    /* 000013fc   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x000013fcu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00001400u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1400:
    /* 00001400   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00001400u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1404:
    /* 00001404   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001404u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1408:
    /* 00001408   4  cmpi.b #fe,(A0) */
    c->pc = RC_ADDR(0x00001408u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x000000feu);

L_140C:
    /* 0000140c   2  bne 00001426 */
    c->pc = RC_ADDR(0x0000140cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1426;

L_140E:
    /* 0000140e   4  pea (00000003).l */
    c->pc = RC_ADDR(0x0000140eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000003u);

L_1412:
    /* 00001412   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001412u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1416:
    /* 00001416   2  addq.l #1,A0 */
    c->pc = RC_ADDR(0x00001416u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000001u;

L_1418:
    /* 00001418   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00001418u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_141A:
    /* 0000141a   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000141au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_141E:
    /* 0000141e   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x0000141eu);
    rc_step(c, m, 18);
    /* vector 137 */
    rc_push32(c, m, RC_ADDR(0x00001422u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00023514u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023518u);
    return;

L_1422:
    /* 00001422   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00001422u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_1426:
    /* 00001426   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001426u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_142A:
    /* 0000142a   4  cmpi.b #fd,(A0) */
    c->pc = RC_ADDR(0x0000142au);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x000000fdu);

L_142E:
    /* 0000142e   2  bne 00001464 */
    c->pc = RC_ADDR(0x0000142eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1464;

L_1430:
    /* 00001430   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x00001430u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_1434:
    /* 00001434   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x00001434u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1438:
    /* 00001438   4  jsr (0000134c) */
    c->pc = RC_ADDR(0x00001438u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000143cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000134cu);
    return;

L_143C:
    /* 0000143c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000143cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_143E:
    /* 0000143e   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x0000143eu);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_1442:
    /* 00001442   4  jsr (000082ce) */
    c->pc = RC_ADDR(0x00001442u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00001446u));
    rc_depth++;
    c->pc = RC_ADDR(0x000082ceu);
    return;

L_1446:
    /* 00001446   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001446u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1448:
    /* 00001448   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00001448u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_144C:
    /* 0000144c   4  move.b D0,(1,A0) */
    c->pc = RC_ADDR(0x0000144cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[0] + 0x1u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1450:
    /* 00001450   4  pea (ffffffec,A5) */
    c->pc = RC_ADDR(0x00001450u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x14u));

L_1454:
    /* 00001454   4  jsr (ffff82d8,A4) */
    c->pc = RC_ADDR(0x00001454u);
    rc_step(c, m, 18);
    /* vector 121 */
    rc_push32(c, m, RC_ADDR(0x00001458u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dceu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000228d4u);
    return;

L_1458:
    /* 00001458   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00001458u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_145A:
    /* 0000145a   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x0000145au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_145C:
    /* 0000145c   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x0000145cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_1460:
    /* 00001460   4  move.b D0,(2,A0) */
    c->pc = RC_ADDR(0x00001460u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_B);
    rc_wr8(c, m, (c->a[0] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_1464:
    /* 00001464   2  unlk A5 */
    c->pc = RC_ADDR(0x00001464u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1466:
    /* 00001466   2  rts */
    c->pc = RC_ADDR(0x00001466u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
