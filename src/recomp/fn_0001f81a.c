/* fn_0001f81a - 74 byte(s), 23 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_0001f81a(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f81au): goto L_1F81A;
    case RC_ADDR(0x0001f81cu): goto L_1F81C;
    case RC_ADDR(0x0001f820u): goto L_1F820;
    case RC_ADDR(0x0001f822u): goto L_1F822;
    case RC_ADDR(0x0001f826u): goto L_1F826;
    case RC_ADDR(0x0001f82au): goto L_1F82A;
    case RC_ADDR(0x0001f82cu): goto L_1F82C;
    case RC_ADDR(0x0001f832u): goto L_1F832;
    case RC_ADDR(0x0001f834u): goto L_1F834;
    case RC_ADDR(0x0001f838u): goto L_1F838;
    case RC_ADDR(0x0001f83cu): goto L_1F83C;
    case RC_ADDR(0x0001f840u): goto L_1F840;
    case RC_ADDR(0x0001f842u): goto L_1F842;
    case RC_ADDR(0x0001f846u): goto L_1F846;
    case RC_ADDR(0x0001f848u): goto L_1F848;
    case RC_ADDR(0x0001f84cu): goto L_1F84C;
    case RC_ADDR(0x0001f84eu): goto L_1F84E;
    case RC_ADDR(0x0001f852u): goto L_1F852;
    case RC_ADDR(0x0001f854u): goto L_1F854;
    case RC_ADDR(0x0001f858u): goto L_1F858;
    case RC_ADDR(0x0001f85cu): goto L_1F85C;
    case RC_ADDR(0x0001f85eu): goto L_1F85E;
    case RC_ADDR(0x0001f862u): goto L_1F862;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F81A:
    /* 0001f81a   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f81au);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F81C:
    /* 0001f81c   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x0001f81cu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F820:
    /* 0001f820   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001f820u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1F822:
    /* 0001f822   4  lea (2a1c,A4),A0 */
    c->pc = RC_ADDR(0x0001f822u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2a1cu);

L_1F826:
    /* 0001f826   4  tst.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0001f826u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_L);

L_1F82A:
    /* 0001f82a   2  beq 0001f862 */
    c->pc = RC_ADDR(0x0001f82au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F862;

L_1F82C:
    /* 0001f82c   6  cmpi.b #10,(f,A5) */
    c->pc = RC_ADDR(0x0001f82cu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_cmp(c, RC_B, t0, 0x00000010u);

L_1F832:
    /* 0001f832   2  bcc 0001f862 */
    c->pc = RC_ADDR(0x0001f832u);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_1F862;

L_1F834:
    /* 0001f834   4  move.l (18,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f834u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F838:
    /* 0001f838   4  move.l (14,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f838u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F83C:
    /* 0001f83c   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f83cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F840:
    /* 0001f840   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f840u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F842:
    /* 0001f842   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x0001f842u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F846:
    /* 0001f846   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0001f846u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1F848:
    /* 0001f848   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0001f848u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1F84C:
    /* 0001f84c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0001f84cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1F84E:
    /* 0001f84e   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x0001f84eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1F852:
    /* 0001f852   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0001f852u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_1F854:
    /* 0001f854   4  lea (2a1c,A4),A0 */
    c->pc = RC_ADDR(0x0001f854u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x2a1cu);

L_1F858:
    /* 0001f858   4  movea.l (0,A0,D0.w),A1 */
    c->pc = RC_ADDR(0x0001f858u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_1F85C:
    /* 0001f85c   2  jsr (A1) */
    c->pc = RC_ADDR(0x0001f85cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x0001f85eu));
    rc_depth++;
    t3 = c->a[1];
    c->pc = t3;
    return;

L_1F85E:
    /* 0001f85e   4  lea (12,A7),A7 */
    c->pc = RC_ADDR(0x0001f85eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x12u);

L_1F862:
    /* 0001f862   2  bra 0001f8ae */
    c->pc = RC_ADDR(0x0001f862u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x0001f8aeu);
    return;

}
