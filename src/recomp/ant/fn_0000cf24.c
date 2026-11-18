/* fn_0000cf24 - 42 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000cf24(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000cf24u): goto L_CF24;
    case RC_ADDR(0x0000cf28u): goto L_CF28;
    case RC_ADDR(0x0000cf2cu): goto L_CF2C;
    case RC_ADDR(0x0000cf30u): goto L_CF30;
    case RC_ADDR(0x0000cf34u): goto L_CF34;
    case RC_ADDR(0x0000cf38u): goto L_CF38;
    case RC_ADDR(0x0000cf3au): goto L_CF3A;
    case RC_ADDR(0x0000cf3eu): goto L_CF3E;
    case RC_ADDR(0x0000cf42u): goto L_CF42;
    case RC_ADDR(0x0000cf46u): goto L_CF46;
    case RC_ADDR(0x0000cf4au): goto L_CF4A;
    case RC_ADDR(0x0000cf4cu): goto L_CF4C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_CF24:
    /* 0000cf24   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000cf24u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_CF28:
    /* 0000cf28   4  jsr (00009de8) */
    c->pc = RC_ADDR(0x0000cf28u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000cf2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00009de8u);
    return;

L_CF2C:
    /* 0000cf2c   4  move.w #28,-(A7) */
    c->pc = RC_ADDR(0x0000cf2cu);
    rc_step(c, m, 12);
    t0 = 0x00000028u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF30:
    /* 0000cf30   4  move.w (acc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cf30u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaccu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF34:
    /* 0000cf34   4  move.w (aca,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cf34u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xacau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF38:
    /* 0000cf38   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000cf38u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CF3A:
    /* 0000cf3a   4  move.l (ac0,A4),-(A7) */
    c->pc = RC_ADDR(0x0000cf3au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xac0u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_CF3E:
    /* 0000cf3e   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000cf3eu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF42:
    /* 0000cf42   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x0000cf42u);
    rc_step(c, m, 18);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x0000cf46u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d8cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000219b6u);
    return;

L_CF46:
    /* 0000cf46   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000cf46u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_CF4A:
    /* 0000cf4a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000cf4au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_CF4C:
    /* 0000cf4c   2  rts */
    c->pc = RC_ADDR(0x0000cf4cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
