/* fn_000236f2 - 60 byte(s), 18 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000236f2(cpu_t *c, rt_machine *m)
{
    u32 t0, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x000236f2u): goto L_236F2;
    case RC_ADDR(0x000236f6u): goto L_236F6;
    case RC_ADDR(0x000236f8u): goto L_236F8;
    case RC_ADDR(0x000236fcu): goto L_236FC;
    case RC_ADDR(0x000236feu): goto L_236FE;
    case RC_ADDR(0x00023700u): goto L_23700;
    case RC_ADDR(0x00023702u): goto L_23702;
    case RC_ADDR(0x00023704u): goto L_23704;
    case RC_ADDR(0x00023706u): goto L_23706;
    case RC_ADDR(0x0002370cu): goto L_2370C;
    case RC_ADDR(0x00023714u): goto L_23714;
    case RC_ADDR(0x0002371cu): goto L_2371C;
    case RC_ADDR(0x0002371eu): goto L_2371E;
    case RC_ADDR(0x00023722u): goto L_23722;
    case RC_ADDR(0x00023724u): goto L_23724;
    case RC_ADDR(0x00023726u): goto L_23726;
    case RC_ADDR(0x0002372au): goto L_2372A;
    case RC_ADDR(0x0002372cu): goto L_2372C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_236F2:
    /* 000236f2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000236f2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_236F6:
    /* 000236f6   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x000236f6u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_236F8:
    /* 000236f8   4  movea.l (8,A5),A2 */
    c->pc = RC_ADDR(0x000236f8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[2] = t0;

L_236FC:
    /* 000236fc   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x000236fcu);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_236FE:
    /* 000236fe   2  bne 00023706 */
    c->pc = RC_ADDR(0x000236feu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_23706;

L_23700:
    /* 00023700   2  movea.l (A7)+,A2 */
    c->pc = RC_ADDR(0x00023700u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[2] = t0;

L_23702:
    /* 00023702   2  unlk A5 */
    c->pc = RC_ADDR(0x00023702u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_23704:
    /* 00023704   2  rts */
    c->pc = RC_ADDR(0x00023704u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_23706:
    /* 00023706   6  move.b #ff,(8,A2) */
    c->pc = RC_ADDR(0x00023706u);
    rc_step(c, m, 16);
    t0 = 0x000000ffu;
    rc_wr8(c, m, (c->a[2] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_2370C:
    /* 0002370c   8  move.l #ffffffff,(14,A2) */
    c->pc = RC_ADDR(0x0002370cu);
    rc_step(c, m, 24);
    t0 = 0xffffffffu;
    rc_wr32(c, m, (c->a[2] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_23714:
    /* 00023714   8  move.l #ffffffff,(18,A2) */
    c->pc = RC_ADDR(0x00023714u);
    rc_step(c, m, 24);
    t0 = 0xffffffffu;
    rc_wr32(c, m, (c->a[2] + 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2371C:
    /* 0002371c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002371cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_2371E:
    /* 0002371e   4  move.w (12,A2),D0 */
    c->pc = RC_ADDR(0x0002371eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[2] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_23722:
    /* 00023722   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00023722u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23724:
    /* 00023724   2  move.l A2,-(A7) */
    c->pc = RC_ADDR(0x00023724u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 2, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23726:
    /* 00023726   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x00023726u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0002372au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_2372A:
    /* 0002372a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0002372au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_2372C:
    /* 0002372c   2  bra 00023700 */
    c->pc = RC_ADDR(0x0002372cu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_23700;

}
