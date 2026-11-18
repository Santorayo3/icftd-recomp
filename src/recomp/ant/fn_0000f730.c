/* fn_0000f730 - 36 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000f730(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000f730u): goto L_F730;
    case RC_ADDR(0x0000f734u): goto L_F734;
    case RC_ADDR(0x0000f73au): goto L_F73A;
    case RC_ADDR(0x0000f73eu): goto L_F73E;
    case RC_ADDR(0x0000f740u): goto L_F740;
    case RC_ADDR(0x0000f742u): goto L_F742;
    case RC_ADDR(0x0000f746u): goto L_F746;
    case RC_ADDR(0x0000f74au): goto L_F74A;
    case RC_ADDR(0x0000f74eu): goto L_F74E;
    case RC_ADDR(0x0000f750u): goto L_F750;
    case RC_ADDR(0x0000f752u): goto L_F752;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_F730:
    /* 0000f730   4  link.w A5,#fffffffc */
    c->pc = RC_ADDR(0x0000f730u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x4u;

L_F734:
    /* 0000f734   6  move.w (8,A5),(110c,A4) */
    c->pc = RC_ADDR(0x0000f734u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x110cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F73A:
    /* 0000f73a   4  move.w (110c,A4),D0 */
    c->pc = RC_ADDR(0x0000f73au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x110cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F73E:
    /* 0000f73e   2  ext.l D0 */
    c->pc = RC_ADDR(0x0000f73eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_F740:
    /* 0000f740   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0000f740u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_F742:
    /* 0000f742   4  lea (ffff9d00,A4),A0 */
    c->pc = RC_ADDR(0x0000f742u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6300u);

L_F746:
    /* 0000f746   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x0000f746u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F74A:
    /* 0000f74a   4  jsr (ffff81d6,A4) */
    c->pc = RC_ADDR(0x0000f74au);
    rc_step(c, m, 18);
    /* vector 78 */
    rc_push32(c, m, RC_ADDR(0x0000f74eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023cccu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0001d326u);
    return;

L_F74E:
    /* 0000f74e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000f74eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_F750:
    /* 0000f750   2  unlk A5 */
    c->pc = RC_ADDR(0x0000f750u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_F752:
    /* 0000f752   2  rts */
    c->pc = RC_ADDR(0x0000f752u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
