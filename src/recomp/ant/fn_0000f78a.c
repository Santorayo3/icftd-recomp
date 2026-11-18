/* fn_0000f78a - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000f78a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f78au): goto L_F78A;
    case RC_ADDR(0x0000f78eu): goto L_F78E;
    case RC_ADDR(0x0000f792u): goto L_F792;
    case RC_ADDR(0x0000f796u): goto L_F796;
    case RC_ADDR(0x0000f79au): goto L_F79A;
    case RC_ADDR(0x0000f79cu): goto L_F79C;
    case RC_ADDR(0x0000f79eu): goto L_F79E;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F78A:
    /* 0000f78a   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000f78au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_F78E:
    /* 0000f78e   4  move.l (1414,A4),-(A7) */
    c->pc = RC_ADDR(0x0000f78eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1414u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F792:
    /* 0000f792   4  move.l (fffffaa0,A4),-(A7) */
    c->pc = RC_ADDR(0x0000f792u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x560u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F796:
    /* 0000f796   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0000f796u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0000f79au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_F79A:
    /* 0000f79a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000f79au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F79C:
    /* 0000f79c   2  unlk A5 */
    c->pc = RC_ADDR(0x0000f79cu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_F79E:
    /* 0000f79e   2  rts */
    c->pc = RC_ADDR(0x0000f79eu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
