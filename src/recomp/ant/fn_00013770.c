/* fn_00013770 - 36 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013770(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00013770u): goto L_13770;
    case RC_ADDR(0x00013774u): goto L_13774;
    case RC_ADDR(0x00013778u): goto L_13778;
    case RC_ADDR(0x0001377cu): goto L_1377C;
    case RC_ADDR(0x00013780u): goto L_13780;
    case RC_ADDR(0x00013782u): goto L_13782;
    case RC_ADDR(0x00013786u): goto L_13786;
    case RC_ADDR(0x0001378au): goto L_1378A;
    case RC_ADDR(0x0001378eu): goto L_1378E;
    case RC_ADDR(0x00013790u): goto L_13790;
    case RC_ADDR(0x00013792u): goto L_13792;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13770:
    /* 00013770   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00013770u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_13774:
    /* 00013774   4  move.l (17fa,A4),-(A7) */
    c->pc = RC_ADDR(0x00013774u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_13778:
    /* 00013778   4  pea (00000005).l */
    c->pc = RC_ADDR(0x00013778u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000005u);

L_1377C:
    /* 0001377c   4  jsr (ffff837a,A4) */
    c->pc = RC_ADDR(0x0001377cu);
    rc_step(c, m, 18);
    /* vector 148 */
    rc_push32(c, m, RC_ADDR(0x00013780u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e70u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000237e6u);
    return;

L_13780:
    /* 00013780   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00013780u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13782:
    /* 00013782   4  pea (00000016).l */
    c->pc = RC_ADDR(0x00013782u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000016u);

L_13786:
    /* 00013786   4  move.l (17fa,A4),-(A7) */
    c->pc = RC_ADDR(0x00013786u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1378A:
    /* 0001378a   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001378au);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001378eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1378E:
    /* 0001378e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001378eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_13790:
    /* 00013790   2  unlk A5 */
    c->pc = RC_ADDR(0x00013790u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13792:
    /* 00013792   2  rts */
    c->pc = RC_ADDR(0x00013792u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
