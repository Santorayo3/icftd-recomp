/* fn_00006478 - 72 byte(s), 19 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00006478(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00006478u): goto L_6478;
    case RC_ADDR(0x0000647cu): goto L_647C;
    case RC_ADDR(0x00006482u): goto L_6482;
    case RC_ADDR(0x00006488u): goto L_6488;
    case RC_ADDR(0x0000648eu): goto L_648E;
    case RC_ADDR(0x00006494u): goto L_6494;
    case RC_ADDR(0x00006496u): goto L_6496;
    case RC_ADDR(0x0000649au): goto L_649A;
    case RC_ADDR(0x0000649eu): goto L_649E;
    case RC_ADDR(0x000064a2u): goto L_64A2;
    case RC_ADDR(0x000064a6u): goto L_64A6;
    case RC_ADDR(0x000064a8u): goto L_64A8;
    case RC_ADDR(0x000064aau): goto L_64AA;
    case RC_ADDR(0x000064acu): goto L_64AC;
    case RC_ADDR(0x000064b0u): goto L_64B0;
    case RC_ADDR(0x000064b4u): goto L_64B4;
    case RC_ADDR(0x000064b8u): goto L_64B8;
    case RC_ADDR(0x000064bcu): goto L_64BC;
    case RC_ADDR(0x000064beu): goto L_64BE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6478:
    /* 00006478   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00006478u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_647C:
    /* 0000647c   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x0000647cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6482:
    /* 00006482   6  pea (00090000).l */
    c->pc = RC_ADDR(0x00006482u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00090000u);

L_6488:
    /* 00006488   6  pea (009b0000).l */
    c->pc = RC_ADDR(0x00006488u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x009b0000u);

L_648E:
    /* 0000648e   6  pea (00a00000).l */
    c->pc = RC_ADDR(0x0000648eu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00a00000u);

L_6494:
    /* 00006494   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006494u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6496:
    /* 00006496   4  move.l (ffff8496,A4),-(A7) */
    c->pc = RC_ADDR(0x00006496u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7b6au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_649A:
    /* 0000649a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000649au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_649E:
    /* 0000649e   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000649eu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000064a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_64A2:
    /* 000064a2   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000064a2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_64A6:
    /* 000064a6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000064a6u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_64A8:
    /* 000064a8   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000064a8u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_64AA:
    /* 000064aa   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000064aau);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_64AC:
    /* 000064ac   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x000064acu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_64B0:
    /* 000064b0   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x000064b0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_64B4:
    /* 000064b4   4  jsr (ffff829c,A4) */
    c->pc = RC_ADDR(0x000064b4u);
    rc_step(c, m, 18);
    /* vector 111 */
    rc_push32(c, m, RC_ADDR(0x000064b8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d92u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021aa4u);
    return;

L_64B8:
    /* 000064b8   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x000064b8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_64BC:
    /* 000064bc   2  unlk A5 */
    c->pc = RC_ADDR(0x000064bcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_64BE:
    /* 000064be   2  rts */
    c->pc = RC_ADDR(0x000064beu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
