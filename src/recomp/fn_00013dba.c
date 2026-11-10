/* fn_00013dba - 572 byte(s), 159 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00013dba(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case 0x00013dbau: goto L_13DBA;
    case 0x00013dbeu: goto L_13DBE;
    case 0x00013dc2u: goto L_13DC2;
    case 0x00013dc6u: goto L_13DC6;
    case 0x00013dcau: goto L_13DCA;
    case 0x00013dceu: goto L_13DCE;
    case 0x00013dd2u: goto L_13DD2;
    case 0x00013dd6u: goto L_13DD6;
    case 0x00013dd8u: goto L_13DD8;
    case 0x00013ddcu: goto L_13DDC;
    case 0x00013de0u: goto L_13DE0;
    case 0x00013de4u: goto L_13DE4;
    case 0x00013de8u: goto L_13DE8;
    case 0x00013decu: goto L_13DEC;
    case 0x00013deeu: goto L_13DEE;
    case 0x00013df2u: goto L_13DF2;
    case 0x00013df6u: goto L_13DF6;
    case 0x00013dfau: goto L_13DFA;
    case 0x00013dfeu: goto L_13DFE;
    case 0x00013e02u: goto L_13E02;
    case 0x00013e06u: goto L_13E06;
    case 0x00013e0au: goto L_13E0A;
    case 0x00013e0eu: goto L_13E0E;
    case 0x00013e10u: goto L_13E10;
    case 0x00013e12u: goto L_13E12;
    case 0x00013e14u: goto L_13E14;
    case 0x00013e18u: goto L_13E18;
    case 0x00013e1cu: goto L_13E1C;
    case 0x00013e1eu: goto L_13E1E;
    case 0x00013e22u: goto L_13E22;
    case 0x00013e26u: goto L_13E26;
    case 0x00013e2au: goto L_13E2A;
    case 0x00013e2eu: goto L_13E2E;
    case 0x00013e32u: goto L_13E32;
    case 0x00013e34u: goto L_13E34;
    case 0x00013e36u: goto L_13E36;
    case 0x00013e38u: goto L_13E38;
    case 0x00013e3cu: goto L_13E3C;
    case 0x00013e40u: goto L_13E40;
    case 0x00013e44u: goto L_13E44;
    case 0x00013e48u: goto L_13E48;
    case 0x00013e4cu: goto L_13E4C;
    case 0x00013e50u: goto L_13E50;
    case 0x00013e54u: goto L_13E54;
    case 0x00013e58u: goto L_13E58;
    case 0x00013e5cu: goto L_13E5C;
    case 0x00013e60u: goto L_13E60;
    case 0x00013e64u: goto L_13E64;
    case 0x00013e66u: goto L_13E66;
    case 0x00013e6au: goto L_13E6A;
    case 0x00013e6eu: goto L_13E6E;
    case 0x00013e72u: goto L_13E72;
    case 0x00013e76u: goto L_13E76;
    case 0x00013e7au: goto L_13E7A;
    case 0x00013e7eu: goto L_13E7E;
    case 0x00013e82u: goto L_13E82;
    case 0x00013e84u: goto L_13E84;
    case 0x00013e88u: goto L_13E88;
    case 0x00013e8cu: goto L_13E8C;
    case 0x00013e8eu: goto L_13E8E;
    case 0x00013e90u: goto L_13E90;
    case 0x00013e92u: goto L_13E92;
    case 0x00013e94u: goto L_13E94;
    case 0x00013e98u: goto L_13E98;
    case 0x00013e9cu: goto L_13E9C;
    case 0x00013ea2u: goto L_13EA2;
    case 0x00013ea6u: goto L_13EA6;
    case 0x00013eaau: goto L_13EAA;
    case 0x00013eb0u: goto L_13EB0;
    case 0x00013eb4u: goto L_13EB4;
    case 0x00013eb6u: goto L_13EB6;
    case 0x00013eb8u: goto L_13EB8;
    case 0x00013ebcu: goto L_13EBC;
    case 0x00013ec2u: goto L_13EC2;
    case 0x00013ec6u: goto L_13EC6;
    case 0x00013ec8u: goto L_13EC8;
    case 0x00013ecau: goto L_13ECA;
    case 0x00013eceu: goto L_13ECE;
    case 0x00013ed4u: goto L_13ED4;
    case 0x00013ed8u: goto L_13ED8;
    case 0x00013edcu: goto L_13EDC;
    case 0x00013edeu: goto L_13EDE;
    case 0x00013ee2u: goto L_13EE2;
    case 0x00013ee8u: goto L_13EE8;
    case 0x00013eecu: goto L_13EEC;
    case 0x00013eeeu: goto L_13EEE;
    case 0x00013ef2u: goto L_13EF2;
    case 0x00013ef6u: goto L_13EF6;
    case 0x00013efau: goto L_13EFA;
    case 0x00013efeu: goto L_13EFE;
    case 0x00013f00u: goto L_13F00;
    case 0x00013f02u: goto L_13F02;
    case 0x00013f06u: goto L_13F06;
    case 0x00013f0au: goto L_13F0A;
    case 0x00013f0eu: goto L_13F0E;
    case 0x00013f10u: goto L_13F10;
    case 0x00013f12u: goto L_13F12;
    case 0x00013f18u: goto L_13F18;
    case 0x00013f1cu: goto L_13F1C;
    case 0x00013f1eu: goto L_13F1E;
    case 0x00013f22u: goto L_13F22;
    case 0x00013f24u: goto L_13F24;
    case 0x00013f2au: goto L_13F2A;
    case 0x00013f2cu: goto L_13F2C;
    case 0x00013f30u: goto L_13F30;
    case 0x00013f34u: goto L_13F34;
    case 0x00013f36u: goto L_13F36;
    case 0x00013f38u: goto L_13F38;
    case 0x00013f3cu: goto L_13F3C;
    case 0x00013f40u: goto L_13F40;
    case 0x00013f44u: goto L_13F44;
    case 0x00013f46u: goto L_13F46;
    case 0x00013f48u: goto L_13F48;
    case 0x00013f4eu: goto L_13F4E;
    case 0x00013f52u: goto L_13F52;
    case 0x00013f54u: goto L_13F54;
    case 0x00013f58u: goto L_13F58;
    case 0x00013f5au: goto L_13F5A;
    case 0x00013f5eu: goto L_13F5E;
    case 0x00013f60u: goto L_13F60;
    case 0x00013f64u: goto L_13F64;
    case 0x00013f66u: goto L_13F66;
    case 0x00013f6au: goto L_13F6A;
    case 0x00013f6cu: goto L_13F6C;
    case 0x00013f6eu: goto L_13F6E;
    case 0x00013f72u: goto L_13F72;
    case 0x00013f76u: goto L_13F76;
    case 0x00013f7au: goto L_13F7A;
    case 0x00013f7cu: goto L_13F7C;
    case 0x00013f7eu: goto L_13F7E;
    case 0x00013f82u: goto L_13F82;
    case 0x00013f88u: goto L_13F88;
    case 0x00013f8eu: goto L_13F8E;
    case 0x00013f92u: goto L_13F92;
    case 0x00013f98u: goto L_13F98;
    case 0x00013f9cu: goto L_13F9C;
    case 0x00013fa0u: goto L_13FA0;
    case 0x00013fa4u: goto L_13FA4;
    case 0x00013fa6u: goto L_13FA6;
    case 0x00013fa8u: goto L_13FA8;
    case 0x00013facu: goto L_13FAC;
    case 0x00013fb0u: goto L_13FB0;
    case 0x00013fb2u: goto L_13FB2;
    case 0x00013fb6u: goto L_13FB6;
    case 0x00013fb8u: goto L_13FB8;
    case 0x00013fbeu: goto L_13FBE;
    case 0x00013fc2u: goto L_13FC2;
    case 0x00013fc8u: goto L_13FC8;
    case 0x00013fcau: goto L_13FCA;
    case 0x00013fceu: goto L_13FCE;
    case 0x00013fd2u: goto L_13FD2;
    case 0x00013fd8u: goto L_13FD8;
    case 0x00013fdau: goto L_13FDA;
    case 0x00013fdeu: goto L_13FDE;
    case 0x00013fe2u: goto L_13FE2;
    case 0x00013fe6u: goto L_13FE6;
    case 0x00013feau: goto L_13FEA;
    case 0x00013feeu: goto L_13FEE;
    case 0x00013ff2u: goto L_13FF2;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_13DBA:
    /* 00013dba   4  link.w A5,#ffffffee */
    c->pc = 0x00013dbau;
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x12u;

