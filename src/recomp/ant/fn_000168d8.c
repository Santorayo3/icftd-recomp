/* fn_000168d8 - 36 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000168d8(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x000168d8u): goto L_168D8;
    case RC_ADDR(0x000168dcu): goto L_168DC;
    case RC_ADDR(0x000168e0u): goto L_168E0;
    case RC_ADDR(0x000168e2u): goto L_168E2;
    case RC_ADDR(0x000168e4u): goto L_168E4;
    case RC_ADDR(0x000168e8u): goto L_168E8;
    case RC_ADDR(0x000168ecu): goto L_168EC;
    case RC_ADDR(0x000168eeu): goto L_168EE;
    case RC_ADDR(0x000168f0u): goto L_168F0;
    case RC_ADDR(0x000168f4u): goto L_168F4;
    case RC_ADDR(0x000168f8u): goto L_168F8;
    case RC_ADDR(0x000168fau): goto L_168FA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_168D8:
    /* 000168d8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000168d8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_168DC:
    /* 000168dc   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x000168dcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_168E0:
    /* 000168e0   2  ext.l D0 */
    c->pc = RC_ADDR(0x000168e0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_168E2:
    /* 000168e2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x000168e2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_168E4:
    /* 000168e4   4  lea (1bee,A4),A0 */
    c->pc = RC_ADDR(0x000168e4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1beeu);

L_168E8:
    /* 000168e8   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x000168e8u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_168EC:
    /* 000168ec   2  ext.l D1 */
    c->pc = RC_ADDR(0x000168ecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_168EE:
    /* 000168ee   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x000168eeu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_168F0:
    /* 000168f0   4  lea (ffffb49c,A4),A0 */
    c->pc = RC_ADDR(0x000168f0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x4b64u);

L_168F4:
    /* 000168f4   4  move.w (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x000168f4u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_168F8:
    /* 000168f8   2  unlk A5 */
    c->pc = RC_ADDR(0x000168f8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_168FA:
    /* 000168fa   2  rts */
    c->pc = RC_ADDR(0x000168fau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
