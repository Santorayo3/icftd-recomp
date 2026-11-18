/* fn_000078f2 - 40 byte(s), 12 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_000078f2(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x000078f2u): goto L_78F2;
    case RC_ADDR(0x000078f6u): goto L_78F6;
    case RC_ADDR(0x000078fau): goto L_78FA;
    case RC_ADDR(0x000078fcu): goto L_78FC;
    case RC_ADDR(0x00007902u): goto L_7902;
    case RC_ADDR(0x00007904u): goto L_7904;
    case RC_ADDR(0x00007908u): goto L_7908;
    case RC_ADDR(0x0000790cu): goto L_790C;
    case RC_ADDR(0x00007910u): goto L_7910;
    case RC_ADDR(0x00007912u): goto L_7912;
    case RC_ADDR(0x00007916u): goto L_7916;
    case RC_ADDR(0x00007918u): goto L_7918;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_78F2:
    /* 000078f2   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x000078f2u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_78F6:
    /* 000078f6   4  tst.l (a5e,A4) */
    c->pc = RC_ADDR(0x000078f6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa5eu));
    rc_set_nzvc(c, t0, RC_L);

L_78FA:
    /* 000078fa   2  beq 00007916 */
    c->pc = RC_ADDR(0x000078fau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7916;

L_78FC:
    /* 000078fc   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x000078fcu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7902:
    /* 00007902   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007902u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7904:
    /* 00007904   4  move.l (a5e,A4),-(A7) */
    c->pc = RC_ADDR(0x00007904u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0xa5eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7908:
    /* 00007908   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00007908u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_790C:
    /* 0000790c   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x0000790cu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00007910u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_7910:
    /* 00007910   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00007910u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_7912:
    /* 00007912   4  clr.l (a5e,A4) */
    c->pc = RC_ADDR(0x00007912u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[4] + 0xa5eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7916:
    /* 00007916   2  unlk A5 */
    c->pc = RC_ADDR(0x00007916u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_7918:
    /* 00007918   2  rts */
    c->pc = RC_ADDR(0x00007918u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
