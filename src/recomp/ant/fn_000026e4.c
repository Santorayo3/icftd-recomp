/* fn_000026e4 - 56 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000026e4(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x000026e4u): goto L_26E4;
    case RC_ADDR(0x000026e8u): goto L_26E8;
    case RC_ADDR(0x000026ecu): goto L_26EC;
    case RC_ADDR(0x000026eeu): goto L_26EE;
    case RC_ADDR(0x000026f0u): goto L_26F0;
    case RC_ADDR(0x000026f4u): goto L_26F4;
    case RC_ADDR(0x000026f8u): goto L_26F8;
    case RC_ADDR(0x000026fcu): goto L_26FC;
    case RC_ADDR(0x00002700u): goto L_2700;
    case RC_ADDR(0x00002704u): goto L_2704;
    case RC_ADDR(0x00002708u): goto L_2708;
    case RC_ADDR(0x0000270au): goto L_270A;
    case RC_ADDR(0x0000270eu): goto L_270E;
    case RC_ADDR(0x00002710u): goto L_2710;
    case RC_ADDR(0x00002712u): goto L_2712;
    case RC_ADDR(0x00002718u): goto L_2718;
    case RC_ADDR(0x0000271au): goto L_271A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_26E4:
    /* 000026e4   4  link.w A5,#fffffffa */
    c->pc = RC_ADDR(0x000026e4u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x6u;

L_26E8:
    /* 000026e8   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x000026e8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_26EC:
    /* 000026ec   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x000026ecu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_26EE:
    /* 000026ee   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x000026eeu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_26F0:
    /* 000026f0   4  pea (0000271c) */
    c->pc = RC_ADDR(0x000026f0u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0000271cu));

L_26F4:
    /* 000026f4   4  pea (fffffffa,A5) */
    c->pc = RC_ADDR(0x000026f4u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x6u));

L_26F8:
    /* 000026f8   4  jsr (ffff82f6,A4) */
    c->pc = RC_ADDR(0x000026f8u);
    rc_step(c, m, 18);
    /* vector 126 */
    rc_push32(c, m, RC_ADDR(0x000026fcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023decu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022e58u);
    return;

L_26FC:
    /* 000026fc   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x000026fcu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_2700:
    /* 00002700   4  pea (fffffffa,A5) */
    c->pc = RC_ADDR(0x00002700u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x6u));

L_2704:
    /* 00002704   4  jsr (000082ce) */
    c->pc = RC_ADDR(0x00002704u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00002708u));
    rc_depth++;
    c->pc = RC_ADDR(0x000082ceu);
    return;

L_2708:
    /* 00002708   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00002708u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_270A:
    /* 0000270a   4  move.w D0,(ffff8d98,A4) */
    c->pc = RC_ADDR(0x0000270au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x7268u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_270E:
    /* 0000270e   2  tst.w D0 */
    c->pc = RC_ADDR(0x0000270eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_2710:
    /* 00002710   2  blt 00002718 */
    c->pc = RC_ADDR(0x00002710u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_2718;

L_2712:
    /* 00002712   6  move.w #1,(ffff8d96,A4) */
    c->pc = RC_ADDR(0x00002712u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x726au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2718:
    /* 00002718   2  unlk A5 */
    c->pc = RC_ADDR(0x00002718u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_271A:
    /* 0000271a   2  rts */
    c->pc = RC_ADDR(0x0000271au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
