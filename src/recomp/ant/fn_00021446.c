/* fn_00021446 - 58 byte(s), 16 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021446(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00021446u): goto L_21446;
    case RC_ADDR(0x00021448u): goto L_21448;
    case RC_ADDR(0x0002144cu): goto L_2144C;
    case RC_ADDR(0x0002144eu): goto L_2144E;
    case RC_ADDR(0x00021452u): goto L_21452;
    case RC_ADDR(0x00021456u): goto L_21456;
    case RC_ADDR(0x0002145au): goto L_2145A;
    case RC_ADDR(0x0002145eu): goto L_2145E;
    case RC_ADDR(0x00021462u): goto L_21462;
    case RC_ADDR(0x00021464u): goto L_21464;
    case RC_ADDR(0x00021466u): goto L_21466;
    case RC_ADDR(0x00021468u): goto L_21468;
    case RC_ADDR(0x0002146eu): goto L_2146E;
    case RC_ADDR(0x00021474u): goto L_21474;
    case RC_ADDR(0x00021478u): goto L_21478;
    case RC_ADDR(0x0002147cu): goto L_2147C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21446:
    /* 00021446   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021446u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21448:
    /* 00021448   4  move.b (f,A5),D0 */
    c->pc = RC_ADDR(0x00021448u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[5] + 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_2144C:
    /* 0002144c   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x0002144cu);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_2144E:
    /* 0002144e   4  move.l (a,A5),-(A7) */
    c->pc = RC_ADDR(0x0002144eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21452:
    /* 00021452   4  movea.l (838,A4),A0 */
    c->pc = RC_ADDR(0x00021452u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x838u));
    c->a[0] = t0;

L_21456:
    /* 00021456   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00021456u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2145A:
    /* 0002145a   4  jsr (ffff8248,A4) */
    c->pc = RC_ADDR(0x0002145au);
    rc_step(c, m, 18);
    /* vector 97 */
    rc_push32(c, m, RC_ADDR(0x0002145eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d3eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001fe0au);
    return;

L_2145E:
    /* 0002145e   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x0002145eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_21462:
    /* 00021462   2  movea.l D0,A2 */
    c->pc = RC_ADDR(0x00021462u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[2] = t0;

L_21464:
    /* 00021464   2  move.l A2,D0 */
    c->pc = RC_ADDR(0x00021464u);
    rc_step(c, m, 4);
    t0 = rc_a_get(c, 2, RC_L);
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21466:
    /* 00021466   2  beq 0002147c */
    c->pc = RC_ADDR(0x00021466u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2147C;

L_21468:
    /* 00021468   6  move.l (10,A5),(18,A2) */
    c->pc = RC_ADDR(0x00021468u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    rc_wr32(c, m, (c->a[2] + 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_2146E:
    /* 0002146e   6  move.l (14,A5),(1c,A2) */
    c->pc = RC_ADDR(0x0002146eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x14u));
    rc_wr32(c, m, (c->a[2] + 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21474:
    /* 00021474   4  clr.l (24,A2) */
    c->pc = RC_ADDR(0x00021474u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x24u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_21478:
    /* 00021478   4  clr.l (20,A2) */
    c->pc = RC_ADDR(0x00021478u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[2] + 0x20u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2147C:
    /* 0002147c   4  bra 00021950 */
    c->pc = RC_ADDR(0x0002147cu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00021950u);
    return;

}
