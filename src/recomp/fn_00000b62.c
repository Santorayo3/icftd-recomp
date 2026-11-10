/* fn_00000b62 - 1088 byte(s), 313 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00000b62(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00000b62u): goto L_B62;
    case RC_ADDR(0x00000b66u): goto L_B66;
    case RC_ADDR(0x00000b6cu): goto L_B6C;
    case RC_ADDR(0x00000b70u): goto L_B70;
    case RC_ADDR(0x00000b74u): goto L_B74;
    case RC_ADDR(0x00000b78u): goto L_B78;
    case RC_ADDR(0x00000b7au): goto L_B7A;
    case RC_ADDR(0x00000b7eu): goto L_B7E;
    case RC_ADDR(0x00000b82u): goto L_B82;
    case RC_ADDR(0x00000b86u): goto L_B86;
    case RC_ADDR(0x00000b88u): goto L_B88;
    case RC_ADDR(0x00000b8cu): goto L_B8C;
    case RC_ADDR(0x00000b90u): goto L_B90;
    case RC_ADDR(0x00000b94u): goto L_B94;
    case RC_ADDR(0x00000b98u): goto L_B98;
    case RC_ADDR(0x00000b9au): goto L_B9A;
    case RC_ADDR(0x00000b9eu): goto L_B9E;
    case RC_ADDR(0x00000ba2u): goto L_BA2;
    case RC_ADDR(0x00000ba6u): goto L_BA6;
    case RC_ADDR(0x00000baau): goto L_BAA;
    case RC_ADDR(0x00000baeu): goto L_BAE;
    case RC_ADDR(0x00000bb2u): goto L_BB2;
    case RC_ADDR(0x00000bb6u): goto L_BB6;
    case RC_ADDR(0x00000bb8u): goto L_BB8;
    case RC_ADDR(0x00000bbcu): goto L_BBC;
    case RC_ADDR(0x00000bc0u): goto L_BC0;
    case RC_ADDR(0x00000bc4u): goto L_BC4;
    case RC_ADDR(0x00000bc8u): goto L_BC8;
    case RC_ADDR(0x00000bccu): goto L_BCC;
    case RC_ADDR(0x00000bd0u): goto L_BD0;
    case RC_ADDR(0x00000bd4u): goto L_BD4;
    case RC_ADDR(0x00000bd8u): goto L_BD8;
    case RC_ADDR(0x00000bdcu): goto L_BDC;
    case RC_ADDR(0x00000be0u): goto L_BE0;
    case RC_ADDR(0x00000be4u): goto L_BE4;
    case RC_ADDR(0x00000be8u): goto L_BE8;
    case RC_ADDR(0x00000beau): goto L_BEA;
    case RC_ADDR(0x00000beeu): goto L_BEE;
    case RC_ADDR(0x00000bf2u): goto L_BF2;
    case RC_ADDR(0x00000bf4u): goto L_BF4;
    case RC_ADDR(0x00000bf8u): goto L_BF8;
    case RC_ADDR(0x00000bfcu): goto L_BFC;
    case RC_ADDR(0x00000c00u): goto L_C00;
    case RC_ADDR(0x00000c04u): goto L_C04;
    case RC_ADDR(0x00000c06u): goto L_C06;
    case RC_ADDR(0x00000c0cu): goto L_C0C;
    case RC_ADDR(0x00000c10u): goto L_C10;
    case RC_ADDR(0x00000c14u): goto L_C14;
    case RC_ADDR(0x00000c18u): goto L_C18;
    case RC_ADDR(0x00000c1cu): goto L_C1C;
    case RC_ADDR(0x00000c1eu): goto L_C1E;
    case RC_ADDR(0x00000c24u): goto L_C24;
    case RC_ADDR(0x00000c28u): goto L_C28;
    case RC_ADDR(0x00000c2cu): goto L_C2C;
    case RC_ADDR(0x00000c2eu): goto L_C2E;
    case RC_ADDR(0x00000c32u): goto L_C32;
    case RC_ADDR(0x00000c34u): goto L_C34;
    case RC_ADDR(0x00000c3au): goto L_C3A;
    case RC_ADDR(0x00000c3eu): goto L_C3E;
    case RC_ADDR(0x00000c42u): goto L_C42;
    case RC_ADDR(0x00000c44u): goto L_C44;
    case RC_ADDR(0x00000c48u): goto L_C48;
    case RC_ADDR(0x00000c4cu): goto L_C4C;
    case RC_ADDR(0x00000c4eu): goto L_C4E;
    case RC_ADDR(0x00000c54u): goto L_C54;
    case RC_ADDR(0x00000c58u): goto L_C58;
    case RC_ADDR(0x00000c5cu): goto L_C5C;
    case RC_ADDR(0x00000c5eu): goto L_C5E;
    case RC_ADDR(0x00000c62u): goto L_C62;
    case RC_ADDR(0x00000c66u): goto L_C66;
    case RC_ADDR(0x00000c6au): goto L_C6A;
    case RC_ADDR(0x00000c70u): goto L_C70;
    case RC_ADDR(0x00000c76u): goto L_C76;
    case RC_ADDR(0x00000c7au): goto L_C7A;
    case RC_ADDR(0x00000c7eu): goto L_C7E;
    case RC_ADDR(0x00000c80u): goto L_C80;
    case RC_ADDR(0x00000c82u): goto L_C82;
    case RC_ADDR(0x00000c84u): goto L_C84;
    case RC_ADDR(0x00000c86u): goto L_C86;
    case RC_ADDR(0x00000c8au): goto L_C8A;
    case RC_ADDR(0x00000c8cu): goto L_C8C;
    case RC_ADDR(0x00000c90u): goto L_C90;
    case RC_ADDR(0x00000c92u): goto L_C92;
    case RC_ADDR(0x00000c96u): goto L_C96;
    case RC_ADDR(0x00000c9au): goto L_C9A;
    case RC_ADDR(0x00000c9cu): goto L_C9C;
    case RC_ADDR(0x00000ca0u): goto L_CA0;
    case RC_ADDR(0x00000ca2u): goto L_CA2;
    case RC_ADDR(0x00000ca6u): goto L_CA6;
    case RC_ADDR(0x00000cacu): goto L_CAC;
    case RC_ADDR(0x00000cb0u): goto L_CB0;
    case RC_ADDR(0x00000cb4u): goto L_CB4;
    case RC_ADDR(0x00000cb8u): goto L_CB8;
    case RC_ADDR(0x00000cbcu): goto L_CBC;
    case RC_ADDR(0x00000cc0u): goto L_CC0;
    case RC_ADDR(0x00000cc2u): goto L_CC2;
    case RC_ADDR(0x00000cc4u): goto L_CC4;
    case RC_ADDR(0x00000cc8u): goto L_CC8;
    case RC_ADDR(0x00000cccu): goto L_CCC;
    case RC_ADDR(0x00000cceu): goto L_CCE;
    case RC_ADDR(0x00000cd2u): goto L_CD2;
    case RC_ADDR(0x00000cd6u): goto L_CD6;
    case RC_ADDR(0x00000cdau): goto L_CDA;
    case RC_ADDR(0x00000cdeu): goto L_CDE;
    case RC_ADDR(0x00000ce0u): goto L_CE0;
    case RC_ADDR(0x00000ce2u): goto L_CE2;
    case RC_ADDR(0x00000ce6u): goto L_CE6;
    case RC_ADDR(0x00000ceau): goto L_CEA;
    case RC_ADDR(0x00000cecu): goto L_CEC;
    case RC_ADDR(0x00000ceeu): goto L_CEE;
    case RC_ADDR(0x00000cf2u): goto L_CF2;
    case RC_ADDR(0x00000cf6u): goto L_CF6;
    case RC_ADDR(0x00000cfau): goto L_CFA;
    case RC_ADDR(0x00000cfeu): goto L_CFE;
    case RC_ADDR(0x00000d02u): goto L_D02;
    case RC_ADDR(0x00000d04u): goto L_D04;
    case RC_ADDR(0x00000d06u): goto L_D06;
    case RC_ADDR(0x00000d0au): goto L_D0A;
    case RC_ADDR(0x00000d0eu): goto L_D0E;
    case RC_ADDR(0x00000d12u): goto L_D12;
    case RC_ADDR(0x00000d16u): goto L_D16;
    case RC_ADDR(0x00000d1au): goto L_D1A;
    case RC_ADDR(0x00000d1cu): goto L_D1C;
    case RC_ADDR(0x00000d1eu): goto L_D1E;
    case RC_ADDR(0x00000d22u): goto L_D22;
    case RC_ADDR(0x00000d26u): goto L_D26;
    case RC_ADDR(0x00000d28u): goto L_D28;
    case RC_ADDR(0x00000d2cu): goto L_D2C;
    case RC_ADDR(0x00000d30u): goto L_D30;
    case RC_ADDR(0x00000d34u): goto L_D34;
    case RC_ADDR(0x00000d38u): goto L_D38;
    case RC_ADDR(0x00000d3au): goto L_D3A;
    case RC_ADDR(0x00000d3cu): goto L_D3C;
    case RC_ADDR(0x00000d40u): goto L_D40;
    case RC_ADDR(0x00000d44u): goto L_D44;
    case RC_ADDR(0x00000d46u): goto L_D46;
    case RC_ADDR(0x00000d48u): goto L_D48;
    case RC_ADDR(0x00000d4cu): goto L_D4C;
    case RC_ADDR(0x00000d50u): goto L_D50;
    case RC_ADDR(0x00000d54u): goto L_D54;
    case RC_ADDR(0x00000d58u): goto L_D58;
    case RC_ADDR(0x00000d5cu): goto L_D5C;
    case RC_ADDR(0x00000d5eu): goto L_D5E;
    case RC_ADDR(0x00000d60u): goto L_D60;
    case RC_ADDR(0x00000d64u): goto L_D64;
    case RC_ADDR(0x00000d68u): goto L_D68;
    case RC_ADDR(0x00000d6au): goto L_D6A;
    case RC_ADDR(0x00000d6cu): goto L_D6C;
    case RC_ADDR(0x00000d70u): goto L_D70;
    case RC_ADDR(0x00000d74u): goto L_D74;
    case RC_ADDR(0x00000d7au): goto L_D7A;
    case RC_ADDR(0x00000d7cu): goto L_D7C;
    case RC_ADDR(0x00000d82u): goto L_D82;
    case RC_ADDR(0x00000d84u): goto L_D84;
    case RC_ADDR(0x00000d88u): goto L_D88;
    case RC_ADDR(0x00000d8au): goto L_D8A;
    case RC_ADDR(0x00000d8eu): goto L_D8E;
    case RC_ADDR(0x00000d90u): goto L_D90;
    case RC_ADDR(0x00000d94u): goto L_D94;
    case RC_ADDR(0x00000d98u): goto L_D98;
    case RC_ADDR(0x00000d9cu): goto L_D9C;
    case RC_ADDR(0x00000da0u): goto L_DA0;
    case RC_ADDR(0x00000da2u): goto L_DA2;
    case RC_ADDR(0x00000da6u): goto L_DA6;
    case RC_ADDR(0x00000dacu): goto L_DAC;
    case RC_ADDR(0x00000db0u): goto L_DB0;
    case RC_ADDR(0x00000db4u): goto L_DB4;
    case RC_ADDR(0x00000db8u): goto L_DB8;
    case RC_ADDR(0x00000dbcu): goto L_DBC;
    case RC_ADDR(0x00000dbeu): goto L_DBE;
    case RC_ADDR(0x00000dc2u): goto L_DC2;
    case RC_ADDR(0x00000dc8u): goto L_DC8;
    case RC_ADDR(0x00000dccu): goto L_DCC;
    case RC_ADDR(0x00000dd0u): goto L_DD0;
    case RC_ADDR(0x00000dd4u): goto L_DD4;
    case RC_ADDR(0x00000dd6u): goto L_DD6;
    case RC_ADDR(0x00000ddau): goto L_DDA;
    case RC_ADDR(0x00000ddeu): goto L_DDE;
    case RC_ADDR(0x00000de2u): goto L_DE2;
    case RC_ADDR(0x00000de6u): goto L_DE6;
    case RC_ADDR(0x00000deau): goto L_DEA;
    case RC_ADDR(0x00000deeu): goto L_DEE;
    case RC_ADDR(0x00000df0u): goto L_DF0;
    case RC_ADDR(0x00000df4u): goto L_DF4;
    case RC_ADDR(0x00000df8u): goto L_DF8;
    case RC_ADDR(0x00000dfau): goto L_DFA;
    case RC_ADDR(0x00000dfeu): goto L_DFE;
    case RC_ADDR(0x00000e02u): goto L_E02;
    case RC_ADDR(0x00000e06u): goto L_E06;
    case RC_ADDR(0x00000e08u): goto L_E08;
    case RC_ADDR(0x00000e0cu): goto L_E0C;
    case RC_ADDR(0x00000e0eu): goto L_E0E;
    case RC_ADDR(0x00000e12u): goto L_E12;
    case RC_ADDR(0x00000e16u): goto L_E16;
    case RC_ADDR(0x00000e1au): goto L_E1A;
    case RC_ADDR(0x00000e1cu): goto L_E1C;
    case RC_ADDR(0x00000e20u): goto L_E20;
    case RC_ADDR(0x00000e24u): goto L_E24;
    case RC_ADDR(0x00000e26u): goto L_E26;
    case RC_ADDR(0x00000e2au): goto L_E2A;
    case RC_ADDR(0x00000e2eu): goto L_E2E;
    case RC_ADDR(0x00000e32u): goto L_E32;
    case RC_ADDR(0x00000e34u): goto L_E34;
    case RC_ADDR(0x00000e38u): goto L_E38;
    case RC_ADDR(0x00000e3cu): goto L_E3C;
    case RC_ADDR(0x00000e40u): goto L_E40;
    case RC_ADDR(0x00000e42u): goto L_E42;
    case RC_ADDR(0x00000e46u): goto L_E46;
    case RC_ADDR(0x00000e4au): goto L_E4A;
    case RC_ADDR(0x00000e4eu): goto L_E4E;
    case RC_ADDR(0x00000e50u): goto L_E50;
    case RC_ADDR(0x00000e54u): goto L_E54;
    case RC_ADDR(0x00000e56u): goto L_E56;
    case RC_ADDR(0x00000e5cu): goto L_E5C;
    case RC_ADDR(0x00000e5eu): goto L_E5E;
    case RC_ADDR(0x00000e62u): goto L_E62;
    case RC_ADDR(0x00000e66u): goto L_E66;
    case RC_ADDR(0x00000e68u): goto L_E68;
    case RC_ADDR(0x00000e6cu): goto L_E6C;
    case RC_ADDR(0x00000e70u): goto L_E70;
    case RC_ADDR(0x00000e72u): goto L_E72;
    case RC_ADDR(0x00000e76u): goto L_E76;
    case RC_ADDR(0x00000e7au): goto L_E7A;
    case RC_ADDR(0x00000e7cu): goto L_E7C;
    case RC_ADDR(0x00000e80u): goto L_E80;
    case RC_ADDR(0x00000e84u): goto L_E84;
    case RC_ADDR(0x00000e88u): goto L_E88;
    case RC_ADDR(0x00000e8au): goto L_E8A;
    case RC_ADDR(0x00000e8cu): goto L_E8C;
    case RC_ADDR(0x00000e90u): goto L_E90;
    case RC_ADDR(0x00000e94u): goto L_E94;
    case RC_ADDR(0x00000e96u): goto L_E96;
    case RC_ADDR(0x00000e9au): goto L_E9A;
    case RC_ADDR(0x00000e9eu): goto L_E9E;
    case RC_ADDR(0x00000ea2u): goto L_EA2;
    case RC_ADDR(0x00000ea4u): goto L_EA4;
    case RC_ADDR(0x00000ea8u): goto L_EA8;
    case RC_ADDR(0x00000eaau): goto L_EAA;
    case RC_ADDR(0x00000eaeu): goto L_EAE;
    case RC_ADDR(0x00000eb2u): goto L_EB2;
    case RC_ADDR(0x00000eb4u): goto L_EB4;
    case RC_ADDR(0x00000eb8u): goto L_EB8;
    case RC_ADDR(0x00000ebcu): goto L_EBC;
    case RC_ADDR(0x00000ec0u): goto L_EC0;
    case RC_ADDR(0x00000ec2u): goto L_EC2;
    case RC_ADDR(0x00000ec6u): goto L_EC6;
    case RC_ADDR(0x00000ecau): goto L_ECA;
    case RC_ADDR(0x00000eceu): goto L_ECE;
    case RC_ADDR(0x00000ed0u): goto L_ED0;
    case RC_ADDR(0x00000ed4u): goto L_ED4;
    case RC_ADDR(0x00000ed6u): goto L_ED6;
    case RC_ADDR(0x00000edau): goto L_EDA;
    case RC_ADDR(0x00000edeu): goto L_EDE;
    case RC_ADDR(0x00000ee0u): goto L_EE0;
    case RC_ADDR(0x00000ee4u): goto L_EE4;
    case RC_ADDR(0x00000ee8u): goto L_EE8;
    case RC_ADDR(0x00000eecu): goto L_EEC;
    case RC_ADDR(0x00000eeeu): goto L_EEE;
    case RC_ADDR(0x00000ef2u): goto L_EF2;
    case RC_ADDR(0x00000ef4u): goto L_EF4;
    case RC_ADDR(0x00000ef6u): goto L_EF6;
    case RC_ADDR(0x00000efau): goto L_EFA;
    case RC_ADDR(0x00000efcu): goto L_EFC;
    case RC_ADDR(0x00000f00u): goto L_F00;
    case RC_ADDR(0x00000f04u): goto L_F04;
    case RC_ADDR(0x00000f08u): goto L_F08;
    case RC_ADDR(0x00000f0au): goto L_F0A;
    case RC_ADDR(0x00000f0eu): goto L_F0E;
    case RC_ADDR(0x00000f12u): goto L_F12;
    case RC_ADDR(0x00000f16u): goto L_F16;
    case RC_ADDR(0x00000f18u): goto L_F18;
    case RC_ADDR(0x00000f1cu): goto L_F1C;
    case RC_ADDR(0x00000f20u): goto L_F20;
    case RC_ADDR(0x00000f24u): goto L_F24;
    case RC_ADDR(0x00000f26u): goto L_F26;
    case RC_ADDR(0x00000f2au): goto L_F2A;
    case RC_ADDR(0x00000f2eu): goto L_F2E;
    case RC_ADDR(0x00000f32u): goto L_F32;
    case RC_ADDR(0x00000f34u): goto L_F34;
    case RC_ADDR(0x00000f38u): goto L_F38;
    case RC_ADDR(0x00000f3au): goto L_F3A;
    case RC_ADDR(0x00000f3eu): goto L_F3E;
    case RC_ADDR(0x00000f42u): goto L_F42;
    case RC_ADDR(0x00000f46u): goto L_F46;
    case RC_ADDR(0x00000f48u): goto L_F48;
    case RC_ADDR(0x00000f4au): goto L_F4A;
    case RC_ADDR(0x00000f4eu): goto L_F4E;
    case RC_ADDR(0x00000f52u): goto L_F52;
    case RC_ADDR(0x00000f56u): goto L_F56;
    case RC_ADDR(0x00000f58u): goto L_F58;
    case RC_ADDR(0x00000f5cu): goto L_F5C;
    case RC_ADDR(0x00000f5eu): goto L_F5E;
    case RC_ADDR(0x00000f60u): goto L_F60;
    case RC_ADDR(0x00000f64u): goto L_F64;
    case RC_ADDR(0x00000f66u): goto L_F66;
    case RC_ADDR(0x00000f68u): goto L_F68;
    case RC_ADDR(0x00000f6cu): goto L_F6C;
    case RC_ADDR(0x00000f70u): goto L_F70;
    case RC_ADDR(0x00000f74u): goto L_F74;
    case RC_ADDR(0x00000f78u): goto L_F78;
    case RC_ADDR(0x00000f7au): goto L_F7A;
    case RC_ADDR(0x00000f7eu): goto L_F7E;
    case RC_ADDR(0x00000f80u): goto L_F80;
    case RC_ADDR(0x00000f82u): goto L_F82;
    case RC_ADDR(0x00000f86u): goto L_F86;
    case RC_ADDR(0x00000f88u): goto L_F88;
    case RC_ADDR(0x00000f8cu): goto L_F8C;
    case RC_ADDR(0x00000f90u): goto L_F90;
    case RC_ADDR(0x00000f94u): goto L_F94;
    case RC_ADDR(0x00000f98u): goto L_F98;
    case RC_ADDR(0x00000f9cu): goto L_F9C;
    case RC_ADDR(0x00000f9eu): goto L_F9E;
    case RC_ADDR(0x00000fa0u): goto L_FA0;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_B62:
    /* 00000b62   4  link.w A5,#fffffbde */
    c->pc = RC_ADDR(0x00000b62u);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x422u;

