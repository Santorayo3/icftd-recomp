/* fn_00006b5a - 1342 byte(s), 363 instruction(s).
 * Generated from out\antscan\img0\dshell.img by `recomp` - one C statement per 68000
 * instruction, the original's control flow as labels. Hand edits belong in src\recomp\patches.
 * Addresses are image offsets; RC_ADDR (cpu.h) adds the load address of the build.
 * Verified against the oracle's machine state: tools\state-diff.ps1. */
#include "cpu.h"

void ant_fn_00006b5a(cpu_t *c, rt_machine *m)
{
    u32 t0, t1, t2, t3, t4;

    switch (c->pc)
    {
    case RC_ADDR(0x00006b5au): goto L_6B5A;
    case RC_ADDR(0x00006b5eu): goto L_6B5E;
    case RC_ADDR(0x00006b62u): goto L_6B62;
    case RC_ADDR(0x00006b66u): goto L_6B66;
    case RC_ADDR(0x00006b6au): goto L_6B6A;
    case RC_ADDR(0x00006b6eu): goto L_6B6E;
    case RC_ADDR(0x00006b70u): goto L_6B70;
    case RC_ADDR(0x00006b74u): goto L_6B74;
    case RC_ADDR(0x00006b78u): goto L_6B78;
    case RC_ADDR(0x00006b7cu): goto L_6B7C;
    case RC_ADDR(0x00006b80u): goto L_6B80;
    case RC_ADDR(0x00006b84u): goto L_6B84;
    case RC_ADDR(0x00006b86u): goto L_6B86;
    case RC_ADDR(0x00006b8au): goto L_6B8A;
    case RC_ADDR(0x00006b8eu): goto L_6B8E;
    case RC_ADDR(0x00006b92u): goto L_6B92;
    case RC_ADDR(0x00006b94u): goto L_6B94;
    case RC_ADDR(0x00006b98u): goto L_6B98;
    case RC_ADDR(0x00006b9cu): goto L_6B9C;
    case RC_ADDR(0x00006ba0u): goto L_6BA0;
    case RC_ADDR(0x00006ba4u): goto L_6BA4;
    case RC_ADDR(0x00006ba8u): goto L_6BA8;
    case RC_ADDR(0x00006bacu): goto L_6BAC;
    case RC_ADDR(0x00006bb2u): goto L_6BB2;
    case RC_ADDR(0x00006bb8u): goto L_6BB8;
    case RC_ADDR(0x00006bbeu): goto L_6BBE;
    case RC_ADDR(0x00006bc2u): goto L_6BC2;
    case RC_ADDR(0x00006bc6u): goto L_6BC6;
    case RC_ADDR(0x00006bcau): goto L_6BCA;
    case RC_ADDR(0x00006bceu): goto L_6BCE;
    case RC_ADDR(0x00006bd2u): goto L_6BD2;
    case RC_ADDR(0x00006bd6u): goto L_6BD6;
    case RC_ADDR(0x00006bdau): goto L_6BDA;
    case RC_ADDR(0x00006bdeu): goto L_6BDE;
    case RC_ADDR(0x00006be0u): goto L_6BE0;
    case RC_ADDR(0x00006be4u): goto L_6BE4;
    case RC_ADDR(0x00006be8u): goto L_6BE8;
    case RC_ADDR(0x00006becu): goto L_6BEC;
    case RC_ADDR(0x00006bf0u): goto L_6BF0;
    case RC_ADDR(0x00006bf6u): goto L_6BF6;
    case RC_ADDR(0x00006bfau): goto L_6BFA;
    case RC_ADDR(0x00006bfeu): goto L_6BFE;
    case RC_ADDR(0x00006c02u): goto L_6C02;
    case RC_ADDR(0x00006c04u): goto L_6C04;
    case RC_ADDR(0x00006c08u): goto L_6C08;
    case RC_ADDR(0x00006c0au): goto L_6C0A;
    case RC_ADDR(0x00006c0eu): goto L_6C0E;
    case RC_ADDR(0x00006c10u): goto L_6C10;
    case RC_ADDR(0x00006c16u): goto L_6C16;
    case RC_ADDR(0x00006c18u): goto L_6C18;
    case RC_ADDR(0x00006c1cu): goto L_6C1C;
    case RC_ADDR(0x00006c20u): goto L_6C20;
    case RC_ADDR(0x00006c24u): goto L_6C24;
    case RC_ADDR(0x00006c28u): goto L_6C28;
    case RC_ADDR(0x00006c2cu): goto L_6C2C;
    case RC_ADDR(0x00006c30u): goto L_6C30;
    case RC_ADDR(0x00006c34u): goto L_6C34;
    case RC_ADDR(0x00006c3au): goto L_6C3A;
    case RC_ADDR(0x00006c3cu): goto L_6C3C;
    case RC_ADDR(0x00006c42u): goto L_6C42;
    case RC_ADDR(0x00006c48u): goto L_6C48;
    case RC_ADDR(0x00006c4au): goto L_6C4A;
    case RC_ADDR(0x00006c50u): goto L_6C50;
    case RC_ADDR(0x00006c56u): goto L_6C56;
    case RC_ADDR(0x00006c58u): goto L_6C58;
    case RC_ADDR(0x00006c5eu): goto L_6C5E;
    case RC_ADDR(0x00006c64u): goto L_6C64;
    case RC_ADDR(0x00006c66u): goto L_6C66;
    case RC_ADDR(0x00006c6cu): goto L_6C6C;
    case RC_ADDR(0x00006c72u): goto L_6C72;
    case RC_ADDR(0x00006c78u): goto L_6C78;
    case RC_ADDR(0x00006c7cu): goto L_6C7C;
    case RC_ADDR(0x00006c7eu): goto L_6C7E;
    case RC_ADDR(0x00006c80u): goto L_6C80;
    case RC_ADDR(0x00006c82u): goto L_6C82;
    case RC_ADDR(0x00006c84u): goto L_6C84;
    case RC_ADDR(0x00006c88u): goto L_6C88;
    case RC_ADDR(0x00006c8au): goto L_6C8A;
    case RC_ADDR(0x00006c8cu): goto L_6C8C;
    case RC_ADDR(0x00006c8eu): goto L_6C8E;
    case RC_ADDR(0x00006c90u): goto L_6C90;
    case RC_ADDR(0x00006c92u): goto L_6C92;
    case RC_ADDR(0x00006c96u): goto L_6C96;
    case RC_ADDR(0x00006c9au): goto L_6C9A;
    case RC_ADDR(0x00006c9eu): goto L_6C9E;
    case RC_ADDR(0x00006ca2u): goto L_6CA2;
    case RC_ADDR(0x00006ca6u): goto L_6CA6;
    case RC_ADDR(0x00006caau): goto L_6CAA;
    case RC_ADDR(0x00006cacu): goto L_6CAC;
    case RC_ADDR(0x00006cb0u): goto L_6CB0;
    case RC_ADDR(0x00006cb4u): goto L_6CB4;
    case RC_ADDR(0x00006cb8u): goto L_6CB8;
    case RC_ADDR(0x00006cbau): goto L_6CBA;
    case RC_ADDR(0x00006cbeu): goto L_6CBE;
    case RC_ADDR(0x00006cc2u): goto L_6CC2;
    case RC_ADDR(0x00006cc8u): goto L_6CC8;
    case RC_ADDR(0x00006ccau): goto L_6CCA;
    case RC_ADDR(0x00006cceu): goto L_6CCE;
    case RC_ADDR(0x00006cd2u): goto L_6CD2;
    case RC_ADDR(0x00006cd6u): goto L_6CD6;
    case RC_ADDR(0x00006cd8u): goto L_6CD8;
    case RC_ADDR(0x00006cdcu): goto L_6CDC;
    case RC_ADDR(0x00006ce0u): goto L_6CE0;
    case RC_ADDR(0x00006ce4u): goto L_6CE4;
    case RC_ADDR(0x00006ce8u): goto L_6CE8;
    case RC_ADDR(0x00006cecu): goto L_6CEC;
    case RC_ADDR(0x00006cf0u): goto L_6CF0;
    case RC_ADDR(0x00006cf4u): goto L_6CF4;
    case RC_ADDR(0x00006cf6u): goto L_6CF6;
    case RC_ADDR(0x00006cfau): goto L_6CFA;
    case RC_ADDR(0x00006cfeu): goto L_6CFE;
    case RC_ADDR(0x00006d02u): goto L_6D02;
    case RC_ADDR(0x00006d04u): goto L_6D04;
    case RC_ADDR(0x00006d08u): goto L_6D08;
    case RC_ADDR(0x00006d0cu): goto L_6D0C;
    case RC_ADDR(0x00006d10u): goto L_6D10;
    case RC_ADDR(0x00006d12u): goto L_6D12;
    case RC_ADDR(0x00006d18u): goto L_6D18;
    case RC_ADDR(0x00006d1cu): goto L_6D1C;
    case RC_ADDR(0x00006d20u): goto L_6D20;
    case RC_ADDR(0x00006d24u): goto L_6D24;
    case RC_ADDR(0x00006d26u): goto L_6D26;
    case RC_ADDR(0x00006d2au): goto L_6D2A;
    case RC_ADDR(0x00006d2eu): goto L_6D2E;
    case RC_ADDR(0x00006d32u): goto L_6D32;
    case RC_ADDR(0x00006d36u): goto L_6D36;
    case RC_ADDR(0x00006d3au): goto L_6D3A;
    case RC_ADDR(0x00006d3eu): goto L_6D3E;
    case RC_ADDR(0x00006d40u): goto L_6D40;
    case RC_ADDR(0x00006d42u): goto L_6D42;
    case RC_ADDR(0x00006d46u): goto L_6D46;
    case RC_ADDR(0x00006d4au): goto L_6D4A;
    case RC_ADDR(0x00006d4cu): goto L_6D4C;
    case RC_ADDR(0x00006d50u): goto L_6D50;
    case RC_ADDR(0x00006d54u): goto L_6D54;
    case RC_ADDR(0x00006d56u): goto L_6D56;
    case RC_ADDR(0x00006d5au): goto L_6D5A;
    case RC_ADDR(0x00006d5eu): goto L_6D5E;
    case RC_ADDR(0x00006d60u): goto L_6D60;
    case RC_ADDR(0x00006d64u): goto L_6D64;
    case RC_ADDR(0x00006d68u): goto L_6D68;
    case RC_ADDR(0x00006d6au): goto L_6D6A;
    case RC_ADDR(0x00006d6eu): goto L_6D6E;
    case RC_ADDR(0x00006d72u): goto L_6D72;
    case RC_ADDR(0x00006d74u): goto L_6D74;
    case RC_ADDR(0x00006d78u): goto L_6D78;
    case RC_ADDR(0x00006d7cu): goto L_6D7C;
    case RC_ADDR(0x00006d7eu): goto L_6D7E;
    case RC_ADDR(0x00006d82u): goto L_6D82;
    case RC_ADDR(0x00006d86u): goto L_6D86;
    case RC_ADDR(0x00006d88u): goto L_6D88;
    case RC_ADDR(0x00006d8cu): goto L_6D8C;
    case RC_ADDR(0x00006d90u): goto L_6D90;
    case RC_ADDR(0x00006d92u): goto L_6D92;
    case RC_ADDR(0x00006da4u): goto L_6DA4;
    case RC_ADDR(0x00006da6u): goto L_6DA6;
    case RC_ADDR(0x00006dacu): goto L_6DAC;
    case RC_ADDR(0x00006daeu): goto L_6DAE;
    case RC_ADDR(0x00006db0u): goto L_6DB0;
    case RC_ADDR(0x00006db4u): goto L_6DB4;
    case RC_ADDR(0x00006db8u): goto L_6DB8;
    case RC_ADDR(0x00006dbcu): goto L_6DBC;
    case RC_ADDR(0x00006dc2u): goto L_6DC2;
    case RC_ADDR(0x00006dc6u): goto L_6DC6;
    case RC_ADDR(0x00006dcau): goto L_6DCA;
    case RC_ADDR(0x00006dceu): goto L_6DCE;
    case RC_ADDR(0x00006dd0u): goto L_6DD0;
    case RC_ADDR(0x00006dd4u): goto L_6DD4;
    case RC_ADDR(0x00006dd6u): goto L_6DD6;
    case RC_ADDR(0x00006ddau): goto L_6DDA;
    case RC_ADDR(0x00006ddeu): goto L_6DDE;
    case RC_ADDR(0x00006de2u): goto L_6DE2;
    case RC_ADDR(0x00006de4u): goto L_6DE4;
    case RC_ADDR(0x00006deau): goto L_6DEA;
    case RC_ADDR(0x00006deeu): goto L_6DEE;
    case RC_ADDR(0x00006df0u): goto L_6DF0;
    case RC_ADDR(0x00006df4u): goto L_6DF4;
    case RC_ADDR(0x00006df8u): goto L_6DF8;
    case RC_ADDR(0x00006dfeu): goto L_6DFE;
    case RC_ADDR(0x00006e00u): goto L_6E00;
    case RC_ADDR(0x00006e06u): goto L_6E06;
    case RC_ADDR(0x00006e08u): goto L_6E08;
    case RC_ADDR(0x00006e0cu): goto L_6E0C;
    case RC_ADDR(0x00006e0eu): goto L_6E0E;
    case RC_ADDR(0x00006e12u): goto L_6E12;
    case RC_ADDR(0x00006e16u): goto L_6E16;
    case RC_ADDR(0x00006e1au): goto L_6E1A;
    case RC_ADDR(0x00006e1cu): goto L_6E1C;
    case RC_ADDR(0x00006e22u): goto L_6E22;
    case RC_ADDR(0x00006e26u): goto L_6E26;
    case RC_ADDR(0x00006e2au): goto L_6E2A;
    case RC_ADDR(0x00006e2eu): goto L_6E2E;
    case RC_ADDR(0x00006e32u): goto L_6E32;
    case RC_ADDR(0x00006e34u): goto L_6E34;
    case RC_ADDR(0x00006e38u): goto L_6E38;
    case RC_ADDR(0x00006e3eu): goto L_6E3E;
    case RC_ADDR(0x00006e42u): goto L_6E42;
    case RC_ADDR(0x00006e46u): goto L_6E46;
    case RC_ADDR(0x00006e48u): goto L_6E48;
    case RC_ADDR(0x00006e4cu): goto L_6E4C;
    case RC_ADDR(0x00006e50u): goto L_6E50;
    case RC_ADDR(0x00006e54u): goto L_6E54;
    case RC_ADDR(0x00006e58u): goto L_6E58;
    case RC_ADDR(0x00006e5eu): goto L_6E5E;
    case RC_ADDR(0x00006e60u): goto L_6E60;
    case RC_ADDR(0x00006e64u): goto L_6E64;
    case RC_ADDR(0x00006e66u): goto L_6E66;
    case RC_ADDR(0x00006e6au): goto L_6E6A;
    case RC_ADDR(0x00006e6eu): goto L_6E6E;
    case RC_ADDR(0x00006e72u): goto L_6E72;
    case RC_ADDR(0x00006e76u): goto L_6E76;
    case RC_ADDR(0x00006e7cu): goto L_6E7C;
    case RC_ADDR(0x00006e80u): goto L_6E80;
    case RC_ADDR(0x00006e84u): goto L_6E84;
    case RC_ADDR(0x00006e88u): goto L_6E88;
    case RC_ADDR(0x00006e8eu): goto L_6E8E;
    case RC_ADDR(0x00006e92u): goto L_6E92;
    case RC_ADDR(0x00006e94u): goto L_6E94;
    case RC_ADDR(0x00006e96u): goto L_6E96;
    case RC_ADDR(0x00006e9au): goto L_6E9A;
    case RC_ADDR(0x00006ea0u): goto L_6EA0;
    case RC_ADDR(0x00006ea4u): goto L_6EA4;
    case RC_ADDR(0x00006eaau): goto L_6EAA;
    case RC_ADDR(0x00006eacu): goto L_6EAC;
    case RC_ADDR(0x00006eb0u): goto L_6EB0;
    case RC_ADDR(0x00006eb4u): goto L_6EB4;
    case RC_ADDR(0x00006eb8u): goto L_6EB8;
    case RC_ADDR(0x00006ebau): goto L_6EBA;
    case RC_ADDR(0x00006ebcu): goto L_6EBC;
    case RC_ADDR(0x00006ebeu): goto L_6EBE;
    case RC_ADDR(0x00006ec4u): goto L_6EC4;
    case RC_ADDR(0x00006ecau): goto L_6ECA;
    case RC_ADDR(0x00006eceu): goto L_6ECE;
    case RC_ADDR(0x00006ed0u): goto L_6ED0;
    case RC_ADDR(0x00006ed4u): goto L_6ED4;
    case RC_ADDR(0x00006ed8u): goto L_6ED8;
    case RC_ADDR(0x00006edcu): goto L_6EDC;
    case RC_ADDR(0x00006ee0u): goto L_6EE0;
    case RC_ADDR(0x00006ee4u): goto L_6EE4;
    case RC_ADDR(0x00006ee8u): goto L_6EE8;
    case RC_ADDR(0x00006eecu): goto L_6EEC;
    case RC_ADDR(0x00006eeeu): goto L_6EEE;
    case RC_ADDR(0x00006ef2u): goto L_6EF2;
    case RC_ADDR(0x00006ef6u): goto L_6EF6;
    case RC_ADDR(0x00006efau): goto L_6EFA;
    case RC_ADDR(0x00006f00u): goto L_6F00;
    case RC_ADDR(0x00006f04u): goto L_6F04;
    case RC_ADDR(0x00006f06u): goto L_6F06;
    case RC_ADDR(0x00006f08u): goto L_6F08;
    case RC_ADDR(0x00006f0cu): goto L_6F0C;
    case RC_ADDR(0x00006f10u): goto L_6F10;
    case RC_ADDR(0x00006f14u): goto L_6F14;
    case RC_ADDR(0x00006f16u): goto L_6F16;
    case RC_ADDR(0x00006f1au): goto L_6F1A;
    case RC_ADDR(0x00006f20u): goto L_6F20;
    case RC_ADDR(0x00006f24u): goto L_6F24;
    case RC_ADDR(0x00006f28u): goto L_6F28;
    case RC_ADDR(0x00006f2au): goto L_6F2A;
    case RC_ADDR(0x00006f2cu): goto L_6F2C;
    case RC_ADDR(0x00006f30u): goto L_6F30;
    case RC_ADDR(0x00006f34u): goto L_6F34;
    case RC_ADDR(0x00006f38u): goto L_6F38;
    case RC_ADDR(0x00006f3cu): goto L_6F3C;
    case RC_ADDR(0x00006f3eu): goto L_6F3E;
    case RC_ADDR(0x00006f40u): goto L_6F40;
    case RC_ADDR(0x00006f42u): goto L_6F42;
    case RC_ADDR(0x00006f48u): goto L_6F48;
    case RC_ADDR(0x00006f4eu): goto L_6F4E;
    case RC_ADDR(0x00006f52u): goto L_6F52;
    case RC_ADDR(0x00006f58u): goto L_6F58;
    case RC_ADDR(0x00006f5au): goto L_6F5A;
    case RC_ADDR(0x00006f60u): goto L_6F60;
    case RC_ADDR(0x00006f62u): goto L_6F62;
    case RC_ADDR(0x00006f66u): goto L_6F66;
    case RC_ADDR(0x00006f68u): goto L_6F68;
    case RC_ADDR(0x00006f6au): goto L_6F6A;
    case RC_ADDR(0x00006f6eu): goto L_6F6E;
    case RC_ADDR(0x00006f72u): goto L_6F72;
    case RC_ADDR(0x00006f76u): goto L_6F76;
    case RC_ADDR(0x00006f78u): goto L_6F78;
    case RC_ADDR(0x00006f7cu): goto L_6F7C;
    case RC_ADDR(0x00006f80u): goto L_6F80;
    case RC_ADDR(0x00006f82u): goto L_6F82;
    case RC_ADDR(0x00006f86u): goto L_6F86;
    case RC_ADDR(0x00006f88u): goto L_6F88;
    case RC_ADDR(0x00006f8cu): goto L_6F8C;
    case RC_ADDR(0x00006f90u): goto L_6F90;
    case RC_ADDR(0x00006f94u): goto L_6F94;
    case RC_ADDR(0x00006f98u): goto L_6F98;
    case RC_ADDR(0x00006f9cu): goto L_6F9C;
    case RC_ADDR(0x00006fa0u): goto L_6FA0;
    case RC_ADDR(0x00006fa4u): goto L_6FA4;
    case RC_ADDR(0x00006fa8u): goto L_6FA8;
    case RC_ADDR(0x00006faau): goto L_6FAA;
    case RC_ADDR(0x00006faeu): goto L_6FAE;
    case RC_ADDR(0x00006fb2u): goto L_6FB2;
    case RC_ADDR(0x00006fb6u): goto L_6FB6;
    case RC_ADDR(0x00006fb8u): goto L_6FB8;
    case RC_ADDR(0x00006fbeu): goto L_6FBE;
    case RC_ADDR(0x00006fc4u): goto L_6FC4;
    case RC_ADDR(0x00006fcau): goto L_6FCA;
    case RC_ADDR(0x00006fccu): goto L_6FCC;
    case RC_ADDR(0x00006fd0u): goto L_6FD0;
    case RC_ADDR(0x00006fd4u): goto L_6FD4;
    case RC_ADDR(0x00006fd8u): goto L_6FD8;
    case RC_ADDR(0x00006fdcu): goto L_6FDC;
    case RC_ADDR(0x00006fe0u): goto L_6FE0;
    case RC_ADDR(0x00006fe2u): goto L_6FE2;
    case RC_ADDR(0x00006fe6u): goto L_6FE6;
    case RC_ADDR(0x00006feau): goto L_6FEA;
    case RC_ADDR(0x00006feeu): goto L_6FEE;
    case RC_ADDR(0x00006ff0u): goto L_6FF0;
    case RC_ADDR(0x00006ff2u): goto L_6FF2;
    case RC_ADDR(0x00006ff6u): goto L_6FF6;
    case RC_ADDR(0x00006ffau): goto L_6FFA;
    case RC_ADDR(0x00006ffcu): goto L_6FFC;
    case RC_ADDR(0x00007000u): goto L_7000;
    case RC_ADDR(0x00007002u): goto L_7002;
    case RC_ADDR(0x00007006u): goto L_7006;
    case RC_ADDR(0x0000700au): goto L_700A;
    case RC_ADDR(0x0000700eu): goto L_700E;
    case RC_ADDR(0x00007012u): goto L_7012;
    case RC_ADDR(0x00007014u): goto L_7014;
    case RC_ADDR(0x00007018u): goto L_7018;
    case RC_ADDR(0x0000701cu): goto L_701C;
    case RC_ADDR(0x0000701eu): goto L_701E;
    case RC_ADDR(0x00007022u): goto L_7022;
    case RC_ADDR(0x00007026u): goto L_7026;
    case RC_ADDR(0x0000702au): goto L_702A;
    case RC_ADDR(0x0000702cu): goto L_702C;
    case RC_ADDR(0x00007030u): goto L_7030;
    case RC_ADDR(0x00007034u): goto L_7034;
    case RC_ADDR(0x00007036u): goto L_7036;
    case RC_ADDR(0x0000703cu): goto L_703C;
    case RC_ADDR(0x00007040u): goto L_7040;
    case RC_ADDR(0x00007044u): goto L_7044;
    case RC_ADDR(0x00007048u): goto L_7048;
    case RC_ADDR(0x0000704cu): goto L_704C;
    case RC_ADDR(0x0000704eu): goto L_704E;
    case RC_ADDR(0x00007052u): goto L_7052;
    case RC_ADDR(0x00007056u): goto L_7056;
    case RC_ADDR(0x0000705au): goto L_705A;
    case RC_ADDR(0x0000705cu): goto L_705C;
    case RC_ADDR(0x00007060u): goto L_7060;
    case RC_ADDR(0x00007064u): goto L_7064;
    case RC_ADDR(0x00007068u): goto L_7068;
    case RC_ADDR(0x0000706au): goto L_706A;
    case RC_ADDR(0x0000706eu): goto L_706E;
    case RC_ADDR(0x00007070u): goto L_7070;
    case RC_ADDR(0x00007076u): goto L_7076;
    case RC_ADDR(0x0000707au): goto L_707A;
    case RC_ADDR(0x0000707eu): goto L_707E;
    case RC_ADDR(0x00007082u): goto L_7082;
    case RC_ADDR(0x00007086u): goto L_7086;
    case RC_ADDR(0x0000708au): goto L_708A;
    case RC_ADDR(0x0000708eu): goto L_708E;
    case RC_ADDR(0x00007092u): goto L_7092;
    case RC_ADDR(0x00007094u): goto L_7094;
    case RC_ADDR(0x00007098u): goto L_7098;
    case RC_ADDR(0x0000709cu): goto L_709C;
    case RC_ADDR(0x000070a0u): goto L_70A0;
    case RC_ADDR(0x000070a4u): goto L_70A4;
    case RC_ADDR(0x000070a6u): goto L_70A6;
    default:
        rc_bad_entry(c, m);
        return;
    }

L_6B5A:
    /* 00006b5a   4  link.w A5,#ffffffd2 */
    c->pc = RC_ADDR(0x00006b5au);
    rc_step(c, m, 16);
    c->a[7] -= 4;
    rc_wr32(c, m, c->a[7], c->a[5]);
    c->a[5] = c->a[7];
    c->a[7] -= 0x2eu;

L_6B5E:
    /* 00006b5e   4  clr.w (ffffffd4,A5) */
    c->pc = RC_ADDR(0x00006b5eu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2cu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6B62:
    /* 00006b62   4  jsr (00006826) */
    c->pc = RC_ADDR(0x00006b62u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006b66u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006826u);
    return;

L_6B66:
    /* 00006b66   4  pea (000070a8) */
    c->pc = RC_ADDR(0x00006b66u);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000070a8u));

