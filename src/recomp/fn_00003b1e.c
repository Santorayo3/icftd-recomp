/* fn_00003b1e - 1520 byte(s), 419 instruction(s).
 * Generated from export\code\dshell\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the interpreter as `rcmp` runs it: tools\recomp-fixtures.ps1. */
#include "cpu.h"

void fn_00003b1e(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00003b1eu): goto L_3B1E;
    case RC_ADDR(0x00003b22u): goto L_3B22;
    case RC_ADDR(0x00003b26u): goto L_3B26;
    case RC_ADDR(0x00003b28u): goto L_3B28;
    case RC_ADDR(0x00003b2au): goto L_3B2A;
    case RC_ADDR(0x00003b2cu): goto L_3B2C;
    case RC_ADDR(0x00003b2eu): goto L_3B2E;
    case RC_ADDR(0x00003b32u): goto L_3B32;
    case RC_ADDR(0x00003b38u): goto L_3B38;
    case RC_ADDR(0x00003b3cu): goto L_3B3C;
    case RC_ADDR(0x00003b40u): goto L_3B40;
    case RC_ADDR(0x00003b44u): goto L_3B44;
    case RC_ADDR(0x00003b48u): goto L_3B48;
    case RC_ADDR(0x00003b4au): goto L_3B4A;
    case RC_ADDR(0x00003b4eu): goto L_3B4E;
    case RC_ADDR(0x00003b50u): goto L_3B50;
    case RC_ADDR(0x00003b54u): goto L_3B54;
    case RC_ADDR(0x00003b58u): goto L_3B58;
    case RC_ADDR(0x00003b5cu): goto L_3B5C;
    case RC_ADDR(0x00003b60u): goto L_3B60;
    case RC_ADDR(0x00003b62u): goto L_3B62;
    case RC_ADDR(0x00003b66u): goto L_3B66;
    case RC_ADDR(0x00003b6au): goto L_3B6A;
    case RC_ADDR(0x00003b6eu): goto L_3B6E;
    case RC_ADDR(0x00003b70u): goto L_3B70;
    case RC_ADDR(0x00003b74u): goto L_3B74;
    case RC_ADDR(0x00003b76u): goto L_3B76;
    case RC_ADDR(0x00003b78u): goto L_3B78;
    case RC_ADDR(0x00003b7au): goto L_3B7A;
    case RC_ADDR(0x00003b7cu): goto L_3B7C;
    case RC_ADDR(0x00003b80u): goto L_3B80;
    case RC_ADDR(0x00003b84u): goto L_3B84;
    case RC_ADDR(0x00003b88u): goto L_3B88;
    case RC_ADDR(0x00003b8cu): goto L_3B8C;
    case RC_ADDR(0x00003b90u): goto L_3B90;
    case RC_ADDR(0x00003b94u): goto L_3B94;
    case RC_ADDR(0x00003b96u): goto L_3B96;
    case RC_ADDR(0x00003b9au): goto L_3B9A;
    case RC_ADDR(0x00003b9eu): goto L_3B9E;
    case RC_ADDR(0x00003ba2u): goto L_3BA2;
    case RC_ADDR(0x00003ba4u): goto L_3BA4;
    case RC_ADDR(0x00003ba8u): goto L_3BA8;
    case RC_ADDR(0x00003bacu): goto L_3BAC;
    case RC_ADDR(0x00003bb0u): goto L_3BB0;
    case RC_ADDR(0x00003bb2u): goto L_3BB2;
    case RC_ADDR(0x00003bb6u): goto L_3BB6;
    case RC_ADDR(0x00003bb8u): goto L_3BB8;
    case RC_ADDR(0x00003bbcu): goto L_3BBC;
    case RC_ADDR(0x00003bc0u): goto L_3BC0;
    case RC_ADDR(0x00003bc4u): goto L_3BC4;
    case RC_ADDR(0x00003bc6u): goto L_3BC6;
    case RC_ADDR(0x00003bcau): goto L_3BCA;
    case RC_ADDR(0x00003bceu): goto L_3BCE;
    case RC_ADDR(0x00003bd0u): goto L_3BD0;
    case RC_ADDR(0x00003bd4u): goto L_3BD4;
    case RC_ADDR(0x00003bd8u): goto L_3BD8;
    case RC_ADDR(0x00003bdcu): goto L_3BDC;
    case RC_ADDR(0x00003bdeu): goto L_3BDE;
    case RC_ADDR(0x00003be2u): goto L_3BE2;
    case RC_ADDR(0x00003be6u): goto L_3BE6;
    case RC_ADDR(0x00003beau): goto L_3BEA;
    case RC_ADDR(0x00003beeu): goto L_3BEE;
    case RC_ADDR(0x00003bf2u): goto L_3BF2;
    case RC_ADDR(0x00003bf6u): goto L_3BF6;
    case RC_ADDR(0x00003bf8u): goto L_3BF8;
    case RC_ADDR(0x00003bfcu): goto L_3BFC;
    case RC_ADDR(0x00003bfeu): goto L_3BFE;
    case RC_ADDR(0x00003c02u): goto L_3C02;
    case RC_ADDR(0x00003c06u): goto L_3C06;
    case RC_ADDR(0x00003c08u): goto L_3C08;
    case RC_ADDR(0x00003c0cu): goto L_3C0C;
    case RC_ADDR(0x00003c0eu): goto L_3C0E;
    case RC_ADDR(0x00003c12u): goto L_3C12;
    case RC_ADDR(0x00003c14u): goto L_3C14;
    case RC_ADDR(0x00003c18u): goto L_3C18;
    case RC_ADDR(0x00003c1au): goto L_3C1A;
    case RC_ADDR(0x00003c1eu): goto L_3C1E;
    case RC_ADDR(0x00003c22u): goto L_3C22;
    case RC_ADDR(0x00003c24u): goto L_3C24;
    case RC_ADDR(0x00003c28u): goto L_3C28;
    case RC_ADDR(0x00003c2au): goto L_3C2A;
    case RC_ADDR(0x00003c2eu): goto L_3C2E;
    case RC_ADDR(0x00003c30u): goto L_3C30;
    case RC_ADDR(0x00003c34u): goto L_3C34;
    case RC_ADDR(0x00003c38u): goto L_3C38;
    case RC_ADDR(0x00003c3cu): goto L_3C3C;
    case RC_ADDR(0x00003c40u): goto L_3C40;
    case RC_ADDR(0x00003c44u): goto L_3C44;
    case RC_ADDR(0x00003c4cu): goto L_3C4C;
    case RC_ADDR(0x00003c4eu): goto L_3C4E;
    case RC_ADDR(0x00003c56u): goto L_3C56;
    case RC_ADDR(0x00003c58u): goto L_3C58;
    case RC_ADDR(0x00003c60u): goto L_3C60;
    case RC_ADDR(0x00003c62u): goto L_3C62;
    case RC_ADDR(0x00003c6au): goto L_3C6A;
    case RC_ADDR(0x00003c6cu): goto L_3C6C;
    case RC_ADDR(0x00003c74u): goto L_3C74;
    case RC_ADDR(0x00003c78u): goto L_3C78;
    case RC_ADDR(0x00003c7cu): goto L_3C7C;
    case RC_ADDR(0x00003c80u): goto L_3C80;
    case RC_ADDR(0x00003c82u): goto L_3C82;
    case RC_ADDR(0x00003c86u): goto L_3C86;
    case RC_ADDR(0x00003c88u): goto L_3C88;
    case RC_ADDR(0x00003c8au): goto L_3C8A;
    case RC_ADDR(0x00003c92u): goto L_3C92;
    case RC_ADDR(0x00003c94u): goto L_3C94;
    case RC_ADDR(0x00003c98u): goto L_3C98;
    case RC_ADDR(0x00003c9au): goto L_3C9A;
    case RC_ADDR(0x00003c9eu): goto L_3C9E;
    case RC_ADDR(0x00003ca0u): goto L_3CA0;
    case RC_ADDR(0x00003ca2u): goto L_3CA2;
    case RC_ADDR(0x00003ca6u): goto L_3CA6;
    case RC_ADDR(0x00003ca8u): goto L_3CA8;
    case RC_ADDR(0x00003cacu): goto L_3CAC;
    case RC_ADDR(0x00003caeu): goto L_3CAE;
    case RC_ADDR(0x00003cb6u): goto L_3CB6;
    case RC_ADDR(0x00003cbau): goto L_3CBA;
    case RC_ADDR(0x00003cbeu): goto L_3CBE;
    case RC_ADDR(0x00003cc2u): goto L_3CC2;
    case RC_ADDR(0x00003cc6u): goto L_3CC6;
    case RC_ADDR(0x00003ccau): goto L_3CCA;
    case RC_ADDR(0x00003cccu): goto L_3CCC;
    case RC_ADDR(0x00003cd0u): goto L_3CD0;
    case RC_ADDR(0x00003cd2u): goto L_3CD2;
    case RC_ADDR(0x00003cd4u): goto L_3CD4;
    case RC_ADDR(0x00003cd8u): goto L_3CD8;
    case RC_ADDR(0x00003cdeu): goto L_3CDE;
    case RC_ADDR(0x00003ce0u): goto L_3CE0;
    case RC_ADDR(0x00003ce2u): goto L_3CE2;
    case RC_ADDR(0x00003ce4u): goto L_3CE4;
    case RC_ADDR(0x00003ce8u): goto L_3CE8;
    case RC_ADDR(0x00003ceeu): goto L_3CEE;
    case RC_ADDR(0x00003cf0u): goto L_3CF0;
    case RC_ADDR(0x00003cf2u): goto L_3CF2;
    case RC_ADDR(0x00003cf4u): goto L_3CF4;
    case RC_ADDR(0x00003cf6u): goto L_3CF6;
    case RC_ADDR(0x00003cfau): goto L_3CFA;
    case RC_ADDR(0x00003cfeu): goto L_3CFE;
    case RC_ADDR(0x00003d02u): goto L_3D02;
    case RC_ADDR(0x00003d06u): goto L_3D06;
    case RC_ADDR(0x00003d0au): goto L_3D0A;
    case RC_ADDR(0x00003d0cu): goto L_3D0C;
    case RC_ADDR(0x00003d10u): goto L_3D10;
    case RC_ADDR(0x00003d16u): goto L_3D16;
    case RC_ADDR(0x00003d1au): goto L_3D1A;
    case RC_ADDR(0x00003d1eu): goto L_3D1E;
    case RC_ADDR(0x00003d20u): goto L_3D20;
    case RC_ADDR(0x00003d24u): goto L_3D24;
    case RC_ADDR(0x00003d2au): goto L_3D2A;
    case RC_ADDR(0x00003d2eu): goto L_3D2E;
    case RC_ADDR(0x00003d32u): goto L_3D32;
    case RC_ADDR(0x00003d36u): goto L_3D36;
    case RC_ADDR(0x00003d3au): goto L_3D3A;
    case RC_ADDR(0x00003d3eu): goto L_3D3E;
    case RC_ADDR(0x00003d42u): goto L_3D42;
    case RC_ADDR(0x00003d46u): goto L_3D46;
    case RC_ADDR(0x00003d4au): goto L_3D4A;
    case RC_ADDR(0x00003d4eu): goto L_3D4E;
    case RC_ADDR(0x00003d52u): goto L_3D52;
    case RC_ADDR(0x00003d56u): goto L_3D56;
    case RC_ADDR(0x00003d5au): goto L_3D5A;
    case RC_ADDR(0x00003d5eu): goto L_3D5E;
    case RC_ADDR(0x00003d60u): goto L_3D60;
    case RC_ADDR(0x00003d64u): goto L_3D64;
    case RC_ADDR(0x00003d68u): goto L_3D68;
    case RC_ADDR(0x00003d6cu): goto L_3D6C;
    case RC_ADDR(0x00003d70u): goto L_3D70;
    case RC_ADDR(0x00003d74u): goto L_3D74;
    case RC_ADDR(0x00003d76u): goto L_3D76;
    case RC_ADDR(0x00003d7au): goto L_3D7A;
    case RC_ADDR(0x00003d7eu): goto L_3D7E;
    case RC_ADDR(0x00003d82u): goto L_3D82;
    case RC_ADDR(0x00003d86u): goto L_3D86;
    case RC_ADDR(0x00003d8au): goto L_3D8A;
    case RC_ADDR(0x00003d8cu): goto L_3D8C;
    case RC_ADDR(0x00003d90u): goto L_3D90;
    case RC_ADDR(0x00003d94u): goto L_3D94;
    case RC_ADDR(0x00003d98u): goto L_3D98;
    case RC_ADDR(0x00003d9cu): goto L_3D9C;
    case RC_ADDR(0x00003da2u): goto L_3DA2;
    case RC_ADDR(0x00003da6u): goto L_3DA6;
    case RC_ADDR(0x00003daau): goto L_3DAA;
    case RC_ADDR(0x00003dacu): goto L_3DAC;
    case RC_ADDR(0x00003db0u): goto L_3DB0;
    case RC_ADDR(0x00003db8u): goto L_3DB8;
    case RC_ADDR(0x00003dbau): goto L_3DBA;
    case RC_ADDR(0x00003dc2u): goto L_3DC2;
    case RC_ADDR(0x00003dc4u): goto L_3DC4;
    case RC_ADDR(0x00003dcau): goto L_3DCA;
    case RC_ADDR(0x00003dccu): goto L_3DCC;
    case RC_ADDR(0x00003dd2u): goto L_3DD2;
    case RC_ADDR(0x00003dd8u): goto L_3DD8;
    case RC_ADDR(0x00003ddau): goto L_3DDA;
    case RC_ADDR(0x00003ddeu): goto L_3DDE;
    case RC_ADDR(0x00003de4u): goto L_3DE4;
    case RC_ADDR(0x00003de8u): goto L_3DE8;
    case RC_ADDR(0x00003deeu): goto L_3DEE;
    case RC_ADDR(0x00003df2u): goto L_3DF2;
    case RC_ADDR(0x00003df6u): goto L_3DF6;
    case RC_ADDR(0x00003dfau): goto L_3DFA;
    case RC_ADDR(0x00003dfeu): goto L_3DFE;
    case RC_ADDR(0x00003e02u): goto L_3E02;
    case RC_ADDR(0x00003e06u): goto L_3E06;
    case RC_ADDR(0x00003e0au): goto L_3E0A;
    case RC_ADDR(0x00003e0eu): goto L_3E0E;
    case RC_ADDR(0x00003e12u): goto L_3E12;
    case RC_ADDR(0x00003e16u): goto L_3E16;
    case RC_ADDR(0x00003e1au): goto L_3E1A;
    case RC_ADDR(0x00003e1cu): goto L_3E1C;
    case RC_ADDR(0x00003e22u): goto L_3E22;
    case RC_ADDR(0x00003e24u): goto L_3E24;
    case RC_ADDR(0x00003e2au): goto L_3E2A;
    case RC_ADDR(0x00003e2cu): goto L_3E2C;
    case RC_ADDR(0x00003e30u): goto L_3E30;
    case RC_ADDR(0x00003e34u): goto L_3E34;
    case RC_ADDR(0x00003e38u): goto L_3E38;
    case RC_ADDR(0x00003e3au): goto L_3E3A;
    case RC_ADDR(0x00003e40u): goto L_3E40;
    case RC_ADDR(0x00003e42u): goto L_3E42;
    case RC_ADDR(0x00003e46u): goto L_3E46;
    case RC_ADDR(0x00003e4au): goto L_3E4A;
    case RC_ADDR(0x00003e4eu): goto L_3E4E;
    case RC_ADDR(0x00003e50u): goto L_3E50;
    case RC_ADDR(0x00003e54u): goto L_3E54;
    case RC_ADDR(0x00003e56u): goto L_3E56;
    case RC_ADDR(0x00003e58u): goto L_3E58;
    case RC_ADDR(0x00003e5cu): goto L_3E5C;
    case RC_ADDR(0x00003e60u): goto L_3E60;
    case RC_ADDR(0x00003e64u): goto L_3E64;
    case RC_ADDR(0x00003e66u): goto L_3E66;
    case RC_ADDR(0x00003e68u): goto L_3E68;
    case RC_ADDR(0x00003e6cu): goto L_3E6C;
    case RC_ADDR(0x00003e70u): goto L_3E70;
    case RC_ADDR(0x00003e74u): goto L_3E74;
    case RC_ADDR(0x00003e76u): goto L_3E76;
    case RC_ADDR(0x00003e78u): goto L_3E78;
    case RC_ADDR(0x00003e7cu): goto L_3E7C;
    case RC_ADDR(0x00003e7eu): goto L_3E7E;
    case RC_ADDR(0x00003e80u): goto L_3E80;
    case RC_ADDR(0x00003e84u): goto L_3E84;
    case RC_ADDR(0x00003e86u): goto L_3E86;
    case RC_ADDR(0x00003e8au): goto L_3E8A;
    case RC_ADDR(0x00003e90u): goto L_3E90;
    case RC_ADDR(0x00003e94u): goto L_3E94;
    case RC_ADDR(0x00003e98u): goto L_3E98;
    case RC_ADDR(0x00003e9cu): goto L_3E9C;
    case RC_ADDR(0x00003ea0u): goto L_3EA0;
    case RC_ADDR(0x00003ea2u): goto L_3EA2;
    case RC_ADDR(0x00003ea4u): goto L_3EA4;
    case RC_ADDR(0x00003ea8u): goto L_3EA8;
    case RC_ADDR(0x00003eacu): goto L_3EAC;
    case RC_ADDR(0x00003eb0u): goto L_3EB0;
    case RC_ADDR(0x00003eb2u): goto L_3EB2;
    case RC_ADDR(0x00003eb6u): goto L_3EB6;
    case RC_ADDR(0x00003eb8u): goto L_3EB8;
    case RC_ADDR(0x00003ebcu): goto L_3EBC;
    case RC_ADDR(0x00003ec0u): goto L_3EC0;
    case RC_ADDR(0x00003ec6u): goto L_3EC6;
    case RC_ADDR(0x00003ec8u): goto L_3EC8;
    case RC_ADDR(0x00003eccu): goto L_3ECC;
    case RC_ADDR(0x00003ed0u): goto L_3ED0;
    case RC_ADDR(0x00003ed4u): goto L_3ED4;
    case RC_ADDR(0x00003ed8u): goto L_3ED8;
    case RC_ADDR(0x00003edcu): goto L_3EDC;
    case RC_ADDR(0x00003ee0u): goto L_3EE0;
    case RC_ADDR(0x00003ee4u): goto L_3EE4;
    case RC_ADDR(0x00003ee8u): goto L_3EE8;
    case RC_ADDR(0x00003eecu): goto L_3EEC;
    case RC_ADDR(0x00003ef0u): goto L_3EF0;
    case RC_ADDR(0x00003ef4u): goto L_3EF4;
    case RC_ADDR(0x00003ef6u): goto L_3EF6;
    case RC_ADDR(0x00003ef8u): goto L_3EF8;
    case RC_ADDR(0x00003efcu): goto L_3EFC;
    case RC_ADDR(0x00003f00u): goto L_3F00;
    case RC_ADDR(0x00003f04u): goto L_3F04;
    case RC_ADDR(0x00003f06u): goto L_3F06;
    case RC_ADDR(0x00003f08u): goto L_3F08;
    case RC_ADDR(0x00003f0cu): goto L_3F0C;
    case RC_ADDR(0x00003f10u): goto L_3F10;
    case RC_ADDR(0x00003f14u): goto L_3F14;
    case RC_ADDR(0x00003f18u): goto L_3F18;
    case RC_ADDR(0x00003f1au): goto L_3F1A;
    case RC_ADDR(0x00003f1eu): goto L_3F1E;
    case RC_ADDR(0x00003f22u): goto L_3F22;
    case RC_ADDR(0x00003f28u): goto L_3F28;
    case RC_ADDR(0x00003f2au): goto L_3F2A;
    case RC_ADDR(0x00003f30u): goto L_3F30;
    case RC_ADDR(0x00003f36u): goto L_3F36;
    case RC_ADDR(0x00003f38u): goto L_3F38;
    case RC_ADDR(0x00003f3cu): goto L_3F3C;
    case RC_ADDR(0x00003f40u): goto L_3F40;
    case RC_ADDR(0x00003f46u): goto L_3F46;
    case RC_ADDR(0x00003f48u): goto L_3F48;
    case RC_ADDR(0x00003f4cu): goto L_3F4C;
    case RC_ADDR(0x00003f50u): goto L_3F50;
    case RC_ADDR(0x00003f54u): goto L_3F54;
    case RC_ADDR(0x00003f58u): goto L_3F58;
    case RC_ADDR(0x00003f5cu): goto L_3F5C;
    case RC_ADDR(0x00003f60u): goto L_3F60;
    case RC_ADDR(0x00003f64u): goto L_3F64;
    case RC_ADDR(0x00003f68u): goto L_3F68;
    case RC_ADDR(0x00003f6cu): goto L_3F6C;
    case RC_ADDR(0x00003f70u): goto L_3F70;
    case RC_ADDR(0x00003f74u): goto L_3F74;
    case RC_ADDR(0x00003f78u): goto L_3F78;
    case RC_ADDR(0x00003f7cu): goto L_3F7C;
    case RC_ADDR(0x00003f80u): goto L_3F80;
    case RC_ADDR(0x00003f84u): goto L_3F84;
    case RC_ADDR(0x00003f86u): goto L_3F86;
    case RC_ADDR(0x00003f88u): goto L_3F88;
    case RC_ADDR(0x00003f8cu): goto L_3F8C;
    case RC_ADDR(0x00003f8eu): goto L_3F8E;
    case RC_ADDR(0x00003f92u): goto L_3F92;
    case RC_ADDR(0x00003f96u): goto L_3F96;
    case RC_ADDR(0x00003f98u): goto L_3F98;
    case RC_ADDR(0x00003f9eu): goto L_3F9E;
    case RC_ADDR(0x00003fa4u): goto L_3FA4;
    case RC_ADDR(0x00003faau): goto L_3FAA;
    case RC_ADDR(0x00003facu): goto L_3FAC;
    case RC_ADDR(0x00003fb0u): goto L_3FB0;
    case RC_ADDR(0x00003fb4u): goto L_3FB4;
    case RC_ADDR(0x00003fb8u): goto L_3FB8;
    case RC_ADDR(0x00003fbcu): goto L_3FBC;
    case RC_ADDR(0x00003fc0u): goto L_3FC0;
    case RC_ADDR(0x00003fc4u): goto L_3FC4;
    case RC_ADDR(0x00003fc8u): goto L_3FC8;
    case RC_ADDR(0x00003fcau): goto L_3FCA;
    case RC_ADDR(0x00003fceu): goto L_3FCE;
    case RC_ADDR(0x00003fd0u): goto L_3FD0;
    case RC_ADDR(0x00003fd4u): goto L_3FD4;
    case RC_ADDR(0x00003fd8u): goto L_3FD8;
    case RC_ADDR(0x00003fdau): goto L_3FDA;
    case RC_ADDR(0x00003fe0u): goto L_3FE0;
    case RC_ADDR(0x00003fe4u): goto L_3FE4;
    case RC_ADDR(0x00003fe6u): goto L_3FE6;
    case RC_ADDR(0x00003fe8u): goto L_3FE8;
    case RC_ADDR(0x00003feau): goto L_3FEA;
    case RC_ADDR(0x00003feeu): goto L_3FEE;
    case RC_ADDR(0x00003ff0u): goto L_3FF0;
    case RC_ADDR(0x00003ff2u): goto L_3FF2;
    case RC_ADDR(0x00003ff4u): goto L_3FF4;
    case RC_ADDR(0x00003ff6u): goto L_3FF6;
    case RC_ADDR(0x00003ffau): goto L_3FFA;
    case RC_ADDR(0x00003ffeu): goto L_3FFE;
    case RC_ADDR(0x00004002u): goto L_4002;
    case RC_ADDR(0x00004006u): goto L_4006;
    case RC_ADDR(0x0000400au): goto L_400A;
    case RC_ADDR(0x0000400eu): goto L_400E;
    case RC_ADDR(0x00004012u): goto L_4012;
    case RC_ADDR(0x00004016u): goto L_4016;
    case RC_ADDR(0x0000401au): goto L_401A;
    case RC_ADDR(0x0000401eu): goto L_401E;
    case RC_ADDR(0x00004022u): goto L_4022;
    case RC_ADDR(0x00004026u): goto L_4026;
    case RC_ADDR(0x00004028u): goto L_4028;
    case RC_ADDR(0x0000402cu): goto L_402C;
    case RC_ADDR(0x00004032u): goto L_4032;
    case RC_ADDR(0x00004034u): goto L_4034;
    case RC_ADDR(0x00004036u): goto L_4036;
    case RC_ADDR(0x0000403au): goto L_403A;
    case RC_ADDR(0x0000403eu): goto L_403E;
    case RC_ADDR(0x00004040u): goto L_4040;
    case RC_ADDR(0x00004044u): goto L_4044;
    case RC_ADDR(0x00004048u): goto L_4048;
    case RC_ADDR(0x0000404au): goto L_404A;
    case RC_ADDR(0x0000404eu): goto L_404E;
    case RC_ADDR(0x00004050u): goto L_4050;
    case RC_ADDR(0x00004054u): goto L_4054;
    case RC_ADDR(0x00004058u): goto L_4058;
    case RC_ADDR(0x0000405cu): goto L_405C;
    case RC_ADDR(0x00004060u): goto L_4060;
    case RC_ADDR(0x00004062u): goto L_4062;
    case RC_ADDR(0x00004066u): goto L_4066;
    case RC_ADDR(0x00004068u): goto L_4068;
    case RC_ADDR(0x0000406cu): goto L_406C;
    case RC_ADDR(0x00004070u): goto L_4070;
    case RC_ADDR(0x00004074u): goto L_4074;
    case RC_ADDR(0x00004078u): goto L_4078;
    case RC_ADDR(0x0000407au): goto L_407A;
    case RC_ADDR(0x0000407eu): goto L_407E;
    case RC_ADDR(0x00004080u): goto L_4080;
    case RC_ADDR(0x00004084u): goto L_4084;
    case RC_ADDR(0x00004088u): goto L_4088;
    case RC_ADDR(0x0000408cu): goto L_408C;
    case RC_ADDR(0x0000408eu): goto L_408E;
    case RC_ADDR(0x00004092u): goto L_4092;
    case RC_ADDR(0x00004094u): goto L_4094;
    case RC_ADDR(0x0000409au): goto L_409A;
    case RC_ADDR(0x0000409cu): goto L_409C;
    case RC_ADDR(0x000040a0u): goto L_40A0;
    case RC_ADDR(0x000040a4u): goto L_40A4;
    case RC_ADDR(0x000040a8u): goto L_40A8;
    case RC_ADDR(0x000040aau): goto L_40AA;
    case RC_ADDR(0x000040aeu): goto L_40AE;
    case RC_ADDR(0x000040b4u): goto L_40B4;
    case RC_ADDR(0x000040b6u): goto L_40B6;
    case RC_ADDR(0x000040bcu): goto L_40BC;
    case RC_ADDR(0x000040beu): goto L_40BE;
    case RC_ADDR(0x000040c2u): goto L_40C2;
    case RC_ADDR(0x000040c6u): goto L_40C6;
    case RC_ADDR(0x000040cau): goto L_40CA;
    case RC_ADDR(0x000040ccu): goto L_40CC;
    case RC_ADDR(0x000040d0u): goto L_40D0;
    case RC_ADDR(0x000040d4u): goto L_40D4;
    case RC_ADDR(0x000040d6u): goto L_40D6;
    case RC_ADDR(0x000040dau): goto L_40DA;
    case RC_ADDR(0x000040dcu): goto L_40DC;
    case RC_ADDR(0x000040e0u): goto L_40E0;
    case RC_ADDR(0x000040e4u): goto L_40E4;
    case RC_ADDR(0x000040eau): goto L_40EA;
    case RC_ADDR(0x000040ecu): goto L_40EC;
    case RC_ADDR(0x000040f0u): goto L_40F0;
    case RC_ADDR(0x000040f4u): goto L_40F4;
    case RC_ADDR(0x000040fau): goto L_40FA;
    case RC_ADDR(0x000040fcu): goto L_40FC;
    case RC_ADDR(0x00004100u): goto L_4100;
    case RC_ADDR(0x00004102u): goto L_4102;
    case RC_ADDR(0x00004106u): goto L_4106;
    case RC_ADDR(0x0000410au): goto L_410A;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_3B1E:
    /* 00003b1e   4  link.w A5,#ffffff8c */
    c->pc = RC_ADDR(0x00003b1eu);
    rc_step(c, m);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x74u;

