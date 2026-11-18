/* fn_0000c760 - 36 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c760(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c760u): goto L_C760;
    case RC_ADDR(0x0000c764u): goto L_C764;
    case RC_ADDR(0x0000c768u): goto L_C768;
    case RC_ADDR(0x0000c76cu): goto L_C76C;
    case RC_ADDR(0x0000c770u): goto L_C770;
    case RC_ADDR(0x0000c774u): goto L_C774;
    case RC_ADDR(0x0000c778u): goto L_C778;
    case RC_ADDR(0x0000c77cu): goto L_C77C;
    case RC_ADDR(0x0000c780u): goto L_C780;
    case RC_ADDR(0x0000c782u): goto L_C782;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C760:
    /* 0000c760   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c760u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C764:
    /* 0000c764   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000c764u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C768:
    /* 0000c768   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c768u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C76C:
    /* 0000c76c   4  move.l (e04,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c76cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe04u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C770:
    /* 0000c770   4  move.w (df8,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c770u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdf8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C774:
    /* 0000c774   4  move.l (de6,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c774u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xde6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C778:
    /* 0000c778   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0000c778u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0000c77cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_C77C:
    /* 0000c77c   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c77cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_C780:
    /* 0000c780   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c780u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C782:
    /* 0000c782   2  rts */
    c->pc = RC_ADDR(0x0000c782u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
