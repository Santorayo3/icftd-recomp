/* fn_0001f2b8 - 30 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001f2b8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001f2b8u): goto L_1F2B8;
    case RC_ADDR(0x0001f2bcu): goto L_1F2BC;
    case RC_ADDR(0x0001f2c0u): goto L_1F2C0;
    case RC_ADDR(0x0001f2c2u): goto L_1F2C2;
    case RC_ADDR(0x0001f2c4u): goto L_1F2C4;
    case RC_ADDR(0x0001f2c6u): goto L_1F2C6;
    case RC_ADDR(0x0001f2cau): goto L_1F2CA;
    case RC_ADDR(0x0001f2ceu): goto L_1F2CE;
    case RC_ADDR(0x0001f2d0u): goto L_1F2D0;
    case RC_ADDR(0x0001f2d2u): goto L_1F2D2;
    case RC_ADDR(0x0001f2d4u): goto L_1F2D4;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1F2B8:
    /* 0001f2b8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001f2b8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1F2BC:
    /* 0001f2bc   4  tst.w (ffffd284,A4) */
    c->pc = RC_ADDR(0x0001f2bcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d7cu));
    rc_set_nzvc(c, t0, RC_W);

L_1F2C0:
    /* 0001f2c0   2  bne 0001f2c6 */
    c->pc = RC_ADDR(0x0001f2c0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1F2C6;

L_1F2C2:
    /* 0001f2c2   2  unlk A5 */
    c->pc = RC_ADDR(0x0001f2c2u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1F2C4:
    /* 0001f2c4   2  rts */
    c->pc = RC_ADDR(0x0001f2c4u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_1F2C6:
    /* 0001f2c6   4  subq.w #1,(ffffd284,A4) */
    c->pc = RC_ADDR(0x0001f2c6u);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x2d7cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1F2CA:
    /* 0001f2ca   4  tst.w (ffffd284,A4) */
    c->pc = RC_ADDR(0x0001f2cau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2d7cu));
    rc_set_nzvc(c, t0, RC_W);

L_1F2CE:
    /* 0001f2ce   2  beq 0001f2d2 */
    c->pc = RC_ADDR(0x0001f2ceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1F2D2;

L_1F2D0:
    /* 0001f2d0   2  bra 0001f2c2 */
    c->pc = RC_ADDR(0x0001f2d0u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F2C2;

L_1F2D2:
    /* 0001f2d2   2  bsr 0001f2d6 */
    c->pc = RC_ADDR(0x0001f2d2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0001f2d4u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001f2d6u);
    return;

L_1F2D4:
    /* 0001f2d4   2  bra 0001f2c2 */
    c->pc = RC_ADDR(0x0001f2d4u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_1F2C2;

}
