/* fn_00014dfa - 516 byte(s), 170 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00014dfa(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00014dfau): goto L_14DFA;
    case RC_ADDR(0x00014dfeu): goto L_14DFE;
    case RC_ADDR(0x00014e00u): goto L_14E00;
    case RC_ADDR(0x00014e04u): goto L_14E04;
    case RC_ADDR(0x00014e06u): goto L_14E06;
    case RC_ADDR(0x00014e0cu): goto L_14E0C;
    case RC_ADDR(0x00014e12u): goto L_14E12;
    case RC_ADDR(0x00014e18u): goto L_14E18;
    case RC_ADDR(0x00014e1au): goto L_14E1A;
    case RC_ADDR(0x00014e20u): goto L_14E20;
    case RC_ADDR(0x00014e26u): goto L_14E26;
    case RC_ADDR(0x00014e2au): goto L_14E2A;
    case RC_ADDR(0x00014e2eu): goto L_14E2E;
    case RC_ADDR(0x00014e32u): goto L_14E32;
    case RC_ADDR(0x00014e36u): goto L_14E36;
    case RC_ADDR(0x00014e3au): goto L_14E3A;
    case RC_ADDR(0x00014e3eu): goto L_14E3E;
    case RC_ADDR(0x00014e42u): goto L_14E42;
    case RC_ADDR(0x00014e46u): goto L_14E46;
    case RC_ADDR(0x00014e4au): goto L_14E4A;
    case RC_ADDR(0x00014e4eu): goto L_14E4E;
    case RC_ADDR(0x00014e50u): goto L_14E50;
    case RC_ADDR(0x00014e54u): goto L_14E54;
    case RC_ADDR(0x00014e56u): goto L_14E56;
    case RC_ADDR(0x00014e58u): goto L_14E58;
    case RC_ADDR(0x00014e5au): goto L_14E5A;
    case RC_ADDR(0x00014e5eu): goto L_14E5E;
    case RC_ADDR(0x00014e62u): goto L_14E62;
    case RC_ADDR(0x00014e64u): goto L_14E64;
    case RC_ADDR(0x00014e66u): goto L_14E66;
    case RC_ADDR(0x00014e68u): goto L_14E68;
    case RC_ADDR(0x00014e6au): goto L_14E6A;
    case RC_ADDR(0x00014e6cu): goto L_14E6C;
    case RC_ADDR(0x00014e6eu): goto L_14E6E;
    case RC_ADDR(0x00014e72u): goto L_14E72;
    case RC_ADDR(0x00014e76u): goto L_14E76;
    case RC_ADDR(0x00014e78u): goto L_14E78;
    case RC_ADDR(0x00014e7cu): goto L_14E7C;
    case RC_ADDR(0x00014e7eu): goto L_14E7E;
    case RC_ADDR(0x00014e82u): goto L_14E82;
    case RC_ADDR(0x00014e84u): goto L_14E84;
    case RC_ADDR(0x00014e86u): goto L_14E86;
    case RC_ADDR(0x00014e88u): goto L_14E88;
    case RC_ADDR(0x00014e8cu): goto L_14E8C;
    case RC_ADDR(0x00014e90u): goto L_14E90;
    case RC_ADDR(0x00014e92u): goto L_14E92;
    case RC_ADDR(0x00014e94u): goto L_14E94;
    case RC_ADDR(0x00014e96u): goto L_14E96;
    case RC_ADDR(0x00014e98u): goto L_14E98;
    case RC_ADDR(0x00014e9au): goto L_14E9A;
    case RC_ADDR(0x00014e9cu): goto L_14E9C;
    case RC_ADDR(0x00014ea0u): goto L_14EA0;
    case RC_ADDR(0x00014ea4u): goto L_14EA4;
    case RC_ADDR(0x00014ea8u): goto L_14EA8;
    case RC_ADDR(0x00014eacu): goto L_14EAC;
    case RC_ADDR(0x00014eaeu): goto L_14EAE;
    case RC_ADDR(0x00014eb2u): goto L_14EB2;
    case RC_ADDR(0x00014eb6u): goto L_14EB6;
    case RC_ADDR(0x00014eb8u): goto L_14EB8;
    case RC_ADDR(0x00014ebau): goto L_14EBA;
    case RC_ADDR(0x00014ebcu): goto L_14EBC;
    case RC_ADDR(0x00014ebeu): goto L_14EBE;
    case RC_ADDR(0x00014ec0u): goto L_14EC0;
    case RC_ADDR(0x00014ec2u): goto L_14EC2;
    case RC_ADDR(0x00014ec6u): goto L_14EC6;
    case RC_ADDR(0x00014ec8u): goto L_14EC8;
    case RC_ADDR(0x00014ecau): goto L_14ECA;
    case RC_ADDR(0x00014eccu): goto L_14ECC;
    case RC_ADDR(0x00014ed0u): goto L_14ED0;
    case RC_ADDR(0x00014ed6u): goto L_14ED6;
    case RC_ADDR(0x00014ed8u): goto L_14ED8;
    case RC_ADDR(0x00014edau): goto L_14EDA;
    case RC_ADDR(0x00014edcu): goto L_14EDC;
    case RC_ADDR(0x00014ee0u): goto L_14EE0;
    case RC_ADDR(0x00014ee6u): goto L_14EE6;
    case RC_ADDR(0x00014ee8u): goto L_14EE8;
    case RC_ADDR(0x00014eeau): goto L_14EEA;
    case RC_ADDR(0x00014eecu): goto L_14EEC;
    case RC_ADDR(0x00014ef0u): goto L_14EF0;
    case RC_ADDR(0x00014ef4u): goto L_14EF4;
    case RC_ADDR(0x00014ef6u): goto L_14EF6;
    case RC_ADDR(0x00014ef8u): goto L_14EF8;
    case RC_ADDR(0x00014efau): goto L_14EFA;
    case RC_ADDR(0x00014efeu): goto L_14EFE;
    case RC_ADDR(0x00014f02u): goto L_14F02;
    case RC_ADDR(0x00014f04u): goto L_14F04;
    case RC_ADDR(0x00014f06u): goto L_14F06;
    case RC_ADDR(0x00014f0au): goto L_14F0A;
    case RC_ADDR(0x00014f0cu): goto L_14F0C;
    case RC_ADDR(0x00014f0eu): goto L_14F0E;
    case RC_ADDR(0x00014f10u): goto L_14F10;
    case RC_ADDR(0x00014f14u): goto L_14F14;
    case RC_ADDR(0x00014f1au): goto L_14F1A;
    case RC_ADDR(0x00014f1cu): goto L_14F1C;
    case RC_ADDR(0x00014f1eu): goto L_14F1E;
    case RC_ADDR(0x00014f20u): goto L_14F20;
    case RC_ADDR(0x00014f24u): goto L_14F24;
    case RC_ADDR(0x00014f26u): goto L_14F26;
    case RC_ADDR(0x00014f28u): goto L_14F28;
    case RC_ADDR(0x00014f2au): goto L_14F2A;
    case RC_ADDR(0x00014f2eu): goto L_14F2E;
    case RC_ADDR(0x00014f34u): goto L_14F34;
    case RC_ADDR(0x00014f36u): goto L_14F36;
    case RC_ADDR(0x00014f38u): goto L_14F38;
    case RC_ADDR(0x00014f3au): goto L_14F3A;
    case RC_ADDR(0x00014f3eu): goto L_14F3E;
    case RC_ADDR(0x00014f42u): goto L_14F42;
    case RC_ADDR(0x00014f44u): goto L_14F44;
    case RC_ADDR(0x00014f46u): goto L_14F46;
    case RC_ADDR(0x00014f48u): goto L_14F48;
    case RC_ADDR(0x00014f4cu): goto L_14F4C;
    case RC_ADDR(0x00014f50u): goto L_14F50;
    case RC_ADDR(0x00014f52u): goto L_14F52;
    case RC_ADDR(0x00014f54u): goto L_14F54;
    case RC_ADDR(0x00014f58u): goto L_14F58;
    case RC_ADDR(0x00014f5au): goto L_14F5A;
    case RC_ADDR(0x00014f5cu): goto L_14F5C;
    case RC_ADDR(0x00014f5eu): goto L_14F5E;
    case RC_ADDR(0x00014f62u): goto L_14F62;
    case RC_ADDR(0x00014f68u): goto L_14F68;
    case RC_ADDR(0x00014f6au): goto L_14F6A;
    case RC_ADDR(0x00014f6cu): goto L_14F6C;
    case RC_ADDR(0x00014f6eu): goto L_14F6E;
    case RC_ADDR(0x00014f72u): goto L_14F72;
    case RC_ADDR(0x00014f74u): goto L_14F74;
    case RC_ADDR(0x00014f76u): goto L_14F76;
    case RC_ADDR(0x00014f78u): goto L_14F78;
    case RC_ADDR(0x00014f7cu): goto L_14F7C;
    case RC_ADDR(0x00014f82u): goto L_14F82;
    case RC_ADDR(0x00014f84u): goto L_14F84;
    case RC_ADDR(0x00014f86u): goto L_14F86;
    case RC_ADDR(0x00014f88u): goto L_14F88;
    case RC_ADDR(0x00014f8cu): goto L_14F8C;
    case RC_ADDR(0x00014f90u): goto L_14F90;
    case RC_ADDR(0x00014f92u): goto L_14F92;
    case RC_ADDR(0x00014f94u): goto L_14F94;
    case RC_ADDR(0x00014f96u): goto L_14F96;
    case RC_ADDR(0x00014f9au): goto L_14F9A;
    case RC_ADDR(0x00014fa0u): goto L_14FA0;
    case RC_ADDR(0x00014fa2u): goto L_14FA2;
    case RC_ADDR(0x00014fa4u): goto L_14FA4;
    case RC_ADDR(0x00014fa6u): goto L_14FA6;
    case RC_ADDR(0x00014faau): goto L_14FAA;
    case RC_ADDR(0x00014faeu): goto L_14FAE;
    case RC_ADDR(0x00014fb0u): goto L_14FB0;
    case RC_ADDR(0x00014fb2u): goto L_14FB2;
    case RC_ADDR(0x00014fb4u): goto L_14FB4;
    case RC_ADDR(0x00014fb8u): goto L_14FB8;
    case RC_ADDR(0x00014fbcu): goto L_14FBC;
    case RC_ADDR(0x00014fc0u): goto L_14FC0;
    case RC_ADDR(0x00014fc4u): goto L_14FC4;
    case RC_ADDR(0x00014fc6u): goto L_14FC6;
    case RC_ADDR(0x00014fcau): goto L_14FCA;
    case RC_ADDR(0x00014fccu): goto L_14FCC;
    case RC_ADDR(0x00014fceu): goto L_14FCE;
    case RC_ADDR(0x00014fd0u): goto L_14FD0;
    case RC_ADDR(0x00014fd2u): goto L_14FD2;
    case RC_ADDR(0x00014fd6u): goto L_14FD6;
    case RC_ADDR(0x00014fdcu): goto L_14FDC;
    case RC_ADDR(0x00014fdeu): goto L_14FDE;
    case RC_ADDR(0x00014fe0u): goto L_14FE0;
    case RC_ADDR(0x00014fe2u): goto L_14FE2;
    case RC_ADDR(0x00014fe4u): goto L_14FE4;
    case RC_ADDR(0x00014fe8u): goto L_14FE8;
    case RC_ADDR(0x00014feeu): goto L_14FEE;
    case RC_ADDR(0x00014ff0u): goto L_14FF0;
    case RC_ADDR(0x00014ff4u): goto L_14FF4;
    case RC_ADDR(0x00014ff8u): goto L_14FF8;
    case RC_ADDR(0x00014ffau): goto L_14FFA;
    case RC_ADDR(0x00014ffcu): goto L_14FFC;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_14DFA:
    /* 00014dfa   4  link.w A5,#0 */
    c->pc = RC_ADDR(0x00014dfau);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];

