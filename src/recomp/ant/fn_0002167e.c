/* fn_0002167e - 40 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0002167e(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0002167eu): goto L_2167E;
    case RC_ADDR(0x00021680u): goto L_21680;
    case RC_ADDR(0x00021684u): goto L_21684;
    case RC_ADDR(0x00021686u): goto L_21686;
    case RC_ADDR(0x0002168au): goto L_2168A;
    case RC_ADDR(0x0002168eu): goto L_2168E;
    case RC_ADDR(0x00021692u): goto L_21692;
    case RC_ADDR(0x00021696u): goto L_21696;
    case RC_ADDR(0x0002169au): goto L_2169A;
    case RC_ADDR(0x0002169cu): goto L_2169C;
    case RC_ADDR(0x000216a2u): goto L_216A2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_2167E:
    /* 0002167e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002167eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21680:
    /* 00021680   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x00021680u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_21684:
    /* 00021684   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00021684u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21686:
    /* 00021686   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x00021686u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2168A:
    /* 0002168a   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x0002168au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_2168E:
    /* 0002168e   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x0002168eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21692:
    /* 00021692   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x00021692u);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x00021696u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_21696:
    /* 00021696   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00021696u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_2169A:
    /* 0002169a   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x0002169au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_2169C:
    /* 0002169c   6  move.l (10,A5),(38,A2) */
    c->pc = RC_ADDR(0x0002169cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_wr32(c, m, (c->a[2] + 0x38u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_216A2:
    /* 000216a2   4  bra 00021950 */
    c->pc = RC_ADDR(0x000216a2u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
