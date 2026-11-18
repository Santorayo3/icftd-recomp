/* fn_00021538 - 28 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021538(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021538u): goto L_21538;
    case RC_ADDR(0x0002153cu): goto L_2153C;
    case RC_ADDR(0x0002153eu): goto L_2153E;
    case RC_ADDR(0x00021540u): goto L_21540;
    case RC_ADDR(0x00021544u): goto L_21544;
    case RC_ADDR(0x00021548u): goto L_21548;
    case RC_ADDR(0x0002154au): goto L_2154A;
    case RC_ADDR(0x00021550u): goto L_21550;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21538:
    /* 00021538   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x00021538u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2153C:
    /* 0002153c   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0002153cu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2153E:
    /* 0002153e   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0002153eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21540:
    /* 00021540   4  move.w D0,(30ec,A4) */
    c->pc = RC_ADDR(0x00021540u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x30ecu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21544:
    /* 00021544   4  tst.w (30ec,A4) */
    c->pc = RC_ADDR(0x00021544u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x30ecu));
    rc_set_nzvc(c, t0, RC_W);

L_21548:
    /* 00021548   2  bne 00021550 */
    c->pc = RC_ADDR(0x00021548u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21550;

L_2154A:
    /* 0002154a   6  move.w #1,(30ec,A4) */
    c->pc = RC_ADDR(0x0002154au);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x30ecu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21550:
    /* 00021550   4  bra 00021950 */
    c->pc = RC_ADDR(0x00021550u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
