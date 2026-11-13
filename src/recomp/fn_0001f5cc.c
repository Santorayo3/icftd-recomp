/* fn_0001f5cc - 16 byte(s), 5 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f5cc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f5ccu): goto L_1F5CC;
    case RC_ADDR(0x0001f5d0u): goto L_1F5D0;
    case RC_ADDR(0x0001f5d2u): goto L_1F5D2;
    case RC_ADDR(0x0001f5d4u): goto L_1F5D4;
    case RC_ADDR(0x0001f5d8u): goto L_1F5D8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F5CC:
    /* 0001f5cc   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f5ccu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F5D0:
    /* 0001f5d0   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f5d0u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F5D2:
    /* 0001f5d2   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f5d2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F5D4:
    /* 0001f5d4   4  move.w D0,(26b4,A4) */
    c->pc = RC_ADDR(0x0001f5d4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x26b4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F5D8:
    /* 0001f5d8   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f5d8u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
