/* fn_00012c34 - 936 byte(s), 256 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00012c34(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00012c34u): goto L_12C34;
    case RC_ADDR(0x00012c38u): goto L_12C38;
    case RC_ADDR(0x00012c3cu): goto L_12C3C;
    case RC_ADDR(0x00012c3eu): goto L_12C3E;
    case RC_ADDR(0x00012c40u): goto L_12C40;
    case RC_ADDR(0x00012c44u): goto L_12C44;
    case RC_ADDR(0x00012c48u): goto L_12C48;
    case RC_ADDR(0x00012c4cu): goto L_12C4C;
    case RC_ADDR(0x00012c4eu): goto L_12C4E;
    case RC_ADDR(0x00012c52u): goto L_12C52;
    case RC_ADDR(0x00012c54u): goto L_12C54;
    case RC_ADDR(0x00012c56u): goto L_12C56;
    case RC_ADDR(0x00012c5au): goto L_12C5A;
    case RC_ADDR(0x00012c5cu): goto L_12C5C;
    case RC_ADDR(0x00012c5eu): goto L_12C5E;
    case RC_ADDR(0x00012c62u): goto L_12C62;
    case RC_ADDR(0x00012c66u): goto L_12C66;
    case RC_ADDR(0x00012c68u): goto L_12C68;
    case RC_ADDR(0x00012c6eu): goto L_12C6E;
    case RC_ADDR(0x00012c70u): goto L_12C70;
    case RC_ADDR(0x00012c74u): goto L_12C74;
    case RC_ADDR(0x00012c76u): goto L_12C76;
    case RC_ADDR(0x00012c78u): goto L_12C78;
    case RC_ADDR(0x00012c7cu): goto L_12C7C;
    case RC_ADDR(0x00012c80u): goto L_12C80;
    case RC_ADDR(0x00012c84u): goto L_12C84;
    case RC_ADDR(0x00012c86u): goto L_12C86;
    case RC_ADDR(0x00012c8au): goto L_12C8A;
    case RC_ADDR(0x00012c8cu): goto L_12C8C;
    case RC_ADDR(0x00012c8eu): goto L_12C8E;
    case RC_ADDR(0x00012c92u): goto L_12C92;
    case RC_ADDR(0x00012c94u): goto L_12C94;
    case RC_ADDR(0x00012c98u): goto L_12C98;
    case RC_ADDR(0x00012c9cu): goto L_12C9C;
    case RC_ADDR(0x00012ca0u): goto L_12CA0;
    case RC_ADDR(0x00012ca4u): goto L_12CA4;
    case RC_ADDR(0x00012ca6u): goto L_12CA6;
    case RC_ADDR(0x00012cacu): goto L_12CAC;
    case RC_ADDR(0x00012cb0u): goto L_12CB0;
    case RC_ADDR(0x00012cb2u): goto L_12CB2;
    case RC_ADDR(0x00012cb6u): goto L_12CB6;
    case RC_ADDR(0x00012cb8u): goto L_12CB8;
    case RC_ADDR(0x00012cbcu): goto L_12CBC;
    case RC_ADDR(0x00012cc2u): goto L_12CC2;
    case RC_ADDR(0x00012cc4u): goto L_12CC4;
    case RC_ADDR(0x00012cc8u): goto L_12CC8;
    case RC_ADDR(0x00012ccau): goto L_12CCA;
    case RC_ADDR(0x00012cceu): goto L_12CCE;
    case RC_ADDR(0x00012cd0u): goto L_12CD0;
    case RC_ADDR(0x00012cd4u): goto L_12CD4;
    case RC_ADDR(0x00012cd8u): goto L_12CD8;
    case RC_ADDR(0x00012cdcu): goto L_12CDC;
    case RC_ADDR(0x00012ce2u): goto L_12CE2;
    case RC_ADDR(0x00012ce6u): goto L_12CE6;
    case RC_ADDR(0x00012ceau): goto L_12CEA;
    case RC_ADDR(0x00012ceeu): goto L_12CEE;
    case RC_ADDR(0x00012cf0u): goto L_12CF0;
    case RC_ADDR(0x00012cf4u): goto L_12CF4;
    case RC_ADDR(0x00012cfau): goto L_12CFA;
    case RC_ADDR(0x00012cfeu): goto L_12CFE;
    case RC_ADDR(0x00012d04u): goto L_12D04;
    case RC_ADDR(0x00012d08u): goto L_12D08;
    case RC_ADDR(0x00012d0eu): goto L_12D0E;
    case RC_ADDR(0x00012d12u): goto L_12D12;
    case RC_ADDR(0x00012d18u): goto L_12D18;
    case RC_ADDR(0x00012d1cu): goto L_12D1C;
    case RC_ADDR(0x00012d22u): goto L_12D22;
    case RC_ADDR(0x00012d24u): goto L_12D24;
    case RC_ADDR(0x00012d2au): goto L_12D2A;
    case RC_ADDR(0x00012d2cu): goto L_12D2C;
    case RC_ADDR(0x00012d32u): goto L_12D32;
    case RC_ADDR(0x00012d36u): goto L_12D36;
    case RC_ADDR(0x00012d3cu): goto L_12D3C;
    case RC_ADDR(0x00012d3eu): goto L_12D3E;
    case RC_ADDR(0x00012d44u): goto L_12D44;
    case RC_ADDR(0x00012d46u): goto L_12D46;
    case RC_ADDR(0x00012d4cu): goto L_12D4C;
    case RC_ADDR(0x00012d50u): goto L_12D50;
    case RC_ADDR(0x00012d56u): goto L_12D56;
    case RC_ADDR(0x00012d58u): goto L_12D58;
    case RC_ADDR(0x00012d5eu): goto L_12D5E;
    case RC_ADDR(0x00012d60u): goto L_12D60;
    case RC_ADDR(0x00012d66u): goto L_12D66;
    case RC_ADDR(0x00012d68u): goto L_12D68;
    case RC_ADDR(0x00012d6cu): goto L_12D6C;
    case RC_ADDR(0x00012d70u): goto L_12D70;
    case RC_ADDR(0x00012d72u): goto L_12D72;
    case RC_ADDR(0x00012d76u): goto L_12D76;
    case RC_ADDR(0x00012d7cu): goto L_12D7C;
    case RC_ADDR(0x00012d7eu): goto L_12D7E;
    case RC_ADDR(0x00012d84u): goto L_12D84;
    case RC_ADDR(0x00012d86u): goto L_12D86;
    case RC_ADDR(0x00012d8cu): goto L_12D8C;
    case RC_ADDR(0x00012d8eu): goto L_12D8E;
    case RC_ADDR(0x00012d94u): goto L_12D94;
    case RC_ADDR(0x00012d96u): goto L_12D96;
    case RC_ADDR(0x00012d9cu): goto L_12D9C;
    case RC_ADDR(0x00012d9eu): goto L_12D9E;
    case RC_ADDR(0x00012da4u): goto L_12DA4;
    case RC_ADDR(0x00012da6u): goto L_12DA6;
    case RC_ADDR(0x00012dacu): goto L_12DAC;
    case RC_ADDR(0x00012daeu): goto L_12DAE;
    case RC_ADDR(0x00012db4u): goto L_12DB4;
    case RC_ADDR(0x00012db8u): goto L_12DB8;
    case RC_ADDR(0x00012dbau): goto L_12DBA;
    case RC_ADDR(0x00012dbeu): goto L_12DBE;
    case RC_ADDR(0x00012dc0u): goto L_12DC0;
    case RC_ADDR(0x00012dc2u): goto L_12DC2;
    case RC_ADDR(0x00012dc4u): goto L_12DC4;
    case RC_ADDR(0x00012dc8u): goto L_12DC8;
    case RC_ADDR(0x00012dceu): goto L_12DCE;
    case RC_ADDR(0x00012dd2u): goto L_12DD2;
    case RC_ADDR(0x00012dd4u): goto L_12DD4;
    case RC_ADDR(0x00012dd8u): goto L_12DD8;
    case RC_ADDR(0x00012ddau): goto L_12DDA;
    case RC_ADDR(0x00012ddeu): goto L_12DDE;
    case RC_ADDR(0x00012de0u): goto L_12DE0;
    case RC_ADDR(0x00012de4u): goto L_12DE4;
    case RC_ADDR(0x00012de6u): goto L_12DE6;
    case RC_ADDR(0x00012deau): goto L_12DEA;
    case RC_ADDR(0x00012decu): goto L_12DEC;
    case RC_ADDR(0x00012df0u): goto L_12DF0;
    case RC_ADDR(0x00012df2u): goto L_12DF2;
    case RC_ADDR(0x00012df6u): goto L_12DF6;
    case RC_ADDR(0x00012df8u): goto L_12DF8;
    case RC_ADDR(0x00012dfeu): goto L_12DFE;
    case RC_ADDR(0x00012e02u): goto L_12E02;
    case RC_ADDR(0x00012e04u): goto L_12E04;
    case RC_ADDR(0x00012e08u): goto L_12E08;
    case RC_ADDR(0x00012e0au): goto L_12E0A;
    case RC_ADDR(0x00012e10u): goto L_12E10;
    case RC_ADDR(0x00012e12u): goto L_12E12;
    case RC_ADDR(0x00012e18u): goto L_12E18;
    case RC_ADDR(0x00012e1cu): goto L_12E1C;
    case RC_ADDR(0x00012e1eu): goto L_12E1E;
    case RC_ADDR(0x00012e20u): goto L_12E20;
    case RC_ADDR(0x00012e24u): goto L_12E24;
    case RC_ADDR(0x00012e2au): goto L_12E2A;
    case RC_ADDR(0x00012e2eu): goto L_12E2E;
    case RC_ADDR(0x00012e30u): goto L_12E30;
    case RC_ADDR(0x00012e32u): goto L_12E32;
    case RC_ADDR(0x00012e36u): goto L_12E36;
    case RC_ADDR(0x00012e3cu): goto L_12E3C;
    case RC_ADDR(0x00012e42u): goto L_12E42;
    case RC_ADDR(0x00012e44u): goto L_12E44;
    case RC_ADDR(0x00012e4au): goto L_12E4A;
    case RC_ADDR(0x00012e4cu): goto L_12E4C;
    case RC_ADDR(0x00012e50u): goto L_12E50;
    case RC_ADDR(0x00012e54u): goto L_12E54;
    case RC_ADDR(0x00012e58u): goto L_12E58;
    case RC_ADDR(0x00012e5eu): goto L_12E5E;
    case RC_ADDR(0x00012e64u): goto L_12E64;
    case RC_ADDR(0x00012e68u): goto L_12E68;
    case RC_ADDR(0x00012e6au): goto L_12E6A;
    case RC_ADDR(0x00012e6eu): goto L_12E6E;
    case RC_ADDR(0x00012e72u): goto L_12E72;
    case RC_ADDR(0x00012e74u): goto L_12E74;
    case RC_ADDR(0x00012e78u): goto L_12E78;
    case RC_ADDR(0x00012e7cu): goto L_12E7C;
    case RC_ADDR(0x00012e80u): goto L_12E80;
    case RC_ADDR(0x00012e82u): goto L_12E82;
    case RC_ADDR(0x00012e86u): goto L_12E86;
    case RC_ADDR(0x00012e88u): goto L_12E88;
    case RC_ADDR(0x00012e8cu): goto L_12E8C;
    case RC_ADDR(0x00012e90u): goto L_12E90;
    case RC_ADDR(0x00012e94u): goto L_12E94;
    case RC_ADDR(0x00012e96u): goto L_12E96;
    case RC_ADDR(0x00012e9au): goto L_12E9A;
    case RC_ADDR(0x00012e9eu): goto L_12E9E;
    case RC_ADDR(0x00012ea2u): goto L_12EA2;
    case RC_ADDR(0x00012ea6u): goto L_12EA6;
    case RC_ADDR(0x00012ea8u): goto L_12EA8;
    case RC_ADDR(0x00012eacu): goto L_12EAC;
    case RC_ADDR(0x00012eaeu): goto L_12EAE;
    case RC_ADDR(0x00012eb2u): goto L_12EB2;
    case RC_ADDR(0x00012eb6u): goto L_12EB6;
    case RC_ADDR(0x00012ebau): goto L_12EBA;
    case RC_ADDR(0x00012ebcu): goto L_12EBC;
    case RC_ADDR(0x00012ec0u): goto L_12EC0;
    case RC_ADDR(0x00012ec4u): goto L_12EC4;
    case RC_ADDR(0x00012ec8u): goto L_12EC8;
    case RC_ADDR(0x00012eccu): goto L_12ECC;
    case RC_ADDR(0x00012eceu): goto L_12ECE;
    case RC_ADDR(0x00012ed2u): goto L_12ED2;
    case RC_ADDR(0x00012ed6u): goto L_12ED6;
    case RC_ADDR(0x00012ed8u): goto L_12ED8;
    case RC_ADDR(0x00012edcu): goto L_12EDC;
    case RC_ADDR(0x00012edeu): goto L_12EDE;
    case RC_ADDR(0x00012ee0u): goto L_12EE0;
    case RC_ADDR(0x00012ee2u): goto L_12EE2;
    case RC_ADDR(0x00012ee6u): goto L_12EE6;
    case RC_ADDR(0x00012ee8u): goto L_12EE8;
    case RC_ADDR(0x00012eecu): goto L_12EEC;
    case RC_ADDR(0x00012ef0u): goto L_12EF0;
    case RC_ADDR(0x00012ef2u): goto L_12EF2;
    case RC_ADDR(0x00012ef6u): goto L_12EF6;
    case RC_ADDR(0x00012ef8u): goto L_12EF8;
    case RC_ADDR(0x00012efcu): goto L_12EFC;
    case RC_ADDR(0x00012f00u): goto L_12F00;
    case RC_ADDR(0x00012f04u): goto L_12F04;
    case RC_ADDR(0x00012f08u): goto L_12F08;
    case RC_ADDR(0x00012f0au): goto L_12F0A;
    case RC_ADDR(0x00012f0eu): goto L_12F0E;
    case RC_ADDR(0x00012f12u): goto L_12F12;
    case RC_ADDR(0x00012f16u): goto L_12F16;
    case RC_ADDR(0x00012f1cu): goto L_12F1C;
    case RC_ADDR(0x00012f20u): goto L_12F20;
    case RC_ADDR(0x00012f24u): goto L_12F24;
    case RC_ADDR(0x00012f28u): goto L_12F28;
    case RC_ADDR(0x00012f2eu): goto L_12F2E;
    case RC_ADDR(0x00012f32u): goto L_12F32;
    case RC_ADDR(0x00012f36u): goto L_12F36;
    case RC_ADDR(0x00012f3au): goto L_12F3A;
    case RC_ADDR(0x00012f3cu): goto L_12F3C;
    case RC_ADDR(0x00012f40u): goto L_12F40;
    case RC_ADDR(0x00012f44u): goto L_12F44;
    case RC_ADDR(0x00012f48u): goto L_12F48;
    case RC_ADDR(0x00012f4au): goto L_12F4A;
    case RC_ADDR(0x00012f4cu): goto L_12F4C;
    case RC_ADDR(0x00012f50u): goto L_12F50;
    case RC_ADDR(0x00012f54u): goto L_12F54;
    case RC_ADDR(0x00012f58u): goto L_12F58;
    case RC_ADDR(0x00012f5au): goto L_12F5A;
    case RC_ADDR(0x00012f5eu): goto L_12F5E;
    case RC_ADDR(0x00012f62u): goto L_12F62;
    case RC_ADDR(0x00012f66u): goto L_12F66;
    case RC_ADDR(0x00012f68u): goto L_12F68;
    case RC_ADDR(0x00012f6au): goto L_12F6A;
    case RC_ADDR(0x00012f6eu): goto L_12F6E;
    case RC_ADDR(0x00012f70u): goto L_12F70;
    case RC_ADDR(0x00012f74u): goto L_12F74;
    case RC_ADDR(0x00012f78u): goto L_12F78;
    case RC_ADDR(0x00012f7au): goto L_12F7A;
    case RC_ADDR(0x00012f7eu): goto L_12F7E;
    case RC_ADDR(0x00012f80u): goto L_12F80;
    case RC_ADDR(0x00012f84u): goto L_12F84;
    case RC_ADDR(0x00012f88u): goto L_12F88;
    case RC_ADDR(0x00012f8cu): goto L_12F8C;
    case RC_ADDR(0x00012f90u): goto L_12F90;
    case RC_ADDR(0x00012f94u): goto L_12F94;
    case RC_ADDR(0x00012f98u): goto L_12F98;
    case RC_ADDR(0x00012f9cu): goto L_12F9C;
    case RC_ADDR(0x00012fa2u): goto L_12FA2;
    case RC_ADDR(0x00012fa6u): goto L_12FA6;
    case RC_ADDR(0x00012faau): goto L_12FAA;
    case RC_ADDR(0x00012faeu): goto L_12FAE;
    case RC_ADDR(0x00012fb4u): goto L_12FB4;
    case RC_ADDR(0x00012fb8u): goto L_12FB8;
    case RC_ADDR(0x00012fbcu): goto L_12FBC;
    case RC_ADDR(0x00012fc0u): goto L_12FC0;
    case RC_ADDR(0x00012fc6u): goto L_12FC6;
    case RC_ADDR(0x00012fcau): goto L_12FCA;
    case RC_ADDR(0x00012fceu): goto L_12FCE;
    case RC_ADDR(0x00012fd2u): goto L_12FD2;
    case RC_ADDR(0x00012fd8u): goto L_12FD8;
    case RC_ADDR(0x00012fdau): goto L_12FDA;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_12C34:
    /* 00012c34   4  link.w A5,#ffffffe4 */
    c->pc = RC_ADDR(0x00012c34u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x1cu;

L_12C38:
    /* 00012c38   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00012c38u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C3C:
    /* 00012c3c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012c3cu);
    rc_ext_l(c, 0);

L_12C3E:
    /* 00012c3e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012c3eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_12C40:
    /* 00012c40   4  lea (ffff8440,A4),A0 */
    c->pc = RC_ADDR(0x00012c40u);
    c->a[0] = (c->a[4] - 0x7bc0u);

L_12C44:
    /* 00012c44   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00012c44u);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12C48:
    /* 00012c48   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012c48u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C4C:
    /* 00012c4c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012c4cu);
    rc_ext_l(c, 0);

L_12C4E:
    /* 00012c4e   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00012c4eu);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_12C52:
    /* 00012c52   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012c52u);
    rc_ext_l(c, 0);

L_12C54:
    /* 00012c54   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00012c54u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_12C56:
    /* 00012c56   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00012c56u);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_12C5A:
    /* 00012c5a   2  ext.w D0 */
    c->pc = RC_ADDR(0x00012c5au);
    rc_ext_w(c, 0);

L_12C5C:
    /* 00012c5c   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00012c5cu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12C5E:
    /* 00012c5e   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00012c5eu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C62:
    /* 00012c62   4  tst.w (10ba,A4) */
    c->pc = RC_ADDR(0x00012c62u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10bau));
    rc_set_nzvc(c, t0, RC_W);

