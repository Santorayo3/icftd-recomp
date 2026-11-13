/* fn_0001f4b2 - 24 byte(s), 7 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f4b2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f4b2u): goto L_1F4B2;
    case RC_ADDR(0x0001f4b6u): goto L_1F4B6;
    case RC_ADDR(0x0001f4b8u): goto L_1F4B8;
    case RC_ADDR(0x0001f4bau): goto L_1F4BA;
    case RC_ADDR(0x0001f4beu): goto L_1F4BE;
    case RC_ADDR(0x0001f4c2u): goto L_1F4C2;
    case RC_ADDR(0x0001f4c6u): goto L_1F4C6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F4B2:
    /* 0001f4b2   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f4b2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F4B6:
    /* 0001f4b6   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f4b6u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F4B8:
    /* 0001f4b8   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f4b8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F4BA:
    /* 0001f4ba   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f4bau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F4BE:
    /* 0001f4be   4  move.w D0,(28,A0) */
    c->pc = RC_ADDR(0x0001f4beu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x28u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F4C2:
    /* 0001f4c2   4  clr.w (2ad6,A4) */
    c->pc = RC_ADDR(0x0001f4c2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2ad6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F4C6:
    /* 0001f4c6   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f4c6u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
