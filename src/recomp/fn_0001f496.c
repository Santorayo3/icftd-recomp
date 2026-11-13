/* fn_0001f496 - 28 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f496(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f496u): goto L_1F496;
    case RC_ADDR(0x0001f49au): goto L_1F49A;
    case RC_ADDR(0x0001f49cu): goto L_1F49C;
    case RC_ADDR(0x0001f49eu): goto L_1F49E;
    case RC_ADDR(0x0001f4a2u): goto L_1F4A2;
    case RC_ADDR(0x0001f4a6u): goto L_1F4A6;
    case RC_ADDR(0x0001f4a8u): goto L_1F4A8;
    case RC_ADDR(0x0001f4aeu): goto L_1F4AE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F496:
    /* 0001f496   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f496u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F49A:
    /* 0001f49a   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f49au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F49C:
    /* 0001f49c   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f49cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F49E:
    /* 0001f49e   4  move.w D0,(26bc,A4) */
    c->pc = RC_ADDR(0x0001f49eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x26bcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F4A2:
    /* 0001f4a2   4  tst.w (26bc,A4) */
    c->pc = RC_ADDR(0x0001f4a2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26bcu));
    rc_set_nzvc(c, t0, RC_W);

L_1F4A6:
    /* 0001f4a6   2  bne 0001f4ae */
    c->pc = RC_ADDR(0x0001f4a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F4AE;

L_1F4A8:
    /* 0001f4a8   6  move.w #1,(26bc,A4) */
    c->pc = RC_ADDR(0x0001f4a8u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26bcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F4AE:
    /* 0001f4ae   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f4aeu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