L_B66:
    /* 00000b66   6  subi.b #41,(d,A5) */
    c->pc = RC_ADDR(0x00000b66u);
    t3 = (c->a[5] + 0xdu);
    t1 = rc_rd8(c, m, t3);
    t2 = t1 - 0x00000041u;
    rc_flags_sub(c, RC_B, t1, 0x00000041u, t2, 0);
    rc_wr8(c, m, t3, t2);

L_B6C:
    /* 00000b6c   4  pea (000003ed).l */
    c->pc = RC_ADDR(0x00000b6cu);
    rc_push32(c, m, RC_ADDR(0x000003edu));

L_B70:
    /* 00000b70   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000b70u);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B74:
    /* 00000b74   4  jsr (ffff8290,A4) */
    c->pc = RC_ADDR(0x00000b74u);
    /* vector 109 */
    rc_push32(c, m, RC_ADDR(0x00000b78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020476u);
    return;

L_B78:
    /* 00000b78   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000b78u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_B7A:
    /* 00000b7a   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00000b7au);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_B7E:
    /* 00000b7e   4  beq 00000f9e */
    c->pc = RC_ADDR(0x00000b7eu);
    if (rc_cond(c, 7)) goto L_F9E;

L_B82:
    /* 00000b82   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00000b82u);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_B86:
    /* 00000b86   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000b86u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B88:
    /* 00000b88   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000b88u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B8C:
    /* 00000b8c   4  jsr (ffff831a,A4) */
    c->pc = RC_ADDR(0x00000b8cu);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x00000b90u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021488u);
    return;

