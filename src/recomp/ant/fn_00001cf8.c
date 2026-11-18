/* fn_00001cf8 - 32 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00001cf8(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00001cf8u): goto L_1CF8;
    case RC_ADDR(0x00001cfcu): goto L_1CFC;
    case RC_ADDR(0x00001d00u): goto L_1D00;
    case RC_ADDR(0x00001d04u): goto L_1D04;
    case RC_ADDR(0x00001d08u): goto L_1D08;
    case RC_ADDR(0x00001d0cu): goto L_1D0C;
    case RC_ADDR(0x00001d0eu): goto L_1D0E;
    case RC_ADDR(0x00001d10u): goto L_1D10;
    case RC_ADDR(0x00001d12u): goto L_1D12;
    case RC_ADDR(0x00001d14u): goto L_1D14;
    case RC_ADDR(0x00001d16u): goto L_1D16;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CF8:
    /* 00001cf8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00001cf8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1CFC:
    /* 00001cfc   4  move.w (fffff78c,A4),D0 */
    c->pc = RC_ADDR(0x00001cfcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_1D00:
    /* 00001d00   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00001d00u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_1D04:
    /* 00001d04   4  lea (ffff85f6,A4),A0 */
    c->pc = RC_ADDR(0x00001d04u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a0au);

L_1D08:
    /* 00001d08   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00001d08u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_1D0C:
    /* 00001d0c   2  beq 00001d14 */
    c->pc = RC_ADDR(0x00001d0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1D14;

L_1D0E:
    /* 00001d0e   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00001d0eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D10:
    /* 00001d10   2  unlk A5 */
    c->pc = RC_ADDR(0x00001d10u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1D12:
    /* 00001d12   2  rts */
    c->pc = RC_ADDR(0x00001d12u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1D14:
    /* 00001d14   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00001d14u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_1D16:
    /* 00001d16   2  bra 00001d10 */
    c->pc = RC_ADDR(0x00001d16u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1D10;

}
