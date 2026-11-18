/* fn_000183d2 - 46 byte(s), 13 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000183d2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000183d2u): goto L_183D2;
    case RC_ADDR(0x000183d6u): goto L_183D6;
    case RC_ADDR(0x000183d8u): goto L_183D8;
    case RC_ADDR(0x000183dcu): goto L_183DC;
    case RC_ADDR(0x000183e0u): goto L_183E0;
    case RC_ADDR(0x000183e4u): goto L_183E4;
    case RC_ADDR(0x000183e8u): goto L_183E8;
    case RC_ADDR(0x000183ecu): goto L_183EC;
    case RC_ADDR(0x000183f0u): goto L_183F0;
    case RC_ADDR(0x000183f4u): goto L_183F4;
    case RC_ADDR(0x000183f8u): goto L_183F8;
    case RC_ADDR(0x000183fcu): goto L_183FC;
    case RC_ADDR(0x000183feu): goto L_183FE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_183D2:
    /* 000183d2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000183d2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_183D6:
    /* 000183d6   2  bsr 0001839a */
    c->pc = RC_ADDR(0x000183d6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000183d8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001839au);
    return;

L_183D8:
    /* 000183d8   4  move.l D0,(1d4a,A4) */
    c->pc = RC_ADDR(0x000183d8u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] + 0x1d4au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_183DC:
    /* 000183dc   4  move.l (1d42,A4),-(A7) */
    c->pc = RC_ADDR(0x000183dcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1d42u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_183E0:
    /* 000183e0   4  move.l (1d3e,A4),-(A7) */
    c->pc = RC_ADDR(0x000183e0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1d3eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_183E4:
    /* 000183e4   4  move.l (1d4a,A4),-(A7) */
    c->pc = RC_ADDR(0x000183e4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1d4au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_183E8:
    /* 000183e8   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x000183e8u);
    rc_step(c, m, 18);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x000183ecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d4au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000205aau);
    return;

L_183EC:
    /* 000183ec   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x000183ecu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_183F0:
    /* 000183f0   4  movea.l (1d4a,A4),A0 */
    c->pc = RC_ADDR(0x000183f0u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1d4au));
    c->a[0] = t0;

L_183F4:
    /* 000183f4   4  move.l D0,(24,A0) */
    c->pc = RC_ADDR(0x000183f4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x24u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_183F8:
    /* 000183f8   4  move.l (1d4a,A4),D0 */
    c->pc = RC_ADDR(0x000183f8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1d4au));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_183FC:
    /* 000183fc   2  unlk A5 */
    c->pc = RC_ADDR(0x000183fcu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_183FE:
    /* 000183fe   2  rts */
    c->pc = RC_ADDR(0x000183feu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
