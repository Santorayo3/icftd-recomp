/* fn_00004da0 - 834 byte(s), 236 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00004da0(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00004da0u): goto L_4DA0;
    case RC_ADDR(0x00004da4u): goto L_4DA4;
    case RC_ADDR(0x00004da8u): goto L_4DA8;
    case RC_ADDR(0x00004dacu): goto L_4DAC;
    case RC_ADDR(0x00004db2u): goto L_4DB2;
    case RC_ADDR(0x00004db4u): goto L_4DB4;
    case RC_ADDR(0x00004db8u): goto L_4DB8;
    case RC_ADDR(0x00004dbcu): goto L_4DBC;
    case RC_ADDR(0x00004dc0u): goto L_4DC0;
    case RC_ADDR(0x00004dc4u): goto L_4DC4;
    case RC_ADDR(0x00004dc8u): goto L_4DC8;
    case RC_ADDR(0x00004dccu): goto L_4DCC;
    case RC_ADDR(0x00004dd0u): goto L_4DD0;
    case RC_ADDR(0x00004dd2u): goto L_4DD2;
    case RC_ADDR(0x00004dd6u): goto L_4DD6;
    case RC_ADDR(0x00004ddau): goto L_4DDA;
    case RC_ADDR(0x00004ddeu): goto L_4DDE;
    case RC_ADDR(0x00004de2u): goto L_4DE2;
    case RC_ADDR(0x00004de4u): goto L_4DE4;
    case RC_ADDR(0x00004deau): goto L_4DEA;
    case RC_ADDR(0x00004df0u): goto L_4DF0;
    case RC_ADDR(0x00004df2u): goto L_4DF2;
    case RC_ADDR(0x00004df6u): goto L_4DF6;
    case RC_ADDR(0x00004dfau): goto L_4DFA;
    case RC_ADDR(0x00004dfeu): goto L_4DFE;
    case RC_ADDR(0x00004e02u): goto L_4E02;
    case RC_ADDR(0x00004e06u): goto L_4E06;
    case RC_ADDR(0x00004e0au): goto L_4E0A;
    case RC_ADDR(0x00004e0eu): goto L_4E0E;
    case RC_ADDR(0x00004e12u): goto L_4E12;
    case RC_ADDR(0x00004e16u): goto L_4E16;
    case RC_ADDR(0x00004e1au): goto L_4E1A;
    case RC_ADDR(0x00004e1cu): goto L_4E1C;
    case RC_ADDR(0x00004e22u): goto L_4E22;
    case RC_ADDR(0x00004e24u): goto L_4E24;
    case RC_ADDR(0x00004e2au): goto L_4E2A;
    case RC_ADDR(0x00004e2eu): goto L_4E2E;
    case RC_ADDR(0x00004e30u): goto L_4E30;
    case RC_ADDR(0x00004e34u): goto L_4E34;
    case RC_ADDR(0x00004e36u): goto L_4E36;
    case RC_ADDR(0x00004e38u): goto L_4E38;
    case RC_ADDR(0x00004e3cu): goto L_4E3C;
    case RC_ADDR(0x00004e3eu): goto L_4E3E;
    case RC_ADDR(0x00004e40u): goto L_4E40;
    case RC_ADDR(0x00004e44u): goto L_4E44;
    case RC_ADDR(0x00004e48u): goto L_4E48;
    case RC_ADDR(0x00004e4au): goto L_4E4A;
    case RC_ADDR(0x00004e4eu): goto L_4E4E;
    case RC_ADDR(0x00004e50u): goto L_4E50;
    case RC_ADDR(0x00004e54u): goto L_4E54;
    case RC_ADDR(0x00004e56u): goto L_4E56;
    case RC_ADDR(0x00004e58u): goto L_4E58;
    case RC_ADDR(0x00004e5cu): goto L_4E5C;
    case RC_ADDR(0x00004e62u): goto L_4E62;
    case RC_ADDR(0x00004e68u): goto L_4E68;
    case RC_ADDR(0x00004e6au): goto L_4E6A;
    case RC_ADDR(0x00004e70u): goto L_4E70;
    case RC_ADDR(0x00004e74u): goto L_4E74;
    case RC_ADDR(0x00004e76u): goto L_4E76;
    case RC_ADDR(0x00004e78u): goto L_4E78;
    case RC_ADDR(0x00004e7cu): goto L_4E7C;
    case RC_ADDR(0x00004e7eu): goto L_4E7E;
    case RC_ADDR(0x00004e80u): goto L_4E80;
    case RC_ADDR(0x00004e84u): goto L_4E84;
    case RC_ADDR(0x00004e86u): goto L_4E86;
    case RC_ADDR(0x00004e8au): goto L_4E8A;
    case RC_ADDR(0x00004e8eu): goto L_4E8E;
    case RC_ADDR(0x00004e90u): goto L_4E90;
    case RC_ADDR(0x00004e94u): goto L_4E94;
    case RC_ADDR(0x00004e96u): goto L_4E96;
    case RC_ADDR(0x00004e98u): goto L_4E98;
    case RC_ADDR(0x00004e9cu): goto L_4E9C;
    case RC_ADDR(0x00004e9eu): goto L_4E9E;
    case RC_ADDR(0x00004ea2u): goto L_4EA2;
    case RC_ADDR(0x00004ea6u): goto L_4EA6;
    case RC_ADDR(0x00004ea8u): goto L_4EA8;
    case RC_ADDR(0x00004eaau): goto L_4EAA;
    case RC_ADDR(0x00004eb0u): goto L_4EB0;
    case RC_ADDR(0x00004eb6u): goto L_4EB6;
    case RC_ADDR(0x00004eb8u): goto L_4EB8;
    case RC_ADDR(0x00004ebcu): goto L_4EBC;
    case RC_ADDR(0x00004ebeu): goto L_4EBE;
    case RC_ADDR(0x00004ec4u): goto L_4EC4;
    case RC_ADDR(0x00004ecau): goto L_4ECA;
    case RC_ADDR(0x00004eccu): goto L_4ECC;
    case RC_ADDR(0x00004ed2u): goto L_4ED2;
    case RC_ADDR(0x00004ed8u): goto L_4ED8;
    case RC_ADDR(0x00004edcu): goto L_4EDC;
    case RC_ADDR(0x00004ee0u): goto L_4EE0;
    case RC_ADDR(0x00004ee4u): goto L_4EE4;
    case RC_ADDR(0x00004ee8u): goto L_4EE8;
    case RC_ADDR(0x00004eeau): goto L_4EEA;
    case RC_ADDR(0x00004eeeu): goto L_4EEE;
    case RC_ADDR(0x00004ef2u): goto L_4EF2;
    case RC_ADDR(0x00004ef6u): goto L_4EF6;
    case RC_ADDR(0x00004efau): goto L_4EFA;
    case RC_ADDR(0x00004efeu): goto L_4EFE;
    case RC_ADDR(0x00004f02u): goto L_4F02;
    case RC_ADDR(0x00004f04u): goto L_4F04;
    case RC_ADDR(0x00004f08u): goto L_4F08;
    case RC_ADDR(0x00004f0cu): goto L_4F0C;
    case RC_ADDR(0x00004f10u): goto L_4F10;
    case RC_ADDR(0x00004f14u): goto L_4F14;
    case RC_ADDR(0x00004f18u): goto L_4F18;
    case RC_ADDR(0x00004f1au): goto L_4F1A;
    case RC_ADDR(0x00004f1cu): goto L_4F1C;
    case RC_ADDR(0x00004f20u): goto L_4F20;
    case RC_ADDR(0x00004f24u): goto L_4F24;
    case RC_ADDR(0x00004f28u): goto L_4F28;
    case RC_ADDR(0x00004f2eu): goto L_4F2E;
    case RC_ADDR(0x00004f30u): goto L_4F30;
    case RC_ADDR(0x00004f36u): goto L_4F36;
    case RC_ADDR(0x00004f3au): goto L_4F3A;
    case RC_ADDR(0x00004f3cu): goto L_4F3C;
    case RC_ADDR(0x00004f3eu): goto L_4F3E;
    case RC_ADDR(0x00004f40u): goto L_4F40;
    case RC_ADDR(0x00004f44u): goto L_4F44;
    case RC_ADDR(0x00004f46u): goto L_4F46;
    case RC_ADDR(0x00004f48u): goto L_4F48;
    case RC_ADDR(0x00004f4au): goto L_4F4A;
    case RC_ADDR(0x00004f4eu): goto L_4F4E;
    case RC_ADDR(0x00004f52u): goto L_4F52;
    case RC_ADDR(0x00004f56u): goto L_4F56;
    case RC_ADDR(0x00004f5au): goto L_4F5A;
    case RC_ADDR(0x00004f5eu): goto L_4F5E;
    case RC_ADDR(0x00004f62u): goto L_4F62;
    case RC_ADDR(0x00004f66u): goto L_4F66;
    case RC_ADDR(0x00004f68u): goto L_4F68;
    case RC_ADDR(0x00004f6au): goto L_4F6A;
    case RC_ADDR(0x00004f6eu): goto L_4F6E;
    case RC_ADDR(0x00004f70u): goto L_4F70;
    case RC_ADDR(0x00004f72u): goto L_4F72;
    case RC_ADDR(0x00004f76u): goto L_4F76;
    case RC_ADDR(0x00004f7au): goto L_4F7A;
    case RC_ADDR(0x00004f7cu): goto L_4F7C;
    case RC_ADDR(0x00004f82u): goto L_4F82;
    case RC_ADDR(0x00004f86u): goto L_4F86;
    case RC_ADDR(0x00004f88u): goto L_4F88;
    case RC_ADDR(0x00004f8au): goto L_4F8A;
    case RC_ADDR(0x00004f8eu): goto L_4F8E;
    case RC_ADDR(0x00004f92u): goto L_4F92;
    case RC_ADDR(0x00004f94u): goto L_4F94;
    case RC_ADDR(0x00004f98u): goto L_4F98;
    case RC_ADDR(0x00004f9eu): goto L_4F9E;
    case RC_ADDR(0x00004fa0u): goto L_4FA0;
    case RC_ADDR(0x00004fa2u): goto L_4FA2;
    case RC_ADDR(0x00004fa4u): goto L_4FA4;
    case RC_ADDR(0x00004fa8u): goto L_4FA8;
    case RC_ADDR(0x00004faau): goto L_4FAA;
    case RC_ADDR(0x00004facu): goto L_4FAC;
    case RC_ADDR(0x00004fb0u): goto L_4FB0;
    case RC_ADDR(0x00004fb4u): goto L_4FB4;
    case RC_ADDR(0x00004fb6u): goto L_4FB6;
    case RC_ADDR(0x00004fbau): goto L_4FBA;
    case RC_ADDR(0x00004fbcu): goto L_4FBC;
    case RC_ADDR(0x00004fbeu): goto L_4FBE;
    case RC_ADDR(0x00004fc0u): goto L_4FC0;
    case RC_ADDR(0x00004fc2u): goto L_4FC2;
    case RC_ADDR(0x00004fc6u): goto L_4FC6;
    case RC_ADDR(0x00004fcau): goto L_4FCA;
    case RC_ADDR(0x00004fccu): goto L_4FCC;
    case RC_ADDR(0x00004fceu): goto L_4FCE;
    case RC_ADDR(0x00004fd2u): goto L_4FD2;
    case RC_ADDR(0x00004fd6u): goto L_4FD6;
    case RC_ADDR(0x00004fdau): goto L_4FDA;
    case RC_ADDR(0x00004fdeu): goto L_4FDE;
    case RC_ADDR(0x00004fe2u): goto L_4FE2;
    case RC_ADDR(0x00004fe6u): goto L_4FE6;
    case RC_ADDR(0x00004fecu): goto L_4FEC;
    case RC_ADDR(0x00004ff0u): goto L_4FF0;
    case RC_ADDR(0x00004ff4u): goto L_4FF4;
    case RC_ADDR(0x00004ffau): goto L_4FFA;
    case RC_ADDR(0x00004ffeu): goto L_4FFE;
    case RC_ADDR(0x00005002u): goto L_5002;
    case RC_ADDR(0x00005004u): goto L_5004;
    case RC_ADDR(0x00005006u): goto L_5006;
    case RC_ADDR(0x0000500au): goto L_500A;
    case RC_ADDR(0x00005010u): goto L_5010;
    case RC_ADDR(0x00005014u): goto L_5014;
    case RC_ADDR(0x00005016u): goto L_5016;
    case RC_ADDR(0x00005018u): goto L_5018;
    case RC_ADDR(0x0000501cu): goto L_501C;
    case RC_ADDR(0x00005022u): goto L_5022;
    case RC_ADDR(0x00005026u): goto L_5026;
    case RC_ADDR(0x0000502au): goto L_502A;
    case RC_ADDR(0x0000502eu): goto L_502E;
    case RC_ADDR(0x00005032u): goto L_5032;
    case RC_ADDR(0x00005036u): goto L_5036;
    case RC_ADDR(0x0000503au): goto L_503A;
    case RC_ADDR(0x0000503eu): goto L_503E;
    case RC_ADDR(0x00005042u): goto L_5042;
    case RC_ADDR(0x00005046u): goto L_5046;
    case RC_ADDR(0x0000504au): goto L_504A;
    case RC_ADDR(0x0000504eu): goto L_504E;
    case RC_ADDR(0x00005052u): goto L_5052;
    case RC_ADDR(0x00005054u): goto L_5054;
    case RC_ADDR(0x00005056u): goto L_5056;
    case RC_ADDR(0x0000505au): goto L_505A;
    case RC_ADDR(0x0000505eu): goto L_505E;
    case RC_ADDR(0x00005062u): goto L_5062;
    case RC_ADDR(0x00005066u): goto L_5066;
    case RC_ADDR(0x00005068u): goto L_5068;
    case RC_ADDR(0x0000506cu): goto L_506C;
    case RC_ADDR(0x00005070u): goto L_5070;
    case RC_ADDR(0x00005076u): goto L_5076;
    case RC_ADDR(0x0000507au): goto L_507A;
    case RC_ADDR(0x0000507eu): goto L_507E;
    case RC_ADDR(0x00005082u): goto L_5082;
    case RC_ADDR(0x00005086u): goto L_5086;
    case RC_ADDR(0x00005088u): goto L_5088;
    case RC_ADDR(0x0000508cu): goto L_508C;
    case RC_ADDR(0x00005090u): goto L_5090;
    case RC_ADDR(0x00005096u): goto L_5096;
    case RC_ADDR(0x0000509au): goto L_509A;
    case RC_ADDR(0x0000509eu): goto L_509E;
    case RC_ADDR(0x000050a2u): goto L_50A2;
    case RC_ADDR(0x000050a4u): goto L_50A4;
    case RC_ADDR(0x000050a6u): goto L_50A6;
    case RC_ADDR(0x000050a8u): goto L_50A8;
    case RC_ADDR(0x000050aeu): goto L_50AE;
    case RC_ADDR(0x000050b2u): goto L_50B2;
    case RC_ADDR(0x000050b4u): goto L_50B4;
    case RC_ADDR(0x000050b6u): goto L_50B6;
    case RC_ADDR(0x000050b8u): goto L_50B8;
    case RC_ADDR(0x000050bcu): goto L_50BC;
    case RC_ADDR(0x000050beu): goto L_50BE;
    case RC_ADDR(0x000050c0u): goto L_50C0;
    case RC_ADDR(0x000050c2u): goto L_50C2;
    case RC_ADDR(0x000050c6u): goto L_50C6;
    case RC_ADDR(0x000050cau): goto L_50CA;
    case RC_ADDR(0x000050ceu): goto L_50CE;
    case RC_ADDR(0x000050d2u): goto L_50D2;
    case RC_ADDR(0x000050d6u): goto L_50D6;
    case RC_ADDR(0x000050dau): goto L_50DA;
    case RC_ADDR(0x000050deu): goto L_50DE;
    case RC_ADDR(0x000050e0u): goto L_50E0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_4DA0:
    /* 00004da0   4  link.w A5,#ffffffe6 */
    c->pc = RC_ADDR(0x00004da0u);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x1au;

