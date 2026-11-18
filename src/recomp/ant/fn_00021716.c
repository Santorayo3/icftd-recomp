/* fn_00021716 - 38 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021716(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021716u): goto L_21716;
    case RC_ADDR(0x00021718u): goto L_21718;
    case RC_ADDR(0x0002171cu): goto L_2171C;
    case RC_ADDR(0x0002171eu): goto L_2171E;
    case RC_ADDR(0x00021722u): goto L_21722;
    case RC_ADDR(0x00021726u): goto L_21726;
    case RC_ADDR(0x0002172au): goto L_2172A;
    case RC_ADDR(0x0002172eu): goto L_2172E;
    case RC_ADDR(0x00021732u): goto L_21732;
    case RC_ADDR(0x00021734u): goto L_21734;
    case RC_ADDR(0x00021738u): goto L_21738;
    case RC_ADDR(0x0002173au): goto L_2173A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21716:
    /* 00021716   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021716u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21718:
    /* 00021718   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x00021718u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2171C:
    /* 0002171c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0002171cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2171E:
    /* 0002171e   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0002171eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21722:
    /* 00021722   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x00021722u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_21726:
    /* 00021726   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00021726u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2172A:
    /* 0002172a   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x0002172au);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x0002172eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_2172E:
    /* 0002172e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0002172eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_21732:
    /* 00021732   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x00021732u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_21734:
    /* 00021734   4  move.l (10,A5),D0 */
    c->pc = RC_ADDR(0x00021734u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21738:
    /* 00021738   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00021738u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_2173A:
    /* 0002173a   2  asr.l D1,D0 */
    c->pc = RC_ADDR(0x0002173au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 0, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

    /* falls through into 0002173c */
    c->pc = RC_ADDR(0x0002173cu);
    return;
}