L_13DBE:
    /* 00013dbe   4  clr.w (ffffffee,A5) */
    c->pc = 0x00013dbeu;
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13DC2:
    /* 00013dc2   4  clr.w (fffffffa,A5) */
    c->pc = 0x00013dc2u;
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13DC6:
    /* 00013dc6   4  bra 00013fe2 */
    c->pc = 0x00013dc6u;
    goto L_13FE2;

L_13DCA:
    /* 00013dca   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x00013dcau;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DCE:
    /* 00013dce   4  muls.w #16,D0 */
    c->pc = 0x00013dceu;
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_13DD2:
    /* 00013dd2   4  lea (fffff37c,A4),A0 */
    c->pc = 0x00013dd2u;
    c->a[0] = (c->a[4] - 0xc84u);

L_13DD6:
    /* 00013dd6   2  add.l A0,D0 */
    c->pc = 0x00013dd6u;
    t0 = rc_a_get(c, 0, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_13DD8:
    /* 00013dd8   4  move.l D0,(fffffffc,A5) */
    c->pc = 0x00013dd8u;
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_13DDC:
    /* 00013ddc   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00013ddcu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13DE0:
    /* 00013de0   4  tst.b (13,A0) */
    c->pc = 0x00013de0u;
    t0 = rc_rd8(c, m, (c->a[0] + 0x13u));
    rc_set_nzvc(c, t0, RC_B);

L_13DE4:
    /* 00013de4   4  beq 00013fde */
    c->pc = 0x00013de4u;
    if (rc_cond(c, 7)) goto L_13FDE;

L_13DE8:
    /* 00013de8   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00013de8u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13DEC:
    /* 00013dec   2  move.w (A0),D0 */
    c->pc = 0x00013decu;
    t0 = rc_rd16(c, m, c->a[0]);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DEE:
    /* 00013dee   4  add.w (c,A5),D0 */
    c->pc = 0x00013deeu;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13DF2:
    /* 00013df2   4  move.w D0,(fffffff8,A5) */
    c->pc = 0x00013df2u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DF6:
    /* 00013df6   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00013df6u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13DFA:
    /* 00013dfa   4  move.w (2,A0),D0 */
    c->pc = 0x00013dfau;
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13DFE:
    /* 00013dfe   4  add.w (e,A5),D0 */
    c->pc = 0x00013dfeu;
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13E02:
    /* 00013e02   4  move.w D0,(fffffff6,A5) */
    c->pc = 0x00013e02u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E06:
    /* 00013e06   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00013e06u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13E0A:
    /* 00013e0a   4  move.b (d,A0),D0 */
    c->pc = 0x00013e0au;
    t0 = rc_rd8(c, m, (c->a[0] + 0xdu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13E0E:
    /* 00013e0e   2  ext.w D0 */
    c->pc = 0x00013e0eu;
    rc_ext_w(c, 0);

L_13E10:
    /* 00013e10   2  ext.l D0 */
    c->pc = 0x00013e10u;
    rc_ext_l(c, 0);

L_13E12:
    /* 00013e12   2  asl.l #2,D0 */
    c->pc = 0x00013e12u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_13E14:
    /* 00013e14   4  lea (fffffc14,A4),A0 */
    c->pc = 0x00013e14u;
    c->a[0] = (c->a[4] - 0x3ecu);

L_13E18:
    /* 00013e18   4  movea.l (0,A0,D0.w),A1 */
    c->pc = 0x00013e18u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_13E1C:
    /* 00013e1c   2  moveq #0,D0 */
    c->pc = 0x00013e1cu;
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_13E1E:
    /* 00013e1e   4  move.b (4,A1),D0 */
    c->pc = 0x00013e1eu;
    t0 = rc_rd8(c, m, (c->a[1] + 0x4u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13E22:
    /* 00013e22   4  sub.w (c,A5),D0 */
    c->pc = 0x00013e22u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13E26:
    /* 00013e26   4  move.w D0,(fffffff4,A5) */
    c->pc = 0x00013e26u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E2A:
    /* 00013e2a   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00013e2au;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13E2E:
    /* 00013e2e   4  move.b (d,A0),D0 */
    c->pc = 0x00013e2eu;
    t0 = rc_rd8(c, m, (c->a[0] + 0xdu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13E32:
    /* 00013e32   2  ext.w D0 */
    c->pc = 0x00013e32u;
    rc_ext_w(c, 0);

L_13E34:
    /* 00013e34   2  ext.l D0 */
    c->pc = 0x00013e34u;
    rc_ext_l(c, 0);

L_13E36:
    /* 00013e36   2  asl.l #2,D0 */
    c->pc = 0x00013e36u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_13E38:
    /* 00013e38   4  lea (fffffc14,A4),A0 */
    c->pc = 0x00013e38u;
    c->a[0] = (c->a[4] - 0x3ecu);

L_13E3C:
    /* 00013e3c   4  movea.l (0,A0,D0.w),A1 */
    c->pc = 0x00013e3cu;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[1] = t0;

L_13E40:
    /* 00013e40   4  move.w (2,A1),D0 */
    c->pc = 0x00013e40u;
    t0 = rc_rd16(c, m, (c->a[1] + 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E44:
    /* 00013e44   4  sub.w (e,A5),D0 */
    c->pc = 0x00013e44u;
    t0 = rc_rd16(c, m, (c->a[5] + 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13E48:
    /* 00013e48   4  move.w D0,(fffffff2,A5) */
    c->pc = 0x00013e48u;
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E4C:
    /* 00013e4c   4  move.w (8,A5),D0 */
    c->pc = 0x00013e4cu;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E50:
    /* 00013e50   4  cmp.w (fffffff8,A5),D0 */
    c->pc = 0x00013e50u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13E54:
    /* 00013e54   4  ble 00013fde */
    c->pc = 0x00013e54u;
    if (rc_cond(c, 15)) goto L_13FDE;

L_13E58:
    /* 00013e58   4  move.w (fffffff8,A5),D0 */
    c->pc = 0x00013e58u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E5C:
    /* 00013e5c   4  add.w (fffffff4,A5),D0 */
    c->pc = 0x00013e5cu;
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13E60:
    /* 00013e60   4  move.w (8,A5),D1 */
    c->pc = 0x00013e60u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E64:
    /* 00013e64   2  cmp.w D0,D1 */
    c->pc = 0x00013e64u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13E66:
    /* 00013e66   4  bge 00013fde */
    c->pc = 0x00013e66u;
    if (rc_cond(c, 12)) goto L_13FDE;

L_13E6A:
    /* 00013e6a   4  move.w (a,A5),D0 */
    c->pc = 0x00013e6au;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E6E:
    /* 00013e6e   4  cmp.w (fffffff6,A5),D0 */
    c->pc = 0x00013e6eu;
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13E72:
    /* 00013e72   4  ble 00013fde */
    c->pc = 0x00013e72u;
    if (rc_cond(c, 15)) goto L_13FDE;

L_13E76:
    /* 00013e76   4  move.w (fffffff6,A5),D0 */
    c->pc = 0x00013e76u;
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E7A:
    /* 00013e7a   4  add.w (fffffff2,A5),D0 */
    c->pc = 0x00013e7au;
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_13E7E:
    /* 00013e7e   4  move.w (a,A5),D1 */
    c->pc = 0x00013e7eu;
    t0 = rc_rd16(c, m, (c->a[5] + 0xau));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13E82:
    /* 00013e82   2  cmp.w D0,D1 */
    c->pc = 0x00013e82u;
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13E84:
    /* 00013e84   4  bge 00013fde */
    c->pc = 0x00013e84u;
    if (rc_cond(c, 12)) goto L_13FDE;

L_13E88:
    /* 00013e88   4  tst.w (10,A5) */
    c->pc = 0x00013e88u;
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_13E8C:
    /* 00013e8c   2  beq 00013e94 */
    c->pc = 0x00013e8cu;
    if (rc_cond(c, 7)) goto L_13E94;

L_13E8E:
    /* 00013e8e   2  moveq #1,D0 */
    c->pc = 0x00013e8eu;
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_13E90:
    /* 00013e90   2  unlk A5 */
    c->pc = 0x00013e90u;
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_13E92:
    /* 00013e92   2  rts */
    c->pc = 0x00013e92u;
    rc_ret(c, m);
    return;

L_13E94:
    /* 00013e94   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00013e94u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13E98:
    /* 00013e98   4  clr.b (13,A0) */
    c->pc = 0x00013e98u;
    rc_wr8(c, m, (c->a[0] + 0x13u), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_13E9C:
    /* 00013e9c   6  move.w #1,(ffffffee,A5) */
    c->pc = 0x00013e9cu;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13EA2:
    /* 00013ea2   4  move.w (fffffd4a,A4),D0 */
    c->pc = 0x00013ea2u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x2b6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13EA6:
    /* 00013ea6   4  lea (fffffd2c,A4),A0 */
    c->pc = 0x00013ea6u;
    c->a[0] = (c->a[4] - 0x2d4u);

L_13EAA:
    /* 00013eaa   6  move.b (ffffb155,A4),(0,A0,D0.w) */
    c->pc = 0x00013eaau;
    t0 = rc_rd8(c, m, (c->a[4] - 0x4eabu));
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13EB0:
    /* 00013eb0   4  move.w (fffffd4a,A4),D0 */
    c->pc = 0x00013eb0u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x2b6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13EB4:
    /* 00013eb4   2  ext.l D0 */
    c->pc = 0x00013eb4u;
    rc_ext_l(c, 0);

L_13EB6:
    /* 00013eb6   2  asl.l #1,D0 */
    c->pc = 0x00013eb6u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_13EB8:
    /* 00013eb8   4  lea (fffffcb4,A4),A0 */
    c->pc = 0x00013eb8u;
    c->a[0] = (c->a[4] - 0x34cu);

L_13EBC:
    /* 00013ebc   6  move.w (fffffff8,A5),(0,A0,D0.w) */
    c->pc = 0x00013ebcu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13EC2:
    /* 00013ec2   4  move.w (fffffd4a,A4),D0 */
    c->pc = 0x00013ec2u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x2b6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13EC6:
    /* 00013ec6   2  ext.l D0 */
    c->pc = 0x00013ec6u;
    rc_ext_l(c, 0);

L_13EC8:
    /* 00013ec8   2  asl.l #1,D0 */
    c->pc = 0x00013ec8u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_13ECA:
    /* 00013eca   4  lea (fffffcf0,A4),A0 */
    c->pc = 0x00013ecau;
    c->a[0] = (c->a[4] - 0x310u);

L_13ECE:
    /* 00013ece   6  move.w (fffffff6,A5),(0,A0,D0.w) */
    c->pc = 0x00013eceu;
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13ED4:
    /* 00013ed4   4  addq.w #1,(fffffd82,A4) */
    c->pc = 0x00013ed4u;
    t3 = (c->a[4] - 0x27eu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13ED8:
    /* 00013ed8   4  tst.w (fffffd64,A4) */
    c->pc = 0x00013ed8u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x29cu));
    rc_set_nzvc(c, t0, RC_W);

L_13EDC:
    /* 00013edc   2  beq 00013efa */
    c->pc = 0x00013edcu;
    if (rc_cond(c, 7)) goto L_13EFA;

L_13EDE:
    /* 00013ede   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00013edeu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13EE2:
    /* 00013ee2   6  move.b #ff,(c,A0) */
    c->pc = 0x00013ee2u;
    t0 = 0x000000ffu;
    rc_wr8(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13EE8:
    /* 00013ee8   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00013ee8u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13EEC:
    /* 00013eec   2  clr.w (A0) */
    c->pc = 0x00013eecu;
    rc_wr16(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13EEE:
    /* 00013eee   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00013eeeu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13EF2:
    /* 00013ef2   4  clr.w (2,A0) */
    c->pc = 0x00013ef2u;
    rc_wr16(c, m, (c->a[0] + 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13EF6:
    /* 00013ef6   4  bra 00013fbe */
    c->pc = 0x00013ef6u;
    goto L_13FBE;

L_13EFA:
    /* 00013efa   4  move.w (ffff83c8,A4),D0 */
    c->pc = 0x00013efau;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13EFE:
    /* 00013efe   2  ext.l D0 */
    c->pc = 0x00013efeu;
    rc_ext_l(c, 0);

L_13F00:
    /* 00013f00   2  asl.l #2,D0 */
    c->pc = 0x00013f00u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_13F02:
    /* 00013f02   4  lea (ffff847c,A4),A0 */
    c->pc = 0x00013f02u;
    c->a[0] = (c->a[4] - 0x7b84u);

L_13F06:
    /* 00013f06   4  move.l (0,A0,D0.w),D1 */
    c->pc = 0x00013f06u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13F0A:
    /* 00013f0a   4  move.w (10c4,A4),D0 */
    c->pc = 0x00013f0au;
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F0E:
    /* 00013f0e   2  ext.l D0 */
    c->pc = 0x00013f0eu;
    rc_ext_l(c, 0);

L_13F10:
    /* 00013f10   2  movea.l D0,A0 */
    c->pc = 0x00013f10u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_13F12:
    /* 00013f12   6  move.b (0,A0,D1.w),(fffffff1,A5) */
    c->pc = 0x00013f12u;
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, (c->a[5] - 0xfu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13F18:
    /* 00013f18   4  tst.b (fffffff1,A5) */
    c->pc = 0x00013f18u;
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    rc_set_nzvc(c, t0, RC_B);

L_13F1C:
    /* 00013f1c   2  beq 00013f4e */
    c->pc = 0x00013f1cu;
    if (rc_cond(c, 7)) goto L_13F4E;

L_13F1E:
    /* 00013f1e   4  tst.w (10c8,A4) */
    c->pc = 0x00013f1eu;
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c8u));
    rc_set_nzvc(c, t0, RC_W);

L_13F22:
    /* 00013f22   2  bne 00013f4e */
    c->pc = 0x00013f22u;
    if (rc_cond(c, 6)) goto L_13F4E;

L_13F24:
    /* 00013f24   6  cmpi.b #64,(fffffff1,A5) */
    c->pc = 0x00013f24u;
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_13F2A:
    /* 00013f2a   2  bge 00013f4e */
    c->pc = 0x00013f2au;
    if (rc_cond(c, 12)) goto L_13F4E;

L_13F2C:
    /* 00013f2c   4  subq.b #1,(fffffff1,A5) */
    c->pc = 0x00013f2cu;
    t3 = (c->a[5] - 0xfu);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_B, t1, 0x00000001u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_13F30:
    /* 00013f30   4  move.w (ffff83c8,A4),D0 */
    c->pc = 0x00013f30u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F34:
    /* 00013f34   2  ext.l D0 */
    c->pc = 0x00013f34u;
    rc_ext_l(c, 0);

L_13F36:
    /* 00013f36   2  asl.l #2,D0 */
    c->pc = 0x00013f36u;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_13F38:
    /* 00013f38   4  lea (ffff847c,A4),A0 */
    c->pc = 0x00013f38u;
    c->a[0] = (c->a[4] - 0x7b84u);

L_13F3C:
    /* 00013f3c   4  move.l (0,A0,D0.w),D1 */
    c->pc = 0x00013f3cu;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13F40:
    /* 00013f40   4  move.w (10c4,A4),D0 */
    c->pc = 0x00013f40u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F44:
    /* 00013f44   2  ext.l D0 */
    c->pc = 0x00013f44u;
    rc_ext_l(c, 0);

L_13F46:
    /* 00013f46   2  movea.l D0,A0 */
    c->pc = 0x00013f46u;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_13F48:
    /* 00013f48   6  move.b (fffffff1,A5),(0,A0,D1.w) */
    c->pc = 0x00013f48u;
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    t4 = c->d[1];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13F4E:
    /* 00013f4e   4  tst.b (fffffff1,A5) */
    c->pc = 0x00013f4eu;
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    rc_set_nzvc(c, t0, RC_B);

L_13F52:
    /* 00013f52   2  beq 00013f66 */
    c->pc = 0x00013f52u;
    if (rc_cond(c, 7)) goto L_13F66;

L_13F54:
    /* 00013f54   4  move.b (fffffff1,A5),D0 */
    c->pc = 0x00013f54u;
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_13F58:
    /* 00013f58   2  ext.w D0 */
    c->pc = 0x00013f58u;
    rc_ext_w(c, 0);

L_13F5A:
    /* 00013f5a   4  cmp.w (fffffd6a,A4),D0 */
    c->pc = 0x00013f5au;
    t0 = rc_rd16(c, m, (c->a[4] - 0x296u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13F5E:
    /* 00013f5e   2  bgt 00013fa8 */
    c->pc = 0x00013f5eu;
    if (rc_cond(c, 14)) goto L_13FA8;

L_13F60:
    /* 00013f60   4  tst.w (10c8,A4) */
    c->pc = 0x00013f60u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c8u));
    rc_set_nzvc(c, t0, RC_W);

L_13F64:
    /* 00013f64   2  bne 00013fa8 */
    c->pc = 0x00013f64u;
    if (rc_cond(c, 6)) goto L_13FA8;

L_13F66:
    /* 00013f66   4  move.w (ffff83c8,A4),D0 */
    c->pc = 0x00013f66u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F6A:
    /* 00013f6a   2  ext.l D0 */
    c->pc = 0x00013f6au;
    rc_ext_l(c, 0);

L_13F6C:
    /* 00013f6c   2  asl.l #2,D0 */
    c->pc = 0x00013f6cu;
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_13F6E:
    /* 00013f6e   4  lea (ffff847c,A4),A0 */
    c->pc = 0x00013f6eu;
    c->a[0] = (c->a[4] - 0x7b84u);

L_13F72:
    /* 00013f72   4  move.l (0,A0,D0.w),D1 */
    c->pc = 0x00013f72u;
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_13F76:
    /* 00013f76   4  move.w (10c4,A4),D0 */
    c->pc = 0x00013f76u;
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F7A:
    /* 00013f7a   2  ext.l D0 */
    c->pc = 0x00013f7au;
    rc_ext_l(c, 0);

L_13F7C:
    /* 00013f7c   2  movea.l D0,A0 */
    c->pc = 0x00013f7cu;
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_13F7E:
    /* 00013f7e   4  clr.b (0,A0,D1.w) */
    c->pc = 0x00013f7eu;
    t4 = c->d[1];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_13F82:
    /* 00013f82   6  move.w #1,(fffffd64,A4) */
    c->pc = 0x00013f82u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x29cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F88:
    /* 00013f88   6  move.w #64,(fffffd66,A4) */
    c->pc = 0x00013f88u;
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[4] - 0x29au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13F8E:
    /* 00013f8e   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00013f8eu;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13F92:
    /* 00013f92   6  move.b #ff,(c,A0) */
    c->pc = 0x00013f92u;
    t0 = 0x000000ffu;
    rc_wr8(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_B);

L_13F98:
    /* 00013f98   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00013f98u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13F9C:
    /* 00013f9c   4  clr.w (2,A0) */
    c->pc = 0x00013f9cu;
    rc_wr16(c, m, (c->a[0] + 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13FA0:
    /* 00013fa0   4  movea.l (fffffffc,A5),A0 */
    c->pc = 0x00013fa0u;
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[0] = t0;

L_13FA4:
    /* 00013fa4   2  clr.w (A0) */
    c->pc = 0x00013fa4u;
    rc_wr16(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13FA6:
    /* 00013fa6   2  bra 00013fb2 */
    c->pc = 0x00013fa6u;
    goto L_13FB2;

L_13FA8:
    /* 00013fa8   4  move.w (fffffffa,A5),-(A7) */
    c->pc = 0x00013fa8u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FAC:
    /* 00013fac   4  jsr (00012fdc) */
    c->pc = 0x00013facu;
    rc_push32(c, m, 0x00013fb0u);
    rc_depth++;
    c->pc = 0x00012fdcu;
    return;

L_13FB0:
    /* 00013fb0   2  addq.w #2,A7 */
    c->pc = 0x00013fb0u;
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_13FB2:
    /* 00013fb2   4  tst.b (fffffff1,A5) */
    c->pc = 0x00013fb2u;
    t0 = rc_rd8(c, m, (c->a[5] - 0xfu));
    rc_set_nzvc(c, t0, RC_B);

L_13FB6:
    /* 00013fb6   2  bne 00013fbe */
    c->pc = 0x00013fb6u;
    if (rc_cond(c, 6)) goto L_13FBE;

L_13FB8:
    /* 00013fb8   6  move.w #1,(fffffd68,A4) */
    c->pc = 0x00013fb8u;
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x298u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FBE:
    /* 00013fbe   4  addq.w #1,(ffffb154,A4) */
    c->pc = 0x00013fbeu;
    t3 = (c->a[4] - 0x4eacu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13FC2:
    /* 00013fc2   6  cmpi.w #8,(ffffb154,A4) */
    c->pc = 0x00013fc2u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x4eacu));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_13FC8:
    /* 00013fc8   2  blt 00013fce */
    c->pc = 0x00013fc8u;
    if (rc_cond(c, 13)) goto L_13FCE;

L_13FCA:
    /* 00013fca   4  clr.w (ffffb154,A4) */
    c->pc = 0x00013fcau;
    rc_wr16(c, m, (c->a[4] - 0x4eacu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13FCE:
    /* 00013fce   4  addq.w #1,(fffffd4a,A4) */
    c->pc = 0x00013fceu;
    t3 = (c->a[4] - 0x2b6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13FD2:
    /* 00013fd2   6  cmpi.w #1e,(fffffd4a,A4) */
    c->pc = 0x00013fd2u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x2b6u));
    rc_cmp(c, RC_W, t0, 0x0000001eu);

L_13FD8:
    /* 00013fd8   2  blt 00013fde */
    c->pc = 0x00013fd8u;
    if (rc_cond(c, 13)) goto L_13FDE;

L_13FDA:
    /* 00013fda   4  clr.w (fffffd4a,A4) */
    c->pc = 0x00013fdau;
    rc_wr16(c, m, (c->a[4] - 0x2b6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_13FDE:
    /* 00013fde   4  addq.w #1,(fffffffa,A5) */
    c->pc = 0x00013fdeu;
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_13FE2:
    /* 00013fe2   4  move.w (fffffffa,A5),D0 */
    c->pc = 0x00013fe2u;
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FE6:
    /* 00013fe6   4  cmp.w (fffffd58,A4),D0 */
    c->pc = 0x00013fe6u;
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_13FEA:
    /* 00013fea   4  blt 00013dca */
    c->pc = 0x00013feau;
    if (rc_cond(c, 13)) { rc_tick(); goto L_13DCA; }

L_13FEE:
    /* 00013fee   4  move.w (ffffffee,A5),D0 */
    c->pc = 0x00013feeu;
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_13FF2:
    /* 00013ff2   4  bra 00013e90 */
    c->pc = 0x00013ff2u;
    rc_tick();
    goto L_13E90;

}