L_4DA4:
    /* 00004da4   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x00004da4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_4DA8:
    /* 00004da8   4  beq 00004eaa */
    c->pc = RC_ADDR(0x00004da8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4EAA;

L_4DAC:
    /* 00004dac   6  cmpi.w #1,(9c8,A4) */
    c->pc = RC_ADDR(0x00004dacu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x9c8u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_4DB2:
    /* 00004db2   2  bne 00004db8 */
    c->pc = RC_ADDR(0x00004db2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_4DB8;

L_4DB4:
    /* 00004db4   4  addq.w #1,(9c8,A4) */
    c->pc = RC_ADDR(0x00004db4u);
    rc_step(c, m, 16);
    t3 = (c->a[4] + 0x9c8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4DB8:
    /* 00004db8   4  move.w (ffff85dc,A4),D0 */
    c->pc = RC_ADDR(0x00004db8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7a24u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4DBC:
    /* 00004dbc   4  addq.w #1,(ffff85dc,A4) */
    c->pc = RC_ADDR(0x00004dbcu);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x7a24u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4DC0:
    /* 00004dc0   4  cmp.w #2,D0 */
    c->pc = RC_ADDR(0x00004dc0u);
    rc_step(c, m, 8);
    t0 = 0x00000002u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_4DC4:
    /* 00004dc4   4  ble 00004ea8 */
    c->pc = RC_ADDR(0x00004dc4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_4EA8;

L_4DC8:
    /* 00004dc8   4  clr.w (ffff85dc,A4) */
    c->pc = RC_ADDR(0x00004dc8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7a24u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4DCC:
    /* 00004dcc   4  tst.w (ffffd5c4,A4) */
    c->pc = RC_ADDR(0x00004dccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3cu));
    rc_set_nzvc(c, t0, RC_W);

L_4DD0:
    /* 00004dd0   2  beq 00004dfa */
    c->pc = RC_ADDR(0x00004dd0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4DFA;

L_4DD2:
    /* 00004dd2   4  clr.w (9c8,A4) */
    c->pc = RC_ADDR(0x00004dd2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x9c8u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4DD6:
    /* 00004dd6   4  move.w (ffffd5c4,A4),D0 */
    c->pc = RC_ADDR(0x00004dd6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4DDA:
    /* 00004dda   4  add.w D0,(fffff978,A4) */
    c->pc = RC_ADDR(0x00004ddau);
    rc_step(c, m, 16);
    t3 = (c->a[4] - 0x688u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_4DDE:
    /* 00004dde   4  tst.w (fffff978,A4) */
    c->pc = RC_ADDR(0x00004ddeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x688u));
    rc_set_nzvc(c, t0, RC_W);

L_4DE2:
    /* 00004de2   2  bge 00004dea */
    c->pc = RC_ADDR(0x00004de2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_4DEA;

L_4DE4:
    /* 00004de4   6  move.w #4,(fffff978,A4) */
    c->pc = RC_ADDR(0x00004de4u);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] - 0x688u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4DEA:
    /* 00004dea   6  cmpi.w #4,(fffff978,A4) */
    c->pc = RC_ADDR(0x00004deau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x688u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_4DF0:
    /* 00004df0   2  ble 00004df6 */
    c->pc = RC_ADDR(0x00004df0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_4DF6;

L_4DF2:
    /* 00004df2   4  clr.w (fffff978,A4) */
    c->pc = RC_ADDR(0x00004df2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x688u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4DF6:
    /* 00004df6   4  bra 00004ea8 */
    c->pc = RC_ADDR(0x00004df6u);
    rc_step(c, m, 10);
    goto L_4EA8;

L_4DFA:
    /* 00004dfa   4  tst.w (ffffd5c6,A4) */
    c->pc = RC_ADDR(0x00004dfau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3au));
    rc_set_nzvc(c, t0, RC_W);

L_4DFE:
    /* 00004dfe   4  beq 00004ea8 */
    c->pc = RC_ADDR(0x00004dfeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4EA8;

L_4E02:
    /* 00004e02   4  tst.w (c,A5) */
    c->pc = RC_ADDR(0x00004e02u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0xcu));
    rc_set_nzvc(c, t0, RC_W);

L_4E06:
    /* 00004e06   4  beq 00004ea8 */
    c->pc = RC_ADDR(0x00004e06u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4EA8;

L_4E0A:
    /* 00004e0a   4  move.w (fffff794,A4),D0 */
    c->pc = RC_ADDR(0x00004e0au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E0E:
    /* 00004e0e   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00004e0eu);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_4E12:
    /* 00004e12   4  lea (ffff85f7,A4),A0 */
    c->pc = RC_ADDR(0x00004e12u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a09u);

L_4E16:
    /* 00004e16   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004e16u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_4E1A:
    /* 00004e1a   2  beq 00004e24 */
    c->pc = RC_ADDR(0x00004e1au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4E24;

L_4E1C:
    /* 00004e1c   6  move.w (fffff794,A4),(ffffffee,A5) */
    c->pc = RC_ADDR(0x00004e1cu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] - 0x86cu));
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E22:
    /* 00004e22   2  bra 00004e2a */
    c->pc = RC_ADDR(0x00004e22u);
    rc_step(c, m, 10);
    goto L_4E2A;

L_4E24:
    /* 00004e24   6  move.w #22,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00004e24u);
    rc_step(c, m, 16);
    t0 = 0x00000022u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E2A:
    /* 00004e2a   4  tst.w (ffffd5c6,A4) */
    c->pc = RC_ADDR(0x00004e2au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3au));
    rc_set_nzvc(c, t0, RC_W);

L_4E2E:
    /* 00004e2e   2  ble 00004e50 */
    c->pc = RC_ADDR(0x00004e2eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_4E50;

L_4E30:
    /* 00004e30   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00004e30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E34:
    /* 00004e34   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004e34u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4E36:
    /* 00004e36   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004e36u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_4E38:
    /* 00004e38   4  move.w (fffff978,A4),D1 */
    c->pc = RC_ADDR(0x00004e38u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x688u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E3C:
    /* 00004e3c   2  ext.l D1 */
    c->pc = RC_ADDR(0x00004e3cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_4E3E:
    /* 00004e3e   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00004e3eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4E40:
    /* 00004e40   4  lea (fffff8aa,A4),A0 */
    c->pc = RC_ADDR(0x00004e40u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x756u);

L_4E44:
    /* 00004e44   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004e44u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_4E48:
    /* 00004e48   2  ext.w D1 */
    c->pc = RC_ADDR(0x00004e48u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_4E4A:
    /* 00004e4a   4  move.w D1,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00004e4au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E4E:
    /* 00004e4e   2  bra 00004e62 */
    c->pc = RC_ADDR(0x00004e4eu);
    rc_step(c, m, 10);
    goto L_4E62;

L_4E50:
    /* 00004e50   4  move.w (fffff978,A4),D0 */
    c->pc = RC_ADDR(0x00004e50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x688u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E54:
    /* 00004e54   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004e54u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4E56:
    /* 00004e56   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00004e56u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_4E58:
    /* 00004e58   4  lea (fffff970,A4),A0 */
    c->pc = RC_ADDR(0x00004e58u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x690u);

L_4E5C:
    /* 00004e5c   6  move.w (0,A0,D0.w),(fffffff2,A5) */
    c->pc = RC_ADDR(0x00004e5cu);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E62:
    /* 00004e62   6  cmpi.w #5,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00004e62u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_4E68:
    /* 00004e68   2  blt 00004e70 */
    c->pc = RC_ADDR(0x00004e68u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_4E70;

L_4E6A:
    /* 00004e6a   6  move.w #5,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00004e6au);
    rc_step(c, m, 16);
    t0 = 0x00000005u;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E70:
    /* 00004e70   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00004e70u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E74:
    /* 00004e74   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004e74u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4E76:
    /* 00004e76   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004e76u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_4E78:
    /* 00004e78   4  move.w (fffff978,A4),D1 */
    c->pc = RC_ADDR(0x00004e78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x688u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E7C:
    /* 00004e7c   2  ext.l D1 */
    c->pc = RC_ADDR(0x00004e7cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_4E7E:
    /* 00004e7e   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00004e7eu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4E80:
    /* 00004e80   4  lea (fffff8aa,A4),A0 */
    c->pc = RC_ADDR(0x00004e80u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x756u);

L_4E84:
    /* 00004e84   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00004e84u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_4E86:
    /* 00004e86   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00004e86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E8A:
    /* 00004e8a   4  muls.w (ffffd5c6,A4),D0 */
    c->pc = RC_ADDR(0x00004e8au);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3au));
    rc_muls(c, 0, t0);

L_4E8E:
    /* 00004e8e   2  sub.b D0,(A0) */
    c->pc = RC_ADDR(0x00004e8eu);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_B);
    rc_flags_sub(c, RC_B, t1, rc_d_get(c, 0, RC_B), t2, 0);
    rc_wr8(c, m, t3, t2);

L_4E90:
    /* 00004e90   4  move.w (fffff978,A4),D0 */
    c->pc = RC_ADDR(0x00004e90u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x688u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4E94:
    /* 00004e94   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004e94u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4E96:
    /* 00004e96   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00004e96u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_4E98:
    /* 00004e98   4  lea (fffff970,A4),A0 */
    c->pc = RC_ADDR(0x00004e98u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x690u);

L_4E9C:
    /* 00004e9c   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00004e9cu);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_4E9E:
    /* 00004e9e   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00004e9eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4EA2:
    /* 00004ea2   4  muls.w (ffffd5c6,A4),D0 */
    c->pc = RC_ADDR(0x00004ea2u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3au));
    rc_muls(c, 0, t0);

L_4EA6:
    /* 00004ea6   2  add.w D0,(A0) */
    c->pc = RC_ADDR(0x00004ea6u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_4EA8:
    /* 00004ea8   2  bra 00004ed2 */
    c->pc = RC_ADDR(0x00004ea8u);
    rc_step(c, m, 10);
    goto L_4ED2;

L_4EAA:
    /* 00004eaa   6  move.w #3,(ffff85dc,A4) */
    c->pc = RC_ADDR(0x00004eaau);
    rc_step(c, m, 16);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] - 0x7a24u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4EB0:
    /* 00004eb0   6  cmpi.w #4,(fffff978,A4) */
    c->pc = RC_ADDR(0x00004eb0u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x688u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_4EB6:
    /* 00004eb6   2  bne 00004ec4 */
    c->pc = RC_ADDR(0x00004eb6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_4EC4;

L_4EB8:
    /* 00004eb8   4  tst.w (9c8,A4) */
    c->pc = RC_ADDR(0x00004eb8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x9c8u));
    rc_set_nzvc(c, t0, RC_W);

L_4EBC:
    /* 00004ebc   2  bne 00004ec4 */
    c->pc = RC_ADDR(0x00004ebcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_4EC4;

L_4EBE:
    /* 00004ebe   6  move.w #1,(9c8,A4) */
    c->pc = RC_ADDR(0x00004ebeu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x9c8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4EC4:
    /* 00004ec4   6  cmpi.w #2,(9c8,A4) */
    c->pc = RC_ADDR(0x00004ec4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x9c8u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_4ECA:
    /* 00004eca   2  bne 00004ed2 */
    c->pc = RC_ADDR(0x00004ecau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_4ED2;

L_4ECC:
    /* 00004ecc   6  move.w #1,(fffff790,A4) */
    c->pc = RC_ADDR(0x00004eccu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x870u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_4ED2:
    /* 00004ed2   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00004ed2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4ED8:
    /* 00004ed8   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00004ed8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4EDC:
    /* 00004edc   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00004edcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4EE0:
    /* 00004ee0   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00004ee0u);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_4EE4:
    /* 00004ee4   4  lea (ffff85ea,A4),A0 */
    c->pc = RC_ADDR(0x00004ee4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a16u);

L_4EE8:
    /* 00004ee8   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00004ee8u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4EEA:
    /* 00004eea   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004eeau);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4EEE:
    /* 00004eee   4  add.l (fffff79e,A4),D1 */
    c->pc = RC_ADDR(0x00004eeeu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x862u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_4EF2:
    /* 00004ef2   4  move.l D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00004ef2u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4EF6:
    /* 00004ef6   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00004ef6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4EFA:
    /* 00004efa   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00004efau);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_4EFE:
    /* 00004efe   4  lea (ffff85ec,A4),A0 */
    c->pc = RC_ADDR(0x00004efeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a14u);

L_4F02:
    /* 00004f02   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00004f02u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4F04:
    /* 00004f04   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004f04u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F08:
    /* 00004f08   4  add.l (fffff7a2,A4),D1 */
    c->pc = RC_ADDR(0x00004f08u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85eu));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_4F0C:
    /* 00004f0c   4  move.l D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00004f0cu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4F10:
    /* 00004f10   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00004f10u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F14:
    /* 00004f14   4  jsr (00004d7a) */
    c->pc = RC_ADDR(0x00004f14u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00004f18u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004d7au);
    return;

L_4F18:
    /* 00004f18   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00004f18u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_4F1A:
    /* 00004f1a   2  tst.w D0 */
    c->pc = RC_ADDR(0x00004f1au);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_4F1C:
    /* 00004f1c   4  beq 00004ff0 */
    c->pc = RC_ADDR(0x00004f1cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4FF0;

L_4F20:
    /* 00004f20   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00004f20u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F24:
    /* 00004f24   4  lea (fffff946,A4),A0 */
    c->pc = RC_ADDR(0x00004f24u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x6bau);

L_4F28:
    /* 00004f28   6  cmpi.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004f28u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_4F2E:
    /* 00004f2e   2  bne 00004f5e */
    c->pc = RC_ADDR(0x00004f2eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_4F5E;

L_4F30:
    /* 00004f30   6  pea (00010000).l */
    c->pc = RC_ADDR(0x00004f30u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_4F36:
    /* 00004f36   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00004f36u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4F3A:
    /* 00004f3a   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00004f3au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4F3C:
    /* 00004f3c   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00004f3cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_4F3E:
    /* 00004f3e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00004f3eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4F40:
    /* 00004f40   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00004f40u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_4F44:
    /* 00004f44   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00004f44u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_4F46:
    /* 00004f46   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00004f46u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_4F48:
    /* 00004f48   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00004f48u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4F4A:
    /* 00004f4a   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00004f4au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F4E:
    /* 00004f4e   4  move.l (9de,A4),-(A7) */
    c->pc = RC_ADDR(0x00004f4eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x9deu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4F52:
    /* 00004f52   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00004f52u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F56:
    /* 00004f56   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00004f56u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00004f5au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_4F5A:
    /* 00004f5a   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00004f5au);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_4F5E:
    /* 00004f5e   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x00004f5eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4F62:
    /* 00004f62   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00004f62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F66:
    /* 00004f66   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004f66u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4F68:
    /* 00004f68   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004f68u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_4F6A:
    /* 00004f6a   4  move.w (fffffff4,A5),D1 */
    c->pc = RC_ADDR(0x00004f6au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F6E:
    /* 00004f6e   2  ext.l D1 */
    c->pc = RC_ADDR(0x00004f6eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_4F70:
    /* 00004f70   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00004f70u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_4F72:
    /* 00004f72   4  lea (fffff8aa,A4),A0 */
    c->pc = RC_ADDR(0x00004f72u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x756u);

L_4F76:
    /* 00004f76   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00004f76u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_4F7A:
    /* 00004f7a   2  beq 00004fe2 */
    c->pc = RC_ADDR(0x00004f7au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_4FE2;

L_4F7C:
    /* 00004f7c   6  pea (00010000).l */
    c->pc = RC_ADDR(0x00004f7cu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_4F82:
    /* 00004f82   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00004f82u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F86:
    /* 00004f86   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004f86u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4F88:
    /* 00004f88   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00004f88u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_4F8A:
    /* 00004f8a   4  lea (ffff85c0,A4),A0 */
    c->pc = RC_ADDR(0x00004f8au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a40u);

L_4F8E:
    /* 00004f8e   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004f8eu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4F92:
    /* 00004f92   2  ext.l D1 */
    c->pc = RC_ADDR(0x00004f92u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_4F94:
    /* 00004f94   4  add.l (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x00004f94u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_4F98:
    /* 00004f98   6  add.l #a,D1 */
    c->pc = RC_ADDR(0x00004f98u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_4F9E:
    /* 00004f9e   2  moveq #10,D0 */
    c->pc = RC_ADDR(0x00004f9eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000010u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4FA0:
    /* 00004fa0   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x00004fa0u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_4FA2:
    /* 00004fa2   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00004fa2u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FA4:
    /* 00004fa4   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00004fa4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4FA8:
    /* 00004fa8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004fa8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4FAA:
    /* 00004faa   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00004faau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_4FAC:
    /* 00004fac   4  lea (ffff85b8,A4),A0 */
    c->pc = RC_ADDR(0x00004facu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a48u);

L_4FB0:
    /* 00004fb0   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00004fb0u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4FB4:
    /* 00004fb4   2  ext.l D1 */
    c->pc = RC_ADDR(0x00004fb4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_4FB6:
    /* 00004fb6   4  add.l (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00004fb6u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_4FBA:
    /* 00004fba   2  addq.l #4,D1 */
    c->pc = RC_ADDR(0x00004fbau);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + 0x00000004u;
    rc_flags_add(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_4FBC:
    /* 00004fbc   2  moveq #10,D0 */
    c->pc = RC_ADDR(0x00004fbcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000010u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4FBE:
    /* 00004fbe   2  asl.l D0,D1 */
    c->pc = RC_ADDR(0x00004fbeu);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, (c->d[0] & 63u), rc_d_get(c, 1, RC_L), RC_L));

L_4FC0:
    /* 00004fc0   2  move.l D1,-(A7) */
    c->pc = RC_ADDR(0x00004fc0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FC2:
    /* 00004fc2   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x00004fc2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4FC6:
    /* 00004fc6   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00004fc6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_4FCA:
    /* 00004fca   2  ext.l D0 */
    c->pc = RC_ADDR(0x00004fcau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_4FCC:
    /* 00004fcc   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00004fccu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_4FCE:
    /* 00004fce   4  lea (9ca,A4),A0 */
    c->pc = RC_ADDR(0x00004fceu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x9cau);

L_4FD2:
    /* 00004fd2   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00004fd2u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4FD6:
    /* 00004fd6   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00004fd6u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_4FDA:
    /* 00004fda   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00004fdau);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00004fdeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_4FDE:
    /* 00004fde   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00004fdeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_4FE2:
    /* 00004fe2   4  addq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00004fe2u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4FE6:
    /* 00004fe6   6  cmpi.w #4,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00004fe6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_4FEC:
    /* 00004fec   4  blt 00004f62 */
    c->pc = RC_ADDR(0x00004fecu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_4F62; }

L_4FF0:
    /* 00004ff0   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00004ff0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_4FF4:
    /* 00004ff4   6  cmpi.w #27,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00004ff4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_4FFA:
    /* 00004ffa   4  blt 00004edc */
    c->pc = RC_ADDR(0x00004ffau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_4EDC; }

L_4FFE:
    /* 00004ffe   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00004ffeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5002:
    /* 00005002   2  ext.l D0 */
    c->pc = RC_ADDR(0x00005002u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_5004:
    /* 00005004   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00005004u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_5006:
    /* 00005006   4  lea (ffff84de,A4),A0 */
    c->pc = RC_ADDR(0x00005006u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b22u);

L_500A:
    /* 0000500a   6  move.l (0,A0,D0.w),(ffffffea,A5) */
    c->pc = RC_ADDR(0x0000500au);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5010:
    /* 00005010   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00005010u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_5014:
    /* 00005014   2  ext.l D0 */
    c->pc = RC_ADDR(0x00005014u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_5016:
    /* 00005016   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00005016u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_5018:
    /* 00005018   4  lea (ffff84a2,A4),A0 */
    c->pc = RC_ADDR(0x00005018u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7b5eu);

L_501C:
    /* 0000501c   6  move.l (0,A0,D0.w),(ffffffe6,A5) */
    c->pc = RC_ADDR(0x0000501cu);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_5022:
    /* 00005022   4  clr.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00005022u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0xau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_5026:
    /* 00005026   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00005026u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_502A:
    /* 0000502a   4  movea.l (ffffffe6,A5),A0 */
    c->pc = RC_ADDR(0x0000502au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1au));
    c->a[0] = t0;

L_502E:
    /* 0000502e   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000502eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_5032:
    /* 00005032   4  beq 000050de */
    c->pc = RC_ADDR(0x00005032u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_50DE;

L_5036:
    /* 00005036   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00005036u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_503A:
    /* 0000503a   4  movea.l (ffffffea,A5),A0 */
    c->pc = RC_ADDR(0x0000503au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x16u));
    c->a[0] = t0;

L_503E:
    /* 0000503e   4  tst.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x0000503eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_B);

L_5042:
    /* 00005042   4  beq 000050d6 */
    c->pc = RC_ADDR(0x00005042u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_50D6;

L_5046:
    /* 00005046   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00005046u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_504A:
    /* 0000504a   4  movea.l (ffffffe6,A5),A0 */
    c->pc = RC_ADDR(0x0000504au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1au));
    c->a[0] = t0;

L_504E:
    /* 0000504e   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x0000504eu);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_5052:
    /* 00005052   2  ext.w D1 */
    c->pc = RC_ADDR(0x00005052u);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_5054:
    /* 00005054   2  subq.w #1,D1 */
    c->pc = RC_ADDR(0x00005054u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_5056:
    /* 00005056   4  move.w D1,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00005056u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_505A:
    /* 0000505a   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x0000505au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_505E:
    /* 0000505e   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x0000505eu);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_5062:
    /* 00005062   4  lea (ffff85ea,A4),A0 */
    c->pc = RC_ADDR(0x00005062u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a16u);

L_5066:
    /* 00005066   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00005066u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_5068:
    /* 00005068   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00005068u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_506C:
    /* 0000506c   4  add.l (fffff79e,A4),D1 */
    c->pc = RC_ADDR(0x0000506cu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x862u));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_5070:
    /* 00005070   6  add.l #10,D1 */
    c->pc = RC_ADDR(0x00005070u);
    rc_step(c, m, 16);
    t0 = 0x00000010u;
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_5076:
    /* 00005076   4  move.l D1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00005076u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_507A:
    /* 0000507a   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x0000507au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_507E:
    /* 0000507e   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x0000507eu);
    rc_step(c, m, 42);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_5082:
    /* 00005082   4  lea (ffff85ec,A4),A0 */
    c->pc = RC_ADDR(0x00005082u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7a14u);

L_5086:
    /* 00005086   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00005086u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_5088:
    /* 00005088   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00005088u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_508C:
    /* 0000508c   4  add.l (fffff7a2,A4),D1 */
    c->pc = RC_ADDR(0x0000508cu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[4] - 0x85eu));
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_5090:
    /* 00005090   6  add.l #a,D1 */
    c->pc = RC_ADDR(0x00005090u);
    rc_step(c, m, 16);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_5096:
    /* 00005096   4  move.l D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00005096u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 1, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_509A:
    /* 0000509a   4  move.w (fffffff0,A5),-(A7) */
    c->pc = RC_ADDR(0x0000509au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_509E:
    /* 0000509e   4  jsr (00004d7a) */
    c->pc = RC_ADDR(0x0000509eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000050a2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004d7au);
    return;

L_50A2:
    /* 000050a2   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x000050a2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_50A4:
    /* 000050a4   2  tst.w D0 */
    c->pc = RC_ADDR(0x000050a4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_50A6:
    /* 000050a6   2  beq 000050d6 */
    c->pc = RC_ADDR(0x000050a6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_50D6;

L_50A8:
    /* 000050a8   6  pea (00010000).l */
    c->pc = RC_ADDR(0x000050a8u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010000u);

L_50AE:
    /* 000050ae   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x000050aeu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_50B2:
    /* 000050b2   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000050b2u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_50B4:
    /* 000050b4   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x000050b4u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_50B6:
    /* 000050b6   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000050b6u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_50B8:
    /* 000050b8   4  move.l (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x000050b8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_50BC:
    /* 000050bc   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x000050bcu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_50BE:
    /* 000050be   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x000050beu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_50C0:
    /* 000050c0   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x000050c0u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_50C2:
    /* 000050c2   4  move.w (fffffff6,A5),-(A7) */
    c->pc = RC_ADDR(0x000050c2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_50C6:
    /* 000050c6   4  move.l (9da,A4),-(A7) */
    c->pc = RC_ADDR(0x000050c6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x9dau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_50CA:
    /* 000050ca   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x000050cau);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_50CE:
    /* 000050ce   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x000050ceu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x000050d2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_50D2:
    /* 000050d2   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x000050d2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_50D6:
    /* 000050d6   4  addq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x000050d6u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_50DA:
    /* 000050da   4  bra 00005026 */
    c->pc = RC_ADDR(0x000050dau);
    rc_step(c, m, 10);
    rc_tick();
    goto L_5026;

L_50DE:
    /* 000050de   2  unlk A5 */
    c->pc = RC_ADDR(0x000050deu);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_50E0:
    /* 000050e0   2  rts */
    c->pc = RC_ADDR(0x000050e0u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
