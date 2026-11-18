/* fn_000037c0 - 64 byte(s), 17 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000037c0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000037c0u): goto L_37C0;
    case RC_ADDR(0x000037c4u): goto L_37C4;
    case RC_ADDR(0x000037cau): goto L_37CA;
    case RC_ADDR(0x000037d0u): goto L_37D0;
    case RC_ADDR(0x000037d6u): goto L_37D6;
    case RC_ADDR(0x000037d8u): goto L_37D8;
    case RC_ADDR(0x000037dau): goto L_37DA;
    case RC_ADDR(0x000037dcu): goto L_37DC;
    case RC_ADDR(0x000037e0u): goto L_37E0;
    case RC_ADDR(0x000037e4u): goto L_37E4;
    case RC_ADDR(0x000037e8u): goto L_37E8;
    case RC_ADDR(0x000037ecu): goto L_37EC;
    case RC_ADDR(0x000037f0u): goto L_37F0;
    case RC_ADDR(0x000037f4u): goto L_37F4;
    case RC_ADDR(0x000037f6u): goto L_37F6;
    case RC_ADDR(0x000037fcu): goto L_37FC;
    case RC_ADDR(0x000037feu): goto L_37FE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_37C0:
    /* 000037c0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000037c0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_37C4:
    /* 000037c4   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x000037c4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_37CA:
    /* 000037ca   6  pea (00010000).l */
    c->pc = RC_ADDR(0x000037cau);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_37D0:
    /* 000037d0   6  pea (000f0000).l */
    c->pc = RC_ADDR(0x000037d0u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x000f0000u);

L_37D6:
    /* 000037d6   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000037d6u);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_37D8:
    /* 000037d8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x000037d8u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_37DA:
    /* 000037da   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x000037dau);
    rc_step(c, m, 22);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_37DC:
    /* 000037dc   4  move.w #18,-(A7) */
    c->pc = RC_ADDR(0x000037dcu);
    rc_step(c, m, 12);
    t0 = 0x00000018u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_37E0:
    /* 000037e0   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000037e0u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000037e4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_37E4:
    /* 000037e4   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000037e4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_37E8:
    /* 000037e8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000037e8u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_37EC:
    /* 000037ec   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000037ecu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_37F0:
    /* 000037f0   4  jsr (00006500) */
    c->pc = RC_ADDR(0x000037f0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000037f4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006500u);
    return;

L_37F4:
    /* 000037f4   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x000037f4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_37F6:
    /* 000037f6   6  move.w #1,(ffff83fc,A4) */
    c->pc = RC_ADDR(0x000037f6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7c04u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_37FC:
    /* 000037fc   2  unlk A5 */
    c->pc = RC_ADDR(0x000037fcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_37FE:
    /* 000037fe   2  rts */
    c->pc = RC_ADDR(0x000037feu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
