/* fn_0002189e - 30 byte(s), 8 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002189e(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0002189eu): goto L_2189E;
    case RC_ADDR(0x000218a2u): goto L_218A2;
    case RC_ADDR(0x000218a4u): goto L_218A4;
    case RC_ADDR(0x000218a6u): goto L_218A6;
    case RC_ADDR(0x000218a8u): goto L_218A8;
    case RC_ADDR(0x000218acu): goto L_218AC;
    case RC_ADDR(0x000218b2u): goto L_218B2;
    case RC_ADDR(0x000218b8u): goto L_218B8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2189E:
    /* 0002189e   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0002189eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_218A2:
    /* 000218a2   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000218a2u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_218A4:
    /* 000218a4   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x000218a4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_218A6:
    /* 000218a6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000218a6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_218A8:
    /* 000218a8   4  lea (8dc,A4),A0 */
    c->pc = RC_ADDR(0x000218a8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8dcu);

L_218AC:
    /* 000218ac   6  move.w (16,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x000218acu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x16u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_218B2:
    /* 000218b2   6  move.w #1,(30ea,A4) */
    c->pc = RC_ADDR(0x000218b2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x30eau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_218B8:
    /* 000218b8   4  bra 00021950 */
    c->pc = RC_ADDR(0x000218b8u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
