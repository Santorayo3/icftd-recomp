/* fn_0000c7cc - 36 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c7cc(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c7ccu): goto L_C7CC;
    case RC_ADDR(0x0000c7d0u): goto L_C7D0;
    case RC_ADDR(0x0000c7d4u): goto L_C7D4;
    case RC_ADDR(0x0000c7d8u): goto L_C7D8;
    case RC_ADDR(0x0000c7dcu): goto L_C7DC;
    case RC_ADDR(0x0000c7e0u): goto L_C7E0;
    case RC_ADDR(0x0000c7e4u): goto L_C7E4;
    case RC_ADDR(0x0000c7e8u): goto L_C7E8;
    case RC_ADDR(0x0000c7ecu): goto L_C7EC;
    case RC_ADDR(0x0000c7eeu): goto L_C7EE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C7CC:
    /* 0000c7cc   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c7ccu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C7D0:
    /* 0000c7d0   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000c7d0u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C7D4:
    /* 0000c7d4   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c7d4u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C7D8:
    /* 0000c7d8   4  move.l (e10,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c7d8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C7DC:
    /* 0000c7dc   4  move.w (dfe,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c7dcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C7E0:
    /* 0000c7e0   4  move.l (df2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c7e0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xdf2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C7E4:
    /* 0000c7e4   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0000c7e4u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0000c7e8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_C7E8:
    /* 0000c7e8   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c7e8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_C7EC:
    /* 0000c7ec   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c7ecu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C7EE:
    /* 0000c7ee   2  rts */
    c->pc = RC_ADDR(0x0000c7eeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
