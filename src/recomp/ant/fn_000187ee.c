/* fn_000187ee - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000187ee(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x000187eeu): goto L_187EE;
    case RC_ADDR(0x000187f2u): goto L_187F2;
    case RC_ADDR(0x000187f4u): goto L_187F4;
    case RC_ADDR(0x000187fau): goto L_187FA;
    case RC_ADDR(0x000187feu): goto L_187FE;
    case RC_ADDR(0x00018800u): goto L_18800;
    case RC_ADDR(0x00018802u): goto L_18802;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_187EE:
    /* 000187ee   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000187eeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_187F2:
    /* 000187f2   2  bsr 0001879c */
    c->pc = RC_ADDR(0x000187f2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000187f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001879cu);
    return;

L_187F4:
    /* 000187f4   6  andi.l #ffff,D0 */
    c->pc = RC_ADDR(0x000187f4u);
    rc_step(c, m, 14);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 0, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_187FA:
    /* 000187fa   4  divu.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000187fau);
    rc_step(c, m, 148);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_divu(c, m, 0, t0);

L_187FE:
    /* 000187fe   2  swap D0 */
    c->pc = RC_ADDR(0x000187feu);
    rc_step(c, m, 4);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_18800:
    /* 00018800   2  unlk A5 */
    c->pc = RC_ADDR(0x00018800u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_18802:
    /* 00018802   2  rts */
    c->pc = RC_ADDR(0x00018802u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
