/* fn_00010f1c - 24 byte(s), 7 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00010f1c(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00010f1cu): goto L_10F1C;
    case RC_ADDR(0x00010f20u): goto L_10F20;
    case RC_ADDR(0x00010f22u): goto L_10F22;
    case RC_ADDR(0x00010f24u): goto L_10F24;
    case RC_ADDR(0x00010f28u): goto L_10F28;
    case RC_ADDR(0x00010f2eu): goto L_10F2E;
    case RC_ADDR(0x00010f32u): goto L_10F32;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_10F1C:
    /* 00010f1c   4  movem.l { D7 A7 },-(SP) */
    c->pc = RC_ADDR(0x00010f1cu);
    rc_step(c, m, 8);
    t3 = c->a[7];
    t3 -= 4u;
    rc_wr32(c, m, t3, c->a[0]);
    t3 -= 4u;
    rc_wr32(c, m, t3, c->d[0]);
    c->a[7] = t3;

L_10F20:
    /* 00010f20   2  ext.w D0 */
    c->pc = RC_ADDR(0x00010f20u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_10F22:
    /* 00010f22   2  asl.w #2,D0 */
    c->pc = RC_ADDR(0x00010f22u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_W), RC_W));

L_10F24:
    /* 00010f24   4  movea.l (6,A6),A0 */
    c->pc = RC_ADDR(0x00010f24u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[6] + 0x6u));
    c->a[0] = t0;

L_10F28:
    /* 00010f28   6  move.w (22,A0,D0.w),(28,A6,D0.w) */
    c->pc = RC_ADDR(0x00010f28u);
    rc_step(c, m, 24);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (c->a[0] + 0x22u + t4));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr16(c, m, (c->a[6] + 0x28u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_10F2E:
    /* 00010f2e   4  movem.l (SP)+,{ D0 A0 } */
    c->pc = RC_ADDR(0x00010f2eu);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t3 = t3;
    t0 = rc_rd32(c, m, t3);
    c->d[0] = t0;
    t3 += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;
    t3 += 4u;
    c->a[7] = t3;

L_10F32:
    /* 00010f32   2  rts */
    c->pc = RC_ADDR(0x00010f32u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
