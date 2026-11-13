/* fn_0001f4ca - 44 byte(s), 14 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f4ca(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f4cau): goto L_1F4CA;
    case RC_ADDR(0x0001f4ceu): goto L_1F4CE;
    case RC_ADDR(0x0001f4d0u): goto L_1F4D0;
    case RC_ADDR(0x0001f4d2u): goto L_1F4D2;
    case RC_ADDR(0x0001f4d6u): goto L_1F4D6;
    case RC_ADDR(0x0001f4d8u): goto L_1F4D8;
    case RC_ADDR(0x0001f4dau): goto L_1F4DA;
    case RC_ADDR(0x0001f4deu): goto L_1F4DE;
    case RC_ADDR(0x0001f4e0u): goto L_1F4E0;
    case RC_ADDR(0x0001f4e2u): goto L_1F4E2;
    case RC_ADDR(0x0001f4e6u): goto L_1F4E6;
    case RC_ADDR(0x0001f4eau): goto L_1F4EA;
    case RC_ADDR(0x0001f4eeu): goto L_1F4EE;
    case RC_ADDR(0x0001f4f2u): goto L_1F4F2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F4CA:
    /* 0001f4ca   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f4cau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F4CE:
    /* 0001f4ce   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f4ceu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F4D0:
    /* 0001f4d0   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f4d0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F4D2:
    /* 0001f4d2   4  sub.l (26b6,A4),D0 */
    c->pc = RC_ADDR(0x0001f4d2u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x26b6u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1F4D6:
    /* 0001f4d6   2  tst.l D0 */
    c->pc = RC_ADDR(0x0001f4d6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t0, RC_L);

L_1F4D8:
    /* 0001f4d8   2  bls 0001f4f2 */
    c->pc = RC_ADDR(0x0001f4d8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_1F4F2;

L_1F4DA:
    /* 0001f4da   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f4dau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F4DE:
    /* 0001f4de   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f4deu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F4E0:
    /* 0001f4e0   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f4e0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F4E2:
    /* 0001f4e2   4  sub.l (26b6,A4),D0 */
    c->pc = RC_ADDR(0x0001f4e2u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] + 0x26b6u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_1F4E6:
    /* 0001f4e6   4  movea.l (fffffebe,A4),A0 */
    c->pc = RC_ADDR(0x0001f4e6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x142u));
    c->a[0] = t0;

L_1F4EA:
    /* 0001f4ea   4  move.w D0,(28,A0) */
    c->pc = RC_ADDR(0x0001f4eau);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[0] + 0x28u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F4EE:
    /* 0001f4ee   4  clr.w (2ad6,A4) */
    c->pc = RC_ADDR(0x0001f4eeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x2ad6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1F4F2:
    /* 0001f4f2   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f4f2u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
