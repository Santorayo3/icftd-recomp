/* fn_00009de8 - 244 byte(s), 69 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00009de8(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3;

    switch (c->pc)
    {
    case RC_ADDR(0x00009de8u): goto L_9DE8;
    case RC_ADDR(0x00009decu): goto L_9DEC;
    case RC_ADDR(0x00009df0u): goto L_9DF0;
    case RC_ADDR(0x00009df2u): goto L_9DF2;
    case RC_ADDR(0x00009df8u): goto L_9DF8;
    case RC_ADDR(0x00009dfau): goto L_9DFA;
    case RC_ADDR(0x00009dfeu): goto L_9DFE;
    case RC_ADDR(0x00009e00u): goto L_9E00;
    case RC_ADDR(0x00009e04u): goto L_9E04;
    case RC_ADDR(0x00009e06u): goto L_9E06;
    case RC_ADDR(0x00009e0au): goto L_9E0A;
    case RC_ADDR(0x00009e0cu): goto L_9E0C;
    case RC_ADDR(0x00009e10u): goto L_9E10;
    case RC_ADDR(0x00009e14u): goto L_9E14;
    case RC_ADDR(0x00009e16u): goto L_9E16;
    case RC_ADDR(0x00009e1cu): goto L_9E1C;
    case RC_ADDR(0x00009e1eu): goto L_9E1E;
    case RC_ADDR(0x00009e22u): goto L_9E22;
    case RC_ADDR(0x00009e24u): goto L_9E24;
    case RC_ADDR(0x00009e28u): goto L_9E28;
    case RC_ADDR(0x00009e2au): goto L_9E2A;
    case RC_ADDR(0x00009e2eu): goto L_9E2E;
    case RC_ADDR(0x00009e30u): goto L_9E30;
    case RC_ADDR(0x00009e34u): goto L_9E34;
    case RC_ADDR(0x00009e38u): goto L_9E38;
    case RC_ADDR(0x00009e3au): goto L_9E3A;
    case RC_ADDR(0x00009e40u): goto L_9E40;
    case RC_ADDR(0x00009e42u): goto L_9E42;
    case RC_ADDR(0x00009e46u): goto L_9E46;
    case RC_ADDR(0x00009e48u): goto L_9E48;
    case RC_ADDR(0x00009e4cu): goto L_9E4C;
    case RC_ADDR(0x00009e4eu): goto L_9E4E;
    case RC_ADDR(0x00009e52u): goto L_9E52;
    case RC_ADDR(0x00009e54u): goto L_9E54;
    case RC_ADDR(0x00009e58u): goto L_9E58;
    case RC_ADDR(0x00009e5cu): goto L_9E5C;
    case RC_ADDR(0x00009e5eu): goto L_9E5E;
    case RC_ADDR(0x00009e64u): goto L_9E64;
    case RC_ADDR(0x00009e66u): goto L_9E66;
    case RC_ADDR(0x00009e6au): goto L_9E6A;
    case RC_ADDR(0x00009e6cu): goto L_9E6C;
    case RC_ADDR(0x00009e70u): goto L_9E70;
    case RC_ADDR(0x00009e72u): goto L_9E72;
    case RC_ADDR(0x00009e76u): goto L_9E76;
    case RC_ADDR(0x00009e78u): goto L_9E78;
    case RC_ADDR(0x00009e7cu): goto L_9E7C;
    case RC_ADDR(0x00009e80u): goto L_9E80;
    case RC_ADDR(0x00009e82u): goto L_9E82;
    case RC_ADDR(0x00009e86u): goto L_9E86;
    case RC_ADDR(0x00009e8au): goto L_9E8A;
    case RC_ADDR(0x00009e8cu): goto L_9E8C;
    case RC_ADDR(0x00009e90u): goto L_9E90;
    case RC_ADDR(0x00009e96u): goto L_9E96;
    case RC_ADDR(0x00009e98u): goto L_9E98;
    case RC_ADDR(0x00009e9eu): goto L_9E9E;
    case RC_ADDR(0x00009ea4u): goto L_9EA4;
    case RC_ADDR(0x00009ea6u): goto L_9EA6;
    case RC_ADDR(0x00009eacu): goto L_9EAC;
    case RC_ADDR(0x00009eb2u): goto L_9EB2;
    case RC_ADDR(0x00009eb4u): goto L_9EB4;
    case RC_ADDR(0x00009ebau): goto L_9EBA;
    case RC_ADDR(0x00009ec0u): goto L_9EC0;
    case RC_ADDR(0x00009ec2u): goto L_9EC2;
    case RC_ADDR(0x00009ec8u): goto L_9EC8;
    case RC_ADDR(0x00009eccu): goto L_9ECC;
    case RC_ADDR(0x00009ed0u): goto L_9ED0;
    case RC_ADDR(0x00009ed4u): goto L_9ED4;
    case RC_ADDR(0x00009ed8u): goto L_9ED8;
    case RC_ADDR(0x00009edau): goto L_9EDA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_9DE8:
    /* 00009de8   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00009de8u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_9DEC:
    /* 00009dec   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x00009decu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_9DF0:
    /* 00009df0   2  ble 00009e10 */
    c->pc = RC_ADDR(0x00009df0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_9E10;

L_9DF2:
    /* 00009df2   6  cmpi.w #12c,(aca,A4) */
    c->pc = RC_ADDR(0x00009df2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xacau));
    rc_cmp(c, RC_W, t0, 0x0000012cu);

