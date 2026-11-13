/* fn_0001f7fc - 30 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f7fc(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f7fcu): goto L_1F7FC;
    case RC_ADDR(0x0001f800u): goto L_1F800;
    case RC_ADDR(0x0001f802u): goto L_1F802;
    case RC_ADDR(0x0001f804u): goto L_1F804;
    case RC_ADDR(0x0001f806u): goto L_1F806;
    case RC_ADDR(0x0001f80au): goto L_1F80A;
    case RC_ADDR(0x0001f810u): goto L_1F810;
    case RC_ADDR(0x0001f816u): goto L_1F816;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F7FC:
    /* 0001f7fc   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f7fcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F800:
    /* 0001f800   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f800u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F802:
    /* 0001f802   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f802u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F804:
    /* 0001f804   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001f804u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1F806:
    /* 0001f806   4  lea (282,A4),A0 */
    c->pc = RC_ADDR(0x0001f806u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x282u);

L_1F80A:
    /* 0001f80a   6  move.w (16,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001f80au);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0x16u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F810:
    /* 0001f810   6  move.w #1,(26ba,A4) */
    c->pc = RC_ADDR(0x0001f810u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F816:
    /* 0001f816   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f816u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
