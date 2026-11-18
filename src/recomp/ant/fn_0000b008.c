/* fn_0000b008 - 54 byte(s), 15 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_0000b008(cpu_t *c, rt_machine *m)
{
    u32 t0, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x0000b008u): goto L_B008;
    case RC_ADDR(0x0000b00cu): goto L_B00C;
    case RC_ADDR(0x0000b00eu): goto L_B00E;
    case RC_ADDR(0x0000b012u): goto L_B012;
    case RC_ADDR(0x0000b014u): goto L_B014;
    case RC_ADDR(0x0000b018u): goto L_B018;
    case RC_ADDR(0x0000b01eu): goto L_B01E;
    case RC_ADDR(0x0000b022u): goto L_B022;
    case RC_ADDR(0x0000b026u): goto L_B026;
    case RC_ADDR(0x0000b02au): goto L_B02A;
    case RC_ADDR(0x0000b02eu): goto L_B02E;
    case RC_ADDR(0x0000b032u): goto L_B032;
    case RC_ADDR(0x0000b036u): goto L_B036;
    case RC_ADDR(0x0000b03au): goto L_B03A;
    case RC_ADDR(0x0000b03cu): goto L_B03C;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B008:
    /* 0000b008   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x0000b008u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_B00C:
    /* 0000b00c   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0000b00cu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_B00E:
    /* 0000b00e   4  move.w (12,A5),D0 */
    c->pc = RC_ADDR(0x0000b00eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_B012:
    /* 0000b012   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x0000b012u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_B014:
    /* 0000b014   4  lea (ce2,A4),A0 */
    c->pc = RC_ADDR(0x0000b014u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0xce2u);

L_B018:
    /* 0000b018   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000b018u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_B01E:
    /* 0000b01e   4  move.w (14,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b01eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B022:
    /* 0000b022   4  move.w (12,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b022u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B026:
    /* 0000b026   4  move.l (e,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b026u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0xeu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B02A:
    /* 0000b02a   4  move.w (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b02au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_B02E:
    /* 0000b02e   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000b02eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B032:
    /* 0000b032   4  jsr (0000af2c) */
    c->pc = RC_ADDR(0x0000b032u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000b036u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000af2cu);
    return;

L_B036:
    /* 0000b036   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000b036u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_B03A:
    /* 0000b03a   2  unlk A5 */
    c->pc = RC_ADDR(0x0000b03au);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_B03C:
    /* 0000b03c   2  rts */
    c->pc = RC_ADDR(0x0000b03cu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
