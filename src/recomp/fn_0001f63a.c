/* fn_0001f63a - 58 byte(s), 18 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f63a(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f63au): goto L_1F63A;
    case RC_ADDR(0x0001f63cu): goto L_1F63C;
    case RC_ADDR(0x0001f640u): goto L_1F640;
    case RC_ADDR(0x0001f642u): goto L_1F642;
    case RC_ADDR(0x0001f646u): goto L_1F646;
    case RC_ADDR(0x0001f64au): goto L_1F64A;
    case RC_ADDR(0x0001f64eu): goto L_1F64E;
    case RC_ADDR(0x0001f652u): goto L_1F652;
    case RC_ADDR(0x0001f656u): goto L_1F656;
    case RC_ADDR(0x0001f658u): goto L_1F658;
    case RC_ADDR(0x0001f65cu): goto L_1F65C;
    case RC_ADDR(0x0001f65eu): goto L_1F65E;
    case RC_ADDR(0x0001f660u): goto L_1F660;
    case RC_ADDR(0x0001f664u): goto L_1F664;
    case RC_ADDR(0x0001f668u): goto L_1F668;
    case RC_ADDR(0x0001f66au): goto L_1F66A;
    case RC_ADDR(0x0001f66cu): goto L_1F66C;
    case RC_ADDR(0x0001f670u): goto L_1F670;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F63A:
    /* 0001f63a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f63au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F63C:
    /* 0001f63c   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x0001f63cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F640:
    /* 0001f640   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001f640u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F642:
    /* 0001f642   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f642u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F646:
    /* 0001f646   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f646u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F64A:
    /* 0001f64a   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0001f64au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F64E:
    /* 0001f64e   4  jsr (ffff822a,A4) */
    c->pc = RC_ADDR(0x0001f64eu);
    rc_step(c, m, 18);
    /* vector 92 */
    rc_push32(c, m, RC_ADDR(0x0001f652u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001dd6eu);
    return;

L_1F652:
    /* 0001f652   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0001f652u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_1F656:
    /* 0001f656   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0001f656u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_1F658:
    /* 0001f658   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f658u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F65C:
    /* 0001f65c   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f65cu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F65E:
    /* 0001f65e   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f65eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F660:
    /* 0001f660   4  move.w D0,(30,A2) */
    c->pc = RC_ADDR(0x0001f660u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x30u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F664:
    /* 0001f664   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x0001f664u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F668:
    /* 0001f668   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f668u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F66A:
    /* 0001f66a   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f66au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F66C:
    /* 0001f66c   4  move.w D0,(32,A2) */
    c->pc = RC_ADDR(0x0001f66cu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[2] + 0x32u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F670:
    /* 0001f670   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f670u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
