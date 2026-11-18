/* fn_00013794 - 38 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00013794(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2;

    switch (c->pc)
    {
    case RC_ADDR(0x00013794u): goto L_13794;
    case RC_ADDR(0x00013798u): goto L_13798;
    case RC_ADDR(0x0001379cu): goto L_1379C;
    case RC_ADDR(0x0001379eu): goto L_1379E;
    case RC_ADDR(0x000137a4u): goto L_137A4;
    case RC_ADDR(0x000137a8u): goto L_137A8;
    case RC_ADDR(0x000137aau): goto L_137AA;
    case RC_ADDR(0x000137acu): goto L_137AC;
    case RC_ADDR(0x000137b2u): goto L_137B2;
    case RC_ADDR(0x000137b6u): goto L_137B6;
    case RC_ADDR(0x000137b8u): goto L_137B8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13794:
    /* 00013794   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00013794u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_13798:
    /* 00013798   4  clr.w (14ea,A4) */
    c->pc = RC_ADDR(0x00013798u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x14eau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1379C:
    /* 0001379c   2  clr.l D0 */
    c->pc = RC_ADDR(0x0001379cu);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_1379E:
    /* 0001379e   6  move.b (00bfec01).l,D0 */
    c->pc = RC_ADDR(0x0001379eu);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, 0x00bfec01u);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_137A4:
    /* 000137a4   4  eori.b #ff,D0 */
    c->pc = RC_ADDR(0x000137a4u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_B);
    t2 = t1 ^ 0x000000ffu;
    rc_d_set(c, 0, RC_B, t2);
    rc_set_nzvc(c, t2, RC_B);

L_137A8:
    /* 000137a8   2  lsr.w #1,D0 */
    c->pc = RC_ADDR(0x000137a8u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 0, RC_W), RC_W));

L_137AA:
    /* 000137aa   2  bcc 000137b2 */
    c->pc = RC_ADDR(0x000137aau);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) goto L_137B2;

L_137AC:
    /* 000137ac   6  move.w #1,(14ea,A4) */
    c->pc = RC_ADDR(0x000137acu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14eau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_137B2:
    /* 000137b2   4  move.w D0,(14ec,A4) */
    c->pc = RC_ADDR(0x000137b2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] + 0x14ecu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_137B6:
    /* 000137b6   2  unlk A5 */
    c->pc = RC_ADDR(0x000137b6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_137B8:
    /* 000137b8   2  rts */
    c->pc = RC_ADDR(0x000137b8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
