/* fn_0001df98 - 62 byte(s), 16 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001df98(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001df98u): goto L_1DF98;
    case RC_ADDR(0x0001df9cu): goto L_1DF9C;
    case RC_ADDR(0x0001dfa0u): goto L_1DFA0;
    case RC_ADDR(0x0001dfa6u): goto L_1DFA6;
    case RC_ADDR(0x0001dfaau): goto L_1DFAA;
    case RC_ADDR(0x0001dfb0u): goto L_1DFB0;
    case RC_ADDR(0x0001dfb4u): goto L_1DFB4;
    case RC_ADDR(0x0001dfbau): goto L_1DFBA;
    case RC_ADDR(0x0001dfbeu): goto L_1DFBE;
    case RC_ADDR(0x0001dfc2u): goto L_1DFC2;
    case RC_ADDR(0x0001dfc4u): goto L_1DFC4;
    case RC_ADDR(0x0001dfc8u): goto L_1DFC8;
    case RC_ADDR(0x0001dfccu): goto L_1DFCC;
    case RC_ADDR(0x0001dfd0u): goto L_1DFD0;
    case RC_ADDR(0x0001dfd2u): goto L_1DFD2;
    case RC_ADDR(0x0001dfd4u): goto L_1DFD4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1DF98:
    /* 0001df98   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0001df98u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_1DF9C:
    /* 0001df9c   4  movea.l (ffffd294,A4),A0 */
    c->pc = RC_ADDR(0x0001df9cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d6cu));
    c->a[0] = t0;

L_1DFA0:
    /* 0001dfa0   6  move.l (4,A0),(fffffffc,A5) */
    c->pc = RC_ADDR(0x0001dfa0u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DFA6:
    /* 0001dfa6   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001dfa6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1DFAA:
    /* 0001dfaa   6  move.l (182c,A4),(4,A0) */
    c->pc = RC_ADDR(0x0001dfaau);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x182cu));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DFB0:
    /* 0001dfb0   4  movea.l (fffffffc,A5),A0 */
    c->pc = RC_ADDR(0x0001dfb0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_1DFB4:
    /* 0001dfb4   6  move.w (1830,A4),(8,A0) */
    c->pc = RC_ADDR(0x0001dfb4u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1830u));
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1DFBA:
    /* 0001dfba   4  move.l (ffffd294,A4),-(A7) */
    c->pc = RC_ADDR(0x0001dfbau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2d6cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DFBE:
    /* 0001dfbe   4  jsr (ffff8398,A4) */
    c->pc = RC_ADDR(0x0001dfbeu);
    rc_step(c, m, 18);
    /* vector 153 */
    rc_push32(c, m, RC_ADDR(0x0001dfc2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e8eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002393au);
    return;

L_1DFC2:
    /* 0001dfc2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0001dfc2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1DFC4:
    /* 0001dfc4   4  pea (000007d0).l */
    c->pc = RC_ADDR(0x0001dfc4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000007d0u);

L_1DFC8:
    /* 0001dfc8   4  move.l (140c,A4),-(A7) */
    c->pc = RC_ADDR(0x0001dfc8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x140cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1DFCC:
    /* 0001dfcc   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x0001dfccu);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x0001dfd0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_1DFD0:
    /* 0001dfd0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0001dfd0u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1DFD2:
    /* 0001dfd2   2  unlk A5 */
    c->pc = RC_ADDR(0x0001dfd2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1DFD4:
    /* 0001dfd4   2  rts */
    c->pc = RC_ADDR(0x0001dfd4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
