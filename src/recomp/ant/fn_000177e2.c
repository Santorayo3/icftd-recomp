/* fn_000177e2 - 34 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000177e2(cpu_t *c, rt_machine *m)
{
    u32 t0, t2, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000177e2u): goto L_177E2;
    case RC_ADDR(0x000177e4u): goto L_177E4;
    case RC_ADDR(0x000177e8u): goto L_177E8;
    case RC_ADDR(0x000177ecu): goto L_177EC;
    case RC_ADDR(0x000177eeu): goto L_177EE;
    case RC_ADDR(0x000177f2u): goto L_177F2;
    case RC_ADDR(0x000177f4u): goto L_177F4;
    case RC_ADDR(0x000177f8u): goto L_177F8;
    case RC_ADDR(0x000177fau): goto L_177FA;
    case RC_ADDR(0x000177feu): goto L_177FE;
    case RC_ADDR(0x00017800u): goto L_17800;
    case RC_ADDR(0x00017802u): goto L_17802;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_177E2:
    /* 000177e2   2  clr.l D3 */
    c->pc = RC_ADDR(0x000177e2u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_177E4:
    /* 000177e4   4  move.w (1ca6,A4),D3 */
    c->pc = RC_ADDR(0x000177e4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1ca6u));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_177E8:
    /* 000177e8   4  cmpi.w #be,D3 */
    c->pc = RC_ADDR(0x000177e8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 3, RC_W);
    rc_cmp(c, RC_W, t0, 0x000000beu);

L_177EC:
    /* 000177ec   2  blt 000177fa */
    c->pc = RC_ADDR(0x000177ecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_177FA;

L_177EE:
    /* 000177ee   4  divu.w #12,D3 */
    c->pc = RC_ADDR(0x000177eeu);
    rc_step(c, m, 144);
    t0 = 0x00000012u;
    rc_divu(c, m, 3, t0);

L_177F2:
    /* 000177f2   2  swap D3 */
    c->pc = RC_ADDR(0x000177f2u);
    rc_step(c, m, 4);
    t0 = c->d[3];
    c->d[3] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[3], RC_L);

L_177F4:
    /* 000177f4   4  bclr #0,D3 */
    c->pc = RC_ADDR(0x000177f4u);
    rc_step(c, m, 14);
    t4 = 0x00000000u;
    t0 = rc_d_get(c, 3, RC_L);
    rc_set_z(c, (t0 & (1u << t4)) == 0);
    t2 = t0 & ~(1u << t4);
    rc_d_set(c, 3, RC_L, t2);

L_177F8:
    /* 000177f8   2  rts */
    c->pc = RC_ADDR(0x000177f8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_177FA:
    /* 000177fa   4  divu.w #12,D3 */
    c->pc = RC_ADDR(0x000177fau);
    rc_step(c, m, 144);
    t0 = 0x00000012u;
    rc_divu(c, m, 3, t0);

L_177FE:
    /* 000177fe   2  swap D3 */
    c->pc = RC_ADDR(0x000177feu);
    rc_step(c, m, 4);
    t0 = c->d[3];
    c->d[3] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[3], RC_L);

L_17800:
    /* 00017800   2  lsl.w #1,D3 */
    c->pc = RC_ADDR(0x00017800u);
    rc_step(c, m, 6);
    rc_d_set(c, 3, RC_W, rc_shift(c, 1, 1, 0x00000001u, rc_d_get(c, 3, RC_W), RC_W));

L_17802:
    /* 00017802   2  rts */
    c->pc = RC_ADDR(0x00017802u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
