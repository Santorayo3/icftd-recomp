/* fn_00020cba - 1046 byte(s), 280 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00020cba(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00020cbau): goto L_20CBA;
    case RC_ADDR(0x00020cbeu): goto L_20CBE;
    case RC_ADDR(0x00020cc2u): goto L_20CC2;
    case RC_ADDR(0x00020cc4u): goto L_20CC4;
    case RC_ADDR(0x00020cc8u): goto L_20CC8;
    case RC_ADDR(0x00020ccau): goto L_20CCA;
    case RC_ADDR(0x00020cccu): goto L_20CCC;
    case RC_ADDR(0x00020cd0u): goto L_20CD0;
    case RC_ADDR(0x00020cd4u): goto L_20CD4;
    case RC_ADDR(0x00020cd6u): goto L_20CD6;
    case RC_ADDR(0x00020cdau): goto L_20CDA;
    case RC_ADDR(0x00020cdcu): goto L_20CDC;
    case RC_ADDR(0x00020ce0u): goto L_20CE0;
    case RC_ADDR(0x00020ce4u): goto L_20CE4;
    case RC_ADDR(0x00020ce8u): goto L_20CE8;
    case RC_ADDR(0x00020ceeu): goto L_20CEE;
    case RC_ADDR(0x00020cf0u): goto L_20CF0;
    case RC_ADDR(0x00020cf4u): goto L_20CF4;
    case RC_ADDR(0x00020cf8u): goto L_20CF8;
    case RC_ADDR(0x00020cfcu): goto L_20CFC;
    case RC_ADDR(0x00020cfeu): goto L_20CFE;
    case RC_ADDR(0x00020d06u): goto L_20D06;
    case RC_ADDR(0x00020d08u): goto L_20D08;
    case RC_ADDR(0x00020d0cu): goto L_20D0C;
    case RC_ADDR(0x00020d10u): goto L_20D10;
    case RC_ADDR(0x00020d14u): goto L_20D14;
    case RC_ADDR(0x00020d16u): goto L_20D16;
    case RC_ADDR(0x00020d1au): goto L_20D1A;
    case RC_ADDR(0x00020d1eu): goto L_20D1E;
    case RC_ADDR(0x00020d22u): goto L_20D22;
    case RC_ADDR(0x00020d2au): goto L_20D2A;
    case RC_ADDR(0x00020d2cu): goto L_20D2C;
    case RC_ADDR(0x00020d30u): goto L_20D30;
    case RC_ADDR(0x00020d34u): goto L_20D34;
    case RC_ADDR(0x00020d36u): goto L_20D36;
    case RC_ADDR(0x00020d3au): goto L_20D3A;
    case RC_ADDR(0x00020d3eu): goto L_20D3E;
    case RC_ADDR(0x00020d40u): goto L_20D40;
    case RC_ADDR(0x00020d44u): goto L_20D44;
    case RC_ADDR(0x00020d48u): goto L_20D48;
    case RC_ADDR(0x00020d4cu): goto L_20D4C;
    case RC_ADDR(0x00020d4eu): goto L_20D4E;
    case RC_ADDR(0x00020d52u): goto L_20D52;
    case RC_ADDR(0x00020d54u): goto L_20D54;
    case RC_ADDR(0x00020d56u): goto L_20D56;
    case RC_ADDR(0x00020d5cu): goto L_20D5C;
    case RC_ADDR(0x00020d60u): goto L_20D60;
    case RC_ADDR(0x00020d64u): goto L_20D64;
    case RC_ADDR(0x00020d68u): goto L_20D68;
    case RC_ADDR(0x00020d6cu): goto L_20D6C;
    case RC_ADDR(0x00020d70u): goto L_20D70;
    case RC_ADDR(0x00020d72u): goto L_20D72;
    case RC_ADDR(0x00020d78u): goto L_20D78;
    case RC_ADDR(0x00020d7cu): goto L_20D7C;
    case RC_ADDR(0x00020d80u): goto L_20D80;
    case RC_ADDR(0x00020d84u): goto L_20D84;
    case RC_ADDR(0x00020d8au): goto L_20D8A;
    case RC_ADDR(0x00020d8eu): goto L_20D8E;
    case RC_ADDR(0x00020d94u): goto L_20D94;
    case RC_ADDR(0x00020d98u): goto L_20D98;
    case RC_ADDR(0x00020d9eu): goto L_20D9E;
    case RC_ADDR(0x00020da2u): goto L_20DA2;
    case RC_ADDR(0x00020da8u): goto L_20DA8;
    case RC_ADDR(0x00020dacu): goto L_20DAC;
    case RC_ADDR(0x00020db2u): goto L_20DB2;
    case RC_ADDR(0x00020db6u): goto L_20DB6;
    case RC_ADDR(0x00020dbcu): goto L_20DBC;
    case RC_ADDR(0x00020dc2u): goto L_20DC2;
    case RC_ADDR(0x00020dc6u): goto L_20DC6;
    case RC_ADDR(0x00020dccu): goto L_20DCC;
    case RC_ADDR(0x00020dd2u): goto L_20DD2;
    case RC_ADDR(0x00020dd6u): goto L_20DD6;
    case RC_ADDR(0x00020ddau): goto L_20DDA;
    case RC_ADDR(0x00020ddcu): goto L_20DDC;
    case RC_ADDR(0x00020de2u): goto L_20DE2;
    case RC_ADDR(0x00020de6u): goto L_20DE6;
    case RC_ADDR(0x00020deau): goto L_20DEA;
    case RC_ADDR(0x00020decu): goto L_20DEC;
    case RC_ADDR(0x00020df0u): goto L_20DF0;
    case RC_ADDR(0x00020df4u): goto L_20DF4;
    case RC_ADDR(0x00020df8u): goto L_20DF8;
    case RC_ADDR(0x00020dfcu): goto L_20DFC;
    case RC_ADDR(0x00020e00u): goto L_20E00;
    case RC_ADDR(0x00020e06u): goto L_20E06;
    case RC_ADDR(0x00020e0au): goto L_20E0A;
    case RC_ADDR(0x00020e0eu): goto L_20E0E;
    case RC_ADDR(0x00020e12u): goto L_20E12;
    case RC_ADDR(0x00020e16u): goto L_20E16;
    case RC_ADDR(0x00020e18u): goto L_20E18;
    case RC_ADDR(0x00020e1cu): goto L_20E1C;
    case RC_ADDR(0x00020e20u): goto L_20E20;
    case RC_ADDR(0x00020e24u): goto L_20E24;
    case RC_ADDR(0x00020e28u): goto L_20E28;
    case RC_ADDR(0x00020e2cu): goto L_20E2C;
    case RC_ADDR(0x00020e2eu): goto L_20E2E;
    case RC_ADDR(0x00020e34u): goto L_20E34;
    case RC_ADDR(0x00020e36u): goto L_20E36;
    case RC_ADDR(0x00020e3au): goto L_20E3A;
    case RC_ADDR(0x00020e3eu): goto L_20E3E;
    case RC_ADDR(0x00020e42u): goto L_20E42;
    case RC_ADDR(0x00020e46u): goto L_20E46;
    case RC_ADDR(0x00020e4cu): goto L_20E4C;
    case RC_ADDR(0x00020e50u): goto L_20E50;
    case RC_ADDR(0x00020e52u): goto L_20E52;
    case RC_ADDR(0x00020e56u): goto L_20E56;
    case RC_ADDR(0x00020e5au): goto L_20E5A;
    case RC_ADDR(0x00020e5eu): goto L_20E5E;
    case RC_ADDR(0x00020e62u): goto L_20E62;
    case RC_ADDR(0x00020e64u): goto L_20E64;
    case RC_ADDR(0x00020e68u): goto L_20E68;
    case RC_ADDR(0x00020e6eu): goto L_20E6E;
    case RC_ADDR(0x00020e70u): goto L_20E70;
    case RC_ADDR(0x00020e74u): goto L_20E74;
    case RC_ADDR(0x00020e78u): goto L_20E78;
    case RC_ADDR(0x00020e7au): goto L_20E7A;
    case RC_ADDR(0x00020e7eu): goto L_20E7E;
    case RC_ADDR(0x00020e82u): goto L_20E82;
    case RC_ADDR(0x00020e88u): goto L_20E88;
    case RC_ADDR(0x00020e8cu): goto L_20E8C;
    case RC_ADDR(0x00020e92u): goto L_20E92;
    case RC_ADDR(0x00020e96u): goto L_20E96;
    case RC_ADDR(0x00020e9au): goto L_20E9A;
    case RC_ADDR(0x00020e9eu): goto L_20E9E;
    case RC_ADDR(0x00020ea2u): goto L_20EA2;
    case RC_ADDR(0x00020ea8u): goto L_20EA8;
    case RC_ADDR(0x00020eaeu): goto L_20EAE;
    case RC_ADDR(0x00020eb2u): goto L_20EB2;
    case RC_ADDR(0x00020eb4u): goto L_20EB4;
    case RC_ADDR(0x00020eb8u): goto L_20EB8;
    case RC_ADDR(0x00020ebeu): goto L_20EBE;
    case RC_ADDR(0x00020ec2u): goto L_20EC2;
    case RC_ADDR(0x00020ec6u): goto L_20EC6;
    case RC_ADDR(0x00020ec8u): goto L_20EC8;
    case RC_ADDR(0x00020eccu): goto L_20ECC;
    case RC_ADDR(0x00020ed4u): goto L_20ED4;
    case RC_ADDR(0x00020ed6u): goto L_20ED6;
    case RC_ADDR(0x00020edeu): goto L_20EDE;
    case RC_ADDR(0x00020ee0u): goto L_20EE0;
    case RC_ADDR(0x00020ee8u): goto L_20EE8;
    case RC_ADDR(0x00020eeau): goto L_20EEA;
    case RC_ADDR(0x00020eeeu): goto L_20EEE;
    case RC_ADDR(0x00020ef2u): goto L_20EF2;
    case RC_ADDR(0x00020ef6u): goto L_20EF6;
    case RC_ADDR(0x00020efau): goto L_20EFA;
    case RC_ADDR(0x00020efcu): goto L_20EFC;
    case RC_ADDR(0x00020efeu): goto L_20EFE;
    case RC_ADDR(0x00020f02u): goto L_20F02;
    case RC_ADDR(0x00020f06u): goto L_20F06;
    case RC_ADDR(0x00020f0au): goto L_20F0A;
    case RC_ADDR(0x00020f0eu): goto L_20F0E;
    case RC_ADDR(0x00020f12u): goto L_20F12;
    case RC_ADDR(0x00020f14u): goto L_20F14;
    case RC_ADDR(0x00020f1au): goto L_20F1A;
    case RC_ADDR(0x00020f1eu): goto L_20F1E;
    case RC_ADDR(0x00020f22u): goto L_20F22;
    case RC_ADDR(0x00020f24u): goto L_20F24;
    case RC_ADDR(0x00020f26u): goto L_20F26;
    case RC_ADDR(0x00020f2au): goto L_20F2A;
    case RC_ADDR(0x00020f2cu): goto L_20F2C;
    case RC_ADDR(0x00020f30u): goto L_20F30;
    case RC_ADDR(0x00020f34u): goto L_20F34;
    case RC_ADDR(0x00020f38u): goto L_20F38;
    case RC_ADDR(0x00020f3au): goto L_20F3A;
    case RC_ADDR(0x00020f3eu): goto L_20F3E;
    case RC_ADDR(0x00020f40u): goto L_20F40;
    case RC_ADDR(0x00020f44u): goto L_20F44;
    case RC_ADDR(0x00020f46u): goto L_20F46;
    case RC_ADDR(0x00020f4au): goto L_20F4A;
    case RC_ADDR(0x00020f4cu): goto L_20F4C;
    case RC_ADDR(0x00020f4eu): goto L_20F4E;
    case RC_ADDR(0x00020f52u): goto L_20F52;
    case RC_ADDR(0x00020f58u): goto L_20F58;
    case RC_ADDR(0x00020f5cu): goto L_20F5C;
    case RC_ADDR(0x00020f60u): goto L_20F60;
    case RC_ADDR(0x00020f64u): goto L_20F64;
    case RC_ADDR(0x00020f66u): goto L_20F66;
    case RC_ADDR(0x00020f6au): goto L_20F6A;
    case RC_ADDR(0x00020f6cu): goto L_20F6C;
    case RC_ADDR(0x00020f70u): goto L_20F70;
    case RC_ADDR(0x00020f72u): goto L_20F72;
    case RC_ADDR(0x00020f76u): goto L_20F76;
    case RC_ADDR(0x00020f7au): goto L_20F7A;
    case RC_ADDR(0x00020f7cu): goto L_20F7C;
    case RC_ADDR(0x00020f80u): goto L_20F80;
    case RC_ADDR(0x00020f86u): goto L_20F86;
    case RC_ADDR(0x00020f88u): goto L_20F88;
    case RC_ADDR(0x00020f90u): goto L_20F90;
    case RC_ADDR(0x00020f92u): goto L_20F92;
    case RC_ADDR(0x00020f96u): goto L_20F96;
    case RC_ADDR(0x00020f9au): goto L_20F9A;
    case RC_ADDR(0x00020f9eu): goto L_20F9E;
    case RC_ADDR(0x00020fa2u): goto L_20FA2;
    case RC_ADDR(0x00020fa6u): goto L_20FA6;
    case RC_ADDR(0x00020faau): goto L_20FAA;
    case RC_ADDR(0x00020faeu): goto L_20FAE;
    case RC_ADDR(0x00020fb2u): goto L_20FB2;
    case RC_ADDR(0x00020fb6u): goto L_20FB6;
    case RC_ADDR(0x00020fbau): goto L_20FBA;
    case RC_ADDR(0x00020fc2u): goto L_20FC2;
    case RC_ADDR(0x00020fc4u): goto L_20FC4;
    case RC_ADDR(0x00020fc8u): goto L_20FC8;
    case RC_ADDR(0x00020fcau): goto L_20FCA;
    case RC_ADDR(0x00020fceu): goto L_20FCE;
    case RC_ADDR(0x00020fd2u): goto L_20FD2;
    case RC_ADDR(0x00020fd6u): goto L_20FD6;
    case RC_ADDR(0x00020fdcu): goto L_20FDC;
    case RC_ADDR(0x00020fe2u): goto L_20FE2;
    case RC_ADDR(0x00020fe6u): goto L_20FE6;
    case RC_ADDR(0x00020feau): goto L_20FEA;
    case RC_ADDR(0x00020feeu): goto L_20FEE;
    case RC_ADDR(0x00020ff4u): goto L_20FF4;
    case RC_ADDR(0x00020ff8u): goto L_20FF8;
    case RC_ADDR(0x00020ffcu): goto L_20FFC;
    case RC_ADDR(0x00020ffeu): goto L_20FFE;
    case RC_ADDR(0x00021002u): goto L_21002;
    case RC_ADDR(0x00021006u): goto L_21006;
    case RC_ADDR(0x00021008u): goto L_21008;
    case RC_ADDR(0x0002100cu): goto L_2100C;
    case RC_ADDR(0x0002100eu): goto L_2100E;
    case RC_ADDR(0x00021016u): goto L_21016;
    case RC_ADDR(0x00021018u): goto L_21018;
    case RC_ADDR(0x0002101cu): goto L_2101C;
    case RC_ADDR(0x00021020u): goto L_21020;
    case RC_ADDR(0x00021022u): goto L_21022;
    case RC_ADDR(0x00021024u): goto L_21024;
    case RC_ADDR(0x00021026u): goto L_21026;
    case RC_ADDR(0x0002102au): goto L_2102A;
    case RC_ADDR(0x00021030u): goto L_21030;
    case RC_ADDR(0x00021032u): goto L_21032;
    case RC_ADDR(0x00021034u): goto L_21034;
    case RC_ADDR(0x00021036u): goto L_21036;
    case RC_ADDR(0x00021038u): goto L_21038;
    case RC_ADDR(0x0002103au): goto L_2103A;
    case RC_ADDR(0x0002103cu): goto L_2103C;
    case RC_ADDR(0x0002103eu): goto L_2103E;
    case RC_ADDR(0x00021040u): goto L_21040;
    case RC_ADDR(0x00021042u): goto L_21042;
    case RC_ADDR(0x00021046u): goto L_21046;
    case RC_ADDR(0x00021048u): goto L_21048;
    case RC_ADDR(0x0002104au): goto L_2104A;
    case RC_ADDR(0x0002104eu): goto L_2104E;
    case RC_ADDR(0x00021054u): goto L_21054;
    case RC_ADDR(0x00021058u): goto L_21058;
    case RC_ADDR(0x0002105eu): goto L_2105E;
    case RC_ADDR(0x00021060u): goto L_21060;
    case RC_ADDR(0x00021062u): goto L_21062;
    case RC_ADDR(0x00021064u): goto L_21064;
    case RC_ADDR(0x00021066u): goto L_21066;
    case RC_ADDR(0x00021068u): goto L_21068;
    case RC_ADDR(0x0002106au): goto L_2106A;
    case RC_ADDR(0x0002106eu): goto L_2106E;
    case RC_ADDR(0x00021072u): goto L_21072;
    case RC_ADDR(0x00021076u): goto L_21076;
    case RC_ADDR(0x00021078u): goto L_21078;
    case RC_ADDR(0x0002107cu): goto L_2107C;
    case RC_ADDR(0x0002107eu): goto L_2107E;
    case RC_ADDR(0x00021080u): goto L_21080;
    case RC_ADDR(0x00021084u): goto L_21084;
    case RC_ADDR(0x00021088u): goto L_21088;
    case RC_ADDR(0x0002108au): goto L_2108A;
    case RC_ADDR(0x0002108eu): goto L_2108E;
    case RC_ADDR(0x00021090u): goto L_21090;
    case RC_ADDR(0x00021094u): goto L_21094;
    case RC_ADDR(0x00021096u): goto L_21096;
    case RC_ADDR(0x00021098u): goto L_21098;
    case RC_ADDR(0x0002109cu): goto L_2109C;
    case RC_ADDR(0x000210a0u): goto L_210A0;
    case RC_ADDR(0x000210a4u): goto L_210A4;
    case RC_ADDR(0x000210a6u): goto L_210A6;
    case RC_ADDR(0x000210a8u): goto L_210A8;
    case RC_ADDR(0x000210acu): goto L_210AC;
    case RC_ADDR(0x000210aeu): goto L_210AE;
    case RC_ADDR(0x000210b0u): goto L_210B0;
    case RC_ADDR(0x000210b4u): goto L_210B4;
    case RC_ADDR(0x000210b8u): goto L_210B8;
    case RC_ADDR(0x000210bcu): goto L_210BC;
    case RC_ADDR(0x000210c2u): goto L_210C2;
    case RC_ADDR(0x000210c4u): goto L_210C4;
    case RC_ADDR(0x000210c8u): goto L_210C8;
    case RC_ADDR(0x000210ceu): goto L_210CE;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_20CBA:
    /* 00020cba   4  link.w A5,#ffffff6e */
    c->pc = RC_ADDR(0x00020cbau);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x92u;

