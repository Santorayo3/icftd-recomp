/* fn_0001fe0a - 40 byte(s), 15 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001fe0a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1;

    switch (c->pc)
    {
    case RC_ADDR(0x0001fe0au): goto L_1FE0A;
    case RC_ADDR(0x0001fe0eu): goto L_1FE0E;
    case RC_ADDR(0x0001fe12u): goto L_1FE12;
    case RC_ADDR(0x0001fe16u): goto L_1FE16;
    case RC_ADDR(0x0001fe18u): goto L_1FE18;
    case RC_ADDR(0x0001fe1au): goto L_1FE1A;
    case RC_ADDR(0x0001fe1eu): goto L_1FE1E;
    case RC_ADDR(0x0001fe20u): goto L_1FE20;
    case RC_ADDR(0x0001fe22u): goto L_1FE22;
    case RC_ADDR(0x0001fe24u): goto L_1FE24;
    case RC_ADDR(0x0001fe26u): goto L_1FE26;
    case RC_ADDR(0x0001fe28u): goto L_1FE28;
    case RC_ADDR(0x0001fe2cu): goto L_1FE2C;
    case RC_ADDR(0x0001fe2eu): goto L_1FE2E;
    case RC_ADDR(0x0001fe30u): goto L_1FE30;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1FE0A:
    /* 0001fe0a   4  movea.l (4,A7),A0 */
    c->pc = RC_ADDR(0x0001fe0au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x4u));
    c->a[0] = t0;

L_1FE0E:
    /* 0001fe0e   4  move.l (8,A7),D2 */
    c->pc = RC_ADDR(0x0001fe0eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[7] + 0x8u));
    rc_d_set(c, 2, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FE12:
    /* 0001fe12   4  move.b (d,A7),D1 */
    c->pc = RC_ADDR(0x0001fe12u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[7] + 0xdu));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_1FE16:
    /* 0001fe16   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x0001fe16u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FE18:
    /* 0001fe18   2  beq 0001fe26 */
    c->pc = RC_ADDR(0x0001fe18u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FE26;

L_1FE1A:
    /* 0001fe1a   4  cmp.l (4,A0),D2 */
    c->pc = RC_ADDR(0x0001fe1au);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    t1 = rc_d_get(c, 2, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_1FE1E:
    /* 0001fe1e   2  beq 0001fe28 */
    c->pc = RC_ADDR(0x0001fe1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1FE28;

L_1FE20:
    /* 0001fe20   2  movea.l (A0),A0 */
    c->pc = RC_ADDR(0x0001fe20u);
    rc_step(c, m, 12);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[0] = t0;

L_1FE22:
    /* 0001fe22   2  move.l A0,D0 */
    c->pc = RC_ADDR(0x0001fe22u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 0, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_1FE24:
    /* 0001fe24   2  bne 0001fe1a */
    c->pc = RC_ADDR(0x0001fe24u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1FE1A; }

L_1FE26:
    /* 0001fe26   2  rts */
    c->pc = RC_ADDR(0x0001fe26u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1FE28:
    /* 0001fe28   4  cmp.b (9,A0),D1 */
    c->pc = RC_ADDR(0x0001fe28u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x9u));
    t1 = rc_d_get(c, 1, RC_B);
    rc_cmp(c, RC_B, t1, t0);

L_1FE2C:
    /* 0001fe2c   2  bne 0001fe20 */
    c->pc = RC_ADDR(0x0001fe2cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) { rc_tick(); goto L_1FE20; }

L_1FE2E:
    /* 0001fe2e   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0001fe2eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_1FE30:
    /* 0001fe30   2  rts */
    c->pc = RC_ADDR(0x0001fe30u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
