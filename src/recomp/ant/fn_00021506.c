/* fn_00021506 - 50 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021506(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021506u): goto L_21506;
    case RC_ADDR(0x00021508u): goto L_21508;
    case RC_ADDR(0x0002150cu): goto L_2150C;
    case RC_ADDR(0x0002150eu): goto L_2150E;
    case RC_ADDR(0x00021512u): goto L_21512;
    case RC_ADDR(0x00021516u): goto L_21516;
    case RC_ADDR(0x0002151au): goto L_2151A;
    case RC_ADDR(0x0002151eu): goto L_2151E;
    case RC_ADDR(0x00021522u): goto L_21522;
    case RC_ADDR(0x00021524u): goto L_21524;
    case RC_ADDR(0x00021526u): goto L_21526;
    case RC_ADDR(0x00021528u): goto L_21528;
    case RC_ADDR(0x0002152eu): goto L_2152E;
    case RC_ADDR(0x00021534u): goto L_21534;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21506:
    /* 00021506   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021506u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21508:
    /* 00021508   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x00021508u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2150C:
    /* 0002150c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0002150cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2150E:
    /* 0002150e   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0002150eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21512:
    /* 00021512   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x00021512u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_21516:
    /* 00021516   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00021516u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2151A:
    /* 0002151a   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x0002151au);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x0002151eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_2151E:
    /* 0002151e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0002151eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_21522:
    /* 00021522   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x00021522u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_21524:
    /* 00021524   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x00021524u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21526:
    /* 00021526   2  beq 00021534 */
    c->pc = RC_ADDR(0x00021526u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21534;

L_21528:
    /* 00021528   6  move.l (10,A5),(20,A2) */
    c->pc = RC_ADDR(0x00021528u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_wr32(c, m, (c->a[2] + 0x20u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2152E:
    /* 0002152e   6  move.l (14,A5),(24,A2) */
    c->pc = RC_ADDR(0x0002152eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_wr32(c, m, (c->a[2] + 0x24u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21534:
    /* 00021534   4  bra 00021950 */
    c->pc = RC_ADDR(0x00021534u);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