L_6B6A:
    /* 00006b6a   4  jsr (ffff82ae,A4) */
    c->pc = RC_ADDR(0x00006b6au);
    rc_step(c, m, 18);
    /* vector 114 */
    rc_push32(c, m, RC_ADDR(0x00006b6eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023da4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00022366u);
    return;

L_6B6E:
    /* 00006b6e   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006b6eu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6B70:
    /* 00006b70   4  clr.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x00006b70u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6B74:
    /* 00006b74   4  clr.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x00006b74u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x8u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6B78:
    /* 00006b78   4  clr.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00006b78u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x4u), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6B7C:
    /* 00006b7c   4  pea (000070b7) */
    c->pc = RC_ADDR(0x00006b7cu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000070b7u));

L_6B80:
    /* 00006b80   4  jsr (000038ac) */
    c->pc = RC_ADDR(0x00006b80u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006b84u));
    rc_depth++;
    c->pc = RC_ADDR(0x000038acu);
    return;

L_6B84:
    /* 00006b84   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006b84u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6B86:
    /* 00006b86   4  move.l D0,(fffffffc,A5) */
    c->pc = RC_ADDR(0x00006b86u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x4u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6B8A:
    /* 00006b8a   4  pea (000070bc) */
    c->pc = RC_ADDR(0x00006b8au);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000070bcu));

