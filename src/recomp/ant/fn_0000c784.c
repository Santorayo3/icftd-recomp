/* fn_0000c784 - 36 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000c784(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000c784u): goto L_C784;
    case RC_ADDR(0x0000c788u): goto L_C788;
    case RC_ADDR(0x0000c78cu): goto L_C78C;
    case RC_ADDR(0x0000c790u): goto L_C790;
    case RC_ADDR(0x0000c794u): goto L_C794;
    case RC_ADDR(0x0000c798u): goto L_C798;
    case RC_ADDR(0x0000c79cu): goto L_C79C;
    case RC_ADDR(0x0000c7a0u): goto L_C7A0;
    case RC_ADDR(0x0000c7a4u): goto L_C7A4;
    case RC_ADDR(0x0000c7a6u): goto L_C7A6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_C784:
    /* 0000c784   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000c784u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_C788:
    /* 0000c788   4  move.w #40,-(A7) */
    c->pc = RC_ADDR(0x0000c788u);
    rc_step(c, m, 12);
    t0 = 0x00000040u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C78C:
    /* 0000c78c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x0000c78cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C790:
    /* 0000c790   4  move.l (e08,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c790u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xe08u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C794:
    /* 0000c794   4  move.w (dfa,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c794u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_C798:
    /* 0000c798   4  move.l (dea,A4),-(A7) */
    c->pc = RC_ADDR(0x0000c798u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xdeau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C79C:
    /* 0000c79c   4  jsr (ffff80e0,A4) */
    c->pc = RC_ADDR(0x0000c79cu);
    rc_step(c, m, 18);
    /* vector 37 */
    rc_push32(c, m, RC_ADDR(0x0000c7a0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023bd6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000b008u);
    return;

L_C7A0:
    /* 0000c7a0   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000c7a0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_C7A4:
    /* 0000c7a4   2  unlk A5 */
    c->pc = RC_ADDR(0x0000c7a4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_C7A6:
    /* 0000c7a6   2  rts */
    c->pc = RC_ADDR(0x0000c7a6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
