/* fn_00021e8a - 102 byte(s), 27 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00021e8a(cpu_t *c, rt_machine *m)
{
    u32 t0, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00021e8au): goto L_21E8A;
    case RC_ADDR(0x00021e8eu): goto L_21E8E;
    case RC_ADDR(0x00021e92u): goto L_21E92;
    case RC_ADDR(0x00021e96u): goto L_21E96;
    case RC_ADDR(0x00021e9au): goto L_21E9A;
    case RC_ADDR(0x00021e9eu): goto L_21E9E;
    case RC_ADDR(0x00021ea2u): goto L_21EA2;
    case RC_ADDR(0x00021ea6u): goto L_21EA6;
    case RC_ADDR(0x00021eaau): goto L_21EAA;
    case RC_ADDR(0x00021eaeu): goto L_21EAE;
    case RC_ADDR(0x00021eb2u): goto L_21EB2;
    case RC_ADDR(0x00021eb6u): goto L_21EB6;
    case RC_ADDR(0x00021eb8u): goto L_21EB8;
    case RC_ADDR(0x00021ebcu): goto L_21EBC;
    case RC_ADDR(0x00021ec2u): goto L_21EC2;
    case RC_ADDR(0x00021ec4u): goto L_21EC4;
    case RC_ADDR(0x00021ec8u): goto L_21EC8;
    case RC_ADDR(0x00021eccu): goto L_21ECC;
    case RC_ADDR(0x00021ed0u): goto L_21ED0;
    case RC_ADDR(0x00021ed4u): goto L_21ED4;
    case RC_ADDR(0x00021ed8u): goto L_21ED8;
    case RC_ADDR(0x00021edcu): goto L_21EDC;
    case RC_ADDR(0x00021ee0u): goto L_21EE0;
    case RC_ADDR(0x00021ee4u): goto L_21EE4;
    case RC_ADDR(0x00021ee8u): goto L_21EE8;
    case RC_ADDR(0x00021eecu): goto L_21EEC;
    case RC_ADDR(0x00021eeeu): goto L_21EEE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_21E8A:
    /* 00021e8a   4  link.w A5,#fffffffe */
    c->pc = RC_ADDR(0x00021e8au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2u;

L_21E8E:
    /* 00021e8e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00021e8eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_21E92:
    /* 00021e92   4  move.w (12,A0),-(A7) */
    c->pc = RC_ADDR(0x00021e92u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[0] + 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21E96:
    /* 00021e96   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00021e96u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_21E9A:
    /* 00021e9a   4  pea (14,A0) */
    c->pc = RC_ADDR(0x00021e9au);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x14u));

L_21E9E:
    /* 00021e9e   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00021e9eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_21EA2:
    /* 00021ea2   4  move.l (4,A0),-(A7) */
    c->pc = RC_ADDR(0x00021ea2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21EA6:
    /* 00021ea6   4  jsr (00021e1c) */
    c->pc = RC_ADDR(0x00021ea6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021eaau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021e1cu);
    return;

L_21EAA:
    /* 00021eaa   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00021eaau);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_21EAE:
    /* 00021eae   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00021eaeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21EB2:
    /* 00021eb2   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00021eb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_21EB6:
    /* 00021eb6   2  beq 00021ee8 */
    c->pc = RC_ADDR(0x00021eb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21EE8;

L_21EB8:
    /* 00021eb8   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00021eb8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_21EBC:
    /* 00021ebc   6  btst #2,(11,A0) */
    c->pc = RC_ADDR(0x00021ebcu);
    rc_step(c, m, 16);
    t3 = (c->a[0] + 0x11u);
    t4 = 0x00000002u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_21EC2:
    /* 00021ec2   2  beq 00021ee8 */
    c->pc = RC_ADDR(0x00021ec2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_21EE8;

L_21EC4:
    /* 00021ec4   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00021ec4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_21EC8:
    /* 00021ec8   4  move.w (12,A0),-(A7) */
    c->pc = RC_ADDR(0x00021ec8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[0] + 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_21ECC:
    /* 00021ecc   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00021eccu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_21ED0:
    /* 00021ed0   4  pea (94,A0) */
    c->pc = RC_ADDR(0x00021ed0u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0x94u));

L_21ED4:
    /* 00021ed4   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00021ed4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_21ED8:
    /* 00021ed8   4  move.l (8,A0),-(A7) */
    c->pc = RC_ADDR(0x00021ed8u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_21EDC:
    /* 00021edc   4  jsr (00021e1c) */
    c->pc = RC_ADDR(0x00021edcu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00021ee0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021e1cu);
    return;

L_21EE0:
    /* 00021ee0   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00021ee0u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xau);

L_21EE4:
    /* 00021ee4   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00021ee4u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_21EE8:
    /* 00021ee8   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00021ee8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21EEC:
    /* 00021eec   2  unlk A5 */
    c->pc = RC_ADDR(0x00021eecu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21EEE:
    /* 00021eee   2  rts */
    c->pc = RC_ADDR(0x00021eeeu);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
