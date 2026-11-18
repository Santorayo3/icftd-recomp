/* fn_00010efe - 30 byte(s), 11 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010efe(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00010efeu): goto L_10EFE;
    case RC_ADDR(0x00010f02u): goto L_10F02;
    case RC_ADDR(0x00010f04u): goto L_10F04;
    case RC_ADDR(0x00010f06u): goto L_10F06;
    case RC_ADDR(0x00010f08u): goto L_10F08;
    case RC_ADDR(0x00010f0cu): goto L_10F0C;
    case RC_ADDR(0x00010f0eu): goto L_10F0E;
    case RC_ADDR(0x00010f10u): goto L_10F10;
    case RC_ADDR(0x00010f14u): goto L_10F14;
    case RC_ADDR(0x00010f16u): goto L_10F16;
    case RC_ADDR(0x00010f1au): goto L_10F1A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10EFE:
    /* 00010efe   4  movem.l { D7 A6 },-(SP) */
    c->pc = RC_ADDR(0x00010efeu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[1]);
    c->a[7] = t3;

L_10F02:
    /* 00010f02   2  clr.w D1 */
    c->pc = RC_ADDR(0x00010f02u);
    rc_step(c, m, 4);
    rc_d_set(c, 1, RC_W, 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10F04:
    /* 00010f04   2  move.b D0,D1 */
    c->pc = RC_ADDR(0x00010f04u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_B);
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_10F06:
    /* 00010f06   2  asl.w #2,D1 */
    c->pc = RC_ADDR(0x00010f06u);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_W), RC_W));

L_10F08:
    /* 00010f08   4  lea (28,A6,D1.w),A0 */
    c->pc = RC_ADDR(0x00010f08u);
    rc_step(c, m, 12);
    t4 = rc_ext(c->d[1], RC_W);
    c->a[0] = (c->a[6] + 0x28u + t4);

L_10F0C:
    /* 00010f0c   2  tst.w (A0) */
    c->pc = RC_ADDR(0x00010f0cu);
    rc_step(c, m, 8);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_W);

L_10F0E:
    /* 00010f0e   2  beq 00010f16 */
    c->pc = RC_ADDR(0x00010f0eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_10F16;

L_10F10:
    /* 00010f10   4  bsr 00010e24 */
    c->pc = RC_ADDR(0x00010f10u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00010f14u));
    rc_depth++;
    c->pc = RC_ADDR(0x00010e24u);
    return;

L_10F14:
    /* 00010f14   2  clr.w (A0) */
    c->pc = RC_ADDR(0x00010f14u);
    rc_step(c, m, 12);
    rc_wr16(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_10F16:
    /* 00010f16   4  movem.l (SP)+,{ D1 A0 } */
    c->pc = RC_ADDR(0x00010f16u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[1] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_10F1A:
    /* 00010f1a   2  rts */
    c->pc = RC_ADDR(0x00010f1au);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
