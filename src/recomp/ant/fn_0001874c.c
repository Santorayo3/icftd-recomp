/* fn_0001874c - 24 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001874c(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001874cu): goto L_1874C;
    case RC_ADDR(0x00018750u): goto L_18750;
    case RC_ADDR(0x00018754u): goto L_18754;
    case RC_ADDR(0x00018758u): goto L_18758;
    case RC_ADDR(0x0001875au): goto L_1875A;
    case RC_ADDR(0x00018760u): goto L_18760;
    case RC_ADDR(0x00018762u): goto L_18762;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1874C:
    /* 0001874c   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001874cu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_18750:
    /* 00018750   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x00018750u);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_18754:
    /* 00018754   4  jsr (ffff80c8,A4) */
    c->pc = RC_ADDR(0x00018754u);
    rc_step(c, m, 18);
    /* vector 33 */
    rc_push32(c, m, RC_ADDR(0x00018758u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bbeu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000af72u);
    return;

L_18758:
    /* 00018758   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00018758u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_1875A:
    /* 0001875a   6  move.w #1,(1ac0,A4) */
    c->pc = RC_ADDR(0x0001875au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1ac0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_18760:
    /* 00018760   2  unlk A5 */
    c->pc = RC_ADDR(0x00018760u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18762:
    /* 00018762   2  rts */
    c->pc = RC_ADDR(0x00018762u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