L_12C66:
    /* 00012c66   2  beq 00012c70 */
    c->pc = RC_ADDR(0x00012c66u);
    if (rc_cond(c, 7)) goto L_12C70;

L_12C68:
    /* 00012c68   6  move.w #5a,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00012c68u);
    t0 = 0x0000005au;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C6E:
    /* 00012c6e   2  bra 00012c98 */
    c->pc = RC_ADDR(0x00012c6eu);
    goto L_12C98;

L_12C70:
    /* 00012c70   4  move.w (ffff83c8,A4),D0 */
    c->pc = RC_ADDR(0x00012c70u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c38u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C74:
    /* 00012c74   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012c74u);
    rc_ext_l(c, 0);

L_12C76:
    /* 00012c76   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012c76u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_12C78:
    /* 00012c78   4  lea (ffff84b8,A4),A0 */
    c->pc = RC_ADDR(0x00012c78u);
    c->a[0] = (c->a[4] - 0x7b48u);

L_12C7C:
    /* 00012c7c   4  move.l (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00012c7cu);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_12C80:
    /* 00012c80   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012c80u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C84:
    /* 00012c84   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012c84u);
    rc_ext_l(c, 0);

L_12C86:
    /* 00012c86   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00012c86u);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_12C8A:
    /* 00012c8a   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012c8au);
    rc_ext_l(c, 0);

L_12C8C:
    /* 00012c8c   2  movea.l D0,A0 */
    c->pc = RC_ADDR(0x00012c8cu);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[0] = t0;

L_12C8E:
    /* 00012c8e   4  move.b (0,A0,D1.w),D0 */
    c->pc = RC_ADDR(0x00012c8eu);
    t4 = c->d[1];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_12C92:
    /* 00012c92   2  ext.w D0 */
    c->pc = RC_ADDR(0x00012c92u);
    rc_ext_w(c, 0);

L_12C94:
    /* 00012c94   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00012c94u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12C98:
    /* 00012c98   4  clr.w (ffffffe4,A5) */
    c->pc = RC_ADDR(0x00012c98u);
    rc_wr16(c, m, (c->a[5] - 0x1cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12C9C:
    /* 00012c9c   4  move.w (10be,A4),D0 */
    c->pc = RC_ADDR(0x00012c9cu);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10beu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CA0:
    /* 00012ca0   4  cmp.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00012ca0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12CA4:
    /* 00012ca4   2  bne 00012cac */
    c->pc = RC_ADDR(0x00012ca4u);
    if (rc_cond(c, 6)) goto L_12CAC;

L_12CA6:
    /* 00012ca6   6  move.w #1,(ffffffe4,A5) */
    c->pc = RC_ADDR(0x00012ca6u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x1cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CAC:
    /* 00012cac   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012cacu);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CB0:
    /* 00012cb0   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012cb0u);
    rc_ext_l(c, 0);

L_12CB2:
    /* 00012cb2   4  divs.w #a,D0 */
    c->pc = RC_ADDR(0x00012cb2u);
    t0 = 0x0000000au;
    rc_divs(c, m, 0, t0);

L_12CB6:
    /* 00012cb6   2  swap D0 */
    c->pc = RC_ADDR(0x00012cb6u);
    t0 = c->d[0];
    c->d[0] = (t0 >> 16) | (t0 << 16);
    rc_set_nzvc(c, c->d[0], RC_L);

L_12CB8:
    /* 00012cb8   4  move.w D0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00012cb8u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CBC:
    /* 00012cbc   6  cmpi.w #7,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00012cbcu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_12CC2:
    /* 00012cc2   2  bgt 00012cca */
    c->pc = RC_ADDR(0x00012cc2u);
    if (rc_cond(c, 14)) goto L_12CCA;

L_12CC4:
    /* 00012cc4   4  tst.w (10ba,A4) */
    c->pc = RC_ADDR(0x00012cc4u);
    t0 = rc_rd16(c, m, (c->a[4] + 0x10bau));
    rc_set_nzvc(c, t0, RC_W);

L_12CC8:
    /* 00012cc8   2  beq 00012ce2 */
    c->pc = RC_ADDR(0x00012cc8u);
    if (rc_cond(c, 7)) goto L_12CE2;

L_12CCA:
    /* 00012cca   4  tst.w (ffffffe4,A5) */
    c->pc = RC_ADDR(0x00012ccau);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1cu));
    rc_set_nzvc(c, t0, RC_W);

L_12CCE:
    /* 00012cce   2  beq 00012ce2 */
    c->pc = RC_ADDR(0x00012cceu);
    if (rc_cond(c, 7)) goto L_12CE2;

L_12CD0:
    /* 00012cd0   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012cd0u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CD4:
    /* 00012cd4   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012cd4u);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12CD8:
    /* 00012cd8   4  lea (fffff38e,A4),A0 */
    c->pc = RC_ADDR(0x00012cd8u);
    c->a[0] = (c->a[4] - 0xc72u);

L_12CDC:
    /* 00012cdc   6  move.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012cdcu);
    t0 = 0x00000001u;
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_12CE2:
    /* 00012ce2   4  clr.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x00012ce2u);
    rc_wr16(c, m, (c->a[5] - 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12CE6:
    /* 00012ce6   4  clr.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00012ce6u);
    rc_wr16(c, m, (c->a[5] - 0x12u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12CEA:
    /* 00012cea   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00012ceau);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CEE:
    /* 00012cee   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012ceeu);
    rc_ext_l(c, 0);

L_12CF0:
    /* 00012cf0   4  bra 00012dae */
    c->pc = RC_ADDR(0x00012cf0u);
    goto L_12DAE;

L_12CF4:
    /* 00012cf4   6  move.w #ffff,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00012cf4u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12CFA:
    /* 00012cfa   4  bra 00012de0 */
    c->pc = RC_ADDR(0x00012cfau);
    goto L_12DE0;

L_12CFE:
    /* 00012cfe   6  move.w #2,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00012cfeu);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D04:
    /* 00012d04   4  bra 00012de0 */
    c->pc = RC_ADDR(0x00012d04u);
    goto L_12DE0;

L_12D08:
    /* 00012d08   6  move.w #2,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00012d08u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D0E:
    /* 00012d0e   4  bra 00012de0 */
    c->pc = RC_ADDR(0x00012d0eu);
    goto L_12DE0;

L_12D12:
    /* 00012d12   6  move.w #ffff,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00012d12u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D18:
    /* 00012d18   4  bra 00012de0 */
    c->pc = RC_ADDR(0x00012d18u);
    goto L_12DE0;

L_12D1C:
    /* 00012d1c   6  cmpi.w #4,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00012d1cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_12D22:
    /* 00012d22   2  ble 00012d2c */
    c->pc = RC_ADDR(0x00012d22u);
    if (rc_cond(c, 15)) goto L_12D2C;

L_12D24:
    /* 00012d24   6  move.w #2,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00012d24u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D2A:
    /* 00012d2a   2  bra 00012d32 */
    c->pc = RC_ADDR(0x00012d2au);
    goto L_12D32;

L_12D2C:
    /* 00012d2c   6  move.w #ffff,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00012d2cu);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D32:
    /* 00012d32   4  bra 00012de0 */
    c->pc = RC_ADDR(0x00012d32u);
    goto L_12DE0;

L_12D36:
    /* 00012d36   6  cmpi.w #4,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00012d36u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_12D3C:
    /* 00012d3c   2  ble 00012d46 */
    c->pc = RC_ADDR(0x00012d3cu);
    if (rc_cond(c, 15)) goto L_12D46;

L_12D3E:
    /* 00012d3e   6  move.w #ffff,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00012d3eu);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D44:
    /* 00012d44   2  bra 00012d4c */
    c->pc = RC_ADDR(0x00012d44u);
    goto L_12D4C;

L_12D46:
    /* 00012d46   6  move.w #ffff,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00012d46u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D4C:
    /* 00012d4c   4  bra 00012de0 */
    c->pc = RC_ADDR(0x00012d4cu);
    goto L_12DE0;

L_12D50:
    /* 00012d50   6  cmpi.w #4,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00012d50u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_12D56:
    /* 00012d56   2  ble 00012d60 */
    c->pc = RC_ADDR(0x00012d56u);
    if (rc_cond(c, 15)) goto L_12D60;

L_12D58:
    /* 00012d58   6  move.w #2,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00012d58u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D5E:
    /* 00012d5e   2  bra 00012d66 */
    c->pc = RC_ADDR(0x00012d5eu);
    goto L_12D66;

L_12D60:
    /* 00012d60   6  move.w #2,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00012d60u);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D66:
    /* 00012d66   2  bra 00012de0 */
    c->pc = RC_ADDR(0x00012d66u);
    goto L_12DE0;

L_12D68:
    /* 00012d68   4  move.w #3e8,-(A7) */
    c->pc = RC_ADDR(0x00012d68u);
    t0 = 0x000003e8u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D6C:
    /* 00012d6c   4  jsr (ffff8188,A4) */
    c->pc = RC_ADDR(0x00012d6cu);
    /* vector 65 */
    rc_push32(c, m, RC_ADDR(0x00012d70u));
    rc_depth++;
    c->pc = RC_ADDR(0x00016ee0u);
    return;

L_12D70:
    /* 00012d70   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00012d70u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_12D72:
    /* 00012d72   4  move.w D0,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00012d72u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D76:
    /* 00012d76   6  cmpi.w #2ee,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00012d76u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x000002eeu);

L_12D7C:
    /* 00012d7c   2  ble 00012d86 */
    c->pc = RC_ADDR(0x00012d7cu);
    if (rc_cond(c, 15)) goto L_12D86;

L_12D7E:
    /* 00012d7e   6  move.w #1,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00012d7eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D84:
    /* 00012d84   2  bra 00012dac */
    c->pc = RC_ADDR(0x00012d84u);
    goto L_12DAC;

L_12D86:
    /* 00012d86   6  cmpi.w #1f4,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00012d86u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x000001f4u);

L_12D8C:
    /* 00012d8c   2  ble 00012d96 */
    c->pc = RC_ADDR(0x00012d8cu);
    if (rc_cond(c, 15)) goto L_12D96;

L_12D8E:
    /* 00012d8e   6  move.w #1,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00012d8eu);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12D94:
    /* 00012d94   2  bra 00012dac */
    c->pc = RC_ADDR(0x00012d94u);
    goto L_12DAC;

L_12D96:
    /* 00012d96   6  cmpi.w #fa,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00012d96u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x000000fau);

L_12D9C:
    /* 00012d9c   2  ble 00012da6 */
    c->pc = RC_ADDR(0x00012d9cu);
    if (rc_cond(c, 15)) goto L_12DA6;

L_12D9E:
    /* 00012d9e   6  move.w #ffff,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00012d9eu);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12DA4:
    /* 00012da4   2  bra 00012dac */
    c->pc = RC_ADDR(0x00012da4u);
    goto L_12DAC;

L_12DA6:
    /* 00012da6   6  move.w #ffff,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00012da6u);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12DAC:
    /* 00012dac   2  bra 00012de0 */
    c->pc = RC_ADDR(0x00012dacu);
    goto L_12DE0;

L_12DAE:
    /* 00012dae   6  sub.l #41,D0 */
    c->pc = RC_ADDR(0x00012daeu);
    t0 = 0x00000041u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_12DB4:
    /* 00012db4   4  beq 00012d1c */
    c->pc = RC_ADDR(0x00012db4u);
    if (rc_cond(c, 7)) { rc_tick(); goto L_12D1C; }

L_12DB8:
    /* 00012db8   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00012db8u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_12DBA:
    /* 00012dba   4  beq 00012d36 */
    c->pc = RC_ADDR(0x00012dbau);
    if (rc_cond(c, 7)) { rc_tick(); goto L_12D36; }

L_12DBE:
    /* 00012dbe   2  subq.l #1,D0 */
    c->pc = RC_ADDR(0x00012dbeu);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_12DC0:
    /* 00012dc0   2  beq 00012d50 */
    c->pc = RC_ADDR(0x00012dc0u);
    if (rc_cond(c, 7)) { rc_tick(); goto L_12D50; }

L_12DC2:
    /* 00012dc2   2  subq.l #2,D0 */
    c->pc = RC_ADDR(0x00012dc2u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000002u;
    rc_flags_sub(c, RC_L, t1, 0x00000002u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_12DC4:
    /* 00012dc4   4  beq 00012d08 */
    c->pc = RC_ADDR(0x00012dc4u);
    if (rc_cond(c, 7)) { rc_tick(); goto L_12D08; }

L_12DC8:
    /* 00012dc8   6  sub.l #9,D0 */
    c->pc = RC_ADDR(0x00012dc8u);
    t0 = 0x00000009u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_12DCE:
    /* 00012dce   4  beq 00012cf4 */
    c->pc = RC_ADDR(0x00012dceu);
    if (rc_cond(c, 7)) { rc_tick(); goto L_12CF4; }

L_12DD2:
    /* 00012dd2   2  subq.l #5,D0 */
    c->pc = RC_ADDR(0x00012dd2u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_L, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_12DD4:
    /* 00012dd4   4  beq 00012cfe */
    c->pc = RC_ADDR(0x00012dd4u);
    if (rc_cond(c, 7)) { rc_tick(); goto L_12CFE; }

L_12DD8:
    /* 00012dd8   2  subq.l #4,D0 */
    c->pc = RC_ADDR(0x00012dd8u);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000004u;
    rc_flags_sub(c, RC_L, t1, 0x00000004u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_12DDA:
    /* 00012dda   4  beq 00012d12 */
    c->pc = RC_ADDR(0x00012ddau);
    if (rc_cond(c, 7)) { rc_tick(); goto L_12D12; }

L_12DDE:
    /* 00012dde   2  bra 00012d68 */
    c->pc = RC_ADDR(0x00012ddeu);
    rc_tick();
    goto L_12D68;

L_12DE0:
    /* 00012de0   4  tst.w (ffffffe4,A5) */
    c->pc = RC_ADDR(0x00012de0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1cu));
    rc_set_nzvc(c, t0, RC_W);

L_12DE4:
    /* 00012de4   2  beq 00012e18 */
    c->pc = RC_ADDR(0x00012de4u);
    if (rc_cond(c, 7)) goto L_12E18;

L_12DE6:
    /* 00012de6   4  tst.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00012de6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_12DEA:
    /* 00012dea   2  beq 00012dfe */
    c->pc = RC_ADDR(0x00012deau);
    if (rc_cond(c, 7)) goto L_12DFE;

L_12DEC:
    /* 00012dec   4  tst.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00012decu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_12DF0:
    /* 00012df0   2  ble 00012df8 */
    c->pc = RC_ADDR(0x00012df0u);
    if (rc_cond(c, 15)) goto L_12DF8;

L_12DF2:
    /* 00012df2   4  clr.w (10c0,A4) */
    c->pc = RC_ADDR(0x00012df2u);
    rc_wr16(c, m, (c->a[4] + 0x10c0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12DF6:
    /* 00012df6   2  bra 00012dfe */
    c->pc = RC_ADDR(0x00012df6u);
    goto L_12DFE;

L_12DF8:
    /* 00012df8   6  move.w #1,(10c0,A4) */
    c->pc = RC_ADDR(0x00012df8u);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] + 0x10c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12DFE:
    /* 00012dfe   4  tst.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x00012dfeu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_12E02:
    /* 00012e02   2  beq 00012e18 */
    c->pc = RC_ADDR(0x00012e02u);
    if (rc_cond(c, 7)) goto L_12E18;

L_12E04:
    /* 00012e04   4  tst.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x00012e04u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_12E08:
    /* 00012e08   2  ble 00012e12 */
    c->pc = RC_ADDR(0x00012e08u);
    if (rc_cond(c, 15)) goto L_12E12;

L_12E0A:
    /* 00012e0a   6  move.w #2,(10c0,A4) */
    c->pc = RC_ADDR(0x00012e0au);
    t0 = 0x00000002u;
    rc_wr16(c, m, (c->a[4] + 0x10c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E10:
    /* 00012e10   2  bra 00012e18 */
    c->pc = RC_ADDR(0x00012e10u);
    goto L_12E18;

L_12E12:
    /* 00012e12   6  move.w #3,(10c0,A4) */
    c->pc = RC_ADDR(0x00012e12u);
    t0 = 0x00000003u;
    rc_wr16(c, m, (c->a[4] + 0x10c0u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E18:
    /* 00012e18   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00012e18u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E1C:
    /* 00012e1c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012e1cu);
    rc_ext_l(c, 0);

L_12E1E:
    /* 00012e1e   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012e1eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_12E20:
    /* 00012e20   4  lea (ffffb3b8,A4),A0 */
    c->pc = RC_ADDR(0x00012e20u);
    c->a[0] = (c->a[4] - 0x4c48u);

L_12E24:
    /* 00012e24   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00012e24u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E2A:
    /* 00012e2a   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00012e2au);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E2E:
    /* 00012e2e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00012e2eu);
    rc_ext_l(c, 0);

L_12E30:
    /* 00012e30   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00012e30u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L);

L_12E32:
    /* 00012e32   4  lea (ffffb3ba,A4),A0 */
    c->pc = RC_ADDR(0x00012e32u);
    c->a[0] = (c->a[4] - 0x4c46u);

L_12E36:
    /* 00012e36   6  move.w (0,A0,D0.w),(fffffff6,A5) */
    c->pc = RC_ADDR(0x00012e36u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E3C:
    /* 00012e3c   6  cmpi.w #7,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00012e3cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_12E42:
    /* 00012e42   2  ble 00012e58 */
    c->pc = RC_ADDR(0x00012e42u);
    if (rc_cond(c, 15)) goto L_12E58;

L_12E44:
    /* 00012e44   6  cmpi.w #b,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00012e44u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_cmp(c, RC_W, t0, 0x0000000bu);

L_12E4A:
    /* 00012e4a   2  bge 00012e58 */
    c->pc = RC_ADDR(0x00012e4au);
    if (rc_cond(c, 12)) goto L_12E58;

L_12E4C:
    /* 00012e4c   4  clr.w (fffffffc,A5) */
    c->pc = RC_ADDR(0x00012e4cu);
    rc_wr16(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12E50:
    /* 00012e50   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00012e50u);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12E54:
    /* 00012e54   4  bra 00012f90 */
    c->pc = RC_ADDR(0x00012e54u);
    goto L_12F90;

L_12E58:
    /* 00012e58   6  move.w #a0,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00012e58u);
    t0 = 0x000000a0u;
    rc_wr16(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E5E:
    /* 00012e5e   6  move.w #64,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x00012e5eu);
    t0 = 0x00000064u;
    rc_wr16(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E64:
    /* 00012e64   4  tst.w (ffffffee,A5) */
    c->pc = RC_ADDR(0x00012e64u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_set_nzvc(c, t0, RC_W);

L_12E68:
    /* 00012e68   2  bge 00012e6e */
    c->pc = RC_ADDR(0x00012e68u);
    if (rc_cond(c, 12)) goto L_12E6E;

L_12E6A:
    /* 00012e6a   4  clr.w (ffffffe8,A5) */
    c->pc = RC_ADDR(0x00012e6au);
    rc_wr16(c, m, (c->a[5] - 0x18u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12E6E:
    /* 00012e6e   4  tst.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x00012e6eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_set_nzvc(c, t0, RC_W);

L_12E72:
    /* 00012e72   2  bge 00012e78 */
    c->pc = RC_ADDR(0x00012e72u);
    if (rc_cond(c, 12)) goto L_12E78;

L_12E74:
    /* 00012e74   4  clr.w (ffffffe6,A5) */
    c->pc = RC_ADDR(0x00012e74u);
    rc_wr16(c, m, (c->a[5] - 0x1au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12E78:
    /* 00012e78   4  move.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x00012e78u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E7C:
    /* 00012e7c   4  muls.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00012e7cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_muls(c, 0, t0);

L_12E80:
    /* 00012e80   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00012e80u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E82:
    /* 00012e82   4  jsr (ffff8170,A4) */
    c->pc = RC_ADDR(0x00012e82u);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x00012e86u));
    rc_depth++;
    c->pc = RC_ADDR(0x00012132u);
    return;

L_12E86:
    /* 00012e86   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00012e86u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_12E88:
    /* 00012e88   4  muls.w #32,D0 */
    c->pc = RC_ADDR(0x00012e88u);
    t0 = 0x00000032u;
    rc_muls(c, 0, t0);

L_12E8C:
    /* 00012e8c   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x00012e8cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E90:
    /* 00012e90   4  muls.w (ffffffe8,A5),D1 */
    c->pc = RC_ADDR(0x00012e90u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_muls(c, 1, t0);

L_12E94:
    /* 00012e94   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x00012e94u);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12E96:
    /* 00012e96   4  add.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00012e96u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12E9A:
    /* 00012e9a   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00012e9au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12E9E:
    /* 00012e9e   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00012e9eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EA2:
    /* 00012ea2   4  muls.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00012ea2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_muls(c, 0, t0);

L_12EA6:
    /* 00012ea6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00012ea6u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EA8:
    /* 00012ea8   4  jsr (ffff8170,A4) */
    c->pc = RC_ADDR(0x00012ea8u);
    /* vector 61 */
    rc_push32(c, m, RC_ADDR(0x00012eacu));
    rc_depth++;
    c->pc = RC_ADDR(0x00012132u);
    return;

L_12EAC:
    /* 00012eac   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00012eacu);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_12EAE:
    /* 00012eae   4  muls.w #32,D0 */
    c->pc = RC_ADDR(0x00012eaeu);
    t0 = 0x00000032u;
    rc_muls(c, 0, t0);

L_12EB2:
    /* 00012eb2   4  move.w (ffffffec,A5),D1 */
    c->pc = RC_ADDR(0x00012eb2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EB6:
    /* 00012eb6   4  muls.w (ffffffe6,A5),D1 */
    c->pc = RC_ADDR(0x00012eb6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_muls(c, 1, t0);

L_12EBA:
    /* 00012eba   2  add.w D1,D0 */
    c->pc = RC_ADDR(0x00012ebau);
    t0 = rc_d_get(c, 1, RC_W);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12EBC:
    /* 00012ebc   4  add.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00012ebcu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12EC0:
    /* 00012ec0   4  move.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00012ec0u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x6u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EC4:
    /* 00012ec4   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00012ec4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EC8:
    /* 00012ec8   4  sub.w (dfc,A4),D0 */
    c->pc = RC_ADDR(0x00012ec8u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfcu));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12ECC:
    /* 00012ecc   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00012eccu);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12ECE:
    /* 00012ece   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00012eceu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12ED2:
    /* 00012ed2   4  sub.w (dfa,A4),D0 */
    c->pc = RC_ADDR(0x00012ed2u);
    t0 = rc_rd16(c, m, (c->a[4] + 0xdfau));
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12ED6:
    /* 00012ed6   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00012ed6u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_12ED8:
    /* 00012ed8   4  jsr (00012c06) */
    c->pc = RC_ADDR(0x00012ed8u);
    rc_push32(c, m, RC_ADDR(0x00012edcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00012c06u);
    return;

L_12EDC:
    /* 00012edc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00012edcu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_12EDE:
    /* 00012ede   2  tst.w D0 */
    c->pc = RC_ADDR(0x00012edeu);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_12EE0:
    /* 00012ee0   2  beq 00012ef8 */
    c->pc = RC_ADDR(0x00012ee0u);
    if (rc_cond(c, 7)) goto L_12EF8;

L_12EE2:
    /* 00012ee2   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00012ee2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EE6:
    /* 00012ee6   2  asl.w #5,D0 */
    c->pc = RC_ADDR(0x00012ee6u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W);

L_12EE8:
    /* 00012ee8   4  add.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00012ee8u);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12EEC:
    /* 00012eec   4  move.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x00012eecu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12EF0:
    /* 00012ef0   2  asl.w #5,D0 */
    c->pc = RC_ADDR(0x00012ef0u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W);

L_12EF2:
    /* 00012ef2   4  add.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00012ef2u);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12EF6:
    /* 00012ef6   2  bra 00012ec4 */
    c->pc = RC_ADDR(0x00012ef6u);
    rc_tick();
    goto L_12EC4;

L_12EF8:
    /* 00012ef8   4  clr.w (fffffffe,A5) */
    c->pc = RC_ADDR(0x00012ef8u);
    rc_wr16(c, m, (c->a[5] - 0x2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_12EFC:
    /* 00012efc   4  bra 00012f84 */
    c->pc = RC_ADDR(0x00012efcu);
    goto L_12F84;

L_12F00:
    /* 00012f00   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012f00u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F04:
    /* 00012f04   4  cmp.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012f04u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12F08:
    /* 00012f08   2  beq 00012f80 */
    c->pc = RC_ADDR(0x00012f08u);
    if (rc_cond(c, 7)) goto L_12F80;

L_12F0A:
    /* 00012f0a   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012f0au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F0E:
    /* 00012f0e   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012f0eu);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12F12:
    /* 00012f12   4  lea (fffff37c,A4),A0 */
    c->pc = RC_ADDR(0x00012f12u);
    c->a[0] = (c->a[4] - 0xc84u);

L_12F16:
    /* 00012f16   6  move.w (0,A0,D0.w),(fffffff8,A5) */
    c->pc = RC_ADDR(0x00012f16u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F1C:
    /* 00012f1c   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012f1cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F20:
    /* 00012f20   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012f20u);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12F24:
    /* 00012f24   4  lea (fffff37e,A4),A0 */
    c->pc = RC_ADDR(0x00012f24u);
    c->a[0] = (c->a[4] - 0xc82u);

L_12F28:
    /* 00012f28   6  move.w (0,A0,D0.w),(fffffff6,A5) */
    c->pc = RC_ADDR(0x00012f28u);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    rc_wr16(c, m, (c->a[5] - 0xau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F2E:
    /* 00012f2e   4  move.w (fffffffc,A5),D0 */
    c->pc = RC_ADDR(0x00012f2eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F32:
    /* 00012f32   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x00012f32u);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12F36:
    /* 00012f36   4  cmp.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00012f36u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12F3A:
    /* 00012f3a   2  ble 00012f80 */
    c->pc = RC_ADDR(0x00012f3au);
    if (rc_cond(c, 15)) goto L_12F80;

L_12F3C:
    /* 00012f3c   4  move.w (fffffff8,A5),D0 */
    c->pc = RC_ADDR(0x00012f3cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F40:
    /* 00012f40   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x00012f40u);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12F44:
    /* 00012f44   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00012f44u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F48:
    /* 00012f48   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00012f48u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12F4A:
    /* 00012f4a   2  bge 00012f80 */
    c->pc = RC_ADDR(0x00012f4au);
    if (rc_cond(c, 12)) goto L_12F80;

L_12F4C:
    /* 00012f4c   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00012f4cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F50:
    /* 00012f50   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x00012f50u);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12F54:
    /* 00012f54   4  cmp.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00012f54u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12F58:
    /* 00012f58   2  ble 00012f80 */
    c->pc = RC_ADDR(0x00012f58u);
    if (rc_cond(c, 15)) goto L_12F80;

L_12F5A:
    /* 00012f5a   4  move.w (fffffff6,A5),D0 */
    c->pc = RC_ADDR(0x00012f5au);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F5E:
    /* 00012f5e   4  add.w #28,D0 */
    c->pc = RC_ADDR(0x00012f5eu);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + t0;
    rc_flags_add(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_12F62:
    /* 00012f62   4  move.w (fffffffa,A5),D1 */
    c->pc = RC_ADDR(0x00012f62u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F66:
    /* 00012f66   2  cmp.w D0,D1 */
    c->pc = RC_ADDR(0x00012f66u);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12F68:
    /* 00012f68   2  bge 00012f80 */
    c->pc = RC_ADDR(0x00012f68u);
    if (rc_cond(c, 12)) goto L_12F80;

L_12F6A:
    /* 00012f6a   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00012f6au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F6E:
    /* 00012f6e   2  asl.w #5,D0 */
    c->pc = RC_ADDR(0x00012f6eu);
    c->d[0] = rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W);

L_12F70:
    /* 00012f70   4  add.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00012f70u);
    t3 = (c->a[5] - 0x4u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12F74:
    /* 00012f74   4  move.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x00012f74u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F78:
    /* 00012f78   2  asl.w #5,D0 */
    c->pc = RC_ADDR(0x00012f78u);
    c->d[0] = rc_shift(c, 0, 1, 0x00000005u, rc_d_get(c, 0, RC_W), RC_W);

L_12F7A:
    /* 00012f7a   4  add.w D0,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00012f7au);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_12F7E:
    /* 00012f7e   2  bra 00012f2e */
    c->pc = RC_ADDR(0x00012f7eu);
    rc_tick();
    goto L_12F2E;

L_12F80:
    /* 00012f80   4  addq.w #1,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00012f80u);
    t3 = (c->a[5] - 0x2u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_12F84:
    /* 00012f84   4  move.w (fffffffe,A5),D0 */
    c->pc = RC_ADDR(0x00012f84u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F88:
    /* 00012f88   4  cmp.w (fffffd58,A4),D0 */
    c->pc = RC_ADDR(0x00012f88u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a8u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_12F8C:
    /* 00012f8c   4  blt 00012f00 */
    c->pc = RC_ADDR(0x00012f8cu);
    if (rc_cond(c, 13)) { rc_tick(); goto L_12F00; }

L_12F90:
    /* 00012f90   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012f90u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12F94:
    /* 00012f94   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012f94u);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12F98:
    /* 00012f98   4  lea (fffff380,A4),A0 */
    c->pc = RC_ADDR(0x00012f98u);
    c->a[0] = (c->a[4] - 0xc80u);

L_12F9C:
    /* 00012f9c   6  move.w (fffffffc,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012f9cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FA2:
    /* 00012fa2   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012fa2u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FA6:
    /* 00012fa6   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012fa6u);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12FAA:
    /* 00012faa   4  lea (fffff37c,A4),A0 */
    c->pc = RC_ADDR(0x00012faau);
    c->a[0] = (c->a[4] - 0xc84u);

L_12FAE:
    /* 00012fae   6  move.w (fffffffc,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012faeu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FB4:
    /* 00012fb4   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012fb4u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FB8:
    /* 00012fb8   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012fb8u);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12FBC:
    /* 00012fbc   4  lea (fffff382,A4),A0 */
    c->pc = RC_ADDR(0x00012fbcu);
    c->a[0] = (c->a[4] - 0xc7eu);

L_12FC0:
    /* 00012fc0   6  move.w (fffffffa,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012fc0u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FC6:
    /* 00012fc6   4  move.w (8,A5),D0 */
    c->pc = RC_ADDR(0x00012fc6u);
    t0 = rc_rd16(c, m, (c->a[5] + 0x8u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FCA:
    /* 00012fca   4  muls.w #16,D0 */
    c->pc = RC_ADDR(0x00012fcau);
    t0 = 0x00000016u;
    rc_muls(c, 0, t0);

L_12FCE:
    /* 00012fce   4  lea (fffff37e,A4),A0 */
    c->pc = RC_ADDR(0x00012fceu);
    c->a[0] = (c->a[4] - 0xc82u);

L_12FD2:
    /* 00012fd2   6  move.w (fffffffa,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00012fd2u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    t4 = c->d[0];
    rc_wr16(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_W);

L_12FD8:
    /* 00012fd8   2  unlk A5 */
    c->pc = RC_ADDR(0x00012fd8u);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_12FDA:
    /* 00012fda   2  rts */
    c->pc = RC_ADDR(0x00012fdau);
    rc_ret(c, m);
    return;

}
