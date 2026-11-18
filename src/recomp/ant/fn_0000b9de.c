/* fn_0000b9de - 42 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000b9de(cpu_t *c, rt_machine *m)
{
    u32 t0;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b9deu): goto L_B9DE;
    case RC_ADDR(0x0000b9e2u): goto L_B9E2;
    case RC_ADDR(0x0000b9e6u): goto L_B9E6;
    case RC_ADDR(0x0000b9e8u): goto L_B9E8;
    case RC_ADDR(0x0000b9eeu): goto L_B9EE;
    case RC_ADDR(0x0000b9f0u): goto L_B9F0;
    case RC_ADDR(0x0000b9f4u): goto L_B9F4;
    case RC_ADDR(0x0000b9f8u): goto L_B9F8;
    case RC_ADDR(0x0000b9fau): goto L_B9FA;
    case RC_ADDR(0x0000b9fcu): goto L_B9FC;
    case RC_ADDR(0x0000b9feu): goto L_B9FE;
    case RC_ADDR(0x0000ba02u): goto L_BA02;
    case RC_ADDR(0x0000ba04u): goto L_BA04;
    case RC_ADDR(0x0000ba06u): goto L_BA06;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B9DE:
    /* 0000b9de   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b9deu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B9E2:
    /* 0000b9e2   4  tst.w (ffff9582,A4) */
    c->pc = RC_ADDR(0x0000b9e2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6a7eu));
    rc_set_nzvc(c, t0, RC_W);

L_B9E6:
    /* 0000b9e6   2  beq 0000ba04 */
    c->pc = RC_ADDR(0x0000b9e6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_BA04;

L_B9E8:
    /* 0000b9e8   6  cmpi.w #1,(ffff9582,A4) */
    c->pc = RC_ADDR(0x0000b9e8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6a7eu));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_B9EE:
    /* 0000b9ee   2  bne 0000b9fc */
    c->pc = RC_ADDR(0x0000b9eeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_B9FC;

L_B9F0:
    /* 0000b9f0   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x0000b9f0u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B9F4:
    /* 0000b9f4   4  jsr (0000b952) */
    c->pc = RC_ADDR(0x0000b9f4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000b9f8u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b952u);
    return;

L_B9F8:
    /* 0000b9f8   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000b9f8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_B9FA:
    /* 0000b9fa   2  bra 0000ba04 */
    c->pc = RC_ADDR(0x0000b9fau);
    rc_step(c, m, 10);
    goto L_BA04;

L_B9FC:
    /* 0000b9fc   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x0000b9fcu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_B9FE:
    /* 0000b9fe   4  jsr (0000b952) */
    c->pc = RC_ADDR(0x0000b9feu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000ba02u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000b952u);
    return;

L_BA02:
    /* 0000ba02   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x0000ba02u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_BA04:
    /* 0000ba04   2  unlk A5 */
    c->pc = RC_ADDR(0x0000ba04u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_BA06:
    /* 0000ba06   2  rts */
    c->pc = RC_ADDR(0x0000ba06u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
