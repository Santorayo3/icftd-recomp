/* fn_00022892 - 32 byte(s), 10 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00022892(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x00022892u): goto L_22892;
    case RC_ADDR(0x00022896u): goto L_22896;
    case RC_ADDR(0x0002289au): goto L_2289A;
    case RC_ADDR(0x0002289cu): goto L_2289C;
    case RC_ADDR(0x000228a0u): goto L_228A0;
    case RC_ADDR(0x000228a4u): goto L_228A4;
    case RC_ADDR(0x000228a8u): goto L_228A8;
    case RC_ADDR(0x000228aau): goto L_228AA;
    case RC_ADDR(0x000228aeu): goto L_228AE;
    case RC_ADDR(0x000228b0u): goto L_228B0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_22892:
    /* 00022892   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00022892u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_22896:
    /* 00022896   4  tst.l (ffffd4aa,A4) */
    c->pc = RC_ADDR(0x00022896u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2b56u));
    rc_set_nzvc(c, t0, RC_L);

L_2289A:
    /* 0002289a   2  beq 000228ae */
    c->pc = RC_ADDR(0x0002289au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_228AE;

L_2289C:
    /* 0002289c   4  move.l (4510,A4),-(A7) */
    c->pc = RC_ADDR(0x0002289cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x4510u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_228A0:
    /* 000228a0   4  move.l (ffffd4aa,A4),-(A7) */
    c->pc = RC_ADDR(0x000228a0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] - 0x2b56u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_228A4:
    /* 000228a4   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000228a4u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000228a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_228A8:
    /* 000228a8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000228a8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_228AA:
    /* 000228aa   4  clr.l (ffffd4aa,A4) */
    c->pc = RC_ADDR(0x000228aau);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] - 0x2b56u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_228AE:
    /* 000228ae   2  unlk A5 */
    c->pc = RC_ADDR(0x000228aeu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_228B0:
    /* 000228b0   2  rts */
    c->pc = RC_ADDR(0x000228b0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
