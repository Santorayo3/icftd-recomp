/* fn_00001af8 - 42 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001af8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00001af8u): goto L_1AF8;
    case RC_ADDR(0x00001afcu): goto L_1AFC;
    case RC_ADDR(0x00001b00u): goto L_1B00;
    case RC_ADDR(0x00001b04u): goto L_1B04;
    case RC_ADDR(0x00001b06u): goto L_1B06;
    case RC_ADDR(0x00001b08u): goto L_1B08;
    case RC_ADDR(0x00001b0cu): goto L_1B0C;
    case RC_ADDR(0x00001b12u): goto L_1B12;
    case RC_ADDR(0x00001b16u): goto L_1B16;
    case RC_ADDR(0x00001b1cu): goto L_1B1C;
    case RC_ADDR(0x00001b1eu): goto L_1B1E;
    case RC_ADDR(0x00001b20u): goto L_1B20;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1AF8:
    /* 00001af8   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00001af8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1AFC:
    /* 00001afc   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00001afcu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1B00:
    /* 00001b00   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00001b00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B04:
    /* 00001b04   2  ext.l D0 */
    c->pc = RC_ADDR(0x00001b04u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_1B06:
    /* 00001b06   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00001b06u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_1B08:
    /* 00001b08   4  lea (ffffd6fc,A4),A0 */
    c->pc = RC_ADDR(0x00001b08u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x2904u);

L_1B0C:
    /* 00001b0c   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00001b0cu);
    rc_step(c, m, 18);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1B12:
    /* 00001b12   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001b12u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1B16:
    /* 00001b16   6  cmpi.w #14,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00001b16u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000014u);

L_1B1C:
    /* 00001b1c   2  blt 00001b00 */
    c->pc = RC_ADDR(0x00001b1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_1B00; }

L_1B1E:
    /* 00001b1e   2  unlk A5 */
    c->pc = RC_ADDR(0x00001b1eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1B20:
    /* 00001b20   2  rts */
    c->pc = RC_ADDR(0x00001b20u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