L_20CBE:
    /* 00020cbe   4  clr.w (ffffffba,A5) */
    c->pc = RC_ADDR(0x00020cbeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x46u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20CC2:
    /* 00020cc2   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00020cc2u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20CC4:
    /* 00020cc4   4  move.w (ffffffba,A5),D0 */
    c->pc = RC_ADDR(0x00020cc4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20CC8:
    /* 00020cc8   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00020cc8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_20CCA:
    /* 00020cca   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00020ccau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_20CCC:
    /* 00020ccc   4  adda.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020cccu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] += t0;

L_20CD0:
    /* 00020cd0   4  clr.l (14,A0) */
    c->pc = RC_ADDR(0x00020cd0u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[0] + 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20CD4:
    /* 00020cd4   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00020cd4u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20CD6:
    /* 00020cd6   4  move.w (ffffffba,A5),D0 */
    c->pc = RC_ADDR(0x00020cd6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20CDA:
    /* 00020cda   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00020cdau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_20CDC:
    /* 00020cdc   4  lea (ffffffd2,A5),A0 */
    c->pc = RC_ADDR(0x00020cdcu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x2eu);

L_20CE0:
    /* 00020ce0   4  clr.l (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00020ce0u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20CE4:
    /* 00020ce4   4  addq.w #1,(ffffffba,A5) */
    c->pc = RC_ADDR(0x00020ce4u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x46u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20CE8:
    /* 00020ce8   6  cmpi.w #8,(ffffffba,A5) */
    c->pc = RC_ADDR(0x00020ce8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_20CEE:
    /* 00020cee   2  bcs 00020cc2 */
    c->pc = RC_ADDR(0x00020ceeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_20CC2; }

L_20CF0:
    /* 00020cf0   4  clr.l (ffffffce,A5) */
    c->pc = RC_ADDR(0x00020cf0u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x32u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20CF4:
    /* 00020cf4   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00020cf4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_20CF8:
    /* 00020cf8   4  tst.w (10,A5) */
    c->pc = RC_ADDR(0x00020cf8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x10u));
    rc_set_nzvc(c, t0, RC_W);

L_20CFC:
    /* 00020cfc   2  beq 00020d08 */
    c->pc = RC_ADDR(0x00020cfcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20D08;

L_20CFE:
    /* 00020cfe   8  move.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00020cfeu);
    rc_step(c, m, 24);
    t0 = 0x00000001u;
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D06:
    /* 00020d06   2  bra 00020d1a */
    c->pc = RC_ADDR(0x00020d06u);
    rc_step(c, m, 10);
    goto L_20D1A;

L_20D08:
    /* 00020d08   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00020d08u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000003edu);

L_20D0C:
    /* 00020d0c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00020d0cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D10:
    /* 00020d10   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x00020d10u);
    rc_step(c, m, 18);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x00020d14u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023daau);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022518u);
    return;

L_20D14:
    /* 00020d14   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020d14u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20D16:
    /* 00020d16   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00020d16u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D1A:
    /* 00020d1a   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00020d1au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_20D1E:
    /* 00020d1e   4  beq 0002106a */
    c->pc = RC_ADDR(0x00020d1eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2106A;

L_20D22:
    /* 00020d22   8  cmpi.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00020d22u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000001u);

L_20D2A:
    /* 00020d2a   2  bls 00020d40 */
    c->pc = RC_ADDR(0x00020d2au);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_20D40;

L_20D2C:
    /* 00020d2c   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00020d2cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D30:
    /* 00020d30   4  jsr (ffff82c0,A4) */
    c->pc = RC_ADDR(0x00020d30u);
    rc_step(c, m, 18);
    /* vector 117 */
    rc_push32(c, m, RC_ADDR(0x00020d34u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db6u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022688u);
    return;

L_20D34:
    /* 00020d34   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020d34u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20D36:
    /* 00020d36   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00020d36u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D3A:
    /* 00020d3a   4  jsr (ffff82ba,A4) */
    c->pc = RC_ADDR(0x00020d3au);
    rc_step(c, m, 18);
    /* vector 116 */
    rc_push32(c, m, RC_ADDR(0x00020d3eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023db0u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022532u);
    return;

L_20D3E:
    /* 00020d3e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00020d3eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_20D40:
    /* 00020d40   4  pea (00000004).l */
    c->pc = RC_ADDR(0x00020d40u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000004u);

L_20D44:
    /* 00020d44   4  pea (ffffffc6,A5) */
    c->pc = RC_ADDR(0x00020d44u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[5] - 0x3au));

L_20D48:
    /* 00020d48   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x00020d48u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020d4cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_20D4C:
    /* 00020d4c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020d4cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20D4E:
    /* 00020d4e   4  move.b (ffffd3fc,A4),D0 */
    c->pc = RC_ADDR(0x00020d4eu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[4] - 0x2c04u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20D52:
    /* 00020d52   2  ext.w D0 */
    c->pc = RC_ADDR(0x00020d52u);
    rc_step(c, m, 4);
    rc_ext_w(c, 0);

L_20D54:
    /* 00020d54   2  ext.l D0 */
    c->pc = RC_ADDR(0x00020d54u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_20D56:
    /* 00020d56   6  add.l #534d5300,D0 */
    c->pc = RC_ADDR(0x00020d56u);
    rc_step(c, m, 16);
    t0 = 0x534d5300u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_20D5C:
    /* 00020d5c   4  cmp.l (ffffffc6,A5),D0 */
    c->pc = RC_ADDR(0x00020d5cu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_20D60:
    /* 00020d60   4  bne 00021066 */
    c->pc = RC_ADDR(0x00020d60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_21066;

L_20D64:
    /* 00020d64   4  pea (00000016).l */
    c->pc = RC_ADDR(0x00020d64u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000016u);

L_20D68:
    /* 00020d68   4  pea (349c,A4) */
    c->pc = RC_ADDR(0x00020d68u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[4] + 0x349cu));

L_20D6C:
    /* 00020d6c   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x00020d6cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020d70u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_20D70:
    /* 00020d70   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020d70u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20D72:
    /* 00020d72   6  move.l (349c,A4),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00020d72u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x349cu));
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20D78:
    /* 00020d78   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020d78u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20D7C:
    /* 00020d7c   4  move.w (34a0,A4),(A0) */
    c->pc = RC_ADDR(0x00020d7cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] + 0x34a0u));
    rc_wr16(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20D80:
    /* 00020d80   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020d80u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20D84:
    /* 00020d84   6  move.w (34a2,A4),(2,A0) */
    c->pc = RC_ADDR(0x00020d84u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x34a2u));
    rc_wr16(c, m, (c->a[0] + 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20D8A:
    /* 00020d8a   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020d8au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20D8E:
    /* 00020d8e   6  move.w (34a4,A4),(8,A0) */
    c->pc = RC_ADDR(0x00020d8eu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x34a4u));
    rc_wr16(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20D94:
    /* 00020d94   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020d94u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20D98:
    /* 00020d98   6  move.w (34a6,A4),(a,A0) */
    c->pc = RC_ADDR(0x00020d98u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x34a6u));
    rc_wr16(c, m, (c->a[0] + 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20D9E:
    /* 00020d9e   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020d9eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20DA2:
    /* 00020da2   6  move.b (34a8,A4),(11,A0) */
    c->pc = RC_ADDR(0x00020da2u);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[4] + 0x34a8u));
    rc_wr8(c, m, (c->a[0] + 0x11u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_20DA8:
    /* 00020da8   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020da8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20DAC:
    /* 00020dac   6  move.b (34a9,A4),(4,A0) */
    c->pc = RC_ADDR(0x00020dacu);
    rc_step(c, m, 20);
    t0 = rc_rd8(c, m, (c->a[4] + 0x34a9u));
    rc_wr8(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_20DB2:
    /* 00020db2   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020db2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20DB6:
    /* 00020db6   6  move.w (34aa,A4),(6,A0) */
    c->pc = RC_ADDR(0x00020db6u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x34aau));
    rc_wr16(c, m, (c->a[0] + 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20DBC:
    /* 00020dbc   6  move.w (34b0,A4),(ffffffbc,A5) */
    c->pc = RC_ADDR(0x00020dbcu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[4] + 0x34b0u));
    rc_wr16(c, m, (c->a[5] - 0x44u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20DC2:
    /* 00020dc2   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020dc2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20DC6:
    /* 00020dc6   6  move.l (34ac,A4),(34,A0) */
    c->pc = RC_ADDR(0x00020dc6u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x34acu));
    rc_wr32(c, m, (c->a[0] + 0x34u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20DCC:
    /* 00020dcc   6  move.l (34ac,A4),(ffffffc2,A5) */
    c->pc = RC_ADDR(0x00020dccu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x34acu));
    rc_wr32(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20DD2:
    /* 00020dd2   4  move.w (ffffffbc,A5),D0 */
    c->pc = RC_ADDR(0x00020dd2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20DD6:
    /* 00020dd6   4  and.w #ff00,D0 */
    c->pc = RC_ADDR(0x00020dd6u);
    rc_step(c, m, 10);
    t0 = 0x0000ff00u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_20DDA:
    /* 00020dda   2  beq 00020e36 */
    c->pc = RC_ADDR(0x00020ddau);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20E36;

L_20DDC:
    /* 00020ddc   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00020ddcu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010001u);

L_20DE2:
    /* 00020de2   4  pea (00000080).l */
    c->pc = RC_ADDR(0x00020de2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000080u);

L_20DE6:
    /* 00020de6   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00020de6u);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00020deau));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_20DEA:
    /* 00020dea   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020deau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20DEC:
    /* 00020dec   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020decu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20DF0:
    /* 00020df0   4  move.l D0,(38,A0) */
    c->pc = RC_ADDR(0x00020df0u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x38u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20DF4:
    /* 00020df4   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020df4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20DF8:
    /* 00020df8   4  tst.l (38,A0) */
    c->pc = RC_ADDR(0x00020df8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x38u));
    rc_set_nzvc(c, t0, RC_L);

L_20DFC:
    /* 00020dfc   4  beq 0002106a */
    c->pc = RC_ADDR(0x00020dfcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2106A;

L_20E00:
    /* 00020e00   6  andi.w #ff,(ffffffbc,A5) */
    c->pc = RC_ADDR(0x00020e00u);
    rc_step(c, m, 20);
    t3 = (c->a[5] - 0x44u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 & 0x000000ffu;
    rc_wr16(c, m, t3, t2);
    rc_set_nzvc(c, t2, RC_W);

L_20E06:
    /* 00020e06   4  pea (00000060).l */
    c->pc = RC_ADDR(0x00020e06u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000060u);

L_20E0A:
    /* 00020e0a   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020e0au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20E0E:
    /* 00020e0e   4  move.l (38,A0),-(A7) */
    c->pc = RC_ADDR(0x00020e0eu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x38u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20E12:
    /* 00020e12   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x00020e12u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020e16u));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_20E16:
    /* 00020e16   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020e16u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20E18:
    /* 00020e18   4  pea (00000020).l */
    c->pc = RC_ADDR(0x00020e18u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000020u);

L_20E1C:
    /* 00020e1c   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020e1cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20E20:
    /* 00020e20   4  movea.l (38,A0),A1 */
    c->pc = RC_ADDR(0x00020e20u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x38u));
    c->a[1] = t0;

L_20E24:
    /* 00020e24   4  pea (60,A1) */
    c->pc = RC_ADDR(0x00020e24u);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[1] + 0x60u));

L_20E28:
    /* 00020e28   4  jsr (0002259c) */
    c->pc = RC_ADDR(0x00020e28u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020e2cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0002259cu);
    return;

L_20E2C:
    /* 00020e2c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020e2cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20E2E:
    /* 00020e2e   6  move.w #1,(349a,A4) */
    c->pc = RC_ADDR(0x00020e2eu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x349au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E34:
    /* 00020e34   2  bra 00020e3a */
    c->pc = RC_ADDR(0x00020e34u);
    rc_step(c, m, 10);
    goto L_20E3A;

L_20E36:
    /* 00020e36   4  clr.w (349a,A4) */
    c->pc = RC_ADDR(0x00020e36u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] + 0x349au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20E3A:
    /* 00020e3a   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020e3au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20E3E:
    /* 00020e3e   4  move.w (A0),(ffffffb6,A5) */
    c->pc = RC_ADDR(0x00020e3eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_wr16(c, m, (c->a[5] - 0x4au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E42:
    /* 00020e42   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020e42u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20E46:
    /* 00020e46   6  move.w (2,A0),(ffffffb4,A5) */
    c->pc = RC_ADDR(0x00020e46u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_wr16(c, m, (c->a[5] - 0x4cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E4C:
    /* 00020e4c   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020e4cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20E50:
    /* 00020e50   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00020e50u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20E52:
    /* 00020e52   4  move.b (11,A0),D0 */
    c->pc = RC_ADDR(0x00020e52u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x11u));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_20E56:
    /* 00020e56   4  move.w D0,(ffffffb2,A5) */
    c->pc = RC_ADDR(0x00020e56u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E5A:
    /* 00020e5a   4  move.w (ffffffb6,A5),D0 */
    c->pc = RC_ADDR(0x00020e5au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E5E:
    /* 00020e5e   4  and.w #7,D0 */
    c->pc = RC_ADDR(0x00020e5eu);
    rc_step(c, m, 10);
    t0 = 0x00000007u;
    t2 = t0 & rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t2, RC_W);
    rc_d_set(c, 0, RC_W, t2);

L_20E62:
    /* 00020e62   2  beq 00020e68 */
    c->pc = RC_ADDR(0x00020e62u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20E68;

L_20E64:
    /* 00020e64   4  addq.w #8,(ffffffb6,A5) */
    c->pc = RC_ADDR(0x00020e64u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20E68:
    /* 00020e68   6  btst #3,(ffffffb7,A5) */
    c->pc = RC_ADDR(0x00020e68u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x49u);
    t4 = 0x00000003u;
    t0 = rc_rd8(c, m, t3);
    rc_set_z(c, (t0 & (1u << t4)) == 0);

L_20E6E:
    /* 00020e6e   2  beq 00020e74 */
    c->pc = RC_ADDR(0x00020e6eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20E74;

L_20E70:
    /* 00020e70   4  addq.w #8,(ffffffb6,A5) */
    c->pc = RC_ADDR(0x00020e70u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4au);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000008u;
    rc_flags_add(c, RC_W, t1, 0x00000008u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20E74:
    /* 00020e74   4  move.w (ffffffb6,A5),D0 */
    c->pc = RC_ADDR(0x00020e74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E78:
    /* 00020e78   2  lsr.w #3,D0 */
    c->pc = RC_ADDR(0x00020e78u);
    rc_step(c, m, 6);
    rc_d_set(c, 0, RC_W, rc_shift(c, 1, 0, 0x00000003u, rc_d_get(c, 0, RC_W), RC_W));

L_20E7A:
    /* 00020e7a   4  move.w D0,(ffffffb6,A5) */
    c->pc = RC_ADDR(0x00020e7au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E7E:
    /* 00020e7e   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020e7eu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20E82:
    /* 00020e82   6  move.w (ffffffb6,A5),(c,A0) */
    c->pc = RC_ADDR(0x00020e82u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4au));
    rc_wr16(c, m, (c->a[0] + 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E88:
    /* 00020e88   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020e88u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20E8C:
    /* 00020e8c   6  move.w (ffffffb4,A5),(e,A0) */
    c->pc = RC_ADDR(0x00020e8cu);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4cu));
    rc_wr16(c, m, (c->a[0] + 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E92:
    /* 00020e92   4  move.w (ffffffb6,A5),D0 */
    c->pc = RC_ADDR(0x00020e92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E96:
    /* 00020e96   4  mulu.w (ffffffb4,A5),D0 */
    c->pc = RC_ADDR(0x00020e96u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4cu));
    rc_mulu(c, 0, t0);

L_20E9A:
    /* 00020e9a   4  move.w D0,(ffffffae,A5) */
    c->pc = RC_ADDR(0x00020e9au);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x52u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20E9E:
    /* 00020e9e   4  subq.w #1,(ffffffb4,A5) */
    c->pc = RC_ADDR(0x00020e9eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x4cu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20EA2:
    /* 00020ea2   6  move.l (34b2,A4),(ffffffce,A5) */
    c->pc = RC_ADDR(0x00020ea2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x34b2u));
    rc_wr32(c, m, (c->a[5] - 0x32u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20EA8:
    /* 00020ea8   6  move.w (ffffffb2,A5),(ffffffb0,A5) */
    c->pc = RC_ADDR(0x00020ea8u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4eu));
    rc_wr16(c, m, (c->a[5] - 0x50u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20EAE:
    /* 00020eae   4  clr.w (ffffffba,A5) */
    c->pc = RC_ADDR(0x00020eaeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x46u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20EB2:
    /* 00020eb2   2  bra 00020ef2 */
    c->pc = RC_ADDR(0x00020eb2u);
    rc_step(c, m, 10);
    goto L_20EF2;

L_20EB4:
    /* 00020eb4   4  move.l (ffffffc2,A5),D0 */
    c->pc = RC_ADDR(0x00020eb4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20EB8:
    /* 00020eb8   6  and.l #f,D0 */
    c->pc = RC_ADDR(0x00020eb8u);
    rc_step(c, m, 16);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 0, RC_L, t2);

L_20EBE:
    /* 00020ebe   4  move.l D0,(ffffffc6,A5) */
    c->pc = RC_ADDR(0x00020ebeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x3au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20EC2:
    /* 00020ec2   4  move.l (ffffffc2,A5),D0 */
    c->pc = RC_ADDR(0x00020ec2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20EC6:
    /* 00020ec6   2  lsr.l #4,D0 */
    c->pc = RC_ADDR(0x00020ec6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_L), RC_L));

L_20EC8:
    /* 00020ec8   4  move.l D0,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x00020ec8u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20ECC:
    /* 00020ecc   8  cmpi.l #c,(ffffffc6,A5) */
    c->pc = RC_ADDR(0x00020eccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    rc_cmp(c, RC_L, t0, 0x0000000cu);

L_20ED4:
    /* 00020ed4   2  beq 00020eea */
    c->pc = RC_ADDR(0x00020ed4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20EEA;

L_20ED6:
    /* 00020ed6   8  cmpi.l #d,(ffffffc6,A5) */
    c->pc = RC_ADDR(0x00020ed6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    rc_cmp(c, RC_L, t0, 0x0000000du);

L_20EDE:
    /* 00020ede   2  beq 00020eea */
    c->pc = RC_ADDR(0x00020edeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20EEA;

L_20EE0:
    /* 00020ee0   8  cmpi.l #8,(ffffffc6,A5) */
    c->pc = RC_ADDR(0x00020ee0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    rc_cmp(c, RC_L, t0, 0x00000008u);

L_20EE8:
    /* 00020ee8   2  bne 00020eee */
    c->pc = RC_ADDR(0x00020ee8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_20EEE;

L_20EEA:
    /* 00020eea   4  subq.w #1,(ffffffb0,A5) */
    c->pc = RC_ADDR(0x00020eeau);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x50u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20EEE:
    /* 00020eee   4  addq.w #1,(ffffffba,A5) */
    c->pc = RC_ADDR(0x00020eeeu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x46u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20EF2:
    /* 00020ef2   4  move.w (ffffffba,A5),D0 */
    c->pc = RC_ADDR(0x00020ef2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20EF6:
    /* 00020ef6   4  cmp.w (ffffffb2,A5),D0 */
    c->pc = RC_ADDR(0x00020ef6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20EFA:
    /* 00020efa   2  bcs 00020eb4 */
    c->pc = RC_ADDR(0x00020efau);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_20EB4; }

L_20EFC:
    /* 00020efc   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00020efcu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20EFE:
    /* 00020efe   4  move.w (ffffffae,A5),D0 */
    c->pc = RC_ADDR(0x00020efeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x52u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F02:
    /* 00020f02   4  move.l D0,(ffffffbe,A5) */
    c->pc = RC_ADDR(0x00020f02u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x42u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20F06:
    /* 00020f06   4  tst.l (ffffffbe,A5) */
    c->pc = RC_ADDR(0x00020f06u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    rc_set_nzvc(c, t0, RC_L);

L_20F0A:
    /* 00020f0a   4  beq 0002106a */
    c->pc = RC_ADDR(0x00020f0au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2106A;

L_20F0E:
    /* 00020f0e   4  clr.w (ffffffba,A5) */
    c->pc = RC_ADDR(0x00020f0eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x46u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20F12:
    /* 00020f12   2  bra 00020f5c */
    c->pc = RC_ADDR(0x00020f12u);
    rc_step(c, m, 10);
    goto L_20F5C;

L_20F14:
    /* 00020f14   6  pea (00010002).l */
    c->pc = RC_ADDR(0x00020f14u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00010002u);

L_20F1A:
    /* 00020f1a   4  move.l (ffffffbe,A5),-(A7) */
    c->pc = RC_ADDR(0x00020f1au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20F1E:
    /* 00020f1e   4  jsr (ffff835c,A4) */
    c->pc = RC_ADDR(0x00020f1eu);
    rc_step(c, m, 18);
    /* vector 143 */
    rc_push32(c, m, RC_ADDR(0x00020f22u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e52u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002372eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023732u);
    return;

L_20F22:
    /* 00020f22   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00020f22u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_20F24:
    /* 00020f24   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00020f24u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_20F26:
    /* 00020f26   4  move.w (ffffffba,A5),D1 */
    c->pc = RC_ADDR(0x00020f26u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F2A:
    /* 00020f2a   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00020f2au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_20F2C:
    /* 00020f2c   4  lea (ffffffd2,A5),A0 */
    c->pc = RC_ADDR(0x00020f2cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x2eu);

L_20F30:
    /* 00020f30   4  move.l D0,(0,A0,D1.w) */
    c->pc = RC_ADDR(0x00020f30u);
    rc_step(c, m, 18);
    t0 = rc_d_get(c, 0, RC_L);
    t4 = c->d[1];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20F34:
    /* 00020f34   4  beq 0002106a */
    c->pc = RC_ADDR(0x00020f34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_2106A;

L_20F38:
    /* 00020f38   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00020f38u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_20F3A:
    /* 00020f3a   4  move.w (ffffffba,A5),D0 */
    c->pc = RC_ADDR(0x00020f3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F3E:
    /* 00020f3e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00020f3eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_20F40:
    /* 00020f40   4  lea (ffffffd2,A5),A0 */
    c->pc = RC_ADDR(0x00020f40u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x2eu);

L_20F44:
    /* 00020f44   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00020f44u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_20F46:
    /* 00020f46   4  move.w (ffffffba,A5),D1 */
    c->pc = RC_ADDR(0x00020f46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F4A:
    /* 00020f4a   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00020f4au);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_20F4C:
    /* 00020f4c   2  movea.l D1,A1 */
    c->pc = RC_ADDR(0x00020f4cu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 1, RC_L);
    c->a[1] = t0;

L_20F4E:
    /* 00020f4e   4  adda.l (c,A5),A1 */
    c->pc = RC_ADDR(0x00020f4eu);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[1] += t0;

L_20F52:
    /* 00020f52   6  move.l (0,A0,D0.w),(14,A1) */
    c->pc = RC_ADDR(0x00020f52u);
    rc_step(c, m, 30);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[1] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20F58:
    /* 00020f58   4  addq.w #1,(ffffffba,A5) */
    c->pc = RC_ADDR(0x00020f58u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x46u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_20F5C:
    /* 00020f5c   4  move.w (ffffffba,A5),D0 */
    c->pc = RC_ADDR(0x00020f5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F60:
    /* 00020f60   4  cmp.w (ffffffb0,A5),D0 */
    c->pc = RC_ADDR(0x00020f60u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x50u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_20F64:
    /* 00020f64   2  bcs 00020f14 */
    c->pc = RC_ADDR(0x00020f64u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_20F14; }

L_20F66:
    /* 00020f66   4  tst.w (ffffffb0,A5) */
    c->pc = RC_ADDR(0x00020f66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x50u));
    rc_set_nzvc(c, t0, RC_W);

L_20F6A:
    /* 00020f6a   2  beq 00020fba */
    c->pc = RC_ADDR(0x00020f6au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20FBA;

L_20F6C:
    /* 00020f6c   4  tst.l (ffffffbe,A5) */
    c->pc = RC_ADDR(0x00020f6cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    rc_set_nzvc(c, t0, RC_L);

L_20F70:
    /* 00020f70   2  beq 00020fba */
    c->pc = RC_ADDR(0x00020f70u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_20FBA;

L_20F72:
    /* 00020f72   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020f72u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20F76:
    /* 00020f76   4  cmpi.w #1,(A0) */
    c->pc = RC_ADDR(0x00020f76u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, c->a[0]);
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_20F7A:
    /* 00020f7a   2  bhi 00020f88 */
    c->pc = RC_ADDR(0x00020f7au);
    rc_step(c, m, 10);
    if (rc_cond(c, 2)) goto L_20F88;

L_20F7C:
    /* 00020f7c   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020f7cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20F80:
    /* 00020f80   6  cmpi.w #1,(2,A0) */
    c->pc = RC_ADDR(0x00020f80u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[0] + 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_20F86:
    /* 00020f86   2  bls 00020fba */
    c->pc = RC_ADDR(0x00020f86u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_20FBA;

L_20F88:
    /* 00020f88   8  cmpi.l #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00020f88u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_L, t0, 0x00000001u);

L_20F90:
    /* 00020f90   2  bls 00020fba */
    c->pc = RC_ADDR(0x00020f90u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_20FBA;

L_20F92:
    /* 00020f92   4  move.w (ffffffae,A5),-(A7) */
    c->pc = RC_ADDR(0x00020f92u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x52u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F96:
    /* 00020f96   4  move.w (ffffffb0,A5),-(A7) */
    c->pc = RC_ADDR(0x00020f96u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x50u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F9A:
    /* 00020f9a   4  move.w (ffffffbc,A5),-(A7) */
    c->pc = RC_ADDR(0x00020f9au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x44u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20F9E:
    /* 00020f9e   4  move.w (ffffffb4,A5),-(A7) */
    c->pc = RC_ADDR(0x00020f9eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20FA2:
    /* 00020fa2   4  move.w (ffffffb6,A5),-(A7) */
    c->pc = RC_ADDR(0x00020fa2u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_20FA6:
    /* 00020fa6   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020fa6u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20FAA:
    /* 00020faa   4  pea (c,A0) */
    c->pc = RC_ADDR(0x00020faau);
    rc_step(c, m, 16);
    rc_push32(c, m, (c->a[0] + 0xcu));

L_20FAE:
    /* 00020fae   4  move.l (ffffffce,A5),-(A7) */
    c->pc = RC_ADDR(0x00020faeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x32u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_20FB2:
    /* 00020fb2   4  jsr (000221bc) */
    c->pc = RC_ADDR(0x00020fb2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00020fb6u));
    rc_depth++;
    c->pc = RC_ADDR(0x000221bcu);
    return;

L_20FB6:
    /* 00020fb6   4  lea (12,A7),A7 */
    c->pc = RC_ADDR(0x00020fb6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x12u);

L_20FBA:
    /* 00020fba   8  cmpi.l #1,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00020fbau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_cmp(c, RC_L, t0, 0x00000001u);

L_20FC2:
    /* 00020fc2   2  bls 00020fca */
    c->pc = RC_ADDR(0x00020fc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 3)) goto L_20FCA;

L_20FC4:
    /* 00020fc4   4  jsr (ffff82c6,A4) */
    c->pc = RC_ADDR(0x00020fc4u);
    rc_step(c, m, 18);
    /* vector 118 */
    rc_push32(c, m, RC_ADDR(0x00020fc8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022892u);
    return;

L_20FC8:
    /* 00020fc8   2  bra 00020fd2 */
    c->pc = RC_ADDR(0x00020fc8u);
    rc_step(c, m, 10);
    goto L_20FD2;

L_20FCA:
    /* 00020fca   4  move.l (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00020fcau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20FCE:
    /* 00020fce   4  add.l D0,(34b2,A4) */
    c->pc = RC_ADDR(0x00020fceu);
    rc_step(c, m, 24);
    t3 = (c->a[4] + 0x34b2u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_20FD2:
    /* 00020fd2   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00020fd2u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_20FD6:
    /* 00020fd6   6  move.w #1,(12,A0) */
    c->pc = RC_ADDR(0x00020fd6u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[0] + 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_20FDC:
    /* 00020fdc   6  move.l (34ac,A4),(ffffffc2,A5) */
    c->pc = RC_ADDR(0x00020fdcu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[4] + 0x34acu));
    rc_wr32(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20FE2:
    /* 00020fe2   4  clr.w (ffffffb8,A5) */
    c->pc = RC_ADDR(0x00020fe2u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x48u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20FE6:
    /* 00020fe6   4  clr.w (ffffffba,A5) */
    c->pc = RC_ADDR(0x00020fe6u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x46u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_20FEA:
    /* 00020fea   4  move.l (ffffffc2,A5),D0 */
    c->pc = RC_ADDR(0x00020feau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20FEE:
    /* 00020fee   6  and.l #f,D0 */
    c->pc = RC_ADDR(0x00020feeu);
    rc_step(c, m, 16);
    t0 = 0x0000000fu;
    t2 = t0 & rc_d_get(c, 0, RC_L);
    rc_set_nzvc(c, t2, RC_L);
    rc_d_set(c, 0, RC_L, t2);

L_20FF4:
    /* 00020ff4   4  move.l D0,(ffffffc6,A5) */
    c->pc = RC_ADDR(0x00020ff4u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x3au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_20FF8:
    /* 00020ff8   4  move.l (ffffffc2,A5),D0 */
    c->pc = RC_ADDR(0x00020ff8u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3eu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_20FFC:
    /* 00020ffc   2  lsr.l #4,D0 */
    c->pc = RC_ADDR(0x00020ffcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 1, 0, 0x00000004u, rc_d_get(c, 0, RC_L), RC_L));

L_20FFE:
    /* 00020ffe   4  move.l D0,(ffffffc2,A5) */
    c->pc = RC_ADDR(0x00020ffeu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x3eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21002:
    /* 00021002   4  move.l (ffffffc6,A5),D0 */
    c->pc = RC_ADDR(0x00021002u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x3au));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_21006:
    /* 00021006   2  bra 00021032 */
    c->pc = RC_ADDR(0x00021006u);
    rc_step(c, m, 10);
    goto L_21032;

L_21008:
    /* 00021008   4  clr.l (fffffff2,A5) */
    c->pc = RC_ADDR(0x00021008u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0xeu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_2100C:
    /* 0002100c   2  bra 00021040 */
    c->pc = RC_ADDR(0x0002100cu);
    rc_step(c, m, 10);
    goto L_21040;

L_2100E:
    /* 0002100e   8  move.l #ffffffff,(fffffff2,A5) */
    c->pc = RC_ADDR(0x0002100eu);
    rc_step(c, m, 24);
    t0 = 0xffffffffu;
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21016:
    /* 00021016   2  bra 00021040 */
    c->pc = RC_ADDR(0x00021016u);
    rc_step(c, m, 10);
    goto L_21040;

L_21018:
    /* 00021018   4  move.w (ffffffb8,A5),D0 */
    c->pc = RC_ADDR(0x00021018u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x48u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2101C:
    /* 0002101c   4  addq.w #1,(ffffffb8,A5) */
    c->pc = RC_ADDR(0x0002101cu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x48u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_21020:
    /* 00021020   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00021020u);
    rc_step(c, m, 4);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_21022:
    /* 00021022   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00021022u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21024:
    /* 00021024   2  asl.l #2,D1 */
    c->pc = RC_ADDR(0x00021024u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 1, RC_L), RC_L));

L_21026:
    /* 00021026   4  lea (ffffffd2,A5),A0 */
    c->pc = RC_ADDR(0x00021026u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[5] - 0x2eu);

L_2102A:
    /* 0002102a   6  move.l (0,A0,D1.w),(fffffff2,A5) */
    c->pc = RC_ADDR(0x0002102au);
    rc_step(c, m, 30);
    t4 = c->d[1];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_wr32(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21030:
    /* 00021030   2  bra 00021040 */
    c->pc = RC_ADDR(0x00021030u);
    rc_step(c, m, 10);
    goto L_21040;

L_21032:
    /* 00021032   2  subq.l #8,D0 */
    c->pc = RC_ADDR(0x00021032u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000008u;
    rc_flags_sub(c, RC_L, t1, 0x00000008u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_21034:
    /* 00021034   2  beq 00021008 */
    c->pc = RC_ADDR(0x00021034u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_21008; }

L_21036:
    /* 00021036   2  subq.l #4,D0 */
    c->pc = RC_ADDR(0x00021036u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_21038:
    /* 00021038   2  beq 00021008 */
    c->pc = RC_ADDR(0x00021038u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_21008; }

L_2103A:
    /* 0002103a   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x0002103au);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_2103C:
    /* 0002103c   2  beq 0002100e */
    c->pc = RC_ADDR(0x0002103cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) { rc_tick(); goto L_2100E; }

L_2103E:
    /* 0002103e   2  bra 00021018 */
    c->pc = RC_ADDR(0x0002103eu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21018;

L_21040:
    /* 00021040   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021040u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21042:
    /* 00021042   4  move.w (ffffffba,A5),D0 */
    c->pc = RC_ADDR(0x00021042u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21046:
    /* 00021046   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00021046u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_21048:
    /* 00021048   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00021048u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_2104A:
    /* 0002104a   4  adda.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0002104au);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] += t0;

L_2104E:
    /* 0002104e   6  move.l (fffffff2,A5),(14,A0) */
    c->pc = RC_ADDR(0x0002104eu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0xeu));
    rc_wr32(c, m, (c->a[0] + 0x14u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_21054:
    /* 00021054   4  addq.w #1,(ffffffba,A5) */
    c->pc = RC_ADDR(0x00021054u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x46u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_21058:
    /* 00021058   6  cmpi.w #8,(ffffffba,A5) */
    c->pc = RC_ADDR(0x00021058u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_2105E:
    /* 0002105e   2  bcs 00020fea */
    c->pc = RC_ADDR(0x0002105eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_20FEA; }

L_21060:
    /* 00021060   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00021060u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21062:
    /* 00021062   2  unlk A5 */
    c->pc = RC_ADDR(0x00021062u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_21064:
    /* 00021064   2  rts */
    c->pc = RC_ADDR(0x00021064u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

L_21066:
    /* 00021066   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021066u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21068:
    /* 00021068   2  bra 00021062 */
    c->pc = RC_ADDR(0x00021068u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21062;

L_2106A:
    /* 0002106a   4  movea.l (c,A5),A0 */
    c->pc = RC_ADDR(0x0002106au);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] = t0;

L_2106E:
    /* 0002106e   4  clr.w (12,A0) */
    c->pc = RC_ADDR(0x0002106eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[0] + 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21072:
    /* 00021072   4  clr.w (ffffffba,A5) */
    c->pc = RC_ADDR(0x00021072u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x46u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_21076:
    /* 00021076   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00021076u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21078:
    /* 00021078   4  move.w (ffffffba,A5),D0 */
    c->pc = RC_ADDR(0x00021078u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_2107C:
    /* 0002107c   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x0002107cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_2107E:
    /* 0002107e   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x0002107eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_21080:
    /* 00021080   4  adda.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00021080u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] += t0;

L_21084:
    /* 00021084   4  tst.l (14,A0) */
    c->pc = RC_ADDR(0x00021084u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[0] + 0x14u));
    rc_set_nzvc(c, t0, RC_L);

L_21088:
    /* 00021088   2  beq 000210a6 */
    c->pc = RC_ADDR(0x00021088u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_210A6;

L_2108A:
    /* 0002108a   4  move.l (ffffffbe,A5),-(A7) */
    c->pc = RC_ADDR(0x0002108au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x42u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_2108E:
    /* 0002108e   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x0002108eu);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_21090:
    /* 00021090   4  move.w (ffffffba,A5),D0 */
    c->pc = RC_ADDR(0x00021090u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_21094:
    /* 00021094   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00021094u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_21096:
    /* 00021096   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00021096u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_21098:
    /* 00021098   4  adda.l (c,A5),A0 */
    c->pc = RC_ADDR(0x00021098u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] += t0;

L_2109C:
    /* 0002109c   4  move.l (14,A0),-(A7) */
    c->pc = RC_ADDR(0x0002109cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[0] + 0x14u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_210A0:
    /* 000210a0   4  jsr (ffff8368,A4) */
    c->pc = RC_ADDR(0x000210a0u);
    rc_step(c, m, 18);
    /* vector 145 */
    rc_push32(c, m, RC_ADDR(0x000210a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023e5eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002376eu);
    rc_step(c, m, 10);
    c->pc = RC_ADDR(0x00023772u);
    return;

L_210A4:
    /* 000210a4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000210a4u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_210A6:
    /* 000210a6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x000210a6u);
    rc_step(c, m, 4);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_210A8:
    /* 000210a8   4  move.w (ffffffba,A5),D0 */
    c->pc = RC_ADDR(0x000210a8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_210AC:
    /* 000210ac   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x000210acu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_210AE:
    /* 000210ae   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x000210aeu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_210B0:
    /* 000210b0   4  adda.l (c,A5),A0 */
    c->pc = RC_ADDR(0x000210b0u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[0] += t0;

L_210B4:
    /* 000210b4   4  clr.l (14,A0) */
    c->pc = RC_ADDR(0x000210b4u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[0] + 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_210B8:
    /* 000210b8   4  addq.w #1,(ffffffba,A5) */
    c->pc = RC_ADDR(0x000210b8u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x46u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_210BC:
    /* 000210bc   6  cmpi.w #8,(ffffffba,A5) */
    c->pc = RC_ADDR(0x000210bcu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x46u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_210C2:
    /* 000210c2   2  bcs 00021076 */
    c->pc = RC_ADDR(0x000210c2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 5)) { rc_tick(); goto L_21076; }

L_210C4:
    /* 000210c4   4  jsr (ffff82c6,A4) */
    c->pc = RC_ADDR(0x000210c4u);
    rc_step(c, m, 18);
    /* vector 118 */
    rc_push32(c, m, RC_ADDR(0x000210c8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dbcu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022892u);
    return;

L_210C8:
    /* 000210c8   6  move.l #3039,D0 */
    c->pc = RC_ADDR(0x000210c8u);
    rc_step(c, m, 12);
    t0 = 0x00003039u;
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_210CE:
    /* 000210ce   2  bra 00021062 */
    c->pc = RC_ADDR(0x000210ceu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_21062;

}