L_14DFE:
    /* 00014dfe   2  move.l D4,-(A7) */
    c->pc = RC_ADDR(0x00014dfeu);
    t0 = rc_d_get(c, 4, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_14E00:
    /* 00014e00   4  tst.w (10c0,A4) */
    c->pc = RC_ADDR(0x00014e00u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c0u));
    rc_set_nzvc(c, t0, RC_W);

L_14E04:
    /* 00014e04   2  bge 00014e0c */
    c->pc = RC_ADDR(0x00014e04u);
    if (rc_cond(c, 12)) goto L_14E0C;

L_14E06:
    /* 00014e06   6  move.w #3,(10c0,A4) */
    c->pc = RC_ADDR(0x00014e06u);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x10c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E0C:
    /* 00014e0c   6  move.w (8,A5),(12a6,A4) */
    c->pc = RC_ADDR(0x00014e0cu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_wr16(c, m, (c->a[4] + 0x12a6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E12:
    /* 00014e12   6  cmpi.w #4,(12a6,A4) */
    c->pc = RC_ADDR(0x00014e12u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12a6u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_14E18:
    /* 00014e18   2  ble 00014e20 */
    c->pc = RC_ADDR(0x00014e18u);
    if (rc_cond(c, 15)) goto L_14E20;

L_14E1A:
    /* 00014e1a   6  move.w #4,(12a6,A4) */
    c->pc = RC_ADDR(0x00014e1au);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[4] + 0x12a6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E20:
    /* 00014e20   6  move.w (12a6,A4),(12a8,A4) */
    c->pc = RC_ADDR(0x00014e20u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12a6u));
    rc_wr16(c, m, (c->a[4] + 0x12a8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E26:
    /* 00014e26   4  pea (11a0,A4) */
    c->pc = RC_ADDR(0x00014e26u);
    rc_push32(c, m, (c->a[4] + 0x11a0u));

L_14E2A:
    /* 00014e2a   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x00014e2au);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E2E:
    /* 00014e2e   4  pea (00014ffe) */
    c->pc = RC_ADDR(0x00014e2eu);
    rc_push32(c, m, RC_ADDR(0x00014ffeu));

L_14E32:
    /* 00014e32   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x00014e32u);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x00014e36u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_14E36:
    /* 00014e36   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00014e36u);
    c->a[7] = (c->a[7] + 0xau);

L_14E3A:
    /* 00014e3a   4  pea (11c0,A4) */
    c->pc = RC_ADDR(0x00014e3au);
    rc_push32(c, m, (c->a[4] + 0x11c0u));

L_14E3E:
    /* 00014e3e   4  move.w #9,-(A7) */
    c->pc = RC_ADDR(0x00014e3eu);
    t0 = 0x00000009u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E42:
    /* 00014e42   4  pea (00015003) */
    c->pc = RC_ADDR(0x00014e42u);
    rc_push32(c, m, RC_ADDR(0x00015003u));

L_14E46:
    /* 00014e46   4  jsr (ffff817c,A4) */
    c->pc = RC_ADDR(0x00014e46u);
    /* vector 63 */
    rc_push32(c, m, RC_ADDR(0x00014e4au));
    rc_depth++;
    c->pc = RC_ADDR(0x00016c00u);
    return;

L_14E4A:
    /* 00014e4a   4  lea (a,A7),A7 */
    c->pc = RC_ADDR(0x00014e4au);
    c->a[7] = (c->a[7] + 0xau);

L_14E4E:
    /* 00014e4e   2  moveq #0,D4 */
    c->pc = RC_ADDR(0x00014e4eu);
    c->d[4] = 0x00000000u;
    rc_set_nzvc(c, c->d[4], RC_L);

L_14E50:
    /* 00014e50   4  bra 00014ff0 */
    c->pc = RC_ADDR(0x00014e50u);
    goto L_14FF0;

L_14E54:
    /* 00014e54   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014e54u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E56:
    /* 00014e56   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014e56u);
    rc_ext_l(c, 0);

L_14E58:
    /* 00014e58   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014e58u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14E5A:
    /* 00014e5a   4  lea (11e4,A4),A0 */
    c->pc = RC_ADDR(0x00014e5au);
    c->a[0] = (c->a[4] + 0x11e4u);

L_14E5E:
    /* 00014e5e   4  move.w (10c0,A4),D1 */
    c->pc = RC_ADDR(0x00014e5eu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E62:
    /* 00014e62   2  ext.l D1 */
    c->pc = RC_ADDR(0x00014e62u);
    rc_ext_l(c, 1);

L_14E64:
    /* 00014e64   2  asl.l #3,D1 */
    c->pc = RC_ADDR(0x00014e64u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 1, RC_L), RC_L);

L_14E66:
    /* 00014e66   2  move.w D4,D2 */
    c->pc = RC_ADDR(0x00014e66u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E68:
    /* 00014e68   2  ext.l D2 */
    c->pc = RC_ADDR(0x00014e68u);
    rc_ext_l(c, 2);

L_14E6A:
    /* 00014e6a   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x00014e6au);
    c->d[2] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L);

L_14E6C:
    /* 00014e6c   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x00014e6cu);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_14E6E:
    /* 00014e6e   4  lea (ffffb2aa,A4),A1 */
    c->pc = RC_ADDR(0x00014e6eu);
    c->a[1] = (c->a[4] - 0x4d56u);

L_14E72:
    /* 00014e72   4  move.w (fffff2fe,A4),D2 */
    c->pc = RC_ADDR(0x00014e72u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd02u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E76:
    /* 00014e76   2  asl.w #4,D2 */
    c->pc = RC_ADDR(0x00014e76u);
    c->d[2] = rc_shift(c, 0, 1, 0x00000004u, rc_d_get(c, 2, RC_W), RC_W);

L_14E78:
    /* 00014e78   4  move.w (0,A1,D1.w),D3 */
    c->pc = RC_ADDR(0x00014e78u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E7C:
    /* 00014e7c   2  add.w D2,D3 */
    c->pc = RC_ADDR(0x00014e7cu);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_14E7E:
    /* 00014e7e   4  move.w D3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014e7eu);
    t0 = rc_d_get(c, 3, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E82:
    /* 00014e82   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014e82u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E84:
    /* 00014e84   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014e84u);
    rc_ext_l(c, 0);

L_14E86:
    /* 00014e86   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014e86u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14E88:
    /* 00014e88   4  lea (11ec,A4),A0 */
    c->pc = RC_ADDR(0x00014e88u);
    c->a[0] = (c->a[4] + 0x11ecu);

L_14E8C:
    /* 00014e8c   4  move.w (10c0,A4),D1 */
    c->pc = RC_ADDR(0x00014e8cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c0u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E90:
    /* 00014e90   2  ext.l D1 */
    c->pc = RC_ADDR(0x00014e90u);
    rc_ext_l(c, 1);

L_14E92:
    /* 00014e92   2  asl.l #3,D1 */
    c->pc = RC_ADDR(0x00014e92u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 1, RC_L), RC_L);

L_14E94:
    /* 00014e94   2  move.w D4,D2 */
    c->pc = RC_ADDR(0x00014e94u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14E96:
    /* 00014e96   2  ext.l D2 */
    c->pc = RC_ADDR(0x00014e96u);
    rc_ext_l(c, 2);

L_14E98:
    /* 00014e98   2  asl.l #1,D2 */
    c->pc = RC_ADDR(0x00014e98u);
    c->d[2] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 2, RC_L), RC_L);

L_14E9A:
    /* 00014e9a   2  add.l D2,D1 */
    c->pc = RC_ADDR(0x00014e9au);
    t0 = rc_d_get(c, 2, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_L, t2);

L_14E9C:
    /* 00014e9c   4  lea (ffffb2ca,A4),A1 */
    c->pc = RC_ADDR(0x00014e9cu);
    c->a[1] = (c->a[4] - 0x4d36u);

L_14EA0:
    /* 00014ea0   4  move.w (fffff2fc,A4),D2 */
    c->pc = RC_ADDR(0x00014ea0u);
    t0 = rc_rd16(c, m, (c->a[4] - 0xd04u));
    rc_d_set(c, 2, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EA4:
    /* 00014ea4   4  muls.w #a,D2 */
    c->pc = RC_ADDR(0x00014ea4u);
    t0 = 0x0000000au;
    rc_muls(c, 2, t0);

L_14EA8:
    /* 00014ea8   4  move.w (0,A1,D1.w),D3 */
    c->pc = RC_ADDR(0x00014ea8u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[1] + 0x0u + t4));
    rc_d_set(c, 3, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EAC:
    /* 00014eac   2  add.w D2,D3 */
    c->pc = RC_ADDR(0x00014eacu);
    t0 = rc_d_get(c, 2, RC_W);
    t1 = rc_d_get(c, 3, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 3, RC_W, t2);

L_14EAE:
    /* 00014eae   4  move.w D3,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014eaeu);
    t0 = rc_d_get(c, 3, RC_W);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EB2:
    /* 00014eb2   4  move.w (10c0,A4),D0 */
    c->pc = RC_ADDR(0x00014eb2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10c0u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EB6:
    /* 00014eb6   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014eb6u);
    rc_ext_l(c, 0);

L_14EB8:
    /* 00014eb8   2  asl.l #3,D0 */
    c->pc = RC_ADDR(0x00014eb8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000003u, rc_d_get(c, 0, RC_L), RC_L);

L_14EBA:
    /* 00014eba   2  move.w D4,D1 */
    c->pc = RC_ADDR(0x00014ebau);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EBC:
    /* 00014ebc   2  ext.l D1 */
    c->pc = RC_ADDR(0x00014ebcu);
    rc_ext_l(c, 1);

L_14EBE:
    /* 00014ebe   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00014ebeu);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_14EC0:
    /* 00014ec0   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00014ec0u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_14EC2:
    /* 00014ec2   4  lea (ffffb2ea,A4),A0 */
    c->pc = RC_ADDR(0x00014ec2u);
    c->a[0] = (c->a[4] - 0x4d16u);

L_14EC6:
    /* 00014ec6   2  move.w D4,D1 */
    c->pc = RC_ADDR(0x00014ec6u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EC8:
    /* 00014ec8   2  ext.l D1 */
    c->pc = RC_ADDR(0x00014ec8u);
    rc_ext_l(c, 1);

L_14ECA:
    /* 00014eca   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00014ecau);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_14ECC:
    /* 00014ecc   4  lea (120c,A4),A1 */
    c->pc = RC_ADDR(0x00014eccu);
    c->a[1] = (c->a[4] + 0x120cu);

L_14ED0:
    /* 00014ed0   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00014ed0u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14ED6:
    /* 00014ed6   2  move.w D4,D1 */
    c->pc = RC_ADDR(0x00014ed6u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14ED8:
    /* 00014ed8   2  ext.l D1 */
    c->pc = RC_ADDR(0x00014ed8u);
    rc_ext_l(c, 1);

L_14EDA:
    /* 00014eda   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00014edau);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_14EDC:
    /* 00014edc   4  lea (11f4,A4),A1 */
    c->pc = RC_ADDR(0x00014edcu);
    c->a[1] = (c->a[4] + 0x11f4u);

L_14EE0:
    /* 00014ee0   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00014ee0u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EE6:
    /* 00014ee6   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014ee6u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EE8:
    /* 00014ee8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014ee8u);
    rc_ext_l(c, 0);

L_14EEA:
    /* 00014eea   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014eeau);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14EEC:
    /* 00014eec   4  lea (1214,A4),A0 */
    c->pc = RC_ADDR(0x00014eecu);
    c->a[0] = (c->a[4] + 0x1214u);

L_14EF0:
    /* 00014ef0   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014ef0u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14EF4:
    /* 00014ef4   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014ef4u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14EF6:
    /* 00014ef6   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014ef6u);
    rc_ext_l(c, 0);

L_14EF8:
    /* 00014ef8   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014ef8u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14EFA:
    /* 00014efa   4  lea (11f4,A4),A0 */
    c->pc = RC_ADDR(0x00014efau);
    c->a[0] = (c->a[4] + 0x11f4u);

L_14EFE:
    /* 00014efe   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014efeu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F02:
    /* 00014f02   2  ext.l D1 */
    c->pc = RC_ADDR(0x00014f02u);
    rc_ext_l(c, 1);

L_14F04:
    /* 00014f04   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00014f04u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_14F06:
    /* 00014f06   4  lea (ffffb22a,A4),A0 */
    c->pc = RC_ADDR(0x00014f06u);
    c->a[0] = (c->a[4] - 0x4dd6u);

L_14F0A:
    /* 00014f0a   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014f0au);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F0C:
    /* 00014f0c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014f0cu);
    rc_ext_l(c, 0);

L_14F0E:
    /* 00014f0e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014f0eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14F10:
    /* 00014f10   4  lea (1204,A4),A1 */
    c->pc = RC_ADDR(0x00014f10u);
    c->a[1] = (c->a[4] + 0x1204u);

L_14F14:
    /* 00014f14   6  move.w (0,A0,D1.w),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x00014f14u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F1A:
    /* 00014f1a   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014f1au);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F1C:
    /* 00014f1c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014f1cu);
    rc_ext_l(c, 0);

L_14F1E:
    /* 00014f1e   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014f1eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14F20:
    /* 00014f20   4  lea (1204,A4),A0 */
    c->pc = RC_ADDR(0x00014f20u);
    c->a[0] = (c->a[4] + 0x1204u);

L_14F24:
    /* 00014f24   2  move.w D4,D1 */
    c->pc = RC_ADDR(0x00014f24u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F26:
    /* 00014f26   2  ext.l D1 */
    c->pc = RC_ADDR(0x00014f26u);
    rc_ext_l(c, 1);

L_14F28:
    /* 00014f28   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00014f28u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_14F2A:
    /* 00014f2a   4  lea (1234,A4),A1 */
    c->pc = RC_ADDR(0x00014f2au);
    c->a[1] = (c->a[4] + 0x1234u);

L_14F2E:
    /* 00014f2e   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00014f2eu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F34:
    /* 00014f34   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014f34u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F36:
    /* 00014f36   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014f36u);
    rc_ext_l(c, 0);

L_14F38:
    /* 00014f38   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014f38u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14F3A:
    /* 00014f3a   4  lea (121c,A4),A0 */
    c->pc = RC_ADDR(0x00014f3au);
    c->a[0] = (c->a[4] + 0x121cu);

L_14F3E:
    /* 00014f3e   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014f3eu);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14F42:
    /* 00014f42   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014f42u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F44:
    /* 00014f44   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014f44u);
    rc_ext_l(c, 0);

L_14F46:
    /* 00014f46   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014f46u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14F48:
    /* 00014f48   4  lea (11f4,A4),A0 */
    c->pc = RC_ADDR(0x00014f48u);
    c->a[0] = (c->a[4] + 0x11f4u);

L_14F4C:
    /* 00014f4c   4  move.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00014f4cu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F50:
    /* 00014f50   2  ext.l D1 */
    c->pc = RC_ADDR(0x00014f50u);
    rc_ext_l(c, 1);

L_14F52:
    /* 00014f52   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00014f52u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_14F54:
    /* 00014f54   4  lea (ffffb240,A4),A0 */
    c->pc = RC_ADDR(0x00014f54u);
    c->a[0] = (c->a[4] - 0x4dc0u);

L_14F58:
    /* 00014f58   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014f58u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F5A:
    /* 00014f5a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014f5au);
    rc_ext_l(c, 0);

L_14F5C:
    /* 00014f5c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014f5cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14F5E:
    /* 00014f5e   4  lea (11fc,A4),A1 */
    c->pc = RC_ADDR(0x00014f5eu);
    c->a[1] = (c->a[4] + 0x11fcu);

L_14F62:
    /* 00014f62   6  move.w (0,A0,D1.w),(0,A1,D0.w) */
    c->pc = RC_ADDR(0x00014f62u);
    t4 = c->d[1];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F68:
    /* 00014f68   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014f68u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F6A:
    /* 00014f6a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014f6au);
    rc_ext_l(c, 0);

L_14F6C:
    /* 00014f6c   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014f6cu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14F6E:
    /* 00014f6e   4  lea (11fc,A4),A0 */
    c->pc = RC_ADDR(0x00014f6eu);
    c->a[0] = (c->a[4] + 0x11fcu);

L_14F72:
    /* 00014f72   2  move.w D4,D1 */
    c->pc = RC_ADDR(0x00014f72u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F74:
    /* 00014f74   2  ext.l D1 */
    c->pc = RC_ADDR(0x00014f74u);
    rc_ext_l(c, 1);

L_14F76:
    /* 00014f76   2  asl.l #1,D1 */
    c->pc = RC_ADDR(0x00014f76u);
    c->d[1] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 1, RC_L), RC_L);

L_14F78:
    /* 00014f78   4  lea (123c,A4),A1 */
    c->pc = RC_ADDR(0x00014f78u);
    c->a[1] = (c->a[4] + 0x123cu);

L_14F7C:
    /* 00014f7c   6  move.w (0,A0,D0.w),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00014f7cu);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t4 = c->d[1];
    rc_wr16(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F82:
    /* 00014f82   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014f82u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F84:
    /* 00014f84   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014f84u);
    rc_ext_l(c, 0);

L_14F86:
    /* 00014f86   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014f86u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14F88:
    /* 00014f88   4  lea (126c,A4),A0 */
    c->pc = RC_ADDR(0x00014f88u);
    c->a[0] = (c->a[4] + 0x126cu);

L_14F8C:
    /* 00014f8c   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014f8cu);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14F90:
    /* 00014f90   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014f90u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14F92:
    /* 00014f92   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014f92u);
    rc_ext_l(c, 0);

L_14F94:
    /* 00014f94   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014f94u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14F96:
    /* 00014f96   4  lea (1252,A4),A0 */
    c->pc = RC_ADDR(0x00014f96u);
    c->a[0] = (c->a[4] + 0x1252u);

L_14F9A:
    /* 00014f9a   6  move.w #fff2,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014f9au);
    t0 = 0x0000fff2u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FA0:
    /* 00014fa0   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014fa0u);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FA2:
    /* 00014fa2   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014fa2u);
    rc_ext_l(c, 0);

L_14FA4:
    /* 00014fa4   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014fa4u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14FA6:
    /* 00014fa6   4  lea (1248,A4),A0 */
    c->pc = RC_ADDR(0x00014fa6u);
    c->a[0] = (c->a[4] + 0x1248u);

L_14FAA:
    /* 00014faa   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014faau);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14FAE:
    /* 00014fae   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014faeu);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FB0:
    /* 00014fb0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014fb0u);
    rc_ext_l(c, 0);

L_14FB2:
    /* 00014fb2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014fb2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14FB4:
    /* 00014fb4   4  lea (127a,A4),A0 */
    c->pc = RC_ADDR(0x00014fb4u);
    c->a[0] = (c->a[4] + 0x127au);

L_14FB8:
    /* 00014fb8   4  clr.w (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014fb8u);
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_14FBC:
    /* 00014fbc   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x00014fbcu);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FC0:
    /* 00014fc0   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00014fc0u);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00014fc4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_14FC4:
    /* 00014fc4   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00014fc4u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_14FC6:
    /* 00014fc6   4  cmp.w #1f4,D0 */
    c->pc = RC_ADDR(0x00014fc6u);
    t0 = 0x000001f4u;
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14FCA:
    /* 00014fca   2  bge 00014fde */
    c->pc = RC_ADDR(0x00014fcau);
    if (rc_cond(c, 12)) goto L_14FDE;

L_14FCC:
    /* 00014fcc   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014fccu);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FCE:
    /* 00014fce   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014fceu);
    rc_ext_l(c, 0);

L_14FD0:
    /* 00014fd0   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014fd0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14FD2:
    /* 00014fd2   4  lea (1282,A4),A0 */
    c->pc = RC_ADDR(0x00014fd2u);
    c->a[0] = (c->a[4] + 0x1282u);

L_14FD6:
    /* 00014fd6   6  move.w #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014fd6u);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FDC:
    /* 00014fdc   2  bra 00014fee */
    c->pc = RC_ADDR(0x00014fdcu);
    goto L_14FEE;

L_14FDE:
    /* 00014fde   2  move.w D4,D0 */
    c->pc = RC_ADDR(0x00014fdeu);
    t0 = rc_d_get(c, 4, RC_W);
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FE0:
    /* 00014fe0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00014fe0u);
    rc_ext_l(c, 0);

L_14FE2:
    /* 00014fe2   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00014fe2u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L);

L_14FE4:
    /* 00014fe4   4  lea (1282,A4),A0 */
    c->pc = RC_ADDR(0x00014fe4u);
    c->a[0] = (c->a[4] + 0x1282u);

L_14FE8:
    /* 00014fe8   6  move.w #ffff,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00014fe8u);
    t0 = 0x0000ffffu;
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_14FEE:
    /* 00014fee   2  addq.w #1,D4 */
    c->pc = RC_ADDR(0x00014feeu);
    t1 = rc_d_get(c, 4, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 4, RC_W, t2);

L_14FF0:
    /* 00014ff0   4  cmp.w (12a6,A4),D4 */
    c->pc = RC_ADDR(0x00014ff0u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x12a6u));
    t1 = rc_d_get(c, 4, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_14FF4:
    /* 00014ff4   4  blt 00014e54 */
    c->pc = RC_ADDR(0x00014ff4u);
    if (rc_cond(c, 13)) { rc_tick(); goto L_14E54; }

L_14FF8:
    /* 00014ff8   2  move.l (A7)+,D4 */
    c->pc = RC_ADDR(0x00014ff8u);
    t3 = c->a[7];
    c->a[7] += 4u;
    t0 = rc_rd32(c, m, t3);
    rc_d_set(c, 4, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_14FFA:
    /* 00014ffa   2  unlk A5 */
    c->pc = RC_ADDR(0x00014ffau);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_14FFC:
    /* 00014ffc   2  rts */
    c->pc = RC_ADDR(0x00014ffcu);
    rc_ret(c, m);
    return;

}
