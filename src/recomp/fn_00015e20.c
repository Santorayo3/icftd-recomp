/* fn_00015e20 - 40 byte(s), 12 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00015e20(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00015e20u): goto L_15E20;
    case RC_ADDR(0x00015e22u): goto L_15E22;
    case RC_ADDR(0x00015e26u): goto L_15E26;
    case RC_ADDR(0x00015e2cu): goto L_15E2C;
    case RC_ADDR(0x00015e30u): goto L_15E30;
    case RC_ADDR(0x00015e32u): goto L_15E32;
    case RC_ADDR(0x00015e34u): goto L_15E34;
    case RC_ADDR(0x00015e38u): goto L_15E38;
    case RC_ADDR(0x00015e3cu): goto L_15E3C;
    case RC_ADDR(0x00015e3eu): goto L_15E3E;
    case RC_ADDR(0x00015e42u): goto L_15E42;
    case RC_ADDR(0x00015e46u): goto L_15E46;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_15E20:
    /* 00015e20   2  lsr.w #4,D0 */
    c->pc = RC_ADDR(0x00015e20u);
    c->d[0] = rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W);

L_15E22:
    /* 00015e22   4  mulu.w #14,D0 */
    c->pc = RC_ADDR(0x00015e22u);
    t0 = 0x00000014u;
    rc_mulu(c, 0, t0);

L_15E26:
    /* 00015e26   6  andi.l #ffff,D1 */
    c->pc = RC_ADDR(0x00015e26u);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 & 0x0000ffffu;
    rc_d_set(c, 1, RC_L, t2);
    rc_set_nzvc(c, t2, RC_L);

L_15E2C:
    /* 00015e2c   4  divu.w #a,D1 */
    c->pc = RC_ADDR(0x00015e2cu);
    t0 = 0x0000000au;
    rc_divu(c, m, 1, t0);

L_15E30:
    /* 00015e30   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x00015e30u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_15E32:
    /* 00015e32   2  lsl.w #1,D0 */
    c->pc = RC_ADDR(0x00015e32u);
    c->d[0] = rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_15E34:
    /* 00015e34   4  movea.l (fffff2f8,A4),A0 */
    c->pc = RC_ADDR(0x00015e34u);
    t0 = rc_rd32(c, m, (c->a[4] - 0xd08u));
    c->a[0] = t0;

L_15E38:
    /* 00015e38   4  move.w (0,A0,D0.w),D0 */
    c->pc = RC_ADDR(0x00015e38u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_15E3C:
    /* 00015e3c   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x00015e3cu);
    c->d[0] = rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W);

L_15E3E:
    /* 00015e3e   4  movea.l (fffff318,A4),A0 */
    c->pc = RC_ADDR(0x00015e3eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0xce8u));
    c->a[0] = t0;

L_15E42:
    /* 00015e42   4  move.b (0,A0,D0.w),D0 */
    c->pc = RC_ADDR(0x00015e42u);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_15E46:
    /* 00015e46   2  rts */
    c->pc = RC_ADDR(0x00015e46u);
    rc_ret(c, m);
    return;

}
