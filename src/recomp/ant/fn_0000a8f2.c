/* fn_0000a8f2 - 48 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000a8f2(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0000a8f2u): goto L_A8F2;
    case RC_ADDR(0x0000a8f6u): goto L_A8F6;
    case RC_ADDR(0x0000a8fcu): goto L_A8FC;
    case RC_ADDR(0x0000a8feu): goto L_A8FE;
    case RC_ADDR(0x0000a904u): goto L_A904;
    case RC_ADDR(0x0000a908u): goto L_A908;
    case RC_ADDR(0x0000a90cu): goto L_A90C;
    case RC_ADDR(0x0000a910u): goto L_A910;
    case RC_ADDR(0x0000a914u): goto L_A914;
    case RC_ADDR(0x0000a916u): goto L_A916;
    case RC_ADDR(0x0000a91au): goto L_A91A;
    case RC_ADDR(0x0000a91eu): goto L_A91E;
    case RC_ADDR(0x0000a920u): goto L_A920;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_A8F2:
    /* 0000a8f2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000a8f2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_A8F6:
    /* 0000a8f6   6  cmpi.w #17,(fffff8a0,A4) */
    c->pc = RC_ADDR(0x0000a8f6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x760u));
    rc_cmp(c, RC_W, t0, 0x00000017u);

L_A8FC:
    /* 0000a8fc   2  ble 0000a904 */
    c->pc = RC_ADDR(0x0000a8fcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_A904;

L_A8FE:
    /* 0000a8fe   6  move.w #17,(fffff8a0,A4) */
    c->pc = RC_ADDR(0x0000a8feu);
    rc_step(c, m, 16);
    t0 = 0x00000017u;
    rc_wr16(c, m, (c->a[4] - 0x760u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_A904:
    /* 0000a904   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000a904u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_A908:
    /* 0000a908   4  muls.w #3,D0 */
    c->pc = RC_ADDR(0x0000a908u);
    rc_step(c, m, 42);
    t0 = 0x00000003u;
    rc_muls(c, 0, t0);

L_A90C:
    /* 0000a90c   4  sub.w D0,(fffff8a0,A4) */
    c->pc = RC_ADDR(0x0000a90cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x760u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_A910:
    /* 0000a910   4  tst.w (fffff8a0,A4) */
    c->pc = RC_ADDR(0x0000a910u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x760u));
    rc_set_nzvc(c, t0, RC_W);

L_A914:
    /* 0000a914   2  bge 0000a91a */
    c->pc = RC_ADDR(0x0000a914u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_A91A;

L_A916:
    /* 0000a916   4  clr.w (fffff8a0,A4) */
    c->pc = RC_ADDR(0x0000a916u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x760u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A91A:
    /* 0000a91a   4  clr.w (fffff8a4,A4) */
    c->pc = RC_ADDR(0x0000a91au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x75cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_A91E:
    /* 0000a91e   2  unlk A5 */
    c->pc = RC_ADDR(0x0000a91eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_A920:
    /* 0000a920   2  rts */
    c->pc = RC_ADDR(0x0000a920u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
