/* fn_0000f4a4 - 28 byte(s), 8 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0000f4a4(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f4a4u): goto L_F4A4;
    case RC_ADDR(0x0000f4a6u): goto L_F4A6;
    case RC_ADDR(0x0000f4a8u): goto L_F4A8;
    case RC_ADDR(0x0000f4aeu): goto L_F4AE;
    case RC_ADDR(0x0000f4b0u): goto L_F4B0;
    case RC_ADDR(0x0000f4b2u): goto L_F4B2;
    case RC_ADDR(0x0000f4b8u): goto L_F4B8;
    case RC_ADDR(0x0000f4beu): goto L_F4BE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F4A4:
    /* 0000f4a4   2  clr.w D0 */
    c->pc = RC_ADDR(0x0000f4a4u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_F4A6:
    /* 0000f4a6   2  bset D7,D0 */
    c->pc = RC_ADDR(0x0000f4a6u);
    rc_step(c, m);
    t4 = c->d[7] & 31u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 | (1u << t4);
    rc_d_set(c, 0, RC_L, t2);

L_F4A8:
    /* 0000f4a8   6  move.w D0,(00dff096).l */
    c->pc = RC_ADDR(0x0000f4a8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, 0x00dff096u, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F4AE:
    /* 0000f4ae   2  move.w D7,D0 */
    c->pc = RC_ADDR(0x0000f4aeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 7, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F4B0:
    /* 0000f4b0   2  asl.w #4,D0 */
    c->pc = RC_ADDR(0x0000f4b0u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_F4B2:
    /* 0000f4b2   6  lea (00dff0a0).l,A0 */
    c->pc = RC_ADDR(0x0000f4b2u);
    rc_step(c, m);
    c->a[0] = 0x00dff0a0u;

L_F4B8:
    /* 0000f4b8   6  move.w #2,(6,A0,D0.w) */
    c->pc = RC_ADDR(0x0000f4b8u);
    rc_step(c, m);
    t0 = 0x00000002u;
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x6u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F4BE:
    /* 0000f4be   2  rts */
    c->pc = RC_ADDR(0x0000f4beu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

}
