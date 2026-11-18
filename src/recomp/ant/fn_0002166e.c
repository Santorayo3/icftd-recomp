/* fn_0002166e - 16 byte(s), 5 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002166e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002166eu): goto L_2166E;
    case RC_ADDR(0x00021672u): goto L_21672;
    case RC_ADDR(0x00021674u): goto L_21674;
    case RC_ADDR(0x00021676u): goto L_21676;
    case RC_ADDR(0x0002167au): goto L_2167A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2166E:
    /* 0002166e   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0002166eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21672:
    /* 00021672   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021672u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21674:
    /* 00021674   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x00021674u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21676:
    /* 00021676   4  move.w D0,(30e4,A4) */
    c->pc = RC_ADDR(0x00021676u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x30e4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2167A:
    /* 0002167a   4  bra 00021950 */
    c->pc = RC_ADDR(0x0002167au);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
