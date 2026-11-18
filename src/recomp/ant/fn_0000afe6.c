/* fn_0000afe6 - 34 byte(s), 9 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000afe6(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000afe6u): goto L_AFE6;
    case RC_ADDR(0x0000afeau): goto L_AFEA;
    case RC_ADDR(0x0000aff0u): goto L_AFF0;
    case RC_ADDR(0x0000aff2u): goto L_AFF2;
    case RC_ADDR(0x0000aff6u): goto L_AFF6;
    case RC_ADDR(0x0000aff8u): goto L_AFF8;
    case RC_ADDR(0x0000affeu): goto L_AFFE;
    case RC_ADDR(0x0000b004u): goto L_B004;
    case RC_ADDR(0x0000b006u): goto L_B006;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_AFE6:
    /* 0000afe6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000afe6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_AFEA:
    /* 0000afea   6  movea.l #dff0a0,A0 */
    c->pc = RC_ADDR(0x0000afeau);
    rc_step(c, m, 12);
    t0 = 0x00dff0a0u;
    c->a[0] = t0;

L_AFF0:
    /* 0000aff0   2  clr.l D0 */
    c->pc = RC_ADDR(0x0000aff0u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_L, 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_AFF2:
    /* 0000aff2   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x0000aff2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFF6:
    /* 0000aff6   2  lsl.w #4,D0 */
    c->pc = RC_ADDR(0x0000aff6u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 1, 0x00000004u, rc_d_get(c, 0, RC_W), RC_W));

L_AFF8:
    /* 0000aff8   6  move.w (a,A5),(6,A0,D0.w) */
    c->pc = RC_ADDR(0x0000aff8u);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x6u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_AFFE:
    /* 0000affe   6  move.w (c,A5),(8,A0,D0.w) */
    c->pc = RC_ADDR(0x0000affeu);
    rc_step(c, m, 22);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[0] + 0x8u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B004:
    /* 0000b004   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b004u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B006:
    /* 0000b006   2  rts */
    c->pc = RC_ADDR(0x0000b006u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
