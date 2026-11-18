/* fn_00016128 - 62 byte(s), 14 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00016128(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00016128u): goto L_16128;
    case RC_ADDR(0x0001612cu): goto L_1612C;
    case RC_ADDR(0x00016132u): goto L_16132;
    case RC_ADDR(0x00016138u): goto L_16138;
    case RC_ADDR(0x0001613cu): goto L_1613C;
    case RC_ADDR(0x00016142u): goto L_16142;
    case RC_ADDR(0x00016148u): goto L_16148;
    case RC_ADDR(0x0001614eu): goto L_1614E;
    case RC_ADDR(0x00016154u): goto L_16154;
    case RC_ADDR(0x00016158u): goto L_16158;
    case RC_ADDR(0x0001615cu): goto L_1615C;
    case RC_ADDR(0x0001615eu): goto L_1615E;
    case RC_ADDR(0x00016162u): goto L_16162;
    case RC_ADDR(0x00016164u): goto L_16164;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16128:
    /* 00016128   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00016128u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_1612C:
    /* 0001612c   6  move.w #3e8,(1b4e,A4) */
    c->pc = RC_ADDR(0x0001612cu);
    rc_step(c, m, 16);
    t0 = 0x000003e8u;
    rc_wr16(c, m, (c->a[4] + 0x1b4eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16132:
    /* 00016132   6  move.w #3e8,(1b50,A4) */
    c->pc = RC_ADDR(0x00016132u);
    rc_step(c, m, 16);
    t0 = 0x000003e8u;
    rc_wr16(c, m, (c->a[4] + 0x1b50u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16138:
    /* 00016138   4  clr.w (1b8c,A4) */
    c->pc = RC_ADDR(0x00016138u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b8cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1613C:
    /* 0001613c   6  move.w #1,(14f4,A4) */
    c->pc = RC_ADDR(0x0001613cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x14f4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16142:
    /* 00016142   6  move.w #f,(1b62,A4) */
    c->pc = RC_ADDR(0x00016142u);
    rc_step(c, m, 16);
    t0 = 0x0000000fu;
    rc_wr16(c, m, (c->a[4] + 0x1b62u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16148:
    /* 00016148   6  move.w #a,(1b64,A4) */
    c->pc = RC_ADDR(0x00016148u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    rc_wr16(c, m, (c->a[4] + 0x1b64u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1614E:
    /* 0001614e   6  move.w #1,(1b66,A4) */
    c->pc = RC_ADDR(0x0001614eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x1b66u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16154:
    /* 00016154   4  clr.w (1b8e,A4) */
    c->pc = RC_ADDR(0x00016154u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x1b8eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16158:
    /* 00016158   4  tst.w (1b60,A4) */
    c->pc = RC_ADDR(0x00016158u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1b60u));
    rc_set_nzvc(c, t0, RC_W);

L_1615C:
    /* 0001615c   2  beq 00016162 */
    c->pc = RC_ADDR(0x0001615cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16162;

L_1615E:
    /* 0001615e   4  subq.w #1,(1b60,A4) */
    c->pc = RC_ADDR(0x0001615eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1b60u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16162:
    /* 00016162   2  unlk A5 */
    c->pc = RC_ADDR(0x00016162u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16164:
    /* 00016164   2  rts */
    c->pc = RC_ADDR(0x00016164u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
