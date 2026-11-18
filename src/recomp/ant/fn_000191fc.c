/* fn_000191fc - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000191fc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000191fcu): goto L_191FC;
    case RC_ADDR(0x00019200u): goto L_19200;
    case RC_ADDR(0x00019204u): goto L_19204;
    case RC_ADDR(0x00019208u): goto L_19208;
    case RC_ADDR(0x0001920au): goto L_1920A;
    case RC_ADDR(0x0001920eu): goto L_1920E;
    case RC_ADDR(0x00019210u): goto L_19210;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_191FC:
    /* 000191fc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000191fcu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_19200:
    /* 00019200   4  pea (00019212) */
    c->pc = RC_ADDR(0x00019200u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00019212u));

L_19204:
    /* 00019204   4  jsr (00018400) */
    c->pc = RC_ADDR(0x00019204u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00019208u));
    rc_depth++;
    c->pc = RC_ADDR(0x00018400u);
    return;

L_19208:
    /* 00019208   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00019208u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_1920A:
    /* 0001920a   4  move.l D0,(1db2,A4) */
    c->pc = RC_ADDR(0x0001920au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1db2u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1920E:
    /* 0001920e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001920eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_19210:
    /* 00019210   2  rts */
    c->pc = RC_ADDR(0x00019210u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
