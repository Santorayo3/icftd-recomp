/* fn_00018400 - 66 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00018400(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00018400u): goto L_18400;
    case RC_ADDR(0x00018404u): goto L_18404;
    case RC_ADDR(0x00018408u): goto L_18408;
    case RC_ADDR(0x0001840cu): goto L_1840C;
    case RC_ADDR(0x00018410u): goto L_18410;
    case RC_ADDR(0x00018412u): goto L_18412;
    case RC_ADDR(0x00018416u): goto L_18416;
    case RC_ADDR(0x00018418u): goto L_18418;
    case RC_ADDR(0x0001841cu): goto L_1841C;
    case RC_ADDR(0x00018420u): goto L_18420;
    case RC_ADDR(0x00018422u): goto L_18422;
    case RC_ADDR(0x00018426u): goto L_18426;
    case RC_ADDR(0x0001842au): goto L_1842A;
    case RC_ADDR(0x0001842cu): goto L_1842C;
    case RC_ADDR(0x0001842eu): goto L_1842E;
    case RC_ADDR(0x00018432u): goto L_18432;
    case RC_ADDR(0x00018436u): goto L_18436;
    case RC_ADDR(0x0001843au): goto L_1843A;
    case RC_ADDR(0x0001843cu): goto L_1843C;
    case RC_ADDR(0x0001843eu): goto L_1843E;
    case RC_ADDR(0x00018440u): goto L_18440;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_18400:
    /* 00018400   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x00018400u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_18404:
    /* 00018404   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00018404u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_18408:
    /* 00018408   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00018408u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1840C:
    /* 0001840c   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x0001840cu);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x00018410u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_18410:
    /* 00018410   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00018410u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_18412:
    /* 00018412   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00018412u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18416:
    /* 00018416   2  beq 0001843e */
    c->pc = RC_ADDR(0x00018416u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1843E;

L_18418:
    /* 00018418   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00018418u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1841C:
    /* 0001841c   4  jsr (ffff82c0,A4) */
    c->pc = RC_ADDR(0x0001841cu);
    rc_step(c, m, 18);
    /* vector 117 */
    rc_push32(c, m, RC_ADDR(0x00018420u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022688u);
    return;

L_18420:
    /* 00018420   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00018420u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_18422:
    /* 00018422   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00018422u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_18426:
    /* 00018426   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x00018426u);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x0001842au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_1842A:
    /* 0001842a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001842au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1842C:
    /* 0001842c   2  bsr 000183d2 */
    c->pc = RC_ADDR(0x0001842cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001842eu));
    rc_depth++;
    c->pc = RC_ADDR(0x000183d2u);
    return;

L_1842E:
    /* 0001842e   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x0001842eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_18432:
    /* 00018432   4  jsr (ffff82c6,A4) */
    c->pc = RC_ADDR(0x00018432u);
    rc_step(c, m, 18);
    /* vector 118 */
    rc_push32(c, m, RC_ADDR(0x00018436u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022892u);
    return;

L_18436:
    /* 00018436   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00018436u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1843A:
    /* 0001843a   2  unlk A5 */
    c->pc = RC_ADDR(0x0001843au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1843C:
    /* 0001843c   2  rts */
    c->pc = RC_ADDR(0x0001843cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1843E:
    /* 0001843e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001843eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_18440:
    /* 00018440   2  bra 0001843a */
    c->pc = RC_ADDR(0x00018440u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1843A;

}
