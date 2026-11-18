/* fn_00021554 - 24 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021554(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021554u): goto L_21554;
    case RC_ADDR(0x00021558u): goto L_21558;
    case RC_ADDR(0x0002155au): goto L_2155A;
    case RC_ADDR(0x0002155cu): goto L_2155C;
    case RC_ADDR(0x00021560u): goto L_21560;
    case RC_ADDR(0x00021564u): goto L_21564;
    case RC_ADDR(0x00021568u): goto L_21568;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21554:
    /* 00021554   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x00021554u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21558:
    /* 00021558   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021558u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2155A:
    /* 0002155a   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0002155au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_2155C:
    /* 0002155c   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x0002155cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_21560:
    /* 00021560   4  move.w D0,(28,A0) */
    c->pc = RC_ADDR(0x00021560u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x28u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21564:
    /* 00021564   4  clr.w (3506,A4) */
    c->pc = RC_ADDR(0x00021564u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x3506u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21568:
    /* 00021568   4  bra 00021950 */
    c->pc = RC_ADDR(0x00021568u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
