/* fn_0001d206 - 28 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001d206(cpu_t *c, rt_machine *m)
{

    switch (c->pc)
    {
    case RC_ADDR(0x0001d206u): goto L_1D206;
    case RC_ADDR(0x0001d20au): goto L_1D20A;
    case RC_ADDR(0x0001d20eu): goto L_1D20E;
    case RC_ADDR(0x0001d212u): goto L_1D212;
    case RC_ADDR(0x0001d214u): goto L_1D214;
    case RC_ADDR(0x0001d218u): goto L_1D218;
    case RC_ADDR(0x0001d21cu): goto L_1D21C;
    case RC_ADDR(0x0001d21eu): goto L_1D21E;
    case RC_ADDR(0x0001d220u): goto L_1D220;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1D206:
    /* 0001d206   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001d206u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1D20A:
    /* 0001d20a   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x0001d20au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffffu);

L_1D20E:
    /* 0001d20e   4  jsr (ffff80f2,A4) */
    c->pc = RC_ADDR(0x0001d20eu);
    rc_step(c, m, 18);
    /* vector 40 */
    rc_push32(c, m, RC_ADDR(0x0001d212u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023be8u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b090u);
    return;

L_1D212:
    /* 0001d212   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d212u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D214:
    /* 0001d214   4  pea (00000003).l */
    c->pc = RC_ADDR(0x0001d214u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000003u);

L_1D218:
    /* 0001d218   4  jsr (ffff8140,A4) */
    c->pc = RC_ADDR(0x0001d218u);
    rc_step(c, m, 18);
    /* vector 53 */
    rc_push32(c, m, RC_ADDR(0x0001d21cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c36u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00010812u);
    return;

L_1D21C:
    /* 0001d21c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001d21cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1D21E:
    /* 0001d21e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001d21eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D220:
    /* 0001d220   2  rts */
    c->pc = RC_ADDR(0x0001d220u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
