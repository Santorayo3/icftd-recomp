/* fn_00016cae - 842 byte(s), 254 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00016cae(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00016caeu): goto L_16CAE;
    case RC_ADDR(0x00016cb2u): goto L_16CB2;
    case RC_ADDR(0x00016cb6u): goto L_16CB6;
    case RC_ADDR(0x00016cb8u): goto L_16CB8;
    case RC_ADDR(0x00016cbau): goto L_16CBA;
    case RC_ADDR(0x00016cbeu): goto L_16CBE;
    case RC_ADDR(0x00016cc2u): goto L_16CC2;
    case RC_ADDR(0x00016cc6u): goto L_16CC6;
    case RC_ADDR(0x00016ccau): goto L_16CCA;
    case RC_ADDR(0x00016cccu): goto L_16CCC;
    case RC_ADDR(0x00016cceu): goto L_16CCE;
    case RC_ADDR(0x00016cd2u): goto L_16CD2;
    case RC_ADDR(0x00016cd6u): goto L_16CD6;
    case RC_ADDR(0x00016cdau): goto L_16CDA;
    case RC_ADDR(0x00016cdcu): goto L_16CDC;
    case RC_ADDR(0x00016cdeu): goto L_16CDE;
    case RC_ADDR(0x00016ce2u): goto L_16CE2;
    case RC_ADDR(0x00016ce8u): goto L_16CE8;
    case RC_ADDR(0x00016cecu): goto L_16CEC;
    case RC_ADDR(0x00016ceeu): goto L_16CEE;
    case RC_ADDR(0x00016cf0u): goto L_16CF0;
    case RC_ADDR(0x00016cf4u): goto L_16CF4;
    case RC_ADDR(0x00016cf8u): goto L_16CF8;
    case RC_ADDR(0x00016cfcu): goto L_16CFC;
    case RC_ADDR(0x00016cfeu): goto L_16CFE;
    case RC_ADDR(0x00016d00u): goto L_16D00;
    case RC_ADDR(0x00016d04u): goto L_16D04;
    case RC_ADDR(0x00016d08u): goto L_16D08;
    case RC_ADDR(0x00016d0cu): goto L_16D0C;
    case RC_ADDR(0x00016d0eu): goto L_16D0E;
    case RC_ADDR(0x00016d14u): goto L_16D14;
    case RC_ADDR(0x00016d16u): goto L_16D16;
    case RC_ADDR(0x00016d1au): goto L_16D1A;
    case RC_ADDR(0x00016d1cu): goto L_16D1C;
    case RC_ADDR(0x00016d1eu): goto L_16D1E;
    case RC_ADDR(0x00016d22u): goto L_16D22;
    case RC_ADDR(0x00016d28u): goto L_16D28;
    case RC_ADDR(0x00016d2eu): goto L_16D2E;
    case RC_ADDR(0x00016d30u): goto L_16D30;
    case RC_ADDR(0x00016d34u): goto L_16D34;
    case RC_ADDR(0x00016d36u): goto L_16D36;
    case RC_ADDR(0x00016d38u): goto L_16D38;
    case RC_ADDR(0x00016d3cu): goto L_16D3C;
    case RC_ADDR(0x00016d42u): goto L_16D42;
    case RC_ADDR(0x00016d48u): goto L_16D48;
    case RC_ADDR(0x00016d4au): goto L_16D4A;
    case RC_ADDR(0x00016d50u): goto L_16D50;
    case RC_ADDR(0x00016d52u): goto L_16D52;
    case RC_ADDR(0x00016d56u): goto L_16D56;
    case RC_ADDR(0x00016d58u): goto L_16D58;
    case RC_ADDR(0x00016d5au): goto L_16D5A;
    case RC_ADDR(0x00016d5eu): goto L_16D5E;
    case RC_ADDR(0x00016d64u): goto L_16D64;
    case RC_ADDR(0x00016d6au): goto L_16D6A;
    case RC_ADDR(0x00016d6cu): goto L_16D6C;
    case RC_ADDR(0x00016d72u): goto L_16D72;
    case RC_ADDR(0x00016d74u): goto L_16D74;
    case RC_ADDR(0x00016d78u): goto L_16D78;
    case RC_ADDR(0x00016d7au): goto L_16D7A;
    case RC_ADDR(0x00016d7cu): goto L_16D7C;
    case RC_ADDR(0x00016d80u): goto L_16D80;
    case RC_ADDR(0x00016d86u): goto L_16D86;
    case RC_ADDR(0x00016d8au): goto L_16D8A;
    case RC_ADDR(0x00016d8cu): goto L_16D8C;
    case RC_ADDR(0x00016d8eu): goto L_16D8E;
    case RC_ADDR(0x00016d92u): goto L_16D92;
    case RC_ADDR(0x00016d96u): goto L_16D96;
    case RC_ADDR(0x00016d98u): goto L_16D98;
    case RC_ADDR(0x00016d9au): goto L_16D9A;
    case RC_ADDR(0x00016d9eu): goto L_16D9E;
    case RC_ADDR(0x00016da2u): goto L_16DA2;
    case RC_ADDR(0x00016da4u): goto L_16DA4;
    case RC_ADDR(0x00016da6u): goto L_16DA6;
    case RC_ADDR(0x00016daau): goto L_16DAA;
    case RC_ADDR(0x00016daeu): goto L_16DAE;
    case RC_ADDR(0x00016db0u): goto L_16DB0;
    case RC_ADDR(0x00016db2u): goto L_16DB2;
    case RC_ADDR(0x00016db6u): goto L_16DB6;
    case RC_ADDR(0x00016db8u): goto L_16DB8;
    case RC_ADDR(0x00016dbcu): goto L_16DBC;
    case RC_ADDR(0x00016dbeu): goto L_16DBE;
    case RC_ADDR(0x00016dc2u): goto L_16DC2;
    case RC_ADDR(0x00016dc4u): goto L_16DC4;
    case RC_ADDR(0x00016dc6u): goto L_16DC6;
    case RC_ADDR(0x00016dcau): goto L_16DCA;
    case RC_ADDR(0x00016dccu): goto L_16DCC;
    case RC_ADDR(0x00016dd0u): goto L_16DD0;
    case RC_ADDR(0x00016dd4u): goto L_16DD4;
    case RC_ADDR(0x00016dd6u): goto L_16DD6;
    case RC_ADDR(0x00016dd8u): goto L_16DD8;
    case RC_ADDR(0x00016ddcu): goto L_16DDC;
    case RC_ADDR(0x00016de0u): goto L_16DE0;
    case RC_ADDR(0x00016de2u): goto L_16DE2;
    case RC_ADDR(0x00016de4u): goto L_16DE4;
    case RC_ADDR(0x00016de8u): goto L_16DE8;
    case RC_ADDR(0x00016decu): goto L_16DEC;
    case RC_ADDR(0x00016deeu): goto L_16DEE;
    case RC_ADDR(0x00016df0u): goto L_16DF0;
    case RC_ADDR(0x00016df4u): goto L_16DF4;
    case RC_ADDR(0x00016df8u): goto L_16DF8;
    case RC_ADDR(0x00016dfcu): goto L_16DFC;
    case RC_ADDR(0x00016dfeu): goto L_16DFE;
    case RC_ADDR(0x00016e02u): goto L_16E02;
    case RC_ADDR(0x00016e04u): goto L_16E04;
    case RC_ADDR(0x00016e06u): goto L_16E06;
    case RC_ADDR(0x00016e0au): goto L_16E0A;
    case RC_ADDR(0x00016e0eu): goto L_16E0E;
    case RC_ADDR(0x00016e12u): goto L_16E12;
    case RC_ADDR(0x00016e16u): goto L_16E16;
    case RC_ADDR(0x00016e18u): goto L_16E18;
    case RC_ADDR(0x00016e1au): goto L_16E1A;
    case RC_ADDR(0x00016e1eu): goto L_16E1E;
    case RC_ADDR(0x00016e24u): goto L_16E24;
    case RC_ADDR(0x00016e28u): goto L_16E28;
    case RC_ADDR(0x00016e2au): goto L_16E2A;
    case RC_ADDR(0x00016e2cu): goto L_16E2C;
    case RC_ADDR(0x00016e30u): goto L_16E30;
    case RC_ADDR(0x00016e34u): goto L_16E34;
    case RC_ADDR(0x00016e38u): goto L_16E38;
    case RC_ADDR(0x00016e3cu): goto L_16E3C;
    case RC_ADDR(0x00016e3eu): goto L_16E3E;
    case RC_ADDR(0x00016e40u): goto L_16E40;
    case RC_ADDR(0x00016e44u): goto L_16E44;
    case RC_ADDR(0x00016e46u): goto L_16E46;
    case RC_ADDR(0x00016e4au): goto L_16E4A;
    case RC_ADDR(0x00016e4cu): goto L_16E4C;
    case RC_ADDR(0x00016e4eu): goto L_16E4E;
    case RC_ADDR(0x00016e52u): goto L_16E52;
    case RC_ADDR(0x00016e56u): goto L_16E56;
    case RC_ADDR(0x00016e58u): goto L_16E58;
    case RC_ADDR(0x00016e5cu): goto L_16E5C;
    case RC_ADDR(0x00016e5eu): goto L_16E5E;
    case RC_ADDR(0x00016e60u): goto L_16E60;
    case RC_ADDR(0x00016e64u): goto L_16E64;
    case RC_ADDR(0x00016e66u): goto L_16E66;
    case RC_ADDR(0x00016e6au): goto L_16E6A;
    case RC_ADDR(0x00016e6cu): goto L_16E6C;
    case RC_ADDR(0x00016e6eu): goto L_16E6E;
    case RC_ADDR(0x00016e72u): goto L_16E72;
    case RC_ADDR(0x00016e76u): goto L_16E76;
    case RC_ADDR(0x00016e78u): goto L_16E78;
    case RC_ADDR(0x00016e7cu): goto L_16E7C;
    case RC_ADDR(0x00016e7eu): goto L_16E7E;
    case RC_ADDR(0x00016e80u): goto L_16E80;
    case RC_ADDR(0x00016e84u): goto L_16E84;
    case RC_ADDR(0x00016e8au): goto L_16E8A;
    case RC_ADDR(0x00016e8eu): goto L_16E8E;
    case RC_ADDR(0x00016e90u): goto L_16E90;
    case RC_ADDR(0x00016e92u): goto L_16E92;
    case RC_ADDR(0x00016e96u): goto L_16E96;
    case RC_ADDR(0x00016e9cu): goto L_16E9C;
    case RC_ADDR(0x00016ea0u): goto L_16EA0;
    case RC_ADDR(0x00016ea4u): goto L_16EA4;
    case RC_ADDR(0x00016ea8u): goto L_16EA8;
    case RC_ADDR(0x00016eaau): goto L_16EAA;
    case RC_ADDR(0x00016eaeu): goto L_16EAE;
    case RC_ADDR(0x00016eb2u): goto L_16EB2;
    case RC_ADDR(0x00016eb4u): goto L_16EB4;
    case RC_ADDR(0x00016eb8u): goto L_16EB8;
    case RC_ADDR(0x00016ebau): goto L_16EBA;
    case RC_ADDR(0x00016ebeu): goto L_16EBE;
    case RC_ADDR(0x00016ec2u): goto L_16EC2;
    case RC_ADDR(0x00016ec6u): goto L_16EC6;
    case RC_ADDR(0x00016ecau): goto L_16ECA;
    case RC_ADDR(0x00016eceu): goto L_16ECE;
    case RC_ADDR(0x00016ed2u): goto L_16ED2;
    case RC_ADDR(0x00016ed6u): goto L_16ED6;
    case RC_ADDR(0x00016ed8u): goto L_16ED8;
    case RC_ADDR(0x00016edau): goto L_16EDA;
    case RC_ADDR(0x00016edeu): goto L_16EDE;
    case RC_ADDR(0x00016ee0u): goto L_16EE0;
    case RC_ADDR(0x00016ee2u): goto L_16EE2;
    case RC_ADDR(0x00016ee6u): goto L_16EE6;
    case RC_ADDR(0x00016eecu): goto L_16EEC;
    case RC_ADDR(0x00016ef0u): goto L_16EF0;
    case RC_ADDR(0x00016ef2u): goto L_16EF2;
    case RC_ADDR(0x00016ef4u): goto L_16EF4;
    case RC_ADDR(0x00016ef8u): goto L_16EF8;
    case RC_ADDR(0x00016efcu): goto L_16EFC;
    case RC_ADDR(0x00016f00u): goto L_16F00;
    case RC_ADDR(0x00016f02u): goto L_16F02;
    case RC_ADDR(0x00016f06u): goto L_16F06;
    case RC_ADDR(0x00016f0au): goto L_16F0A;
    case RC_ADDR(0x00016f0eu): goto L_16F0E;
    case RC_ADDR(0x00016f10u): goto L_16F10;
    case RC_ADDR(0x00016f14u): goto L_16F14;
    case RC_ADDR(0x00016f18u): goto L_16F18;
    case RC_ADDR(0x00016f1cu): goto L_16F1C;
    case RC_ADDR(0x00016f20u): goto L_16F20;
    case RC_ADDR(0x00016f24u): goto L_16F24;
    case RC_ADDR(0x00016f28u): goto L_16F28;
    case RC_ADDR(0x00016f2cu): goto L_16F2C;
    case RC_ADDR(0x00016f30u): goto L_16F30;
    case RC_ADDR(0x00016f34u): goto L_16F34;
    case RC_ADDR(0x00016f38u): goto L_16F38;
    case RC_ADDR(0x00016f3au): goto L_16F3A;
    case RC_ADDR(0x00016f3cu): goto L_16F3C;
    case RC_ADDR(0x00016f40u): goto L_16F40;
    case RC_ADDR(0x00016f44u): goto L_16F44;
    case RC_ADDR(0x00016f48u): goto L_16F48;
    case RC_ADDR(0x00016f4cu): goto L_16F4C;
    case RC_ADDR(0x00016f4eu): goto L_16F4E;
    case RC_ADDR(0x00016f50u): goto L_16F50;
    case RC_ADDR(0x00016f54u): goto L_16F54;
    case RC_ADDR(0x00016f58u): goto L_16F58;
    case RC_ADDR(0x00016f5cu): goto L_16F5C;
    case RC_ADDR(0x00016f60u): goto L_16F60;
    case RC_ADDR(0x00016f62u): goto L_16F62;
    case RC_ADDR(0x00016f64u): goto L_16F64;
    case RC_ADDR(0x00016f68u): goto L_16F68;
    case RC_ADDR(0x00016f6cu): goto L_16F6C;
    case RC_ADDR(0x00016f72u): goto L_16F72;
    case RC_ADDR(0x00016f74u): goto L_16F74;
    case RC_ADDR(0x00016f78u): goto L_16F78;
    case RC_ADDR(0x00016f7au): goto L_16F7A;
    case RC_ADDR(0x00016f7cu): goto L_16F7C;
    case RC_ADDR(0x00016f80u): goto L_16F80;
    case RC_ADDR(0x00016f84u): goto L_16F84;
    case RC_ADDR(0x00016f88u): goto L_16F88;
    case RC_ADDR(0x00016f8au): goto L_16F8A;
    case RC_ADDR(0x00016f8cu): goto L_16F8C;
    case RC_ADDR(0x00016f90u): goto L_16F90;
    case RC_ADDR(0x00016f96u): goto L_16F96;
    case RC_ADDR(0x00016f9au): goto L_16F9A;
    case RC_ADDR(0x00016f9eu): goto L_16F9E;
    case RC_ADDR(0x00016fa2u): goto L_16FA2;
    case RC_ADDR(0x00016fa4u): goto L_16FA4;
    case RC_ADDR(0x00016fa6u): goto L_16FA6;
    case RC_ADDR(0x00016fa8u): goto L_16FA8;
    case RC_ADDR(0x00016facu): goto L_16FAC;
    case RC_ADDR(0x00016faeu): goto L_16FAE;
    case RC_ADDR(0x00016fb0u): goto L_16FB0;
    case RC_ADDR(0x00016fb4u): goto L_16FB4;
    case RC_ADDR(0x00016fbau): goto L_16FBA;
    case RC_ADDR(0x00016fbcu): goto L_16FBC;
    case RC_ADDR(0x00016fc0u): goto L_16FC0;
    case RC_ADDR(0x00016fc2u): goto L_16FC2;
    case RC_ADDR(0x00016fc4u): goto L_16FC4;
    case RC_ADDR(0x00016fc8u): goto L_16FC8;
    case RC_ADDR(0x00016fccu): goto L_16FCC;
    case RC_ADDR(0x00016fd0u): goto L_16FD0;
    case RC_ADDR(0x00016fd2u): goto L_16FD2;
    case RC_ADDR(0x00016fd4u): goto L_16FD4;
    case RC_ADDR(0x00016fd8u): goto L_16FD8;
    case RC_ADDR(0x00016fdcu): goto L_16FDC;
    case RC_ADDR(0x00016fdeu): goto L_16FDE;
    case RC_ADDR(0x00016fe2u): goto L_16FE2;
    case RC_ADDR(0x00016fe4u): goto L_16FE4;
    case RC_ADDR(0x00016fe8u): goto L_16FE8;
    case RC_ADDR(0x00016feau): goto L_16FEA;
    case RC_ADDR(0x00016fecu): goto L_16FEC;
    case RC_ADDR(0x00016ff0u): goto L_16FF0;
    case RC_ADDR(0x00016ff4u): goto L_16FF4;
    case RC_ADDR(0x00016ff6u): goto L_16FF6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_16CAE:
    /* 00016cae   4  link.w A5,#fffffff8 */
    c->pc = RC_ADDR(0x00016caeu);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x8u;

