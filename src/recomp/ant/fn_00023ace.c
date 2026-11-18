/* fn_00023ace - 38 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00023ace(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00023aceu): goto L_23ACE;
    case RC_ADDR(0x00023ad2u): goto L_23AD2;
    case RC_ADDR(0x00023ad6u): goto L_23AD6;
    case RC_ADDR(0x00023adau): goto L_23ADA;
    case RC_ADDR(0x00023adeu): goto L_23ADE;
    case RC_ADDR(0x00023ae0u): goto L_23AE0;
    case RC_ADDR(0x00023ae4u): goto L_23AE4;
    case RC_ADDR(0x00023ae8u): goto L_23AE8;
    case RC_ADDR(0x00023aecu): goto L_23AEC;
    case RC_ADDR(0x00023af0u): goto L_23AF0;
    case RC_ADDR(0x00023af2u): goto L_23AF2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_23ACE:
    /* 00023ace   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00023aceu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_23AD2:
    /* 00023ad2   4  pea (00000004).l */
    c->pc = RC_ADDR(0x00023ad2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_23AD6:
    /* 00023ad6   4  pea (00023af4) */
    c->pc = RC_ADDR(0x00023ad6u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x00023af4u));

L_23ADA:
    /* 00023ada   4  jsr (0002350c) */
    c->pc = RC_ADDR(0x00023adau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023adeu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002350cu);
    return;

L_23ADE:
    /* 00023ade   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00023adeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_23AE0:
    /* 00023ae0   4  jsr (0002354c) */
    c->pc = RC_ADDR(0x00023ae0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023ae4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002354cu);
    return;

L_23AE4:
    /* 00023ae4   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00023ae4u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_23AE8:
    /* 00023ae8   4  jsr (000232f6) */
    c->pc = RC_ADDR(0x00023ae8u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00023aecu));
    rc_depth++;
    c->pc = RC_ADDR(0x000232f6u);
    return;

L_23AEC:
    /* 00023aec   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00023aecu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_23AF0:
    /* 00023af0   2  unlk A5 */
    c->pc = RC_ADDR(0x00023af0u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_23AF2:
    /* 00023af2   2  rts */
    c->pc = RC_ADDR(0x00023af2u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
