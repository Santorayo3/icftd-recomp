/* fn_00019842 - 102 byte(s), 26 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00019842(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00019842u): goto L_19842;
    case RC_ADDR(0x00019846u): goto L_19846;
    case RC_ADDR(0x0001984au): goto L_1984A;
    case RC_ADDR(0x00019850u): goto L_19850;
    case RC_ADDR(0x00019854u): goto L_19854;
    case RC_ADDR(0x00019858u): goto L_19858;
    case RC_ADDR(0x0001985au): goto L_1985A;
    case RC_ADDR(0x0001985eu): goto L_1985E;
    case RC_ADDR(0x00019862u): goto L_19862;
    case RC_ADDR(0x00019868u): goto L_19868;
    case RC_ADDR(0x0001986cu): goto L_1986C;
    case RC_ADDR(0x00019872u): goto L_19872;
    case RC_ADDR(0x00019876u): goto L_19876;
    case RC_ADDR(0x0001987au): goto L_1987A;
    case RC_ADDR(0x0001987eu): goto L_1987E;
    case RC_ADDR(0x00019882u): goto L_19882;
    case RC_ADDR(0x00019886u): goto L_19886;
    case RC_ADDR(0x0001988au): goto L_1988A;
    case RC_ADDR(0x0001988eu): goto L_1988E;
    case RC_ADDR(0x00019892u): goto L_19892;
    case RC_ADDR(0x00019896u): goto L_19896;
    case RC_ADDR(0x0001989au): goto L_1989A;
    case RC_ADDR(0x0001989eu): goto L_1989E;
    case RC_ADDR(0x000198a2u): goto L_198A2;
    case RC_ADDR(0x000198a4u): goto L_198A4;
    case RC_ADDR(0x000198a6u): goto L_198A6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_19842:
    /* 00019842   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00019842u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_19846:
    /* 00019846   4  move.l A4,(ffffd5ac,A4) */
    c->pc = RC_ADDR(0x00019846u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 4, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x2a54u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1984A:
    /* 0001984a   6  pea (00010001).l */
    c->pc = RC_ADDR(0x0001984au);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_19850:
    /* 00019850   4  pea (00000016).l */
    c->pc = RC_ADDR(0x00019850u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000016u);

L_19854:
    /* 00019854   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00019854u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00019858u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_19858:
    /* 00019858   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00019858u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_1985A:
    /* 0001985a   4  move.l D0,(17fa,A4) */
    c->pc = RC_ADDR(0x0001985au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x17fau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1985E:
    /* 0001985e   4  movea.l (17fa,A4),A0 */
    c->pc = RC_ADDR(0x0001985eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[0] = t0;

L_19862:
    /* 00019862   6  move.b #2,(8,A0) */
    c->pc = RC_ADDR(0x00019862u);
    rc_step(c, m, 16);
    t0 = 0x00000002u;
    rc_wr8(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_19868:
    /* 00019868   4  movea.l (17fa,A4),A0 */
    c->pc = RC_ADDR(0x00019868u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[0] = t0;

L_1986C:
    /* 0001986c   6  move.b #c4,(9,A0) */
    c->pc = RC_ADDR(0x0001986cu);
    rc_step(c, m, 16);
    t0 = 0x000000c4u;
    rc_wr8(c, m, (c->a[0] + 0x9u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_19872:
    /* 00019872   4  movea.l (17fa,A4),A0 */
    c->pc = RC_ADDR(0x00019872u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[0] = t0;

L_19876:
    /* 00019876   4  lea (000198a8),A1 */
    c->pc = RC_ADDR(0x00019876u);
    rc_step(c, m, 8);
    c->a[1] = RC_ADDR(0x000198a8u);

L_1987A:
    /* 0001987a   4  move.l A1,(a,A0) */
    c->pc = RC_ADDR(0x0001987au);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1987E:
    /* 0001987e   4  lea (ffffd5ac,A4),A0 */
    c->pc = RC_ADDR(0x0001987eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2a54u);

L_19882:
    /* 00019882   4  movea.l (17fa,A4),A1 */
    c->pc = RC_ADDR(0x00019882u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[1] = t0;

L_19886:
    /* 00019886   4  move.l A0,(e,A1) */
    c->pc = RC_ADDR(0x00019886u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_1988A:
    /* 0001988a   4  lea (0001982a),A0 */
    c->pc = RC_ADDR(0x0001988au);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0001982au);

L_1988E:
    /* 0001988e   4  movea.l (17fa,A4),A1 */
    c->pc = RC_ADDR(0x0001988eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[1] = t0;

L_19892:
    /* 00019892   4  move.l A0,(12,A1) */
    c->pc = RC_ADDR(0x00019892u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[1] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_19896:
    /* 00019896   4  move.l (17fa,A4),-(A7) */
    c->pc = RC_ADDR(0x00019896u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x17fau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1989A:
    /* 0001989a   4  pea (00000005).l */
    c->pc = RC_ADDR(0x0001989au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000005u);

L_1989E:
    /* 0001989e   4  jsr (ffff8350,A4) */
    c->pc = RC_ADDR(0x0001989eu);
    rc_step(c, m, 18);
    /* vector 141 */
    rc_push32(c, m, RC_ADDR(0x000198a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e46u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002355au);
    return;

L_198A2:
    /* 000198a2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000198a2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_198A4:
    /* 000198a4   2  unlk A5 */
    c->pc = RC_ADDR(0x000198a4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_198A6:
    /* 000198a6   2  rts */
    c->pc = RC_ADDR(0x000198a6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
