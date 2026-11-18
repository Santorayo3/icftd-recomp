/* fn_0000d9e8 - 54 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000d9e8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000d9e8u): goto L_D9E8;
    case RC_ADDR(0x0000d9ecu): goto L_D9EC;
    case RC_ADDR(0x0000d9f0u): goto L_D9F0;
    case RC_ADDR(0x0000d9f4u): goto L_D9F4;
    case RC_ADDR(0x0000d9f8u): goto L_D9F8;
    case RC_ADDR(0x0000d9feu): goto L_D9FE;
    case RC_ADDR(0x0000da02u): goto L_DA02;
    case RC_ADDR(0x0000da06u): goto L_DA06;
    case RC_ADDR(0x0000da0cu): goto L_DA0C;
    case RC_ADDR(0x0000da12u): goto L_DA12;
    case RC_ADDR(0x0000da18u): goto L_DA18;
    case RC_ADDR(0x0000da1au): goto L_DA1A;
    case RC_ADDR(0x0000da1cu): goto L_DA1C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_D9E8:
    /* 0000d9e8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000d9e8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_D9EC:
    /* 0000d9ec   4  clr.w (1116,A4) */
    c->pc = RC_ADDR(0x0000d9ecu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1116u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D9F0:
    /* 0000d9f0   4  clr.w (1118,A4) */
    c->pc = RC_ADDR(0x0000d9f0u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1118u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D9F4:
    /* 0000d9f4   4  clr.w (856,A4) */
    c->pc = RC_ADDR(0x0000d9f4u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x856u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D9F8:
    /* 0000d9f8   6  move.w (1138,A4),(1134,A4) */
    c->pc = RC_ADDR(0x0000d9f8u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1138u));
    rc_wr16(c, m, (c->a[4] + 0x1134u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D9FE:
    /* 0000d9fe   4  clr.w (111a,A4) */
    c->pc = RC_ADDR(0x0000d9feu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x111au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DA02:
    /* 0000da02   4  clr.w (1112,A4) */
    c->pc = RC_ADDR(0x0000da02u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1112u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_DA06:
    /* 0000da06   6  move.w #1,(1114,A4) */
    c->pc = RC_ADDR(0x0000da06u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1114u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA0C:
    /* 0000da0c   6  move.w #1,(e74,A4) */
    c->pc = RC_ADDR(0x0000da0cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0xe74u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA12:
    /* 0000da12   6  move.w #64,(111c,A4) */
    c->pc = RC_ADDR(0x0000da12u);
    rc_step(c, m, 16);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[4] + 0x111cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_DA18:
    /* 0000da18   2  bsr 0000da1e */
    c->pc = RC_ADDR(0x0000da18u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000da1au));
    rc_depth++;
    c->pc = RC_ADDR(0x0000da1eu);
    return;

L_DA1A:
    /* 0000da1a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000da1au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_DA1C:
    /* 0000da1c   2  rts */
    c->pc = RC_ADDR(0x0000da1cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
