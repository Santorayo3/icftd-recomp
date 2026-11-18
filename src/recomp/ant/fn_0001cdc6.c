/* fn_0001cdc6 - 36 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001cdc6(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0001cdc6u): goto L_1CDC6;
    case RC_ADDR(0x0001cdcau): goto L_1CDCA;
    case RC_ADDR(0x0001cdceu): goto L_1CDCE;
    case RC_ADDR(0x0001cdd2u): goto L_1CDD2;
    case RC_ADDR(0x0001cdd6u): goto L_1CDD6;
    case RC_ADDR(0x0001cddau): goto L_1CDDA;
    case RC_ADDR(0x0001cddeu): goto L_1CDDE;
    case RC_ADDR(0x0001cde2u): goto L_1CDE2;
    case RC_ADDR(0x0001cde6u): goto L_1CDE6;
    case RC_ADDR(0x0001cde8u): goto L_1CDE8;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1CDC6:
    /* 0001cdc6   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001cdc6u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1CDCA:
    /* 0001cdca   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0001cdcau);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CDCE:
    /* 0001cdce   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x0001cdceu);
    rc_step(c, m, 12);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CDD2:
    /* 0001cdd2   4  move.l (2c9a,A4),-(A7) */
    c->pc = RC_ADDR(0x0001cdd2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c9au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CDD6:
    /* 0001cdd6   4  move.w #be,-(A7) */
    c->pc = RC_ADDR(0x0001cdd6u);
    rc_step(c, m, 12);
    t0 = 0x000000beu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_1CDDA:
    /* 0001cdda   4  move.l (2c76,A4),-(A7) */
    c->pc = RC_ADDR(0x0001cddau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x2c76u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_1CDDE:
    /* 0001cdde   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0001cddeu);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0001cde2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_1CDE2:
    /* 0001cde2   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0001cde2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_1CDE6:
    /* 0001cde6   2  unlk A5 */
    c->pc = RC_ADDR(0x0001cde6u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1CDE8:
    /* 0001cde8   2  rts */
    c->pc = RC_ADDR(0x0001cde8u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