L_9DF8:
    /* 00009df8   2  bge 00009e00 */
    c->pc = RC_ADDR(0x00009df8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_9E00;

L_9DFA:
    /* 00009dfa   4  addq.w #2,(ace,A4) */
    c->pc = RC_ADDR(0x00009dfau);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xaceu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9DFE:
    /* 00009dfe   2  bra 00009e10 */
    c->pc = RC_ADDR(0x00009dfeu);
    rc_step(c, m, 10);
    goto L_9E10;

L_9E00:
    /* 00009e00   4  move.w (ace,A4),D0 */
    c->pc = RC_ADDR(0x00009e00u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9E04:
    /* 00009e04   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009e04u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9E06:
    /* 00009e06   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x00009e06u);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_9E0A:
    /* 00009e0a   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00009e0au);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_9E0C:
    /* 00009e0c   4  sub.w D0,(ace,A4) */
    c->pc = RC_ADDR(0x00009e0cu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xaceu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_9E10:
    /* 00009e10   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x00009e10u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_9E14:
    /* 00009e14   2  bge 00009e34 */
    c->pc = RC_ADDR(0x00009e14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_9E34;

L_9E16:
    /* 00009e16   6  cmpi.w #28,(aca,A4) */
    c->pc = RC_ADDR(0x00009e16u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xacau));
    rc_cmp(c, RC_W, t0, 0x00000028u);

L_9E1C:
    /* 00009e1c   2  ble 00009e24 */
    c->pc = RC_ADDR(0x00009e1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_9E24;

L_9E1E:
    /* 00009e1e   4  subq.w #2,(ace,A4) */
    c->pc = RC_ADDR(0x00009e1eu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xaceu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9E22:
    /* 00009e22   2  bra 00009e34 */
    c->pc = RC_ADDR(0x00009e22u);
    rc_step(c, m, 10);
    goto L_9E34;

L_9E24:
    /* 00009e24   4  move.w (ace,A4),D0 */
    c->pc = RC_ADDR(0x00009e24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9E28:
    /* 00009e28   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009e28u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9E2A:
    /* 00009e2a   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x00009e2au);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_9E2E:
    /* 00009e2e   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00009e2eu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_9E30:
    /* 00009e30   4  sub.w D0,(ace,A4) */
    c->pc = RC_ADDR(0x00009e30u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xaceu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_9E34:
    /* 00009e34   4  tst.w (ffffb24c,A4) */
    c->pc = RC_ADDR(0x00009e34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_set_nzvc(c, t0, RC_W);

L_9E38:
    /* 00009e38   2  ble 00009e58 */
    c->pc = RC_ADDR(0x00009e38u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_9E58;

L_9E3A:
    /* 00009e3a   6  cmpi.w #a0,(acc,A4) */
    c->pc = RC_ADDR(0x00009e3au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaccu));
    rc_cmp(c, RC_W, t0, 0x000000a0u);

L_9E40:
    /* 00009e40   2  bge 00009e48 */
    c->pc = RC_ADDR(0x00009e40u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_9E48;

L_9E42:
    /* 00009e42   4  addq.w #2,(ad0,A4) */
    c->pc = RC_ADDR(0x00009e42u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xad0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000002u;
    rc_flags_add(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9E46:
    /* 00009e46   2  bra 00009e58 */
    c->pc = RC_ADDR(0x00009e46u);
    rc_step(c, m, 10);
    goto L_9E58;

L_9E48:
    /* 00009e48   4  move.w (ad0,A4),D0 */
    c->pc = RC_ADDR(0x00009e48u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xad0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9E4C:
    /* 00009e4c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009e4cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9E4E:
    /* 00009e4e   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x00009e4eu);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_9E52:
    /* 00009e52   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00009e52u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_9E54:
    /* 00009e54   4  sub.w D0,(ad0,A4) */
    c->pc = RC_ADDR(0x00009e54u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xad0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_9E58:
    /* 00009e58   4  tst.w (ffffb24c,A4) */
    c->pc = RC_ADDR(0x00009e58u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_set_nzvc(c, t0, RC_W);

L_9E5C:
    /* 00009e5c   2  bge 00009e7c */
    c->pc = RC_ADDR(0x00009e5cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_9E7C;

L_9E5E:
    /* 00009e5e   6  cmpi.w #46,(acc,A4) */
    c->pc = RC_ADDR(0x00009e5eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaccu));
    rc_cmp(c, RC_W, t0, 0x00000046u);

L_9E64:
    /* 00009e64   2  ble 00009e6c */
    c->pc = RC_ADDR(0x00009e64u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_9E6C;

L_9E66:
    /* 00009e66   4  subq.w #2,(ad0,A4) */
    c->pc = RC_ADDR(0x00009e66u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xad0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_W, t1, 0x00000002u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_9E6A:
    /* 00009e6a   2  bra 00009e7c */
    c->pc = RC_ADDR(0x00009e6au);
    rc_step(c, m, 10);
    goto L_9E7C;

L_9E6C:
    /* 00009e6c   4  move.w (ad0,A4),D0 */
    c->pc = RC_ADDR(0x00009e6cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xad0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9E70:
    /* 00009e70   2  ext.l D0 */
    c->pc = RC_ADDR(0x00009e70u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_9E72:
    /* 00009e72   4  divs.w #4,D0 */
    c->pc = RC_ADDR(0x00009e72u);
    rc_step(c, m, 162);
    t0 = 0x00000004u;
    rc_divs(c, m, 0, t0);

L_9E76:
    /* 00009e76   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00009e76u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_9E78:
    /* 00009e78   4  sub.w D0,(ad0,A4) */
    c->pc = RC_ADDR(0x00009e78u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xad0u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_W);
    rc_flags_sub(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_9E7C:
    /* 00009e7c   4  tst.w (ffffb24a,A4) */
    c->pc = RC_ADDR(0x00009e7cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db6u));
    rc_set_nzvc(c, t0, RC_W);

L_9E80:
    /* 00009e80   2  bne 00009e86 */
    c->pc = RC_ADDR(0x00009e80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9E86;

L_9E82:
    /* 00009e82   4  clr.w (ace,A4) */
    c->pc = RC_ADDR(0x00009e82u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xaceu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9E86:
    /* 00009e86   4  tst.w (ffffb24c,A4) */
    c->pc = RC_ADDR(0x00009e86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x4db4u));
    rc_set_nzvc(c, t0, RC_W);

L_9E8A:
    /* 00009e8a   2  bne 00009e90 */
    c->pc = RC_ADDR(0x00009e8au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_9E90;

L_9E8C:
    /* 00009e8c   4  clr.w (ad0,A4) */
    c->pc = RC_ADDR(0x00009e8cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0xad0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_9E90:
    /* 00009e90   6  cmpi.w #fff8,(ace,A4) */
    c->pc = RC_ADDR(0x00009e90u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaceu));
    rc_cmp(c, RC_W, t0, 0x0000fff8u);

L_9E96:
    /* 00009e96   2  bge 00009e9e */
    c->pc = RC_ADDR(0x00009e96u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_9E9E;

L_9E98:
    /* 00009e98   6  move.w #fff8,(ace,A4) */
    c->pc = RC_ADDR(0x00009e98u);
    rc_step(c, m, 16);
    t0 = 0x0000fff8u;
    rc_wr16(c, m, (c->a[4] + 0xaceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9E9E:
    /* 00009e9e   6  cmpi.w #8,(ace,A4) */
    c->pc = RC_ADDR(0x00009e9eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaceu));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_9EA4:
    /* 00009ea4   2  ble 00009eac */
    c->pc = RC_ADDR(0x00009ea4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_9EAC;

L_9EA6:
    /* 00009ea6   6  move.w #8,(ace,A4) */
    c->pc = RC_ADDR(0x00009ea6u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0xaceu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9EAC:
    /* 00009eac   6  cmpi.w #fff8,(ad0,A4) */
    c->pc = RC_ADDR(0x00009eacu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xad0u));
    rc_cmp(c, RC_W, t0, 0x0000fff8u);

L_9EB2:
    /* 00009eb2   2  bge 00009eba */
    c->pc = RC_ADDR(0x00009eb2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_9EBA;

L_9EB4:
    /* 00009eb4   6  move.w #fff8,(ad0,A4) */
    c->pc = RC_ADDR(0x00009eb4u);
    rc_step(c, m, 16);
    t0 = 0x0000fff8u;
    rc_wr16(c, m, (c->a[4] + 0xad0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9EBA:
    /* 00009eba   6  cmpi.w #8,(ad0,A4) */
    c->pc = RC_ADDR(0x00009ebau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0xad0u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_9EC0:
    /* 00009ec0   2  ble 00009ec8 */
    c->pc = RC_ADDR(0x00009ec0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_9EC8;

L_9EC2:
    /* 00009ec2   6  move.w #8,(ad0,A4) */
    c->pc = RC_ADDR(0x00009ec2u);
    rc_step(c, m, 16);
    t0 = 0x00000008u;
    rc_wr16(c, m, (c->a[4] + 0xad0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_9EC8:
    /* 00009ec8   4  move.w (ace,A4),D0 */
    c->pc = RC_ADDR(0x00009ec8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xaceu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9ECC:
    /* 00009ecc   4  add.w D0,(aca,A4) */
    c->pc = RC_ADDR(0x00009eccu);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xacau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_9ED0:
    /* 00009ed0   4  move.w (ad0,A4),D0 */
    c->pc = RC_ADDR(0x00009ed0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0xad0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_9ED4:
    /* 00009ed4   4  add.w D0,(acc,A4) */
    c->pc = RC_ADDR(0x00009ed4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0xaccu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_9ED8:
    /* 00009ed8   2  unlk A5 */
    c->pc = RC_ADDR(0x00009ed8u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_9EDA:
    /* 00009eda   2  rts */
    c->pc = RC_ADDR(0x00009edau);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