L_16CB2:
    /* 00016cb2   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016cb2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16CB6:
    /* 00016cb6   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016cb6u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16CB8:
    /* 00016cb8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016cb8u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16CBA:
    /* 00016cba   4  lea (1c66,A4),A0 */
    c->pc = RC_ADDR(0x00016cbau);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c66u);

L_16CBE:
    /* 00016cbe   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016cbeu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_16CC2:
    /* 00016cc2   4  beq 00016e24 */
    c->pc = RC_ADDR(0x00016cc2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16E24;

L_16CC6:
    /* 00016cc6   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016cc6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16CCA:
    /* 00016cca   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016ccau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16CCC:
    /* 00016ccc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016cccu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16CCE:
    /* 00016cce   4  lea (1c66,A4),A0 */
    c->pc = RC_ADDR(0x00016cceu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c66u);

L_16CD2:
    /* 00016cd2   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016cd2u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16CD6:
    /* 00016cd6   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016cd6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16CDA:
    /* 00016cda   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016cdau);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16CDC:
    /* 00016cdc   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016cdcu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16CDE:
    /* 00016cde   4  lea (1c36,A4),A0 */
    c->pc = RC_ADDR(0x00016cdeu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c36u);

L_16CE2:
    /* 00016ce2   6  move.w (0,A0,D0.w),(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016ce2u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16CE8:
    /* 00016ce8   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016ce8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16CEC:
    /* 00016cec   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016cecu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16CEE:
    /* 00016cee   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016ceeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16CF0:
    /* 00016cf0   4  lea (1c26,A4),A0 */
    c->pc = RC_ADDR(0x00016cf0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c26u);

L_16CF4:
    /* 00016cf4   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016cf4u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16CF8:
    /* 00016cf8   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016cf8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16CFC:
    /* 00016cfc   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016cfcu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16CFE:
    /* 00016cfe   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016cfeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16D00:
    /* 00016d00   4  lea (1c1e,A4),A0 */
    c->pc = RC_ADDR(0x00016d00u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c1eu);

L_16D04:
    /* 00016d04   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016d04u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16D08:
    /* 00016d08   4  tst.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00016d08u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_set_nzvc(c, t0, RC_W);

L_16D0C:
    /* 00016d0c   2  ble 00016d28 */
    c->pc = RC_ADDR(0x00016d0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16D28;

L_16D0E:
    /* 00016d0e   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016d0eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_16D14:
    /* 00016d14   2  bge 00016d28 */
    c->pc = RC_ADDR(0x00016d14u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16D28;

L_16D16:
    /* 00016d16   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016d16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16D1A:
    /* 00016d1a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016d1au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16D1C:
    /* 00016d1c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016d1cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16D1E:
    /* 00016d1e   4  lea (1c1e,A4),A0 */
    c->pc = RC_ADDR(0x00016d1eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c1eu);

L_16D22:
    /* 00016d22   6  move.w #5,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016d22u);
    rc_step(c, m, 18);
    t0 = 0x00000005u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16D28:
    /* 00016d28   6  cmpi.w #4,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016d28u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_16D2E:
    /* 00016d2e   2  ble 00016d42 */
    c->pc = RC_ADDR(0x00016d2eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16D42;

L_16D30:
    /* 00016d30   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016d30u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16D34:
    /* 00016d34   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016d34u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16D36:
    /* 00016d36   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016d36u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16D38:
    /* 00016d38   4  lea (1c1e,A4),A0 */
    c->pc = RC_ADDR(0x00016d38u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c1eu);

L_16D3C:
    /* 00016d3c   6  move.w #fffb,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016d3cu);
    rc_step(c, m, 18);
    t0 = 0x0000fffbu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16D42:
    /* 00016d42   6  cmpi.w #2,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016d42u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_16D48:
    /* 00016d48   2  ble 00016d64 */
    c->pc = RC_ADDR(0x00016d48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16D64;

L_16D4A:
    /* 00016d4a   6  cmpi.w #6,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016d4au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_16D50:
    /* 00016d50   2  bge 00016d64 */
    c->pc = RC_ADDR(0x00016d50u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16D64;

L_16D52:
    /* 00016d52   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016d52u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16D56:
    /* 00016d56   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016d56u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16D58:
    /* 00016d58   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016d58u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16D5A:
    /* 00016d5a   4  lea (1c26,A4),A0 */
    c->pc = RC_ADDR(0x00016d5au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c26u);

L_16D5E:
    /* 00016d5e   6  move.w #4,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016d5eu);
    rc_step(c, m, 18);
    t0 = 0x00000004u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16D64:
    /* 00016d64   6  cmpi.w #6,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016d64u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000006u);

L_16D6A:
    /* 00016d6a   2  bgt 00016d74 */
    c->pc = RC_ADDR(0x00016d6au);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_16D74;

L_16D6C:
    /* 00016d6c   6  cmpi.w #2,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00016d6cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_cmp(c, RC_W, t0, 0x00000002u);

L_16D72:
    /* 00016d72   2  bge 00016d86 */
    c->pc = RC_ADDR(0x00016d72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_16D86;

L_16D74:
    /* 00016d74   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016d74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16D78:
    /* 00016d78   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016d78u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16D7A:
    /* 00016d7a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016d7au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16D7C:
    /* 00016d7c   4  lea (1c26,A4),A0 */
    c->pc = RC_ADDR(0x00016d7cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c26u);

L_16D80:
    /* 00016d80   6  move.w #fffc,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016d80u);
    rc_step(c, m, 18);
    t0 = 0x0000fffcu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16D86:
    /* 00016d86   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016d86u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16D8A:
    /* 00016d8a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016d8au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16D8C:
    /* 00016d8c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016d8cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16D8E:
    /* 00016d8e   4  lea (1c54,A4),A0 */
    c->pc = RC_ADDR(0x00016d8eu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c54u);

L_16D92:
    /* 00016d92   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00016d92u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16D96:
    /* 00016d96   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016d96u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_16D98:
    /* 00016d98   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00016d98u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_16D9A:
    /* 00016d9a   4  lea (1bde,A4),A1 */
    c->pc = RC_ADDR(0x00016d9au);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1bdeu);

L_16D9E:
    /* 00016d9e   4  move.w (8,A5),D2 */
    c->pc = RC_ADDR(0x00016d9eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16DA2:
    /* 00016da2   2  ext.l D2 */
    c->pc = RC_ADDR(0x00016da2u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_16DA4:
    /* 00016da4   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x00016da4u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_16DA6:
    /* 00016da6   4  lea (1bfe,A4),A6 */
    c->pc = RC_ADDR(0x00016da6u);
    rc_step(c, m, 8);
    c->a[6] = (c->a[4] + 0x1bfeu);

L_16DAA:
    /* 00016daa   4  move.w (0,A6,D2.w),D3 */
    c->pc = RC_ADDR(0x00016daau);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[6] + 0x0u + t4));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16DAE:
    /* 00016dae   2  ext.l D3 */
    c->pc = RC_ADDR(0x00016daeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 3);

L_16DB0:
    /* 00016db0   2  asl.l #2,D3 */
    c->pc = RC_ADDR(0x00016db0u);
    rc_step(c, m, 8);
    rc_d_set(c, 3, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 3, RC_L), RC_L));

L_16DB2:
    /* 00016db2   4  lea (1b9a,A4),A6 */
    c->pc = RC_ADDR(0x00016db2u);
    rc_step(c, m, 8);
    c->a[6] = (c->a[4] + 0x1b9au);

L_16DB6:
    /* 00016db6   2  move.l A0,-(A7) */
    c->pc = RC_ADDR(0x00016db6u);
    rc_step(c, m, 12);
    t0 = rc_a_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16DB8:
    /* 00016db8   4  movea.l (0,A6,D3.w),A0 */
    c->pc = RC_ADDR(0x00016db8u);
    rc_step(c, m, 18);
    t4 = c->d[3];
    t0 = rc_rd32(c, m, (c->a[6] + 0x0u + t4));
    c->a[0] = t0;

L_16DBC:
    /* 00016dbc   2  moveq #0,D2 */
    c->pc = RC_ADDR(0x00016dbcu);
    rc_step(c, m, 4);
    c->d[2] = 0x00000000u;
    rc_set_nzvc(c, c->d[2], RC_L);

L_16DBE:
    /* 00016dbe   4  move.b (4,A0),D2 */
    c->pc = RC_ADDR(0x00016dbeu);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, (c->a[0] + 0x4u));
    rc_d_set(c, 2, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_16DC2:
    /* 00016dc2   2  lsr.w #1,D2 */
    c->pc = RC_ADDR(0x00016dc2u);
    rc_step(c, m, 6);
    rc_d_set(c, 2, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 2, RC_W), RC_W));

L_16DC4:
    /* 00016dc4   2  movea.l (A7)+,A0 */
    c->pc = RC_ADDR(0x00016dc4u);
    rc_step(c, m, 12);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    c->a[0] = t0;

L_16DC6:
    /* 00016dc6   4  move.w (0,A1,D1.w),D3 */
    c->pc = RC_ADDR(0x00016dc6u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16DCA:
    /* 00016dca   2  add.w D2,D3 */
    c->pc = RC_ADDR(0x00016dcau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_16DCC:
    /* 00016dcc   4  move.w D3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016dccu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 3, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16DD0:
    /* 00016dd0   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016dd0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16DD4:
    /* 00016dd4   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016dd4u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16DD6:
    /* 00016dd6   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016dd6u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16DD8:
    /* 00016dd8   4  lea (1c5c,A4),A0 */
    c->pc = RC_ADDR(0x00016dd8u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c5cu);

L_16DDC:
    /* 00016ddc   4  move.w (8,A5),D1 */
    c->pc = RC_ADDR(0x00016ddcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16DE0:
    /* 00016de0   2  ext.l D1 */
    c->pc = RC_ADDR(0x00016de0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 1);

L_16DE2:
    /* 00016de2   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00016de2u);
    rc_step(c, m, 8);
    rc_d_set(c, 1, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L));

L_16DE4:
    /* 00016de4   4  lea (1bfe,A4),A1 */
    c->pc = RC_ADDR(0x00016de4u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1bfeu);

L_16DE8:
    /* 00016de8   4  move.w (0,A1,D1.w),D2 */
    c->pc = RC_ADDR(0x00016de8u);
    rc_step(c, m, 14);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16DEC:
    /* 00016dec   2  ext.l D2 */
    c->pc = RC_ADDR(0x00016decu);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_16DEE:
    /* 00016dee   2  asl.l #2,D2 */
    c->pc = RC_ADDR(0x00016deeu);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 2, RC_L), RC_L));

L_16DF0:
    /* 00016df0   4  lea (1b9a,A4),A1 */
    c->pc = RC_ADDR(0x00016df0u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1b9au);

L_16DF4:
    /* 00016df4   4  movea.l (0,A1,D2.w),A6 */
    c->pc = RC_ADDR(0x00016df4u);
    rc_step(c, m, 18);
    t4 = c->d[2];
    t0 = rc_rd32(c, m, (c->a[1] + 0x0u + t4));
    c->a[6] = t0;

L_16DF8:
    /* 00016df8   4  move.w (2,A6),D1 */
    c->pc = RC_ADDR(0x00016df8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[6] + 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16DFC:
    /* 00016dfc   2  lsr.w #1,D1 */
    c->pc = RC_ADDR(0x00016dfcu);
    rc_step(c, m, 6);
    rc_d_set(c, 1, RC_W, rc_shift(c, 1, 0, 0x00000001u, rc_d_get(c, 1, RC_W), RC_W));

L_16DFE:
    /* 00016dfe   4  move.w (8,A5),D2 */
    c->pc = RC_ADDR(0x00016dfeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E02:
    /* 00016e02   2  ext.l D2 */
    c->pc = RC_ADDR(0x00016e02u);
    rc_step(c, m, 4);
    rc_ext_l(c, 2);

L_16E04:
    /* 00016e04   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x00016e04u);
    rc_step(c, m, 8);
    rc_d_set(c, 2, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L));

L_16E06:
    /* 00016e06   4  lea (1be6,A4),A1 */
    c->pc = RC_ADDR(0x00016e06u);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1be6u);

L_16E0A:
    /* 00016e0a   4  add.w (0,A1,D2.w),D1 */
    c->pc = RC_ADDR(0x00016e0au);
    rc_step(c, m, 14);
    t4 = c->d[2];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_16E0E:
    /* 00016e0e   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016e0eu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E12:
    /* 00016e12   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016e12u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E16:
    /* 00016e16   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016e16u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16E18:
    /* 00016e18   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016e18u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16E1A:
    /* 00016e1a   4  lea (1c4c,A4),A0 */
    c->pc = RC_ADDR(0x00016e1au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c4cu);

L_16E1E:
    /* 00016e1e   6  move.w #f,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016e1eu);
    rc_step(c, m, 18);
    t0 = 0x0000000fu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E24:
    /* 00016e24   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016e24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E28:
    /* 00016e28   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016e28u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16E2A:
    /* 00016e2a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016e2au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16E2C:
    /* 00016e2c   4  lea (1c4c,A4),A0 */
    c->pc = RC_ADDR(0x00016e2cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c4cu);

L_16E30:
    /* 00016e30   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016e30u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_16E34:
    /* 00016e34   4  ble 00016f28 */
    c->pc = RC_ADDR(0x00016e34u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_16F28;

L_16E38:
    /* 00016e38   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016e38u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E3C:
    /* 00016e3c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016e3cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16E3E:
    /* 00016e3e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016e3eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16E40:
    /* 00016e40   4  lea (1c54,A4),A0 */
    c->pc = RC_ADDR(0x00016e40u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c54u);

L_16E44:
    /* 00016e44   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00016e44u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_16E46:
    /* 00016e46   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016e46u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E4A:
    /* 00016e4a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016e4au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16E4C:
    /* 00016e4c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016e4cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16E4E:
    /* 00016e4e   4  lea (1c1e,A4),A1 */
    c->pc = RC_ADDR(0x00016e4eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1c1eu);

L_16E52:
    /* 00016e52   4  move.w (0,A1,D0.w),D1 */
    c->pc = RC_ADDR(0x00016e52u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E56:
    /* 00016e56   2  add.w D1,(A0) */
    c->pc = RC_ADDR(0x00016e56u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_16E58:
    /* 00016e58   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016e58u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E5C:
    /* 00016e5c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016e5cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16E5E:
    /* 00016e5e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016e5eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16E60:
    /* 00016e60   4  lea (1c5c,A4),A0 */
    c->pc = RC_ADDR(0x00016e60u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c5cu);

L_16E64:
    /* 00016e64   2  adda.l D0,A0 */
    c->pc = RC_ADDR(0x00016e64u);
    rc_step(c, m, 6);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] += t0;

L_16E66:
    /* 00016e66   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016e66u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E6A:
    /* 00016e6a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016e6au);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16E6C:
    /* 00016e6c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016e6cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16E6E:
    /* 00016e6e   4  lea (1c26,A4),A1 */
    c->pc = RC_ADDR(0x00016e6eu);
    rc_step(c, m, 8);
    c->a[1] = (c->a[4] + 0x1c26u);

L_16E72:
    /* 00016e72   4  move.w (0,A1,D0.w),D1 */
    c->pc = RC_ADDR(0x00016e72u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E76:
    /* 00016e76   2  add.w D1,(A0) */
    c->pc = RC_ADDR(0x00016e76u);
    rc_step(c, m, 12);
    t3 = c->a[0];
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 1, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 1, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_16E78:
    /* 00016e78   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016e78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E7C:
    /* 00016e7c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016e7cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16E7E:
    /* 00016e7e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016e7eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16E80:
    /* 00016e80   4  lea (1c54,A4),A0 */
    c->pc = RC_ADDR(0x00016e80u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c54u);

L_16E84:
    /* 00016e84   6  move.w (0,A0,D0.w),(fffffffc,A5) */
    c->pc = RC_ADDR(0x00016e84u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E8A:
    /* 00016e8a   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016e8au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E8E:
    /* 00016e8e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016e8eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16E90:
    /* 00016e90   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016e90u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16E92:
    /* 00016e92   4  lea (1c5c,A4),A0 */
    c->pc = RC_ADDR(0x00016e92u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c5cu);

L_16E96:
    /* 00016e96   6  move.w (0,A0,D0.w),(fffffffa,A5) */
    c->pc = RC_ADDR(0x00016e96u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16E9C:
    /* 00016e9c   4  move.l (1848,A4),-(A7) */
    c->pc = RC_ADDR(0x00016e9cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[4] + 0x1848u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_16EA0:
    /* 00016ea0   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00016ea0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16EA4:
    /* 00016ea4   4  sub.w (17f6,A4),D0 */
    c->pc = RC_ADDR(0x00016ea4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f6u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16EA8:
    /* 00016ea8   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00016ea8u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16EAA:
    /* 00016eaa   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00016eaau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16EAE:
    /* 00016eae   4  sub.w (17f4,A4),D0 */
    c->pc = RC_ADDR(0x00016eaeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x17f4u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_16EB2:
    /* 00016eb2   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00016eb2u);
    rc_step(c, m, 8);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16EB4:
    /* 00016eb4   4  jsr (ffff8176,A4) */
    c->pc = RC_ADDR(0x00016eb4u);
    rc_step(c, m, 18);
    /* vector 62 */
    rc_push32(c, m, RC_ADDR(0x00016eb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023c6cu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00012a5eu);
    return;

L_16EB8:
    /* 00016eb8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00016eb8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_16EBA:
    /* 00016eba   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00016ebau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000001u);

L_16EBE:
    /* 00016ebe   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00016ebeu);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16EC2:
    /* 00016ec2   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00016ec2u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16EC6:
    /* 00016ec6   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00016ec6u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16ECA:
    /* 00016eca   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00016ecau);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16ECE:
    /* 00016ece   4  jsr (0001563a) */
    c->pc = RC_ADDR(0x00016eceu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016ed2u));
    rc_depth++;
    c->pc = RC_ADDR(0x0001563au);
    return;

L_16ED2:
    /* 00016ed2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00016ed2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xcu);

L_16ED6:
    /* 00016ed6   2  tst.w D0 */
    c->pc = RC_ADDR(0x00016ed6u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_16ED8:
    /* 00016ed8   2  beq 00016eec */
    c->pc = RC_ADDR(0x00016ed8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16EEC;

L_16EDA:
    /* 00016eda   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016edau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16EDE:
    /* 00016ede   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016edeu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16EE0:
    /* 00016ee0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016ee0u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16EE2:
    /* 00016ee2   4  lea (1c4c,A4),A0 */
    c->pc = RC_ADDR(0x00016ee2u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c4cu);

L_16EE6:
    /* 00016ee6   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016ee6u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16EEC:
    /* 00016eec   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016eecu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16EF0:
    /* 00016ef0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016ef0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16EF2:
    /* 00016ef2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016ef2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16EF4:
    /* 00016ef4   4  lea (1c4c,A4),A0 */
    c->pc = RC_ADDR(0x00016ef4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c4cu);

L_16EF8:
    /* 00016ef8   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016ef8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16EFC:
    /* 00016efc   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016efcu);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_16F00:
    /* 00016f00   2  bne 00016f24 */
    c->pc = RC_ADDR(0x00016f00u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16F24;

L_16F02:
    /* 00016f02   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00016f02u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F06:
    /* 00016f06   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00016f06u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F0A:
    /* 00016f0a   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00016f0au);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F0E:
    /* 00016f0e   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00016f0eu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16F10:
    /* 00016f10   4  move.w #4,-(A7) */
    c->pc = RC_ADDR(0x00016f10u);
    rc_step(c, m, 12);
    t0 = 0x00000004u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F14:
    /* 00016f14   4  move.w (fffffffa,A5),-(A7) */
    c->pc = RC_ADDR(0x00016f14u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F18:
    /* 00016f18   4  move.w (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00016f18u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F1C:
    /* 00016f1c   4  jsr (00013d4a) */
    c->pc = RC_ADDR(0x00016f1cu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016f20u));
    rc_depth++;
    c->pc = RC_ADDR(0x00013d4au);
    return;

L_16F20:
    /* 00016f20   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x00016f20u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0xeu);

L_16F24:
    /* 00016f24   4  bra 00016ff4 */
    c->pc = RC_ADDR(0x00016f24u);
    rc_step(c, m, 10);
    goto L_16FF4;

L_16F28:
    /* 00016f28   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016f28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F2C:
    /* 00016f2c   4  cmp.w (1c3e,A4),D0 */
    c->pc = RC_ADDR(0x00016f2cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] + 0x1c3eu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_16F30:
    /* 00016f30   4  beq 00016fe4 */
    c->pc = RC_ADDR(0x00016f30u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16FE4;

L_16F34:
    /* 00016f34   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016f34u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F38:
    /* 00016f38   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016f38u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16F3A:
    /* 00016f3a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016f3au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16F3C:
    /* 00016f3c   4  lea (1c84,A4),A0 */
    c->pc = RC_ADDR(0x00016f3cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c84u);

L_16F40:
    /* 00016f40   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016f40u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_16F44:
    /* 00016f44   4  beq 00016fe4 */
    c->pc = RC_ADDR(0x00016f44u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16FE4;

L_16F48:
    /* 00016f48   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016f48u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F4C:
    /* 00016f4c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016f4cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16F4E:
    /* 00016f4e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016f4eu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16F50:
    /* 00016f50   4  lea (1c0e,A4),A0 */
    c->pc = RC_ADDR(0x00016f50u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c0eu);

L_16F54:
    /* 00016f54   4  tst.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016f54u);
    rc_step(c, m, 14);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_set_nzvc(c, t0, RC_W);

L_16F58:
    /* 00016f58   4  bne 00016fe4 */
    c->pc = RC_ADDR(0x00016f58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16FE4;

L_16F5C:
    /* 00016f5c   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016f5cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F60:
    /* 00016f60   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016f60u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16F62:
    /* 00016f62   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016f62u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16F64:
    /* 00016f64   4  lea (1c4c,A4),A0 */
    c->pc = RC_ADDR(0x00016f64u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c4cu);

L_16F68:
    /* 00016f68   4  subq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016f68u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16F6C:
    /* 00016f6c   6  cmpi.w #fff1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016f6cu);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_W, t0, 0x0000fff1u);

L_16F72:
    /* 00016f72   2  bne 00016fe2 */
    c->pc = RC_ADDR(0x00016f72u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_16FE2;

L_16F74:
    /* 00016f74   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016f74u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F78:
    /* 00016f78   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016f78u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16F7A:
    /* 00016f7a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016f7au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16F7C:
    /* 00016f7c   4  lea (1c42,A4),A0 */
    c->pc = RC_ADDR(0x00016f7cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c42u);

L_16F80:
    /* 00016f80   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016f80u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16F84:
    /* 00016f84   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016f84u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F88:
    /* 00016f88   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016f88u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16F8A:
    /* 00016f8a   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016f8au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16F8C:
    /* 00016f8c   4  lea (1c7c,A4),A0 */
    c->pc = RC_ADDR(0x00016f8cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c7cu);

L_16F90:
    /* 00016f90   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00016f90u);
    rc_step(c, m, 22);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F96:
    /* 00016f96   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00016f96u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F9A:
    /* 00016f9a   4  move.w (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00016f9au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_16F9E:
    /* 00016f9e   4  jsr (00016bb6) */
    c->pc = RC_ADDR(0x00016f9eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00016fa2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016bb6u);
    return;

L_16FA2:
    /* 00016fa2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00016fa2u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_16FA4:
    /* 00016fa4   2  tst.w D0 */
    c->pc = RC_ADDR(0x00016fa4u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_16FA6:
    /* 00016fa6   2  beq 00016fbc */
    c->pc = RC_ADDR(0x00016fa6u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_16FBC;

L_16FA8:
    /* 00016fa8   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016fa8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FAC:
    /* 00016fac   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016facu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16FAE:
    /* 00016fae   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016faeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16FB0:
    /* 00016fb0   4  lea (1c66,A4),A0 */
    c->pc = RC_ADDR(0x00016fb0u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c66u);

L_16FB4:
    /* 00016fb4   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016fb4u);
    rc_step(c, m, 18);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FBA:
    /* 00016fba   2  bra 00016fe2 */
    c->pc = RC_ADDR(0x00016fbau);
    rc_step(c, m, 10);
    goto L_16FE2;

L_16FBC:
    /* 00016fbc   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016fbcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FC0:
    /* 00016fc0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016fc0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16FC2:
    /* 00016fc2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016fc2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16FC4:
    /* 00016fc4   4  lea (1c4c,A4),A0 */
    c->pc = RC_ADDR(0x00016fc4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c4cu);

L_16FC8:
    /* 00016fc8   4  addq.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016fc8u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    t3 = (c->a[0] + 0x0u + t4);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_16FCC:
    /* 00016fcc   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016fccu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FD0:
    /* 00016fd0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016fd0u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16FD2:
    /* 00016fd2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016fd2u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16FD4:
    /* 00016fd4   4  lea (1c7c,A4),A0 */
    c->pc = RC_ADDR(0x00016fd4u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c7cu);

L_16FD8:
    /* 00016fd8   4  move.w (fffffff8,A5),D1 */
    c->pc = RC_ADDR(0x00016fd8u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FDC:
    /* 00016fdc   2  neg.w D1 */
    c->pc = RC_ADDR(0x00016fdcu);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_W, 0u, t1, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_16FDE:
    /* 00016fde   4  move.w D1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016fdeu);
    rc_step(c, m, 14);
    t0 = rc_d_get(c, 1, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FE2:
    /* 00016fe2   2  bra 00016ff4 */
    c->pc = RC_ADDR(0x00016fe2u);
    rc_step(c, m, 10);
    goto L_16FF4;

L_16FE4:
    /* 00016fe4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00016fe4u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_16FE8:
    /* 00016fe8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00016fe8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_16FEA:
    /* 00016fea   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00016feau);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_16FEC:
    /* 00016fec   4  lea (1c4c,A4),A0 */
    c->pc = RC_ADDR(0x00016fecu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] + 0x1c4cu);

L_16FF0:
    /* 00016ff0   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00016ff0u);
    rc_step(c, m, 18);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_16FF4:
    /* 00016ff4   2  unlk A5 */
    c->pc = RC_ADDR(0x00016ff4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_16FF6:
    /* 00016ff6   2  rts */
    c->pc = RC_ADDR(0x00016ff6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
