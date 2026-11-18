/* fn_0001a0f8 - 74 byte(s), 20 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0001a0f8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x0001a0f8u): goto L_1A0F8;
    case RC_ADDR(0x0001a0fcu): goto L_1A0FC;
    case RC_ADDR(0x0001a100u): goto L_1A100;
    case RC_ADDR(0x0001a102u): goto L_1A102;
    case RC_ADDR(0x0001a108u): goto L_1A108;
    case RC_ADDR(0x0001a10au): goto L_1A10A;
    case RC_ADDR(0x0001a10eu): goto L_1A10E;
    case RC_ADDR(0x0001a110u): goto L_1A110;
    case RC_ADDR(0x0001a114u): goto L_1A114;
    case RC_ADDR(0x0001a11au): goto L_1A11A;
    case RC_ADDR(0x0001a11cu): goto L_1A11C;
    case RC_ADDR(0x0001a120u): goto L_1A120;
    case RC_ADDR(0x0001a126u): goto L_1A126;
    case RC_ADDR(0x0001a128u): goto L_1A128;
    case RC_ADDR(0x0001a12cu): goto L_1A12C;
    case RC_ADDR(0x0001a132u): goto L_1A132;
    case RC_ADDR(0x0001a134u): goto L_1A134;
    case RC_ADDR(0x0001a13au): goto L_1A13A;
    case RC_ADDR(0x0001a13eu): goto L_1A13E;
    case RC_ADDR(0x0001a140u): goto L_1A140;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_1A0F8:
    /* 0001a0f8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0001a0f8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_1A0FC:
    /* 0001a0fc   4  tst.w (26e4,A4) */
    c->pc = RC_ADDR(0x0001a0fcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26e4u));
    rc_set_nzvc(c, t0, RC_W);

L_1A100:
    /* 0001a100   2  bne 0001a10a */
    c->pc = RC_ADDR(0x0001a100u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_1A10A;

L_1A102:
    /* 0001a102   6  cmpi.w #2,(26e6,A4) */
    c->pc = RC_ADDR(0x0001a102u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26e6u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_1A108:
    /* 0001a108   2  blt 0001a128 */
    c->pc = RC_ADDR(0x0001a108u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_1A128;

L_1A10A:
    /* 0001a10a   4  tst.w (2970,A4) */
    c->pc = RC_ADDR(0x0001a10au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x2970u));
    rc_set_nzvc(c, t0, RC_W);

L_1A10E:
    /* 0001a10e   2  beq 0001a114 */
    c->pc = RC_ADDR(0x0001a10eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_1A114;

L_1A110:
    /* 0001a110   4  addq.w #1,(26e8,A4) */
    c->pc = RC_ADDR(0x0001a110u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x26e8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A114:
    /* 0001a114   6  cmpi.w #20,(26e8,A4) */
    c->pc = RC_ADDR(0x0001a114u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x26e8u));
    rc_cmp(c, RC_W, t0, 0x00000020u);

L_1A11A:
    /* 0001a11a   2  ble 0001a126 */
    c->pc = RC_ADDR(0x0001a11au);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A126;

L_1A11C:
    /* 0001a11c   4  clr.w (856,A4) */
    c->pc = RC_ADDR(0x0001a11cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x856u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A120:
    /* 0001a120   6  move.w #64,(1116,A4) */
    c->pc = RC_ADDR(0x0001a120u);
    rc_step(c, m, 16);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[4] + 0x1116u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A126:
    /* 0001a126   2  bra 0001a12c */
    c->pc = RC_ADDR(0x0001a126u);
    rc_step(c, m, 10);
    goto L_1A12C;

L_1A128:
    /* 0001a128   4  clr.w (26e8,A4) */
    c->pc = RC_ADDR(0x0001a128u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x26e8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_1A12C:
    /* 0001a12c   6  cmpi.w #1b8,(e78,A4) */
    c->pc = RC_ADDR(0x0001a12cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xe78u));
    rc_cmp(c, RC_W, t0, 0x000001b8u);

L_1A132:
    /* 0001a132   2  ble 0001a13e */
    c->pc = RC_ADDR(0x0001a132u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_1A13E;

L_1A134:
    /* 0001a134   6  move.w #1,(856,A4) */
    c->pc = RC_ADDR(0x0001a134u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x856u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_1A13A:
    /* 0001a13a   4  addq.w #1,(1116,A4) */
    c->pc = RC_ADDR(0x0001a13au);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x1116u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_1A13E:
    /* 0001a13e   2  unlk A5 */
    c->pc = RC_ADDR(0x0001a13eu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_1A140:
    /* 0001a140   2  rts */
    c->pc = RC_ADDR(0x0001a140u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
