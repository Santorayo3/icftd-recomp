/* fn_0001f7a8 - 84 byte(s), 25 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f7a8(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f7a8u): goto L_1F7A8;
    case RC_ADDR(0x0001f7acu): goto L_1F7AC;
    case RC_ADDR(0x0001f7aeu): goto L_1F7AE;
    case RC_ADDR(0x0001f7b0u): goto L_1F7B0;
    case RC_ADDR(0x0001f7b2u): goto L_1F7B2;
    case RC_ADDR(0x0001f7b6u): goto L_1F7B6;
    case RC_ADDR(0x0001f7bcu): goto L_1F7BC;
    case RC_ADDR(0x0001f7c0u): goto L_1F7C0;
    case RC_ADDR(0x0001f7c2u): goto L_1F7C2;
    case RC_ADDR(0x0001f7c4u): goto L_1F7C4;
    case RC_ADDR(0x0001f7c6u): goto L_1F7C6;
    case RC_ADDR(0x0001f7cau): goto L_1F7CA;
    case RC_ADDR(0x0001f7ceu): goto L_1F7CE;
    case RC_ADDR(0x0001f7d0u): goto L_1F7D0;
    case RC_ADDR(0x0001f7d2u): goto L_1F7D2;
    case RC_ADDR(0x0001f7d4u): goto L_1F7D4;
    case RC_ADDR(0x0001f7d8u): goto L_1F7D8;
    case RC_ADDR(0x0001f7deu): goto L_1F7DE;
    case RC_ADDR(0x0001f7e2u): goto L_1F7E2;
    case RC_ADDR(0x0001f7e4u): goto L_1F7E4;
    case RC_ADDR(0x0001f7e6u): goto L_1F7E6;
    case RC_ADDR(0x0001f7e8u): goto L_1F7E8;
    case RC_ADDR(0x0001f7ecu): goto L_1F7EC;
    case RC_ADDR(0x0001f7f2u): goto L_1F7F2;
    case RC_ADDR(0x0001f7f8u): goto L_1F7F8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F7A8:
    /* 0001f7a8   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0001f7a8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F7AC:
    /* 0001f7ac   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f7acu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F7AE:
    /* 0001f7ae   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f7aeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F7B0:
    /* 0001f7b0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001f7b0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1F7B2:
    /* 0001f7b2   4  lea (282,A4),A0 */
    c->pc = RC_ADDR(0x0001f7b2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x282u);

L_1F7B6:
    /* 0001f7b6   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x0001f7b6u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F7BC:
    /* 0001f7bc   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x0001f7bcu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F7C0:
    /* 0001f7c0   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f7c0u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F7C2:
    /* 0001f7c2   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f7c2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F7C4:
    /* 0001f7c4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001f7c4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1F7C6:
    /* 0001f7c6   4  lea (282,A4),A0 */
    c->pc = RC_ADDR(0x0001f7c6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x282u);

L_1F7CA:
    /* 0001f7ca   4  move.l (10,A5),D1 */
    c->pc = RC_ADDR(0x0001f7cau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F7CE:
    /* 0001f7ce   2  moveq #10,D2 */
    c->pc = RC_ADDR(0x0001f7ceu);
    rc_step(c, m, 4);
    c->d[2] = 0x00000010u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_1F7D0:
    /* 0001f7d0   2  asr.l D2,D1 */
    c->pc = RC_ADDR(0x0001f7d0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 0, (c->d[2] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_1F7D2:
    /* 0001f7d2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x0001f7d2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_1F7D4:
    /* 0001f7d4   4  lea (282,A4),A1 */
    c->pc = RC_ADDR(0x0001f7d4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x282u);

L_1F7D8:
    /* 0001f7d8   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0001f7d8u);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F7DE:
    /* 0001f7de   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x0001f7deu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F7E2:
    /* 0001f7e2   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0001f7e2u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_1F7E4:
    /* 0001f7e4   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0001f7e4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_1F7E6:
    /* 0001f7e6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0001f7e6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1F7E8:
    /* 0001f7e8   4  lea (282,A4),A0 */
    c->pc = RC_ADDR(0x0001f7e8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x282u);

L_1F7EC:
    /* 0001f7ec   6  move.w (fffffffe,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001f7ecu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F7F2:
    /* 0001f7f2   6  move.w #1,(26ba,A4) */
    c->pc = RC_ADDR(0x0001f7f2u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x26bau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F7F8:
    /* 0001f7f8   4  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f7f8u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