L_6B8E:
    /* 00006b8e   4  jsr (000038ac) */
    c->pc = RC_ADDR(0x00006b8eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006b92u));
    rc_depth++;
    c->pc = RC_ADDR(0x000038acu);
    return;

L_6B92:
    /* 00006b92   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006b92u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6B94:
    /* 00006b94   4  move.l D0,(fffffff8,A5) */
    c->pc = RC_ADDR(0x00006b94u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x8u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6B98:
    /* 00006b98   4  jsr (0000370e) */
    c->pc = RC_ADDR(0x00006b98u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006b9cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000370eu);
    return;

L_6B9C:
    /* 00006b9c   4  tst.l (fffffffc,A5) */
    c->pc = RC_ADDR(0x00006b9cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    rc_set_nzvc(c, t0, RC_L);

L_6BA0:
    /* 00006ba0   4  beq 000070a0 */
    c->pc = RC_ADDR(0x00006ba0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_70A0;

L_6BA4:
    /* 00006ba4   4  tst.l (fffffff8,A5) */
    c->pc = RC_ADDR(0x00006ba4u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    rc_set_nzvc(c, t0, RC_L);

L_6BA8:
    /* 00006ba8   4  beq 000070a0 */
    c->pc = RC_ADDR(0x00006ba8u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_70A0;

L_6BAC:
    /* 00006bac   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00006bacu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6BB2:
    /* 00006bb2   6  move.w #5a,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00006bb2u);
    rc_step(c, m, 16);
    t0 = 0x0000005au;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6BB8:
    /* 00006bb8   6  move.w #98,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00006bb8u);
    rc_step(c, m, 16);
    t0 = 0x00000098u;
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6BBE:
    /* 00006bbe   4  clr.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x00006bbeu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6BC2:
    /* 00006bc2   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x00006bc2u);
    rc_step(c, m, 12);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6BC6:
    /* 00006bc6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006bc6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6BCA:
    /* 00006bca   4  pea (0000000a).l */
    c->pc = RC_ADDR(0x00006bcau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000au);

L_6BCE:
    /* 00006bce   4  pea (00000077).l */
    c->pc = RC_ADDR(0x00006bceu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000077u);

L_6BD2:
    /* 00006bd2   4  pea (00000026).l */
    c->pc = RC_ADDR(0x00006bd2u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000026u);

L_6BD6:
    /* 00006bd6   4  pea (000000c8).l */
    c->pc = RC_ADDR(0x00006bd6u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c8u);

L_6BDA:
    /* 00006bda   4  pea (00000026).l */
    c->pc = RC_ADDR(0x00006bdau);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000026u);

L_6BDE:
    /* 00006bde   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006bdeu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6BE0:
    /* 00006be0   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00006be0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6BE4:
    /* 00006be4   4  jsr (00006634) */
    c->pc = RC_ADDR(0x00006be4u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006be8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006634u);
    return;

L_6BE8:
    /* 00006be8   4  lea (20,A7),A7 */
    c->pc = RC_ADDR(0x00006be8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x20u);

L_6BEC:
    /* 00006bec   4  clr.w (fffff816,A4) */
    c->pc = RC_ADDR(0x00006becu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7eau), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6BF0:
    /* 00006bf0   6  move.w #18,(fffff818,A4) */
    c->pc = RC_ADDR(0x00006bf0u);
    rc_step(c, m, 16);
    t0 = 0x00000018u;
    rc_wr16(c, m, (c->a[4] - 0x7e8u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6BF6:
    /* 00006bf6   4  tst.w (ffffd5c8,A4) */
    c->pc = RC_ADDR(0x00006bf6u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a38u));
    rc_set_nzvc(c, t0, RC_W);

L_6BFA:
    /* 00006bfa   4  bne 00006cb0 */
    c->pc = RC_ADDR(0x00006bfau);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6CB0;

L_6BFE:
    /* 00006bfe   4  tst.w (ffffd5c4,A4) */
    c->pc = RC_ADDR(0x00006bfeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3cu));
    rc_set_nzvc(c, t0, RC_W);

L_6C02:
    /* 00006c02   2  bne 00006c10 */
    c->pc = RC_ADDR(0x00006c02u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6C10;

L_6C04:
    /* 00006c04   4  tst.w (ffffd5c6,A4) */
    c->pc = RC_ADDR(0x00006c04u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3au));
    rc_set_nzvc(c, t0, RC_W);

L_6C08:
    /* 00006c08   2  bne 00006c10 */
    c->pc = RC_ADDR(0x00006c08u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6C10;

L_6C0A:
    /* 00006c0a   4  clr.w (ffffffec,A5) */
    c->pc = RC_ADDR(0x00006c0au);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x14u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6C0E:
    /* 00006c0e   2  bra 00006c1c */
    c->pc = RC_ADDR(0x00006c0eu);
    rc_step(c, m, 10);
    goto L_6C1C;

L_6C10:
    /* 00006c10   6  cmpi.w #8,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00006c10u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_cmp(c, RC_W, t0, 0x00000008u);

L_6C16:
    /* 00006c16   2  bge 00006c1c */
    c->pc = RC_ADDR(0x00006c16u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_6C1C;

L_6C18:
    /* 00006c18   4  addq.w #1,(ffffffec,A5) */
    c->pc = RC_ADDR(0x00006c18u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x14u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6C1C:
    /* 00006c1c   4  move.w (ffffd5c4,A4),D0 */
    c->pc = RC_ADDR(0x00006c1cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3cu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C20:
    /* 00006c20   4  muls.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x00006c20u);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_muls(c, 0, t0);

L_6C24:
    /* 00006c24   4  add.w D0,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00006c24u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0xeu);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_6C28:
    /* 00006c28   4  move.w (ffffd5c6,A4),D0 */
    c->pc = RC_ADDR(0x00006c28u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x2a3au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C2C:
    /* 00006c2c   4  muls.w (ffffffec,A5),D0 */
    c->pc = RC_ADDR(0x00006c2cu);
    rc_step(c, m, 46);
    t0 = rc_rd16(c, m, (c->a[5] - 0x14u));
    rc_muls(c, 0, t0);

L_6C30:
    /* 00006c30   4  add.w D0,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00006c30u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x10u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_W);
    rc_flags_add(c, RC_W, t1, rc_d_get(c, 0, RC_W), t2, 0);
    rc_wr16(c, m, t3, t2);

L_6C34:
    /* 00006c34   6  cmpi.w #40,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00006c34u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_cmp(c, RC_W, t0, 0x00000040u);

L_6C3A:
    /* 00006c3a   2  bge 00006c42 */
    c->pc = RC_ADDR(0x00006c3au);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_6C42;

L_6C3C:
    /* 00006c3c   6  move.w #40,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00006c3cu);
    rc_step(c, m, 16);
    t0 = 0x00000040u;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C42:
    /* 00006c42   6  cmpi.w #aa,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00006c42u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_cmp(c, RC_W, t0, 0x000000aau);

L_6C48:
    /* 00006c48   2  ble 00006c50 */
    c->pc = RC_ADDR(0x00006c48u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_6C50;

L_6C4A:
    /* 00006c4a   6  move.w #aa,(fffffff2,A5) */
    c->pc = RC_ADDR(0x00006c4au);
    rc_step(c, m, 16);
    t0 = 0x000000aau;
    rc_wr16(c, m, (c->a[5] - 0xeu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C50:
    /* 00006c50   6  cmpi.w #97,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00006c50u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x00000097u);

L_6C56:
    /* 00006c56   2  bge 00006c5e */
    c->pc = RC_ADDR(0x00006c56u);
    rc_step(c, m, 10);
    if (rc_cond(c, 12)) goto L_6C5E;

L_6C58:
    /* 00006c58   6  move.w #97,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00006c58u);
    rc_step(c, m, 16);
    t0 = 0x00000097u;
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C5E:
    /* 00006c5e   6  cmpi.w #ce,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00006c5eu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_cmp(c, RC_W, t0, 0x000000ceu);

L_6C64:
    /* 00006c64   2  ble 00006c6c */
    c->pc = RC_ADDR(0x00006c64u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_6C6C;

L_6C66:
    /* 00006c66   6  move.w #ce,(fffffff0,A5) */
    c->pc = RC_ADDR(0x00006c66u);
    rc_step(c, m, 16);
    t0 = 0x000000ceu;
    rc_wr16(c, m, (c->a[5] - 0x10u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C6C:
    /* 00006c6c   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00006c6cu);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6C72:
    /* 00006c72   6  pea (00140000).l */
    c->pc = RC_ADDR(0x00006c72u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00140000u);

L_6C78:
    /* 00006c78   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00006c78u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C7C:
    /* 00006c7c   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006c7cu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6C7E:
    /* 00006c7e   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00006c7eu);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_6C80:
    /* 00006c80   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00006c80u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_6C82:
    /* 00006c82   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00006c82u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6C84:
    /* 00006c84   4  move.w (fffffff2,A5),D0 */
    c->pc = RC_ADDR(0x00006c84u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0xeu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C88:
    /* 00006c88   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006c88u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6C8A:
    /* 00006c8a   2  moveq #10,D1 */
    c->pc = RC_ADDR(0x00006c8au);
    rc_step(c, m, 4);
    c->d[1] = 0x00000010u;
    rc_set_nzvc(c, c->d[1], RC_L);

L_6C8C:
    /* 00006c8c   2  asl.l D1,D0 */
    c->pc = RC_ADDR(0x00006c8cu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, (c->d[1] & 63u), rc_d_get(c, 0, RC_L), RC_L));

L_6C8E:
    /* 00006c8e   2  move.l D0,-(A7) */
    c->pc = RC_ADDR(0x00006c8eu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_L);
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6C90:
    /* 00006c90   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006c90u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6C92:
    /* 00006c92   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006c92u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6C96:
    /* 00006c96   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00006c96u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6C9A:
    /* 00006c9a   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00006c9au);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006c9eu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6C9E:
    /* 00006c9e   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00006c9eu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_6CA2:
    /* 00006ca2   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006ca2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6CA6:
    /* 00006ca6   4  jsr (00006612) */
    c->pc = RC_ADDR(0x00006ca6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006caau));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_6CAA:
    /* 00006caa   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006caau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6CAC:
    /* 00006cac   4  bra 00006bf6 */
    c->pc = RC_ADDR(0x00006cacu);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6BF6;

L_6CB0:
    /* 00006cb0   4  move.w (fffffff0,A5),D0 */
    c->pc = RC_ADDR(0x00006cb0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x10u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6CB4:
    /* 00006cb4   4  sub.w #97,D0 */
    c->pc = RC_ADDR(0x00006cb4u);
    rc_step(c, m, 10);
    t0 = 0x00000097u;
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_6CB8:
    /* 00006cb8   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006cb8u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6CBA:
    /* 00006cba   4  divs.w #8,D0 */
    c->pc = RC_ADDR(0x00006cbau);
    rc_step(c, m, 162);
    t0 = 0x00000008u;
    rc_divs(c, m, 0, t0);

L_6CBE:
    /* 00006cbe   4  move.w D0,(ffffffee,A5) */
    c->pc = RC_ADDR(0x00006cbeu);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x12u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6CC2:
    /* 00006cc2   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00006cc2u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6CC8:
    /* 00006cc8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006cc8u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6CCA:
    /* 00006cca   4  move.l (fffffff8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006ccau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6CCE:
    /* 00006cce   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00006cceu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6CD2:
    /* 00006cd2   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00006cd2u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006cd6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6CD6:
    /* 00006cd6   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006cd6u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6CD8:
    /* 00006cd8   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00006cd8u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6CDC:
    /* 00006cdc   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006cdcu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6CE0:
    /* 00006ce0   4  pea (0000000a).l */
    c->pc = RC_ADDR(0x00006ce0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000au);

L_6CE4:
    /* 00006ce4   4  pea (000000c8).l */
    c->pc = RC_ADDR(0x00006ce4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x000000c8u);

L_6CE8:
    /* 00006ce8   4  pea (00000026).l */
    c->pc = RC_ADDR(0x00006ce8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000026u);

L_6CEC:
    /* 00006cec   4  pea (00000077).l */
    c->pc = RC_ADDR(0x00006cecu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000077u);

L_6CF0:
    /* 00006cf0   4  pea (00000026).l */
    c->pc = RC_ADDR(0x00006cf0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000026u);

L_6CF4:
    /* 00006cf4   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006cf4u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6CF6:
    /* 00006cf6   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00006cf6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6CFA:
    /* 00006cfa   4  jsr (00006634) */
    c->pc = RC_ADDR(0x00006cfau);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006cfeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006634u);
    return;

L_6CFE:
    /* 00006cfe   4  lea (20,A7),A7 */
    c->pc = RC_ADDR(0x00006cfeu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x20u);

L_6D02:
    /* 00006d02   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006d02u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6D04:
    /* 00006d04   4  move.l (fffffffc,A5),-(A7) */
    c->pc = RC_ADDR(0x00006d04u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x4u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D08:
    /* 00006d08   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00006d08u);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6D0C:
    /* 00006d0c   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00006d0cu);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006d10u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6D10:
    /* 00006d10   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006d10u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6D12:
    /* 00006d12   6  move.w #1,(ffffffd6,A5) */
    c->pc = RC_ADDR(0x00006d12u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6D18:
    /* 00006d18   4  clr.w (ffffffd2,A5) */
    c->pc = RC_ADDR(0x00006d18u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2eu), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6D1C:
    /* 00006d1c   4  move.w (ffffffee,A5),-(A7) */
    c->pc = RC_ADDR(0x00006d1cu);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6D20:
    /* 00006d20   4  jsr (00006af0) */
    c->pc = RC_ADDR(0x00006d20u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006d24u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006af0u);
    return;

L_6D24:
    /* 00006d24   2  addq.w #2,A7 */
    c->pc = RC_ADDR(0x00006d24u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000002u, RC_W);

L_6D26:
    /* 00006d26   4  move.l D0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006d26u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D2A:
    /* 00006d2a   4  tst.w (ffff8466,A4) */
    c->pc = RC_ADDR(0x00006d2au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7b9au));
    rc_set_nzvc(c, t0, RC_W);

L_6D2E:
    /* 00006d2e   4  beq 00006dc2 */
    c->pc = RC_ADDR(0x00006d2eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6DC2;

L_6D32:
    /* 00006d32   4  tst.l (ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006d32u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_set_nzvc(c, t0, RC_L);

L_6D36:
    /* 00006d36   4  bne 00006dc2 */
    c->pc = RC_ADDR(0x00006d36u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6DC2;

L_6D3A:
    /* 00006d3a   4  move.w (ffff83e2,A4),D0 */
    c->pc = RC_ADDR(0x00006d3au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1eu));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6D3E:
    /* 00006d3e   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006d3eu);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6D40:
    /* 00006d40   2  bra 00006da4 */
    c->pc = RC_ADDR(0x00006d40u);
    rc_step(c, m, 10);
    goto L_6DA4;

L_6D42:
    /* 00006d42   4  lea (000070c1),A0 */
    c->pc = RC_ADDR(0x00006d42u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x000070c1u);

L_6D46:
    /* 00006d46   4  move.l A0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006d46u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D4A:
    /* 00006d4a   2  bra 00006db8 */
    c->pc = RC_ADDR(0x00006d4au);
    rc_step(c, m, 10);
    goto L_6DB8;

L_6D4C:
    /* 00006d4c   4  lea (0000712e),A0 */
    c->pc = RC_ADDR(0x00006d4cu);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0000712eu);

L_6D50:
    /* 00006d50   4  move.l A0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006d50u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D54:
    /* 00006d54   2  bra 00006db8 */
    c->pc = RC_ADDR(0x00006d54u);
    rc_step(c, m, 10);
    goto L_6DB8;

L_6D56:
    /* 00006d56   4  lea (0000719d),A0 */
    c->pc = RC_ADDR(0x00006d56u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0000719du);

L_6D5A:
    /* 00006d5a   4  move.l A0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006d5au);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D5E:
    /* 00006d5e   2  bra 00006db8 */
    c->pc = RC_ADDR(0x00006d5eu);
    rc_step(c, m, 10);
    goto L_6DB8;

L_6D60:
    /* 00006d60   4  lea (00007204),A0 */
    c->pc = RC_ADDR(0x00006d60u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00007204u);

L_6D64:
    /* 00006d64   4  move.l A0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006d64u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D68:
    /* 00006d68   2  bra 00006db8 */
    c->pc = RC_ADDR(0x00006d68u);
    rc_step(c, m, 10);
    goto L_6DB8;

L_6D6A:
    /* 00006d6a   4  lea (000072a7),A0 */
    c->pc = RC_ADDR(0x00006d6au);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x000072a7u);

L_6D6E:
    /* 00006d6e   4  move.l A0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006d6eu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D72:
    /* 00006d72   2  bra 00006db8 */
    c->pc = RC_ADDR(0x00006d72u);
    rc_step(c, m, 10);
    goto L_6DB8;

L_6D74:
    /* 00006d74   4  lea (000072df),A0 */
    c->pc = RC_ADDR(0x00006d74u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x000072dfu);

L_6D78:
    /* 00006d78   4  move.l A0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006d78u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D7C:
    /* 00006d7c   2  bra 00006db8 */
    c->pc = RC_ADDR(0x00006d7cu);
    rc_step(c, m, 10);
    goto L_6DB8;

L_6D7E:
    /* 00006d7e   4  lea (00007372),A0 */
    c->pc = RC_ADDR(0x00006d7eu);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00007372u);

L_6D82:
    /* 00006d82   4  move.l A0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006d82u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D86:
    /* 00006d86   2  bra 00006db8 */
    c->pc = RC_ADDR(0x00006d86u);
    rc_step(c, m, 10);
    goto L_6DB8;

L_6D88:
    /* 00006d88   4  lea (000074e4),A0 */
    c->pc = RC_ADDR(0x00006d88u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x000074e4u);

L_6D8C:
    /* 00006d8c   4  move.l A0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006d8cu);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6D90:
    /* 00006d90   2  bra 00006db8 */
    c->pc = RC_ADDR(0x00006d90u);
    rc_step(c, m, 10);
    goto L_6DB8;

L_6D92:
    /* 00006d92   2  bra 00006db8 */
    c->pc = RC_ADDR(0x00006d92u);
    rc_step(c, m, 10);
    goto L_6DB8;

L_6DA4:
    /* 00006da4   2  subq.l #5,D0 */
    c->pc = RC_ADDR(0x00006da4u);
    rc_step(c, m, 8);
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 - 0x00000005u;
    rc_flags_sub(c, RC_L, t1, 0x00000005u, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_6DA6:
    /* 00006da6   6  cmp.l #8,D0 */
    c->pc = RC_ADDR(0x00006da6u);
    rc_step(c, m, 14);
    t0 = 0x00000008u;
    t1 = rc_d_get(c, 0, RC_L);
    rc_cmp(c, RC_L, t1, t0);

L_6DAC:
    /* 00006dac   2  bcc 00006d92 */
    c->pc = RC_ADDR(0x00006dacu);
    rc_step(c, m, 10);
    if (rc_cond(c, 4)) { rc_tick(); goto L_6D92; }

L_6DAE:
    /* 00006dae   2  asl.l #1,D0 */
    c->pc = RC_ADDR(0x00006daeu);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000001u, rc_d_get(c, 0, RC_L), RC_L));

L_6DB0:
    /* 00006db0   4  move.w (00006d94),D0 */
    c->pc = RC_ADDR(0x00006db0u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd16(c, m, (RC_ADDR(0x00006d94u) + t4));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6DB4:
    /* 00006db4   4  jmp (00006db6) */
    c->pc = RC_ADDR(0x00006db4u);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t3 = (RC_ADDR(0x00006db6u) + t4);
    c->pc = t3;
    return;

L_6DB8:
    /* 00006db8   4  clr.w (ffff8466,A4) */
    c->pc = RC_ADDR(0x00006db8u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[4] - 0x7b9au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6DBC:
    /* 00006dbc   6  move.w #1,(ffffffd2,A5) */
    c->pc = RC_ADDR(0x00006dbcu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2eu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6DC2:
    /* 00006dc2   4  move.w (ffffffee,A5),D0 */
    c->pc = RC_ADDR(0x00006dc2u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x12u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6DC6:
    /* 00006dc6   4  lea (ffff8419,A4),A0 */
    c->pc = RC_ADDR(0x00006dc6u);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7be7u);

L_6DCA:
    /* 00006dca   4  move.b (0,A0,D0.w),D1 */
    c->pc = RC_ADDR(0x00006dcau);
    rc_step(c, m, 14);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_d_set(c, 1, RC_B, t0);
    rc_set_nzvc(c, t0, RC_B);

L_6DCE:
    /* 00006dce   2  ext.w D1 */
    c->pc = RC_ADDR(0x00006dceu);
    rc_step(c, m, 4);
    rc_ext_w(c, 1);

L_6DD0:
    /* 00006dd0   4  cmp.w (fffff78c,A4),D1 */
    c->pc = RC_ADDR(0x00006dd0u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[4] - 0x874u));
    t1 = rc_d_get(c, 1, RC_W);
    rc_cmp(c, RC_W, t1, t0);

L_6DD4:
    /* 00006dd4   2  bne 00006dea */
    c->pc = RC_ADDR(0x00006dd4u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6DEA;

L_6DD6:
    /* 00006dd6   4  lea (00007509),A0 */
    c->pc = RC_ADDR(0x00006dd6u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00007509u);

L_6DDA:
    /* 00006dda   4  move.l A0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006ddau);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6DDE:
    /* 00006dde   4  tst.w (ffffffd2,A5) */
    c->pc = RC_ADDR(0x00006ddeu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2eu));
    rc_set_nzvc(c, t0, RC_W);

L_6DE2:
    /* 00006de2   2  beq 00006dea */
    c->pc = RC_ADDR(0x00006de2u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6DEA;

L_6DE4:
    /* 00006de4   6  move.w #1,(ffff8466,A4) */
    c->pc = RC_ADDR(0x00006de4u);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7b9au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6DEA:
    /* 00006dea   4  tst.l (ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006deau);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_set_nzvc(c, t0, RC_L);

L_6DEE:
    /* 00006dee   2  bne 00006df8 */
    c->pc = RC_ADDR(0x00006deeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6DF8;

L_6DF0:
    /* 00006df0   4  lea (00007534),A0 */
    c->pc = RC_ADDR(0x00006df0u);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x00007534u);

L_6DF4:
    /* 00006df4   4  move.l A0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006df4u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6DF8:
    /* 00006df8   6  cmpi.w #7,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x00006df8u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_6DFE:
    /* 00006dfe   2  blt 00006e0e */
    c->pc = RC_ADDR(0x00006dfeu);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) goto L_6E0E;

L_6E00:
    /* 00006e00   6  cmpi.w #16,(ffff83e6,A4) */
    c->pc = RC_ADDR(0x00006e00u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[4] - 0x7c1au));
    rc_cmp(c, RC_W, t0, 0x00000016u);

L_6E06:
    /* 00006e06   2  bgt 00006e0e */
    c->pc = RC_ADDR(0x00006e06u);
    rc_step(c, m, 10);
    if (rc_cond(c, 14)) goto L_6E0E;

L_6E08:
    /* 00006e08   4  tst.l (ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006e08u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_set_nzvc(c, t0, RC_L);

L_6E0C:
    /* 00006e0c   2  bne 00006e22 */
    c->pc = RC_ADDR(0x00006e0cu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6E22;

L_6E0E:
    /* 00006e0e   4  lea (0000757a),A0 */
    c->pc = RC_ADDR(0x00006e0eu);
    rc_step(c, m, 8);
    c->a[0] = RC_ADDR(0x0000757au);

L_6E12:
    /* 00006e12   4  move.l A0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006e12u);
    rc_step(c, m, 16);
    t0 = rc_a_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6E16:
    /* 00006e16   4  tst.w (ffffffd2,A5) */
    c->pc = RC_ADDR(0x00006e16u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2eu));
    rc_set_nzvc(c, t0, RC_W);

L_6E1A:
    /* 00006e1a   2  beq 00006e22 */
    c->pc = RC_ADDR(0x00006e1au);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6E22;

L_6E1C:
    /* 00006e1c   6  move.w #1,(ffff8466,A4) */
    c->pc = RC_ADDR(0x00006e1cu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[4] - 0x7b9au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E22:
    /* 00006e22   4  tst.l (ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006e22u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_set_nzvc(c, t0, RC_L);

L_6E26:
    /* 00006e26   4  beq 00007064 */
    c->pc = RC_ADDR(0x00006e26u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_7064;

L_6E2A:
    /* 00006e2a   4  move.l (ffffffe2,A5),-(A7) */
    c->pc = RC_ADDR(0x00006e2au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6E2E:
    /* 00006e2e   4  jsr (00006952) */
    c->pc = RC_ADDR(0x00006e2eu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006e32u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006952u);
    return;

L_6E32:
    /* 00006e32   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006e32u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6E34:
    /* 00006e34   4  move.w D0,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x00006e34u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 0, RC_W);
    rc_wr16(c, m, (c->a[5] - 0x1au), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E38:
    /* 00006e38   6  cmpi.w #ffff,(ffffffe6,A5) */
    c->pc = RC_ADDR(0x00006e38u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_6E3E:
    /* 00006e3e   4  ble 00007044 */
    c->pc = RC_ADDR(0x00006e3eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_7044;

L_6E42:
    /* 00006e42   4  move.w (ffffffe6,A5),D0 */
    c->pc = RC_ADDR(0x00006e42u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x1au));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E46:
    /* 00006e46   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006e46u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6E48:
    /* 00006e48   4  add.l D0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006e48u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x1eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_6E4C:
    /* 00006e4c   4  clr.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x00006e4cu);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6E50:
    /* 00006e50   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x00006e50u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E54:
    /* 00006e54   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00006e54u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_6E58:
    /* 00006e58   6  cmpi.b #3a,(0,A0,D0.w) */
    c->pc = RC_ADDR(0x00006e58u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_cmp(c, RC_B, t0, 0x0000003au);

L_6E5E:
    /* 00006e5e   2  bne 00006ea0 */
    c->pc = RC_ADDR(0x00006e5eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6EA0;

L_6E60:
    /* 00006e60   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x00006e60u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E64:
    /* 00006e64   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006e64u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6E66:
    /* 00006e66   4  add.l (ffffffe2,A5),D0 */
    c->pc = RC_ADDR(0x00006e66u);
    rc_step(c, m, 18);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    t1 = rc_d_get(c, 0, RC_L);
    t2 = t1 + t0;
    rc_flags_add(c, RC_L, t1, t0, t2, 0);
    rc_d_set(c, 0, RC_L, t2);

L_6E6A:
    /* 00006e6a   4  move.l D0,(ffffffda,A5) */
    c->pc = RC_ADDR(0x00006e6au);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x26u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6E6E:
    /* 00006e6e   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x00006e6eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E72:
    /* 00006e72   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00006e72u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_6E76:
    /* 00006e76   6  move.b (0,A0,D0.w),(ffffffd9,A5) */
    c->pc = RC_ADDR(0x00006e76u);
    rc_step(c, m, 22);
    t4 = rc_ext(c->d[0], RC_W);
    t0 = rc_rd8(c, m, (c->a[0] + 0x0u + t4));
    rc_wr8(c, m, (c->a[5] - 0x27u), t0);
    rc_set_nzvc(c, t0, RC_B);

L_6E7C:
    /* 00006e7c   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x00006e7cu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E80:
    /* 00006e80   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00006e80u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_6E84:
    /* 00006e84   4  clr.b (0,A0,D0.w) */
    c->pc = RC_ADDR(0x00006e84u);
    rc_step(c, m, 18);
    t4 = rc_ext(c->d[0], RC_W);
    rc_wr8(c, m, (c->a[0] + 0x0u + t4), 0u);
    rc_set_nzvc(c, 0u, RC_B);

L_6E88:
    /* 00006e88   6  move.l (ffffffe2,A5),(ffffffde,A5) */
    c->pc = RC_ADDR(0x00006e88u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    rc_wr32(c, m, (c->a[5] - 0x22u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6E8E:
    /* 00006e8e   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x00006e8eu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6E92:
    /* 00006e92   2  addq.w #1,D0 */
    c->pc = RC_ADDR(0x00006e92u);
    rc_step(c, m, 4);
    t1 = rc_d_get(c, 0, RC_W);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_d_set(c, 0, RC_W, t2);

L_6E94:
    /* 00006e94   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006e94u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6E96:
    /* 00006e96   4  add.l D0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x00006e96u);
    rc_step(c, m, 24);
    t3 = (c->a[5] - 0x1eu);
    t1 = rc_rd32(c, m, t3);
    t2 = t1 + rc_d_get(c, 0, RC_L);
    rc_flags_add(c, RC_L, t1, rc_d_get(c, 0, RC_L), t2, 0);
    rc_wr32(c, m, t3, t2);

L_6E9A:
    /* 00006e9a   6  move.w #4,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00006e9au);
    rc_step(c, m, 16);
    t0 = 0x00000004u;
    rc_wr16(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6EA0:
    /* 00006ea0   4  addq.w #1,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00006ea0u);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6EA4:
    /* 00006ea4   6  cmpi.w #4,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00006ea4u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x00000004u);

L_6EAA:
    /* 00006eaa   2  blt 00006e50 */
    c->pc = RC_ADDR(0x00006eaau);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_6E50; }

L_6EAC:
    /* 00006eac   4  pea (000075ac) */
    c->pc = RC_ADDR(0x00006eacu);
    rc_step(c, m, 16);
    rc_push32(c, m, RC_ADDR(0x000075acu));

L_6EB0:
    /* 00006eb0   4  move.l (ffffffde,A5),-(A7) */
    c->pc = RC_ADDR(0x00006eb0u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6EB4:
    /* 00006eb4   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x00006eb4u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x00006eb8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_6EB8:
    /* 00006eb8   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006eb8u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6EBA:
    /* 00006eba   2  tst.w D0 */
    c->pc = RC_ADDR(0x00006ebau);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6EBC:
    /* 00006ebc   2  bne 00006ec4 */
    c->pc = RC_ADDR(0x00006ebcu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6EC4;

L_6EBE:
    /* 00006ebe   6  move.w #1,(ffffffd4,A5) */
    c->pc = RC_ADDR(0x00006ebeu);
    rc_step(c, m, 16);
    t0 = 0x00000001u;
    rc_wr16(c, m, (c->a[5] - 0x2cu), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6EC4:
    /* 00006ec4   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00006ec4u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6ECA:
    /* 00006eca   4  tst.w (ffffffd4,A5) */
    c->pc = RC_ADDR(0x00006ecau);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2cu));
    rc_set_nzvc(c, t0, RC_W);

L_6ECE:
    /* 00006ece   2  beq 00006f00 */
    c->pc = RC_ADDR(0x00006eceu);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6F00;

L_6ED0:
    /* 00006ed0   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x00006ed0u);
    rc_step(c, m, 12);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6ED4:
    /* 00006ed4   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006ed4u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6ED8:
    /* 00006ed8   4  pea (0000000a).l */
    c->pc = RC_ADDR(0x00006ed8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000au);

L_6EDC:
    /* 00006edc   4  pea (ffffffba).l */
    c->pc = RC_ADDR(0x00006edcu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffbau);

L_6EE0:
    /* 00006ee0   4  pea (00000014).l */
    c->pc = RC_ADDR(0x00006ee0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000014u);

L_6EE4:
    /* 00006ee4   4  pea (0000001e).l */
    c->pc = RC_ADDR(0x00006ee4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000001eu);

L_6EE8:
    /* 00006ee8   4  pea (00000014).l */
    c->pc = RC_ADDR(0x00006ee8u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000014u);

L_6EEC:
    /* 00006eec   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006eecu);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6EEE:
    /* 00006eee   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00006eeeu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6EF2:
    /* 00006ef2   4  jsr (00006634) */
    c->pc = RC_ADDR(0x00006ef2u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006ef6u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006634u);
    return;

L_6EF6:
    /* 00006ef6   4  lea (20,A7),A7 */
    c->pc = RC_ADDR(0x00006ef6u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x20u);

L_6EFA:
    /* 00006efa   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00006efau);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F00:
    /* 00006f00   4  tst.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x00006f00u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_6F04:
    /* 00006f04   2  beq 00006f1a */
    c->pc = RC_ADDR(0x00006f04u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6F1A;

L_6F06:
    /* 00006f06   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006f06u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6F08:
    /* 00006f08   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00006f08u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F0C:
    /* 00006f0c   4  move.w #2,-(A7) */
    c->pc = RC_ADDR(0x00006f0cu);
    rc_step(c, m, 12);
    t0 = 0x00000002u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6F10:
    /* 00006f10   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00006f10u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006f14u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6F14:
    /* 00006f14   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006f14u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6F16:
    /* 00006f16   4  clr.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x00006f16u);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0xcu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_6F1A:
    /* 00006f1a   6  move.w #ffff,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00006f1au);
    rc_step(c, m, 16);
    t0 = 0x0000ffffu;
    rc_wr16(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6F20:
    /* 00006f20   4  clr.w (ffffffea,A5) */
    c->pc = RC_ADDR(0x00006f20u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x16u), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6F24:
    /* 00006f24   4  move.w (ffffffea,A5),D0 */
    c->pc = RC_ADDR(0x00006f24u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6F28:
    /* 00006f28   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006f28u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6F2A:
    /* 00006f2a   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00006f2au);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_6F2C:
    /* 00006f2c   4  lea (ffff8ba8,A4),A0 */
    c->pc = RC_ADDR(0x00006f2cu);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7458u);

L_6F30:
    /* 00006f30   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00006f30u);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F34:
    /* 00006f34   4  move.l (ffffffde,A5),-(A7) */
    c->pc = RC_ADDR(0x00006f34u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x22u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F38:
    /* 00006f38   4  jsr (ffff82de,A4) */
    c->pc = RC_ADDR(0x00006f38u);
    rc_step(c, m, 18);
    /* vector 122 */
    rc_push32(c, m, RC_ADDR(0x00006f3cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023dd4u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0002298au);
    return;

L_6F3C:
    /* 00006f3c   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006f3cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6F3E:
    /* 00006f3e   2  tst.w D0 */
    c->pc = RC_ADDR(0x00006f3eu);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    rc_set_nzvc(c, t0, RC_W);

L_6F40:
    /* 00006f40   2  bne 00006f4e */
    c->pc = RC_ADDR(0x00006f40u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_6F4E;

L_6F42:
    /* 00006f42   6  move.w (ffffffea,A5),(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00006f42u);
    rc_step(c, m, 20);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_wr16(c, m, (c->a[5] - 0x18u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6F48:
    /* 00006f48   6  move.w #7,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00006f48u);
    rc_step(c, m, 16);
    t0 = 0x00000007u;
    rc_wr16(c, m, (c->a[5] - 0x16u), t0);
    rc_set_nzvc(c, t0, RC_W);

L_6F4E:
    /* 00006f4e   4  addq.w #1,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00006f4eu);
    rc_step(c, m, 16);
    t3 = (c->a[5] - 0x16u);
    t1 = rc_rd16(c, m, t3);
    t2 = t1 + 0x00000001u;
    rc_flags_add(c, RC_W, t1, 0x00000001u, t2, 0);
    rc_wr16(c, m, t3, t2);

L_6F52:
    /* 00006f52   6  cmpi.w #7,(ffffffea,A5) */
    c->pc = RC_ADDR(0x00006f52u);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x16u));
    rc_cmp(c, RC_W, t0, 0x00000007u);

L_6F58:
    /* 00006f58   2  blt 00006f24 */
    c->pc = RC_ADDR(0x00006f58u);
    rc_step(c, m, 10);
    if (rc_cond(c, 13)) { rc_tick(); goto L_6F24; }

L_6F5A:
    /* 00006f5a   6  cmpi.w #ffff,(ffffffe8,A5) */
    c->pc = RC_ADDR(0x00006f5au);
    rc_step(c, m, 16);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_cmp(c, RC_W, t0, 0x0000ffffu);

L_6F60:
    /* 00006f60   2  ble 00006fdc */
    c->pc = RC_ADDR(0x00006f60u);
    rc_step(c, m, 10);
    if (rc_cond(c, 15)) goto L_6FDC;

L_6F62:
    /* 00006f62   4  move.w (ffffffe8,A5),D0 */
    c->pc = RC_ADDR(0x00006f62u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x18u));
    rc_d_set(c, 0, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_6F66:
    /* 00006f66   2  ext.l D0 */
    c->pc = RC_ADDR(0x00006f66u);
    rc_step(c, m, 4);
    rc_ext_l(c, 0);

L_6F68:
    /* 00006f68   2  asl.l #2,D0 */
    c->pc = RC_ADDR(0x00006f68u);
    rc_step(c, m, 8);
    rc_d_set(c, 0, RC_L, rc_shift(c, 0, 1, 0x00000002u, rc_d_get(c, 0, RC_L), RC_L));

L_6F6A:
    /* 00006f6a   4  lea (ffff8b8c,A4),A0 */
    c->pc = RC_ADDR(0x00006f6au);
    rc_step(c, m, 8);
    c->a[0] = (c->a[4] - 0x7474u);

L_6F6E:
    /* 00006f6e   4  move.l (0,A0,D0.w),-(A7) */
    c->pc = RC_ADDR(0x00006f6eu);
    rc_step(c, m, 26);
    t4 = c->d[0];
    t0 = rc_rd32(c, m, (c->a[0] + 0x0u + t4));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F72:
    /* 00006f72   4  jsr (000038ac) */
    c->pc = RC_ADDR(0x00006f72u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006f76u));
    rc_depth++;
    c->pc = RC_ADDR(0x000038acu);
    return;

L_6F76:
    /* 00006f76   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006f76u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6F78:
    /* 00006f78   4  move.l D0,(fffffff4,A5) */
    c->pc = RC_ADDR(0x00006f78u);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0xcu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F7C:
    /* 00006f7c   4  tst.l (fffffff4,A5) */
    c->pc = RC_ADDR(0x00006f7cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    rc_set_nzvc(c, t0, RC_L);

L_6F80:
    /* 00006f80   2  beq 00006fdc */
    c->pc = RC_ADDR(0x00006f80u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6FDC;

L_6F82:
    /* 00006f82   4  tst.w (ffffffd6,A5) */
    c->pc = RC_ADDR(0x00006f82u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2au));
    rc_set_nzvc(c, t0, RC_W);

L_6F86:
    /* 00006f86   2  beq 00006fb8 */
    c->pc = RC_ADDR(0x00006f86u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6FB8;

L_6F88:
    /* 00006f88   4  clr.w (ffffffd6,A5) */
    c->pc = RC_ADDR(0x00006f88u);
    rc_step(c, m, 16);
    rc_wr16(c, m, (c->a[5] - 0x2au), 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6F8C:
    /* 00006f8c   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00006f8cu);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6F90:
    /* 00006f90   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006f90u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6F94:
    /* 00006f94   4  pea (0000000a).l */
    c->pc = RC_ADDR(0x00006f94u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000au);

L_6F98:
    /* 00006f98   4  pea (0000001e).l */
    c->pc = RC_ADDR(0x00006f98u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000001eu);

L_6F9C:
    /* 00006f9c   4  pea (00000014).l */
    c->pc = RC_ADDR(0x00006f9cu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000014u);

L_6FA0:
    /* 00006fa0   4  pea (ffffffba).l */
    c->pc = RC_ADDR(0x00006fa0u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffbau);

L_6FA4:
    /* 00006fa4   4  pea (00000014).l */
    c->pc = RC_ADDR(0x00006fa4u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000014u);

L_6FA8:
    /* 00006fa8   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006fa8u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6FAA:
    /* 00006faa   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00006faau);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6FAE:
    /* 00006fae   4  jsr (00006634) */
    c->pc = RC_ADDR(0x00006faeu);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006fb2u));
    rc_depth++;
    c->pc = RC_ADDR(0x00006634u);
    return;

L_6FB2:
    /* 00006fb2   4  lea (20,A7),A7 */
    c->pc = RC_ADDR(0x00006fb2u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x20u);

L_6FB6:
    /* 00006fb6   2  bra 00006fdc */
    c->pc = RC_ADDR(0x00006fb6u);
    rc_step(c, m, 10);
    goto L_6FDC;

L_6FB8:
    /* 00006fb8   6  pea (000a0000).l */
    c->pc = RC_ADDR(0x00006fb8u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x000a0000u);

L_6FBE:
    /* 00006fbe   6  pea (001e0000).l */
    c->pc = RC_ADDR(0x00006fbeu);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x001e0000u);

L_6FC4:
    /* 00006fc4   6  pea (00140000).l */
    c->pc = RC_ADDR(0x00006fc4u);
    rc_step(c, m, 20);
    rc_push32(c, m, 0x00140000u);

L_6FCA:
    /* 00006fca   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00006fcau);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_6FCC:
    /* 00006fcc   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00006fccu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6FD0:
    /* 00006fd0   4  move.w #1,-(A7) */
    c->pc = RC_ADDR(0x00006fd0u);
    rc_step(c, m, 12);
    t0 = 0x00000001u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_6FD4:
    /* 00006fd4   4  jsr (ffff828a,A4) */
    c->pc = RC_ADDR(0x00006fd4u);
    rc_step(c, m, 18);
    /* vector 108 */
    rc_push32(c, m, RC_ADDR(0x00006fd8u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023d80u);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x00021350u);
    return;

L_6FD8:
    /* 00006fd8   4  lea (14,A7),A7 */
    c->pc = RC_ADDR(0x00006fd8u);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x14u);

L_6FDC:
    /* 00006fdc   4  tst.w (ffffffd4,A5) */
    c->pc = RC_ADDR(0x00006fdcu);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2cu));
    rc_set_nzvc(c, t0, RC_W);

L_6FE0:
    /* 00006fe0   2  beq 00006ff2 */
    c->pc = RC_ADDR(0x00006fe0u);
    rc_step(c, m, 10);
    if (rc_cond(c, 7)) goto L_6FF2;

L_6FE2:
    /* 00006fe2   4  move.l (ffffffe2,A5),-(A7) */
    c->pc = RC_ADDR(0x00006fe2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6FE6:
    /* 00006fe6   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00006fe6u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6FEA:
    /* 00006fea   4  jsr (ffff8038,A4) */
    c->pc = RC_ADDR(0x00006feau);
    rc_step(c, m, 18);
    /* vector 9 */
    rc_push32(c, m, RC_ADDR(0x00006feeu));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b2eu);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x000024acu);
    return;

L_6FEE:
    /* 00006fee   2  addq.w #8,A7 */
    c->pc = RC_ADDR(0x00006feeu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000008u, RC_W);

L_6FF0:
    /* 00006ff0   2  bra 0000703c */
    c->pc = RC_ADDR(0x00006ff0u);
    rc_step(c, m, 10);
    goto L_703C;

L_6FF2:
    /* 00006ff2   4  move.l (ffffffe2,A5),-(A7) */
    c->pc = RC_ADDR(0x00006ff2u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_6FF6:
    /* 00006ff6   4  jsr (00005596) */
    c->pc = RC_ADDR(0x00006ff6u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00006ffau));
    rc_depth++;
    c->pc = RC_ADDR(0x00005596u);
    return;

L_6FFA:
    /* 00006ffa   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00006ffau);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_6FFC:
    /* 00006ffc   4  move.w #c5,D1 */
    c->pc = RC_ADDR(0x00006ffcu);
    rc_step(c, m, 8);
    t0 = 0x000000c5u;
    rc_d_set(c, 1, RC_W, t0);
    rc_set_nzvc(c, t0, RC_W);

L_7000:
    /* 00007000   2  sub.w D0,D1 */
    c->pc = RC_ADDR(0x00007000u);
    rc_step(c, m, 4);
    t0 = rc_d_get(c, 0, RC_W);
    t1 = rc_d_get(c, 1, RC_W);
    t2 = t1 - t0;
    rc_flags_sub(c, RC_W, t1, t0, t2, 0);
    rc_d_set(c, 1, RC_W, t2);

L_7002:
    /* 00007002   4  move.w D1,(ffffd346,A4) */
    c->pc = RC_ADDR(0x00007002u);
    rc_step(c, m, 12);
    t0 = rc_d_get(c, 1, RC_W);
    rc_wr16(c, m, (c->a[4] - 0x2cbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_7006:
    /* 00007006   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x00007006u);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_700A:
    /* 0000700a   4  move.l (ffffffe2,A5),-(A7) */
    c->pc = RC_ADDR(0x0000700au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_700E:
    /* 0000700e   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x0000700eu);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x00007012u));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_7012:
    /* 00007012   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x00007012u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_7014:
    /* 00007014   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x00007014u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7018:
    /* 00007018   4  jsr (00006612) */
    c->pc = RC_ADDR(0x00007018u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000701cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006612u);
    return;

L_701C:
    /* 0000701c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000701cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_701E:
    /* 0000701e   4  move.w #8,-(A7) */
    c->pc = RC_ADDR(0x0000701eu);
    rc_step(c, m, 12);
    t0 = 0x00000008u;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_7022:
    /* 00007022   4  move.l (ffffffe2,A5),-(A7) */
    c->pc = RC_ADDR(0x00007022u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7026:
    /* 00007026   4  jsr (ffff8074,A4) */
    c->pc = RC_ADDR(0x00007026u);
    rc_step(c, m, 18);
    /* vector 19 */
    rc_push32(c, m, RC_ADDR(0x0000702au));
    rc_depth++;
    c->pc = RC_ADDR(0x00023b6au);
    rc_step(c, m, 12);
    c->pc = RC_ADDR(0x0000564cu);
    return;

L_702A:
    /* 0000702a   2  addq.w #6,A7 */
    c->pc = RC_ADDR(0x0000702au);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000006u, RC_W);

L_702C:
    /* 0000702c   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000702cu);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7030:
    /* 00007030   4  jsr (0000371e) */
    c->pc = RC_ADDR(0x00007030u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x00007034u));
    rc_depth++;
    c->pc = RC_ADDR(0x0000371eu);
    return;

L_7034:
    /* 00007034   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x00007034u);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_7036:
    /* 00007036   6  move.w #c8,(ffffd346,A4) */
    c->pc = RC_ADDR(0x00007036u);
    rc_step(c, m, 16);
    t0 = 0x000000c8u;
    rc_wr16(c, m, (c->a[4] - 0x2cbau), t0);
    rc_set_nzvc(c, t0, RC_W);

L_703C:
    /* 0000703c   4  movea.l (ffffffda,A5),A0 */
    c->pc = RC_ADDR(0x0000703cu);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x26u));
    c->a[0] = t0;

L_7040:
    /* 00007040   4  move.b (ffffffd9,A5),(A0) */
    c->pc = RC_ADDR(0x00007040u);
    rc_step(c, m, 16);
    t0 = rc_rd8(c, m, (c->a[5] - 0x27u));
    rc_wr8(c, m, c->a[0], t0);
    rc_set_nzvc(c, t0, RC_B);

L_7044:
    /* 00007044   4  move.l (ffffffe2,A5),-(A7) */
    c->pc = RC_ADDR(0x00007044u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7048:
    /* 00007048   4  jsr (0000690c) */
    c->pc = RC_ADDR(0x00007048u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000704cu));
    rc_depth++;
    c->pc = RC_ADDR(0x0000690cu);
    return;

L_704C:
    /* 0000704c   2  addq.w #4,A7 */
    c->pc = RC_ADDR(0x0000704cu);
    rc_step(c, m, 4);
    c->a[7] += rc_ext(0x00000004u, RC_W);

L_704E:
    /* 0000704e   4  move.l D0,(ffffffe2,A5) */
    c->pc = RC_ADDR(0x0000704eu);
    rc_step(c, m, 16);
    t0 = rc_d_get(c, 0, RC_L);
    rc_wr32(c, m, (c->a[5] - 0x1eu), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7052:
    /* 00007052   4  movea.l (ffffffe2,A5),A0 */
    c->pc = RC_ADDR(0x00007052u);
    rc_step(c, m, 16);
    t0 = rc_rd32(c, m, (c->a[5] - 0x1eu));
    c->a[0] = t0;

L_7056:
    /* 00007056   4  cmpi.b #40,(A0) */
    c->pc = RC_ADDR(0x00007056u);
    rc_step(c, m, 12);
    t0 = rc_rd8(c, m, c->a[0]);
    rc_cmp(c, RC_B, t0, 0x00000040u);

L_705A:
    /* 0000705a   2  bne 00007060 */
    c->pc = RC_ADDR(0x0000705au);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_7060;

L_705C:
    /* 0000705c   4  clr.l (ffffffe2,A5) */
    c->pc = RC_ADDR(0x0000705cu);
    rc_step(c, m, 24);
    rc_wr32(c, m, (c->a[5] - 0x1eu), 0u);
    rc_set_nzvc(c, 0u, RC_L);

L_7060:
    /* 00007060   4  bra 00006e22 */
    c->pc = RC_ADDR(0x00007060u);
    rc_step(c, m, 10);
    rc_tick();
    goto L_6E22;

L_7064:
    /* 00007064   4  tst.w (ffffffd6,A5) */
    c->pc = RC_ADDR(0x00007064u);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2au));
    rc_set_nzvc(c, t0, RC_W);

L_7068:
    /* 00007068   2  bne 000070a0 */
    c->pc = RC_ADDR(0x00007068u);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_70A0;

L_706A:
    /* 0000706a   4  tst.w (ffffffd4,A5) */
    c->pc = RC_ADDR(0x0000706au);
    rc_step(c, m, 12);
    t0 = rc_rd16(c, m, (c->a[5] - 0x2cu));
    rc_set_nzvc(c, t0, RC_W);

L_706E:
    /* 0000706e   2  bne 000070a0 */
    c->pc = RC_ADDR(0x0000706eu);
    rc_step(c, m, 10);
    if (rc_cond(c, 6)) goto L_70A0;

L_7070:
    /* 00007070   6  move.l (8,A5),(838,A4) */
    c->pc = RC_ADDR(0x00007070u);
    rc_step(c, m, 28);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    rc_wr32(c, m, (c->a[4] + 0x838u), t0);
    rc_set_nzvc(c, t0, RC_L);

L_7076:
    /* 00007076   4  move.w #ffff,-(A7) */
    c->pc = RC_ADDR(0x00007076u);
    rc_step(c, m, 12);
    t0 = 0x0000ffffu;
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_W);

L_707A:
    /* 0000707a   4  move.l (8,A5),-(A7) */
    c->pc = RC_ADDR(0x0000707au);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] + 0x8u));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_707E:
    /* 0000707e   4  pea (0000000a).l */
    c->pc = RC_ADDR(0x0000707eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000000au);

L_7082:
    /* 00007082   4  pea (ffffffba).l */
    c->pc = RC_ADDR(0x00007082u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0xffffffbau);

L_7086:
    /* 00007086   4  pea (00000014).l */
    c->pc = RC_ADDR(0x00007086u);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000014u);

L_708A:
    /* 0000708a   4  pea (0000001e).l */
    c->pc = RC_ADDR(0x0000708au);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x0000001eu);

L_708E:
    /* 0000708e   4  pea (00000014).l */
    c->pc = RC_ADDR(0x0000708eu);
    rc_step(c, m, 16);
    rc_push32(c, m, 0x00000014u);

L_7092:
    /* 00007092   2  clr.w -(A7) */
    c->pc = RC_ADDR(0x00007092u);
    rc_step(c, m, 14);
    c->a[7] -= 2u;
    rc_wr16(c, m, c->a[7], 0u);
    rc_set_nzvc(c, 0u, RC_W);

L_7094:
    /* 00007094   4  move.l (fffffff4,A5),-(A7) */
    c->pc = RC_ADDR(0x00007094u);
    rc_step(c, m, 24);
    t0 = rc_rd32(c, m, (c->a[5] - 0xcu));
    c->a[7] -= 4u;
    rc_wr32(c, m, c->a[7], t0);
    rc_set_nzvc(c, t0, RC_L);

L_7098:
    /* 00007098   4  jsr (00006634) */
    c->pc = RC_ADDR(0x00007098u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x0000709cu));
    rc_depth++;
    c->pc = RC_ADDR(0x00006634u);
    return;

L_709C:
    /* 0000709c   4  lea (20,A7),A7 */
    c->pc = RC_ADDR(0x0000709cu);
    rc_step(c, m, 8);
    c->a[7] = (c->a[7] + 0x20u);

L_70A0:
    /* 000070a0   4  jsr (000068d0) */
    c->pc = RC_ADDR(0x000070a0u);
    rc_step(c, m, 18);
    rc_push32(c, m, RC_ADDR(0x000070a4u));
    rc_depth++;
    c->pc = RC_ADDR(0x000068d0u);
    return;

L_70A4:
    /* 000070a4   2  unlk A5 */
    c->pc = RC_ADDR(0x000070a4u);
    rc_step(c, m, 12);
    c->a[7] = c->a[5];
    c->a[5] = rc_rd32(c, m, c->a[7]);
    c->a[7] += 4;

L_70A6:
    /* 000070a6   2  rts */
    c->pc = RC_ADDR(0x000070a6u);
    rc_step(c, m, 16);
    rc_ret(c, m);
    return;

}