L_3B22:
    /* 00003b22   4  tst.w (ffff9312,A4) */
    c->pc = RC_ADDR(0x00003b22u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x6ceeu));
    rc_set_nzvc(c, t0, RC_W);

L_3B26:
    /* 00003b26   2  beq 00003b2e */
    c->pc = RC_ADDR(0x00003b26u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3B2E;

L_3B28:
    /* 00003b28   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00003b28u);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3B2A:
    /* 00003b2a   2  unlk A5 */
    c->pc = RC_ADDR(0x00003b2au);
    rc_step(c, m);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_3B2C:
    /* 00003b2c   2  rts */
    c->pc = RC_ADDR(0x00003b2cu);
    rc_step(c, m);
    rc_ret(c, m);
    return;

L_3B2E:
    /* 00003b2e   4  clr.w (ffffcde6,A4) */
    c->pc = RC_ADDR(0x00003b2eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x321au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3B32:
    /* 00003b32   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x00003b32u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3B38:
    /* 00003b38   4  tst.w (ffffefe6,A4) */
    c->pc = RC_ADDR(0x00003b38u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101au));
    rc_set_nzvc(c, t0, RC_W);

L_3B3C:
    /* 00003b3c   4  beq 00003bf2 */
    c->pc = RC_ADDR(0x00003b3cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3BF2;

L_3B40:
    /* 00003b40   4  clr.w (ffffefe8,A4) */
    c->pc = RC_ADDR(0x00003b40u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x1018u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3B44:
    /* 00003b44   4  tst.w (fffff1c6,A4) */
    c->pc = RC_ADDR(0x00003b44u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe3au));
    rc_set_nzvc(c, t0, RC_W);

L_3B48:
    /* 00003b48   2  bne 00003b62 */
    c->pc = RC_ADDR(0x00003b48u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_3B62;

L_3B4A:
    /* 00003b4a   4  tst.w (fffff00c,A4) */
    c->pc = RC_ADDR(0x00003b4au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xff4u));
    rc_set_nzvc(c, t0, RC_W);

L_3B4E:
    /* 00003b4e   2  beq 00003b62 */
    c->pc = RC_ADDR(0x00003b4eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3B62;

L_3B50:
    /* 00003b50   4  clr.w (fffff00c,A4) */
    c->pc = RC_ADDR(0x00003b50u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xff4u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3B54:
    /* 00003b54   4  pea (ffffffff).l */
    c->pc = RC_ADDR(0x00003b54u);
    rc_step(c, m);
    rc_push32(c, m, 0xffffffffu);

L_3B58:
    /* 00003b58   4  pea (ffffa05a,A4) */
    c->pc = RC_ADDR(0x00003b58u);
    rc_step(c, m);
    rc_push32(c, m, (c->a[4] - 0x5fa6u));

L_3B5C:
    /* 00003b5c   4  jsr (00009cf2) */
    c->pc = RC_ADDR(0x00003b5cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003b60u));
    rc_depth++;
    c->pc = RC_ADDR(0x00009cf2u);
    return;

L_3B60:
    /* 00003b60   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003b60u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_3B62:
    /* 00003b62   4  clr.w (ffffefe6,A4) */
    c->pc = RC_ADDR(0x00003b62u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x101au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3B66:
    /* 00003b66   4  pea (0000410e) */
    c->pc = RC_ADDR(0x00003b66u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000410eu));

L_3B6A:
    /* 00003b6a   4  jsr (ffff8254,A4) */
    c->pc = RC_ADDR(0x00003b6au);
    rc_step(c, m);
    /* vector 99 */
    rc_push32(c, m, RC_ADDR(0x00003b6eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021caau);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f186u);
    return;

L_3B6E:
    /* 00003b6e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003b6eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3B70:
    /* 00003b70   4  move.l D0,(ffffcdca,A4) */
    c->pc = RC_ADDR(0x00003b70u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x3236u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3B74:
    /* 00003b74   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00003b74u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3B76:
    /* 00003b76   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00003b76u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3B78:
    /* 00003b78   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00003b78u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3B7A:
    /* 00003b7a   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003b7au);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3B7C:
    /* 00003b7c   4  move.l (ffffcdca,A4),-(A7) */
    c->pc = RC_ADDR(0x00003b7cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3236u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3B80:
    /* 00003b80   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00003b80u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3B84:
    /* 00003b84   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00003b84u);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00003b88u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_3B88:
    /* 00003b88   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00003b88u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_3B8C:
    /* 00003b8c   4  pea (00004113) */
    c->pc = RC_ADDR(0x00003b8cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00004113u));

L_3B90:
    /* 00003b90   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x00003b90u);
    rc_step(c, m);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x00003b94u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c5cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_3B94:
    /* 00003b94   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003b94u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3B96:
    /* 00003b96   4  move.l D0,(ffffefe0,A4) */
    c->pc = RC_ADDR(0x00003b96u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x1020u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3B9A:
    /* 00003b9a   4  pea (00004118) */
    c->pc = RC_ADDR(0x00003b9au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00004118u));

L_3B9E:
    /* 00003b9e   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x00003b9eu);
    rc_step(c, m);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x00003ba2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c5cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_3BA2:
    /* 00003ba2   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003ba2u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3BA4:
    /* 00003ba4   4  move.l D0,(ffffcdce,A4) */
    c->pc = RC_ADDR(0x00003ba4u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x3232u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3BA8:
    /* 00003ba8   4  pea (0000411d) */
    c->pc = RC_ADDR(0x00003ba8u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000411du));

L_3BAC:
    /* 00003bac   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x00003bacu);
    rc_step(c, m);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x00003bb0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c5cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_3BB0:
    /* 00003bb0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003bb0u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3BB2:
    /* 00003bb2   4  move.l D0,(ffffcdd6,A4) */
    c->pc = RC_ADDR(0x00003bb2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x322au), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3BB6:
    /* 00003bb6   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003bb6u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3BB8:
    /* 00003bb8   4  move.l (ffffcdce,A4),-(A7) */
    c->pc = RC_ADDR(0x00003bb8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3232u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3BBC:
    /* 00003bbc   4  move.w #c,-(A7) */
    c->pc = RC_ADDR(0x00003bbcu);
    rc_step(c, m);
    t0 = 0x0000000cu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3BC0:
    /* 00003bc0   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00003bc0u);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00003bc4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_3BC4:
    /* 00003bc4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003bc4u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_3BC6:
    /* 00003bc6   4  pea (00004122) */
    c->pc = RC_ADDR(0x00003bc6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00004122u));

L_3BCA:
    /* 00003bca   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x00003bcau);
    rc_step(c, m);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x00003bceu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c5cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_3BCE:
    /* 00003bce   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003bceu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3BD0:
    /* 00003bd0   4  move.l D0,(ffffcdd2,A4) */
    c->pc = RC_ADDR(0x00003bd0u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x322eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3BD4:
    /* 00003bd4   4  pea (00004127) */
    c->pc = RC_ADDR(0x00003bd4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00004127u));

L_3BD8:
    /* 00003bd8   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x00003bd8u);
    rc_step(c, m);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x00003bdcu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c5cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_3BDC:
    /* 00003bdc   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003bdcu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3BDE:
    /* 00003bde   4  move.l D0,(ffffefd8,A4) */
    c->pc = RC_ADDR(0x00003bdeu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x1028u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3BE2:
    /* 00003be2   4  clr.l (ffffcdde,A4) */
    c->pc = RC_ADDR(0x00003be2u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0x3222u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3BE6:
    /* 00003be6   4  clr.l (ffffcdda,A4) */
    c->pc = RC_ADDR(0x00003be6u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0x3226u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3BEA:
    /* 00003bea   4  lea (0000412c),A0 */
    c->pc = RC_ADDR(0x00003beau);
    rc_step(c, m);
    c->a[0] = RC_ADDR(0x0000412cu);

L_3BEE:
    /* 00003bee   4  move.l A0,(ffffcde2,A4) */
    c->pc = RC_ADDR(0x00003beeu);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x321eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3BF2:
    /* 00003bf2   4  tst.w (fffff1c6,A4) */
    c->pc = RC_ADDR(0x00003bf2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe3au));
    rc_set_nzvc(c, t0, RC_W);

L_3BF6:
    /* 00003bf6   2  beq 00003c08 */
    c->pc = RC_ADDR(0x00003bf6u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3C08;

L_3BF8:
    /* 00003bf8   4  tst.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x00003bf8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_3BFC:
    /* 00003bfc   2  beq 00003c08 */
    c->pc = RC_ADDR(0x00003bfcu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3C08;

L_3BFE:
    /* 00003bfe   4  clr.l (ffffcdde,A4) */
    c->pc = RC_ADDR(0x00003bfeu);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0x3222u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3C02:
    /* 00003c02   4  clr.l (ffffcdda,A4) */
    c->pc = RC_ADDR(0x00003c02u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0x3226u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3C06:
    /* 00003c06   2  bra 00003c34 */
    c->pc = RC_ADDR(0x00003c06u);
    rc_step(c, m);
    goto L_3C34;

L_3C08:
    /* 00003c08   4  tst.w (ffffce3c,A4) */
    c->pc = RC_ADDR(0x00003c08u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c4u));
    rc_set_nzvc(c, t0, RC_W);

L_3C0C:
    /* 00003c0c   2  beq 00003c1a */
    c->pc = RC_ADDR(0x00003c0cu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3C1A;

L_3C0E:
    /* 00003c0e   4  move.w (ffffce3c,A4),D0 */
    c->pc = RC_ADDR(0x00003c0eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c4u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C12:
    /* 00003c12   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003c12u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_3C14:
    /* 00003c14   4  add.l D0,(ffffcdda,A4) */
    c->pc = RC_ADDR(0x00003c14u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x3226u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_3C18:
    /* 00003c18   2  bra 00003c1e */
    c->pc = RC_ADDR(0x00003c18u);
    rc_step(c, m);
    goto L_3C1E;

L_3C1A:
    /* 00003c1a   4  clr.l (ffffcdda,A4) */
    c->pc = RC_ADDR(0x00003c1au);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0x3226u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3C1E:
    /* 00003c1e   4  tst.w (ffffce3e,A4) */
    c->pc = RC_ADDR(0x00003c1eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c2u));
    rc_set_nzvc(c, t0, RC_W);

L_3C22:
    /* 00003c22   2  beq 00003c30 */
    c->pc = RC_ADDR(0x00003c22u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3C30;

L_3C24:
    /* 00003c24   4  move.w (ffffce3e,A4),D0 */
    c->pc = RC_ADDR(0x00003c24u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c2u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C28:
    /* 00003c28   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003c28u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_3C2A:
    /* 00003c2a   4  add.l D0,(ffffcdde,A4) */
    c->pc = RC_ADDR(0x00003c2au);
    rc_step(c, m);
    t3 = (c->a[4] - 0x3222u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_3C2E:
    /* 00003c2e   2  bra 00003c34 */
    c->pc = RC_ADDR(0x00003c2eu);
    rc_step(c, m);
    goto L_3C34;

L_3C30:
    /* 00003c30   4  clr.l (ffffcdde,A4) */
    c->pc = RC_ADDR(0x00003c30u);
    rc_step(c, m);
    rc_wr32(c, m, (c->a[4] - 0x3222u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3C34:
    /* 00003c34   4  move.l (ffffcdda,A4),D0 */
    c->pc = RC_ADDR(0x00003c34u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3226u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3C38:
    /* 00003c38   4  add.l D0,(ffffeffe,A4) */
    c->pc = RC_ADDR(0x00003c38u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x1002u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_3C3C:
    /* 00003c3c   4  move.l (ffffcdde,A4),D0 */
    c->pc = RC_ADDR(0x00003c3cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3222u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3C40:
    /* 00003c40   4  add.l D0,(fffff002,A4) */
    c->pc = RC_ADDR(0x00003c40u);
    rc_step(c, m);
    t3 = (c->a[4] - 0xffeu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_3C44:
    /* 00003c44   8  cmpi.l #136,(ffffeffe,A4) */
    c->pc = RC_ADDR(0x00003c44u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1002u));
    rc_cmp(c, RC_L, t0, 0x00000136u);

L_3C4C:
    /* 00003c4c   2  bgt 00003c58 */
    c->pc = RC_ADDR(0x00003c4cu);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_3C58;

L_3C4E:
    /* 00003c4e   8  cmpi.l #19,(ffffeffe,A4) */
    c->pc = RC_ADDR(0x00003c4eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1002u));
    rc_cmp(c, RC_L, t0, 0x00000019u);

L_3C56:
    /* 00003c56   2  bge 00003c7c */
    c->pc = RC_ADDR(0x00003c56u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_3C7C;

L_3C58:
    /* 00003c58   8  cmpi.l #136,(ffffeffe,A4) */
    c->pc = RC_ADDR(0x00003c58u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1002u));
    rc_cmp(c, RC_L, t0, 0x00000136u);

L_3C60:
    /* 00003c60   2  ble 00003c6c */
    c->pc = RC_ADDR(0x00003c60u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_3C6C;

L_3C62:
    /* 00003c62   8  move.l #136,(ffffeffe,A4) */
    c->pc = RC_ADDR(0x00003c62u);
    rc_step(c, m);
    t0 = 0x00000136u;
    rc_wr32(c, m, (c->a[4] - 0x1002u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3C6A:
    /* 00003c6a   2  bra 00003c74 */
    c->pc = RC_ADDR(0x00003c6au);
    rc_step(c, m);
    goto L_3C74;

L_3C6C:
    /* 00003c6c   8  move.l #19,(ffffeffe,A4) */
    c->pc = RC_ADDR(0x00003c6cu);
    rc_step(c, m);
    t0 = 0x00000019u;
    rc_wr32(c, m, (c->a[4] - 0x1002u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3C74:
    /* 00003c74   4  move.l (ffffcdda,A4),D0 */
    c->pc = RC_ADDR(0x00003c74u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3226u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3C78:
    /* 00003c78   4  sub.l D0,(ffffeff6,A4) */
    c->pc = RC_ADDR(0x00003c78u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x100au);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_3C7C:
    /* 00003c7c   4  move.w (ffffeff2,A4),D0 */
    c->pc = RC_ADDR(0x00003c7cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x100eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C80:
    /* 00003c80   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003c80u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_3C82:
    /* 00003c82   4  move.l (fffff002,A4),D1 */
    c->pc = RC_ADDR(0x00003c82u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xffeu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3C86:
    /* 00003c86   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x00003c86u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_3C88:
    /* 00003c88   2  bgt 00003c94 */
    c->pc = RC_ADDR(0x00003c88u);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_3C94;

L_3C8A:
    /* 00003c8a   8  cmpi.l #19,(fffff002,A4) */
    c->pc = RC_ADDR(0x00003c8au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xffeu));
    rc_cmp(c, RC_L, t0, 0x00000019u);

L_3C92:
    /* 00003c92   2  bge 00003cbe */
    c->pc = RC_ADDR(0x00003c92u);
    rc_step(c, m);
    if (rc_cond(c, 12)) goto L_3CBE;

L_3C94:
    /* 00003c94   4  move.w (ffffeff2,A4),D0 */
    c->pc = RC_ADDR(0x00003c94u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x100eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3C98:
    /* 00003c98   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003c98u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_3C9A:
    /* 00003c9a   4  move.l (fffff002,A4),D1 */
    c->pc = RC_ADDR(0x00003c9au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xffeu));
    rc_d_set(c, 1, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3C9E:
    /* 00003c9e   2  cmp.l D0,D1 */
    c->pc = RC_ADDR(0x00003c9eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    t1 = rc_d_get(c, 1, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_3CA0:
    /* 00003ca0   2  ble 00003cae */
    c->pc = RC_ADDR(0x00003ca0u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_3CAE;

L_3CA2:
    /* 00003ca2   4  move.w (ffffeff2,A4),D0 */
    c->pc = RC_ADDR(0x00003ca2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x100eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3CA6:
    /* 00003ca6   2  ext.l D0 */
    c->pc = RC_ADDR(0x00003ca6u);
    rc_step(c, m);
    rc_ext_l(c, 0);

L_3CA8:
    /* 00003ca8   4  move.l D0,(fffff002,A4) */
    c->pc = RC_ADDR(0x00003ca8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0xffeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3CAC:
    /* 00003cac   2  bra 00003cb6 */
    c->pc = RC_ADDR(0x00003cacu);
    rc_step(c, m);
    goto L_3CB6;

L_3CAE:
    /* 00003cae   8  move.l #19,(fffff002,A4) */
    c->pc = RC_ADDR(0x00003caeu);
    rc_step(c, m);
    t0 = 0x00000019u;
    rc_wr32(c, m, (c->a[4] - 0xffeu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3CB6:
    /* 00003cb6   4  move.l (ffffcdde,A4),D0 */
    c->pc = RC_ADDR(0x00003cb6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3222u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3CBA:
    /* 00003cba   4  sub.l D0,(ffffeffa,A4) */
    c->pc = RC_ADDR(0x00003cbau);
    rc_step(c, m);
    t3 = (c->a[4] - 0x1006u);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 - rc_d_get(c, 0, RC_L);
    rc_flags_sub(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_3CBE:
    /* 00003cbe   4  jsr (000035d2) */
    c->pc = RC_ADDR(0x00003cbeu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003cc2u));
    rc_depth++;
    c->pc = RC_ADDR(0x000035d2u);
    return;

L_3CC2:
    /* 00003cc2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003cc2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3CC6:
    /* 00003cc6   4  jsr (000042c6) */
    c->pc = RC_ADDR(0x00003cc6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003ccau));
    rc_depth++;
    c->pc = RC_ADDR(0x000042c6u);
    return;

L_3CCA:
    /* 00003cca   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003ccau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3CCC:
    /* 00003ccc   4  tst.w (fffff1c6,A4) */
    c->pc = RC_ADDR(0x00003cccu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe3au));
    rc_set_nzvc(c, t0, RC_W);

L_3CD0:
    /* 00003cd0   2  bne 00003d06 */
    c->pc = RC_ADDR(0x00003cd0u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_3D06;

L_3CD2:
    /* 00003cd2   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00003cd2u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_3CD4:
    /* 00003cd4   4  move.l (ffffeffa,A4),D0 */
    c->pc = RC_ADDR(0x00003cd4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1006u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3CD8:
    /* 00003cd8   6  add.l #a,D0 */
    c->pc = RC_ADDR(0x00003cd8u);
    rc_step(c, m);
    t0 = 0x0000000au;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_3CDE:
    /* 00003cde   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00003cdeu);
    rc_step(c, m);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3CE0:
    /* 00003ce0   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00003ce0u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_3CE2:
    /* 00003ce2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00003ce2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3CE4:
    /* 00003ce4   4  move.l (ffffeff6,A4),D0 */
    c->pc = RC_ADDR(0x00003ce4u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x100au));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3CE8:
    /* 00003ce8   6  add.l #20,D0 */
    c->pc = RC_ADDR(0x00003ce8u);
    rc_step(c, m);
    t0 = 0x00000020u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_3CEE:
    /* 00003cee   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00003ceeu);
    rc_step(c, m);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3CF0:
    /* 00003cf0   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00003cf0u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_3CF2:
    /* 00003cf2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00003cf2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3CF4:
    /* 00003cf4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003cf4u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3CF6:
    /* 00003cf6   4  move.l (ffffcdd6,A4),-(A7) */
    c->pc = RC_ADDR(0x00003cf6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x322au));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3CFA:
    /* 00003cfa   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00003cfau);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3CFE:
    /* 00003cfe   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00003cfeu);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00003d02u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_3D02:
    /* 00003d02   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00003d02u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_3D06:
    /* 00003d06   4  move.l (ffffeff6,A4),D0 */
    c->pc = RC_ADDR(0x00003d06u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x100au));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3D0A:
    /* 00003d0a   2  neg.l D0 */
    c->pc = RC_ADDR(0x00003d0au);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_3D0C:
    /* 00003d0c   4  add.l (ffffeffe,A4),D0 */
    c->pc = RC_ADDR(0x00003d0cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1002u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_3D10:
    /* 00003d10   6  sub.l #11,D0 */
    c->pc = RC_ADDR(0x00003d10u);
    rc_step(c, m);
    t0 = 0x00000011u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_3D16:
    /* 00003d16   4  move.w D0,(fffffffe,A5) */
    c->pc = RC_ADDR(0x00003d16u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x2u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D1A:
    /* 00003d1a   4  move.l (ffffeffa,A4),D0 */
    c->pc = RC_ADDR(0x00003d1au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1006u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3D1E:
    /* 00003d1e   2  neg.l D0 */
    c->pc = RC_ADDR(0x00003d1eu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = 0u - t1;
    rc_flags_sub(c, RC_L, 0u, t1, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_3D20:
    /* 00003d20   4  add.l (fffff002,A4),D0 */
    c->pc = RC_ADDR(0x00003d20u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xffeu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_3D24:
    /* 00003d24   6  sub.l #12,D0 */
    c->pc = RC_ADDR(0x00003d24u);
    rc_step(c, m);
    t0 = 0x00000012u;
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_3D2A:
    /* 00003d2a   4  move.w D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00003d2au);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D2E:
    /* 00003d2e   4  clr.w (fffffffa,A5) */
    c->pc = RC_ADDR(0x00003d2eu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[5] - 0x6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3D32:
    /* 00003d32   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00003d32u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D36:
    /* 00003d36   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00003d36u);
    rc_step(c, m);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_3D3A:
    /* 00003d3a   4  lea (ffff857c,A4),A0 */
    c->pc = RC_ADDR(0x00003d3au);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7a84u);

L_3D3E:
    /* 00003d3e   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00003d3eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D42:
    /* 00003d42   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003d42u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_3D46:
    /* 00003d46   4  bcs 00003dda */
    c->pc = RC_ADDR(0x00003d46u);
    rc_step(c, m);
    if (rc_cond(c, 5)) goto L_3DDA;

L_3D4A:
    /* 00003d4a   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00003d4au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D4E:
    /* 00003d4e   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00003d4eu);
    rc_step(c, m);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_3D52:
    /* 00003d52   4  lea (ffff8580,A4),A0 */
    c->pc = RC_ADDR(0x00003d52u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7a80u);

L_3D56:
    /* 00003d56   4  move.w (fffffffe,A5),D1 */
    c->pc = RC_ADDR(0x00003d56u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D5A:
    /* 00003d5a   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003d5au);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_3D5E:
    /* 00003d5e   2  bhi 00003dda */
    c->pc = RC_ADDR(0x00003d5eu);
    rc_step(c, m);
    if (rc_cond(c, 2)) goto L_3DDA;

L_3D60:
    /* 00003d60   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00003d60u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D64:
    /* 00003d64   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00003d64u);
    rc_step(c, m);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_3D68:
    /* 00003d68   4  lea (ffff857e,A4),A0 */
    c->pc = RC_ADDR(0x00003d68u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7a82u);

L_3D6C:
    /* 00003d6c   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00003d6cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D70:
    /* 00003d70   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003d70u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_3D74:
    /* 00003d74   2  bcs 00003dda */
    c->pc = RC_ADDR(0x00003d74u);
    rc_step(c, m);
    if (rc_cond(c, 5)) goto L_3DDA;

L_3D76:
    /* 00003d76   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00003d76u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D7A:
    /* 00003d7a   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00003d7au);
    rc_step(c, m);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_3D7E:
    /* 00003d7e   4  lea (ffff8582,A4),A0 */
    c->pc = RC_ADDR(0x00003d7eu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7a7eu);

L_3D82:
    /* 00003d82   4  move.w (fffffffc,A5),D1 */
    c->pc = RC_ADDR(0x00003d82u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x4u));
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D86:
    /* 00003d86   4  cmp.w (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003d86u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd16(c, m, (c->a[0] + 0x0u + t4));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_3D8A:
    /* 00003d8a   2  bhi 00003dda */
    c->pc = RC_ADDR(0x00003d8au);
    rc_step(c, m);
    if (rc_cond(c, 2)) goto L_3DDA;

L_3D8C:
    /* 00003d8c   4  move.w (fffffffa,A5),D0 */
    c->pc = RC_ADDR(0x00003d8cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3D90:
    /* 00003d90   4  muls.w #12,D0 */
    c->pc = RC_ADDR(0x00003d90u);
    rc_step(c, m);
    t0 = 0x00000012u;
    rc_muls(c, 0, t0);

L_3D94:
    /* 00003d94   4  lea (ffff8585,A4),A0 */
    c->pc = RC_ADDR(0x00003d94u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7a7bu);

L_3D98:
    /* 00003d98   4  movea.l (ffffcde2,A4),A1 */
    c->pc = RC_ADDR(0x00003d98u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x321eu));
    c->a[1] = t0;

L_3D9C:
    /* 00003d9c   6  move.b (0,A0,D0.w),(3,A1) */
    c->pc = RC_ADDR(0x00003d9cu);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, (c->a[1] + 0x3u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_3DA2:
    /* 00003da2   4  move.l (ffffcde2,A4),-(A7) */
    c->pc = RC_ADDR(0x00003da2u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x321eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3DA6:
    /* 00003da6   4  jsr (ffff8206,A4) */
    c->pc = RC_ADDR(0x00003da6u);
    rc_step(c, m);
    /* vector 86 */
    rc_push32(c, m, RC_ADDR(0x00003daau));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c5cu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d4fau);
    return;

L_3DAA:
    /* 00003daa   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003daau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3DAC:
    /* 00003dac   4  move.l D0,(ffffefdc,A4) */
    c->pc = RC_ADDR(0x00003dacu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[4] - 0x1024u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3DB0:
    /* 00003db0   8  cmpi.l #3f,(fffff002,A4) */
    c->pc = RC_ADDR(0x00003db0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xffeu));
    rc_cmp(c, RC_L, t0, 0x0000003fu);

L_3DB8:
    /* 00003db8   2  bgt 00003dc4 */
    c->pc = RC_ADDR(0x00003db8u);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_3DC4;

L_3DBA:
    /* 00003dba   8  cmpi.l #de,(ffffeffe,A4) */
    c->pc = RC_ADDR(0x00003dbau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1002u));
    rc_cmp(c, RC_L, t0, 0x000000deu);

L_3DC2:
    /* 00003dc2   2  ble 00003dcc */
    c->pc = RC_ADDR(0x00003dc2u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_3DCC;

L_3DC4:
    /* 00003dc4   6  move.w #17,(ffffefea,A4) */
    c->pc = RC_ADDR(0x00003dc4u);
    rc_step(c, m);
    t0 = 0x00000017u;
    rc_wr16(c, m, (c->a[4] - 0x1016u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3DCA:
    /* 00003dca   2  bra 00003dd2 */
    c->pc = RC_ADDR(0x00003dcau);
    rc_step(c, m);
    goto L_3DD2;

L_3DCC:
    /* 00003dcc   6  move.w (ffffeff4,A4),(ffffefea,A4) */
    c->pc = RC_ADDR(0x00003dccu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x100cu));
    rc_wr16(c, m, (c->a[4] - 0x1016u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3DD2:
    /* 00003dd2   6  move.w #1,(ffffcde6,A4) */
    c->pc = RC_ADDR(0x00003dd2u);
    rc_step(c, m);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x321au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3DD8:
    /* 00003dd8   2  bra 00003de8 */
    c->pc = RC_ADDR(0x00003dd8u);
    rc_step(c, m);
    goto L_3DE8;

L_3DDA:
    /* 00003dda   4  addq.w #1,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00003ddau);
    rc_step(c, m);
    t3 = (c->a[5] - 0x6u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_3DDE:
    /* 00003dde   6  cmpi.w #27,(fffffffa,A5) */
    c->pc = RC_ADDR(0x00003ddeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_cmp(c, RC_W, t0, 0x00000027u);

L_3DE4:
    /* 00003de4   4  blt 00003d32 */
    c->pc = RC_ADDR(0x00003de4u);
    rc_step(c, m);
    if (rc_cond(c, 13)) { rc_tick(); goto L_3D32; }

L_3DE8:
    /* 00003de8   6  move.w (fffffffa,A5),(ffffefec,A4) */
    c->pc = RC_ADDR(0x00003de8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x6u));
    rc_wr16(c, m, (c->a[4] - 0x1014u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3DEE:
    /* 00003dee   4  jsr (00003912) */
    c->pc = RC_ADDR(0x00003deeu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003df2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003912u);
    return;

L_3DF2:
    /* 00003df2   4  tst.w (ffffcde6,A4) */
    c->pc = RC_ADDR(0x00003df2u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x321au));
    rc_set_nzvc(c, t0, RC_W);

L_3DF6:
    /* 00003df6   4  beq 00003f92 */
    c->pc = RC_ADDR(0x00003df6u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3F92;

L_3DFA:
    /* 00003dfa   4  tst.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x00003dfau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_3DFE:
    /* 00003dfe   4  beq 00003f92 */
    c->pc = RC_ADDR(0x00003dfeu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3F92;

L_3E02:
    /* 00003e02   4  tst.w (fffff1c6,A4) */
    c->pc = RC_ADDR(0x00003e02u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe3au));
    rc_set_nzvc(c, t0, RC_W);

L_3E06:
    /* 00003e06   4  bne 00003f92 */
    c->pc = RC_ADDR(0x00003e06u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_3F92;

L_3E0A:
    /* 00003e0a   4  jsr (0000334a) */
    c->pc = RC_ADDR(0x00003e0au);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003e0eu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000334au);
    return;

L_3E0E:
    /* 00003e0e   4  lea (ffffff94,A5),A0 */
    c->pc = RC_ADDR(0x00003e0eu);
    rc_step(c, m);
    c->a[0] = (c->a[5] - 0x6cu);

L_3E12:
    /* 00003e12   4  move.l A0,(ffffff8c,A5) */
    c->pc = RC_ADDR(0x00003e12u);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x74u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3E16:
    /* 00003e16   4  movea.l (ffffff8c,A5),A0 */
    c->pc = RC_ADDR(0x00003e16u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x74u));
    c->a[0] = t0;

L_3E1A:
    /* 00003e1a   2  clr.b (A0) */
    c->pc = RC_ADDR(0x00003e1au);
    rc_step(c, m);
    rc_wr8(c, m, c->a[0], 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_3E1C:
    /* 00003e1c   6  cmpi.w #5,(ffffefec,A4) */
    c->pc = RC_ADDR(0x00003e1cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1014u));
    rc_cmp(c, RC_W, t0, 0x00000005u);

L_3E22:
    /* 00003e22   2  blt 00003e2c */
    c->pc = RC_ADDR(0x00003e22u);
    rc_step(c, m);
    if (rc_cond(c, 13)) goto L_3E2C;

L_3E24:
    /* 00003e24   6  cmpi.w #f,(ffffefec,A4) */
    c->pc = RC_ADDR(0x00003e24u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1014u));
    rc_cmp(c, RC_W, t0, 0x0000000fu);

L_3E2A:
    /* 00003e2a   2  bne 00003e3a */
    c->pc = RC_ADDR(0x00003e2au);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_3E3A;

L_3E2C:
    /* 00003e2c   4  move.l (ffff8536,A4),-(A7) */
    c->pc = RC_ADDR(0x00003e2cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7acau));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3E30:
    /* 00003e30   4  move.l (ffffff8c,A5),-(A7) */
    c->pc = RC_ADDR(0x00003e30u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x74u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3E34:
    /* 00003e34   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x00003e34u);
    rc_step(c, m);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x00003e38u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cfeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020810u);
    return;

L_3E38:
    /* 00003e38   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003e38u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_3E3A:
    /* 00003e3a   6  cmpi.w #1d,(ffffefec,A4) */
    c->pc = RC_ADDR(0x00003e3au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1014u));
    rc_cmp(c, RC_W, t0, 0x0000001du);

L_3E40:
    /* 00003e40   2  bne 00003e50 */
    c->pc = RC_ADDR(0x00003e40u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_3E50;

L_3E42:
    /* 00003e42   4  move.l (ffff853a,A4),-(A7) */
    c->pc = RC_ADDR(0x00003e42u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x7ac6u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3E46:
    /* 00003e46   4  move.l (ffffff8c,A5),-(A7) */
    c->pc = RC_ADDR(0x00003e46u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x74u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3E4A:
    /* 00003e4a   4  jsr (ffff82a8,A4) */
    c->pc = RC_ADDR(0x00003e4au);
    rc_step(c, m);
    /* vector 113 */
    rc_push32(c, m, RC_ADDR(0x00003e4eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cfeu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020810u);
    return;

L_3E4E:
    /* 00003e4e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003e4eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_3E50:
    /* 00003e50   4  movea.l (ffffff8c,A5),A0 */
    c->pc = RC_ADDR(0x00003e50u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x74u));
    c->a[0] = t0;

L_3E54:
    /* 00003e54   2  tst.b (A0) */
    c->pc = RC_ADDR(0x00003e54u);
    rc_step(c, m);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_set_nzvc(c, t0, RC_B);

L_3E56:
    /* 00003e56   2  beq 00003e6c */
    c->pc = RC_ADDR(0x00003e56u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3E6C;

L_3E58:
    /* 00003e58   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003e58u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3E5C:
    /* 00003e5c   4  move.l (ffffff8c,A5),-(A7) */
    c->pc = RC_ADDR(0x00003e5cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x74u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3E60:
    /* 00003e60   4  jsr (00004328) */
    c->pc = RC_ADDR(0x00003e60u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003e64u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004328u);
    return;

L_3E64:
    /* 00003e64   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003e64u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_3E66:
    /* 00003e66   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00003e66u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3E68:
    /* 00003e68   4  bra 00003b2a */
    c->pc = RC_ADDR(0x00003e68u);
    rc_step(c, m);
    rc_tick();
    goto L_3B2A;

L_3E6C:
    /* 00003e6c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003e6cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3E70:
    /* 00003e70   4  move.w (ffffefec,A4),D0 */
    c->pc = RC_ADDR(0x00003e70u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1014u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E74:
    /* 00003e74   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00003e74u);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3E76:
    /* 00003e76   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003e76u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E78:
    /* 00003e78   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x00003e78u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E7C:
    /* 00003e7c   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00003e7cu);
    rc_step(c, m);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_3E7E:
    /* 00003e7e   2  move.w D0,-(A7) */
    c->pc = RC_ADDR(0x00003e7eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E80:
    /* 00003e80   4  jsr (ffff81e2,A4) */
    c->pc = RC_ADDR(0x00003e80u);
    rc_step(c, m);
    /* vector 80 */
    rc_push32(c, m, RC_ADDR(0x00003e84u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c38u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001cc2eu);
    return;

L_3E84:
    /* 00003e84   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003e84u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_3E86:
    /* 00003e86   4  move.w D0,(ffffcde8,A4) */
    c->pc = RC_ADDR(0x00003e86u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x3218u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E8A:
    /* 00003e8a   6  move.w (ffffefec,A4),(ffffefe4,A4) */
    c->pc = RC_ADDR(0x00003e8au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1014u));
    rc_wr16(c, m, (c->a[4] - 0x101cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E90:
    /* 00003e90   4  move.w (ffffefee,A4),D0 */
    c->pc = RC_ADDR(0x00003e90u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1012u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3E94:
    /* 00003e94   4  add.w D0,(ffff83ce,A4) */
    c->pc = RC_ADDR(0x00003e94u);
    rc_step(c, m);
    t3 = (c->a[4] - 0x7c32u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_3E98:
    /* 00003e98   4  jsr (00005406) */
    c->pc = RC_ADDR(0x00003e98u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003e9cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00005406u);
    return;

L_3E9C:
    /* 00003e9c   4  tst.w (ffffcde8,A4) */
    c->pc = RC_ADDR(0x00003e9cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x3218u));
    rc_set_nzvc(c, t0, RC_W);

L_3EA0:
    /* 00003ea0   2  beq 00003ea8 */
    c->pc = RC_ADDR(0x00003ea0u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3EA8;

L_3EA2:
    /* 00003ea2   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00003ea2u);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3EA4:
    /* 00003ea4   4  bra 00003b2a */
    c->pc = RC_ADDR(0x00003ea4u);
    rc_step(c, m);
    rc_tick();
    goto L_3B2A;

L_3EA8:
    /* 00003ea8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003ea8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EAC:
    /* 00003eac   4  jsr (00003706) */
    c->pc = RC_ADDR(0x00003eacu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003eb0u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003706u);
    return;

L_3EB0:
    /* 00003eb0   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003eb0u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3EB2:
    /* 00003eb2   4  jsr (ffff81ee,A4) */
    c->pc = RC_ADDR(0x00003eb2u);
    rc_step(c, m);
    /* vector 82 */
    rc_push32(c, m, RC_ADDR(0x00003eb6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021c44u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001d1dau);
    return;

L_3EB6:
    /* 00003eb6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00003eb6u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3EB8:
    /* 00003eb8   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x00003eb8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3EBC:
    /* 00003ebc   4  lea (fffff19e,A4),A0 */
    c->pc = RC_ADDR(0x00003ebcu);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0xe62u);

L_3EC0:
    /* 00003ec0   6  cmpi.b #1,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00003ec0u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x00000001u);

L_3EC6:
    /* 00003ec6   2  bne 00003efc */
    c->pc = RC_ADDR(0x00003ec6u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_3EFC;

L_3EC8:
    /* 00003ec8   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x00003ec8u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3ECC:
    /* 00003ecc   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00003eccu);
    rc_step(c, m);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3ED0:
    /* 00003ed0   4  lea (ffff8578,A4),A0 */
    c->pc = RC_ADDR(0x00003ed0u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7a88u);

L_3ED4:
    /* 00003ed4   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00003ed4u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3ED8:
    /* 00003ed8   4  pea (00004131) */
    c->pc = RC_ADDR(0x00003ed8u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00004131u));

L_3EDC:
    /* 00003edc   4  move.l (ffffff8c,A5),-(A7) */
    c->pc = RC_ADDR(0x00003edcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x74u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EE0:
    /* 00003ee0   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x00003ee0u);
    rc_step(c, m);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00003ee4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d28u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_3EE4:
    /* 00003ee4   4  lea (c,A7),A7 */
    c->pc = RC_ADDR(0x00003ee4u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xcu);

L_3EE8:
    /* 00003ee8   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003ee8u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EEC:
    /* 00003eec   4  move.l (ffffff8c,A5),-(A7) */
    c->pc = RC_ADDR(0x00003eecu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x74u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3EF0:
    /* 00003ef0   4  jsr (00004328) */
    c->pc = RC_ADDR(0x00003ef0u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003ef4u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004328u);
    return;

L_3EF4:
    /* 00003ef4   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003ef4u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_3EF6:
    /* 00003ef6   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00003ef6u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3EF8:
    /* 00003ef8   4  bra 00003b2a */
    c->pc = RC_ADDR(0x00003ef8u);
    rc_step(c, m);
    rc_tick();
    goto L_3B2A;

L_3EFC:
    /* 00003efc   4  move.w (ffffefe4,A4),-(A7) */
    c->pc = RC_ADDR(0x00003efcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3F00:
    /* 00003f00   4  jsr (0000561c) */
    c->pc = RC_ADDR(0x00003f00u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003f04u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000561cu);
    return;

L_3F04:
    /* 00003f04   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00003f04u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_3F06:
    /* 00003f06   2  tst.w D0 */
    c->pc = RC_ADDR(0x00003f06u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_3F08:
    /* 00003f08   4  beq 00003f8c */
    c->pc = RC_ADDR(0x00003f08u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3F8C;

L_3F0C:
    /* 00003f0c   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x00003f0cu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3F10:
    /* 00003f10   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00003f10u);
    rc_step(c, m);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3F14:
    /* 00003f14   4  lea (ffff8586,A4),A0 */
    c->pc = RC_ADDR(0x00003f14u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7a7au);

L_3F18:
    /* 00003f18   2  moveq #0,D1 */
    c->pc = RC_ADDR(0x00003f18u);
    rc_step(c, m);
    c->d[1] = 0x00000000u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3F1A:
    /* 00003f1a   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00003f1au);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_3F1E:
    /* 00003f1e   4  move.w D1,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00003f1eu);
    rc_step(c, m);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3F22:
    /* 00003f22   6  cmpi.w #17,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00003f22u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_W, t0, 0x00000017u);

L_3F28:
    /* 00003f28   2  ble 00003f30 */
    c->pc = RC_ADDR(0x00003f28u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_3F30;

L_3F2A:
    /* 00003f2a   6  move.w #c,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00003f2au);
    rc_step(c, m);
    t0 = 0x0000000cu;
    rc_wr16(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_3F30:
    /* 00003f30   6  cmpi.w #c,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00003f30u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    rc_cmp(c, RC_W, t0, 0x0000000cu);

L_3F36:
    /* 00003f36   2  ble 00003f48 */
    c->pc = RC_ADDR(0x00003f36u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_3F48;

L_3F38:
    /* 00003f38   4  lea (0000414f),A0 */
    c->pc = RC_ADDR(0x00003f38u);
    rc_step(c, m);
    c->a[0] = RC_ADDR(0x0000414fu);

L_3F3C:
    /* 00003f3c   4  move.l A0,(ffffff90,A5) */
    c->pc = RC_ADDR(0x00003f3cu);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x70u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F40:
    /* 00003f40   6  subi.w #c,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00003f40u);
    rc_step(c, m);
    t3 = (c->a[5] - 0x8u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 - 0x0000000cu;
    rc_flags_sub(c, RC_W, t1, 0x0000000cu, t2, 0);
    rc_wr16(c, m, t3, t2);

L_3F46:
    /* 00003f46   2  bra 00003f50 */
    c->pc = RC_ADDR(0x00003f46u);
    rc_step(c, m);
    goto L_3F50;

L_3F48:
    /* 00003f48   4  lea (00004154),A0 */
    c->pc = RC_ADDR(0x00003f48u);
    rc_step(c, m);
    c->a[0] = RC_ADDR(0x00004154u);

L_3F4C:
    /* 00003f4c   4  move.l A0,(ffffff90,A5) */
    c->pc = RC_ADDR(0x00003f4cu);
    rc_step(c, m);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x70u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F50:
    /* 00003f50   4  move.l (ffffff90,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f50u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x70u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F54:
    /* 00003f54   4  move.w (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f54u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3F58:
    /* 00003f58   4  move.w (ffffefe4,A4),D0 */
    c->pc = RC_ADDR(0x00003f58u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x101cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_3F5C:
    /* 00003f5c   4  mulu.w #12,D0 */
    c->pc = RC_ADDR(0x00003f5cu);
    rc_step(c, m);
    t0 = 0x00000012u;
    rc_mulu(c, 0, t0);

L_3F60:
    /* 00003f60   4  lea (ffff8578,A4),A0 */
    c->pc = RC_ADDR(0x00003f60u);
    rc_step(c, m);
    c->a[0] = (c->a[4] - 0x7a88u);

L_3F64:
    /* 00003f64   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00003f64u);
    rc_step(c, m);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F68:
    /* 00003f68   4  pea (00004159) */
    c->pc = RC_ADDR(0x00003f68u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00004159u));

L_3F6C:
    /* 00003f6c   4  move.l (ffffff8c,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f6cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x74u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F70:
    /* 00003f70   4  jsr (ffff82d2,A4) */
    c->pc = RC_ADDR(0x00003f70u);
    rc_step(c, m);
    /* vector 120 */
    rc_push32(c, m, RC_ADDR(0x00003f74u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021d28u);
    rc_step(c, m);
    c->pc = RC_ADDR(0x00020db6u);
    return;

L_3F74:
    /* 00003f74   4  lea (12,A7),A7 */
    c->pc = RC_ADDR(0x00003f74u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x12u);

L_3F78:
    /* 00003f78   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f78u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F7C:
    /* 00003f7c   4  move.l (ffffff8c,A5),-(A7) */
    c->pc = RC_ADDR(0x00003f7cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] - 0x74u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3F80:
    /* 00003f80   4  jsr (00004328) */
    c->pc = RC_ADDR(0x00003f80u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003f84u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004328u);
    return;

L_3F84:
    /* 00003f84   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00003f84u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_3F86:
    /* 00003f86   2  moveq #0,D0 */
    c->pc = RC_ADDR(0x00003f86u);
    rc_step(c, m);
    c->d[0] = 0x00000000u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3F88:
    /* 00003f88   4  bra 00003b2a */
    c->pc = RC_ADDR(0x00003f88u);
    rc_step(c, m);
    rc_tick();
    goto L_3B2A;

L_3F8C:
    /* 00003f8c   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00003f8cu);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_3F8E:
    /* 00003f8e   4  bra 00003b2a */
    c->pc = RC_ADDR(0x00003f8eu);
    rc_step(c, m);
    rc_tick();
    goto L_3B2A;

L_3F92:
    /* 00003f92   4  tst.w (fffff1c6,A4) */
    c->pc = RC_ADDR(0x00003f92u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe3au));
    rc_set_nzvc(c, t0, RC_W);

L_3F96:
    /* 00003f96   2  beq 00003fca */
    c->pc = RC_ADDR(0x00003f96u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3FCA;

L_3F98:
    /* 00003f98   6  pea (00020000).l */
    c->pc = RC_ADDR(0x00003f98u);
    rc_step(c, m);
    rc_push32(c, m, 0x00020000u);

L_3F9E:
    /* 00003f9e   6  pea (00be0000).l */
    c->pc = RC_ADDR(0x00003f9eu);
    rc_step(c, m);
    rc_push32(c, m, 0x00be0000u);

L_3FA4:
    /* 00003fa4   6  pea (00a00000).l */
    c->pc = RC_ADDR(0x00003fa4u);
    rc_step(c, m);
    rc_push32(c, m, 0x00a00000u);

L_3FAA:
    /* 00003faa   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003faau);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3FAC:
    /* 00003fac   4  move.l (ffffcdd2,A4),-(A7) */
    c->pc = RC_ADDR(0x00003facu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x322eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3FB0:
    /* 00003fb0   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00003fb0u);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3FB4:
    /* 00003fb4   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00003fb4u);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00003fb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_3FB8:
    /* 00003fb8   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00003fb8u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_3FBC:
    /* 00003fbc   4  move.w (ffffcde6,A4),-(A7) */
    c->pc = RC_ADDR(0x00003fbcu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x321au));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3FC0:
    /* 00003fc0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003fc0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3FC4:
    /* 00003fc4   4  jsr (00004782) */
    c->pc = RC_ADDR(0x00003fc4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003fc8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004782u);
    return;

L_3FC8:
    /* 00003fc8   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00003fc8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_3FCA:
    /* 00003fca   4  tst.w (ffffcde6,A4) */
    c->pc = RC_ADDR(0x00003fcau);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x321au));
    rc_set_nzvc(c, t0, RC_W);

L_3FCE:
    /* 00003fce   2  beq 00003fda */
    c->pc = RC_ADDR(0x00003fceu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_3FDA;

L_3FD0:
    /* 00003fd0   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00003fd0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3FD4:
    /* 00003fd4   4  jsr (00003706) */
    c->pc = RC_ADDR(0x00003fd4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00003fd8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00003706u);
    return;

L_3FD8:
    /* 00003fd8   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00003fd8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_3FDA:
    /* 00003fda   6  pea (00010000).l */
    c->pc = RC_ADDR(0x00003fdau);
    rc_step(c, m);
    rc_push32(c, m, 0x00010000u);

L_3FE0:
    /* 00003fe0   4  move.l (fffff002,A4),D0 */
    c->pc = RC_ADDR(0x00003fe0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xffeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3FE4:
    /* 00003fe4   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00003fe4u);
    rc_step(c, m);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3FE6:
    /* 00003fe6   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00003fe6u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_3FE8:
    /* 00003fe8   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00003fe8u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3FEA:
    /* 00003fea   4  move.l (ffffeffe,A4),D0 */
    c->pc = RC_ADDR(0x00003feau);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1002u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_3FEE:
    /* 00003fee   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00003feeu);
    rc_step(c, m);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_3FF0:
    /* 00003ff0   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00003ff0u);
    rc_step(c, m);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_3FF2:
    /* 00003ff2   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00003ff2u);
    rc_step(c, m);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3FF4:
    /* 00003ff4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00003ff4u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_3FF6:
    /* 00003ff6   4  move.l (ffffcdce,A4),-(A7) */
    c->pc = RC_ADDR(0x00003ff6u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x3232u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_3FFA:
    /* 00003ffa   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00003ffau);
    rc_step(c, m);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_3FFE:
    /* 00003ffe   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x00003ffeu);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x00004002u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_4002:
    /* 00004002   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00004002u);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0x14u);

L_4006:
    /* 00004006   4  move.w (14,A5),-(A7) */
    c->pc = RC_ADDR(0x00004006u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[5] + 0x14u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_400A:
    /* 0000400a   4  move.l (10,A5),-(A7) */
    c->pc = RC_ADDR(0x0000400au);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x10u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_400E:
    /* 0000400e   4  move.l (c,A5),-(A7) */
    c->pc = RC_ADDR(0x0000400eu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4012:
    /* 00004012   4  movea.l (8,A5),A0 */
    c->pc = RC_ADDR(0x00004012u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[0] = t0;

L_4016:
    /* 00004016   4  move.l (2c,A0),-(A7) */
    c->pc = RC_ADDR(0x00004016u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[0] + 0x2cu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_401A:
    /* 0000401a   4  jsr (ffff8278,A4) */
    c->pc = RC_ADDR(0x0000401au);
    rc_step(c, m);
    /* vector 105 */
    rc_push32(c, m, RC_ADDR(0x0000401eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cceu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001fa02u);
    return;

L_401E:
    /* 0000401e   4  lea (e,A7),A7 */
    c->pc = RC_ADDR(0x0000401eu);
    rc_step(c, m);
    c->a[7] = (c->a[7] + 0xeu);

L_4022:
    /* 00004022   4  tst.w (fffff1c6,A4) */
    c->pc = RC_ADDR(0x00004022u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe3au));
    rc_set_nzvc(c, t0, RC_W);

L_4026:
    /* 00004026   2  beq 0000402c */
    c->pc = RC_ADDR(0x00004026u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_402C;

L_4028:
    /* 00004028   4  jsr (00004642) */
    c->pc = RC_ADDR(0x00004028u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000402cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00004642u);
    return;

L_402C:
    /* 0000402c   6  move.l (8,A5),(fffffebe,A4) */
    c->pc = RC_ADDR(0x0000402cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] - 0x142u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_4032:
    /* 00004032   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00004032u);
    rc_step(c, m);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4034:
    /* 00004034   2  clr.l -(A7) */
    c->pc = RC_ADDR(0x00004034u);
    rc_step(c, m);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_4036:
    /* 00004036   4  move.w #3,-(A7) */
    c->pc = RC_ADDR(0x00004036u);
    rc_step(c, m);
    t0 = 0x00000003u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_403A:
    /* 0000403a   4  jsr (ffff8266,A4) */
    c->pc = RC_ADDR(0x0000403au);
    rc_step(c, m);
    /* vector 102 */
    rc_push32(c, m, RC_ADDR(0x0000403eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00021cbcu);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001f2aeu);
    return;

L_403E:
    /* 0000403e   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x0000403eu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4040:
    /* 00004040   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004040u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4044:
    /* 00004044   4  jsr (ffff8134,A4) */
    c->pc = RC_ADDR(0x00004044u);
    rc_step(c, m);
    /* vector 51 */
    rc_push32(c, m, RC_ADDR(0x00004048u));
    rc_depth++;
    c->pc = RC_ADDR(0x00021b8au);
    rc_step(c, m);
    c->pc = RC_ADDR(0x0001061cu);
    return;

L_4048:
    /* 00004048   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00004048u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_404A:
    /* 0000404a   4  tst.w (fffff00a,A4) */
    c->pc = RC_ADDR(0x0000404au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xff6u));
    rc_set_nzvc(c, t0, RC_W);

L_404E:
    /* 0000404e   2  beq 00004062 */
    c->pc = RC_ADDR(0x0000404eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_4062;

L_4050:
    /* 00004050   4  clr.w (fffff00a,A4) */
    c->pc = RC_ADDR(0x00004050u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0xff6u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4054:
    /* 00004054   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004054u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4058:
    /* 00004058   4  pea (0000418e) */
    c->pc = RC_ADDR(0x00004058u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000418eu));

L_405C:
    /* 0000405c   4  jsr (00004328) */
    c->pc = RC_ADDR(0x0000405cu);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00004060u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004328u);
    return;

L_4060:
    /* 00004060   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00004060u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_4062:
    /* 00004062   4  tst.w (ffff853e,A4) */
    c->pc = RC_ADDR(0x00004062u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7ac2u));
    rc_set_nzvc(c, t0, RC_W);

L_4066:
    /* 00004066   2  beq 0000407a */
    c->pc = RC_ADDR(0x00004066u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_407A;

L_4068:
    /* 00004068   4  clr.w (ffff853e,A4) */
    c->pc = RC_ADDR(0x00004068u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x7ac2u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_406C:
    /* 0000406c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000406cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4070:
    /* 00004070   4  pea (0000420c) */
    c->pc = RC_ADDR(0x00004070u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000420cu));

L_4074:
    /* 00004074   4  jsr (00004328) */
    c->pc = RC_ADDR(0x00004074u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x00004078u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004328u);
    return;

L_4078:
    /* 00004078   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00004078u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_407A:
    /* 0000407a   4  tst.w (ffff8402,A4) */
    c->pc = RC_ADDR(0x0000407au);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7bfeu));
    rc_set_nzvc(c, t0, RC_W);

L_407E:
    /* 0000407e   2  beq 0000408e */
    c->pc = RC_ADDR(0x0000407eu);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_408E;

L_4080:
    /* 00004080   4  clr.w (ffff8402,A4) */
    c->pc = RC_ADDR(0x00004080u);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x7bfeu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4084:
    /* 00004084   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00004084u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_4088:
    /* 00004088   4  jsr (00002414) */
    c->pc = RC_ADDR(0x00004088u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000408cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00002414u);
    return;

L_408C:
    /* 0000408c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000408cu);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_408E:
    /* 0000408e   4  tst.w (ffff83da,A4) */
    c->pc = RC_ADDR(0x0000408eu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c26u));
    rc_set_nzvc(c, t0, RC_W);

L_4092:
    /* 00004092   2  beq 000040d0 */
    c->pc = RC_ADDR(0x00004092u);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_40D0;

L_4094:
    /* 00004094   6  cmpi.w #15,(fffff0f8,A4) */
    c->pc = RC_ADDR(0x00004094u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf08u));
    rc_cmp(c, RC_W, t0, 0x00000015u);

L_409A:
    /* 0000409a   2  ble 000040ae */
    c->pc = RC_ADDR(0x0000409au);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_40AE;

L_409C:
    /* 0000409c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000409cu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_40A0:
    /* 000040a0   4  pea (0000426f) */
    c->pc = RC_ADDR(0x000040a0u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x0000426fu));

L_40A4:
    /* 000040a4   4  jsr (00004328) */
    c->pc = RC_ADDR(0x000040a4u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000040a8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00004328u);
    return;

L_40A8:
    /* 000040a8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000040a8u);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_40AA:
    /* 000040aa   4  clr.w (ffff83da,A4) */
    c->pc = RC_ADDR(0x000040aau);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x7c26u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_40AE:
    /* 000040ae   6  cmpi.w #11,(fffff0f8,A4) */
    c->pc = RC_ADDR(0x000040aeu);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xf08u));
    rc_cmp(c, RC_W, t0, 0x00000011u);

L_40B4:
    /* 000040b4   2  ble 000040d0 */
    c->pc = RC_ADDR(0x000040b4u);
    rc_step(c, m);
    if (rc_cond(c, 15)) goto L_40D0;

L_40B6:
    /* 000040b6   6  cmpi.w #1,(ffff83da,A4) */
    c->pc = RC_ADDR(0x000040b6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c26u));
    rc_cmp(c, RC_W, t0, 0x00000001u);

L_40BC:
    /* 000040bc   2  bne 000040d0 */
    c->pc = RC_ADDR(0x000040bcu);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_40D0;

L_40BE:
    /* 000040be   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x000040beu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_40C2:
    /* 000040c2   4  pea (000042a2) */
    c->pc = RC_ADDR(0x000040c2u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000042a2u));

L_40C6:
    /* 000040c6   4  jsr (00004328) */
    c->pc = RC_ADDR(0x000040c6u);
    rc_step(c, m);
    rc_push32(c, m, RC_ADDR(0x000040cau));
    rc_depth++;
    c->pc = RC_ADDR(0x00004328u);
    return;

L_40CA:
    /* 000040ca   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x000040cau);
    rc_step(c, m);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_40CC:
    /* 000040cc   4  addq.w #1,(ffff83da,A4) */
    c->pc = RC_ADDR(0x000040ccu);
    rc_step(c, m);
    t3 = (c->a[4] - 0x7c26u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_40D0:
    /* 000040d0   4  tst.w (fffff1c6,A4) */
    c->pc = RC_ADDR(0x000040d0u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0xe3au));
    rc_set_nzvc(c, t0, RC_W);

L_40D4:
    /* 000040d4   2  bne 00004106 */
    c->pc = RC_ADDR(0x000040d4u);
    rc_step(c, m);
    if (rc_cond(c, 6)) goto L_4106;

L_40D6:
    /* 000040d6   4  tst.w (ffffce40,A4) */
    c->pc = RC_ADDR(0x000040d6u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x31c0u));
    rc_set_nzvc(c, t0, RC_W);

L_40DA:
    /* 000040da   2  beq 00004106 */
    c->pc = RC_ADDR(0x000040dau);
    rc_step(c, m);
    if (rc_cond(c, 7)) goto L_4106;

L_40DC:
    /* 000040dc   4  move.l (ffffeffe,A4),D0 */
    c->pc = RC_ADDR(0x000040dcu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1002u));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_40E0:
    /* 000040e0   4  sub.l (ffffeff6,A4),D0 */
    c->pc = RC_ADDR(0x000040e0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x100au));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_40E4:
    /* 000040e4   6  cmp.l #3b,D0 */
    c->pc = RC_ADDR(0x000040e4u);
    rc_step(c, m);
    t0 = 0x0000003bu;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_40EA:
    /* 000040ea   2  bgt 00004106 */
    c->pc = RC_ADDR(0x000040eau);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_4106;

L_40EC:
    /* 000040ec   4  move.l (fffff002,A4),D0 */
    c->pc = RC_ADDR(0x000040ecu);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0xffeu));
    rc_d_set(c, 0, RC_L, t0);
    rc_set_nzvc(c, t0, RC_L);

L_40F0:
    /* 000040f0   4  sub.l (ffffeffa,A4),D0 */
    c->pc = RC_ADDR(0x000040f0u);
    rc_step(c, m);
    t0 = rc_rd32(c, m, (c->a[4] - 0x1006u));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_40F4:
    /* 000040f4   6  cmp.l #28,D0 */
    c->pc = RC_ADDR(0x000040f4u);
    rc_step(c, m);
    t0 = 0x00000028u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_40FA:
    /* 000040fa   2  bgt 00004106 */
    c->pc = RC_ADDR(0x000040fau);
    rc_step(c, m);
    if (rc_cond(c, 14)) goto L_4106;

L_40FC:
    /* 000040fc   4  clr.w (ffffce30,A4) */
    c->pc = RC_ADDR(0x000040fcu);
    rc_step(c, m);
    rc_wr16(c, m, (c->a[4] - 0x31d0u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_4100:
    /* 00004100   2  moveq #1,D0 */
    c->pc = RC_ADDR(0x00004100u);
    rc_step(c, m);
    c->d[0] = 0x00000001u;
    rc_set_nzvc(c, c->d[0], RC_L);

L_4102:
    /* 00004102   4  bra 00003b2a */
    c->pc = RC_ADDR(0x00004102u);
    rc_step(c, m);
    rc_tick();
    goto L_3B2A;

L_4106:
    /* 00004106   4  move.w (ffffefe8,A4),D0 */
    c->pc = RC_ADDR(0x00004106u);
    rc_step(c, m);
    t0 = rc_rd16(c, m, (c->a[4] - 0x1018u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_410A:
    /* 0000410a   4  bra 00003b2a */
    c->pc = RC_ADDR(0x0000410au);
    rc_step(c, m);
    rc_tick();
    goto L_3B2A;

}
