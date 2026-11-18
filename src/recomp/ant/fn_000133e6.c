/* fn_000133e6 - 80 byte(s), 21 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000133e6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000133e6u): goto L_133E6;
    case RC_ADDR(0x000133eau): goto L_133EA;
    case RC_ADDR(0x000133f0u): goto L_133F0;
    case RC_ADDR(0x000133f8u): goto L_133F8;
    case RC_ADDR(0x000133feu): goto L_133FE;
    case RC_ADDR(0x00013402u): goto L_13402;
    case RC_ADDR(0x00013404u): goto L_13404;
    case RC_ADDR(0x00013408u): goto L_13408;
    case RC_ADDR(0x0001340au): goto L_1340A;
    case RC_ADDR(0x0001340cu): goto L_1340C;
    case RC_ADDR(0x0001340eu): goto L_1340E;
    case RC_ADDR(0x00013410u): goto L_13410;
    case RC_ADDR(0x00013414u): goto L_13414;
    case RC_ADDR(0x00013416u): goto L_13416;
    case RC_ADDR(0x00013418u): goto L_13418;
    case RC_ADDR(0x0001341eu): goto L_1341E;
    case RC_ADDR(0x00013424u): goto L_13424;
    case RC_ADDR(0x0001342cu): goto L_1342C;
    case RC_ADDR(0x0001342eu): goto L_1342E;
    case RC_ADDR(0x00013432u): goto L_13432;
    case RC_ADDR(0x00013434u): goto L_13434;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_133E6:
    /* 000133e6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000133e6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_133EA:
    /* 000133ea   6  clr.w (00dff066).l */
    c->pc = RC_ADDR(0x000133eau);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff066u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_133F0:
    /* 000133f0   8  move.w #100,(00dff040).l */
    c->pc = RC_ADDR(0x000133f0u);
    rc_step(c, m, 20);
    t0 = 0x00000100u;
    rc_wr16(c, m, 0x00dff040u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_133F8:
    /* 000133f8   6  clr.w (00dff042).l */
    c->pc = RC_ADDR(0x000133f8u);
    rc_step(c, m, 20);
    rc_wr16(c, m, 0x00dff042u, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_133FE:
    /* 000133fe   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000133feu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_13402:
    /* 00013402   2  move.w (A0),D1 */
    c->pc = RC_ADDR(0x00013402u);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13404:
    /* 00013404   4  move.w (2,A0),D2 */
    c->pc = RC_ADDR(0x00013404u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13408:
    /* 00013408   2  lsl.w #6,D2 */
    c->pc = RC_ADDR(0x00013408u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 1, 0x00000006u, rc_d_get(c, 2, RC_W), RC_W));

L_1340A:
    /* 0001340a   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x0001340au);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_1340C:
    /* 0001340c   2  or.w D1,D2 */
    c->pc = RC_ADDR(0x0001340cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_W);
    t2 = t0 | rc_d_get(c, 2, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 2, RC_W, t2);

L_1340E:
    /* 0001340e   2  clr.w D0 */
    c->pc = RC_ADDR(0x0001340eu);
    rc_step(c, m, 4);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13410:
    /* 00013410   4  move.b (5,A0),D0 */
    c->pc = RC_ADDR(0x00013410u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x5u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13414:
    /* 00013414   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00013414u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13416:
    /* 00013416   2  addq.l #8,A0 */
    c->pc = RC_ADDR(0x00013416u);
    rc_step(c, m, 8);
    c->a[0] += 0x00000008u;

L_13418:
    /* 00013418   6  move.l (A0)+,(00dff054).l */
    c->pc = RC_ADDR(0x00013418u);
    rc_step(c, m, 28);
    t3 = c->a[0];
    c->a[0] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_wr32(c, m, 0x00dff054u, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1341E:
    /* 0001341e   6  move.w D2,(00dff058).l */
    c->pc = RC_ADDR(0x0001341eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 2, RC_W);
    rc_wr16(c, m, 0x00dff058u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13424:
    /* 00013424   8  btst #6,(00dff002).l */
    c->pc = RC_ADDR(0x00013424u);
    rc_step(c, m, 20);
    t3 = 0x00dff002u;
    t4 = 0x00000006u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_1342C:
    /* 0001342c   2  bne 00013424 */
    c->pc = RC_ADDR(0x0001342cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_13424; }

L_1342E:
    /* 0001342e   4  dbf D0,00013418 */
    c->pc = RC_ADDR(0x0001342eu);
    rc_step(c, m, 12);
    if (!rc_cond(c, 1)) {
        t2 = (rc_d_get(c, 0, RC_W) + 0xFFFFu) & 0xFFFFu;
        rc_d_set(c, 0, RC_W, t2);
        if (t2 != 0xFFFFu) { rc_tick(); goto L_13418; }
    }

L_13432:
    /* 00013432   2  unlk A5 */
    c->pc = RC_ADDR(0x00013432u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13434:
    /* 00013434   2  rts */
    c->pc = RC_ADDR(0x00013434u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
