/* fn_000217b6 - 22 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000217b6(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x000217b6u): goto L_217B6;
    case RC_ADDR(0x000217bau): goto L_217BA;
    case RC_ADDR(0x000217bcu): goto L_217BC;
    case RC_ADDR(0x000217beu): goto L_217BE;
    case RC_ADDR(0x000217c0u): goto L_217C0;
    case RC_ADDR(0x000217c4u): goto L_217C4;
    case RC_ADDR(0x000217c8u): goto L_217C8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_217B6:
    /* 000217b6   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x000217b6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_217BA:
    /* 000217ba   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000217bau);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_217BC:
    /* 000217bc   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x000217bcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_217BE:
    /* 000217be   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x000217beu);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_217C0:
    /* 000217c0   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x000217c0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_217C4:
    /* 000217c4   4  move.w D0,(2a,A0) */
    c->pc = RC_ADDR(0x000217c4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_217C8:
    /* 000217c8   4  bra 00021950 */
    c->pc = RC_ADDR(0x000217c8u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
