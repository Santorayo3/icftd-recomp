/* fn_0000c7a8 - 36 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c7a8(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c7a8u): goto L_C7A8;
    case RC_ADDR(0x0000c7acu): goto L_C7AC;
    case RC_ADDR(0x0000c7b0u): goto L_C7B0;
    case RC_ADDR(0x0000c7b4u): goto L_C7B4;
    case RC_ADDR(0x0000c7b8u): goto L_C7B8;
    case RC_ADDR(0x0000c7bcu): goto L_C7BC;
    case RC_ADDR(0x0000c7c0u): goto L_C7C0;
    case RC_ADDR(0x0000c7c4u): goto L_C7C4;
    case RC_ADDR(0x0000c7c8u): goto L_C7C8;
    case RC_ADDR(0x0000c7cau): goto L_C7CA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C7A8:
    /* 0000c7a8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c7a8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C7AC:
    /* 0000c7ac   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000c7acu);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C7B0:
    /* 0000c7b0   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c7b0u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C7B4:
    /* 0000c7b4   4  move.l (e0c,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c7b4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe0cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C7B8:
    /* 0000c7b8   4  move.w (dfc,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c7b8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C7BC:
    /* 0000c7bc   4  move.l (dee,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c7bcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xdeeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C7C0:
    /* 0000c7c0   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0000c7c0u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0000c7c4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_C7C4:
    /* 0000c7c4   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c7c4u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_C7C8:
    /* 0000c7c8   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c7c8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C7CA:
    /* 0000c7ca   2  rts */
    c->pc = RC_ADDR(0x0000c7cau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
