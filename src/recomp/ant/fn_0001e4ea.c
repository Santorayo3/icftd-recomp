/* fn_0001e4ea - 30 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001e4ea(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001e4eau): goto L_1E4EA;
    case RC_ADDR(0x0001e4eeu): goto L_1E4EE;
    case RC_ADDR(0x0001e4f2u): goto L_1E4F2;
    case RC_ADDR(0x0001e4f6u): goto L_1E4F6;
    case RC_ADDR(0x0001e4fau): goto L_1E4FA;
    case RC_ADDR(0x0001e4feu): goto L_1E4FE;
    case RC_ADDR(0x0001e502u): goto L_1E502;
    case RC_ADDR(0x0001e504u): goto L_1E504;
    case RC_ADDR(0x0001e506u): goto L_1E506;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1E4EA:
    /* 0001e4ea   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x0001e4eau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1E4EE:
    /* 0001e4ee   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x0001e4eeu);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x0001e4f2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_1E4F2:
    /* 0001e4f2   4  jsr (ffff820c,A4) */
    c->pc = RC_ADDR(0x0001e4f2u);
    rc_step(c, m, 18);
    /* vector 87 */
    rc_push32(c, m, RC_ADDR(0x0001e4f6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d02u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001f260u);
    return;

L_1E4F6:
    /* 0001e4f6   4  pea (00001420).l */
    c->pc = RC_ADDR(0x0001e4f6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00001420u);

L_1E4FA:
    /* 0001e4fa   4  move.l (3058,A4),-(A7) */
    c->pc = RC_ADDR(0x0001e4fau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x3058u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1E4FE:
    /* 0001e4fe   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001e4feu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001e502u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1E502:
    /* 0001e502   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001e502u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1E504:
    /* 0001e504   2  unlk A5 */
    c->pc = RC_ADDR(0x0001e504u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1E506:
    /* 0001e506   2  rts */
    c->pc = RC_ADDR(0x0001e506u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