L_B90:
    /* 00000b90   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000b90u);
    c->a[7] = (c->a[7] + 0xcu);

L_B94:
    /* 00000b94   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x00000b94u);
    rc_push32(c, m, RC_ADDR(0xffffffffu));

L_B98:
    /* 00000b98   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00000b98u);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_B9A:
    /* 00000b9a   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000b9au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_B9E:
    /* 00000b9e   4  jsr (ffff831a,A4) */
    c->pc = RC_ADDR(0x00000b9eu);
    /* vector 132 */
    rc_push32(c, m, RC_ADDR(0x00000ba2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021488u);
    return;

L_BA2:
    /* 00000ba2   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000ba2u);
    c->a[7] = (c->a[7] + 0xcu);

L_BA6:
    /* 00000ba6   4  move.l D0,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00000ba6u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BAA:
    /* 00000baa   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00000baau);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_BAE:
    /* 00000bae   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000baeu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BB2:
    /* 00000bb2   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00000bb2u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x00000bb6u);
    rc_os_call(c, m, 0, -198);

L_BB6:
    /* 00000bb6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000bb6u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_BB8:
    /* 00000bb8   4  move.l D0,(ffffffde,A5) */
    c->pc = RC_ADDR(0x00000bb8u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BBC:
    /* 00000bbc   4  move.l D0,(ffffcf88,A4) */
    c->pc = RC_ADDR(0x00000bbcu);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x3078u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BC0:
    /* 00000bc0   4  movea.l (ffffcf88,A4),A0 */
    c->pc = RC_ADDR(0x00000bc0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3078u));
    c->a[0] = t0;

L_BC4:
    /* 00000bc4   4  adda.l (ffffffe8,A5),A0 */
    c->pc = RC_ADDR(0x00000bc4u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[0] += t0;

L_BC8:
    /* 00000bc8   4  move.l A0,(ffffcf8c,A4) */
    c->pc = RC_ADDR(0x00000bc8u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x3074u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_BCC:
    /* 00000bcc   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000bccu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD0:
    /* 00000bd0   4  move.l (ffffcf88,A4),-(A7) */
    c->pc = RC_ADDR(0x00000bd0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3078u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD4:
    /* 00000bd4   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000bd4u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BD8:
    /* 00000bd8   4  jsr (ffff8314,A4) */
    c->pc = RC_ADDR(0x00000bd8u);
    /* vector 131 */
    rc_push32(c, m, RC_ADDR(0x00000bdcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021476u);
    return;

L_BDC:
    /* 00000bdc   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00000bdcu);
    c->a[7] = (c->a[7] + 0xcu);

L_BE0:
    /* 00000be0   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00000be0u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_BE4:
    /* 00000be4   4  jsr (ffff8296,A4) */
    c->pc = RC_ADDR(0x00000be4u);
    /* vector 110 */
    rc_push32(c, m, RC_ADDR(0x00000be8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020490u);
    return;

L_BE8:
    /* 00000be8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000be8u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_BEA:
    /* 00000bea   4  clr.l (ffffef94,A4) */
    c->pc = RC_ADDR(0x00000beau);
    rc_wr32(c, m, (c->a[4] - 0x106cu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_BEE:
    /* 00000bee   4  tst.w (ffffef98,A4) */
    c->pc = RC_ADDR(0x00000beeu);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1068u));
    rc_set_nzvc(c, t0, RC_W);

L_BF2:
    /* 00000bf2   2  beq 00000bf8 */
    c->pc = RC_ADDR(0x00000bf2u);
    if (rc_cond(c, 7)) goto L_BF8;

L_BF4:
    /* 00000bf4   4  clr.l (ffffef90,A4) */
    c->pc = RC_ADDR(0x00000bf4u);
    rc_wr32(c, m, (c->a[4] - 0x1070u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_BF8:
    /* 00000bf8   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000bf8u);
    rc_push32(c, m, RC_ADDR(0x00000002u));

L_BFC:
    /* 00000bfc   4  pea (fffffffa,A5) */
    c->pc = RC_ADDR(0x00000bfcu);
    rc_push32(c, m, (c->a[5] - 0x6u));

L_C00:
    /* 00000c00   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000c00u);
    rc_push32(c, m, RC_ADDR(0x00000c04u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_C04:
    /* 00000c04   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000c04u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C06:
    /* 00000c06   6  move.w (fffffffa,A5),(ffffef8e,A4) */
    c->pc = RC_ADDR(0x00000c06u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, (c->a[4] - 0x1072u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_C0C:
    /* 00000c0c   4  tst.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00000c0cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_set_nzvc(c, t0, RC_W);

L_C10:
    /* 00000c10   4  beq 00000f90 */
    c->pc = RC_ADDR(0x00000c10u);
    if (rc_cond(c, 7)) goto L_F90;

L_C14:
    /* 00000c14   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000c14u);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_C18:
    /* 00000c18   4  jsr (00000af0) */
    c->pc = RC_ADDR(0x00000c18u);
    rc_push32(c, m, RC_ADDR(0x00000c1cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000af0u);
    return;

L_C1C:
    /* 00000c1c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000c1cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_C1E:
    /* 00000c1e   6  cmpi.b #2a,(fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000c1eu);
    t0 = rc_rd8(c, m, (c->a[5] - 0x41eu));
    rc_cmp(c, RC_B, t0, 0x0000002au);

L_C24:
    /* 00000c24   4  bne 00000cb0 */
    c->pc = RC_ADDR(0x00000c24u);
    if (rc_cond(c, 6)) goto L_CB0;

L_C28:
    /* 00000c28   4  tst.w (ffffef98,A4) */
    c->pc = RC_ADDR(0x00000c28u);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1068u));
    rc_set_nzvc(c, t0, RC_W);

L_C2C:
    /* 00000c2c   2  beq 00000cac */
    c->pc = RC_ADDR(0x00000c2cu);
    if (rc_cond(c, 7)) goto L_CAC;

L_C2E:
    /* 00000c2e   4  tst.l (ffffef90,A4) */
    c->pc = RC_ADDR(0x00000c2eu);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1070u));
    rc_set_nzvc(c, t0, RC_L);

L_C32:
    /* 00000c32   2  bne 00000c4e */
    c->pc = RC_ADDR(0x00000c32u);
    if (rc_cond(c, 6)) goto L_C4E;

L_C34:
    /* 00000c34   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00000c34u);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_C3A:
    /* 00000c3a   4  pea (0000000c).l */
    c->pc = RC_ADDR(0x00000c3au);
    rc_push32(c, m, RC_ADDR(0x0000000cu));

L_C3E:
    /* 00000c3e   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00000c3eu);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x00000c42u);
    rc_os_call(c, m, 0, -198);

L_C42:
    /* 00000c42   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000c42u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C44:
    /* 00000c44   4  move.l D0,(fffffbde,A5) */
    c->pc = RC_ADDR(0x00000c44u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x422u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C48:
    /* 00000c48   4  move.l D0,(ffffef90,A4) */
    c->pc = RC_ADDR(0x00000c48u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x1070u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C4C:
    /* 00000c4c   2  bra 00000c70 */
    c->pc = RC_ADDR(0x00000c4cu);
    goto L_C70;

L_C4E:
    /* 00000c4e   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00000c4eu);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_C54:
    /* 00000c54   4  pea (0000000c).l */
    c->pc = RC_ADDR(0x00000c54u);
    rc_push32(c, m, RC_ADDR(0x0000000cu));

L_C58:
    /* 00000c58   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00000c58u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x00000c5cu);
    rc_os_call(c, m, 0, -198);

L_C5C:
    /* 00000c5c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000c5cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C5E:
    /* 00000c5e   4  movea.l (fffffbde,A5),A0 */
    c->pc = RC_ADDR(0x00000c5eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x422u));
    c->a[0] = t0;

L_C62:
    /* 00000c62   4  move.l D0,(8,A0) */
    c->pc = RC_ADDR(0x00000c62u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[0] + 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C66:
    /* 00000c66   4  movea.l (fffffbde,A5),A0 */
    c->pc = RC_ADDR(0x00000c66u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x422u));
    c->a[0] = t0;

L_C6A:
    /* 00000c6a   6  move.l (8,A0),(fffffbde,A5) */
    c->pc = RC_ADDR(0x00000c6au);
    t0 = rc_rd32(c, m, (c->a[0] + 0x8u));
    rc_wr32(c, m, (c->a[5] - 0x422u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_C70:
    /* 00000c70   6  pea (00010001).l */
    c->pc = RC_ADDR(0x00000c70u);
    rc_push32(c, m, RC_ADDR(0x00010001u));

L_C76:
    /* 00000c76   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000c76u);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_C7A:
    /* 00000c7a   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x00000c7au);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x00000c7eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020820u);
    return;

L_C7E:
    /* 00000c7e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000c7eu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_C80:
    /* 00000c80   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00000c80u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_C82:
    /* 00000c82   2  ext.l D0 */
    c->pc = RC_ADDR(0x00000c82u);
    rc_ext_l(c, 0);

L_C84:
    /* 00000c84   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00000c84u);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C86:
    /* 00000c86   4  jsr (ffff8338,A4) */
    c->pc = RC_ADDR(0x00000c86u);
    /* vector 137: exec.library -198 */
    c->pc = RC_ADDR(0x00000c8au);
    rc_os_call(c, m, 0, -198);

L_C8A:
    /* 00000c8a   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000c8au);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_C8C:
    /* 00000c8c   4  movea.l (fffffbde,A5),A0 */
    c->pc = RC_ADDR(0x00000c8cu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x422u));
    c->a[0] = t0;

L_C90:
    /* 00000c90   2  move.l D0,(A0) */
    c->pc = RC_ADDR(0x00000c90u);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C92:
    /* 00000c92   4  pea (fffffbe3,A5) */
    c->pc = RC_ADDR(0x00000c92u);
    rc_push32(c, m, (c->a[5] - 0x41du));

L_C96:
    /* 00000c96   4  movea.l (fffffbde,A5),A0 */
    c->pc = RC_ADDR(0x00000c96u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x422u));
    c->a[0] = t0;

L_C9A:
    /* 00000c9a   2  move.l (A0),-(A7) */
    c->pc = RC_ADDR(0x00000c9au);
    t0 = rc_rd32(c, m, c->a[0]);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_C9C:
    /* 00000c9c   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x00000c9cu);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x00000ca0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020810u);
    return;

L_CA0:
    /* 00000ca0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000ca0u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_CA2:
    /* 00000ca2   4  movea.l (fffffbde,A5),A0 */
    c->pc = RC_ADDR(0x00000ca2u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x422u));
    c->a[0] = t0;

L_CA6:
    /* 00000ca6   6  move.l (ffffef94,A4),(4,A0) */
    c->pc = RC_ADDR(0x00000ca6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x106cu));
    rc_wr32(c, m, (c->a[0] + 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CAC:
    /* 00000cac   4  bra 00000dc8 */
    c->pc = RC_ADDR(0x00000cacu);
    goto L_DC8;

L_CB0:
    /* 00000cb0   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x00000cb0u);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_CB4:
    /* 00000cb4   4  lea (fffffbe2,A5),A0 */
    c->pc = RC_ADDR(0x00000cb4u);
    c->a[0] = (c->a[5] - 0x41eu);

L_CB8:
    /* 00000cb8   4  move.l A0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00000cb8u);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_CBC:
    /* 00000cbc   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00000cbcu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_CC0:
    /* 00000cc0   2  tst.b (A0) */
    c->pc = RC_ADDR(0x00000cc0u);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_CC2:
    /* 00000cc2   2  beq 00000cec */
    c->pc = RC_ADDR(0x00000cc2u);
    if (rc_cond(c, 7)) goto L_CEC;

L_CC4:
    /* 00000cc4   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00000cc4u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_CC8:
    /* 00000cc8   4  cmpi.b #2d,(A0) */
    c->pc = RC_ADDR(0x00000cc8u);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x0000002du);

L_CCC:
    /* 00000ccc   2  beq 00000cec */
    c->pc = RC_ADDR(0x00000cccu);
    if (rc_cond(c, 7)) goto L_CEC;

L_CCE:
    /* 00000cce   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00000cceu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_CD2:
    /* 00000cd2   4  addq.l #1,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00000cd2u);
    t3 = (c->a[5] - 0x1eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_CD6:
    /* 00000cd6   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00000cd6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CDA:
    /* 00000cda   4  addq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00000cdau);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_CDE:
    /* 00000cde   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00000cdeu);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_CE0:
    /* 00000ce0   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00000ce0u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CE2:
    /* 00000ce2   4  lea (ffffffca,A5),A1 */
    c->pc = RC_ADDR(0x00000ce2u);
    c->a[1] = (c->a[5] - 0x36u);

L_CE6:
    /* 00000ce6   4  move.b (A0),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00000ce6u);
    t0 = rc_rd8(c, m, c->a[0]);
    t4 = c->d[1];
    rc_wr8(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_CEA:
    /* 00000cea   2  bra 00000cbc */
    c->pc = RC_ADDR(0x00000ceau);
    rc_tick();
    goto L_CBC;

L_CEC:
    /* 00000cec   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000cecu);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_CEE:
    /* 00000cee   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00000ceeu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_CF2:
    /* 00000cf2   4  lea (ffffffca,A5),A0 */
    c->pc = RC_ADDR(0x00000cf2u);
    c->a[0] = (c->a[5] - 0x36u);

L_CF6:
    /* 00000cf6   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00000cf6u);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_CFA:
    /* 00000cfa   4  pea (ffffffca,A5) */
    c->pc = RC_ADDR(0x00000cfau);
    rc_push32(c, m, (c->a[5] - 0x36u));

L_CFE:
    /* 00000cfe   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x00000cfeu);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x00000d02u));
    rc_depth++;
    c->pc = RC_ADDR(0x00020832u);
    return;

L_D02:
    /* 00000d02   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000d02u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_D04:
    /* 00000d04   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00000d04u);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D06:
    /* 00000d06   4  move.w D0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00000d06u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D0A:
    /* 00000d0a   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00000d0au);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_D0E:
    /* 00000d0e   4  addq.l #1,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00000d0eu);
    t3 = (c->a[5] - 0x1eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_D12:
    /* 00000d12   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x00000d12u);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_D16:
    /* 00000d16   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00000d16u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_D1A:
    /* 00000d1a   2  tst.b (A0) */
    c->pc = RC_ADDR(0x00000d1au);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_D1C:
    /* 00000d1c   2  beq 00000d46 */
    c->pc = RC_ADDR(0x00000d1cu);
    if (rc_cond(c, 7)) goto L_D46;

L_D1E:
    /* 00000d1e   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00000d1eu);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_D22:
    /* 00000d22   4  cmpi.b #41,(A0) */
    c->pc = RC_ADDR(0x00000d22u);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000041u);

L_D26:
    /* 00000d26   2  bge 00000d46 */
    c->pc = RC_ADDR(0x00000d26u);
    if (rc_cond(c, 12)) goto L_D46;

L_D28:
    /* 00000d28   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00000d28u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_D2C:
    /* 00000d2c   4  addq.l #1,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00000d2cu);
    t3 = (c->a[5] - 0x1eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_L, t1, 0x00000001u, t2, 0);
    rc_wr32(c, m, t3, t2);

L_D30:
    /* 00000d30   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00000d30u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D34:
    /* 00000d34   4  addq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00000d34u);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_D38:
    /* 00000d38   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00000d38u);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_D3A:
    /* 00000d3a   2  move.w D0,D1 */
    c->pc = RC_ADDR(0x00000d3au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D3C:
    /* 00000d3c   4  lea (ffffffca,A5),A1 */
    c->pc = RC_ADDR(0x00000d3cu);
    c->a[1] = (c->a[5] - 0x36u);

L_D40:
    /* 00000d40   4  move.b (A0),(0,A1,D1.w) */
    c->pc = RC_ADDR(0x00000d40u);
    t0 = rc_rd8(c, m, c->a[0]);
    t4 = c->d[1];
    rc_wr8(c, m, (c->a[1] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_D44:
    /* 00000d44   2  bra 00000d16 */
    c->pc = RC_ADDR(0x00000d44u);
    rc_tick();
    goto L_D16;

L_D46:
    /* 00000d46   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00000d46u);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_D48:
    /* 00000d48   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00000d48u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D4C:
    /* 00000d4c   4  lea (ffffffca,A5),A0 */
    c->pc = RC_ADDR(0x00000d4cu);
    c->a[0] = (c->a[5] - 0x36u);

L_D50:
    /* 00000d50   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00000d50u);
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_D54:
    /* 00000d54   4  pea (ffffffca,A5) */
    c->pc = RC_ADDR(0x00000d54u);
    rc_push32(c, m, (c->a[5] - 0x36u));

L_D58:
    /* 00000d58   4  jsr (ffff82b4,A4) */
    c->pc = RC_ADDR(0x00000d58u);
    /* vector 115 */
    rc_push32(c, m, RC_ADDR(0x00000d5cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00020832u);
    return;

L_D5C:
    /* 00000d5c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000d5cu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_D5E:
    /* 00000d5e   2  subq.w #1,D0 */
    c->pc = RC_ADDR(0x00000d5eu);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D60:
    /* 00000d60   4  move.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00000d60u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D64:
    /* 00000d64   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00000d64u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_D68:
    /* 00000d68   2  move.b (A0),D0 */
    c->pc = RC_ADDR(0x00000d68u);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_D6A:
    /* 00000d6a   2  ext.w D0 */
    c->pc = RC_ADDR(0x00000d6au);
    rc_ext_w(c, 0);

L_D6C:
    /* 00000d6c   4  sub.w #41,D0 */
    c->pc = RC_ADDR(0x00000d6cu);
    t0 = 0x00000041u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_D70:
    /* 00000d70   4  move.w D0,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00000d70u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x14u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_D74:
    /* 00000d74   6  cmpi.w #f,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00000d74u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_D7A:
    /* 00000d7a   2  bcc 00000dc8 */
    c->pc = RC_ADDR(0x00000d7au);
    if (rc_cond(c, 4)) goto L_DC8;

L_D7C:
    /* 00000d7c   6  cmpi.w #27,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00000d7cu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_D82:
    /* 00000d82   2  bcc 00000dc8 */
    c->pc = RC_ADDR(0x00000d82u);
    if (rc_cond(c, 4)) goto L_DC8;

L_D84:
    /* 00000d84   4  move.b (d,A5),D0 */
    c->pc = RC_ADDR(0x00000d84u);
    t0 = rc_rd8(c, m, (c->a[5] + 0xdu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_D88:
    /* 00000d88   2  ext.w D0 */
    c->pc = RC_ADDR(0x00000d88u);
    rc_ext_w(c, 0);

L_D8A:
    /* 00000d8a   4  cmp.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x00000d8au);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_D8E:
    /* 00000d8e   2  bne 00000dc8 */
    c->pc = RC_ADDR(0x00000d8eu);
    if (rc_cond(c, 6)) goto L_DC8;

L_D90:
    /* 00000d90   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00000d90u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D94:
    /* 00000d94   4  mulu.w #222,D0 */
    c->pc = RC_ADDR(0x00000d94u);
    t0 = 0x00000222u;
    rc_mulu(c, 0, t0);

L_D98:
    /* 00000d98   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x00000d98u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_D9C:
    /* 00000d9c   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00000d9cu);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_DA0:
    /* 00000da0   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00000da0u);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_DA2:
    /* 00000da2   4  lea (ffffcf90,A4),A0 */
    c->pc = RC_ADDR(0x00000da2u);
    c->a[0] = (c->a[4] - 0x3070u);

L_DA6:
    /* 00000da6   6  move.l (ffffef94,A4),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00000da6u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x106cu));
    t4 = c->d[0];
    rc_wr32(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_L);

L_DAC:
    /* 00000dac   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00000dacu);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB0:
    /* 00000db0   4  mulu.w #222,D0 */
    c->pc = RC_ADDR(0x00000db0u);
    t0 = 0x00000222u;
    rc_mulu(c, 0, t0);

L_DB4:
    /* 00000db4   4  move.w (ffffffee,A5),D1 */
    c->pc = RC_ADDR(0x00000db4u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_DB8:
    /* 00000db8   4  mulu.w #e,D1 */
    c->pc = RC_ADDR(0x00000db8u);
    t0 = 0x0000000eu;
    rc_mulu(c, 1, t0);

L_DBC:
    /* 00000dbc   2  add.l D1,D0 */
    c->pc = RC_ADDR(0x00000dbcu);
    t0 = rc_d_get(c, 1, RC_L);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_DBE:
    /* 00000dbe   4  lea (ffffcf9c,A4),A0 */
    c->pc = RC_ADDR(0x00000dbeu);
    c->a[0] = (c->a[4] - 0x3064u);

L_DC2:
    /* 00000dc2   6  move.b (ffffffed,A5),(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00000dc2u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x13u));
    t4 = c->d[0];
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), t0);
    rc_set_nzvc(c, t0, RC_B);

L_DC8:
    /* 00000dc8   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000dc8u);
    rc_push32(c, m, RC_ADDR(0x00000002u));

L_DCC:
    /* 00000dcc   4  pea (fffffff8,A5) */
    c->pc = RC_ADDR(0x00000dccu);
    rc_push32(c, m, (c->a[5] - 0x8u));

L_DD0:
    /* 00000dd0   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000dd0u);
    rc_push32(c, m, RC_ADDR(0x00000dd4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_DD4:
    /* 00000dd4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000dd4u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_DD6:
    /* 00000dd6   4  tst.w (fffffff8,A5) */
    c->pc = RC_ADDR(0x00000dd6u);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_W);

L_DDA:
    /* 00000dda   4  beq 00000f6c */
    c->pc = RC_ADDR(0x00000ddau);
    if (rc_cond(c, 7)) goto L_F6C;

L_DDE:
    /* 00000dde   4  subq.w #1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00000ddeu);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_DE2:
    /* 00000de2   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00000de2u);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_DE6:
    /* 00000de6   4  pea (ffffffe6,A5) */
    c->pc = RC_ADDR(0x00000de6u);
    rc_push32(c, m, (c->a[5] - 0x1au));

L_DEA:
    /* 00000dea   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000deau);
    rc_push32(c, m, RC_ADDR(0x00000deeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_DEE:
    /* 00000dee   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000deeu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_DF0:
    /* 00000df0   4  movea.l (ffffcf88,A4),A0 */
    c->pc = RC_ADDR(0x00000df0u);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3078u));
    c->a[0] = t0;

L_DF4:
    /* 00000df4   4  cmpi.b #64,(A0) */
    c->pc = RC_ADDR(0x00000df4u);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_DF8:
    /* 00000df8   2  ble 00000e34 */
    c->pc = RC_ADDR(0x00000df8u);
    if (rc_cond(c, 15)) goto L_E34;

L_DFA:
    /* 00000dfa   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00000dfau);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_DFE:
    /* 00000dfe   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000dfeu);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_E02:
    /* 00000e02   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000e02u);
    rc_push32(c, m, RC_ADDR(0x00000e06u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_E06:
    /* 00000e06   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000e06u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_E08:
    /* 00000e08   4  move.b (fffffbe2,A5),D0 */
    c->pc = RC_ADDR(0x00000e08u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x41eu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_E0C:
    /* 00000e0c   2  ext.w D0 */
    c->pc = RC_ADDR(0x00000e0cu);
    rc_ext_w(c, 0);

L_E0E:
    /* 00000e0e   4  sub.w #64,D0 */
    c->pc = RC_ADDR(0x00000e0eu);
    t0 = 0x00000064u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_E12:
    /* 00000e12   4  move.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00000e12u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_E16:
    /* 00000e16   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x00000e16u);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_E1A:
    /* 00000e1a   2  bra 00000e2a */
    c->pc = RC_ADDR(0x00000e1au);
    goto L_E2A;

L_E1C:
    /* 00000e1c   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000e1cu);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_E20:
    /* 00000e20   4  jsr (00000af0) */
    c->pc = RC_ADDR(0x00000e20u);
    rc_push32(c, m, RC_ADDR(0x00000e24u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000af0u);
    return;

L_E24:
    /* 00000e24   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000e24u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_E26:
    /* 00000e26   4  addq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00000e26u);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_E2A:
    /* 00000e2a   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00000e2au);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_E2E:
    /* 00000e2e   4  cmp.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00000e2eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_E32:
    /* 00000e32   2  bcs 00000e1c */
    c->pc = RC_ADDR(0x00000e32u);
    if (rc_cond(c, 5)) { rc_tick(); goto L_E1C; }

L_E34:
    /* 00000e34   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000e34u);
    rc_push32(c, m, RC_ADDR(0x00000002u));

L_E38:
    /* 00000e38   4  pea (fffffff6,A5) */
    c->pc = RC_ADDR(0x00000e38u);
    rc_push32(c, m, (c->a[5] - 0xau));

L_E3C:
    /* 00000e3c   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000e3cu);
    rc_push32(c, m, RC_ADDR(0x00000e40u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_E40:
    /* 00000e40   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000e40u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_E42:
    /* 00000e42   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00000e42u);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_E46:
    /* 00000e46   4  pea (ffffffe7,A5) */
    c->pc = RC_ADDR(0x00000e46u);
    rc_push32(c, m, (c->a[5] - 0x19u));

L_E4A:
    /* 00000e4a   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000e4au);
    rc_push32(c, m, RC_ADDR(0x00000e4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_E4E:
    /* 00000e4e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000e4eu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_E50:
    /* 00000e50   4  tst.w (fffffff6,A5) */
    c->pc = RC_ADDR(0x00000e50u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xau));
    rc_set_nzvc(c, t0, RC_W);

L_E54:
    /* 00000e54   2  beq 00000eaa */
    c->pc = RC_ADDR(0x00000e54u);
    if (rc_cond(c, 7)) goto L_EAA;

L_E56:
    /* 00000e56   6  cmpi.b #64,(ffffffe7,A5) */
    c->pc = RC_ADDR(0x00000e56u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x19u));
    rc_cmp(c, RC_B, t0, 0x00000064u);

L_E5C:
    /* 00000e5c   2  bne 00000e8c */
    c->pc = RC_ADDR(0x00000e5cu);
    if (rc_cond(c, 6)) goto L_E8C;

L_E5E:
    /* 00000e5e   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000e5eu);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_E62:
    /* 00000e62   4  jsr (00000af0) */
    c->pc = RC_ADDR(0x00000e62u);
    rc_push32(c, m, RC_ADDR(0x00000e66u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000af0u);
    return;

L_E66:
    /* 00000e66   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000e66u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_E68:
    /* 00000e68   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000e68u);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_E6C:
    /* 00000e6c   4  jsr (00000af0) */
    c->pc = RC_ADDR(0x00000e6cu);
    rc_push32(c, m, RC_ADDR(0x00000e70u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000af0u);
    return;

L_E70:
    /* 00000e70   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000e70u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_E72:
    /* 00000e72   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000e72u);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_E76:
    /* 00000e76   4  jsr (00000af0) */
    c->pc = RC_ADDR(0x00000e76u);
    rc_push32(c, m, RC_ADDR(0x00000e7au));
    rc_depth++;
    c->pc = RC_ADDR(0x00000af0u);
    return;

L_E7A:
    /* 00000e7a   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000e7au);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_E7C:
    /* 00000e7c   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00000e7cu);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_E80:
    /* 00000e80   4  pea (ffffffe7,A5) */
    c->pc = RC_ADDR(0x00000e80u);
    rc_push32(c, m, (c->a[5] - 0x19u));

L_E84:
    /* 00000e84   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000e84u);
    rc_push32(c, m, RC_ADDR(0x00000e88u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_E88:
    /* 00000e88   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000e88u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_E8A:
    /* 00000e8a   2  bra 00000ea4 */
    c->pc = RC_ADDR(0x00000e8au);
    goto L_EA4;

L_E8C:
    /* 00000e8c   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000e8cu);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_E90:
    /* 00000e90   4  jsr (00000af0) */
    c->pc = RC_ADDR(0x00000e90u);
    rc_push32(c, m, RC_ADDR(0x00000e94u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000af0u);
    return;

L_E94:
    /* 00000e94   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000e94u);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_E96:
    /* 00000e96   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00000e96u);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_E9A:
    /* 00000e9a   4  pea (ffffffe7,A5) */
    c->pc = RC_ADDR(0x00000e9au);
    rc_push32(c, m, (c->a[5] - 0x19u));

L_E9E:
    /* 00000e9e   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000e9eu);
    rc_push32(c, m, RC_ADDR(0x00000ea2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_EA2:
    /* 00000ea2   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000ea2u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EA4:
    /* 00000ea4   4  subq.w #1,(fffffff6,A5) */
    c->pc = RC_ADDR(0x00000ea4u);
    t3 = (c->a[5] - 0xau);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_EA8:
    /* 00000ea8   2  bra 00000e50 */
    c->pc = RC_ADDR(0x00000ea8u);
    rc_tick();
    goto L_E50;

L_EAA:
    /* 00000eaa   4  movea.l (ffffcf88,A4),A0 */
    c->pc = RC_ADDR(0x00000eaau);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3078u));
    c->a[0] = t0;

L_EAE:
    /* 00000eae   4  cmpi.b #fc,(A0) */
    c->pc = RC_ADDR(0x00000eaeu);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x000000fcu);

L_EB2:
    /* 00000eb2   2  bne 00000ec2 */
    c->pc = RC_ADDR(0x00000eb2u);
    if (rc_cond(c, 6)) goto L_EC2;

L_EB4:
    /* 00000eb4   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000eb4u);
    rc_push32(c, m, RC_ADDR(0x00000002u));

L_EB8:
    /* 00000eb8   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000eb8u);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_EBC:
    /* 00000ebc   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000ebcu);
    rc_push32(c, m, RC_ADDR(0x00000ec0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_EC0:
    /* 00000ec0   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000ec0u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EC2:
    /* 00000ec2   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000ec2u);
    rc_push32(c, m, RC_ADDR(0x00000002u));

L_EC6:
    /* 00000ec6   4  pea (fffffff2,A5) */
    c->pc = RC_ADDR(0x00000ec6u);
    rc_push32(c, m, (c->a[5] - 0xeu));

L_ECA:
    /* 00000eca   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000ecau);
    rc_push32(c, m, RC_ADDR(0x00000eceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_ECE:
    /* 00000ece   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000eceu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_ED0:
    /* 00000ed0   4  clr.w (fffffff4,A5) */
    c->pc = RC_ADDR(0x00000ed0u);
    rc_wr16(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_ED4:
    /* 00000ed4   2  bra 00000f0e */
    c->pc = RC_ADDR(0x00000ed4u);
    goto L_F0E;

L_ED6:
    /* 00000ed6   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000ed6u);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_EDA:
    /* 00000eda   4  jsr (00000af0) */
    c->pc = RC_ADDR(0x00000edau);
    rc_push32(c, m, RC_ADDR(0x00000edeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000af0u);
    return;

L_EDE:
    /* 00000ede   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00000edeu);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_EE0:
    /* 00000ee0   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00000ee0u);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_EE4:
    /* 00000ee4   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000ee4u);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_EE8:
    /* 00000ee8   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000ee8u);
    rc_push32(c, m, RC_ADDR(0x00000eecu));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_EEC:
    /* 00000eec   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000eecu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_EEE:
    /* 00000eee   4  move.b (fffffbe2,A5),D0 */
    c->pc = RC_ADDR(0x00000eeeu);
    t0 = rc_rd8(c, m, (c->a[5] - 0x41eu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_EF2:
    /* 00000ef2   2  ext.w D0 */
    c->pc = RC_ADDR(0x00000ef2u);
    rc_ext_w(c, 0);

L_EF4:
    /* 00000ef4   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00000ef4u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_EF6:
    /* 00000ef6   4  jsr (00000b22) */
    c->pc = RC_ADDR(0x00000ef6u);
    rc_push32(c, m, RC_ADDR(0x00000efau));
    rc_depth++;
    c->pc = RC_ADDR(0x00000b22u);
    return;

L_EFA:
    /* 00000efa   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00000efau);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_EFC:
    /* 00000efc   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00000efcu);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_F00:
    /* 00000f00   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000f00u);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_F04:
    /* 00000f04   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000f04u);
    rc_push32(c, m, RC_ADDR(0x00000f08u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_F08:
    /* 00000f08   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000f08u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F0A:
    /* 00000f0a   4  addq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00000f0au);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_F0E:
    /* 00000f0e   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00000f0eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F12:
    /* 00000f12   4  cmp.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00000f12u);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    t1 = rc_d_get(c, 0, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_F16:
    /* 00000f16   2  bcs 00000ed6 */
    c->pc = RC_ADDR(0x00000f16u);
    if (rc_cond(c, 5)) { rc_tick(); goto L_ED6; }

L_F18:
    /* 00000f18   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000f18u);
    rc_push32(c, m, RC_ADDR(0x00000002u));

L_F1C:
    /* 00000f1c   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000f1cu);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_F20:
    /* 00000f20   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000f20u);
    rc_push32(c, m, RC_ADDR(0x00000f24u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_F24:
    /* 00000f24   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000f24u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F26:
    /* 00000f26   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000f26u);
    rc_push32(c, m, RC_ADDR(0x00000002u));

L_F2A:
    /* 00000f2a   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000f2au);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_F2E:
    /* 00000f2e   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000f2eu);
    rc_push32(c, m, RC_ADDR(0x00000f32u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_F32:
    /* 00000f32   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000f32u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F34:
    /* 00000f34   4  move.b (fffffbe3,A5),D0 */
    c->pc = RC_ADDR(0x00000f34u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x41du));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F38:
    /* 00000f38   2  ext.w D0 */
    c->pc = RC_ADDR(0x00000f38u);
    rc_ext_w(c, 0);

L_F3A:
    /* 00000f3a   4  move.w D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00000f3au);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_F3E:
    /* 00000f3e   4  move.w (fffffff4,A5),D0 */
    c->pc = RC_ADDR(0x00000f3eu);
    t0 = rc_rd16(c, m, (c->a[5] - 0xcu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_F42:
    /* 00000f42   4  subq.w #1,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00000f42u);
    t3 = (c->a[5] - 0xcu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_F46:
    /* 00000f46   2  tst.w D0 */
    c->pc = RC_ADDR(0x00000f46u);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_F48:
    /* 00000f48   2  beq 00000f68 */
    c->pc = RC_ADDR(0x00000f48u);
    if (rc_cond(c, 7)) goto L_F68;

L_F4A:
    /* 00000f4a   4  pea (00000002).l */
    c->pc = RC_ADDR(0x00000f4au);
    rc_push32(c, m, RC_ADDR(0x00000002u));

L_F4E:
    /* 00000f4e   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000f4eu);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_F52:
    /* 00000f52   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000f52u);
    rc_push32(c, m, RC_ADDR(0x00000f56u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_F56:
    /* 00000f56   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000f56u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F58:
    /* 00000f58   4  move.b (fffffbe3,A5),D0 */
    c->pc = RC_ADDR(0x00000f58u);
    t0 = rc_rd8(c, m, (c->a[5] - 0x41du));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F5C:
    /* 00000f5c   2  ext.w D0 */
    c->pc = RC_ADDR(0x00000f5cu);
    rc_ext_w(c, 0);

L_F5E:
    /* 00000f5e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00000f5eu);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F60:
    /* 00000f60   4  jsr (00000b22) */
    c->pc = RC_ADDR(0x00000f60u);
    rc_push32(c, m, RC_ADDR(0x00000f64u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000b22u);
    return;

L_F64:
    /* 00000f64   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00000f64u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_F66:
    /* 00000f66   2  bra 00000f3e */
    c->pc = RC_ADDR(0x00000f66u);
    rc_tick();
    goto L_F3E;

L_F68:
    /* 00000f68   4  bra 00000dd6 */
    c->pc = RC_ADDR(0x00000f68u);
    rc_tick();
    goto L_DD6;

L_F6C:
    /* 00000f6c   4  pea (00000001).l */
    c->pc = RC_ADDR(0x00000f6cu);
    rc_push32(c, m, RC_ADDR(0x00000001u));

L_F70:
    /* 00000f70   4  pea (fffffbe2,A5) */
    c->pc = RC_ADDR(0x00000f70u);
    rc_push32(c, m, (c->a[5] - 0x41eu));

L_F74:
    /* 00000f74   4  jsr (00000aaa) */
    c->pc = RC_ADDR(0x00000f74u);
    rc_push32(c, m, RC_ADDR(0x00000f78u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000aaau);
    return;

L_F78:
    /* 00000f78   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000f78u);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F7A:
    /* 00000f7a   4  move.b (fffffbe2,A5),D0 */
    c->pc = RC_ADDR(0x00000f7au);
    t0 = rc_rd8(c, m, (c->a[5] - 0x41eu));
    rc_d_set(c, 0, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_F7E:
    /* 00000f7e   2  ext.w D0 */
    c->pc = RC_ADDR(0x00000f7eu);
    rc_ext_w(c, 0);

L_F80:
    /* 00000f80   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00000f80u);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_F82:
    /* 00000f82   4  jsr (00000b22) */
    c->pc = RC_ADDR(0x00000f82u);
    rc_push32(c, m, RC_ADDR(0x00000f86u));
    rc_depth++;
    c->pc = RC_ADDR(0x00000b22u);
    return;

L_F86:
    /* 00000f86   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00000f86u);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_F88:
    /* 00000f88   4  subq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00000f88u);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x00000001u;
    rc_flags_sub(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_F8C:
    /* 00000f8c   4  bra 00000c0c */
    c->pc = RC_ADDR(0x00000f8cu);
    rc_tick();
    goto L_C0C;

L_F90:
    /* 00000f90   4  move.l (ffffffe8,A5),-(A7) */
    c->pc = RC_ADDR(0x00000f90u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x18u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F94:
    /* 00000f94   4  move.l (ffffffde,A5),-(A7) */
    c->pc = RC_ADDR(0x00000f94u);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_F98:
    /* 00000f98   4  jsr (ffff8344,A4) */
    c->pc = RC_ADDR(0x00000f98u);
    /* vector 139: exec.library -210 */
    c->pc = RC_ADDR(0x00000f9cu);
    rc_os_call(c, m, 0, -210);

L_F9C:
    /* 00000f9c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00000f9cu);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_F9E:
    /* 00000f9e   2  unlk A5 */
    c->pc = RC_ADDR(0x00000f9eu);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_FA0:
    /* 00000fa0   2  rts */
    c->pc = RC_ADDR(0x00000fa0u);
    rc_ret(c, m);
    return;

}
