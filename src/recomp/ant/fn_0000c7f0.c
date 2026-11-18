/* fn_0000c7f0 - 36 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c7f0(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c7f0u): goto L_C7F0;
    case RC_ADDR(0x0000c7f4u): goto L_C7F4;
    case RC_ADDR(0x0000c7f8u): goto L_C7F8;
    case RC_ADDR(0x0000c7fcu): goto L_C7FC;
    case RC_ADDR(0x0000c800u): goto L_C800;
    case RC_ADDR(0x0000c804u): goto L_C804;
    case RC_ADDR(0x0000c808u): goto L_C808;
    case RC_ADDR(0x0000c80cu): goto L_C80C;
    case RC_ADDR(0x0000c810u): goto L_C810;
    case RC_ADDR(0x0000c812u): goto L_C812;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C7F0:
    /* 0000c7f0   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c7f0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C7F4:
    /* 0000c7f4   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000c7f4u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C7F8:
    /* 0000c7f8   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c7f8u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C7FC:
    /* 0000c7fc   4  move.l (e10,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c7fcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C800:
    /* 0000c800   4  move.w (dfe,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c800u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfeu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C804:
    /* 0000c804   4  move.l (df2,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c804u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xdf2u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C808:
    /* 0000c808   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0000c808u);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0000c80cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_C80C:
    /* 0000c80c   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c80cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_C810:
    /* 0000c810   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c810u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C812:
    /* 0000c812   2  rts */
    c->pc = RC_ADDR(0x0000c812u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
