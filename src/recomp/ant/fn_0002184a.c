/* fn_0002184a - 84 byte(s), 25 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002184a(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0002184au): goto L_2184A;
    case RC_ADDR(0x0002184eu): goto L_2184E;
    case RC_ADDR(0x00021850u): goto L_21850;
    case RC_ADDR(0x00021852u): goto L_21852;
    case RC_ADDR(0x00021854u): goto L_21854;
    case RC_ADDR(0x00021858u): goto L_21858;
    case RC_ADDR(0x0002185eu): goto L_2185E;
    case RC_ADDR(0x00021862u): goto L_21862;
    case RC_ADDR(0x00021864u): goto L_21864;
    case RC_ADDR(0x00021866u): goto L_21866;
    case RC_ADDR(0x00021868u): goto L_21868;
    case RC_ADDR(0x0002186cu): goto L_2186C;
    case RC_ADDR(0x00021870u): goto L_21870;
    case RC_ADDR(0x00021872u): goto L_21872;
    case RC_ADDR(0x00021874u): goto L_21874;
    case RC_ADDR(0x00021876u): goto L_21876;
    case RC_ADDR(0x0002187au): goto L_2187A;
    case RC_ADDR(0x00021880u): goto L_21880;
    case RC_ADDR(0x00021884u): goto L_21884;
    case RC_ADDR(0x00021886u): goto L_21886;
    case RC_ADDR(0x00021888u): goto L_21888;
    case RC_ADDR(0x0002188au): goto L_2188A;
    case RC_ADDR(0x0002188eu): goto L_2188E;
    case RC_ADDR(0x00021894u): goto L_21894;
    case RC_ADDR(0x0002189au): goto L_2189A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2184A:
    /* 0002184a   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x0002184au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_2184E:
    /* 0002184e   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x0002184eu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21850:
    /* 00021850   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x00021850u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21852:
    /* 00021852   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00021852u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_21854:
    /* 00021854   4  lea (8dc,A4),A0 */
    c->pc = RC_ADDR(0x00021854u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8dcu);

L_21858:
    /* 00021858   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x00021858u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2185E:
    /* 0002185e   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x0002185eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21862:
    /* 00021862   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021862u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21864:
    /* 00021864   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x00021864u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21866:
    /* 00021866   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00021866u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_21868:
    /* 00021868   4  lea (8dc,A4),A0 */
    c->pc = RC_ADDR(0x00021868u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8dcu);

L_2186C:
    /* 0002186c   4  move.l (10,A5),D1 */
    c->pc = RC_ADDR(0x0002186cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21870:
    /* 00021870   2  moveq #10,D2 */
    c->pc = RC_ADDR(0x00021870u);
    rc_step(c, m, 4);
    c->d[2] = 0x00000010u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_21872:
    /* 00021872   2  asr.l D2,D1 */
    c->pc = RC_ADDR(0x00021872u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 0, (c->d[2] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_21874:
    /* 00021874   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00021874u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_21876:
    /* 00021876   4  lea (8dc,A4),A1 */
    c->pc = RC_ADDR(0x00021876u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x8dcu);

L_2187A:
    /* 0002187a   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x0002187au);
    rc_step(c, m, 24);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21880:
    /* 00021880   4  move.l (14,A5),D0 */
    c->pc = RC_ADDR(0x00021880u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21884:
    /* 00021884   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021884u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21886:
    /* 00021886   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x00021886u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_21888:
    /* 00021888   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00021888u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_2188A:
    /* 0002188a   4  lea (8dc,A4),A0 */
    c->pc = RC_ADDR(0x0002188au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x8dcu);

L_2188E:
    /* 0002188e   6  move.w (fffffffe,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0002188eu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21894:
    /* 00021894   6  move.w #1,(30ea,A4) */
    c->pc = RC_ADDR(0x00021894u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x30eau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_2189A:
    /* 0002189a   4  bra 00021950 */
    c->pc = RC_ADDR(0x0002189au);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
